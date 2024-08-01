



#include "vim.h"



#define MINIMAL_SIZE 20			

static buffheader_T redobuff = {{NULL, {NUL}}, NULL, 0, 0};
static buffheader_T old_redobuff = {{NULL, {NUL}}, NULL, 0, 0};
static buffheader_T recordbuff = {{NULL, {NUL}}, NULL, 0, 0};

static int typeahead_char = 0;		

#ifdef FEAT_EVAL
static char_u typedchars[MAXMAPLEN + 1] = { NUL };  
static int typedchars_pos = 0;
#endif


static int	block_redo = FALSE;

static int	KeyNoremap = 0;	    


#define RM_YES		0	
#define RM_NONE		1	
#define RM_SCRIPT	2	
#define RM_ABBR		4	




#define TYPELEN_INIT	(5 * (MAXMAPLEN + 3))
static char_u	typebuf_init[TYPELEN_INIT];	
static char_u	noremapbuf_init[TYPELEN_INIT];	

static size_t	last_recorded_len = 0;	

#ifdef FEAT_EVAL
mapblock_T	*last_used_map = NULL;
int		last_used_sid = -1;
#endif

static int	read_readbuf(buffheader_T *buf, int advance);
static void	init_typebuf(void);
static void	may_sync_undo(void);
static void	free_typebuf(void);
static void	closescript(void);
static void	updatescript(int c);
static int	vgetorpeek(int);
static int	inchar(char_u *buf, int maxlen, int wait_time);
#ifdef FEAT_EVAL
static int	do_key_input_pre(int c);
#endif


    static void
free_buff(buffheader_T *buf)
{
    buffblock_T	*p, *np;

    for (p = buf->bh_first.b_next; p != NULL; p = np)
    {
	np = p->b_next;
	vim_free(p);
    }
    buf->bh_first.b_next = NULL;
    buf->bh_curr = NULL;
}


    static char_u *
get_buffcont(
    buffheader_T	*buffer,
    int			dozero)	    
{
    long_u	    count = 0;
    char_u	    *p = NULL;
    char_u	    *p2;
    char_u	    *str;
    buffblock_T *bp;

    
    for (bp = buffer->bh_first.b_next; bp != NULL; bp = bp->b_next)
	count += (long_u)STRLEN(bp->b_str);

    if ((count > 0 || dozero) && (p = alloc(count + 1)) != NULL)
    {
	p2 = p;
	for (bp = buffer->bh_first.b_next; bp != NULL; bp = bp->b_next)
	    for (str = bp->b_str; *str; )
		*p2++ = *str++;
	*p2 = NUL;
    }
    return p;
}


    char_u *
get_recorded(void)
{
    char_u	*p;
    size_t	len;

    p = get_buffcont(&recordbuff, TRUE);
    free_buff(&recordbuff);

    
    len = STRLEN(p);
    if (len >= last_recorded_len)
    {
	len -= last_recorded_len;
	p[len] = NUL;
    }

    
    if (len > 0 && restart_edit != 0 && p[len - 1] == Ctrl_O)
	p[len - 1] = NUL;

    return (p);
}


    char_u *
get_inserted(void)
{
    return get_buffcont(&redobuff, FALSE);
}


    static void
add_buff(
    buffheader_T	*buf,
    char_u		*s,
    int		slen)	
{
    buffblock_T *p;
    long_u	    len;

    if (slen < 0)
	slen = (int)STRLEN(s);
    if (slen == 0)				
	return;

    if (buf->bh_first.b_next == NULL)	
    {
	buf->bh_space = 0;
	buf->bh_curr = &(buf->bh_first);
    }
    else if (buf->bh_curr == NULL)	
    {
	iemsg(e_add_to_internal_buffer_that_was_already_read_from);
	return;
    }
    else if (buf->bh_index != 0)
	mch_memmove(buf->bh_first.b_next->b_str,
		    buf->bh_first.b_next->b_str + buf->bh_index,
		    STRLEN(buf->bh_first.b_next->b_str + buf->bh_index) + 1);
    buf->bh_index = 0;

    if (buf->bh_space >= (int)slen)
    {
	len = (long_u)STRLEN(buf->bh_curr->b_str);
	vim_strncpy(buf->bh_curr->b_str + len, s, (size_t)slen);
	buf->bh_space -= slen;
    }
    else
    {
	if (slen < MINIMAL_SIZE)
	    len = MINIMAL_SIZE;
	else
	    len = slen;
	p = alloc(offsetof(buffblock_T, b_str) + len + 1);
	if (p == NULL)
	    return; 
	buf->bh_space = (int)(len - slen);
	vim_strncpy(p->b_str, s, (size_t)slen);

	p->b_next = buf->bh_curr->b_next;
	buf->bh_curr->b_next = p;
	buf->bh_curr = p;
    }
}


    static void
delete_buff_tail(buffheader_T *buf, int slen)
{
    int len;

    if (buf->bh_curr == NULL)
	return;  
    len = (int)STRLEN(buf->bh_curr->b_str);
    if (len < slen)
	return;

    buf->bh_curr->b_str[len - slen] = NUL;
    buf->bh_space += slen;
}


    static void
add_num_buff(buffheader_T *buf, int n)
{
    char_u	number[32];

    sprintf((char *)number, "%ld", n);
    add_buff(buf, number, -1L);
}


    static void
add_char_buff(buffheader_T *buf, int c)
{
    char_u	bytes[MB_MAXBYTES + 1];
    int		len;
    int		i;
    char_u	temp[4];

    if (IS_SPECIAL(c))
	len = 1;
    else
	len = (*mb_char2bytes)(c, bytes);
    for (i = 0; i < len; ++i)
    {
	if (!IS_SPECIAL(c))
	    c = bytes[i];

	if (IS_SPECIAL(c) || c == K_SPECIAL || c == NUL)
	{
	    
	    temp[0] = K_SPECIAL;
	    temp[1] = K_SECOND(c);
	    temp[2] = K_THIRD(c);
	    temp[3] = NUL;
	}
#ifdef FEAT_GUI
	else if (c == CSI)
	{
	    
	    temp[0] = CSI;
	    temp[1] = KS_EXTRA;
	    temp[2] = (int)KE_CSI;
	    temp[3] = NUL;
	}
#endif
	else
	{
	    temp[0] = c;
	    temp[1] = NUL;
	}
	add_buff(buf, temp, -1L);
    }
}


static buffheader_T readbuf1 = {{NULL, {NUL}}, NULL, 0, 0};


static buffheader_T readbuf2 = {{NULL, {NUL}}, NULL, 0, 0};


    static int
read_readbuffers(int advance)
{
    int c;

    c = read_readbuf(&readbuf1, advance);
    if (c == NUL)
	c = read_readbuf(&readbuf2, advance);
    return c;
}

    static int
read_readbuf(buffheader_T *buf, int advance)
{
    char_u	c;
    buffblock_T	*curr;

    if (buf->bh_first.b_next == NULL)  
	return NUL;

    curr = buf->bh_first.b_next;
    c = curr->b_str[buf->bh_index];

    if (advance)
    {
	if (curr->b_str[++buf->bh_index] == NUL)
	{
	    buf->bh_first.b_next = curr->b_next;
	    vim_free(curr);
	    buf->bh_index = 0;
	}
    }
    return c;
}


    static void
start_stuff(void)
{
    if (readbuf1.bh_first.b_next != NULL)
    {
	readbuf1.bh_curr = &(readbuf1.bh_first);
	readbuf1.bh_space = 0;
    }
    if (readbuf2.bh_first.b_next != NULL)
    {
	readbuf2.bh_curr = &(readbuf2.bh_first);
	readbuf2.bh_space = 0;
    }
}


    int
stuff_empty(void)
{
    return (readbuf1.bh_first.b_next == NULL
	 && readbuf2.bh_first.b_next == NULL);
}

#if defined(FEAT_EVAL) || defined(PROTO)

    int
readbuf1_empty(void)
{
    return (readbuf1.bh_first.b_next == NULL);
}
#endif


    void
typeahead_noflush(int c)
{
    typeahead_char = c;
}


    void
flush_buffers(flush_buffers_T flush_typeahead)
{
    init_typebuf();

    start_stuff();
    while (read_readbuffers(TRUE) != NUL)
	;

    if (flush_typeahead == FLUSH_MINIMAL)
    {
	
	typebuf.tb_off += typebuf.tb_maplen;
	typebuf.tb_len -= typebuf.tb_maplen;
#if defined(FEAT_CLIENTSERVER) || defined(FEAT_EVAL)
	if (typebuf.tb_len == 0)
	    typebuf_was_filled = FALSE;
#endif
    }
    else
    {
	
	if (flush_typeahead == FLUSH_INPUT)
	    
	    
	    
	    while (inchar(typebuf.tb_buf, typebuf.tb_buflen - 1, 10L) != 0)
		;
	typebuf.tb_off = MAXMAPLEN;
	typebuf.tb_len = 0;
#if defined(FEAT_CLIENTSERVER) || defined(FEAT_EVAL)
	
	
	typebuf_was_filled = FALSE;
#endif
    }
    typebuf.tb_maplen = 0;
    typebuf.tb_silent = 0;
    cmd_silent = FALSE;
    typebuf.tb_no_abbr_cnt = 0;
    if (++typebuf.tb_change_cnt == 0)
	typebuf.tb_change_cnt = 1;
}


    void
ResetRedobuff(void)
{
    if (block_redo)
	return;

    free_buff(&old_redobuff);
    old_redobuff = redobuff;
    redobuff.bh_first.b_next = NULL;
}


    void
CancelRedo(void)
{
    if (block_redo)
	return;

    free_buff(&redobuff);
    redobuff = old_redobuff;
    old_redobuff.bh_first.b_next = NULL;
    start_stuff();
    while (read_readbuffers(TRUE) != NUL)
	;
}


    void
saveRedobuff(save_redo_T *save_redo)
{
    char_u	*s;

    save_redo->sr_redobuff = redobuff;
    redobuff.bh_first.b_next = NULL;
    save_redo->sr_old_redobuff = old_redobuff;
    old_redobuff.bh_first.b_next = NULL;

    
    s = get_buffcont(&save_redo->sr_redobuff, FALSE);
    if (s == NULL)
	return;

    add_buff(&redobuff, s, -1L);
    vim_free(s);
}


    void
restoreRedobuff(save_redo_T *save_redo)
{
    free_buff(&redobuff);
    redobuff = save_redo->sr_redobuff;
    free_buff(&old_redobuff);
    old_redobuff = save_redo->sr_old_redobuff;
}


    void
AppendToRedobuff(char_u *s)
{
    if (!block_redo)
	add_buff(&redobuff, s, -1L);
}


    void
AppendToRedobuffLit(
    char_u	*str,
    int		len)	    
{
    char_u	*s = str;
    int		c;
    char_u	*start;

    if (block_redo)
	return;

    while (len < 0 ? *s != NUL : s - str < len)
    {
	
	
	start = s;
	while (*s >= ' ' && *s < DEL && (len < 0 || s - str < len))
	    ++s;

	
	
	if (*s == NUL && (s[-1] == '0' || s[-1] == '^'))
	    --s;
	if (s > start)
	    add_buff(&redobuff, start, (int)(s - start));

	if (*s == NUL || (len >= 0 && s - str >= len))
	    break;

	
	if (has_mbyte)
	    
	    c = mb_cptr2char_adv(&s);
	else
	    c = *s++;
	if (c < ' ' || c == DEL || (*s == NUL && (c == '0' || c == '^')))
	    add_char_buff(&redobuff, Ctrl_V);

	
	if (*s == NUL && c == '0')
	    add_buff(&redobuff, (char_u *)"048", 3L);
	else
	    add_char_buff(&redobuff, c);
    }
}


    void
AppendToRedobuffSpec(char_u *s)
{
    if (block_redo)
	return;

    while (*s != NUL)
    {
	if (*s == K_SPECIAL && s[1] != NUL && s[2] != NUL)
	{
	    
	    add_buff(&redobuff, s, 3L);
	    s += 3;
	}
	else
	    add_char_buff(&redobuff, mb_cptr2char_adv(&s));
    }
}


    void
AppendCharToRedobuff(int c)
{
    if (!block_redo)
	add_char_buff(&redobuff, c);
}


    void
AppendNumberToRedobuff(int n)
{
    if (!block_redo)
	add_num_buff(&redobuff, n);
}


    void
stuffReadbuff(char_u *s)
{
    add_buff(&readbuf1, s, -1L);
}


    void
stuffRedoReadbuff(char_u *s)
{
    add_buff(&readbuf2, s, -1L);
}

    static void
stuffReadbuffLen(char_u *s, int len)
{
    add_buff(&readbuf1, s, len);
}

#if defined(FEAT_EVAL) || defined(PROTO)

    void
stuffReadbuffSpec(char_u *s)
{
    int c;

    while (*s != NUL)
    {
	if (*s == K_SPECIAL && s[1] != NUL && s[2] != NUL)
	{
	    
	    stuffReadbuffLen(s, 3L);
	    s += 3;
	}
	else
	{
	    c = mb_cptr2char_adv(&s);
	    if (c == CAR || c == NL || c == ESC)
		c = ' ';
	    stuffcharReadbuff(c);
	}
    }
}
#endif


    void
stuffcharReadbuff(int c)
{
    add_char_buff(&readbuf1, c);
}


    void
stuffnumReadbuff(int n)
{
    add_num_buff(&readbuf1, n);
}


    void
stuffescaped(char_u *arg, int literally)
{
    int		c;
    char_u	*start;

    while (*arg != NUL)
    {
	
	
	
	start = arg;
	while ((*arg >= ' ' && *arg < DEL)
		|| (*arg == K_SPECIAL && !literally))
	    ++arg;
	if (arg > start)
	    stuffReadbuffLen(start, (int)(arg - start));

	
	if (*arg != NUL)
	{
	    if (has_mbyte)
		c = mb_cptr2char_adv(&arg);
	    else
		c = *arg++;
	    if (literally && ((c < ' ' && c != TAB) || c == DEL))
		stuffcharReadbuff(Ctrl_V);
	    stuffcharReadbuff(c);
	}
    }
}


    static int
read_redo(int init, int old_redo)
{
    static buffblock_T	*bp;
    static char_u	*p;
    int			c;
    int			n;
    char_u		buf[MB_MAXBYTES + 1];
    int			i;

    if (init)
    {
	if (old_redo)
	    bp = old_redobuff.bh_first.b_next;
	else
	    bp = redobuff.bh_first.b_next;
	if (bp == NULL)
	    return FAIL;
	p = bp->b_str;
	return OK;
    }
    if ((c = *p) != NUL)
    {
	
	
	
	if (has_mbyte && (c != K_SPECIAL || p[1] == KS_SPECIAL))
	    n = MB_BYTE2LEN_CHECK(c);
	else
	    n = 1;
	for (i = 0; ; ++i)
	{
	    if (c == K_SPECIAL) 
	    {
		c = TO_SPECIAL(p[1], p[2]);
		p += 2;
	    }
#ifdef FEAT_GUI
	    if (c == CSI)	
		p += 2;
#endif
	    if (*++p == NUL && bp->b_next != NULL)
	    {
		bp = bp->b_next;
		p = bp->b_str;
	    }
	    buf[i] = c;
	    if (i == n - 1)	
	    {
		if (n != 1)
		    c = (*mb_ptr2char)(buf);
		break;
	    }
	    c = *p;
	    if (c == NUL)	
		break;
	}
    }

    return c;
}


    static void
copy_redo(int old_redo)
{
    int	    c;

    while ((c = read_redo(FALSE, old_redo)) != NUL)
	add_char_buff(&readbuf2, c);
}


    int
start_redo(int count, int old_redo)
{
    int	    c;

    
    if (read_redo(TRUE, old_redo) == FAIL)
	return FAIL;

    c = read_redo(FALSE, old_redo);

#ifdef FEAT_EVAL
    if (c == K_SID)
    {
	
	add_char_buff(&readbuf2, c);
	for (;;)
	{
	    c = read_redo(FALSE, old_redo);
	    add_char_buff(&readbuf2, c);
	    if (!SAFE_isdigit(c))
		break;
	}
	c = read_redo(FALSE, old_redo);
    }
#endif

    
    if (c == '"')
    {
	add_buff(&readbuf2, (char_u *)"\"", 1L);
	c = read_redo(FALSE, old_redo);

	
	if (c >= '1' && c < '9')
	    ++c;
	add_char_buff(&readbuf2, c);

	
	if (c == '=')
	{
	    add_char_buff(&readbuf2, CAR);
	    cmd_silent = TRUE;
	}

	c = read_redo(FALSE, old_redo);
    }

    if (c == 'v')   
    {
	VIsual = curwin->w_cursor;
	VIsual_active = TRUE;
	VIsual_select = FALSE;
	VIsual_reselect = TRUE;
	redo_VIsual_busy = TRUE;
	c = read_redo(FALSE, old_redo);
    }

    
    if (count)
    {
	while (VIM_ISDIGIT(c))	
	    c = read_redo(FALSE, old_redo);
	add_num_buff(&readbuf2, count);
    }

    
    add_char_buff(&readbuf2, c);
    copy_redo(old_redo);
    return OK;
}


    int
start_redo_ins(void)
{
    int	    c;

    if (read_redo(TRUE, FALSE) == FAIL)
	return FAIL;
    start_stuff();

    
    while ((c = read_redo(FALSE, FALSE)) != NUL)
    {
	if (vim_strchr((char_u *)"AaIiRrOo", c) != NULL)
	{
	    if (c == 'O' || c == 'o')
		add_buff(&readbuf2, NL_STR, -1L);
	    break;
	}
    }

    
    copy_redo(FALSE);
    block_redo = TRUE;
    return OK;
}

    void
stop_redo_ins(void)
{
    block_redo = FALSE;
}


    static void
init_typebuf(void)
{
    if (typebuf.tb_buf != NULL)
	return;

    typebuf.tb_buf = typebuf_init;
    typebuf.tb_noremap = noremapbuf_init;
    typebuf.tb_buflen = TYPELEN_INIT;
    typebuf.tb_len = 0;
    typebuf.tb_off = MAXMAPLEN + 4;
    typebuf.tb_change_cnt = 1;
}


    int
noremap_keys(void)
{
    return KeyNoremap & (RM_NONE|RM_SCRIPT);
}


    int
ins_typebuf(
    char_u	*str,
    int		noremap,
    int		offset,
    int		nottyped,
    int		silent)
{
    char_u	*s1, *s2;
    int		newlen;
    int		addlen;
    int		i;
    int		newoff;
    int		val;
    int		nrm;

    init_typebuf();
    if (++typebuf.tb_change_cnt == 0)
	typebuf.tb_change_cnt = 1;
    state_no_longer_safe("ins_typebuf()");

    addlen = (int)STRLEN(str);

    if (offset == 0 && addlen <= typebuf.tb_off)
    {
	
	typebuf.tb_off -= addlen;
	mch_memmove(typebuf.tb_buf + typebuf.tb_off, str, (size_t)addlen);
    }
    else if (typebuf.tb_len == 0 && typebuf.tb_buflen
					       >= addlen + 3 * (MAXMAPLEN + 4))
    {
	
	typebuf.tb_off = (typebuf.tb_buflen - addlen - 3 * (MAXMAPLEN + 4)) / 2;
	mch_memmove(typebuf.tb_buf + typebuf.tb_off, str, (size_t)addlen);
    }
    else
    {
	int extra;

	
	newoff = MAXMAPLEN + 4;
	extra = addlen + newoff + 4 * (MAXMAPLEN + 4);
	if (typebuf.tb_len > 2147483647 - extra)
	{
	    
	    emsg(_(e_command_too_complex));    
	    setcursor();
	    return FAIL;
	}
	newlen = typebuf.tb_len + extra;
	s1 = alloc(newlen);
	if (s1 == NULL)		    
	    return FAIL;
	s2 = alloc(newlen);
	if (s2 == NULL)		    
	{
	    vim_free(s1);
	    return FAIL;
	}
	typebuf.tb_buflen = newlen;

	
	mch_memmove(s1 + newoff, typebuf.tb_buf + typebuf.tb_off,
							      (size_t)offset);
	
	mch_memmove(s1 + newoff + offset, str, (size_t)addlen);
	
	
	mch_memmove(s1 + newoff + offset + addlen,
				     typebuf.tb_buf + typebuf.tb_off + offset,
				       (size_t)(typebuf.tb_len - offset + 1));
	if (typebuf.tb_buf != typebuf_init)
	    vim_free(typebuf.tb_buf);
	typebuf.tb_buf = s1;

	mch_memmove(s2 + newoff, typebuf.tb_noremap + typebuf.tb_off,
							      (size_t)offset);
	mch_memmove(s2 + newoff + offset + addlen,
		   typebuf.tb_noremap + typebuf.tb_off + offset,
					   (size_t)(typebuf.tb_len - offset));
	if (typebuf.tb_noremap != noremapbuf_init)
	    vim_free(typebuf.tb_noremap);
	typebuf.tb_noremap = s2;

	typebuf.tb_off = newoff;
    }
    typebuf.tb_len += addlen;

    
    if (noremap == REMAP_SCRIPT)
	val = RM_SCRIPT;
    else if (noremap == REMAP_SKIP)
	val = RM_ABBR;
    else
	val = RM_NONE;

    
    if (noremap == REMAP_SKIP)
	nrm = 1;
    else if (noremap < 0)
	nrm = addlen;
    else
	nrm = noremap;
    for (i = 0; i < addlen; ++i)
	typebuf.tb_noremap[typebuf.tb_off + i + offset] =
						  (--nrm >= 0) ? val : RM_YES;

    
    
    
    if (nottyped || typebuf.tb_maplen > offset)
	typebuf.tb_maplen += addlen;
    if (silent || typebuf.tb_silent > offset)
    {
	typebuf.tb_silent += addlen;
	cmd_silent = TRUE;
    }
    if (typebuf.tb_no_abbr_cnt && offset == 0)	
	typebuf.tb_no_abbr_cnt += addlen;

    return OK;
}


    int
ins_char_typebuf(int c, int modifiers)
{
    char_u	buf[MB_MAXBYTES * 3 + 4];
    int		len = special_to_buf(c, modifiers, TRUE, buf);

    buf[len] = NUL;
    (void)ins_typebuf(buf, KeyNoremap, 0, !KeyTyped, cmd_silent);
    return len;
}


    int
typebuf_changed(
    int		tb_change_cnt)	
{
    return (tb_change_cnt != 0 && (typebuf.tb_change_cnt != tb_change_cnt
#if defined(FEAT_CLIENTSERVER) || defined(FEAT_EVAL)
	    || typebuf_was_filled
#endif
	   ));
}


    int
typebuf_typed(void)
{
    return typebuf.tb_maplen == 0;
}


    int
typebuf_maplen(void)
{
    return typebuf.tb_maplen;
}


    void
del_typebuf(int len, int offset)
{
    int	    i;

    if (len == 0)
	return;		

    typebuf.tb_len -= len;

    
    if (offset == 0 && typebuf.tb_buflen - (typebuf.tb_off + len)
							 >= 3 * MAXMAPLEN + 3)
	typebuf.tb_off += len;
    
    else
    {
	i = typebuf.tb_off + offset;
	
	if (typebuf.tb_off > MAXMAPLEN)
	{
	    mch_memmove(typebuf.tb_buf + MAXMAPLEN,
			     typebuf.tb_buf + typebuf.tb_off, (size_t)offset);
	    mch_memmove(typebuf.tb_noremap + MAXMAPLEN,
			 typebuf.tb_noremap + typebuf.tb_off, (size_t)offset);
	    typebuf.tb_off = MAXMAPLEN;
	}
	
	mch_memmove(typebuf.tb_buf + typebuf.tb_off + offset,
						     typebuf.tb_buf + i + len,
				       (size_t)(typebuf.tb_len - offset + 1));
	
	mch_memmove(typebuf.tb_noremap + typebuf.tb_off + offset,
						 typebuf.tb_noremap + i + len,
					   (size_t)(typebuf.tb_len - offset));
    }

    if (typebuf.tb_maplen > offset)		
    {
	if (typebuf.tb_maplen < offset + len)
	    typebuf.tb_maplen = offset;
	else
	    typebuf.tb_maplen -= len;
    }
    if (typebuf.tb_silent > offset)		
    {
	if (typebuf.tb_silent < offset + len)
	    typebuf.tb_silent = offset;
	else
	    typebuf.tb_silent -= len;
    }
    if (typebuf.tb_no_abbr_cnt > offset)	
    {
	if (typebuf.tb_no_abbr_cnt < offset + len)
	    typebuf.tb_no_abbr_cnt = offset;
	else
	    typebuf.tb_no_abbr_cnt -= len;
    }

#if defined(FEAT_CLIENTSERVER) || defined(FEAT_EVAL)
    
    
    typebuf_was_filled = FALSE;
#endif
    if (++typebuf.tb_change_cnt == 0)
	typebuf.tb_change_cnt = 1;
}


typedef struct
{
    char_u	buf[MB_MAXBYTES * 3 + 4];
    int		prev_c;
    size_t	buflen;
    unsigned	pending_special;
    unsigned	pending_mbyte;
} gotchars_state_T;


    static int
gotchars_add_byte(gotchars_state_T *state, char_u byte)
{
    int		c = state->buf[state->buflen++] = byte;
    int		retval = FALSE;
    int		in_special = state->pending_special > 0;
    int		in_mbyte = state->pending_mbyte > 0;

    if (in_special)
	state->pending_special--;
    else if (c == K_SPECIAL
#ifdef FEAT_GUI
		|| c == CSI
#endif
	    )
	
	
	state->pending_special = 2;

    if (state->pending_special > 0)
	goto ret_false;

    if (in_mbyte)
	state->pending_mbyte--;
    else
    {
	if (in_special)
	{
	    if (state->prev_c == KS_MODIFIER)
		
		goto ret_false;
	    c = TO_SPECIAL(state->prev_c, c);
	    if (c == K_FOCUSGAINED || c == K_FOCUSLOST)
		
		
		state->buflen = 0;
	}
	
	
	
	state->pending_mbyte = MB_BYTE2LEN_CHECK(c) - 1;
    }

    if (state->pending_mbyte > 0)
	goto ret_false;

    retval = TRUE;
ret_false:
    state->prev_c = c;
    return retval;
}


    static void
gotchars(char_u *chars, int len)
{
    char_u		*s = chars;
    size_t		i;
    int			todo = len;
    static gotchars_state_T state;

    while (todo-- > 0)
    {
	if (!gotchars_add_byte(&state, *s++))
	    continue;

	
	for (i = 0; i < state.buflen; ++i)
	    updatescript(state.buf[i]);

	if (reg_recording != 0)
	{
	    state.buf[state.buflen] = NUL;
	    add_buff(&recordbuff, state.buf, (int)state.buflen);
	    
	    last_recorded_len += state.buflen;
	}
	state.buflen = 0;
    }

    may_sync_undo();

#ifdef FEAT_EVAL
    
    debug_did_msg = FALSE;
#endif

    
    
    ++maptick;
}


    void
gotchars_ignore(void)
{
    char_u nop_buf[3] = { K_SPECIAL, KS_EXTRA, KE_IGNORE };
    gotchars(nop_buf, 3);
}


    void
ungetchars(int len)
{
    if (reg_recording == 0)
	return;

    delete_buff_tail(&recordbuff, len);
    last_recorded_len -= len;
}


    static void
may_sync_undo(void)
{
    if ((!(State & (MODE_INSERT | MODE_CMDLINE)) || arrow_used)
					       && scriptin[curscript] == NULL)
	u_sync(FALSE);
}


    static int
alloc_typebuf(void)
{
    typebuf.tb_buf = alloc(TYPELEN_INIT);
    typebuf.tb_noremap = alloc(TYPELEN_INIT);
    if (typebuf.tb_buf == NULL || typebuf.tb_noremap == NULL)
    {
	free_typebuf();
	return FAIL;
    }
    typebuf.tb_buflen = TYPELEN_INIT;
    typebuf.tb_off = MAXMAPLEN + 4;  
    typebuf.tb_len = 0;
    typebuf.tb_maplen = 0;
    typebuf.tb_silent = 0;
    typebuf.tb_no_abbr_cnt = 0;
    if (++typebuf.tb_change_cnt == 0)
	typebuf.tb_change_cnt = 1;
#if defined(FEAT_CLIENTSERVER) || defined(FEAT_EVAL)
    typebuf_was_filled = FALSE;
#endif
    return OK;
}


    static void
free_typebuf(void)
{
    if (typebuf.tb_buf == typebuf_init)
	internal_error("Free typebuf 1");
    else
	VIM_CLEAR(typebuf.tb_buf);
    if (typebuf.tb_noremap == noremapbuf_init)
	internal_error("Free typebuf 2");
    else
	VIM_CLEAR(typebuf.tb_noremap);
}


static typebuf_T saved_typebuf[NSCRIPT];

    int
save_typebuf(void)
{
    init_typebuf();
    saved_typebuf[curscript] = typebuf;
    
    if (alloc_typebuf() == FAIL)
    {
	closescript();
	return FAIL;
    }
    return OK;
}

static int old_char = -1;	
static int old_mod_mask;	
static int old_mouse_row;	
static int old_mouse_col;	
static int old_KeyStuffed;	

static int can_get_old_char(void)
{
    
    
    return old_char != -1 && (old_KeyStuffed || stuff_empty());
}


    void
save_typeahead(tasave_T *tp)
{
    tp->save_typebuf = typebuf;
    tp->typebuf_valid = (alloc_typebuf() == OK);
    if (!tp->typebuf_valid)
	typebuf = tp->save_typebuf;

    tp->old_char = old_char;
    tp->old_mod_mask = old_mod_mask;
    old_char = -1;

    tp->save_readbuf1 = readbuf1;
    readbuf1.bh_first.b_next = NULL;
    tp->save_readbuf2 = readbuf2;
    readbuf2.bh_first.b_next = NULL;
# ifdef USE_INPUT_BUF
    tp->save_inputbuf = get_input_buf();
# endif
}


    void
restore_typeahead(tasave_T *tp, int overwrite UNUSED)
{
    if (tp->typebuf_valid)
    {
	free_typebuf();
	typebuf = tp->save_typebuf;
    }

    old_char = tp->old_char;
    old_mod_mask = tp->old_mod_mask;

    free_buff(&readbuf1);
    readbuf1 = tp->save_readbuf1;
    free_buff(&readbuf2);
    readbuf2 = tp->save_readbuf2;
# ifdef USE_INPUT_BUF
    set_input_buf(tp->save_inputbuf, overwrite);
# endif
}


    void
openscript(
    char_u	*name,
    int		directly)	
{
    if (curscript + 1 == NSCRIPT)
    {
	emsg(_(e_scripts_nested_too_deep));
	return;
    }

    
    
    if (check_secure())
	return;

#ifdef FEAT_EVAL
    if (ignore_script)
	
	return;
#endif

    if (scriptin[curscript] != NULL)	
	++curscript;
				
    expand_env(name, NameBuff, MAXPATHL);
    if ((scriptin[curscript] = mch_fopen((char *)NameBuff, READBIN)) == NULL)
    {
	semsg(_(e_cant_open_file_str), name);
	if (curscript)
	    --curscript;
	return;
    }
    if (save_typebuf() == FAIL)
	return;

    
    if (directly)
    {
	oparg_T	oa;
	int	oldcurscript;
	int	save_State = State;
	int	save_restart_edit = restart_edit;
	int	save_insertmode = p_im;
	int	save_finish_op = finish_op;
	int	save_msg_scroll = msg_scroll;

	State = MODE_NORMAL;
	msg_scroll = FALSE;	
	restart_edit = 0;	
	p_im = FALSE;		
	clear_oparg(&oa);
	finish_op = FALSE;

	oldcurscript = curscript;
	do
	{
	    update_topline_cursor();	
	    normal_cmd(&oa, FALSE);	
	    (void)vpeekc();		
	}
	while (scriptin[oldcurscript] != NULL);

	State = save_State;
	msg_scroll = save_msg_scroll;
	restart_edit = save_restart_edit;
	p_im = save_insertmode;
	finish_op = save_finish_op;
    }
}


    static void
closescript(void)
{
    free_typebuf();
    typebuf = saved_typebuf[curscript];

    fclose(scriptin[curscript]);
    scriptin[curscript] = NULL;
    if (curscript > 0)
	--curscript;
}

#if defined(EXITFREE) || defined(PROTO)
    void
close_all_scripts(void)
{
    while (scriptin[0] != NULL)
	closescript();
}
#endif


    int
using_script(void)
{
    return scriptin[curscript] != NULL;
}


    void
before_blocking(void)
{
    updatescript(0);
#ifdef FEAT_EVAL
    if (may_garbage_collect)
	garbage_collect(FALSE);
#endif
}


    static void
updatescript(int c)
{
    static int	    count = 0;

    if (c && scriptout)
	putc(c, scriptout);
    if (c == 0 || (p_uc > 0 && ++count >= p_uc))
    {
	ml_sync_all(c == 0, TRUE);
	count = 0;
    }
#ifdef FEAT_EVAL
    if (typedchars_pos < MAXMAPLEN)
    {
	typedchars[typedchars_pos] = c;
	typedchars_pos++;
    }
#endif
}


    int
merge_modifyOtherKeys(int c_arg, int *modifiers)
{
    int c = c_arg;

    
    if (*modifiers & MOD_MASK_CTRL)
    {
	if ((c >= '`' && c <= 0x7f) || (c >= '@' && c <= '_'))
	{
	    c &= 0x1f;
	    if (c == NUL)
		c = K_ZERO;
	}
	else if (c == '6')
	    
	    c = 0x1e;
#ifdef FEAT_GUI_GTK
	
	
	
	
	else if (c == '2')
	    c = NUL;
	else if (c >= '3' && c <= '7')
	    c = c ^ 0x28;
	else if (c == '8')
	    c = BS;
	else if (c == '?')
	    c = DEL;
#endif
	if (c != c_arg)
	    *modifiers &= ~MOD_MASK_CTRL;
    }

    
    if ((*modifiers & (MOD_MASK_META | MOD_MASK_ALT))
	    && c >= 0 && c <= 127)
    {
	
	
	
	if ((*modifiers & MOD_MASK_SHIFT) && c >= 'a' && c <= 'z')
	{
	    c += 'a' - 'A';
	    *modifiers &= ~MOD_MASK_SHIFT;
	}
	c += 0x80;
	*modifiers &= ~(MOD_MASK_META | MOD_MASK_ALT);
    }

    return c;
}


    static void
add_byte_to_showcmd(char_u byte)
{
    static gotchars_state_T state;
    char_u	*ptr;
    int		modifiers = 0;
    int		c = NUL;

    if (!p_sc || msg_silent != 0)
	return;

    if (!gotchars_add_byte(&state, byte))
	return;

    state.buf[state.buflen] = NUL;
    state.buflen = 0;

    ptr = state.buf;
    if (ptr[0] == K_SPECIAL && ptr[1] == KS_MODIFIER && ptr[2] != NUL)
    {
	modifiers = ptr[2];
	ptr += 3;
    }

    if (*ptr != NUL)
    {
	char_u		*mb_ptr = mb_unescape(&ptr);

	c = mb_ptr != NULL ? (*mb_ptr2char)(mb_ptr) : *ptr++;
	if (c <= 0x7f)
	{
	    
	    int		modifiers_after = modifiers;
	    int		mod_c = merge_modifyOtherKeys(c, &modifiers_after);

	    if (modifiers_after == 0)
	    {
		modifiers = 0;
		c = mod_c;
	    }
	}
    }

    
    
    if (modifiers != 0)
    {
	add_to_showcmd(K_SPECIAL);
	add_to_showcmd(KS_MODIFIER);
	add_to_showcmd(modifiers);
    }
    if (c != NUL)
	add_to_showcmd(c);
    while (*ptr != NUL)
	add_to_showcmd(*ptr++);
}


    int
vgetc(void)
{
    int		c, c2;
    int		n;
    char_u	buf[MB_MAXBYTES + 1];
    int		i;

#ifdef FEAT_EVAL
    
    
    if (may_garbage_collect && want_garbage_collect)
	garbage_collect(FALSE);
#endif

    
    if (can_get_old_char())
    {
	c = old_char;
	old_char = -1;
	mod_mask = old_mod_mask;
	mouse_row = old_mouse_row;
	mouse_col = old_mouse_col;
    }
    else
    {
	
	static size_t	last_vgetc_recorded_len = 0;

	mod_mask = 0;
	vgetc_mod_mask = 0;
	vgetc_char = 0;

	
	
	last_recorded_len -= last_vgetc_recorded_len;

	for (;;)		
	{
	    int did_inc = FALSE;

	    
	    
	    if (mod_mask
#if defined(FEAT_XIM) && defined(FEAT_GUI_GTK)
		    || im_is_preediting()
#endif
#if defined(FEAT_PROP_POPUP)
		    || popup_no_mapping()
#endif
		    )
	    {
		++no_mapping;
		++allow_keys;
		
		did_inc = TRUE;
	    }
	    c = vgetorpeek(TRUE);
	    if (did_inc)
	    {
		--no_mapping;
		--allow_keys;
	    }

	    
	    if (c == K_SPECIAL
#ifdef FEAT_GUI
		    || c == CSI
#endif
	       )
	    {
		int	    save_allow_keys = allow_keys;

		++no_mapping;
		allow_keys = 0;		
		c2 = vgetorpeek(TRUE);	
		c = vgetorpeek(TRUE);
		--no_mapping;
		allow_keys = save_allow_keys;
		if (c2 == KS_MODIFIER)
		{
		    mod_mask = c;
		    continue;
		}
		c = TO_SPECIAL(c2, c);

		
		
		
		if (c == K_ESC)
		    c = ESC;

#if defined(FEAT_GUI_MSWIN) && defined(FEAT_MENU) && defined(FEAT_TEAROFF)
		
		
		if (
# ifdef VIMDLL
		    gui.in_use &&
# endif
		    c == K_TEAROFF)
		{
		    char_u	name[200];
		    int		j;

		    
		    for (j = 0; (c = vgetorpeek(TRUE)) != '\r'; )
		    {
			name[j] = c;
			if (j < 199)
			    ++j;
		    }
		    name[j] = NUL;
		    gui_make_tearoff(name);
		    continue;
		}
#endif
#if defined(FEAT_GUI) && defined(FEAT_GUI_GTK) && defined(FEAT_MENU)
		
		
		
		if (c == K_F10 && gui.menubar != NULL)
		{
		    gtk_menu_shell_select_first(
					   GTK_MENU_SHELL(gui.menubar), FALSE);
		    continue;
		}
#endif
#ifdef FEAT_GUI
		
		
		
		if (c == K_FOCUSGAINED || c == K_FOCUSLOST)
		{
		    ui_focus_change(c == K_FOCUSGAINED);
		    c = K_IGNORE;
		}

		
		
		if (c == K_CSI)
		    c = CSI;
#endif
#ifdef FEAT_EVAL
		if (c == K_SID)
		{
		    int	    j;

		    
		    last_used_sid = 0;
		    for (j = 0; j < 20 && SAFE_isdigit(c = vgetorpeek(TRUE)); ++j)
			last_used_sid = last_used_sid * 10 + (c - '0');
		    last_used_map = NULL;
		    continue;
		}
#endif
	    }

	    
	    
	    
	    if (has_mbyte && (n = MB_BYTE2LEN_CHECK(c)) > 1)
	    {
		++no_mapping;
		buf[0] = c;
		for (i = 1; i < n; ++i)
		{
		    buf[i] = vgetorpeek(TRUE);
		    if (buf[i] == K_SPECIAL
#ifdef FEAT_GUI
			    || (buf[i] == CSI)
#endif
			    )
		    {
			
			
			
			
			
			
			c = vgetorpeek(TRUE);
			if (vgetorpeek(TRUE) == KE_CSI && c == KS_EXTRA)
			    buf[i] = CSI;
		    }
		}
		--no_mapping;
		c = (*mb_ptr2char)(buf);
	    }

	    if (vgetc_char == 0)
	    {
		vgetc_mod_mask = mod_mask;
		vgetc_char = c;
	    }

	    
	    
	    switch (c)
	    {
		case K_KPLUS:	c = '+'; break;
		case K_KMINUS:	c = '-'; break;
		case K_KDIVIDE:	c = '/'; break;
		case K_KMULTIPLY: c = '*'; break;
		case K_KENTER:	c = CAR; break;
		case K_KPOINT:
#ifdef MSWIN
				
				
				c = MapVirtualKey(VK_DECIMAL, 2); break;
#else
				c = '.'; break;
#endif
		case K_K0:	c = '0'; break;
		case K_K1:	c = '1'; break;
		case K_K2:	c = '2'; break;
		case K_K3:	c = '3'; break;
		case K_K4:	c = '4'; break;
		case K_K5:	c = '5'; break;
		case K_K6:	c = '6'; break;
		case K_K7:	c = '7'; break;
		case K_K8:	c = '8'; break;
		case K_K9:	c = '9'; break;

		case K_XHOME:
		case K_ZHOME:	if (mod_mask == MOD_MASK_SHIFT)
				{
				    c = K_S_HOME;
				    mod_mask = 0;
				}
				else if (mod_mask == MOD_MASK_CTRL)
				{
				    c = K_C_HOME;
				    mod_mask = 0;
				}
				else
				    c = K_HOME;
				break;
		case K_XEND:
		case K_ZEND:	if (mod_mask == MOD_MASK_SHIFT)
				{
				    c = K_S_END;
				    mod_mask = 0;
				}
				else if (mod_mask == MOD_MASK_CTRL)
				{
				    c = K_C_END;
				    mod_mask = 0;
				}
				else
				    c = K_END;
				break;

		case K_XUP:	c = K_UP; break;
		case K_XDOWN:	c = K_DOWN; break;
		case K_XLEFT:	c = K_LEFT; break;
		case K_XRIGHT:	c = K_RIGHT; break;
	    }

	    break;
	}

	last_vgetc_recorded_len = last_recorded_len;
    }

#ifdef FEAT_EVAL
    
    may_garbage_collect = FALSE;
#endif

#ifdef FEAT_BEVAL_TERM
    if (c != K_MOUSEMOVE && c != K_IGNORE && c != K_CURSORHOLD)
    {
	
	bevalexpr_due_set = FALSE;
	ui_remove_balloon();
    }
#endif
#ifdef FEAT_PROP_POPUP
    
    
    if ((!ex_normal_busy || in_feedkeys) && popup_do_filter(c))
    {
	if (c == Ctrl_C)
	    got_int = FALSE;  
	c = K_IGNORE;
    }
#endif

#ifdef FEAT_EVAL
    c = do_key_input_pre(c);

    
    typedchars_pos = 0;
#endif

    
    
    if (c != K_IGNORE)
	state_no_longer_safe("key typed");

    return c;
}

#ifdef FEAT_EVAL

    static int
do_key_input_pre(int c)
{
    int		res = c;
    char_u	buf[MB_MAXBYTES + 1];
    char_u	curr_mode[MODE_MAX_LENGTH];
    int		save_State = State;
    save_v_event_T save_v_event;
    dict_T	*v_event;

    
    if (!has_keyinputpre())
	return res;

    if (IS_SPECIAL(c))
    {
	buf[0] = K_SPECIAL;
	buf[1] = KEY2TERMCAP0(c);
	buf[2] = KEY2TERMCAP1(c);
	buf[3] = NUL;
    }
    else
	buf[(*mb_char2bytes)(c, buf)] = NUL;

    typedchars[typedchars_pos] = NUL;
    vim_unescape_csi(typedchars);

    get_mode(curr_mode);

    
    ++textlock;
    set_vim_var_string(VV_CHAR, buf, -1);  

    v_event = get_v_event(&save_v_event);
    (void)dict_add_bool(v_event, "typed", KeyTyped);
    (void)dict_add_string(v_event, "typedchar", typedchars);

    if (apply_autocmds(EVENT_KEYINPUTPRE, curr_mode, curr_mode, FALSE, curbuf)
	&& STRCMP(buf, get_vim_var_str(VV_CHAR)) != 0)
    {
	
	
	
	char_u *v_char;

	v_char = get_vim_var_str(VV_CHAR);

	
	if (STRLEN(v_char) >= 3 && v_char[0] == K_SPECIAL)
	    res = TERMCAP2KEY(v_char[1], v_char[2]);
	else if (STRLEN(v_char) > 0)
	    res = PTR2CHAR(v_char);
    }

    restore_v_event(v_event, &save_v_event);

    set_vim_var_string(VV_CHAR, NULL, -1);  
    --textlock;

    
    State = save_State;

    return res;
}
#endif


    int
safe_vgetc(void)
{
    int	c;

    c = vgetc();
    if (c == NUL)
	c = get_keystroke();
    return c;
}


    static int
plain_vgetc_nopaste(void)
{
    int c;

    do
	c = safe_vgetc();
    while (c == K_IGNORE
	    || c == K_VER_SCROLLBAR || c == K_HOR_SCROLLBAR
	    || c == K_MOUSEMOVE);
    return c;
}


    int
plain_vgetc(void)
{
    int c = plain_vgetc_nopaste();

    if (c == K_PS)
	
	
	c = bracketed_paste(PASTE_ONE_CHAR, FALSE, NULL);

    return c;
}


    int
vpeekc(void)
{
    if (can_get_old_char())
	return old_char;
    return vgetorpeek(FALSE);
}

#if defined(FEAT_TERMRESPONSE) || defined(FEAT_TERMINAL) || defined(PROTO)

    int
vpeekc_nomap(void)
{
    int		c;

    ++no_mapping;
    ++allow_keys;
    c = vpeekc();
    --no_mapping;
    --allow_keys;
    return c;
}
#endif


    int
vpeekc_any(void)
{
    int		c;

    c = vpeekc();
    if (c == NUL && typebuf.tb_len > 0)
	c = ESC;
    return c;
}


    int
char_avail(void)
{
    int	    retval;

#ifdef FEAT_EVAL
    
    
    if (disable_char_avail_for_testing)
	return FALSE;
#endif
    ++no_mapping;
    retval = vpeekc();
    --no_mapping;
    return (retval != NUL);
}

#if defined(FEAT_EVAL) || defined(PROTO)

    static void
getchar_common(typval_T *argvars, typval_T *rettv)
{
    varnumber_T		n;
    int			error = FALSE;

    if (in_vim9script() && check_for_opt_bool_arg(argvars, 0) == FAIL)
	return;

#ifdef MESSAGE_QUEUE
    
    
    
    parse_queued_messages();
#endif

    
    windgoto(msg_row, msg_col);

    ++no_mapping;
    ++allow_keys;
    for (;;)
    {
	if (argvars[0].v_type == VAR_UNKNOWN)
	    
	    n = plain_vgetc_nopaste();
	else if (tv_get_bool_chk(&argvars[0], &error))
	    
	    n = vpeekc_any();
	else if (error || vpeekc_any() == NUL)
	    
	    n = 0;
	else
	    
	    
	    n = safe_vgetc();

	if (n == K_IGNORE || n == K_MOUSEMOVE
		|| n == K_VER_SCROLLBAR || n == K_HOR_SCROLLBAR)
	    continue;
	break;
    }
    --no_mapping;
    --allow_keys;

    set_vim_var_nr(VV_MOUSE_WIN, 0);
    set_vim_var_nr(VV_MOUSE_WINID, 0);
    set_vim_var_nr(VV_MOUSE_LNUM, 0);
    set_vim_var_nr(VV_MOUSE_COL, 0);

    rettv->vval.v_number = n;
    if (n != 0 && (IS_SPECIAL(n) || mod_mask != 0))
    {
	char_u		temp[10];   
	int		i = 0;

	
	if (mod_mask != 0)
	{
	    temp[i++] = K_SPECIAL;
	    temp[i++] = KS_MODIFIER;
	    temp[i++] = mod_mask;
	}
	if (IS_SPECIAL(n))
	{
	    temp[i++] = K_SPECIAL;
	    temp[i++] = K_SECOND(n);
	    temp[i++] = K_THIRD(n);
	}
	else if (has_mbyte)
	    i += (*mb_char2bytes)(n, temp + i);
	else
	    temp[i++] = n;
	temp[i++] = NUL;
	rettv->v_type = VAR_STRING;
	rettv->vval.v_string = vim_strsave(temp);

	if (is_mouse_key(n))
	{
	    int		row = mouse_row;
	    int		col = mouse_col;
	    win_T	*win;
	    linenr_T	lnum;
	    win_T	*wp;
	    int		winnr = 1;

	    if (row >= 0 && col >= 0)
	    {
		
		
		win = mouse_find_win(&row, &col, FIND_POPUP);
		if (win == NULL)
		    return;
		(void)mouse_comp_pos(win, &row, &col, &lnum, NULL);
#ifdef FEAT_PROP_POPUP
		if (WIN_IS_POPUP(win))
		    winnr = 0;
		else
#endif
		    for (wp = firstwin; wp != win && wp != NULL;
							       wp = wp->w_next)
			++winnr;
		set_vim_var_nr(VV_MOUSE_WIN, winnr);
		set_vim_var_nr(VV_MOUSE_WINID, win->w_id);
		set_vim_var_nr(VV_MOUSE_LNUM, lnum);
		set_vim_var_nr(VV_MOUSE_COL, col + 1);
	    }
	}
    }
}


    void
f_getchar(typval_T *argvars, typval_T *rettv)
{
    getchar_common(argvars, rettv);
}


    void
f_getcharstr(typval_T *argvars, typval_T *rettv)
{
    getchar_common(argvars, rettv);

    if (rettv->v_type != VAR_NUMBER)
	return;

    char_u		temp[7];   
    varnumber_T	n = rettv->vval.v_number;
    int		i = 0;

    if (n != 0)
    {
	if (has_mbyte)
	    i += (*mb_char2bytes)(n, temp + i);
	else
	    temp[i++] = n;
    }
    temp[i++] = NUL;
    rettv->v_type = VAR_STRING;
    rettv->vval.v_string = vim_strsave(temp);
}


    void
f_getcharmod(typval_T *argvars UNUSED, typval_T *rettv)
{
    rettv->vval.v_number = mod_mask;
}
#endif 

#if defined(MESSAGE_QUEUE) || defined(PROTO)
# define MAX_REPEAT_PARSE 8


    void
parse_queued_messages(void)
{
    int	    old_curwin_id;
    int	    old_curbuf_fnum;
    int	    i;
    int	    save_may_garbage_collect = may_garbage_collect;
    static int entered = 0;
    int	    was_safe = get_was_safe_state();

    
    
    
    if (updating_screen || dont_parse_messages)
	return;

    
    
    if (curbuf == NULL || curwin == NULL)
       return;

    old_curbuf_fnum = curbuf->b_fnum;
    old_curwin_id = curwin->w_id;

    ++entered;

    
    
    
    
    may_garbage_collect = FALSE;

    
    for (i = 0; i < MAX_REPEAT_PARSE; ++i)
    {
	
# if (defined(MSWIN) || defined(__HAIKU__)) && defined(FEAT_JOB_CHANNEL)
	channel_handle_events(FALSE);
# endif

# ifdef FEAT_NETBEANS_INTG
	
	netbeans_parse_messages();
# endif
# ifdef FEAT_JOB_CHANNEL
	
	channel_write_any_lines();

	
	channel_parse_messages();
# endif
# if defined(FEAT_CLIENTSERVER) && defined(FEAT_X11)
	
	server_parse_messages();
# endif
# ifdef FEAT_JOB_CHANNEL
	
	
	if (job_check_ended())
	    continue;
# endif
# ifdef FEAT_TERMINAL
	free_unused_terminals();
# endif

# ifdef FEAT_SOUND_MACOSX
	process_cfrunloop();
# endif
# ifdef FEAT_SOUND_CANBERRA
	if (has_sound_callback_in_queue())
	    invoke_sound_callback();
# endif
#ifdef SIGUSR1
	if (got_sigusr1)
	{
	    apply_autocmds(EVENT_SIGUSR1, NULL, NULL, FALSE, curbuf);
	    got_sigusr1 = FALSE;
	}
#endif
	break;
    }

    
    
    if (entered == 1 && was_safe)
	may_trigger_safestateagain();

    may_garbage_collect = save_may_garbage_collect;

    
    
    if (curwin->w_id != old_curwin_id || curbuf->b_fnum != old_curbuf_fnum)
	ins_char_typebuf(K_IGNORE, 0);

    --entered;
}
#endif


typedef enum {
    map_result_fail,    
    map_result_get,     
    map_result_retry,   
    map_result_nomatch  
} map_result_T;


    static int
at_ins_compl_key(void)
{
    char_u  *p = typebuf.tb_buf + typebuf.tb_off;
    int	    c = *p;

    if (typebuf.tb_len > 3
	    && (c == K_SPECIAL || c == CSI)  
	    && p[1] == KS_MODIFIER
	    && (p[2] & MOD_MASK_CTRL))
	c = p[3] & 0x1f;
    return (ctrl_x_mode_not_default() && vim_is_ctrl_x_key(c))
		|| (compl_status_local() && (c == Ctrl_N || c == Ctrl_P));
}


    static int
check_simplify_modifier(int max_offset)
{
    int		offset;
    char_u	*tp;

    for (offset = 0; offset < max_offset; ++offset)
    {
	if (offset + 3 >= typebuf.tb_len)
	    break;
	tp = typebuf.tb_buf + typebuf.tb_off + offset;
	if ((tp[0] == K_SPECIAL || tp[0] == CSI) && tp[1] == KS_MODIFIER)
	{
	    
	    
	    int modifier = tp[2];
	    int	c = tp[3];
	    int new_c = merge_modifyOtherKeys(c, &modifier);

	    if (new_c != c)
	    {
		char_u	new_string[MB_MAXBYTES];
		int	len;

		if (offset == 0)
		{
		    
		    
		    
		    vgetc_char = c;
		    vgetc_mod_mask = tp[2];
		}
		if (IS_SPECIAL(new_c))
		{
		    new_string[0] = K_SPECIAL;
		    new_string[1] = K_SECOND(new_c);
		    new_string[2] = K_THIRD(new_c);
		    len = 3;
		}
		else
		    len = mb_char2bytes(new_c, new_string);
		if (modifier == 0)
		{
		    if (put_string_in_typebuf(offset, 4, new_string, len,
							NULL, 0, NULL) == FAIL)
			return -1;
		}
		else
		{
		    tp[2] = modifier;
		    if (put_string_in_typebuf(offset + 3, 1, new_string, len,
							NULL, 0, NULL) == FAIL)
			return -1;
		}
		return len;
	    }
	}
    }
    return 0;
}


    int
key_protocol_enabled(void)
{
    
    int using_mok = modify_otherkeys_state != MOKS_INITIAL
			? modify_otherkeys_state == MOKS_ENABLED
			: seenModifyOtherKeys;
    return using_mok || kitty_protocol_state == KKPS_ENABLED;
}


    static int
handle_mapping(
	    int *keylenp,
	    int *timedout,
	    int *mapdepth)
{
    mapblock_T	*mp = NULL;
    mapblock_T	*mp2;
    mapblock_T	*mp_match;
    int		mp_match_len = 0;
    int		max_mlen = 0;
    int		want_termcode = 0;  
    int		tb_c1;
    int		mlen;
#ifdef FEAT_LANGMAP
    int		nolmaplen;
#endif
    int		keylen = *keylenp;
    int		i;
    int		local_State = get_real_state();
    int		is_plug_map = FALSE;

    
    if (typebuf.tb_len >= 3
	    && typebuf.tb_buf[typebuf.tb_off] == K_SPECIAL
	    && typebuf.tb_buf[typebuf.tb_off + 1] == KS_EXTRA
	    && typebuf.tb_buf[typebuf.tb_off + 2] == KE_PLUG)
	is_plug_map = TRUE;

    
    tb_c1 = typebuf.tb_buf[typebuf.tb_off];
    if (no_mapping == 0 && is_maphash_valid()
	    && (no_zero_mapping == 0 || tb_c1 != '0')
	    && (typebuf.tb_maplen == 0 || is_plug_map
		|| (p_remap
		    && (typebuf.tb_noremap[typebuf.tb_off]
				    & (RM_NONE|RM_ABBR)) == 0))
	    && !(p_paste && (State & (MODE_INSERT | MODE_CMDLINE)))
	    && !(State == MODE_HITRETURN && (tb_c1 == CAR || tb_c1 == ' '))
	    && State != MODE_ASKMORE
	    && State != MODE_CONFIRM
	    && !at_ins_compl_key())
    {
#ifdef FEAT_GUI
	if (gui.in_use && tb_c1 == CSI && typebuf.tb_len >= 2
		&& typebuf.tb_buf[typebuf.tb_off + 1] == KS_MODIFIER)
	{
	    
	    
	    tb_c1 = K_SPECIAL;
	}
#endif
#ifdef FEAT_LANGMAP
	if (tb_c1 == K_SPECIAL)
	    nolmaplen = 2;
	else
	{
	    LANGMAP_ADJUST(tb_c1, (State & (MODE_CMDLINE | MODE_INSERT)) == 0
					   && get_real_state() != MODE_SELECT);
	    nolmaplen = 0;
	}
#endif
	
	mp = get_buf_maphash_list(local_State, tb_c1);
	mp2 = get_maphash_list(local_State, tb_c1);
	if (mp == NULL)
	{
	    
	    mp = mp2;
	    mp2 = NULL;
	}

	
	mp_match = NULL;
	mp_match_len = 0;
	for ( ; mp != NULL;
	       mp->m_next == NULL ? (mp = mp2, mp2 = NULL) : (mp = mp->m_next))
	{
	    
	    
	    
	    if (mp->m_keys[0] == tb_c1
		    && (mp->m_mode & local_State)
		    && !(mp->m_simplified && key_protocol_enabled()
						     && typebuf.tb_maplen == 0)
		    && ((mp->m_mode & MODE_LANGMAP) == 0
						    || typebuf.tb_maplen == 0))
	    {
#ifdef FEAT_LANGMAP
		int	nomap = nolmaplen;
		int	modifiers = 0;
#endif
		
		for (mlen = 1; mlen < typebuf.tb_len; ++mlen)
		{
		    int	c2 = typebuf.tb_buf[typebuf.tb_off + mlen];
#ifdef FEAT_LANGMAP
		    if (nomap > 0)
		    {
			if (nomap == 2 && c2 == KS_MODIFIER)
			    modifiers = 1;
			else if (nomap == 1 && modifiers == 1)
			    modifiers = c2;
			--nomap;
		    }
		    else
		    {
			if (c2 == K_SPECIAL)
			    nomap = 2;
			else if (merge_modifyOtherKeys(c2, &modifiers) == c2)
			    
			    
			    
			    
			    LANGMAP_ADJUST(c2, TRUE);
			modifiers = 0;
		    }
#endif
		    if (mp->m_keys[mlen] != c2)
			break;
		}

		
		
		
		{
		    char_u *p1 = mp->m_keys;
		    char_u *p2 = mb_unescape(&p1);

		    if (has_mbyte && p2 != NULL
					&& MB_BYTE2LEN(tb_c1) > mb_ptr2len(p2))
			mlen = 0;
		}

		
		
		
		keylen = mp->m_keylen;
		if (mlen == keylen || (mlen == typebuf.tb_len
						   && typebuf.tb_len < keylen))
		{
		    char_u  *s;
		    int	    n;

		    
		    
		    s = typebuf.tb_noremap + typebuf.tb_off;
		    if (*s == RM_SCRIPT
			    && (mp->m_keys[0] != K_SPECIAL
				|| mp->m_keys[1] != KS_EXTRA
				|| mp->m_keys[2] != KE_SNR))
			continue;

		    
		    
		    for (n = mlen; --n >= 0; )
			if (*s++ & (RM_NONE|RM_ABBR))
			    break;
		    if (!is_plug_map && n >= 0)
			continue;

		    if (keylen > typebuf.tb_len)
		    {
			if (!*timedout && !(mp_match != NULL
							&& mp_match->m_nowait))
			{
			    
			    keylen = KEYLEN_PART_MAP;
			    break;
			}
		    }
		    else if (keylen > mp_match_len)
		    {
			
			mp_match = mp;
			mp_match_len = keylen;
		    }
		}
		else
		{
		    
		    

		    
		    
		    
		    if (max_mlen < mlen)
		    {
			max_mlen = mlen;
			want_termcode = mp->m_keys[mlen] == K_SPECIAL;
		    }
		    else if (max_mlen == mlen && mp->m_keys[mlen] == K_SPECIAL)
			want_termcode = 1;

		    
		    
		    if (ASCII_ISUPPER(mp->m_keys[mlen]))
			want_termcode = 1;
		}
	    }
	}

	
	if (keylen != KEYLEN_PART_MAP && mp_match != NULL)
	{
	    mp = mp_match;
	    keylen = mp_match_len;
	}
    }

    
    if (*p_pt != NUL && mp == NULL && (State & (MODE_INSERT | MODE_NORMAL)))
    {
	for (mlen = 0; mlen < typebuf.tb_len && p_pt[mlen]; ++mlen)
	    if (p_pt[mlen] != typebuf.tb_buf[typebuf.tb_off + mlen])
		    break;
	if (p_pt[mlen] == NUL)	
	{
	    
	    if (mlen > typebuf.tb_maplen)
		gotchars(typebuf.tb_buf + typebuf.tb_off + typebuf.tb_maplen,
						     mlen - typebuf.tb_maplen);

	    del_typebuf(mlen, 0); 
	    set_option_value_give_err((char_u *)"paste",
						      (int)!p_paste, NULL, 0);
	    if (!(State & MODE_INSERT))
	    {
		msg_col = 0;
		msg_row = Rows - 1;
		msg_clr_eos();		
	    }
	    status_redraw_all();
	    redraw_statuslines();
	    showmode();
	    setcursor();
	    *keylenp = keylen;
	    return map_result_retry;
	}
	
	if (mlen == typebuf.tb_len)
	    keylen = KEYLEN_PART_KEY;
	else if (max_mlen < mlen)
	    
	    max_mlen = mlen + 1;
    }

    
    
    
    if ((mp == NULL || max_mlen + want_termcode > mp_match_len
		    || (mp_match_len == 1 && *mp->m_keys == ESC && !*timedout))
	    && keylen != KEYLEN_PART_MAP)
    {
	int	save_keylen = keylen;

	
	if (no_mapping == 0 || allow_keys != 0)
	{
	    if ((typebuf.tb_maplen == 0
			    || (p_remap && typebuf.tb_noremap[
						    typebuf.tb_off] == RM_YES))
		    && !*timedout)
		keylen = check_termcode(max_mlen + 1, NULL, 0, NULL);
	    else
		keylen = 0;

	    
	    
	    if (keylen == 0 && save_keylen == KEYLEN_PART_KEY && !*timedout)
		keylen = KEYLEN_PART_KEY;

	    
	    
#ifdef FEAT_TERMINAL
	    check_no_reduce_keys();  
#endif
	    if (keylen == 0 && !no_reduce_keys)
	    {
		keylen = check_simplify_modifier(max_mlen + 1);
		if (keylen < 0)
		    
		    return map_result_fail;
	    }

	    
	    
	    
	    
	    if (keylen < 0 && typebuf.tb_len == typebuf.tb_maplen)
		keylen = 0;
	}
	else
	    keylen = 0;
	if (keylen == 0)	
	{
#ifdef AMIGA
	    
	    if (typebuf.tb_maplen == 0 && (typebuf.tb_buf[
						typebuf.tb_off] & 0xff) == CSI)
	    {
		char_u *s;

		for (s = typebuf.tb_buf + typebuf.tb_off + 1;
			   s < typebuf.tb_buf + typebuf.tb_off + typebuf.tb_len
		   && (VIM_ISDIGIT(*s) || *s == ';' || *s == ' ');
			++s)
		    ;
		if (*s == 'r' || *s == '|') 
		{
		    del_typebuf(
			  (int)(s + 1 - (typebuf.tb_buf + typebuf.tb_off)), 0);
		    
		    shell_resized();
		    *keylenp = keylen;
		    return map_result_retry;
		}
		if (*s == NUL)	    
		    keylen = KEYLEN_PART_KEY;
	    }
	    if (keylen >= 0)
#endif
		
		
		
		
		if (mp == NULL)
		{
		    *keylenp = keylen;
		    return map_result_get;    
		}
	}

	if (keylen > 0)	    
	{
#if defined(FEAT_GUI) && defined(FEAT_MENU)
	    if (typebuf.tb_len >= 2
		    && typebuf.tb_buf[typebuf.tb_off] == K_SPECIAL
			      && typebuf.tb_buf[typebuf.tb_off + 1] == KS_MENU)
	    {
		int	idx;

		
		
		
		may_sync_undo();
		del_typebuf(3, 0);
		idx = get_menu_index(current_menu, local_State);
		if (idx != MENU_INDEX_INVALID)
		{
		    
		    
		    
		    if (VIsual_active && VIsual_select
					&& (current_menu->modes & MODE_VISUAL))
		    {
			VIsual_select = FALSE;
			(void)ins_typebuf(K_SELECT_STRING,
						   REMAP_NONE, 0, TRUE, FALSE);
		    }
		    ins_typebuf(current_menu->strings[idx],
				current_menu->noremap[idx],
				0, TRUE, current_menu->silent[idx]);
		}
	    }
#endif 
	    *keylenp = keylen;
	    return map_result_retry;	
	}

	
	
	if (mp == NULL || keylen < 0)
	    keylen = KEYLEN_PART_KEY;
	else
	    keylen = mp_match_len;
    }

    
    if (keylen >= 0 && keylen <= typebuf.tb_len)
    {
	char_u *map_str;

#ifdef FEAT_EVAL
	int	save_m_expr;
	int	save_m_noremap;
	int	save_m_silent;
	char_u	*save_m_keys;
	char_u	*save_alt_m_keys;
	int	save_alt_m_keylen;
#else
# define save_m_noremap mp->m_noremap
# define save_m_silent mp->m_silent
#endif

	
	if (keylen > typebuf.tb_maplen)
	    gotchars(typebuf.tb_buf + typebuf.tb_off + typebuf.tb_maplen,
						   keylen - typebuf.tb_maplen);

	cmd_silent = (typebuf.tb_silent > 0);
	del_typebuf(keylen, 0);	

	
	if (++*mapdepth >= p_mmd)
	{
	    emsg(_(e_recursive_mapping));
	    if (State & MODE_CMDLINE)
		redrawcmdline();
	    else
		setcursor();
	    flush_buffers(FLUSH_MINIMAL);
	    *mapdepth = 0;	
	    *keylenp = keylen;
	    return map_result_fail;
	}

	
	if (VIsual_active && VIsual_select && (mp->m_mode & MODE_VISUAL))
	{
	    VIsual_select = FALSE;
	    (void)ins_typebuf(K_SELECT_STRING, REMAP_NONE, 0, TRUE, FALSE);
	}

#ifdef FEAT_EVAL
	
	
	
	save_m_expr = mp->m_expr;
	save_m_noremap = mp->m_noremap;
	save_m_silent = mp->m_silent;
	save_m_keys = NULL;  
	save_alt_m_keys = NULL;  
	save_alt_m_keylen = mp->m_alt != NULL ? mp->m_alt->m_keylen : 0;

	
	if (mp->m_expr)
	{
	    int save_vgetc_busy = vgetc_busy;
	    int save_may_garbage_collect = may_garbage_collect;
	    int was_screen_col = screen_cur_col;
	    int was_screen_row = screen_cur_row;
	    int prev_did_emsg = did_emsg;

	    vgetc_busy = 0;
	    may_garbage_collect = FALSE;

	    save_m_keys = vim_strnsave(mp->m_keys, (size_t)mp->m_keylen);
	    save_alt_m_keys = mp->m_alt != NULL
				    ? vim_strnsave(mp->m_alt->m_keys,
					     (size_t)save_alt_m_keylen) : NULL;
	    map_str = eval_map_expr(mp, NUL);

	    
	    
	    windgoto(was_screen_row, was_screen_col);
	    out_flush();

	    
	    
	    if (prev_did_emsg != did_emsg
				       && (map_str == NULL || *map_str == NUL))
	    {
		char_u	buf[4];

		vim_free(map_str);
		buf[0] = K_SPECIAL;
		buf[1] = KS_EXTRA;
		buf[2] = KE_IGNORE;
		buf[3] = NUL;
		map_str = vim_strsave(buf);
		if (State & MODE_CMDLINE)
		{
		    
		    msg_didout = TRUE;
		    if (msg_row < cmdline_row)
			msg_row = cmdline_row;
		    redrawcmd();
		}
	    }

	    vgetc_busy = save_vgetc_busy;
	    may_garbage_collect = save_may_garbage_collect;
	}
	else
#endif
	    map_str = mp->m_str;

	
	if (map_str == NULL)
	    i = FAIL;
	else
	{
	    int noremap;

#ifdef FEAT_EVAL
	    last_used_map = mp;
	    last_used_sid = -1;
#endif
	    if (save_m_noremap != REMAP_YES)
		noremap = save_m_noremap;
	    else if (
#ifdef FEAT_EVAL
		save_m_expr ?
		(save_m_keys != NULL
			&& STRNCMP(map_str, save_m_keys, (size_t)keylen) == 0)
		|| (save_alt_m_keys != NULL
			&& STRNCMP(map_str, save_alt_m_keys,
					    (size_t)save_alt_m_keylen) == 0) :
#endif
		STRNCMP(map_str, mp->m_keys, (size_t)keylen) == 0
		|| (mp->m_alt != NULL
			&& STRNCMP(map_str, mp->m_alt->m_keys,
					    (size_t)mp->m_alt->m_keylen) == 0))
		noremap = REMAP_SKIP;
	    else
		noremap = REMAP_YES;
	    i = ins_typebuf(map_str, noremap,
					 0, TRUE, cmd_silent || save_m_silent);
#ifdef FEAT_EVAL
	    if (save_m_expr)
		vim_free(map_str);
#endif
	}
#ifdef FEAT_EVAL
	vim_free(save_m_keys);
	vim_free(save_alt_m_keys);
#endif
	*keylenp = keylen;
	if (i == FAIL)
	    return map_result_fail;
	return map_result_retry;
    }

    *keylenp = keylen;
    return map_result_nomatch;
}


    void
vungetc(int c)
{
    old_char = c;
    old_mod_mask = mod_mask;
    old_mouse_row = mouse_row;
    old_mouse_col = mouse_col;
    old_KeyStuffed = KeyStuffed;
}


    static void
check_end_reg_executing(int advance)
{
    if (reg_executing != 0 && (typebuf.tb_maplen == 0
						|| pending_end_reg_executing))
    {
	if (advance)
	{
	    reg_executing = 0;
	    pending_end_reg_executing = FALSE;
	}
	else
	    pending_end_reg_executing = TRUE;
    }

}


    static int
vgetorpeek(int advance)
{
    int		c;
    int		timedout = FALSE;	
					
					
    int		mapdepth = 0;		
    int		mode_deleted = FALSE;   
    int		new_wcol, new_wrow;
#ifdef FEAT_GUI
    int		shape_changed = FALSE;  
#endif
    int		n;
    int		old_wcol, old_wrow;
    int		wait_tb_len;

    
    if (vgetc_busy > 0 && ex_normal_busy == 0)
	return NUL;

    ++vgetc_busy;

    if (advance)
    {
	KeyStuffed = FALSE;
	typebuf_was_empty = FALSE;
    }

    init_typebuf();
    start_stuff();
    check_end_reg_executing(advance);
    do
    {

	if (typeahead_char != 0)
	{
	    c = typeahead_char;
	    if (advance)
		typeahead_char = 0;
	}
	else
	    c = read_readbuffers(advance);
	if (c != NUL && !got_int)
	{
	    if (advance)
	    {
		
		
		
		KeyStuffed = TRUE;
	    }
	    if (typebuf.tb_no_abbr_cnt == 0)
		typebuf.tb_no_abbr_cnt = 1;	
	}
	else
	{
	    
	    for (;;)
	    {
		int	wait_time;
		int	keylen = 0;
		int	showcmd_idx;
		check_end_reg_executing(advance);
		
		if (typebuf.tb_maplen)
		    line_breakcheck();
		else
		    ui_breakcheck();		
		if (got_int)
		{
		    
		    c = inchar(typebuf.tb_buf, typebuf.tb_buflen - 1, 0L);

		    
		    if ((c || typebuf.tb_maplen)
				     && (State & (MODE_INSERT | MODE_CMDLINE)))
			c = ESC;
		    else
			c = Ctrl_C;
		    flush_buffers(FLUSH_INPUT);	

		    if (advance)
		    {
			
			
			*typebuf.tb_buf = c;
			gotchars(typebuf.tb_buf, 1);
		    }
		    cmd_silent = FALSE;

		    break;
		}
		else if (typebuf.tb_len > 0)
		{
		    
		    map_result_T result = handle_mapping(
						&keylen, &timedout, &mapdepth);

		    if (result == map_result_retry)
			
			continue;
		    if (result == map_result_fail)
		    {
			
			c = -1;
			break;
		    }
		    if (result == map_result_get)
		    {

			c = typebuf.tb_buf[typebuf.tb_off];
			if (advance)	
			{
			    cmd_silent = (typebuf.tb_silent > 0);
			    if (typebuf.tb_maplen > 0)
				KeyTyped = FALSE;
			    else
			    {
				KeyTyped = TRUE;
				
				gotchars(typebuf.tb_buf
						 + typebuf.tb_off, 1);
			    }
			    KeyNoremap = typebuf.tb_noremap[typebuf.tb_off];
			    del_typebuf(1, 0);
			}
			break;  
		    }

		    
		}


		
		c = 0;
		new_wcol = curwin->w_wcol;
		new_wrow = curwin->w_wrow;
		if (	   advance
			&& typebuf.tb_len == 1
			&& typebuf.tb_buf[typebuf.tb_off] == ESC
			&& !no_mapping
			&& kitty_protocol_state != KKPS_ENABLED
			&& ex_normal_busy == 0
			&& typebuf.tb_maplen == 0
			&& (State & MODE_INSERT)
			&& (p_timeout
			    || (keylen == KEYLEN_PART_KEY && p_ttimeout))
			&& (c = inchar(typebuf.tb_buf + typebuf.tb_off
					       + typebuf.tb_len, 3, 25L)) == 0)
		{
		    colnr_T	col = 0;
		    char_u	*ptr;

		    if (mode_displayed)
		    {
			unshowmode(TRUE);
			mode_deleted = TRUE;
		    }
#ifdef FEAT_GUI
		    
		    if (gui.in_use && State != MODE_NORMAL && !cmd_silent)
		    {
			int	    save_State;

			save_State = State;
			State = MODE_NORMAL;
			gui_update_cursor(TRUE, FALSE);
			State = save_State;
			shape_changed = TRUE;
		    }
#endif
		    validate_cursor();
		    old_wcol = curwin->w_wcol;
		    old_wrow = curwin->w_wrow;

		    
		    if (curwin->w_cursor.col != 0)
		    {
			if (curwin->w_wcol > 0)
			{
			    
			    
			    
			    
			    if (did_ai && *skipwhite(ml_get_curline()
						+ curwin->w_cursor.col) == NUL)
			    {
				chartabsize_T cts;

				curwin->w_wcol = 0;
				ptr = ml_get_curline();
				init_chartabsize_arg(&cts, curwin,
					  curwin->w_cursor.lnum, 0, ptr, ptr);
				while (cts.cts_ptr < ptr + curwin->w_cursor.col)
				{
				    if (!VIM_ISWHITE(*cts.cts_ptr))
					curwin->w_wcol = cts.cts_vcol;
				    cts.cts_vcol += lbr_chartabsize(&cts);
				    if (has_mbyte)
					cts.cts_ptr +=
						   (*mb_ptr2len)(cts.cts_ptr);
				    else
					++cts.cts_ptr;
				}
				clear_chartabsize_arg(&cts);

				curwin->w_wrow = curwin->w_cline_row
					   + curwin->w_wcol / curwin->w_width;
				curwin->w_wcol %= curwin->w_width;
				curwin->w_wcol += curwin_col_off();
				col = 0;	
			    }
			    else
			    {
				--curwin->w_wcol;
				col = curwin->w_cursor.col - 1;
			    }
			}
			else if (curwin->w_p_wrap && curwin->w_wrow)
			{
			    --curwin->w_wrow;
			    curwin->w_wcol = curwin->w_width - 1;
			    col = curwin->w_cursor.col - 1;
			}
			if (has_mbyte && col > 0 && curwin->w_wcol > 0)
			{
			    
			    
			    ptr = ml_get_curline();
			    col -= (*mb_head_off)(ptr, ptr + col);
			    if ((*mb_ptr2cells)(ptr + col) > 1)
				--curwin->w_wcol;
			}
		    }
		    setcursor();
		    out_flush();
		    new_wcol = curwin->w_wcol;
		    new_wrow = curwin->w_wrow;
		    curwin->w_wcol = old_wcol;
		    curwin->w_wrow = old_wrow;
		}
		if (c < 0)
		    continue;	

		
		
		for (n = 1; n <= c; ++n)
		    typebuf.tb_noremap[typebuf.tb_off + n] = RM_YES;
		typebuf.tb_len += c;

		
		if (typebuf.tb_len >= typebuf.tb_maplen + MAXMAPLEN)
		{
		    timedout = TRUE;
		    continue;
		}

		if (ex_normal_busy > 0)
		{
		    static int tc = 0;

		    
		    
		    
		    if (typebuf.tb_len > 0)
		    {
			timedout = TRUE;
			continue;
		    }

		    
		    
		    
		    
		    
		    
		    if (p_im && (State & MODE_INSERT))
			c = Ctrl_L;
#ifdef FEAT_TERMINAL
		    else if (terminal_is_active())
			c = K_CANCEL;
#endif
		    else if ((State & MODE_CMDLINE)
					     || (cmdwin_type > 0 && tc == ESC))
			c = Ctrl_C;
		    else
			c = ESC;
		    tc = c;
		    
		    if (advance)
			typebuf_was_empty = TRUE;

		    
		    if (pending_exmode_active)
			exmode_active = EXMODE_NORMAL;

		    
		    typebuf.tb_no_abbr_cnt = 0;

		    break;
		}


		
		
		
		
		
		
		
		if (((State & MODE_INSERT) != 0 || p_lz)
			&& (State & MODE_CMDLINE) == 0
			&& advance && must_redraw != 0 && !need_wait_return)
		{
		    update_screen(0);
		    setcursor(); 
		}

		
		showcmd_idx = 0;
		int showing_partial = FALSE;
		if (typebuf.tb_len > 0 && advance && !exmode_active)
		{
		    if (((State & (MODE_NORMAL | MODE_INSERT))
						      || State == MODE_LANGMAP)
			    && State != MODE_HITRETURN)
		    {
			
			if (State & MODE_INSERT
			    && ptr2cells(typebuf.tb_buf + typebuf.tb_off
						   + typebuf.tb_len - 1) == 1)
			{
			    edit_putchar(typebuf.tb_buf[typebuf.tb_off
						+ typebuf.tb_len - 1], FALSE);
			    setcursor(); 
			    showing_partial = TRUE;
			}
			
			old_wcol = curwin->w_wcol;
			old_wrow = curwin->w_wrow;
			curwin->w_wcol = new_wcol;
			curwin->w_wrow = new_wrow;
			push_showcmd();
			if (typebuf.tb_len > SHOWCMD_COLS)
			    showcmd_idx = typebuf.tb_len - SHOWCMD_COLS;
			while (showcmd_idx < typebuf.tb_len)
			    add_byte_to_showcmd(
			       typebuf.tb_buf[typebuf.tb_off + showcmd_idx++]);
			curwin->w_wcol = old_wcol;
			curwin->w_wrow = old_wrow;
		    }

		    
		    
		    if ((State & MODE_CMDLINE)
			    && get_cmdline_info()->cmdbuff != NULL
#if defined(FEAT_CRYPT) || defined(FEAT_EVAL)
			    && cmdline_star == 0
#endif
			    && ptr2cells(typebuf.tb_buf + typebuf.tb_off
						   + typebuf.tb_len - 1) == 1)
		    {
			putcmdline(typebuf.tb_buf[typebuf.tb_off
						+ typebuf.tb_len - 1], FALSE);
			showing_partial = TRUE;
		    }
		}


		if (typebuf.tb_len == 0)
		    
		    
		    timedout = FALSE;

		if (advance)
		{
		    if (typebuf.tb_len == 0
			    || !(p_timeout
				 || (p_ttimeout && keylen == KEYLEN_PART_KEY)))
			
			wait_time = -1L;
		    else if (keylen == KEYLEN_PART_KEY && p_ttm >= 0)
			wait_time = p_ttm;
		    else
			wait_time = p_tm;
		}
		else
		    wait_time = 0;

		wait_tb_len = typebuf.tb_len;
		c = inchar(typebuf.tb_buf + typebuf.tb_off + typebuf.tb_len,
			typebuf.tb_buflen - typebuf.tb_off - typebuf.tb_len - 1,
			wait_time);

		if (showcmd_idx != 0)
		    pop_showcmd();
		if (showing_partial)
		{
		    if (State & MODE_INSERT)
			edit_unputchar();
		    if ((State & MODE_CMDLINE)
					&& get_cmdline_info()->cmdbuff != NULL)
			unputcmdline();
		    else
			setcursor();	
		}

		if (c < 0)
		    continue;		
		if (c == NUL)		
		{
		    if (!advance)
			break;
		    if (wait_tb_len > 0)	
		    {
			timedout = TRUE;
			continue;
		    }
		}
		else
		{	    
		    while (typebuf.tb_buf[typebuf.tb_off
						     + typebuf.tb_len] != NUL)
			typebuf.tb_noremap[typebuf.tb_off
						 + typebuf.tb_len++] = RM_YES;
#ifdef HAVE_INPUT_METHOD
		    
		    
		    vgetc_im_active = im_get_status();
#endif
		}
	    }	    
	}	

	
    } while ((c < 0 && c != K_CANCEL) || (advance && c == NUL));

    
    if (advance && p_smd && msg_silent == 0 && (State & MODE_INSERT))
    {
	if (c == ESC && !mode_deleted && !no_mapping && mode_displayed)
	{
	    if (typebuf.tb_len && !KeyTyped)
		redraw_cmdline = TRUE;	    
	    else
		unshowmode(FALSE);
	}
	else if (c != ESC && mode_deleted)
	{
	    if (typebuf.tb_len && !KeyTyped)
		redraw_cmdline = TRUE;	    
	    else
		showmode();
	}
    }
#ifdef FEAT_GUI
    
    if (gui.in_use && shape_changed)
	gui_update_cursor(TRUE, FALSE);
#endif
    if (timedout && c == ESC)
    {
	
	
	gotchars_ignore();
    }

    --vgetc_busy;

    return c;
}


    static int
inchar(
    char_u	*buf,
    int		maxlen,
    int	wait_time)	    
{
    int		len = 0;	    
    int		retesc = FALSE;	    
    int		script_char;
    int		tb_change_cnt = typebuf.tb_change_cnt;

    if (wait_time == -1L || wait_time > 100L)  
    {
	cursor_on();
	out_flush_cursor(FALSE, FALSE);
#if defined(FEAT_GUI) && defined(FEAT_MOUSESHAPE)
	if (gui.in_use && postponed_mouseshape)
	    update_mouseshape(-1);
#endif
    }

    
    if (State != MODE_HITRETURN)
    {
	did_outofmem_msg = FALSE;   
	did_swapwrite_msg = FALSE;  
    }
    undo_off = FALSE;		    

    
    script_char = -1;
    while (scriptin[curscript] != NULL && script_char < 0
#ifdef FEAT_EVAL
	    && !ignore_script
#endif
	    )
    {
#ifdef MESSAGE_QUEUE
	parse_queued_messages();
#endif

	if (got_int || (script_char = getc(scriptin[curscript])) < 0)
	{
	    
	    
	    
	    closescript();
	    
	    if (got_int)
		retesc = TRUE;
	    else
		return -1;
	}
	else
	{
	    buf[0] = script_char;
	    len = 1;
	}
    }

    if (script_char < 0)	
    {
	
	if (got_int)
	{
#define DUM_LEN (MAXMAPLEN * 3 + 3)
	    char_u	dum[DUM_LEN + 1];

	    for (;;)
	    {
		len = ui_inchar(dum, DUM_LEN, 0L, 0);
		if (len == 0 || (len == 1 && dum[0] == Ctrl_C))
		    break;
	    }
	    return retesc;
	}

	
	if (wait_time == -1L || wait_time > 10L)
	    out_flush();

	
	len = ui_inchar(buf, maxlen / 3, wait_time, tb_change_cnt);
    }

    
    
    if (typebuf_changed(tb_change_cnt))
	return 0;

    
    
    
    if (len > 0 && ++typebuf.tb_change_cnt == 0)
	typebuf.tb_change_cnt = 1;

    return fix_input_buffer(buf, len);
}


    int
fix_input_buffer(char_u *buf, int len)
{
    int		i;
    char_u	*p = buf;

    
    for (i = len; --i >= 0; ++p)
    {
#ifdef FEAT_GUI
	
	
	if (gui.in_use && p[0] == CSI && i >= 2)
	{
	    p += 2;
	    i -= 2;
	}
# ifndef MSWIN
	
	
	else if (!gui.in_use && p[0] == CSI)
	{
	    mch_memmove(p + 3, p + 1, (size_t)i);
	    *p++ = K_SPECIAL;
	    *p++ = KS_EXTRA;
	    *p = (int)KE_CSI;
	    len += 2;
	}
# endif
	else
#endif
	if (p[0] == NUL || (p[0] == K_SPECIAL
		    
		    && (i < 2 || p[1] != KS_EXTRA || p[2] != (int)KE_CURSORHOLD)
#if defined(MSWIN) && (!defined(FEAT_GUI) || defined(VIMDLL))
		    
		    && (
# ifdef VIMDLL
			gui.in_use ||
# endif
			(i < 2 || p[1] != KS_MODIFIER))
#endif
		    ))
	{
	    mch_memmove(p + 3, p + 1, (size_t)i);
	    p[2] = K_THIRD(p[0]);
	    p[1] = K_SECOND(p[0]);
	    p[0] = K_SPECIAL;
	    p += 2;
	    len += 2;
	}
    }
    *p = NUL;		
    return len;
}

#if defined(USE_INPUT_BUF) || defined(PROTO)

    int
input_available(void)
{
    return (!vim_is_input_buf_empty()
# if defined(FEAT_CLIENTSERVER) || defined(FEAT_EVAL)
	    || typebuf_was_filled
# endif
	    );
}
#endif


    static char_u *
getcmdkeycmd(
	int		promptc UNUSED,
	void		*cookie UNUSED,
	int		indent UNUSED,
	getline_opt_T	do_concat UNUSED)
{
    garray_T	line_ga;
    int		c1 = -1;
    int		c2;
    int		cmod = 0;
    int		aborted = FALSE;

    ga_init2(&line_ga, 1, 32);

    
    no_mapping++;

    got_int = FALSE;
    while (c1 != NUL && !aborted)
    {
	if (ga_grow(&line_ga, 32) == FAIL)
	{
	    aborted = TRUE;
	    break;
	}

	if (vgetorpeek(FALSE) == NUL)
	{
	    
	    
	    emsg(_(e_cmd_mapping_must_end_with_cr));
	    aborted = TRUE;
	    break;
	}

	
	c1 = vgetorpeek(TRUE);

	
	if (c1 == K_SPECIAL)
	{
	    c1 = vgetorpeek(TRUE);
	    c2 = vgetorpeek(TRUE);
	    if (c1 == KS_MODIFIER)
	    {
		cmod = c2;
		continue;
	    }
	    c1 = TO_SPECIAL(c1, c2);

	    
	    
	    
	    if (c1 == K_ESC)
		c1 = ESC;
	}

	if (got_int)
	    aborted = TRUE;
	else if (c1 == '\r' || c1 == '\n')
	    c1 = NUL;  
	else if (c1 == ESC)
	    aborted = TRUE;
	else if (c1 == K_COMMAND || c1 == K_SCRIPT_COMMAND)
	{
	    
	    emsg(_(e_cmd_mapping_must_end_with_cr_before_second_cmd));
	    aborted = TRUE;
	}
	else if (c1 == K_SNR)
	{
	    ga_concat(&line_ga, (char_u *)"<SNR>");
	}
	else
	{
	    if (cmod != 0)
	    {
		ga_append(&line_ga, K_SPECIAL);
		ga_append(&line_ga, KS_MODIFIER);
		ga_append(&line_ga, cmod);
	    }
	    if (IS_SPECIAL(c1))
	    {
		ga_append(&line_ga, K_SPECIAL);
		ga_append(&line_ga, K_SECOND(c1));
		ga_append(&line_ga, K_THIRD(c1));
	    }
	    else
		ga_append(&line_ga, c1);
	}

	cmod = 0;
    }

    no_mapping--;

    if (aborted)
	ga_clear(&line_ga);

    return (char_u *)line_ga.ga_data;
}

#if defined(FEAT_EVAL) || defined(PROTO)

    void
may_add_last_used_map_to_redobuff(void)
{
    char_u  buf[3 + 20];
    int	    sid = -1;

    if (last_used_map != NULL)
	sid = last_used_map->m_script_ctx.sc_sid;
    if (sid < 0)
	sid = last_used_sid;

    if (sid < 0)
	return;

    
    buf[0] = K_SPECIAL;
    buf[1] = KS_EXTRA;
    buf[2] = KE_SID;
    vim_snprintf((char *)buf + 3, 20, "%d;", sid);
    add_buff(&redobuff, buf, -1L);
}
#endif

    int
do_cmdkey_command(int key UNUSED, int flags)
{
    int	    res;
#ifdef FEAT_EVAL
    sctx_T  save_current_sctx = {-1, 0, 0, 0};

    if (key == K_SCRIPT_COMMAND
		  && (last_used_map != NULL || SCRIPT_ID_VALID(last_used_sid)))
    {
	save_current_sctx = current_sctx;
	if (last_used_map != NULL)
	    current_sctx = last_used_map->m_script_ctx;
	else
	{
	    current_sctx.sc_sid = last_used_sid;
	    current_sctx.sc_lnum = 0;
	    current_sctx.sc_version = SCRIPT_ITEM(last_used_sid)->sn_version;
	}
    }
#endif

    res = do_cmdline(NULL, getcmdkeycmd, NULL, flags);

#ifdef FEAT_EVAL
    if (save_current_sctx.sc_sid >= 0)
	current_sctx = save_current_sctx;
#endif

    return res;
}

#if defined(FEAT_EVAL) || defined(PROTO)
    void
reset_last_used_map(mapblock_T *mp)
{
    if (last_used_map != mp)
	return;

    last_used_map = NULL;
    last_used_sid = -1;
}
#endif
