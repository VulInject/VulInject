



#include "vim.h"



#if defined(MEM_PROFILE) || defined(PROTO)

# define MEM_SIZES  8200
static long_u mem_allocs[MEM_SIZES];
static long_u mem_frees[MEM_SIZES];
static long_u mem_allocated;
static long_u mem_freed;
static long_u mem_peak;
static long_u num_alloc;
static long_u num_freed;

    static void
mem_pre_alloc_s(size_t *sizep)
{
    *sizep += sizeof(size_t);
}

    static void
mem_pre_alloc_l(size_t *sizep)
{
    *sizep += sizeof(size_t);
}

    static void
mem_post_alloc(
    void **pp,
    size_t size)
{
    if (*pp == NULL)
	return;
    size -= sizeof(size_t);
    *(long_u *)*pp = size;
    if (size <= MEM_SIZES-1)
	mem_allocs[size-1]++;
    else
	mem_allocs[MEM_SIZES-1]++;
    mem_allocated += size;
    if (mem_allocated - mem_freed > mem_peak)
	mem_peak = mem_allocated - mem_freed;
    num_alloc++;
    *pp = (void *)((char *)*pp + sizeof(size_t));
}

    static void
mem_pre_free(void **pp)
{
    long_u size;

    *pp = (void *)((char *)*pp - sizeof(size_t));
    size = *(size_t *)*pp;
    if (size <= MEM_SIZES-1)
	mem_frees[size-1]++;
    else
	mem_frees[MEM_SIZES-1]++;
    mem_freed += size;
    num_freed++;
}


    void
vim_mem_profile_dump(void)
{
    int i, j;

    printf("\r\n");
    j = 0;
    for (i = 0; i < MEM_SIZES - 1; i++)
    {
	if (mem_allocs[i] == 0 && mem_frees[i] == 0)
	    continue;

	if (mem_frees[i] > mem_allocs[i])
	    printf("\r\n%s", _("ERROR: "));
	printf("[%4d / %4lu-%-4lu] ", i + 1, mem_allocs[i], mem_frees[i]);
	j++;
	if (j > 3)
	{
	    j = 0;
	    printf("\r\n");
	}
    }

    i = MEM_SIZES - 1;
    if (mem_allocs[i])
    {
	printf("\r\n");
	if (mem_frees[i] > mem_allocs[i])
	    puts(_("ERROR: "));
	printf("[>%d / %4lu-%-4lu]", i, mem_allocs[i], mem_frees[i]);
    }

    printf(_("\n[bytes] total alloc-freed %lu-%lu, in use %lu, peak use %lu\n"),
	    mem_allocated, mem_freed, mem_allocated - mem_freed, mem_peak);
    printf(_("[calls] total re/malloc()'s %lu, total free()'s %lu\n\n"),
	    num_alloc, num_freed);
}

#endif 

#ifdef FEAT_EVAL
    int
alloc_does_fail(size_t size)
{
    if (alloc_fail_countdown == 0)
    {
	if (--alloc_fail_repeat <= 0)
	    alloc_fail_id = 0;
	do_outofmem_msg(size);
	return TRUE;
    }
    --alloc_fail_countdown;
    return FALSE;
}
#endif


#define KEEP_ROOM (2 * 8192L)
#define KEEP_ROOM_KB (KEEP_ROOM / 1024L)


    void *
alloc(size_t size)
{
    return lalloc(size, TRUE);
}

#if defined(FEAT_QUICKFIX) || defined(PROTO)

    void *
alloc_id(size_t size, alloc_id_T id UNUSED)
{
# ifdef FEAT_EVAL
    if (alloc_fail_id == id && alloc_does_fail(size))
	return NULL;
# endif
    return lalloc(size, TRUE);
}
#endif


    void *
alloc_clear(size_t size)
{
    void *p;

    p = lalloc(size, TRUE);
    if (p != NULL)
	(void)vim_memset(p, 0, size);
    return p;
}


    void *
alloc_clear_id(size_t size, alloc_id_T id UNUSED)
{
#ifdef FEAT_EVAL
    if (alloc_fail_id == id && alloc_does_fail(size))
	return NULL;
#endif
    return alloc_clear(size);
}


    void *
lalloc_clear(size_t size, int message)
{
    void *p;

    p = lalloc(size, message);
    if (p != NULL)
	(void)vim_memset(p, 0, size);
    return p;
}


    void *
lalloc(size_t size, int message)
{
    void	*p;		    
    static int	releasing = FALSE;  
    int		try_again;
#if defined(HAVE_AVAIL_MEM)
    static size_t allocated = 0;    
#endif

    
    if (size == 0)
    {
	
	emsg_silent = 0;
	iemsg(e_internal_error_lalloc_zero);
	return NULL;
    }

#ifdef MEM_PROFILE
    mem_pre_alloc_l(&size);
#endif

    
    
    for (;;)
    {
	
	
	
	
	
	if ((p = malloc(size)) != NULL)
	{
#ifndef HAVE_AVAIL_MEM
	    
	    goto theend;
#else
	    
	    
	    allocated += size;
	    if (allocated < KEEP_ROOM / 2)
		goto theend;
	    allocated = 0;

	    
	    if (mch_avail_mem(TRUE) < KEEP_ROOM_KB && !releasing)
	    {
		free(p);	
		p = NULL;
	    }
	    else
		goto theend;
#endif
	}
	
	
	if (releasing)
	    break;
	releasing = TRUE;

	clear_sb_text(TRUE);	      
	try_again = mf_release_all(); 

	releasing = FALSE;
	if (!try_again)
	    break;
    }

    if (message && p == NULL)
	do_outofmem_msg(size);

theend:
#ifdef MEM_PROFILE
    mem_post_alloc(&p, size);
#endif
    return p;
}


#if defined(FEAT_SIGNS) || defined(PROTO)
    void *
lalloc_id(size_t size, int message, alloc_id_T id UNUSED)
{
#ifdef FEAT_EVAL
    if (alloc_fail_id == id && alloc_does_fail(size))
	return NULL;
#endif
    return (lalloc(size, message));
}
#endif

#if defined(MEM_PROFILE) || defined(PROTO)

    void *
mem_realloc(void *ptr, size_t size)
{
    void *p;

    mem_pre_free(&ptr);
    mem_pre_alloc_s(&size);

    p = realloc(ptr, size);

    mem_post_alloc(&p, size);

    return p;
}
#endif


    void
do_outofmem_msg(size_t size)
{
    if (did_outofmem_msg)
	return;

    
    emsg_silent = 0;

    
    
    did_outofmem_msg = TRUE;

    semsg(_(e_out_of_memory_allocating_nr_bytes), (long_u)size);

    if (starting == NO_SCREEN)
	
	
	mch_exit(123);
}

#if defined(EXITFREE) || defined(PROTO)


    void
free_all_mem(void)
{
    buf_T	*buf, *nextbuf;

    
    
    if (entered_free_all_mem)
	return;
    entered_free_all_mem = TRUE;
    
    block_autocmds();

    
    p_ea = FALSE;
    if (first_tabpage != NULL && first_tabpage->tp_next != NULL)
	do_cmdline_cmd((char_u *)"tabonly!");
    if (!ONE_WINDOW)
	do_cmdline_cmd((char_u *)"only!");

# if defined(FEAT_SPELL)
    
    spell_free_all();
# endif

# if defined(FEAT_BEVAL_TERM)
    ui_remove_balloon();
# endif
# ifdef FEAT_PROP_POPUP
    if (curwin != NULL)
	close_all_popups(TRUE);
# endif

    
    ex_comclear(NULL);

    
    
    if (curbuf != NULL)
    {
# ifdef FEAT_MENU
	
	do_cmdline_cmd((char_u *)"aunmenu *");
	do_cmdline_cmd((char_u *)"tlunmenu *");
#  ifdef FEAT_MULTI_LANG
	do_cmdline_cmd((char_u *)"menutranslate clear");
#  endif
# endif
	
	do_cmdline_cmd((char_u *)"lmapclear");
	do_cmdline_cmd((char_u *)"xmapclear");
	do_cmdline_cmd((char_u *)"mapclear");
	do_cmdline_cmd((char_u *)"mapclear!");
	do_cmdline_cmd((char_u *)"abclear");
# if defined(FEAT_EVAL)
	do_cmdline_cmd((char_u *)"breakdel *");
# endif
# if defined(FEAT_PROFILE)
	do_cmdline_cmd((char_u *)"profdel *");
# endif
# if defined(FEAT_KEYMAP)
	do_cmdline_cmd((char_u *)"set keymap=");
# endif
    }

    free_titles();
    free_findfile();

    
    free_all_autocmds();
    clear_termcodes();
    free_all_marks();
    alist_clear(&global_alist);
    free_homedir();
    free_users();
    free_search_patterns();
    free_old_sub();
    free_last_insert();
    free_insexpand_stuff();
    free_prev_shellcmd();
    free_regexp_stuff();
    free_tag_stuff();
    free_xim_stuff();
    free_cd_dir();
# ifdef FEAT_SIGNS
    free_signs();
# endif
# ifdef FEAT_EVAL
    set_expr_line(NULL, NULL);
# endif
# ifdef FEAT_DIFF
    if (curtab != NULL)
	diff_clear(curtab);
# endif
    clear_sb_text(TRUE);	      

    
    free_username();
# ifdef FEAT_CLIPBOARD
    vim_regfree(clip_exclude_prog);
# endif
    vim_free(last_cmdline);
    vim_free(new_last_cmdline);
    set_keep_msg(NULL, 0);

    
    p_hi = 0;
    init_history();
# ifdef FEAT_PROP_POPUP
    clear_global_prop_types();
# endif

# ifdef FEAT_QUICKFIX
    free_quickfix();
# endif

    
    close_all_scripts();

    if (curwin != NULL)
	
	win_free_all();

    
    free_all_options();

    
    
# ifdef FEAT_AUTOCHDIR
    p_acd = FALSE;
# endif
    for (buf = firstbuf; buf != NULL; )
    {
	bufref_T    bufref;

	set_bufref(&bufref, buf);
	nextbuf = buf->b_next;
	close_buffer(NULL, buf, DOBUF_WIPE, FALSE, FALSE);
	if (bufref_valid(&bufref))
	    buf = nextbuf;	
	else
	    buf = firstbuf;
    }

# ifdef FEAT_ARABIC
    free_arshape_buf();
# endif

    
    clear_registers();
    ResetRedobuff();
    ResetRedobuff();

# if defined(FEAT_CLIENTSERVER) && defined(FEAT_X11)
    vim_free(serverDelayedStartName);
# endif

    
    free_highlight();

    reset_last_sourcing();

    if (first_tabpage != NULL)
    {
	free_tabpage(first_tabpage);
	first_tabpage = NULL;
    }

# ifdef UNIX
    
    mch_free_mem();
# endif

    
    for (;;)
	if (delete_first_msg() == FAIL)
	    break;

# ifdef FEAT_JOB_CHANNEL
    channel_free_all();
# endif
# ifdef FEAT_TIMERS
    timer_free_all();
# endif
# ifdef FEAT_EVAL
    
    eval_clear();
# endif
# ifdef FEAT_JOB_CHANNEL
    
    job_free_all();
# endif

    free_termoptions();
    free_cur_term();

    
    free_screenlines();

# if defined(FEAT_SOUND)
    sound_free();
# endif
# if defined(USE_XSMP)
    xsmp_close();
# endif
# ifdef FEAT_GUI_GTK
    gui_mch_free_all();
# endif
# ifdef FEAT_TCL
    vim_tcl_finalize();
# endif
    clear_hl_tables();

    vim_free(IObuff);
    vim_free(NameBuff);
# ifdef FEAT_QUICKFIX
    check_quickfix_busy();
# endif
# ifdef FEAT_EVAL
    free_resub_eval_result();
# endif
    free_vbuf();
}
#endif


    char_u *
vim_memsave(char_u *p, size_t len)
{
    char_u *ret = alloc(len);

    if (ret != NULL)
	mch_memmove(ret, p, len);
    return ret;
}


    void
vim_free(void *x)
{
    if (x != NULL && !really_exiting)
    {
#ifdef MEM_PROFILE
	mem_pre_free(&x);
#endif
	free(x);
    }
}




    void
ga_clear(garray_T *gap)
{
    vim_free(gap->ga_data);
    ga_init(gap);
}


    void
ga_clear_strings(garray_T *gap)
{
    int		i;

    if (gap->ga_data != NULL)
	for (i = 0; i < gap->ga_len; ++i)
	    vim_free(((char_u **)(gap->ga_data))[i]);
    ga_clear(gap);
}

#if defined(FEAT_EVAL) || defined(PROTO)

    int
ga_copy_strings(garray_T *from, garray_T *to)
{
    int		i;

    ga_init2(to, sizeof(char_u *), 1);
    if (ga_grow(to, from->ga_len) == FAIL)
	return FAIL;

    for (i = 0; i < from->ga_len; ++i)
    {
	char_u *orig = ((char_u **)from->ga_data)[i];
	char_u *copy;

	if (orig == NULL)
	    copy = NULL;
	else
	{
	    copy = vim_strsave(orig);
	    if (copy == NULL)
	    {
		to->ga_len = i;
		ga_clear_strings(to);
		return FAIL;
	    }
	}
	((char_u **)to->ga_data)[i] = copy;
    }
    to->ga_len = from->ga_len;
    return OK;
}
#endif


    void
ga_init(garray_T *gap)
{
    gap->ga_data = NULL;
    gap->ga_maxlen = 0;
    gap->ga_len = 0;
}

    void
ga_init2(garray_T *gap, size_t itemsize, int growsize)
{
    ga_init(gap);
    gap->ga_itemsize = (int)itemsize;
    gap->ga_growsize = growsize;
}


    int
ga_grow(garray_T *gap, int n)
{
    if (gap->ga_maxlen - gap->ga_len < n)
	return ga_grow_inner(gap, n);
    return OK;
}


    int
ga_grow_id(garray_T *gap, int n, alloc_id_T id UNUSED)
{
#ifdef FEAT_EVAL
    if (alloc_fail_id == id && alloc_does_fail(sizeof(list_T)))
	return FAIL;
#endif

    return ga_grow(gap, n);
}

    int
ga_grow_inner(garray_T *gap, int n)
{
    size_t	old_len;
    size_t	new_len;
    char_u	*pp;

    if (n < gap->ga_growsize)
	n = gap->ga_growsize;

    
    
    
    if (n < gap->ga_len / 2)
	n = gap->ga_len / 2;

    new_len = (size_t)gap->ga_itemsize * (gap->ga_len + n);
    pp = vim_realloc(gap->ga_data, new_len);
    if (pp == NULL)
	return FAIL;
    old_len = (size_t)gap->ga_itemsize * gap->ga_maxlen;
    vim_memset(pp + old_len, 0, new_len - old_len);
    gap->ga_maxlen = gap->ga_len + n;
    gap->ga_data = pp;
    return OK;
}


    char_u *
ga_concat_strings(garray_T *gap, char *sep)
{
    int		i;
    int		len = 0;
    int		sep_len = (int)STRLEN(sep);
    char_u	*s;
    char_u	*p;

    for (i = 0; i < gap->ga_len; ++i)
	len += (int)STRLEN(((char_u **)(gap->ga_data))[i]) + sep_len;

    s = alloc(len + 1);
    if (s == NULL)
	return NULL;

    *s = NUL;
    p = s;
    for (i = 0; i < gap->ga_len; ++i)
    {
	if (p != s)
	{
	    STRCPY(p, sep);
	    p += sep_len;
	}
	STRCPY(p, ((char_u **)(gap->ga_data))[i]);
	p += STRLEN(p);
    }
    return s;
}


    int
ga_copy_string(garray_T *gap, char_u *p)
{
    char_u *cp = vim_strsave(p);

    if (cp == NULL)
	return FAIL;

    if (ga_grow(gap, 1) == FAIL)
    {
	vim_free(cp);
	return FAIL;
    }
    ((char_u **)(gap->ga_data))[gap->ga_len++] = cp;
    return OK;
}


    int
ga_add_string(garray_T *gap, char_u *p)
{
    if (ga_grow(gap, 1) == FAIL)
	return FAIL;
    ((char_u **)(gap->ga_data))[gap->ga_len++] = p;
    return OK;
}


    void
ga_concat(garray_T *gap, char_u *s)
{
    int    len;

    if (s == NULL || *s == NUL)
	return;
    len = (int)STRLEN(s);
    if (ga_grow(gap, len) == OK)
    {
	mch_memmove((char *)gap->ga_data + gap->ga_len, s, (size_t)len);
	gap->ga_len += len;
    }
}


    void
ga_concat_len(garray_T *gap, char_u *s, size_t len)
{
    if (s == NULL || *s == NUL || len == 0)
	return;
    if (ga_grow(gap, (int)len) == OK)
    {
	mch_memmove((char *)gap->ga_data + gap->ga_len, s, len);
	gap->ga_len += (int)len;
    }
}


    int
ga_append(garray_T *gap, int c)
{
    if (ga_grow(gap, 1) == FAIL)
	return FAIL;
    *((char *)gap->ga_data + gap->ga_len) = c;
    ++gap->ga_len;
    return OK;
}

#if (defined(UNIX) && !defined(USE_SYSTEM)) || defined(MSWIN) \
	|| defined(PROTO)

    void
append_ga_line(garray_T *gap)
{
    
    if (gap->ga_len > 0
	    && !curbuf->b_p_bin
	    && ((char_u *)gap->ga_data)[gap->ga_len - 1] == CAR)
	--gap->ga_len;
    ga_append(gap, NUL);
    ml_append(curwin->w_cursor.lnum++, gap->ga_data, 0, FALSE);
    gap->ga_len = 0;
}
#endif

