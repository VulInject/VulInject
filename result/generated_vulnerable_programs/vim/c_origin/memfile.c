



#include "vim.h"


#ifdef HAVE_ST_BLKSIZE
# define STATFS stat
# define F_BSIZE st_blksize
# define fstatfs(fd, buf, len, nul) mch_fstat((fd), (buf))
#else
# ifdef HAVE_SYS_STATFS_H
#  include <sys/statfs.h>
#  define STATFS statfs
#  define F_BSIZE f_bsize
# endif
#endif


#ifdef AMIGA
# ifdef FEAT_ARP
extern int dos2;			
# endif
# ifdef SASC
#  include <ios1.h>			
# endif
#endif

#define MEMFILE_PAGE_SIZE 4096		

static long_u	total_mem_used = 0;	

static void mf_ins_hash(memfile_T *, bhdr_T *);
static void mf_rem_hash(memfile_T *, bhdr_T *);
static bhdr_T *mf_find_hash(memfile_T *, blocknr_T);
static void mf_ins_used(memfile_T *, bhdr_T *);
static void mf_rem_used(memfile_T *, bhdr_T *);
static bhdr_T *mf_release(memfile_T *, int);
static bhdr_T *mf_alloc_bhdr(memfile_T *, int);
static void mf_free_bhdr(bhdr_T *);
static void mf_ins_free(memfile_T *, bhdr_T *);
static bhdr_T *mf_rem_free(memfile_T *);
static int  mf_read(memfile_T *, bhdr_T *);
static int  mf_write(memfile_T *, bhdr_T *);
static int  mf_write_block(memfile_T *mfp, bhdr_T *hp, off_T offset, unsigned size);
static int  mf_trans_add(memfile_T *, bhdr_T *);
static void mf_do_open(memfile_T *, char_u *, int);
static void mf_hash_init(mf_hashtab_T *);
static void mf_hash_free(mf_hashtab_T *);
static void mf_hash_free_all(mf_hashtab_T *);
static mf_hashitem_T *mf_hash_find(mf_hashtab_T *, blocknr_T);
static void mf_hash_add_item(mf_hashtab_T *, mf_hashitem_T *);
static void mf_hash_rem_item(mf_hashtab_T *, mf_hashitem_T *);
static int mf_hash_grow(mf_hashtab_T *);




    memfile_T *
mf_open(char_u *fname, int flags)
{
    memfile_T		*mfp;
    off_T		size;
#if defined(STATFS) && defined(UNIX) && !defined(__QNX__) && !defined(__minix)
# define USE_FSTATFS
    struct STATFS	stf;
#endif

    if ((mfp = ALLOC_ONE(memfile_T)) == NULL)
	return NULL;

    if (fname == NULL)	    
    {
	mfp->mf_fname = NULL;
	mfp->mf_ffname = NULL;
	mfp->mf_fd = -1;
    }
    else
    {
	mf_do_open(mfp, fname, flags);	

	
	if (mfp->mf_fd < 0)
	{
	    vim_free(mfp);
	    return NULL;
	}
    }

    mfp->mf_free_first = NULL;		
    mfp->mf_used_first = NULL;		
    mfp->mf_used_last = NULL;
    mfp->mf_dirty = MF_DIRTY_NO;
    mfp->mf_used_count = 0;
    mf_hash_init(&mfp->mf_hash);
    mf_hash_init(&mfp->mf_trans);
    mfp->mf_page_size = MEMFILE_PAGE_SIZE;
#ifdef FEAT_CRYPT
    mfp->mf_old_key = NULL;
#endif

#ifdef USE_FSTATFS
    
    if (mfp->mf_fd >= 0
	    && fstatfs(mfp->mf_fd, &stf, sizeof(struct statfs), 0) == 0
	    && stf.F_BSIZE >= MIN_SWAP_PAGE_SIZE
	    && stf.F_BSIZE <= MAX_SWAP_PAGE_SIZE)
	mfp->mf_page_size = stf.F_BSIZE;
#endif

    if (mfp->mf_fd < 0 || (flags & (O_TRUNC|O_EXCL))
		  || (size = vim_lseek(mfp->mf_fd, (off_T)0L, SEEK_END)) <= 0)
	mfp->mf_blocknr_max = 0;	
    else
	mfp->mf_blocknr_max = (blocknr_T)((size + mfp->mf_page_size - 1)
							 / mfp->mf_page_size);
    mfp->mf_blocknr_min = -1;
    mfp->mf_neg_count = 0;
    mfp->mf_infile_count = mfp->mf_blocknr_max;

    
    {
	int	    shift = 10;
	unsigned    page_size = mfp->mf_page_size;

	while (shift > 0 && (page_size & 1) == 0)
	{
	    page_size = page_size >> 1;
	    --shift;
	}
	mfp->mf_used_count_max = (p_mm << shift) / page_size;
	if (mfp->mf_used_count_max < 10)
	    mfp->mf_used_count_max = 10;
    }

    return mfp;
}


    int
mf_open_file(memfile_T *mfp, char_u *fname)
{
    mf_do_open(mfp, fname, O_RDWR|O_CREAT|O_EXCL); 

    if (mfp->mf_fd < 0)
	return FAIL;

    mfp->mf_dirty = MF_DIRTY_YES;
    return OK;
}


    void
mf_close(memfile_T *mfp, int del_file)
{
    bhdr_T	*hp, *nextp;

    if (mfp == NULL)		    
	return;
    if (mfp->mf_fd >= 0)
    {
	if (close(mfp->mf_fd) < 0)
	    emsg(_(e_close_error_on_swap_file));
    }
    if (del_file && mfp->mf_fname != NULL)
	mch_remove(mfp->mf_fname);
					    
    for (hp = mfp->mf_used_first; hp != NULL; hp = nextp)
    {
	total_mem_used -= (long_u)hp->bh_page_count * mfp->mf_page_size;
	nextp = hp->bh_next;
	mf_free_bhdr(hp);
    }
    while (mfp->mf_free_first != NULL)	    
	vim_free(mf_rem_free(mfp));
    mf_hash_free(&mfp->mf_hash);
    mf_hash_free_all(&mfp->mf_trans);	    
    vim_free(mfp->mf_fname);
    vim_free(mfp->mf_ffname);
    vim_free(mfp);
}


    void
mf_close_file(
    buf_T	*buf,
    int		getlines)	
{
    memfile_T	*mfp;
    linenr_T	lnum;

    mfp = buf->b_ml.ml_mfp;
    if (mfp == NULL || mfp->mf_fd < 0)		
	return;

    if (getlines)
    {
	
	mf_dont_release = TRUE;
	for (lnum = 1; lnum <= buf->b_ml.ml_line_count; ++lnum)
	    (void)ml_get_buf(buf, lnum, FALSE);
	mf_dont_release = FALSE;
	
    }

    if (close(mfp->mf_fd) < 0)			
	emsg(_(e_close_error_on_swap_file));
    mfp->mf_fd = -1;

    if (mfp->mf_fname != NULL)
    {
	mch_remove(mfp->mf_fname);		
	VIM_CLEAR(mfp->mf_fname);
	VIM_CLEAR(mfp->mf_ffname);
    }
}


    void
mf_new_page_size(memfile_T *mfp, unsigned new_size)
{
    
    
    total_mem_used += new_size - mfp->mf_page_size;
    mfp->mf_page_size = new_size;
}


    bhdr_T *
mf_new(memfile_T *mfp, int negative, int page_count)
{
    bhdr_T	*hp;	
    bhdr_T	*freep;	
    char_u	*p;

    
    hp = mf_release(mfp, page_count);


    freep = mfp->mf_free_first;
    if (!negative && freep != NULL && freep->bh_page_count >= page_count)
    {
	
	if (freep->bh_page_count > page_count)
	{
	    if (hp == NULL && (hp = mf_alloc_bhdr(mfp, page_count)) == NULL)
		return NULL;
	    hp->bh_bnum = freep->bh_bnum;
	    freep->bh_bnum += page_count;
	    freep->bh_page_count -= page_count;
	}
	else if (hp == NULL)	    
	{
	    if ((p = alloc((size_t)mfp->mf_page_size * page_count)) == NULL)
		return NULL;
	    hp = mf_rem_free(mfp);
	    hp->bh_data = p;
	}
	else		    
	{
	    freep = mf_rem_free(mfp);
	    hp->bh_bnum = freep->bh_bnum;
	    vim_free(freep);
	}
    }
    else	
    {
	if (hp == NULL && (hp = mf_alloc_bhdr(mfp, page_count)) == NULL)
	    return NULL;
	if (negative)
	{
	    hp->bh_bnum = mfp->mf_blocknr_min--;
	    mfp->mf_neg_count++;
	}
	else
	{
	    hp->bh_bnum = mfp->mf_blocknr_max;
	    mfp->mf_blocknr_max += page_count;
	}
    }
    hp->bh_flags = BH_LOCKED | BH_DIRTY;	
    mfp->mf_dirty = MF_DIRTY_YES;
    hp->bh_page_count = page_count;
    mf_ins_used(mfp, hp);
    mf_ins_hash(mfp, hp);

    
    (void)vim_memset((char *)(hp->bh_data), 0,
				      (size_t)mfp->mf_page_size * page_count);

    return hp;
}


    bhdr_T *
mf_get(memfile_T *mfp, blocknr_T nr, int page_count)
{
    bhdr_T    *hp;
						
    if (nr >= mfp->mf_blocknr_max || nr <= mfp->mf_blocknr_min)
	return NULL;

    
    hp = mf_find_hash(mfp, nr);
    if (hp == NULL)	
    {
	if (nr < 0 || nr >= mfp->mf_infile_count)   
	    return NULL;

	

	
	hp = mf_release(mfp, page_count);
	if (hp == NULL && page_count > 0)
	    hp = mf_alloc_bhdr(mfp, page_count);
	if (hp == NULL)
	    return NULL;

	hp->bh_bnum = nr;
	hp->bh_flags = 0;
	hp->bh_page_count = page_count;
	if (mf_read(mfp, hp) == FAIL)	    
	{
	    mf_free_bhdr(hp);
	    return NULL;
	}
    }
    else
    {
	mf_rem_used(mfp, hp);	
	mf_rem_hash(mfp, hp);
    }

    hp->bh_flags |= BH_LOCKED;
    mf_ins_used(mfp, hp);	
    mf_ins_hash(mfp, hp);	

    return hp;
}


    void
mf_put(
    memfile_T	*mfp,
    bhdr_T	*hp,
    int		dirty,
    int		infile)
{
    int		flags;

    flags = hp->bh_flags;

    if ((flags & BH_LOCKED) == 0)
	iemsg(e_block_was_not_locked);
    flags &= ~BH_LOCKED;
    if (dirty)
    {
	flags |= BH_DIRTY;
	if (mfp->mf_dirty != MF_DIRTY_YES_NOSYNC)
	    mfp->mf_dirty = MF_DIRTY_YES;
    }
    hp->bh_flags = flags;
    if (infile)
	mf_trans_add(mfp, hp);	    
}


    void
mf_free(memfile_T *mfp, bhdr_T *hp)
{
    vim_free(hp->bh_data);	
    mf_rem_hash(mfp, hp);	
    mf_rem_used(mfp, hp);	
    if (hp->bh_bnum < 0)
    {
	vim_free(hp);		
	mfp->mf_neg_count--;
    }
    else
	mf_ins_free(mfp, hp);	
}


    int
mf_sync(memfile_T *mfp, int flags)
{
    int		status;
    bhdr_T	*hp;
    int		got_int_save = got_int;

    if (mfp->mf_fd < 0)
    {
	
	mfp->mf_dirty = MF_DIRTY_NO;
	return FAIL;
    }

    
    
    got_int = FALSE;

    
    status = OK;
    for (hp = mfp->mf_used_last; hp != NULL; hp = hp->bh_prev)
	if (((flags & MFS_ALL) || hp->bh_bnum >= 0)
		&& (hp->bh_flags & BH_DIRTY)
		&& (status == OK || (hp->bh_bnum >= 0
		    && hp->bh_bnum < mfp->mf_infile_count)))
	{
	    if ((flags & MFS_ZERO) && hp->bh_bnum != 0)
		continue;
	    if (mf_write(mfp, hp) == FAIL)
	    {
		if (status == FAIL)	
		    break;
		status = FAIL;
	    }
	    if (flags & MFS_STOP)
	    {
		
		if (ui_char_avail())
		    break;
	    }
	    else
		ui_breakcheck();
	    if (got_int)
		break;
	}

    
    if (hp == NULL || status == FAIL)
	mfp->mf_dirty = MF_DIRTY_NO;

    if ((flags & MFS_FLUSH) && *p_sws != NUL)
    {
#if defined(UNIX)
# ifdef HAVE_FSYNC
	
	if (STRCMP(p_sws, "fsync") == 0)
	{
	    if (vim_fsync(mfp->mf_fd))
		status = FAIL;
	}
	else
# endif
	    
	    
	    
# if defined(__OPENNT) || defined(__TANDEM) || defined(__VOS__)
	    fflush(NULL);
# else
	    sync();
# endif
#endif
#ifdef VMS
	if (STRCMP(p_sws, "fsync") == 0)
	{
	    if (vim_fsync(mfp->mf_fd))
		status = FAIL;
	}
#endif
#ifdef MSWIN
	if (_commit(mfp->mf_fd))
	    status = FAIL;
#endif
#ifdef AMIGA
# if defined(__AROS__) || defined(__amigaos4__)
	if (vim_fsync(mfp->mf_fd) != 0)
	    status = FAIL;
# else
	
#  ifdef FEAT_ARP
	if (dos2)
#  endif
#  ifdef SASC
	{
	    struct UFB *fp = chkufb(mfp->mf_fd);

	    if (fp != NULL)
		Flush(fp->ufbfh);
	}
#  else
#   if defined(_DCC) || defined(__GNUC__) || defined(__MORPHOS__)
	{
#    if defined(__GNUC__) && !defined(__MORPHOS__) && defined(__libnix__)
	    
	    
	    extern unsigned int fdtofh(int filedescriptor);
#    endif
#    if !defined(__libnix__)
	    fflush(NULL);
#    else
	    BPTR fh = (BPTR)fdtofh(mfp->mf_fd);

	    if (fh != 0)
		Flush(fh);
#    endif
	}
#   else 
	    Flush(_devtab[mfp->mf_fd].fd);
#   endif
#  endif
# endif
#endif 
    }

    got_int |= got_int_save;

    return status;
}


    void
mf_set_dirty(memfile_T *mfp)
{
    bhdr_T	*hp;

    for (hp = mfp->mf_used_last; hp != NULL; hp = hp->bh_prev)
	if (hp->bh_bnum > 0)
	    hp->bh_flags |= BH_DIRTY;
    mfp->mf_dirty = MF_DIRTY_YES;
}


    static void
mf_ins_hash(memfile_T *mfp, bhdr_T *hp)
{
    mf_hash_add_item(&mfp->mf_hash, (mf_hashitem_T *)hp);
}


    static void
mf_rem_hash(memfile_T *mfp, bhdr_T *hp)
{
    mf_hash_rem_item(&mfp->mf_hash, (mf_hashitem_T *)hp);
}


    static bhdr_T *
mf_find_hash(memfile_T *mfp, blocknr_T nr)
{
    return (bhdr_T *)mf_hash_find(&mfp->mf_hash, nr);
}


    static void
mf_ins_used(memfile_T *mfp, bhdr_T *hp)
{
    hp->bh_next = mfp->mf_used_first;
    mfp->mf_used_first = hp;
    hp->bh_prev = NULL;
    if (hp->bh_next == NULL)	    
	mfp->mf_used_last = hp;
    else
	hp->bh_next->bh_prev = hp;
    mfp->mf_used_count += hp->bh_page_count;
    total_mem_used += (long_u)hp->bh_page_count * mfp->mf_page_size;
}


    static void
mf_rem_used(memfile_T *mfp, bhdr_T *hp)
{
    if (hp->bh_next == NULL)	    
	mfp->mf_used_last = hp->bh_prev;
    else
	hp->bh_next->bh_prev = hp->bh_prev;
    if (hp->bh_prev == NULL)	    
	mfp->mf_used_first = hp->bh_next;
    else
	hp->bh_prev->bh_next = hp->bh_next;
    mfp->mf_used_count -= hp->bh_page_count;
    total_mem_used -= (long_u)hp->bh_page_count * mfp->mf_page_size;
}


    static bhdr_T *
mf_release(memfile_T *mfp, int page_count)
{
    bhdr_T	*hp;
    int		need_release;
    buf_T	*buf;

    
    if (mf_dont_release)
	return NULL;

    
    need_release = ((mfp->mf_used_count >= mfp->mf_used_count_max)
				  || (total_mem_used >> 10) >= (long_u)p_mmt);

    
    if (mfp->mf_fd < 0 && need_release && p_uc)
    {
	
	FOR_ALL_BUFFERS(buf)
	    if (buf->b_ml.ml_mfp == mfp)
		break;
	if (buf != NULL && buf->b_may_swap)
	    ml_open_file(buf);
    }

    
    if (mfp->mf_fd < 0 || !need_release)
	return NULL;

    for (hp = mfp->mf_used_last; hp != NULL; hp = hp->bh_prev)
	if (!(hp->bh_flags & BH_LOCKED))
	    break;
    if (hp == NULL)	
	return NULL;

    
    if ((hp->bh_flags & BH_DIRTY) && mf_write(mfp, hp) == FAIL)
	return NULL;

    mf_rem_used(mfp, hp);
    mf_rem_hash(mfp, hp);

    
    if (hp->bh_page_count != page_count)
    {
	VIM_CLEAR(hp->bh_data);
	if (page_count > 0)
	    hp->bh_data = alloc((size_t)mfp->mf_page_size * page_count);
	if (hp->bh_data == NULL)
	{
	    vim_free(hp);
	    return NULL;
	}
	hp->bh_page_count = page_count;
    }
    return hp;
}


    int
mf_release_all(void)
{
    buf_T	*buf;
    memfile_T	*mfp;
    bhdr_T	*hp;
    int		retval = FALSE;

    FOR_ALL_BUFFERS(buf)
    {
	mfp = buf->b_ml.ml_mfp;
	if (mfp != NULL)
	{
	    
	    if (mfp->mf_fd < 0 && buf->b_may_swap)
		ml_open_file(buf);

	    
	    if (mfp->mf_fd >= 0)
	    {
		for (hp = mfp->mf_used_last; hp != NULL; )
		{
		    if (!(hp->bh_flags & BH_LOCKED)
			    && (!(hp->bh_flags & BH_DIRTY)
				|| mf_write(mfp, hp) != FAIL))
		    {
			mf_rem_used(mfp, hp);
			mf_rem_hash(mfp, hp);
			mf_free_bhdr(hp);
			hp = mfp->mf_used_last;	
			retval = TRUE;
		    }
		    else
			hp = hp->bh_prev;
		}
	    }
	}
    }
    return retval;
}


    static bhdr_T *
mf_alloc_bhdr(memfile_T *mfp, int page_count)
{
    bhdr_T	*hp;

    if ((hp = ALLOC_ONE(bhdr_T)) == NULL)
	return NULL;

    if ((hp->bh_data = alloc((size_t)mfp->mf_page_size * page_count)) == NULL)
    {
	vim_free(hp);	    
	return NULL;
    }
    hp->bh_page_count = page_count;
    return hp;
}


    static void
mf_free_bhdr(bhdr_T *hp)
{
    vim_free(hp->bh_data);
    vim_free(hp);
}


    static void
mf_ins_free(memfile_T *mfp, bhdr_T *hp)
{
    hp->bh_next = mfp->mf_free_first;
    mfp->mf_free_first = hp;
}


    static bhdr_T *
mf_rem_free(memfile_T *mfp)
{
    bhdr_T	*hp;

    hp = mfp->mf_free_first;
    mfp->mf_free_first = hp->bh_next;
    return hp;
}


    static int
mf_read(memfile_T *mfp, bhdr_T *hp)
{
    off_T	offset;
    unsigned	page_size;
    unsigned	size;

    if (mfp->mf_fd < 0)	    
	return FAIL;

    page_size = mfp->mf_page_size;
    offset = (off_T)page_size * hp->bh_bnum;
    size = page_size * hp->bh_page_count;
    if (vim_lseek(mfp->mf_fd, offset, SEEK_SET) != offset)
    {
	PERROR(_(e_seek_error_in_swap_file_read));
	return FAIL;
    }
    if ((unsigned)read_eintr(mfp->mf_fd, hp->bh_data, size) != size)
    {
	PERROR(_(e_read_error_in_swap_file));
	return FAIL;
    }

#ifdef FEAT_CRYPT
    
    
    if (*mfp->mf_buffer->b_p_key != NUL || mfp->mf_old_key != NULL)
	ml_decrypt_data(mfp, hp->bh_data, offset, size);
#endif

    return OK;
}


    static int
mf_write(memfile_T *mfp, bhdr_T *hp)
{
    off_T	offset;	    
    blocknr_T	nr;	    
    bhdr_T	*hp2;
    unsigned	page_size;  
    unsigned	page_count; 
    unsigned	size;	    

    if (mfp->mf_fd < 0 && !mfp->mf_reopen)
	
	return FAIL;

    if (hp->bh_bnum < 0)	
	if (mf_trans_add(mfp, hp) == FAIL)
	    return FAIL;

    page_size = mfp->mf_page_size;

    
    for (;;)
    {
	int attempt;

	nr = hp->bh_bnum;
	if (nr > mfp->mf_infile_count)		
	{
	    nr = mfp->mf_infile_count;
	    hp2 = mf_find_hash(mfp, nr);	
	}
	else
	    hp2 = hp;

	offset = (off_T)page_size * nr;
	if (hp2 == NULL)	    
	    page_count = 1;
	else
	    page_count = hp2->bh_page_count;
	size = page_size * page_count;

	for (attempt = 1; attempt <= 2; ++attempt)
	{
	    if (mfp->mf_fd >= 0)
	    {
		if (vim_lseek(mfp->mf_fd, offset, SEEK_SET) != offset)
		{
		    PERROR(_(e_seek_error_in_swap_file_write));
		    return FAIL;
		}
		if (mf_write_block(mfp,
				   hp2 == NULL ? hp : hp2, offset, size) == OK)
		    break;
	    }

	    if (attempt == 1)
	    {
		
		
		
		if (mfp->mf_fd >= 0)
		    close(mfp->mf_fd);
		mfp->mf_fd = mch_open_rw((char *)mfp->mf_fname, mfp->mf_flags);
		mfp->mf_reopen = (mfp->mf_fd < 0);
	    }
	    if (attempt == 2 || mfp->mf_fd < 0)
	    {
		
		
		
		
		if (!did_swapwrite_msg)
		    emsg(_(e_write_error_in_swap_file));
		did_swapwrite_msg = TRUE;
		return FAIL;
	    }
	}

	did_swapwrite_msg = FALSE;
	if (hp2 != NULL)		    
	    hp2->bh_flags &= ~BH_DIRTY;
					    
	if (nr + (blocknr_T)page_count > mfp->mf_infile_count)
	    mfp->mf_infile_count = nr + page_count;
	if (nr == hp->bh_bnum)		    
	    break;
    }
    return OK;
}


    static int
mf_write_block(
    memfile_T	*mfp,
    bhdr_T	*hp,
    off_T	offset UNUSED,
    unsigned	size)
{
    char_u	*data = hp->bh_data;
    int		result = OK;

#ifdef FEAT_CRYPT
    
    if (*mfp->mf_buffer->b_p_key != NUL)
    {
	data = ml_encrypt_data(mfp, data, offset, size);
	if (data == NULL)
	    return FAIL;
    }
#endif

    if ((unsigned)write_eintr(mfp->mf_fd, data, size) != size)
	result = FAIL;

#ifdef FEAT_CRYPT
    if (data != hp->bh_data)
	vim_free(data);
#endif

    return result;
}


    static int
mf_trans_add(memfile_T *mfp, bhdr_T *hp)
{
    bhdr_T	*freep;
    blocknr_T	new_bnum;
    NR_TRANS	*np;
    int		page_count;

    if (hp->bh_bnum >= 0)		    
	return OK;

    if ((np = ALLOC_ONE(NR_TRANS)) == NULL)
	return FAIL;


    freep = mfp->mf_free_first;
    page_count = hp->bh_page_count;
    if (freep != NULL && freep->bh_page_count >= page_count)
    {
	new_bnum = freep->bh_bnum;
	
	if (freep->bh_page_count > page_count)
	{
	    freep->bh_bnum += page_count;
	    freep->bh_page_count -= page_count;
	}
	else
	{
	    freep = mf_rem_free(mfp);
	    vim_free(freep);
	}
    }
    else
    {
	new_bnum = mfp->mf_blocknr_max;
	mfp->mf_blocknr_max += page_count;
    }

    np->nt_old_bnum = hp->bh_bnum;	    
    np->nt_new_bnum = new_bnum;

    mf_rem_hash(mfp, hp);		    
    hp->bh_bnum = new_bnum;
    mf_ins_hash(mfp, hp);		    

    
    mf_hash_add_item(&mfp->mf_trans, (mf_hashitem_T *)np);

    return OK;
}


    blocknr_T
mf_trans_del(memfile_T *mfp, blocknr_T old_nr)
{
    NR_TRANS	*np;
    blocknr_T	new_bnum;

    np = (NR_TRANS *)mf_hash_find(&mfp->mf_trans, old_nr);

    if (np == NULL)		
	return old_nr;

    mfp->mf_neg_count--;
    new_bnum = np->nt_new_bnum;

    
    mf_hash_rem_item(&mfp->mf_trans, (mf_hashitem_T *)np);

    vim_free(np);

    return new_bnum;
}


    void
mf_set_ffname(memfile_T *mfp)
{
    mfp->mf_ffname = FullName_save(mfp->mf_fname, FALSE);
}


    void
mf_fullname(memfile_T *mfp)
{
    if (mfp == NULL || mfp->mf_fname == NULL || mfp->mf_ffname == NULL)
	return;

    vim_free(mfp->mf_fname);
    mfp->mf_fname = mfp->mf_ffname;
    mfp->mf_ffname = NULL;
}


    int
mf_need_trans(memfile_T *mfp)
{
    return (mfp->mf_fname != NULL && mfp->mf_neg_count > 0);
}


    static void
mf_do_open(
    memfile_T	*mfp,
    char_u	*fname,
    int		flags)		
{
#ifdef HAVE_LSTAT
    stat_T	sb;
#endif

    mfp->mf_fname = fname;

    
    mf_set_ffname(mfp);
#if defined(MSWIN)
    
    mf_fullname(mfp);
#endif

#ifdef HAVE_LSTAT
    
    if ((flags & O_CREAT) && mch_lstat((char *)mfp->mf_fname, &sb) >= 0)
    {
	mfp->mf_fd = -1;
	emsg(_(e_swap_file_already_exists_symlink_attack));
    }
    else
#endif
    {
	
	flags |= O_EXTRA | O_NOFOLLOW;
#ifdef MSWIN
	
	
	
	flags |= O_NOINHERIT;
#endif
	mfp->mf_flags = flags;
	mfp->mf_fd = mch_open_rw((char *)mfp->mf_fname, flags);
    }

    
    if (mfp->mf_fd < 0)
    {
	VIM_CLEAR(mfp->mf_fname);
	VIM_CLEAR(mfp->mf_ffname);
    }
    else
    {
#ifdef HAVE_FD_CLOEXEC
	int fdflags = fcntl(mfp->mf_fd, F_GETFD);
	if (fdflags >= 0 && (fdflags & FD_CLOEXEC) == 0)
	    (void)fcntl(mfp->mf_fd, F_SETFD, fdflags | FD_CLOEXEC);
#endif
#if defined(HAVE_SELINUX) || defined(HAVE_SMACK)
	mch_copy_sec(fname, mfp->mf_fname);
#endif
	mch_hide(mfp->mf_fname);    
    }
}




#define MHT_LOG_LOAD_FACTOR 6
#define MHT_GROWTH_FACTOR   2   


    static void
mf_hash_init(mf_hashtab_T *mht)
{
    CLEAR_POINTER(mht);
    mht->mht_buckets = mht->mht_small_buckets;
    mht->mht_mask = MHT_INIT_SIZE - 1;
}


    static void
mf_hash_free(mf_hashtab_T *mht)
{
    if (mht->mht_buckets != mht->mht_small_buckets)
	vim_free(mht->mht_buckets);
}


    static void
mf_hash_free_all(mf_hashtab_T *mht)
{
    long_u	    idx;
    mf_hashitem_T   *mhi;
    mf_hashitem_T   *next;

    for (idx = 0; idx <= mht->mht_mask; idx++)
	for (mhi = mht->mht_buckets[idx]; mhi != NULL; mhi = next)
	{
	    next = mhi->mhi_next;
	    vim_free(mhi);
	}

    mf_hash_free(mht);
}


    static mf_hashitem_T *
mf_hash_find(mf_hashtab_T *mht, blocknr_T key)
{
    mf_hashitem_T   *mhi;

    mhi = mht->mht_buckets[key & mht->mht_mask];
    while (mhi != NULL && mhi->mhi_key != key)
	mhi = mhi->mhi_next;

    return mhi;
}


    static void
mf_hash_add_item(mf_hashtab_T *mht, mf_hashitem_T *mhi)
{
    long_u	    idx;

    idx = mhi->mhi_key & mht->mht_mask;
    mhi->mhi_next = mht->mht_buckets[idx];
    mhi->mhi_prev = NULL;
    if (mhi->mhi_next != NULL)
	mhi->mhi_next->mhi_prev = mhi;
    mht->mht_buckets[idx] = mhi;

    mht->mht_count++;

    
    if (mht->mht_fixed == 0
	&& (mht->mht_count >> MHT_LOG_LOAD_FACTOR) > mht->mht_mask)
    {
	if (mf_hash_grow(mht) == FAIL)
	{
	    
	    mht->mht_fixed = 1;
	}
    }
}


    static void
mf_hash_rem_item(mf_hashtab_T *mht, mf_hashitem_T *mhi)
{
    if (mhi->mhi_prev == NULL)
	mht->mht_buckets[mhi->mhi_key & mht->mht_mask] = mhi->mhi_next;
    else
	mhi->mhi_prev->mhi_next = mhi->mhi_next;

    if (mhi->mhi_next != NULL)
	mhi->mhi_next->mhi_prev = mhi->mhi_prev;

    mht->mht_count--;

    
    
}


    static int
mf_hash_grow(mf_hashtab_T *mht)
{
    long_u	    i, j;
    int		    shift;
    mf_hashitem_T   *mhi;
    mf_hashitem_T   *tails[MHT_GROWTH_FACTOR];
    mf_hashitem_T   **buckets;
    size_t	    size;

    size = (mht->mht_mask + 1) * MHT_GROWTH_FACTOR * sizeof(void *);
    buckets = lalloc_clear(size, FALSE);
    if (buckets == NULL)
	return FAIL;

    shift = 0;
    while ((mht->mht_mask >> shift) != 0)
	shift++;

    for (i = 0; i <= mht->mht_mask; i++)
    {
	

	CLEAR_FIELD(tails);

	for (mhi = mht->mht_buckets[i]; mhi != NULL; mhi = mhi->mhi_next)
	{
	    j = (mhi->mhi_key >> shift) & (MHT_GROWTH_FACTOR - 1);
	    if (tails[j] == NULL)
	    {
		buckets[i + (j << shift)] = mhi;
		tails[j] = mhi;
		mhi->mhi_prev = NULL;
	    }
	    else
	    {
		tails[j]->mhi_next = mhi;
		mhi->mhi_prev = tails[j];
		tails[j] = mhi;
	    }
	}

	for (j = 0; j < MHT_GROWTH_FACTOR; j++)
	    if (tails[j] != NULL)
		tails[j]->mhi_next = NULL;
    }

    if (mht->mht_buckets != mht->mht_small_buckets)
	vim_free(mht->mht_buckets);

    mht->mht_buckets = buckets;
    mht->mht_mask = (mht->mht_mask + 1) * MHT_GROWTH_FACTOR - 1;

    return OK;
}
