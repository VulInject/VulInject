

#include "vim.h"

#if defined(HAVE_WCHAR_H)
# include <wchar.h>	    
#endif

static int win_nolbr_chartabsize(chartabsize_T *cts, int *headp);
static unsigned nr2hex(unsigned c);

static int    chartab_initialized = FALSE;



#define SET_CHARTAB(buf, c) (buf)->b_chartab[(unsigned)(c) >> 3] |= (1 << ((c) & 0x7))
#define RESET_CHARTAB(buf, c) (buf)->b_chartab[(unsigned)(c) >> 3] &= ~(1 << ((c) & 0x7))
#define GET_CHARTAB(buf, c) ((buf)->b_chartab[(unsigned)(c) >> 3] & (1 << ((c) & 0x7)))


static char_u	g_chartab[256];


#define CT_CELL_MASK	0x07	
#define CT_PRINT_CHAR	0x10	
#define CT_ID_CHAR	0x20	
#define CT_FNAME_CHAR	0x40	

static int in_win_border(win_T *wp, colnr_T vcol);


    int
init_chartab(void)
{
    return buf_init_chartab(curbuf, TRUE);
}

    int
buf_init_chartab(
    buf_T	*buf,
    int		global)		
{
    int		c;
    int		c2;
    char_u	*p;
    int		i;
    int		tilde;
    int		do_isalpha;

    if (global)
    {
	
	c = 0;
	while (c < ' ')
	    g_chartab[c++] = (dy_flags & DY_UHEX) ? 4 : 2;
	while (c <= '~')
	    g_chartab[c++] = 1 + CT_PRINT_CHAR;
	while (c < 256)
	{
	    
	    if (enc_utf8 && c >= 0xa0)
		g_chartab[c++] = CT_PRINT_CHAR + 1;
	    
	    else if (enc_dbcs == DBCS_JPNU && c == 0x8e)
		g_chartab[c++] = CT_PRINT_CHAR + 1;
	    
	    else if (enc_dbcs != 0 && MB_BYTE2LEN(c) == 2)
		g_chartab[c++] = CT_PRINT_CHAR + 2;
	    else
		
		g_chartab[c++] = (dy_flags & DY_UHEX) ? 4 : 2;
	}

	
	for (c = 1; c < 256; ++c)
	    if ((enc_dbcs != 0 && MB_BYTE2LEN(c) > 1)
		    || (enc_dbcs == DBCS_JPNU && c == 0x8e)
		    || (enc_utf8 && c >= 0xa0))
		g_chartab[c] |= CT_FNAME_CHAR;
    }

    
    CLEAR_FIELD(buf->b_chartab);
    if (enc_dbcs != 0)
	for (c = 0; c < 256; ++c)
	{
	    
	    if (MB_BYTE2LEN(c) == 2)
		SET_CHARTAB(buf, c);
	}

    
    if (buf->b_p_lisp)
	SET_CHARTAB(buf, '-');

    
    
    
    for (i = global ? 0 : 3; i <= 3; ++i)
    {
	if (i == 0)
	    p = p_isi;		
	else if (i == 1)
	    p = p_isp;		
	else if (i == 2)
	    p = p_isf;		
	else	
	    p = buf->b_p_isk;	

	while (*p)
	{
	    tilde = FALSE;
	    do_isalpha = FALSE;
	    if (*p == '^' && p[1] != NUL)
	    {
		tilde = TRUE;
		++p;
	    }
	    if (VIM_ISDIGIT(*p))
		c = getdigits(&p);
	    else if (has_mbyte)
		c = mb_ptr2char_adv(&p);
	    else
		c = *p++;
	    c2 = -1;
	    if (*p == '-' && p[1] != NUL)
	    {
		++p;
		if (VIM_ISDIGIT(*p))
		    c2 = getdigits(&p);
		else if (has_mbyte)
		    c2 = mb_ptr2char_adv(&p);
		else
		    c2 = *p++;
	    }
	    if (c <= 0 || c >= 256 || (c2 < c && c2 != -1) || c2 >= 256
						 || !(*p == NUL || *p == ','))
		return FAIL;

	    if (c2 == -1)	
	    {
		
		if (c == '@')
		{
		    do_isalpha = TRUE;
		    c = 1;
		    c2 = 255;
		}
		else
		    c2 = c;
	    }
	    while (c <= c2)
	    {
		
		
		
		if (!do_isalpha || MB_ISLOWER(c) || MB_ISUPPER(c))
		{
		    if (i == 0)			
		    {
			if (tilde)
			    g_chartab[c] &= ~CT_ID_CHAR;
			else
			    g_chartab[c] |= CT_ID_CHAR;
		    }
		    else if (i == 1)		
		    {
			if ((c < ' ' || c > '~'
				
				
			    ) && !(enc_dbcs && MB_BYTE2LEN(c) == 2))
			{
			    if (tilde)
			    {
				g_chartab[c] = (g_chartab[c] & ~CT_CELL_MASK)
					     + ((dy_flags & DY_UHEX) ? 4 : 2);
				g_chartab[c] &= ~CT_PRINT_CHAR;
			    }
			    else
			    {
				g_chartab[c] = (g_chartab[c] & ~CT_CELL_MASK)
									   + 1;
				g_chartab[c] |= CT_PRINT_CHAR;
			    }
			}
		    }
		    else if (i == 2)		
		    {
			if (tilde)
			    g_chartab[c] &= ~CT_FNAME_CHAR;
			else
			    g_chartab[c] |= CT_FNAME_CHAR;
		    }
		    else 
		    {
			if (tilde)
			    RESET_CHARTAB(buf, c);
			else
			    SET_CHARTAB(buf, c);
		    }
		}
		++c;
	    }

	    c = *p;
	    p = skip_to_option_part(p);
	    if (c == ',' && *p == NUL)
		
		return FAIL;
	}
    }
    chartab_initialized = TRUE;
    return OK;
}


    void
trans_characters(
    char_u	*buf,
    int		bufsize)
{
    int		len;		
    int		room;		
    char_u	*trs;		
    int		trs_len;	

    len = (int)STRLEN(buf);
    room = bufsize - len;
    while (*buf != 0)
    {
	
	if (has_mbyte && (trs_len = (*mb_ptr2len)(buf)) > 1)
	    len -= trs_len;
	else
	{
	    trs = transchar_byte(*buf);
	    trs_len = (int)STRLEN(trs);
	    if (trs_len > 1)
	    {
		room -= trs_len - 1;
		if (room <= 0)
		    return;
		mch_memmove(buf + trs_len, buf + 1, (size_t)len);
	    }
	    mch_memmove(buf, trs, (size_t)trs_len);
	    --len;
	}
	buf += trs_len;
    }
}


    char_u *
transstr(char_u *s)
{
    char_u	*res;
    char_u	*p;
    int		l, len, c;
    char_u	hexbuf[11];

    if (has_mbyte)
    {
	
	
	len = 0;
	p = s;
	while (*p != NUL)
	{
	    if ((l = (*mb_ptr2len)(p)) > 1)
	    {
		c = (*mb_ptr2char)(p);
		p += l;
		if (vim_isprintc(c))
		    len += l;
		else
		{
		    transchar_hex(hexbuf, c);
		    len += (int)STRLEN(hexbuf);
		}
	    }
	    else
	    {
		l = byte2cells(*p++);
		if (l > 0)
		    len += l;
		else
		    len += 4;	
	    }
	}
	res = alloc(len + 1);
    }
    else
	res = alloc(vim_strsize(s) + 1);

    if (res == NULL)
	return NULL;

    *res = NUL;
    p = s;
    while (*p != NUL)
    {
	if (has_mbyte && (l = (*mb_ptr2len)(p)) > 1)
	{
	    c = (*mb_ptr2char)(p);
	    if (vim_isprintc(c))
		STRNCAT(res, p, l);	
	    else
		transchar_hex(res + STRLEN(res), c);
	    p += l;
	}
	else
	    STRCAT(res, transchar_byte(*p++));
    }
    return res;
}


    char_u *
str_foldcase(
    char_u	*str,
    int		orglen,
    char_u	*buf,
    int		buflen)
{
    garray_T	ga;
    int		i;
    int		len = orglen;

#define GA_CHAR(i)  ((char_u *)ga.ga_data)[i]
#define GA_PTR(i)   ((char_u *)ga.ga_data + (i))
#define STR_CHAR(i)  (buf == NULL ? GA_CHAR(i) : buf[i])
#define STR_PTR(i)   (buf == NULL ? GA_PTR(i) : buf + (i))

    
    if (buf == NULL)
    {
	ga_init2(&ga, 1, 10);
	if (ga_grow(&ga, len + 1) == FAIL)
	    return NULL;
	mch_memmove(ga.ga_data, str, (size_t)len);
	ga.ga_len = len;
    }
    else
    {
	if (len >= buflen)	    
	    len = buflen - 1;
	mch_memmove(buf, str, (size_t)len);
    }
    if (buf == NULL)
	GA_CHAR(len) = NUL;
    else
	buf[len] = NUL;

    
    i = 0;
    while (STR_CHAR(i) != NUL)
    {
	if (enc_utf8 || (has_mbyte && MB_BYTE2LEN(STR_CHAR(i)) > 1))
	{
	    if (enc_utf8)
	    {
		int	c = utf_ptr2char(STR_PTR(i));
		int	olen = utf_ptr2len(STR_PTR(i));
		int	lc = utf_tolower(c);

		
		
		
		if ((c < 0x80 || olen > 1) && c != lc)
		{
		    int	    nlen = utf_char2len(lc);

		    
		    
		    if (olen != nlen)
		    {
			if (nlen > olen)
			{
			    if (buf == NULL
				    ? ga_grow(&ga, nlen - olen + 1) == FAIL
				    : len + nlen - olen >= buflen)
			    {
				
				lc = c;
				nlen = olen;
			    }
			}
			if (olen != nlen)
			{
			    if (buf == NULL)
			    {
				STRMOVE(GA_PTR(i) + nlen, GA_PTR(i) + olen);
				ga.ga_len += nlen - olen;
			    }
			    else
			    {
				STRMOVE(buf + i + nlen, buf + i + olen);
				len += nlen - olen;
			    }
			}
		    }
		    (void)utf_char2bytes(lc, STR_PTR(i));
		}
	    }
	    
	    i += (*mb_ptr2len)(STR_PTR(i));
	}
	else
	{
	    if (buf == NULL)
		GA_CHAR(i) = TOLOWER_LOC(GA_CHAR(i));
	    else
		buf[i] = TOLOWER_LOC(buf[i]);
	    ++i;
	}
    }

    if (buf == NULL)
	return (char_u *)ga.ga_data;
    return buf;
}


static char_u	transchar_charbuf[7];

    char_u *
transchar(int c)
{
    return transchar_buf(curbuf, c);
}

    char_u *
transchar_buf(buf_T *buf, int c)
{
    int			i;

    i = 0;
    if (IS_SPECIAL(c))	    
    {
	transchar_charbuf[0] = '~';
	transchar_charbuf[1] = '@';
	i = 2;
	c = K_SECOND(c);
    }

    if ((!chartab_initialized && ((c >= ' ' && c <= '~')))
					|| (c < 256 && vim_isprintc_strict(c)))
    {
	
	transchar_charbuf[i] = c;
	transchar_charbuf[i + 1] = NUL;
    }
    else
	transchar_nonprint(buf, transchar_charbuf + i, c);
    return transchar_charbuf;
}


    char_u *
transchar_byte(int c)
{
    return transchar_byte_buf(curbuf, c);
}


    char_u *
transchar_byte_buf(buf_T *buf, int c)
{
    if (enc_utf8 && c >= 0x80)
    {
	transchar_nonprint(buf, transchar_charbuf, c);
	return transchar_charbuf;
    }
    return transchar_buf(buf, c);
}

    void
transchar_nonprint(buf_T *buf, char_u *charbuf, int c)
{
    if (c == NL)
	c = NUL;		
    else if (buf != NULL && c == CAR && get_fileformat(buf) == EOL_MAC)
	c = NL;			

    if (dy_flags & DY_UHEX)		
	transchar_hex(charbuf, c);

    else if (c <= 0x7f)			
    {
	charbuf[0] = '^';
	charbuf[1] = c ^ 0x40;		
	charbuf[2] = NUL;
    }
    else if (enc_utf8)
    {
	transchar_hex(charbuf, c);
    }
    else if (c >= ' ' + 0x80 && c <= '~' + 0x80)    
    {
	charbuf[0] = '|';
	charbuf[1] = c - 0x80;
	charbuf[2] = NUL;
    }
    else					    
    {
	charbuf[0] = '~';
	charbuf[1] = (c - 0x80) ^ 0x40;	
	charbuf[2] = NUL;
    }
}

    void
transchar_hex(char_u *buf, int c)
{
    int		i = 0;

    buf[0] = '<';
    if (c > 255)
    {
	buf[++i] = nr2hex((unsigned)c >> 12);
	buf[++i] = nr2hex((unsigned)c >> 8);
    }
    buf[++i] = nr2hex((unsigned)c >> 4);
    buf[++i] = nr2hex((unsigned)c);
    buf[++i] = '>';
    buf[++i] = NUL;
}


    static unsigned
nr2hex(unsigned c)
{
    if ((c & 0xf) <= 9)
	return (c & 0xf) + '0';
    return (c & 0xf) - 10 + 'a';
}


    int
byte2cells(int b)
{
    if (enc_utf8 && b >= 0x80)
	return 0;
    return (g_chartab[b] & CT_CELL_MASK);
}


    int
char2cells(int c)
{
    if (IS_SPECIAL(c))
	return char2cells(K_SECOND(c)) + 2;
    if (c >= 0x80)
    {
	
	if (enc_utf8)
	    return utf_char2cells(c);
	
	
	if (enc_dbcs != 0 && c >= 0x100)
	{
	    if (enc_dbcs == DBCS_JPNU && ((unsigned)c >> 8) == 0x8e)
		return 1;
	    return 2;
	}
    }
    return (g_chartab[c & 0xff] & CT_CELL_MASK);
}


    int
ptr2cells(char_u *p)
{
    if (!has_mbyte)
	return byte2cells(*p);

    
    if (enc_utf8 && *p >= 0x80)
	return utf_ptr2cells(p);
    
    return (g_chartab[*p] & CT_CELL_MASK);
}


    int
vim_strsize(char_u *s)
{
    return vim_strnsize(s, (int)MAXCOL);
}


    int
vim_strnsize(char_u *s, int len)
{
    int		size = 0;

    while (*s != NUL && --len >= 0)
    {
	int	    l = (*mb_ptr2len)(s);

	size += ptr2cells(s);
	s += l;
	len -= l - 1;
    }

    return size;
}



#ifdef FEAT_VARTABS
# define RET_WIN_BUF_CHARTABSIZE(wp, buf, p, col) \
    if (*(p) == TAB && (!(wp)->w_p_list || (wp)->w_lcs_chars.tab1)) \
    { \
	return tabstop_padding(col, (buf)->b_p_ts, (buf)->b_p_vts_array); \
    } \
    else \
	return ptr2cells(p);
#else
# define RET_WIN_BUF_CHARTABSIZE(wp, buf, p, col) \
    if (*(p) == TAB && (!(wp)->w_p_list || wp->w_lcs_chars.tab1)) \
    { \
	int ts; \
	ts = (buf)->b_p_ts; \
	return (int)(ts - (col % ts)); \
    } \
    else \
	return ptr2cells(p);
#endif

    int
chartabsize(char_u *p, colnr_T col)
{
    RET_WIN_BUF_CHARTABSIZE(curwin, curbuf, p, col)
}

#ifdef FEAT_LINEBREAK
    static int
win_chartabsize(win_T *wp, char_u *p, colnr_T col)
{
    RET_WIN_BUF_CHARTABSIZE(wp, wp->w_buffer, p, col)
}
#endif


    int
linetabsize_str(char_u *s)
{
    return linetabsize_col(0, s);
}


    int
linetabsize_col(int startcol, char_u *s)
{
    chartabsize_T cts;
    vimlong_T vcol;

    init_chartabsize_arg(&cts, curwin, 0, startcol, s, s);
    vcol = cts.cts_vcol;

    while (*cts.cts_ptr != NUL)
    {
	vcol += lbr_chartabsize_adv(&cts);
	if (vcol > MAXCOL)
	{
	    cts.cts_vcol = MAXCOL;
	    break;
	}
	else
	    cts.cts_vcol = (int)vcol;
    }
    clear_chartabsize_arg(&cts);
    return (int)cts.cts_vcol;
}


    int
win_linetabsize(win_T *wp, linenr_T lnum, char_u *line, colnr_T len)
{
    chartabsize_T cts;

    init_chartabsize_arg(&cts, wp, lnum, 0, line, line);
    win_linetabsize_cts(&cts, len);
    clear_chartabsize_arg(&cts);
    return (int)cts.cts_vcol;
}


  int
linetabsize(win_T *wp, linenr_T lnum)
{
    return win_linetabsize(wp, lnum,
		       ml_get_buf(wp->w_buffer, lnum, FALSE), (colnr_T)MAXCOL);
}


    int
linetabsize_no_outer(win_T *wp, linenr_T lnum)
{
#ifndef FEAT_PROP_POPUP
    return linetabsize(wp, lnum);
#else
    chartabsize_T cts;
    char_u *line = ml_get_buf(wp->w_buffer, lnum, FALSE);

    init_chartabsize_arg(&cts, wp, lnum, 0, line, line);

    if (cts.cts_text_prop_count)
    {
	int write_idx = 0;
	for (int read_idx = 0; read_idx < cts.cts_text_prop_count; read_idx++)
	{
	    textprop_T *tp = &cts.cts_text_props[read_idx];
	    if (tp->tp_col != MAXCOL)
	    {
		if (read_idx != write_idx)
		    cts.cts_text_props[write_idx] = *tp;
		write_idx++;
	    }
	}
	cts.cts_text_prop_count = write_idx;
	if (cts.cts_text_prop_count == 0)
	    VIM_CLEAR(cts.cts_text_props);
    }

    win_linetabsize_cts(&cts, (colnr_T)MAXCOL);
    clear_chartabsize_arg(&cts);
    return (int)cts.cts_vcol;
#endif
}

    void
win_linetabsize_cts(chartabsize_T *cts, colnr_T len)
{
    vimlong_T vcol = cts->cts_vcol;
#ifdef FEAT_PROP_POPUP
    cts->cts_with_trailing = len == MAXCOL;
#endif
    for ( ; *cts->cts_ptr != NUL && (len == MAXCOL || cts->cts_ptr < cts->cts_line + len);
						      MB_PTR_ADV(cts->cts_ptr))
    {
	vcol += win_lbr_chartabsize(cts, NULL);
	if (vcol > MAXCOL)
	{
	    cts->cts_vcol = MAXCOL;
	    break;
	}
	else
	    cts->cts_vcol = (int)vcol;
    }
#ifdef FEAT_PROP_POPUP
    
    if (len == MAXCOL && cts->cts_has_prop_with_text && *cts->cts_ptr == NUL)
    {
	(void)win_lbr_chartabsize(cts, NULL);
	vcol += cts->cts_cur_text_width;
	
	
	if (cts->cts_ptr == cts->cts_line && cts->cts_prop_lines > 0)
	    ++vcol;
	cts->cts_vcol = vcol > MAXCOL ? MAXCOL : (int)vcol;
    }
#endif
}


    int
vim_isIDc(int c)
{
    return (c > 0 && c < 0x100 && (g_chartab[c] & CT_ID_CHAR));
}


    int
vim_isNormalIDc(int c)
{
    return ASCII_ISALNUM(c) || c == '_';
}


    int
vim_iswordc(int c)
{
    return vim_iswordc_buf(c, curbuf);
}

    int
vim_iswordc_buf(int c, buf_T *buf)
{
    if (c >= 0x100)
    {
	if (enc_dbcs != 0)
	    return dbcs_class((unsigned)c >> 8, (unsigned)(c & 0xff)) >= 2;
	if (enc_utf8)
	    return utf_class_buf(c, buf) >= 2;
	return FALSE;
    }
    return (c > 0 && GET_CHARTAB(buf, c) != 0);
}


    int
vim_iswordp(char_u *p)
{
    return vim_iswordp_buf(p, curbuf);
}

    int
vim_iswordp_buf(char_u *p, buf_T *buf)
{
    int	c = *p;

    if (has_mbyte && MB_BYTE2LEN(c) > 1)
	c = (*mb_ptr2char)(p);
    return vim_iswordc_buf(c, buf);
}


    int
vim_isfilec(int c)
{
    return (c >= 0x100 || (c > 0 && (g_chartab[c] & CT_FNAME_CHAR)));
}

#if defined(FEAT_SPELL) || defined(PROTO)

    int
vim_is_fname_char(int c)
{
    return vim_isfilec(c) || c == ',' || c == ' ' || c == '@';
}
#endif


    int
vim_isfilec_or_wc(int c)
{
    char_u buf[2];

    buf[0] = (char_u)c;
    buf[1] = NUL;
    return vim_isfilec(c) || c == ']' || mch_has_wildcard(buf);
}


    int
vim_isprintc(int c)
{
    if (enc_utf8 && c >= 0x100)
	return utf_printable(c);
    return (c >= 0x100 || (c > 0 && (g_chartab[c] & CT_PRINT_CHAR)));
}


    int
vim_isprintc_strict(int c)
{
    if (enc_dbcs != 0 && c < 0x100 && MB_BYTE2LEN(c) > 1)
	return FALSE;
    if (enc_utf8 && c >= 0x100)
	return utf_printable(c);
    return (c >= 0x100 || (c > 0 && (g_chartab[c] & CT_PRINT_CHAR)));
}


    void
init_chartabsize_arg(
	chartabsize_T	*cts,
	win_T		*wp,
	linenr_T	lnum UNUSED,
	colnr_T		col,
	char_u		*line,
	char_u		*ptr)
{
    CLEAR_POINTER(cts);
    cts->cts_win = wp;
    cts->cts_vcol = col;
    cts->cts_line = line;
    cts->cts_ptr = ptr;
#ifdef FEAT_LINEBREAK
    cts->cts_bri_size = -1;
#endif
#ifdef FEAT_PROP_POPUP
    if (lnum > 0 && !ignore_text_props)
    {
	char_u	*prop_start;
	int	count;

	count = get_text_props(wp->w_buffer, lnum, &prop_start, FALSE);
	cts->cts_text_prop_count = count;
	if (count > 0)
	{
	    
	    
	    cts->cts_text_props = ALLOC_MULT(textprop_T, count * 2);
	    if (cts->cts_text_props == NULL)
		cts->cts_text_prop_count = 0;
	    else
	    {
		int	i;

		mch_memmove(cts->cts_text_props + count, prop_start,
						   count * sizeof(textprop_T));
		for (i = 0; i < count; ++i)
		{
		    textprop_T *tp = cts->cts_text_props + i + count;
		    if (tp->tp_id < 0
				     && text_prop_type_valid(wp->w_buffer, tp))
		    {
			cts->cts_has_prop_with_text = TRUE;
			break;
		    }
		}
		if (!cts->cts_has_prop_with_text)
		{
		    
		    VIM_CLEAR(cts->cts_text_props);
		    cts->cts_text_prop_count = 0;
		}
		else
		{
		    int	    *text_prop_idxs;

		    
		    
		    
		    text_prop_idxs = ALLOC_MULT(int, count);
		    if (text_prop_idxs != NULL)
		    {
			for (i = 0; i < count; ++i)
			    text_prop_idxs[i] = i + count;
			sort_text_props(curbuf, cts->cts_text_props,
							text_prop_idxs, count);
			
			for (i = 0; i < count; ++i)
			    cts->cts_text_props[count - i - 1] =
					cts->cts_text_props[text_prop_idxs[i]];
			vim_free(text_prop_idxs);
		    }
		}
	    }
	}
    }
#endif
}


    void
clear_chartabsize_arg(chartabsize_T *cts UNUSED)
{
#ifdef FEAT_PROP_POPUP
    if (cts->cts_text_prop_count > 0)
    {
	VIM_CLEAR(cts->cts_text_props);
	cts->cts_text_prop_count = 0;
    }
#endif
}


    int
lbr_chartabsize(chartabsize_T *cts)
{
#if defined(FEAT_LINEBREAK) || defined(FEAT_PROP_POPUP)
    if (1
# ifdef FEAT_LINEBREAK
	&& !curwin->w_p_lbr && *get_showbreak_value(curwin) == NUL
							   && !curwin->w_p_bri
# endif
# ifdef FEAT_PROP_POPUP
	&& !cts->cts_has_prop_with_text
#endif
       )
    {
#endif
	if (curwin->w_p_wrap)
	    return win_nolbr_chartabsize(cts, NULL);
	RET_WIN_BUF_CHARTABSIZE(curwin, curbuf, cts->cts_ptr, cts->cts_vcol)
#if defined(FEAT_LINEBREAK) || defined(FEAT_PROP_POPUP)
    }
    return win_lbr_chartabsize(cts, NULL);
#endif
}


    int
lbr_chartabsize_adv(chartabsize_T *cts)
{
    int		retval;

    retval = lbr_chartabsize(cts);
    MB_PTR_ADV(cts->cts_ptr);
    return retval;
}


    int
win_lbr_chartabsize(
	chartabsize_T	*cts,
	int		*headp UNUSED)
{
    win_T	*wp = cts->cts_win;
#if defined(FEAT_PROP_POPUP) || defined(FEAT_LINEBREAK)
    char_u	*line = cts->cts_line; 
#endif
    char_u	*s = cts->cts_ptr;
    colnr_T	vcol = cts->cts_vcol;
#ifdef FEAT_LINEBREAK
    int		size;
    int		mb_added = 0;
    int		n;
    char_u	*sbr;
    int		no_sbr = FALSE;
#endif

#if defined(FEAT_PROP_POPUP)
    cts->cts_cur_text_width = 0;
    cts->cts_first_char = 0;
#endif

#if defined(FEAT_LINEBREAK) || defined(FEAT_PROP_POPUP)
    
    if (1
# ifdef FEAT_LINEBREAK
	    && !wp->w_p_lbr && !wp->w_p_bri && *get_showbreak_value(wp) == NUL
# endif
# ifdef FEAT_PROP_POPUP
	    && !cts->cts_has_prop_with_text
# endif
	    )
#endif
    {
	if (wp->w_p_wrap)
	    return win_nolbr_chartabsize(cts, headp);
	RET_WIN_BUF_CHARTABSIZE(wp, wp->w_buffer, s, vcol)
    }

#if defined(FEAT_LINEBREAK) || defined(FEAT_PROP_POPUP)
    int has_lcs_eol = wp->w_p_list && wp->w_lcs_chars.eol != NUL;

    
    size = win_chartabsize(wp, s, vcol);
    if (*s == NUL)
    {
	
	
	size = has_lcs_eol ? 1 : 0;
    }
# ifdef FEAT_LINEBREAK
    int is_doublewidth = has_mbyte && size == 2 && MB_BYTE2LEN(*s) > 1;
# endif

# ifdef FEAT_PROP_POPUP
    if (cts->cts_has_prop_with_text)
    {
	int	    tab_size = size;
	int	    charlen = *s == NUL ? 1 : mb_ptr2len(s);
	int	    i;
	int	    col = (int)(s - line);
	garray_T    *gap = &wp->w_buffer->b_textprop_text;

	
	
	if (has_lcs_eol)
	{
	    ++vcol;
	    --size;
	}

	for (i = 0; i < cts->cts_text_prop_count; ++i)
	{
	    textprop_T	*tp = cts->cts_text_props + i;
	    int		col_off = win_col_off(wp);

	    
	    
	    if (tp->tp_id < 0
		    && ((tp->tp_col - 1 >= col
					     && tp->tp_col - 1 < col + charlen)
		       || (tp->tp_col == MAXCOL
			   && ((tp->tp_flags & TP_FLAG_ALIGN_ABOVE)
				? col == 0
				: s[0] == NUL && cts->cts_with_trailing)))
		    && -tp->tp_id - 1 < gap->ga_len)
	    {
		char_u *p = ((char_u **)gap->ga_data)[-tp->tp_id - 1];

		if (p != NULL)
		{
		    int	cells;

		    if (tp->tp_col == MAXCOL)
		    {
			int n_extra = (int)STRLEN(p);

			cells = text_prop_position(wp, tp, vcol,
			     (vcol + size) % (wp->w_width - col_off) + col_off,
					      &n_extra, &p, NULL, NULL, FALSE);
#  ifdef FEAT_LINEBREAK
			no_sbr = TRUE;  
#  endif
		    }
		    else
			cells = vim_strsize(p);
		    cts->cts_cur_text_width += cells;
		    if (tp->tp_flags & TP_FLAG_ALIGN_ABOVE)
			cts->cts_first_char += cells;
		    else
			size += cells;
		    cts->cts_start_incl = tp->tp_flags & TP_FLAG_START_INCL;
		    if (*s == TAB)
		    {
			
			size -= tab_size;
			tab_size = win_chartabsize(wp, s, vcol + size);
			size += tab_size;
		    }
		    if (tp->tp_col == MAXCOL && (tp->tp_flags
				& (TP_FLAG_ALIGN_ABOVE | TP_FLAG_ALIGN_BELOW)))
			
			++cts->cts_prop_lines;
		}
	    }
	    if (tp->tp_col != MAXCOL && tp->tp_col - 1 > col)
		break;
	}
	if (has_lcs_eol)
	{
	    --vcol;
	    ++size;
	}
    }
# endif

# ifdef FEAT_LINEBREAK
    if (is_doublewidth && wp->w_p_wrap && in_win_border(wp, vcol + size - 2))
    {
	++size;		
	mb_added = 1;
    }

    
    int head = mb_added;
    sbr = no_sbr ? empty_option : get_showbreak_value(wp);
    
    if (size > 0 && wp->w_p_wrap && (*sbr != NUL || wp->w_p_bri))
    {
	int	col_off_prev = win_col_off(wp);
	int	width2 = wp->w_width - col_off_prev + win_col_off2(wp);
	colnr_T	wcol = vcol + col_off_prev;
#  ifdef FEAT_PROP_POPUP
	wcol -= wp->w_virtcol_first_char;
#  endif
	colnr_T	max_head_vcol = cts->cts_max_head_vcol;
	int	added = 0;

	
	int	head_prev = 0;
	if (wcol >= wp->w_width)
	{
	    wcol -= wp->w_width;
	    col_off_prev = wp->w_width - width2;
	    if (wcol >= width2 && width2 > 0)
		wcol %= width2;
	    if (*sbr != NUL)
		head_prev += vim_strsize(sbr);
	    if (wp->w_p_bri)
	    {
		if (cts->cts_bri_size < 0)
		    cts->cts_bri_size = get_breakindent_win(wp, line);
		head_prev += cts->cts_bri_size;
	    }
	    if (wcol < head_prev)
	    {
		head_prev -= wcol;
		wcol += head_prev;
		added += head_prev;
		if (max_head_vcol <= 0 || vcol < max_head_vcol)
		    head += head_prev;
	    }
	    else
		head_prev = 0;
	    wcol += col_off_prev;
	}

	if (wcol + size > wp->w_width)
	{
	    
	    int	head_mid = 0;
	    if (*sbr != NUL)
		head_mid += vim_strsize(sbr);
	    if (wp->w_p_bri)
	    {
		if (cts->cts_bri_size < 0)
		    cts->cts_bri_size = get_breakindent_win(wp, line);
		head_mid += cts->cts_bri_size;
	    }
	    if (head_mid > 0)
	    {
		
		int prev_rem = wp->w_width - wcol;
		int width = width2 - head_mid;

		if (width <= 0)
		    width = 1;
		
		int cnt = (size - prev_rem + width - 1) / width;
		added += cnt * head_mid;

		if (max_head_vcol == 0 || vcol + size + added < max_head_vcol)
		    head += cnt * head_mid;
		else if (max_head_vcol > vcol + head_prev + prev_rem)
		    head += (max_head_vcol - (vcol + head_prev + prev_rem)
					     + width2 - 1) / width2 * head_mid;
		else if (max_head_vcol < 0)
		{
		    int off = mb_added;
#  ifdef FEAT_PROP_POPUP
		    if (*s != NUL
			     && ((State & MODE_NORMAL) || cts->cts_start_incl))
			off += cts->cts_cur_text_width;
#  endif
		    if (off >= prev_rem)
			head += (1 + (off - prev_rem) / width) * head_mid;
		}
	    }
	}

	size += added;
    }

    if (headp != NULL)
	*headp = head;

    int need_lbr = FALSE;
    
    if (wp->w_p_lbr && wp->w_p_wrap && wp->w_width != 0
	    && VIM_ISBREAK((int)s[0]) && !VIM_ISBREAK((int)s[1]))
    {
	char_u	*t = cts->cts_line;
	while (VIM_ISBREAK((int)t[0]))
	    t++;
	
	need_lbr = s >= t;
    }
    if (need_lbr)
    {
	
	int numberextra = win_col_off(wp);
	colnr_T col_adj = size - 1;
	colnr_T colmax = (colnr_T)(wp->w_width - numberextra - col_adj);
	if (vcol >= colmax)
	{
	    colmax += col_adj;
	    n = colmax +  win_col_off2(wp);
	    if (n > 0)
		colmax += (((vcol - colmax) / n) + 1) * n - col_adj;
	}

	colnr_T vcol2 = vcol;
	for (;;)
	{
	    char_u *ps = s;
	    MB_PTR_ADV(s);
	    int c = *s;
	    if (!(c != NUL
		    && (VIM_ISBREAK(c)
			|| (!VIM_ISBREAK(c)
			       && (vcol2 == vcol || !VIM_ISBREAK((int)*ps))))))
		break;

	    vcol2 += win_chartabsize(wp, s, vcol2);
	    if (vcol2 >= colmax)		
	    {
		size = colmax - vcol + col_adj;
		break;
	    }
	}
    }

#  ifdef FEAT_PROP_POPUP
    size += cts->cts_first_char;
#  endif
    return size;
# endif
#endif
}


    static int
win_nolbr_chartabsize(
	chartabsize_T	*cts,
	int		*headp)
{
    win_T	*wp = cts->cts_win;
    char_u	*s = cts->cts_ptr;
    colnr_T	col = cts->cts_vcol;
    int		n;

    if (*s == TAB && (!wp->w_p_list || wp->w_lcs_chars.tab1))
    {
# ifdef FEAT_VARTABS
	return tabstop_padding(col, wp->w_buffer->b_p_ts,
				    wp->w_buffer->b_p_vts_array);
# else
	n = wp->w_buffer->b_p_ts;
	return (int)(n - (col % n));
# endif
    }
    n = ptr2cells(s);
    
    
    if (n == 2 && MB_BYTE2LEN(*s) > 1 && in_win_border(wp, col))
    {
	if (headp != NULL)
	    *headp = 1;
	return 3;
    }
    return n;
}


    static int
in_win_border(win_T *wp, colnr_T vcol)
{
    int		width1;		
    int		width2;		

    if (wp->w_width == 0)	
	return FALSE;
    width1 = wp->w_width - win_col_off(wp);
    if ((int)vcol < width1 - 1)
	return FALSE;
    if ((int)vcol == width1 - 1)
	return TRUE;
    width2 = width1 + win_col_off2(wp);
    if (width2 <= 0)
	return FALSE;
    return ((vcol - width1) % width2 == width2 - 1);
}


    void
getvcol(
    win_T	*wp,
    pos_T	*pos,
    colnr_T	*start,
    colnr_T	*cursor,
    colnr_T	*end)
{
    colnr_T	vcol;
    char_u	*ptr;		
    char_u	*line;		
    int		incr;
    int		head;
#ifdef FEAT_VARTABS
    int		*vts = wp->w_buffer->b_p_vts_array;
#endif
    int		ts = wp->w_buffer->b_p_ts;
    int		c;
    chartabsize_T cts;
#ifdef FEAT_PROP_POPUP
    int		on_NUL = FALSE;
#endif

    vcol = 0;
    line = ptr = ml_get_buf(wp->w_buffer, pos->lnum, FALSE);

    init_chartabsize_arg(&cts, wp, pos->lnum, 0, line, line);
    cts.cts_max_head_vcol = -1;

    
    if ((!wp->w_p_list || wp->w_lcs_chars.tab1 != NUL)
#ifdef FEAT_LINEBREAK
	    && !wp->w_p_lbr && *get_showbreak_value(wp) == NUL && !wp->w_p_bri
#endif
#ifdef FEAT_PROP_POPUP
	    && !cts.cts_has_prop_with_text
#endif
       )
    {
	for (;;)
	{
	    head = 0;
	    c = *ptr;
	    
	    if (c == NUL)
	    {
		incr = 1;	
		break;
	    }
	    
	    if (c == TAB)
#ifdef FEAT_VARTABS
		incr = tabstop_padding(vcol, ts, vts);
#else
		incr = ts - (vcol % ts);
#endif
	    else
	    {
		if (has_mbyte)
		{
		    
		    
		    if (enc_utf8 && c >= 0x80)
			incr = utf_ptr2cells(ptr);
		    else
			incr = g_chartab[c] & CT_CELL_MASK;

		    
		    
		    
		    if (incr == 2 && wp->w_p_wrap && MB_BYTE2LEN(*ptr) > 1
			    && in_win_border(wp, vcol))
		    {
			++incr;
			head = 1;
		    }
		}
		else
		    incr = g_chartab[c] & CT_CELL_MASK;
	    }

	    char_u *next_ptr = ptr + (*mb_ptr2len)(ptr);
	    if (next_ptr - line > pos->col) 
		break;

	    vcol += incr;
	    ptr = next_ptr;
	}
    }
    else
    {
	for (;;)
	{
	    
	    
	    head = 0;
	    incr = win_lbr_chartabsize(&cts, &head);
	    
	    if (*cts.cts_ptr == NUL)
	    {
		incr = 1;	
#ifdef FEAT_PROP_POPUP
		if (cts.cts_cur_text_width > 0)
		    incr = cts.cts_cur_text_width;
		on_NUL = TRUE;
#endif
		break;
	    }
#ifdef FEAT_PROP_POPUP
	    if (cursor == &wp->w_virtcol && cts.cts_ptr == cts.cts_line)
		
		wp->w_virtcol_first_char = cts.cts_first_char;
#endif

	    char_u *next_ptr = cts.cts_ptr + (*mb_ptr2len)(cts.cts_ptr);
	    if (next_ptr - line > pos->col) 
		break;

	    cts.cts_vcol += incr;
	    cts.cts_ptr = next_ptr;
	}
	vcol = cts.cts_vcol;
	ptr = cts.cts_ptr;
    }
    clear_chartabsize_arg(&cts);

    if (start != NULL)
	*start = vcol + head;
    if (end != NULL)
	*end = vcol + incr - 1;
    if (cursor != NULL)
    {
	if (*ptr == TAB
		&& (State & MODE_NORMAL)
		&& !wp->w_p_list
		&& !virtual_active()
		&& !(VIsual_active
				&& (*p_sel == 'e' || LTOREQ_POS(*pos, VIsual)))
		)
	    *cursor = vcol + incr - 1;	    
	else
	{
#ifdef FEAT_PROP_POPUP
	    
	    
	    if (((State & MODE_INSERT) == 0 || cts.cts_start_incl) && !on_NUL)
		
		vcol += cts.cts_cur_text_width;
	    else
		
		vcol += cts.cts_first_char;
#endif
	    *cursor = vcol + head;	    
	}
    }
}


    colnr_T
getvcol_nolist(pos_T *posp)
{
    int		list_save = curwin->w_p_list;
    colnr_T	vcol;

    curwin->w_p_list = FALSE;
    if (posp->coladd)
	getvvcol(curwin, posp, NULL, &vcol, NULL);
    else
	getvcol(curwin, posp, NULL, &vcol, NULL);
    curwin->w_p_list = list_save;
    return vcol;
}


    void
getvvcol(
    win_T	*wp,
    pos_T	*pos,
    colnr_T	*start,
    colnr_T	*cursor,
    colnr_T	*end)
{
    colnr_T	col;
    colnr_T	coladd;
    colnr_T	endadd;
    char_u	*ptr;

    if (virtual_active())
    {
	
	getvcol(wp, pos, &col, NULL, NULL);

	coladd = pos->coladd;
	endadd = 0;
	
	ptr = ml_get_buf(wp->w_buffer, pos->lnum, FALSE);
	if (pos->col < ml_get_buf_len(wp->w_buffer, pos->lnum))
	{
	    int c = (*mb_ptr2char)(ptr + pos->col);

	    if (c != TAB && vim_isprintc(c))
	    {
		endadd = (colnr_T)(char2cells(c) - 1);
		if (coladd > endadd)	
		    endadd = 0;
		else
		    coladd = 0;
	    }
	}
	col += coladd;
	if (start != NULL)
	    *start = col;
	if (cursor != NULL)
	    *cursor = col;
	if (end != NULL)
	    *end = col + endadd;
    }
    else
	getvcol(wp, pos, start, cursor, end);
}


    void
getvcols(
    win_T	*wp,
    pos_T	*pos1,
    pos_T	*pos2,
    colnr_T	*left,
    colnr_T	*right)
{
    colnr_T	from1, from2, to1, to2;

    if (LT_POSP(pos1, pos2))
    {
	getvvcol(wp, pos1, &from1, NULL, &to1);
	getvvcol(wp, pos2, &from2, NULL, &to2);
    }
    else
    {
	getvvcol(wp, pos2, &from1, NULL, &to1);
	getvvcol(wp, pos1, &from2, NULL, &to2);
    }
    if (from2 < from1)
	*left = from2;
    else
	*left = from1;
    if (to2 > to1)
    {
	if (*p_sel == 'e' && from2 - 1 >= to1)
	    *right = from2 - 1;
	else
	    *right = to2;
    }
    else
	*right = to1;
}


    char_u *
skipwhite(char_u *q)
{
    char_u	*p = q;

    while (VIM_ISWHITE(*p))
	++p;
    return p;
}

#if defined(FEAT_EVAL) || defined(PROTO)

    char_u *
skipwhite_and_nl(char_u *q)
{
    char_u	*p = q;

    while (VIM_ISWHITE(*p) || *p == NL)
	++p;
    return p;
}
#endif


    int
getwhitecols_curline(void)
{
    return getwhitecols(ml_get_curline());
}

    int
getwhitecols(char_u *p)
{
    return skipwhite(p) - p;
}


    char_u *
skipdigits(char_u *q)
{
    char_u	*p = q;

    while (VIM_ISDIGIT(*p))	
	++p;
    return p;
}

#if defined(FEAT_SYN_HL) || defined(FEAT_SPELL) || defined(PROTO)

    char_u *
skipbin(char_u *q)
{
    char_u	*p = q;

    while (vim_isbdigit(*p))	
	++p;
    return p;
}


    char_u *
skiphex(char_u *q)
{
    char_u	*p = q;

    while (vim_isxdigit(*p))	
	++p;
    return p;
}
#endif


    char_u *
skiptobin(char_u *q)
{
    char_u	*p = q;

    while (*p != NUL && !vim_isbdigit(*p))	
	++p;
    return p;
}


    char_u *
skiptodigit(char_u *q)
{
    char_u	*p = q;

    while (*p != NUL && !VIM_ISDIGIT(*p))	
	++p;
    return p;
}


    char_u *
skiptohex(char_u *q)
{
    char_u	*p = q;

    while (*p != NUL && !vim_isxdigit(*p))	
	++p;
    return p;
}


    int
vim_isdigit(int c)
{
    return (c >= '0' && c <= '9');
}


    int
vim_isxdigit(int c)
{
    return (c >= '0' && c <= '9')
	|| (c >= 'a' && c <= 'f')
	|| (c >= 'A' && c <= 'F');
}


    int
vim_isbdigit(int c)
{
    return (c == '0' || c == '1');
}

    static int
vim_isodigit(int c)
{
    return (c >= '0' && c <= '7');
}


#define LATIN1LOWER 'l'
#define LATIN1UPPER 'U'

static char_u latin1flags[257] = "                                                                 UUUUUUUUUUUUUUUUUUUUUUUUUU      llllllllllllllllllllllllll                                                                     UUUUUUUUUUUUUUUUUUUUUUU UUUUUUUllllllllllllllllllllllll llllllll";
static char_u latin1upper[257] = "                                 !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~\x7f\x80\x81\x82\x83\x84\x85\x86\x87\x88\x89\x8a\x8b\x8c\x8d\x8e\x8f\x90\x91\x92\x93\x94\x95\x96\x97\x98\x99\x9a\x9b\x9c\x9d\x9e\x9f\xa0\xa1\xa2\xa3\xa4\xa5\xa6\xa7\xa8\xa9\xaa\xab\xac\xad\xae\xaf\xb0\xb1\xb2\xb3\xb4\xb5\xb6\xb7\xb8\xb9\xba\xbb\xbc\xbd\xbe\xbf\xc0\xc1\xc2\xc3\xc4\xc5\xc6\xc7\xc8\xc9\xca\xcb\xcc\xcd\xce\xcf\xd0\xd1\xd2\xd3\xd4\xd5\xd6\xd7\xd8\xd9\xda\xdb\xdc\xdd\xde\xdf\xc0\xc1\xc2\xc3\xc4\xc5\xc6\xc7\xc8\xc9\xca\xcb\xcc\xcd\xce\xcf\xd0\xd1\xd2\xd3\xd4\xd5\xd6\xf7\xd8\xd9\xda\xdb\xdc\xdd\xde\xff";
static char_u latin1lower[257] = "                                 !\"#$%&'()*+,-./0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~\x7f\x80\x81\x82\x83\x84\x85\x86\x87\x88\x89\x8a\x8b\x8c\x8d\x8e\x8f\x90\x91\x92\x93\x94\x95\x96\x97\x98\x99\x9a\x9b\x9c\x9d\x9e\x9f\xa0\xa1\xa2\xa3\xa4\xa5\xa6\xa7\xa8\xa9\xaa\xab\xac\xad\xae\xaf\xb0\xb1\xb2\xb3\xb4\xb5\xb6\xb7\xb8\xb9\xba\xbb\xbc\xbd\xbe\xbf\xe0\xe1\xe2\xe3\xe4\xe5\xe6\xe7\xe8\xe9\xea\xeb\xec\xed\xee\xef\xf0\xf1\xf2\xf3\xf4\xf5\xf6\xd7\xf8\xf9\xfa\xfb\xfc\xfd\xfe\xdf\xe0\xe1\xe2\xe3\xe4\xe5\xe6\xe7\xe8\xe9\xea\xeb\xec\xed\xee\xef\xf0\xf1\xf2\xf3\xf4\xf5\xf6\xf7\xf8\xf9\xfa\xfb\xfc\xfd\xfe\xff";

    int
vim_islower(int c)
{
    if (c <= '@')
	return FALSE;
    if (c >= 0x80)
    {
	if (enc_utf8)
	    return utf_islower(c);
	if (c >= 0x100)
	{
#ifdef HAVE_ISWLOWER
	    if (has_mbyte)
		return iswlower(c);
#endif
	    
	    return FALSE;
	}
	if (enc_latin1like)
	    return (latin1flags[c] & LATIN1LOWER) == LATIN1LOWER;
    }
    return SAFE_islower(c);
}

    int
vim_isupper(int c)
{
    if (c <= '@')
	return FALSE;
    if (c >= 0x80)
    {
	if (enc_utf8)
	    return utf_isupper(c);
	if (c >= 0x100)
	{
#ifdef HAVE_ISWUPPER
	    if (has_mbyte)
		return iswupper(c);
#endif
	    
	    return FALSE;
	}
	if (enc_latin1like)
	    return (latin1flags[c] & LATIN1UPPER) == LATIN1UPPER;
    }
    return SAFE_isupper(c);
}

    int
vim_isalpha(int c)
{
    return vim_islower(c) || vim_isupper(c);
}

    int
vim_toupper(int c)
{
    if (c <= '@')
	return c;
    if (c >= 0x80 || !(cmp_flags & CMP_KEEPASCII))
    {
	if (enc_utf8)
	    return utf_toupper(c);
	if (c >= 0x100)
	{
#ifdef HAVE_TOWUPPER
	    if (has_mbyte)
		return towupper(c);
#endif
	    
	    return c;
	}
	if (enc_latin1like)
	    return latin1upper[c];
    }
    if (c < 0x80 && (cmp_flags & CMP_KEEPASCII))
	return TOUPPER_ASC(c);
    return TOUPPER_LOC(c);
}

    int
vim_tolower(int c)
{
    if (c <= '@')
	return c;
    if (c >= 0x80 || !(cmp_flags & CMP_KEEPASCII))
    {
	if (enc_utf8)
	    return utf_tolower(c);
	if (c >= 0x100)
	{
#ifdef HAVE_TOWLOWER
	    if (has_mbyte)
		return towlower(c);
#endif
	    
	    return c;
	}
	if (enc_latin1like)
	    return latin1lower[c];
    }
    if (c < 0x80 && (cmp_flags & CMP_KEEPASCII))
	return TOLOWER_ASC(c);
    return TOLOWER_LOC(c);
}


    char_u *
skiptowhite(char_u *p)
{
    while (*p != ' ' && *p != '\t' && *p != NUL)
	++p;
    return p;
}


    char_u *
skiptowhite_esc(char_u *p)
{
    while (*p != ' ' && *p != '\t' && *p != NUL)
    {
	if ((*p == '\\' || *p == Ctrl_V) && *(p + 1) != NUL)
	    ++p;
	++p;
    }
    return p;
}


    int
getdigits(char_u **pp)
{
    char_u	*p;
    int	retval;

    p = *pp;
    retval = atol((char *)p);
    if (*p == '-')		
	++p;
    p = skipdigits(p);		
    *pp = p;
    return retval;
}


    int
getdigits_quoted(char_u **pp)
{
    char_u	*p = *pp;
    int	retval = 0;

    if (*p == '-')
	++p;
    while (VIM_ISDIGIT(*p))
    {
	if (retval >= LONG_MAX / 10 - 10)
	    retval = LONG_MAX;
	else
	    retval = retval * 10 - '0' + *p;
	++p;
	if (in_vim9script() && *p == '\'' && VIM_ISDIGIT(p[1]))
	    ++p;
    }
    if (**pp == '-')
    {
	if (retval == LONG_MAX)
	    retval = LONG_MIN;
	else
	    retval = -retval;
    }
    *pp = p;
    return retval;
}


    int
vim_isblankline(char_u *lbuf)
{
    char_u	*p;

    p = skipwhite(lbuf);
    return (*p == NUL || *p == '\r' || *p == '\n');
}


    void
vim_str2nr(
    char_u		*start,
    int			*prep,	    
				    
				    
    int			*len,	    
    int			what,	    
    varnumber_T		*nptr,	    
    uvarnumber_T	*unptr,	    
    int			maxlen,     
    int			strict,     
    int			*overflow)  
{
    char_u	    *ptr = start;
    int		    pre = 0;		
    int		    negative = FALSE;
    uvarnumber_T    un = 0;
    int		    n;

    if (len != NULL)
	*len = 0;

    if (ptr[0] == '-')
    {
	negative = TRUE;
	++ptr;
    }

    
    if (ptr[0] == '0' && ptr[1] != '8' && ptr[1] != '9'
					       && (maxlen == 0 || maxlen > 1))
    {
	pre = ptr[1];
	if ((what & STR2NR_HEX)
		&& (pre == 'X' || pre == 'x') && vim_isxdigit(ptr[2])
		&& (maxlen == 0 || maxlen > 2))
	    
	    ptr += 2;
	else if ((what & STR2NR_BIN)
		&& (pre == 'B' || pre == 'b') && vim_isbdigit(ptr[2])
		&& (maxlen == 0 || maxlen > 2))
	    
	    ptr += 2;
	else if ((what & STR2NR_OOCT)
		&& (pre == 'O' || pre == 'o') && vim_isodigit(ptr[2])
		&& (maxlen == 0 || maxlen > 2))
	    
	    ptr += 2;
	else
	{
	    
	    pre = 0;
	    if (what & STR2NR_OCT)
	    {
		
		for (n = 1; n != maxlen && VIM_ISDIGIT(ptr[n]); ++n)
		{
		    if (ptr[n] > '7')
		    {
			pre = 0;	
			break;
		    }
		    pre = '0';	
		}
	    }
	}
    }

    
    n = 1;
    if (pre == 'B' || pre == 'b'
			     || ((what & STR2NR_BIN) && (what & STR2NR_FORCE)))
    {
	
	if (pre != 0)
	    n += 2;	    
	while ('0' <= *ptr && *ptr <= '1')
	{
	    
	    if (un <= UVARNUM_MAX / 2)
		un = 2 * un + (uvarnumber_T)(*ptr - '0');
	    else
	    {
		un = UVARNUM_MAX;
		if (overflow != NULL)
		    *overflow = TRUE;
	    }
	    ++ptr;
	    if (n++ == maxlen)
		break;
	    if ((what & STR2NR_QUOTE) && *ptr == '\''
					     && '0' <= ptr[1] && ptr[1] <= '1')
	    {
		++ptr;
		if (n++ == maxlen)
		    break;
	    }
	}
    }
    else if (pre == 'O' || pre == 'o' ||
		pre == '0' || ((what & STR2NR_OCT) && (what & STR2NR_FORCE)))
    {
	
	if (pre != 0 && pre != '0')
	    n += 2;	    
	while ('0' <= *ptr && *ptr <= '7')
	{
	    
	    if (un <= UVARNUM_MAX / 8)
		un = 8 * un + (uvarnumber_T)(*ptr - '0');
	    else
	    {
		un = UVARNUM_MAX;
		if (overflow != NULL)
		    *overflow = TRUE;
	    }
	    ++ptr;
	    if (n++ == maxlen)
		break;
	    if ((what & STR2NR_QUOTE) && *ptr == '\''
					     && '0' <= ptr[1] && ptr[1] <= '7')
	    {
		++ptr;
		if (n++ == maxlen)
		    break;
	    }
	}
    }
    else if (pre != 0 || ((what & STR2NR_HEX) && (what & STR2NR_FORCE)))
    {
	
	if (pre != 0)
	    n += 2;	    
	while (vim_isxdigit(*ptr))
	{
	    
	    if (un <= UVARNUM_MAX / 16)
		un = 16 * un + (uvarnumber_T)hex2nr(*ptr);
	    else
	    {
		un = UVARNUM_MAX;
		if (overflow != NULL)
		    *overflow = TRUE;
	    }
	    ++ptr;
	    if (n++ == maxlen)
		break;
	    if ((what & STR2NR_QUOTE) && *ptr == '\'' && vim_isxdigit(ptr[1]))
	    {
		++ptr;
		if (n++ == maxlen)
		    break;
	    }
	}
    }
    else
    {
	
	while (VIM_ISDIGIT(*ptr))
	{
	    uvarnumber_T    digit = (uvarnumber_T)(*ptr - '0');

	    
	    if (un < UVARNUM_MAX / 10
		    || (un == UVARNUM_MAX / 10 && digit <= UVARNUM_MAX % 10))
		un = 10 * un + digit;
	    else
	    {
		un = UVARNUM_MAX;
		if (overflow != NULL)
		    *overflow = TRUE;
	    }
	    ++ptr;
	    if (n++ == maxlen)
		break;
	    if ((what & STR2NR_QUOTE) && *ptr == '\'' && VIM_ISDIGIT(ptr[1]))
	    {
		++ptr;
		if (n++ == maxlen)
		    break;
	    }
	}
    }

    
    
    if (strict && n - 1 != maxlen && ASCII_ISALNUM(*ptr))
	return;

    if (prep != NULL)
	*prep = pre;
    if (len != NULL)
	*len = (int)(ptr - start);
    if (nptr != NULL)
    {
	if (negative)   
	{
	    
	    if (un > VARNUM_MAX)
	    {
		*nptr = VARNUM_MIN;
		if (overflow != NULL)
		    *overflow = TRUE;
	    }
	    else
		*nptr = -(varnumber_T)un;
	}
	else
	{
	    
	    if (un > VARNUM_MAX)
	    {
		un = VARNUM_MAX;
		if (overflow != NULL)
		    *overflow = TRUE;
	    }
	    *nptr = (varnumber_T)un;
	}
    }
    if (unptr != NULL)
	*unptr = un;
}


    int
hex2nr(int c)
{
    if (c >= 'a' && c <= 'f')
	return c - 'a' + 10;
    if (c >= 'A' && c <= 'F')
	return c - 'A' + 10;
    return c - '0';
}


    int
hexhex2nr(char_u *p)
{
    if (!vim_isxdigit(p[0]) || !vim_isxdigit(p[1]))
	return -1;
    return (hex2nr(p[0]) << 4) + hex2nr(p[1]);
}


    int
rem_backslash(char_u *str)
{
#ifdef BACKSLASH_IN_FILENAME
    return (str[0] == '\\'
	    && str[1] < 0x80
	    && (str[1] == ' '
		|| (str[1] != NUL
		    && str[1] != '*'
		    && str[1] != '?'
		    && !vim_isfilec(str[1]))));
#else
    return (str[0] == '\\' && str[1] != NUL);
#endif
}


    void
backslash_halve(char_u *p)
{
    for ( ; *p; ++p)
	if (rem_backslash(p))
	    STRMOVE(p, p + 1);
}


    char_u *
backslash_halve_save(char_u *p)
{
    char_u	*res;

    res = vim_strsave(p);
    if (res == NULL)
	return p;
    backslash_halve(res);
    return res;
}
