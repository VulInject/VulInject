



#define USING_FLOAT_STUFF
#include "vim.h"


    char_u *
vim_strsave(char_u *string)
{
    char_u	*p;
    size_t	len;

    len = STRLEN(string) + 1;
    p = alloc(len);
    if (p != NULL)
	mch_memmove(p, string, len);
    return p;
}


    char_u *
vim_strnsave(char_u *string, size_t len)
{
    char_u	*p;

    p = alloc(len + 1);
    if (p == NULL)
	return NULL;

    STRNCPY(p, string, len);
    p[len] = NUL;
    return p;
}


    char_u *
vim_strsave_escaped(char_u *string, char_u *esc_chars)
{
    return vim_strsave_escaped_ext(string, esc_chars, '\\', FALSE);
}


    char_u *
vim_strsave_escaped_ext(
    char_u	*string,
    char_u	*esc_chars,
    int		cc,
    int		bsl)
{
    char_u	*p;
    char_u	*p2;
    char_u	*escaped_string;
    unsigned	length;
    int		l;

    
    
    length = 1;				
    for (p = string; *p; p++)
    {
	if (has_mbyte && (l = (*mb_ptr2len)(p)) > 1)
	{
	    length += l;		
	    p += l - 1;
	    continue;
	}
	if (vim_strchr(esc_chars, *p) != NULL || (bsl && rem_backslash(p)))
	    ++length;			
	++length;			
    }
    escaped_string = alloc(length);
    if (escaped_string == NULL)
	return NULL;
    p2 = escaped_string;
    for (p = string; *p; p++)
    {
	if (has_mbyte && (l = (*mb_ptr2len)(p)) > 1)
	{
	    mch_memmove(p2, p, (size_t)l);
	    p2 += l;
	    p += l - 1;		
	    continue;
	}
	if (vim_strchr(esc_chars, *p) != NULL || (bsl && rem_backslash(p)))
	    *p2++ = cc;
	*p2++ = *p;
    }
    *p2 = NUL;
    return escaped_string;
}


    int
csh_like_shell(void)
{
    return (strstr((char *)gettail(p_sh), "csh") != NULL);
}


    static int
fish_like_shell(void)
{
    return (strstr((char *)gettail(p_sh), "fish") != NULL);
}


    char_u *
vim_strsave_shellescape(char_u *string, int do_special, int do_newline)
{
    unsigned	length;
    char_u	*p;
    char_u	*d;
    char_u	*escaped_string;
    size_t	l;
    int		csh_like;
    int		fish_like;
    char_u	*shname;
    int		powershell;
# ifdef MSWIN
    int		double_quotes;
# endif

    
    
    
    
    csh_like = csh_like_shell();

    
    
    fish_like = fish_like_shell();

    
    shname = gettail(p_sh);
    powershell = strstr((char *)shname, "pwsh") != NULL;
# ifdef MSWIN
    powershell = powershell || strstr((char *)shname, "powershell") != NULL;
    
    double_quotes = !powershell && !p_ssl;
# endif

    
    length = (unsigned)STRLEN(string) + 3;  
    for (p = string; *p != NUL; MB_PTR_ADV(p))
    {
# ifdef MSWIN
	if (double_quotes)
	{
	    if (*p == '"')
		++length;		
	}
	else
# endif
	if (*p == '\'')
	{
	    if (powershell)
		length +=2;		
	    else
		length += 3;		
	}
	if ((*p == '\n' && (csh_like || do_newline))
		|| (*p == '!' && (csh_like || do_special)))
	{
	    ++length;			
	    if (csh_like && do_special)
		++length;		
	}
	if (do_special && find_cmdline_var(p, &l) >= 0)
	{
	    ++length;			
	    p += l - 1;
	}
	if (*p == '\\' && fish_like)
	    ++length;			
    }

    
    escaped_string = alloc(length);
    if (escaped_string != NULL)
    {
	d = escaped_string;

	
# ifdef MSWIN
	if (double_quotes)
	    *d++ = '"';
	else
# endif
	    *d++ = '\'';

	for (p = string; *p != NUL; )
	{
# ifdef MSWIN
	    if (double_quotes)
	    {
		if (*p == '"')
		{
		    *d++ = '"';
		    *d++ = '"';
		    ++p;
		    continue;
		}
	    }
	    else
# endif
	    if (*p == '\'')
	    {
		if (powershell)
		{
		    *d++ = '\'';
		    *d++ = '\'';
		}
		else
		{
		    *d++ = '\'';
		    *d++ = '\\';
		    *d++ = '\'';
		    *d++ = '\'';
		}
		++p;
		continue;
	    }
	    if ((*p == '\n' && (csh_like || do_newline))
		    || (*p == '!' && (csh_like || do_special)))
	    {
		*d++ = '\\';
		if (csh_like && do_special)
		    *d++ = '\\';
		*d++ = *p++;
		continue;
	    }
	    if (do_special && find_cmdline_var(p, &l) >= 0)
	    {
		*d++ = '\\';		
		memcpy(d, p, l);	
		d += l;
		p += l;
		continue;
	    }
	    if (*p == '\\' && fish_like)
	    {
		*d++ = '\\';
		*d++ = *p++;
		continue;
	    }

	    MB_COPY_CHAR(p, d);
	}

	
# ifdef MSWIN
	if (double_quotes)
	    *d++ = '"';
	else
# endif
	    *d++ = '\'';
	*d = NUL;
    }

    return escaped_string;
}


    char_u *
vim_strsave_up(char_u *string)
{
    char_u *p1;

    p1 = vim_strsave(string);
    vim_strup(p1);
    return p1;
}


    char_u *
vim_strnsave_up(char_u *string, size_t len)
{
    char_u *p1;

    p1 = vim_strnsave(string, len);
    vim_strup(p1);
    return p1;
}


    void
vim_strup(
    char_u	*p)
{
    char_u  *p2;
    int	    c;

    if (p == NULL)
	return;

    p2 = p;
    while ((c = *p2) != NUL)
	*p2++ = (c < 'a' || c > 'z') ? c : (c - 0x20);
}

#if defined(FEAT_EVAL) || defined(FEAT_SPELL) || defined(PROTO)

    static char_u *
strup_save(char_u *orig)
{
    char_u	*p;
    char_u	*res;

    res = p = vim_strsave(orig);

    if (res != NULL)
	while (*p != NUL)
	{
	    int		l;

	    if (enc_utf8)
	    {
		int	c, uc;
		int	newl;
		char_u	*s;

		c = utf_ptr2char(p);
		l = utf_ptr2len(p);
		if (c == 0)
		{
		    
		    c = *p;
		    l = 1;
		}
		uc = utf_toupper(c);

		
		
		newl = utf_char2len(uc);
		if (newl != l)
		{
		    s = alloc(STRLEN(res) + 1 + newl - l);
		    if (s == NULL)
		    {
			vim_free(res);
			return NULL;
		    }
		    mch_memmove(s, res, p - res);
		    STRCPY(s + (p - res) + newl, p + l);
		    p = s + (p - res);
		    vim_free(res);
		    res = s;
		}

		utf_char2bytes(uc, p);
		p += newl;
	    }
	    else if (has_mbyte && (l = (*mb_ptr2len)(p)) > 1)
		p += l;		
	    else
	    {
		*p = TOUPPER_LOC(*p); 
		p++;
	    }
	}

    return res;
}


    char_u *
strlow_save(char_u *orig)
{
    char_u	*p;
    char_u	*res;

    res = p = vim_strsave(orig);

    if (res != NULL)
	while (*p != NUL)
	{
	    int		l;

	    if (enc_utf8)
	    {
		int	c, lc;
		int	newl;
		char_u	*s;

		c = utf_ptr2char(p);
		l = utf_ptr2len(p);
		if (c == 0)
		{
		    
		    c = *p;
		    l = 1;
		}
		lc = utf_tolower(c);

		
		
		newl = utf_char2len(lc);
		if (newl != l)
		{
		    s = alloc(STRLEN(res) + 1 + newl - l);
		    if (s == NULL)
		    {
			vim_free(res);
			return NULL;
		    }
		    mch_memmove(s, res, p - res);
		    STRCPY(s + (p - res) + newl, p + l);
		    p = s + (p - res);
		    vim_free(res);
		    res = s;
		}

		utf_char2bytes(lc, p);
		p += newl;
	    }
	    else if (has_mbyte && (l = (*mb_ptr2len)(p)) > 1)
		p += l;		
	    else
	    {
		*p = TOLOWER_LOC(*p); 
		p++;
	    }
	}

    return res;
}
#endif


    void
del_trailing_spaces(char_u *ptr)
{
    char_u	*q;

    q = ptr + STRLEN(ptr);
    while (--q > ptr && VIM_ISWHITE(q[0]) && q[-1] != '\\' && q[-1] != Ctrl_V)
	*q = NUL;
}


    void
vim_strncpy(char_u *to, char_u *from, size_t len)
{
    STRNCPY(to, from, len);
    to[len] = NUL;
}


    void
vim_strcat(char_u *to, char_u *from, size_t tosize)
{
    size_t tolen = STRLEN(to);
    size_t fromlen = STRLEN(from);

    if (tolen + fromlen + 1 > tosize)
    {
	mch_memmove(to + tolen, from, tosize - tolen - 1);
	to[tosize - 1] = NUL;
    }
    else
	mch_memmove(to + tolen, from, fromlen + 1);
}


    size_t
vim_strlen_maxlen(char *s, size_t maxlen)
{
    size_t i;
    for (i = 0; i < maxlen; ++i)
	if (s[i] == NUL)
	    break;
    return i;
}

#if (!defined(HAVE_STRCASECMP) && !defined(HAVE_STRICMP)) || defined(PROTO)

    int
vim_stricmp(char *s1, char *s2)
{
    int		i;

    for (;;)
    {
	i = (int)TOLOWER_LOC(*s1) - (int)TOLOWER_LOC(*s2);
	if (i != 0)
	    return i;			    
	if (*s1 == NUL)
	    break;			    
	++s1;
	++s2;
    }
    return 0;				    
}
#endif

#if (!defined(HAVE_STRNCASECMP) && !defined(HAVE_STRNICMP)) || defined(PROTO)

    int
vim_strnicmp(char *s1, char *s2, size_t len)
{
    int		i;

    while (len > 0)
    {
	i = (int)TOLOWER_LOC(*s1) - (int)TOLOWER_LOC(*s2);
	if (i != 0)
	    return i;			    
	if (*s1 == NUL)
	    break;			    
	++s1;
	++s2;
	--len;
    }
    return 0;				    
}
#endif


    char_u *
vim_strchr(char_u *string, int c)
{
    char_u	*p;
    int		b;

    p = string;
    if (enc_utf8 && c >= 0x80)
    {
	while (*p != NUL)
	{
	    int l = utfc_ptr2len(p);

	    
	    if (utf_ptr2char(p) == c && l > 1)
		return p;
	    p += l;
	}
	return NULL;
    }
    if (enc_dbcs != 0 && c > 255)
    {
	int	n2 = c & 0xff;

	c = ((unsigned)c >> 8) & 0xff;
	while ((b = *p) != NUL)
	{
	    if (b == c && p[1] == n2)
		return p;
	    p += (*mb_ptr2len)(p);
	}
	return NULL;
    }
    if (has_mbyte)
    {
	while ((b = *p) != NUL)
	{
	    if (b == c)
		return p;
	    p += (*mb_ptr2len)(p);
	}
	return NULL;
    }
    while ((b = *p) != NUL)
    {
	if (b == c)
	    return p;
	++p;
    }
    return NULL;
}


    char_u  *
vim_strbyte(char_u *string, int c)
{
    char_u	*p = string;

    while (*p != NUL)
    {
	if (*p == c)
	    return p;
	++p;
    }
    return NULL;
}


    char_u  *
vim_strrchr(char_u *string, int c)
{
    char_u	*retval = NULL;
    char_u	*p = string;

    while (*p)
    {
	if (*p == c)
	    retval = p;
	MB_PTR_ADV(p);
    }
    return retval;
}


#ifndef PROTO
# ifndef HAVE_STRPBRK
#  ifdef vim_strpbrk
#   undef vim_strpbrk
#  endif
    char_u *
vim_strpbrk(char_u *s, char_u *charset)
{
    while (*s)
    {
	if (vim_strchr(charset, *s) != NULL)
	    return s;
	MB_PTR_ADV(s);
    }
    return NULL;
}
# endif
#endif


static int sort_compare(const void *s1, const void *s2);

    static int
sort_compare(const void *s1, const void *s2)
{
    return STRCMP(*(char **)s1, *(char **)s2);
}

    void
sort_strings(
    char_u	**files,
    int		count)
{
    qsort((void *)files, (size_t)count, sizeof(char_u *), sort_compare);
}

#if defined(FEAT_QUICKFIX) || defined(FEAT_SPELL) || defined(PROTO)

    int
has_non_ascii(char_u *s)
{
    char_u	*p;

    if (s != NULL)
	for (p = s; *p != NUL; ++p)
	    if (*p >= 128)
		return TRUE;
    return FALSE;
}
#endif


    char_u  *
concat_str(char_u *str1, char_u *str2)
{
    char_u  *dest;
    size_t  l = str1 == NULL ? 0 : STRLEN(str1);

    dest = alloc(l + (str2 == NULL ? 0 : STRLEN(str2)) + 1L);
    if (dest == NULL)
	return NULL;
    if (str1 == NULL)
	*dest = NUL;
    else
	STRCPY(dest, str1);
    if (str2 != NULL)
	STRCPY(dest + l, str2);
    return dest;
}

#if defined(FEAT_EVAL) || defined(FEAT_RIGHTLEFT) || defined(PROTO)

    char_u *
reverse_text(char_u *s)
{
    size_t len = STRLEN(s);
    char_u *rev = alloc(len + 1);
    if (rev == NULL)
	return NULL;

    for (size_t s_i = 0, rev_i = len; s_i < len; ++s_i)
    {
	if (has_mbyte)
	{
	    int mb_len = (*mb_ptr2len)(s + s_i);
	    rev_i -= mb_len;
	    mch_memmove(rev + rev_i, s + s_i, mb_len);
	    s_i += mb_len - 1;
	}
	else
	    rev[--rev_i] = s[s_i];
    }
    rev[len] = NUL;
    return rev;
}
#endif

#if defined(FEAT_EVAL) || defined(PROTO)

    char_u *
string_quote(char_u *str, int function)
{
    unsigned	len;
    char_u	*p, *r, *s;

    len = (function ? 13 : 3);
    if (str != NULL)
    {
	len += (unsigned)STRLEN(str);
	for (p = str; *p != NUL; MB_PTR_ADV(p))
	    if (*p == '\'')
		++len;
    }
    s = r = alloc(len);
    if (r == NULL)
	return NULL;

    if (function)
    {
	STRCPY(r, "function('");
	r += 10;
    }
    else
	*r++ = '\'';
    if (str != NULL)
	for (p = str; *p != NUL; )
	{
	    if (*p == '\'')
		*r++ = '\'';
	    MB_COPY_CHAR(p, r);
	}
    *r++ = '\'';
    if (function)
	*r++ = ')';
    *r++ = NUL;
    return s;
}


    int
string_count(char_u *haystack, char_u *needle, int ic)
{
    int	n = 0;
    char_u	*p = haystack;
    char_u	*next;

    if (p == NULL || needle == NULL || *needle == NUL)
	return 0;

    if (ic)
    {
	size_t len = STRLEN(needle);

	while (*p != NUL)
	{
	    if (MB_STRNICMP(p, needle, len) == 0)
	    {
		++n;
		p += len;
	    }
	    else
		MB_PTR_ADV(p);
	}
    }
    else
	while ((next = (char_u *)strstr((char *)p, (char *)needle)) != NULL)
	{
	    ++n;
	    p = next + STRLEN(needle);
	}

    return n;
}


    static int
copy_first_char_to_tv(char_u *input, typval_T *output)
{
    char_u	buf[MB_MAXBYTES + 1];
    int		len;

    if (input == NULL || output == NULL)
	return FAIL;

    len = has_mbyte ? mb_ptr2len(input) : 1;
    STRNCPY(buf, input, len);
    buf[len] = NUL;
    output->v_type = VAR_STRING;
    output->vval.v_string = vim_strsave(buf);

    return output->vval.v_string == NULL ? FAIL : OK;
}


    void
string_filter_map(
	char_u		*str,
	filtermap_T	filtermap,
	typval_T	*expr,
	typval_T	*rettv)
{
    char_u	*p;
    typval_T	tv;
    garray_T	ga;
    int		len = 0;
    int		idx = 0;
    int		rem;
    typval_T	newtv;
    funccall_T	*fc;

    rettv->v_type = VAR_STRING;
    rettv->vval.v_string = NULL;

    
    set_vim_var_type(VV_KEY, VAR_NUMBER);

    
    fc = eval_expr_get_funccal(expr, &newtv);

    ga_init2(&ga, sizeof(char), 80);
    for (p = str; *p != NUL; p += len)
    {
	if (copy_first_char_to_tv(p, &tv) == FAIL)
	    break;
	len = (int)STRLEN(tv.vval.v_string);

	set_vim_var_nr(VV_KEY, idx);
	if (filter_map_one(&tv, expr, filtermap, fc, &newtv, &rem) == FAIL
		|| did_emsg)
	{
	    clear_tv(&newtv);
	    clear_tv(&tv);
	    break;
	}
	if (filtermap == FILTERMAP_MAP || filtermap == FILTERMAP_MAPNEW)
	{
	    if (newtv.v_type != VAR_STRING)
	    {
		clear_tv(&newtv);
		clear_tv(&tv);
		emsg(_(e_string_required));
		break;
	    }
	    else
		ga_concat(&ga, newtv.vval.v_string);
	}
	else if (filtermap == FILTERMAP_FOREACH || !rem)
	    ga_concat(&ga, tv.vval.v_string);

	clear_tv(&newtv);
	clear_tv(&tv);

	++idx;
    }
    ga_append(&ga, NUL);
    rettv->vval.v_string = ga.ga_data;
    if (fc != NULL)
	remove_funccal();
}


    void
string_reduce(
	typval_T	*argvars,
	typval_T	*expr,
	typval_T	*rettv)
{
    char_u	*p = tv_get_string(&argvars[0]);
    int		len;
    typval_T	argv[3];
    int		r;
    int		called_emsg_start = called_emsg;
    funccall_T	*fc;

    if (argvars[2].v_type == VAR_UNKNOWN)
    {
	if (*p == NUL)
	{
	    semsg(_(e_reduce_of_an_empty_str_with_no_initial_value), "String");
	    return;
	}
	if (copy_first_char_to_tv(p, rettv) == FAIL)
	    return;
	p += STRLEN(rettv->vval.v_string);
    }
    else if (check_for_string_arg(argvars, 2) == FAIL)
	return;
    else
	copy_tv(&argvars[2], rettv);

    
    fc = eval_expr_get_funccal(expr, rettv);

    for ( ; *p != NUL; p += len)
    {
	argv[0] = *rettv;
	if (copy_first_char_to_tv(p, &argv[1]) == FAIL)
	    break;
	len = (int)STRLEN(argv[1].vval.v_string);

	r = eval_expr_typval(expr, TRUE, argv, 2, fc, rettv);

	clear_tv(&argv[0]);
	clear_tv(&argv[1]);
	if (r == FAIL || called_emsg != called_emsg_start)
	    return;
    }

    if (fc != NULL)
	remove_funccal();
}


    static void
byteidx_common(typval_T *argvars, typval_T *rettv, int comp)
{
    rettv->vval.v_number = -1;

    if (in_vim9script()
	    && (check_for_string_arg(argvars, 0) == FAIL
		|| check_for_number_arg(argvars, 1) == FAIL
		|| check_for_opt_bool_arg(argvars, 2) == FAIL))
	return;

    char_u *str = tv_get_string_chk(&argvars[0]);
    varnumber_T	idx = tv_get_number_chk(&argvars[1], NULL);
    if (str == NULL || idx < 0)
	return;

    varnumber_T	utf16idx = FALSE;
    if (argvars[2].v_type != VAR_UNKNOWN)
    {
	int error = FALSE;
	utf16idx = tv_get_bool_chk(&argvars[2], &error);
	if (error)
	    return;
	if (utf16idx < 0 || utf16idx > 1)
	{
	    semsg(_(e_using_number_as_bool_nr), utf16idx);
	    return;
	}
    }

    int (*ptr2len)(char_u *);
    if (enc_utf8 && comp)
	ptr2len = utf_ptr2len;
    else
	ptr2len = mb_ptr2len;

    char_u *t = str;
    for ( ; idx > 0; idx--)
    {
	if (*t == NUL)		
	    return;
	if (utf16idx)
	{
	    int clen = ptr2len(t);
	    int c = (clen > 1) ? utf_ptr2char(t) : *t;
	    if (c > 0xFFFF)
		idx--;
	}
	if (idx > 0)
	    t += ptr2len(t);
    }
    rettv->vval.v_number = (varnumber_T)(t - str);
}


    void
f_byteidx(typval_T *argvars, typval_T *rettv)
{
    byteidx_common(argvars, rettv, FALSE);
}


    void
f_byteidxcomp(typval_T *argvars, typval_T *rettv)
{
    byteidx_common(argvars, rettv, TRUE);
}


    void
f_charidx(typval_T *argvars, typval_T *rettv)
{
    rettv->vval.v_number = -1;

    if (check_for_string_arg(argvars, 0) == FAIL
		|| check_for_number_arg(argvars, 1) == FAIL
		|| check_for_opt_bool_arg(argvars, 2) == FAIL
		|| (argvars[2].v_type != VAR_UNKNOWN
		    && check_for_opt_bool_arg(argvars, 3) == FAIL))
	return;

    char_u *str = tv_get_string_chk(&argvars[0]);
    varnumber_T	idx = tv_get_number_chk(&argvars[1], NULL);
    if (str == NULL || idx < 0)
	return;

    varnumber_T	countcc = FALSE;
    varnumber_T	utf16idx = FALSE;
    if (argvars[2].v_type != VAR_UNKNOWN)
    {
	countcc = tv_get_bool(&argvars[2]);
	if (argvars[3].v_type != VAR_UNKNOWN)
	    utf16idx = tv_get_bool(&argvars[3]);
    }

    int (*ptr2len)(char_u *);
    if (enc_utf8 && countcc)
	ptr2len = utf_ptr2len;
    else
	ptr2len = mb_ptr2len;

    char_u	*p;
    int		len;
    for (p = str, len = 0; utf16idx ? idx >= 0 : p <= str + idx; len++)
    {
	if (*p == NUL)
	{
	    
	    
	    
	    if (utf16idx ? (idx == 0) : (p == (str + idx)))
		rettv->vval.v_number = len;
	    return;
	}
	if (utf16idx)
	{
	    idx--;
	    int clen = ptr2len(p);
	    int c = (clen > 1) ? utf_ptr2char(p) : *p;
	    if (c > 0xFFFF)
		idx--;
	}
	p += ptr2len(p);
    }

    rettv->vval.v_number = len > 0 ? len - 1 : 0;
}


    void
f_str2list(typval_T *argvars, typval_T *rettv)
{
    char_u	*p;
    int		utf8 = FALSE;

    if (rettv_list_alloc(rettv) == FAIL)
	return;

    if (in_vim9script()
	    && (check_for_string_arg(argvars, 0) == FAIL
		|| check_for_opt_bool_arg(argvars, 1) == FAIL))
	return;

    if (argvars[1].v_type != VAR_UNKNOWN)
	utf8 = (int)tv_get_bool_chk(&argvars[1], NULL);

    p = tv_get_string(&argvars[0]);

    if (has_mbyte || utf8)
    {
	int (*ptr2len)(char_u *);
	int (*ptr2char)(char_u *);

	if (utf8 || enc_utf8)
	{
	    ptr2len = utf_ptr2len;
	    ptr2char = utf_ptr2char;
	}
	else
	{
	    ptr2len = mb_ptr2len;
	    ptr2char = mb_ptr2char;
	}

	for ( ; *p != NUL; p += (*ptr2len)(p))
	    list_append_number(rettv->vval.v_list, (*ptr2char)(p));
    }
    else
	for ( ; *p != NUL; ++p)
	    list_append_number(rettv->vval.v_list, *p);
}


    void
f_str2nr(typval_T *argvars, typval_T *rettv)
{
    int		base = 10;
    char_u	*p;
    varnumber_T	n;
    int		what = 0;
    int		isneg;

    if (in_vim9script()
	    && (check_for_string_arg(argvars, 0) == FAIL
		|| check_for_opt_number_arg(argvars, 1) == FAIL
		|| (argvars[1].v_type != VAR_UNKNOWN
		    && check_for_opt_bool_arg(argvars, 2) == FAIL)))
	return;

    if (argvars[1].v_type != VAR_UNKNOWN)
    {
	base = (int)tv_get_number(&argvars[1]);
	if (base != 2 && base != 8 && base != 10 && base != 16)
	{
	    emsg(_(e_invalid_argument));
	    return;
	}
	if (argvars[2].v_type != VAR_UNKNOWN && tv_get_bool(&argvars[2]))
	    what |= STR2NR_QUOTE;
    }

    p = skipwhite(tv_get_string_strict(&argvars[0]));
    isneg = (*p == '-');
    if (*p == '+' || *p == '-')
	p = skipwhite(p + 1);
    switch (base)
    {
	case 2: what |= STR2NR_BIN + STR2NR_FORCE; break;
	case 8: what |= STR2NR_OCT + STR2NR_OOCT + STR2NR_FORCE; break;
	case 16: what |= STR2NR_HEX + STR2NR_FORCE; break;
    }
    vim_str2nr(p, NULL, NULL, what, &n, NULL, 0, FALSE, NULL);
    
    if (isneg)
	rettv->vval.v_number = -n;
    else
	rettv->vval.v_number = n;

}


    void
f_strgetchar(typval_T *argvars, typval_T *rettv)
{
    char_u	*str;
    int		len;
    int		error = FALSE;
    int		charidx;
    int		byteidx = 0;

    rettv->vval.v_number = -1;

    if (in_vim9script()
	    && (check_for_string_arg(argvars, 0) == FAIL
		|| check_for_number_arg(argvars, 1) == FAIL))
	return;

    str = tv_get_string_chk(&argvars[0]);
    if (str == NULL)
	return;
    len = (int)STRLEN(str);
    charidx = (int)tv_get_number_chk(&argvars[1], &error);
    if (error)
	return;

    while (charidx >= 0 && byteidx < len)
    {
	if (charidx == 0)
	{
	    rettv->vval.v_number = mb_ptr2char(str + byteidx);
	    break;
	}
	--charidx;
	byteidx += MB_CPTR2LEN(str + byteidx);
    }
}


    void
f_stridx(typval_T *argvars, typval_T *rettv)
{
    char_u	buf[NUMBUFLEN];
    char_u	*needle;
    char_u	*haystack;
    char_u	*save_haystack;
    char_u	*pos;
    int		start_idx;

    if (in_vim9script()
	    && (check_for_string_arg(argvars, 0) == FAIL
		|| check_for_string_arg(argvars, 1) == FAIL
		|| check_for_opt_number_arg(argvars, 2) == FAIL))
	return;

    needle = tv_get_string_chk(&argvars[1]);
    save_haystack = haystack = tv_get_string_buf_chk(&argvars[0], buf);
    rettv->vval.v_number = -1;
    if (needle == NULL || haystack == NULL)
	return;		

    if (argvars[2].v_type != VAR_UNKNOWN)
    {
	int	    error = FALSE;

	start_idx = (int)tv_get_number_chk(&argvars[2], &error);
	if (error || start_idx >= (int)STRLEN(haystack))
	    return;
	if (start_idx >= 0)
	    haystack += start_idx;
    }

    pos	= (char_u *)strstr((char *)haystack, (char *)needle);
    if (pos != NULL)
	rettv->vval.v_number = (varnumber_T)(pos - save_haystack);
}


    void
f_string(typval_T *argvars, typval_T *rettv)
{
    char_u	*tofree;
    char_u	numbuf[NUMBUFLEN];

    rettv->v_type = VAR_STRING;
    rettv->vval.v_string = tv2string(&argvars[0], &tofree, numbuf,
								get_copyID());
    
    if (rettv->vval.v_string != NULL && tofree == NULL)
	rettv->vval.v_string = vim_strsave(rettv->vval.v_string);
}


    void
f_strlen(typval_T *argvars, typval_T *rettv)
{
    if (in_vim9script()
	    && check_for_string_or_number_arg(argvars, 0) == FAIL)
	return;

    rettv->vval.v_number = (varnumber_T)(STRLEN(
					      tv_get_string(&argvars[0])));
}

    static void
strchar_common(typval_T *argvars, typval_T *rettv, int skipcc)
{
    char_u		*s = tv_get_string(&argvars[0]);
    varnumber_T		len = 0;
    int			(*func_mb_ptr2char_adv)(char_u **pp);

    func_mb_ptr2char_adv = skipcc ? mb_ptr2char_adv : mb_cptr2char_adv;
    while (*s != NUL)
    {
	func_mb_ptr2char_adv(&s);
	++len;
    }
    rettv->vval.v_number = len;
}


    void
f_strcharlen(typval_T *argvars, typval_T *rettv)
{
    if (in_vim9script()
	    && check_for_string_or_number_arg(argvars, 0) == FAIL)
	return;

    strchar_common(argvars, rettv, TRUE);
}


    void
f_strchars(typval_T *argvars, typval_T *rettv)
{
    varnumber_T		skipcc = FALSE;

    if (in_vim9script()
	    && (check_for_string_arg(argvars, 0) == FAIL
		|| check_for_opt_bool_arg(argvars, 1) == FAIL))
	return;

    if (argvars[1].v_type != VAR_UNKNOWN)
    {
	int error = FALSE;
	skipcc = tv_get_bool_chk(&argvars[1], &error);
	if (error)
	    return;
	if (skipcc < 0 || skipcc > 1)
	{
	    semsg(_(e_using_number_as_bool_nr), skipcc);
	    return;
	}
    }

    strchar_common(argvars, rettv, skipcc);
}


    void
f_strutf16len(typval_T *argvars, typval_T *rettv)
{
    rettv->vval.v_number = -1;

    if (check_for_string_arg(argvars, 0) == FAIL
	    || check_for_opt_bool_arg(argvars, 1) == FAIL)
	return;

    varnumber_T countcc = FALSE;
    if (argvars[1].v_type != VAR_UNKNOWN)
	countcc = tv_get_bool(&argvars[1]);

    char_u		*s = tv_get_string(&argvars[0]);
    varnumber_T		len = 0;
    int			(*func_mb_ptr2char_adv)(char_u **pp);
    int			ch;

    func_mb_ptr2char_adv = countcc ? mb_cptr2char_adv : mb_ptr2char_adv;
    while (*s != NUL)
    {
	ch = func_mb_ptr2char_adv(&s);
	if (ch > 0xFFFF)
	    ++len;
	++len;
    }
    rettv->vval.v_number = len;
}


    void
f_strdisplaywidth(typval_T *argvars, typval_T *rettv)
{
    char_u	*s;
    int		col = 0;

    rettv->vval.v_number = -1;

    if (in_vim9script()
	    && (check_for_string_arg(argvars, 0) == FAIL
		|| check_for_opt_number_arg(argvars, 1) == FAIL))
	return;

    s = tv_get_string(&argvars[0]);
    if (argvars[1].v_type != VAR_UNKNOWN)
	col = (int)tv_get_number(&argvars[1]);

    rettv->vval.v_number = (varnumber_T)(linetabsize_col(col, s) - col);
}


    void
f_strwidth(typval_T *argvars, typval_T *rettv)
{
    char_u	*s;

    if (in_vim9script() && check_for_string_arg(argvars, 0) == FAIL)
	return;

    s = tv_get_string_strict(&argvars[0]);
    rettv->vval.v_number = (varnumber_T)(mb_string2cells(s, -1));
}


    void
f_strcharpart(typval_T *argvars, typval_T *rettv)
{
    char_u	*p;
    int		nchar;
    int		nbyte = 0;
    int		charlen;
    int		skipcc = FALSE;
    int		len = 0;
    int		slen;
    int		error = FALSE;

    if (in_vim9script()
	    && (check_for_string_arg(argvars, 0) == FAIL
		|| check_for_number_arg(argvars, 1) == FAIL
		|| check_for_opt_number_arg(argvars, 2) == FAIL
		|| (argvars[2].v_type != VAR_UNKNOWN
		    && check_for_opt_bool_arg(argvars, 3) == FAIL)))
	return;

    p = tv_get_string(&argvars[0]);
    slen = (int)STRLEN(p);

    nchar = (int)tv_get_number_chk(&argvars[1], &error);
    if (!error)
    {
	if (argvars[2].v_type != VAR_UNKNOWN
					   && argvars[3].v_type != VAR_UNKNOWN)
	{
	    skipcc = tv_get_bool_chk(&argvars[3], &error);
	    if (error)
		return;
	    if (skipcc < 0 || skipcc > 1)
	    {
		semsg(_(e_using_number_as_bool_nr), skipcc);
		return;
	    }
	}

	if (nchar > 0)
	    while (nchar > 0 && nbyte < slen)
	    {
		if (skipcc)
		    nbyte += mb_ptr2len(p + nbyte);
		else
		    nbyte += MB_CPTR2LEN(p + nbyte);
		--nchar;
	    }
	else
	    nbyte = nchar;
	if (argvars[2].v_type != VAR_UNKNOWN)
	{
	    charlen = (int)tv_get_number(&argvars[2]);
	    while (charlen > 0 && nbyte + len < slen)
	    {
		int off = nbyte + len;

		if (off < 0)
		    len += 1;
		else
		{
		    if (skipcc)
			len += mb_ptr2len(p + off);
		    else
			len += MB_CPTR2LEN(p + off);
		}
		--charlen;
	    }
	}
	else
	    len = slen - nbyte;    
    }

    
    
    if (nbyte < 0)
    {
	len += nbyte;
	nbyte = 0;
    }
    else if (nbyte > slen)
	nbyte = slen;
    if (len < 0)
	len = 0;
    else if (nbyte + len > slen)
	len = slen - nbyte;

    rettv->v_type = VAR_STRING;
    rettv->vval.v_string = vim_strnsave(p + nbyte, len);
}


    void
f_strpart(typval_T *argvars, typval_T *rettv)
{
    char_u	*p;
    int		n;
    int		len;
    int		slen;
    int		error = FALSE;

    if (in_vim9script()
	    && (check_for_string_arg(argvars, 0) == FAIL
		|| check_for_number_arg(argvars, 1) == FAIL
		|| check_for_opt_number_arg(argvars, 2) == FAIL
		|| (argvars[2].v_type != VAR_UNKNOWN
		    && check_for_opt_bool_arg(argvars, 3) == FAIL)))
	return;

    p = tv_get_string(&argvars[0]);
    slen = (int)STRLEN(p);

    n = (int)tv_get_number_chk(&argvars[1], &error);
    if (error)
	len = 0;
    else if (argvars[2].v_type != VAR_UNKNOWN)
	len = (int)tv_get_number(&argvars[2]);
    else
	len = slen - n;	    

    
    
    if (n < 0)
    {
	len += n;
	n = 0;
    }
    else if (n > slen)
	n = slen;
    if (len < 0)
	len = 0;
    else if (n + len > slen)
	len = slen - n;

    if (argvars[2].v_type != VAR_UNKNOWN && argvars[3].v_type != VAR_UNKNOWN)
    {
	int off;

	
	for (off = n; off < slen && len > 0; --len)
	    off += mb_ptr2len(p + off);
	len = off - n;
    }

    rettv->v_type = VAR_STRING;
    rettv->vval.v_string = vim_strnsave(p + n, len);
}


    void
f_strridx(typval_T *argvars, typval_T *rettv)
{
    char_u	buf[NUMBUFLEN];
    char_u	*needle;
    char_u	*haystack;
    char_u	*rest;
    char_u	*lastmatch = NULL;
    int		haystack_len, end_idx;

    if (in_vim9script()
	    && (check_for_string_arg(argvars, 0) == FAIL
		|| check_for_string_arg(argvars, 1) == FAIL
		|| check_for_opt_number_arg(argvars, 2) == FAIL))
	return;

    needle = tv_get_string_chk(&argvars[1]);
    haystack = tv_get_string_buf_chk(&argvars[0], buf);

    rettv->vval.v_number = -1;
    if (needle == NULL || haystack == NULL)
	return;		

    haystack_len = (int)STRLEN(haystack);
    if (argvars[2].v_type != VAR_UNKNOWN)
    {
	
	end_idx = (int)tv_get_number_chk(&argvars[2], NULL);
	if (end_idx < 0)
	    return;	
    }
    else
	end_idx = haystack_len;

    if (*needle == NUL)
    {
	
	lastmatch = haystack + end_idx;
    }
    else
    {
	for (rest = haystack; *rest != '\0'; ++rest)
	{
	    rest = (char_u *)strstr((char *)rest, (char *)needle);
	    if (rest == NULL || rest > haystack + end_idx)
		break;
	    lastmatch = rest;
	}
    }

    if (lastmatch == NULL)
	rettv->vval.v_number = -1;
    else
	rettv->vval.v_number = (varnumber_T)(lastmatch - haystack);
}


    void
f_strtrans(typval_T *argvars, typval_T *rettv)
{
    if (in_vim9script() && check_for_string_arg(argvars, 0) == FAIL)
	return;

    rettv->v_type = VAR_STRING;
    rettv->vval.v_string = transstr(tv_get_string(&argvars[0]));
}



    void
f_utf16idx(typval_T *argvars, typval_T *rettv)
{
    rettv->vval.v_number = -1;

    if (check_for_string_arg(argvars, 0) == FAIL
	    || check_for_opt_number_arg(argvars, 1) == FAIL
	    || check_for_opt_bool_arg(argvars, 2) == FAIL
	    || (argvars[2].v_type != VAR_UNKNOWN
		    && check_for_opt_bool_arg(argvars, 3) == FAIL))
	    return;

    char_u *str = tv_get_string_chk(&argvars[0]);
    varnumber_T	idx = tv_get_number_chk(&argvars[1], NULL);
    if (str == NULL || idx < 0)
	return;

    varnumber_T	countcc = FALSE;
    varnumber_T	charidx = FALSE;
    if (argvars[2].v_type != VAR_UNKNOWN)
    {
	countcc = tv_get_bool(&argvars[2]);
	if (argvars[3].v_type != VAR_UNKNOWN)
	    charidx = tv_get_bool(&argvars[3]);
    }

    int (*ptr2len)(char_u *);
    if (enc_utf8 && countcc)
	ptr2len = utf_ptr2len;
    else
	ptr2len = mb_ptr2len;

    char_u	*p;
    int		len;
    int		utf16idx = 0;
    for (p = str, len = 0; charidx ? idx >= 0 : p <= str + idx; len++)
    {
	if (*p == NUL)
	{
	    
	    
	    
	    if (charidx ? (idx == 0) : (p == (str + idx)))
		rettv->vval.v_number = len;
	    return;
	}
	utf16idx = len;
	int clen = ptr2len(p);
	int c = (clen > 1) ? utf_ptr2char(p) : *p;
	if (c > 0xFFFF)
	    len++;
	p += ptr2len(p);
	if (charidx)
	    idx--;
    }

    rettv->vval.v_number = utf16idx;
}


    void
f_tolower(typval_T *argvars, typval_T *rettv)
{
    if (in_vim9script() && check_for_string_arg(argvars, 0) == FAIL)
	return;

    rettv->v_type = VAR_STRING;
    rettv->vval.v_string = strlow_save(tv_get_string(&argvars[0]));
}


    void
f_toupper(typval_T *argvars, typval_T *rettv)
{
    if (in_vim9script() && check_for_string_arg(argvars, 0) == FAIL)
	return;

    rettv->v_type = VAR_STRING;
    rettv->vval.v_string = strup_save(tv_get_string(&argvars[0]));
}


    void
f_tr(typval_T *argvars, typval_T *rettv)
{
    char_u	*in_str;
    char_u	*fromstr;
    char_u	*tostr;
    char_u	*p;
    int		inlen;
    int		fromlen;
    int		tolen;
    int		idx;
    char_u	*cpstr;
    int		cplen;
    int		first = TRUE;
    char_u	buf[NUMBUFLEN];
    char_u	buf2[NUMBUFLEN];
    garray_T	ga;

    if (in_vim9script()
	    && (check_for_string_arg(argvars, 0) == FAIL
		|| check_for_string_arg(argvars, 1) == FAIL
		|| check_for_string_arg(argvars, 2) == FAIL))
	return;

    in_str = tv_get_string(&argvars[0]);
    fromstr = tv_get_string_buf_chk(&argvars[1], buf);
    tostr = tv_get_string_buf_chk(&argvars[2], buf2);

    
    rettv->v_type = VAR_STRING;
    rettv->vval.v_string = NULL;
    if (fromstr == NULL || tostr == NULL)
	    return;		
    ga_init2(&ga, sizeof(char), 80);

    if (!has_mbyte)
	
	if (STRLEN(fromstr) != STRLEN(tostr))
	{
error:
	    semsg(_(e_invalid_argument_str), fromstr);
	    ga_clear(&ga);
	    return;
	}

    
    while (*in_str != NUL)
    {
	if (has_mbyte)
	{
	    inlen = (*mb_ptr2len)(in_str);
	    cpstr = in_str;
	    cplen = inlen;
	    idx = 0;
	    for (p = fromstr; *p != NUL; p += fromlen)
	    {
		fromlen = (*mb_ptr2len)(p);
		if (fromlen == inlen && STRNCMP(in_str, p, inlen) == 0)
		{
		    for (p = tostr; *p != NUL; p += tolen)
		    {
			tolen = (*mb_ptr2len)(p);
			if (idx-- == 0)
			{
			    cplen = tolen;
			    cpstr = p;
			    break;
			}
		    }
		    if (*p == NUL)	
			goto error;
		    break;
		}
		++idx;
	    }

	    if (first && cpstr == in_str)
	    {
		
		
		
		first = FALSE;
		for (p = tostr; *p != NUL; p += tolen)
		{
		    tolen = (*mb_ptr2len)(p);
		    --idx;
		}
		if (idx != 0)
		    goto error;
	    }

	    (void)ga_grow(&ga, cplen);
	    mch_memmove((char *)ga.ga_data + ga.ga_len, cpstr, (size_t)cplen);
	    ga.ga_len += cplen;

	    in_str += inlen;
	}
	else
	{
	    
	    p = vim_strchr(fromstr, *in_str);
	    if (p != NULL)
		ga_append(&ga, tostr[p - fromstr]);
	    else
		ga_append(&ga, *in_str);
	    ++in_str;
	}
    }

    
    (void)ga_grow(&ga, 1);
    ga_append(&ga, NUL);

    rettv->vval.v_string = ga.ga_data;
}


    void
f_trim(typval_T *argvars, typval_T *rettv)
{
    char_u	buf1[NUMBUFLEN];
    char_u	buf2[NUMBUFLEN];
    char_u	*head;
    char_u	*mask = NULL;
    char_u	*tail;
    char_u	*prev;
    char_u	*p;
    int		c1;
    int		dir = 0;

    rettv->v_type = VAR_STRING;
    rettv->vval.v_string = NULL;

    if (in_vim9script()
	    && (check_for_string_arg(argvars, 0) == FAIL
		|| check_for_opt_string_arg(argvars, 1) == FAIL
		|| (argvars[1].v_type != VAR_UNKNOWN
		    && check_for_opt_number_arg(argvars, 2) == FAIL)))
	return;

    head = tv_get_string_buf_chk(&argvars[0], buf1);
    if (head == NULL)
	return;

    if (check_for_opt_string_arg(argvars, 1) == FAIL)
	return;

    if (argvars[1].v_type == VAR_STRING)
    {
	mask = tv_get_string_buf_chk(&argvars[1], buf2);
	if (*mask == NUL)
	    mask = NULL;

	if (argvars[2].v_type != VAR_UNKNOWN)
	{
	    int	error = 0;

	    
	    dir = (int)tv_get_number_chk(&argvars[2], &error);
	    if (error)
		return;
	    if (dir < 0 || dir > 2)
	    {
		semsg(_(e_invalid_argument_str), tv_get_string(&argvars[2]));
		return;
	    }
	}
    }

    if (dir == 0 || dir == 1)
    {
	
	while (*head != NUL)
	{
	    c1 = PTR2CHAR(head);
	    if (mask == NULL)
	    {
		if (c1 > ' ' && c1 != 0xa0)
		    break;
	    }
	    else
	    {
		for (p = mask; *p != NUL; MB_PTR_ADV(p))
		    if (c1 == PTR2CHAR(p))
			break;
		if (*p == NUL)
		    break;
	    }
	    MB_PTR_ADV(head);
	}
    }

    tail = head + STRLEN(head);
    if (dir == 0 || dir == 2)
    {
	
	for (; tail > head; tail = prev)
	{
	    prev = tail;
	    MB_PTR_BACK(head, prev);
	    c1 = PTR2CHAR(prev);
	    if (mask == NULL)
	    {
		if (c1 > ' ' && c1 != 0xa0)
		    break;
	    }
	    else
	    {
		for (p = mask; *p != NUL; MB_PTR_ADV(p))
		    if (c1 == PTR2CHAR(p))
			break;
		if (*p == NUL)
		    break;
	    }
	}
    }
    rettv->vval.v_string = vim_strnsave(head, tail - head);
}

static char *e_printf = N_(e_insufficient_arguments_for_printf);


    static varnumber_T
tv_nr(typval_T *tvs, int *idxp)
{
    int		idx = *idxp - 1;
    varnumber_T	n = 0;
    int		err = FALSE;

    if (tvs[idx].v_type == VAR_UNKNOWN)
	emsg(_(e_printf));
    else
    {
	++*idxp;
	n = tv_get_number_chk(&tvs[idx], &err);
	if (err)
	    n = 0;
    }
    return n;
}


    static char *
tv_str(typval_T *tvs, int *idxp, char_u **tofree)
{
    int		    idx = *idxp - 1;
    char	    *s = NULL;
    static char_u   numbuf[NUMBUFLEN];

    if (tvs[idx].v_type == VAR_UNKNOWN)
	emsg(_(e_printf));
    else
    {
	++*idxp;
	if (tofree != NULL)
	    s = (char *)echo_string(&tvs[idx], tofree, numbuf, get_copyID());
	else
	    s = (char *)tv_get_string_chk(&tvs[idx]);
    }
    return s;
}


    static double
tv_float(typval_T *tvs, int *idxp)
{
    int		idx = *idxp - 1;
    double	f = 0;

    if (tvs[idx].v_type == VAR_UNKNOWN)
	emsg(_(e_printf));
    else
    {
	++*idxp;
	if (tvs[idx].v_type == VAR_FLOAT)
	    f = tvs[idx].vval.v_float;
	else if (tvs[idx].v_type == VAR_NUMBER)
	    f = (double)tvs[idx].vval.v_number;
	else
	    emsg(_(e_expected_float_argument_for_printf));
    }
    return f;
}

#endif


    static const char *
infinity_str(int positive,
	     char fmt_spec,
	     int force_sign,
	     int space_for_positive)
{
    static const char *table[] =
    {
	"-inf", "inf", "+inf", " inf",
	"-INF", "INF", "+INF", " INF"
    };
    int idx = positive * (1 + force_sign + force_sign * space_for_positive);

    if (ASCII_ISUPPER(fmt_spec))
	idx += 4;
    return table[idx];
}







#ifndef PROTO


    int
vim_snprintf_add(char *str, size_t str_m, const char *fmt, ...)
{
    va_list	ap;
    int		str_l;
    size_t	len = STRLEN(str);
    size_t	space;

    if (str_m <= len)
	space = 0;
    else
	space = str_m - len;
    va_start(ap, fmt);
    str_l = vim_vsnprintf(str + len, space, fmt, ap);
    va_end(ap);
    return str_l;
}

    int
vim_snprintf(char *str, size_t str_m, const char *fmt, ...)
{
    va_list	ap;
    int		str_l;

    va_start(ap, fmt);
    str_l = vim_vsnprintf(str, str_m, fmt, ap);
    va_end(ap);
    return str_l;
}

    int
vim_vsnprintf(
    char	*str,
    size_t	str_m,
    const char	*fmt,
    va_list	ap)
{
    return vim_vsnprintf_typval(str, str_m, fmt, ap, NULL);
}

enum
{
    TYPE_UNKNOWN = -1,
    TYPE_INT,
    TYPE_LONGINT,
    TYPE_LONGLONGINT,
    TYPE_UNSIGNEDINT,
    TYPE_UNSIGNEDLONGINT,
    TYPE_UNSIGNEDLONGLONGINT,
    TYPE_POINTER,
    TYPE_PERCENT,
    TYPE_CHAR,
    TYPE_STRING,
    TYPE_FLOAT
};


    static int
format_typeof(
    const char	*type)
{
    
    char    length_modifier = '\0';

    
    char    fmt_spec = '\0';

    
    if (*type == 'h' || *type == 'l')
    {
	length_modifier = *type;
	type++;
	if (length_modifier == 'l' && *type == 'l')
	{
	    
	    length_modifier = 'L';
	    type++;
	}
    }
    fmt_spec = *type;

    
    switch (fmt_spec)
    {
	case 'i': fmt_spec = 'd'; break;
	case '*': fmt_spec = 'd'; length_modifier = 'h'; break;
	case 'D': fmt_spec = 'd'; length_modifier = 'l'; break;
	case 'U': fmt_spec = 'u'; length_modifier = 'l'; break;
	case 'O': fmt_spec = 'o'; length_modifier = 'l'; break;
	default: break;
    }

    
    switch (fmt_spec)
    {
	
	
    case '%':
	return TYPE_PERCENT;

    case 'c':
	return TYPE_CHAR;

    case 's':
    case 'S':
	return TYPE_STRING;

    case 'd': case 'u':
    case 'b': case 'B':
    case 'o':
    case 'x': case 'X':
    case 'p':
	{
	    
	    
	    

	    
	    
	    
	    

	    if (fmt_spec == 'p')
		return TYPE_POINTER;
	    else if (fmt_spec == 'b' || fmt_spec == 'B')
		return TYPE_UNSIGNEDLONGLONGINT;
	    else if (fmt_spec == 'd')
	    {
		
		switch (length_modifier)
		{
		case '\0':
		case 'h':
		    
		    return TYPE_INT;
		case 'l':
		    return TYPE_LONGINT;
		case 'L':
		    return TYPE_LONGLONGINT;
		}
	    }
	    else
	    {
		
		switch (length_modifier)
		{
		    case '\0':
		    case 'h':
			return TYPE_UNSIGNEDINT;
		    case 'l':
			return TYPE_UNSIGNEDLONGINT;
		    case 'L':
			return TYPE_UNSIGNEDLONGLONGINT;
		}
	    }
	}
	break;

    case 'f':
    case 'F':
    case 'e':
    case 'E':
    case 'g':
    case 'G':
	return TYPE_FLOAT;
    }

    return TYPE_UNKNOWN;
}

    static char *
format_typename(
    const char  *type)
{
    switch (format_typeof(type))
    {
	case TYPE_INT:
	    return _(typename_int);

	case TYPE_LONGINT:
	    return _(typename_longint);

	case TYPE_LONGLONGINT:
	    return _(typename_longlongint);

	case TYPE_UNSIGNEDINT:
	    return _(typename_unsignedint);

	case TYPE_UNSIGNEDLONGINT:
	    return _(typename_unsignedlongint);

	case TYPE_UNSIGNEDLONGLONGINT:
	    return _(typename_unsignedlonglongint);

	case TYPE_POINTER:
	    return _(typename_pointer);

	case TYPE_PERCENT:
	    return _(typename_percent);

	case TYPE_CHAR:
	    return _(typename_char);

	case TYPE_STRING:
	    return _(typename_string);

	case TYPE_FLOAT:
	    return _(typename_float);
    }

    return _(typename_unknown);
}

    static int
adjust_types(
    const char ***ap_types,
    int arg,
    int *num_posarg,
    const char *type)
{
    if (*ap_types == NULL || *num_posarg < arg)
    {
	int	    idx;
	const char  **new_types;

	if (*ap_types == NULL)
	    new_types = ALLOC_CLEAR_MULT(const char *, arg);
	else
	    new_types = vim_realloc((char **)*ap_types,
						arg * sizeof(const char *));

	if (new_types == NULL)
	    return FAIL;

	for (idx = *num_posarg; idx < arg; ++idx)
	    new_types[idx] = NULL;

	*ap_types = new_types;
	*num_posarg = arg;
    }

    if ((*ap_types)[arg - 1] != NULL)
    {
	if ((*ap_types)[arg - 1][0] == '*' || type[0] == '*')
	{
	    const char *pt = type;
	    if (pt[0] == '*')
		pt = (*ap_types)[arg - 1];

	    if (pt[0] != '*')
	    {
		switch (pt[0])
		{
		    case 'd': case 'i': break;
		    default:
			semsg(_(e_positional_num_field_spec_reused_str_str), arg, format_typename((*ap_types)[arg - 1]), format_typename(type));
			return FAIL;
		}
	    }
	}
	else
	{
	    if (format_typeof(type) != format_typeof((*ap_types)[arg - 1]))
	    {
		semsg(_( e_positional_arg_num_type_inconsistent_str_str), arg, format_typename(type), format_typename((*ap_types)[arg - 1]));
		return FAIL;
	    }
	}
    }

    (*ap_types)[arg - 1] = type;

    return OK;
}

    static void
format_overflow_error(const char *pstart)
{
    size_t	arglen = 0;
    char	*argcopy = NULL;
    const char	*p = pstart;

    while (VIM_ISDIGIT((int)(*p)))
	++p;

    arglen = p - pstart;
    argcopy = ALLOC_CLEAR_MULT(char, arglen + 1);
    if (argcopy != NULL)
    {
	strncpy(argcopy, pstart, arglen);
	semsg(_( e_val_too_large), argcopy);
	free(argcopy);
    }
    else
	semsg(_(e_out_of_memory_allocating_nr_bytes), arglen);
}

#define MAX_ALLOWED_STRING_WIDTH 6400

    static int
get_unsigned_int(
    const char *pstart,
    const char **p,
    unsigned int *uj,
    int overflow_err)
{
    *uj = **p - '0';
    ++*p;

    while (VIM_ISDIGIT((int)(**p)) && *uj < MAX_ALLOWED_STRING_WIDTH)
    {
	*uj = 10 * *uj + (unsigned int)(**p - '0');
	++*p;
    }

    if (*uj > MAX_ALLOWED_STRING_WIDTH)
    {
	if (overflow_err)
	{
	    format_overflow_error(pstart);
	    return FAIL;
	}
	else
	    *uj = MAX_ALLOWED_STRING_WIDTH;
    }

    return OK;
}


    static int
parse_fmt_types(
    const char  ***ap_types,
    int		*num_posarg,
    const char  *fmt,
    typval_T	*tvs UNUSED
    )
{
    const char	*p = fmt;
    const char	*arg = NULL;

    int		any_pos = 0;
    int		any_arg = 0;
    int		arg_idx;

#define CHECK_POS_ARG do { \
    if (any_pos && any_arg) \
    { \
	semsg(_( e_cannot_mix_positional_and_non_positional_str), fmt); \
	goto error; \
    } \
} while (0);

    if (p == NULL)
	return OK;

    while (*p != NUL)
    {
	if (*p != '%')
	{
	    char    *q = strchr(p + 1, '%');
	    size_t  n = (q == NULL) ? STRLEN(p) : (size_t)(q - p);

	    p += n;
	}
	else
	{
	    
	    char	length_modifier = '\0';

	    
	    int		pos_arg = -1;
	    const char	*ptype = NULL;
	    const char	*pstart = p+1;

	    p++;  

	    
	    
	    ptype = p;

	    while (VIM_ISDIGIT(*ptype))
		++ptype;

	    if (*ptype == '$')
	    {
		if (*p == '0')
		{
		    
		    semsg(_( e_invalid_format_specifier_str), fmt);
		    goto error;
		}

		
		unsigned int uj;

		if (get_unsigned_int(pstart, &p, &uj, tvs != NULL) == FAIL)
		    goto error;

		pos_arg = uj;

		any_pos = 1;
		CHECK_POS_ARG;

		++p;
	    }

	    
	    while (*p == '0' || *p == '-' || *p == '+' || *p == ' '
						   || *p == '#' || *p == '\'')
	    {
		switch (*p)
		{
		    case '0': break;
		    case '-': break;
		    case '+': break;
		    case ' ': 
			      
			      break;
		    case '#': break;
		    case '\'': break;
		}
		p++;
	    }
	    
	    

	    
	    if (*(arg = p) == '*')
	    {
		p++;

		if (VIM_ISDIGIT((int)(*p)))
		{
		    
		    unsigned int uj;

		    if (get_unsigned_int(arg + 1, &p, &uj, tvs != NULL) == FAIL)
			goto error;

		    if (*p != '$')
		    {
			semsg(_( e_invalid_format_specifier_str), fmt);
			goto error;
		    }
		    else
		    {
			++p;
			any_pos = 1;
			CHECK_POS_ARG;

			if (adjust_types(ap_types, uj, num_posarg, arg) == FAIL)
			    goto error;
		    }
		}
		else
		{
		    any_arg = 1;
		    CHECK_POS_ARG;
		}
	    }
	    else if (VIM_ISDIGIT((int)(*p)))
	    {
		
		
		const char *digstart = p;
		unsigned int uj;

		if (get_unsigned_int(digstart, &p, &uj, tvs != NULL) == FAIL)
		    goto error;

		if (*p == '$')
		{
		    semsg(_( e_invalid_format_specifier_str), fmt);
		    goto error;
		}
	    }

	    
	    if (*p == '.')
	    {
		p++;

		if (*(arg = p) == '*')
		{
		    p++;

		    if (VIM_ISDIGIT((int)(*p)))
		    {
			
			unsigned int uj;

			if (get_unsigned_int(arg + 1, &p, &uj, tvs != NULL) == FAIL)
			    goto error;

			if (*p == '$')
			{
			    any_pos = 1;
			    CHECK_POS_ARG;

			    ++p;

			    if (adjust_types(ap_types, uj, num_posarg, arg) == FAIL)
				goto error;
			}
			else
			{
			    semsg(_( e_invalid_format_specifier_str), fmt);
			    goto error;
			}
		    }
		    else
		    {
			any_arg = 1;
			CHECK_POS_ARG;
		    }
		}
		else if (VIM_ISDIGIT((int)(*p)))
		{
		    
		    
		    const char *digstart = p;
		    unsigned int uj;

		    if (get_unsigned_int(digstart, &p, &uj, tvs != NULL) == FAIL)
			goto error;

		    if (*p == '$')
		    {
			semsg(_( e_invalid_format_specifier_str), fmt);
			goto error;
		    }
		}
	    }

	    if (pos_arg != -1)
	    {
		any_pos = 1;
		CHECK_POS_ARG;

		ptype = p;
	    }

	    
	    if (*p == 'h' || *p == 'l')
	    {
		length_modifier = *p;
		p++;
		if (length_modifier == 'l' && *p == 'l')
		{
		    
		    
		    p++;
		}
	    }

	    switch (*p)
	    {
		
		case 'i':
		case '*':
		case 'd':
		case 'u':
		case 'o':
		case 'D':
		case 'U':
		case 'O':
		case 'x':
		case 'X':
		case 'b':
		case 'B':
		case 'c':
		case 's':
		case 'S':
		case 'p':
		case 'f':
		case 'F':
		case 'e':
		case 'E':
		case 'g':
		case 'G':
		    if (pos_arg != -1)
		    {
			if (adjust_types(ap_types, pos_arg, num_posarg, ptype) == FAIL)
			    goto error;
		    }
		    else
		    {
			any_arg = 1;
			CHECK_POS_ARG;
		    }
		    break;

		default:
		    if (pos_arg != -1)
		    {
			semsg(_( e_cannot_mix_positional_and_non_positional_str), fmt);
			goto error;
		    }
	    }

	    if (*p != NUL)
		p++;     
	}
    }

    for (arg_idx = 0; arg_idx < *num_posarg; ++arg_idx)
    {
	if ((*ap_types)[arg_idx] == NULL)
	{
	    semsg(_(e_fmt_arg_nr_unused_str), arg_idx + 1, fmt);
	    goto error;
	}

# if defined(FEAT_EVAL)
	if (tvs != NULL && tvs[arg_idx].v_type == VAR_UNKNOWN)
	{
	    semsg(_(e_positional_nr_out_of_bounds_str), arg_idx + 1, fmt);
	    goto error;
	}
# endif
    }

    return OK;

error:
    vim_free((char**)*ap_types);
    *ap_types = NULL;
    *num_posarg = 0;
    return FAIL;
}

    static void
skip_to_arg(
    const char	**ap_types,
    va_list	ap_start,
    va_list	*ap,
    int		*arg_idx,
    int		*arg_cur,
    const char	*fmt)
{
    int		arg_min = 0;

    if (*arg_cur + 1 == *arg_idx)
    {
	++*arg_cur;
	++*arg_idx;
	return;
    }

    if (*arg_cur >= *arg_idx)
    {
	
	va_end(*ap);
	va_copy(*ap, ap_start);
    }
    else
    {
	
	arg_min = *arg_cur;
    }

    for (*arg_cur = arg_min; *arg_cur < *arg_idx - 1; ++*arg_cur)
    {
	const char *p;

	if (ap_types == NULL || ap_types[*arg_cur] == NULL)
	{
	    siemsg(e_aptypes_is_null_nr_str, *arg_cur, fmt);
	    return;
	}

	p = ap_types[*arg_cur];

	int fmt_type = format_typeof(p);

	
	switch (fmt_type)
	{
	case TYPE_PERCENT:
	case TYPE_UNKNOWN:
	    break;

	case TYPE_CHAR:
	    va_arg(*ap, int);
	    break;

	case TYPE_STRING:
	    va_arg(*ap, char *);
	    break;

	case TYPE_POINTER:
	    va_arg(*ap, void *);
	    break;

	case TYPE_INT:
	    va_arg(*ap, int);
	    break;

	case TYPE_LONGINT:
	    va_arg(*ap, int int);
	    break;

	case TYPE_LONGLONGINT:
	    va_arg(*ap, varnumber_T);
	    break;

	case TYPE_UNSIGNEDINT:
	    va_arg(*ap, unsigned int);
	    break;

	case TYPE_UNSIGNEDLONGINT:
	    va_arg(*ap, unsigned int int);
	    break;

	case TYPE_UNSIGNEDLONGLONGINT:
	    va_arg(*ap, uvarnumber_T);
	    break;

	case TYPE_FLOAT:
	    va_arg(*ap, double);
	    break;
	}
    }

    
    
    
    ++*arg_cur;
    ++*arg_idx;

    return;
}

    int
vim_vsnprintf_typval(
    char	*str,
    size_t	str_m,
    const char	*fmt,
    va_list	ap_start,
    typval_T	*tvs)
{
    size_t	str_l = 0;
    const char	*p = fmt;
    int		arg_cur = 0;
    int		num_posarg = 0;
    int		arg_idx = 1;
    va_list	ap;
    const char	**ap_types = NULL;

    if (parse_fmt_types(&ap_types, &num_posarg, fmt, tvs) == FAIL)
	return 0;

    va_copy(ap, ap_start);

    if (p == NULL)
	p = "";
    while (*p != NUL)
    {
	if (*p != '%')
	{
	    char    *q = strchr(p + 1, '%');
	    size_t  n = (q == NULL) ? STRLEN(p) : (size_t)(q - p);

	    
	    if (str_l < str_m)
	    {
		size_t avail = str_m - str_l;

		mch_memmove(str + str_l, p, n > avail ? avail : n);
	    }
	    p += n;
	    str_l += n;
	}
	else
	{
	    size_t  min_field_width = 0, precision = 0;
	    int	    zero_padding = 0, precision_specified = 0, justify_left = 0;
	    int	    alternate_form = 0, force_sign = 0;

	    
	    
	    int	    space_for_positive = 1;

	    
	    char    length_modifier = '\0';

	    
# define TMP_LEN 350	
			
			
	    char    tmp[TMP_LEN];

	    
	    const char  *str_arg = NULL;

	    
	    size_t  str_arg_l;

	    
	    
	    
	    unsigned char uchar_arg;

	    
	    
	    size_t  number_of_zeros_to_pad = 0;

	    
	    size_t  zero_padding_insertion_ind = 0;

	    
	    char    fmt_spec = '\0';

	    
	    char_u  *tofree = NULL;

	    
	    int	    pos_arg = -1;
	    const char	*ptype;


	    p++;  

	    
	    
	    ptype = p;

	    while (VIM_ISDIGIT(*ptype))
		++ptype;

	    if (*ptype == '$')
	    {
		
		const char *digstart = p;
		unsigned int uj;

		if (get_unsigned_int(digstart, &p, &uj, tvs != NULL) == FAIL)
		    goto error;

		pos_arg = uj;

		++p;
	    }

	    
	    while (*p == '0' || *p == '-' || *p == '+' || *p == ' '
						   || *p == '#' || *p == '\'')
	    {
		switch (*p)
		{
		    case '0': zero_padding = 1; break;
		    case '-': justify_left = 1; break;
		    case '+': force_sign = 1; space_for_positive = 0; break;
		    case ' ': force_sign = 1;
			      
			      
			      break;
		    case '#': alternate_form = 1; break;
		    case '\'': break;
		}
		p++;
	    }
	    
	    

	    
	    if (*p == '*')
	    {
		int j;
		const char *digstart = p + 1;

		p++;

		if (VIM_ISDIGIT((int)(*p)))
		{
		    
		    unsigned int uj;

		    if (get_unsigned_int(digstart, &p, &uj, tvs != NULL) == FAIL)
			goto error;

		    arg_idx = uj;

		    ++p;
		}

		j =
# if defined(FEAT_EVAL)
		    tvs != NULL ? tv_nr(tvs, &arg_idx) :
# endif
			(skip_to_arg(ap_types, ap_start, &ap, &arg_idx,
				     &arg_cur, fmt),
			va_arg(ap, int));

		if (j > MAX_ALLOWED_STRING_WIDTH)
		{
		    if (tvs != NULL)
		    {
			format_overflow_error(digstart);
			goto error;
		    }
		    else
			j = MAX_ALLOWED_STRING_WIDTH;
		}

		if (j >= 0)
		    min_field_width = j;
		else
		{
		    min_field_width = -j;
		    justify_left = 1;
		}
	    }
	    else if (VIM_ISDIGIT((int)(*p)))
	    {
		
		
		const char *digstart = p;
		unsigned int uj;

		if (get_unsigned_int(digstart, &p, &uj, tvs != NULL) == FAIL)
		    goto error;

		min_field_width = uj;
	    }

	    
	    if (*p == '.')
	    {
		p++;
		precision_specified = 1;

		if (VIM_ISDIGIT((int)(*p)))
		{
		    
		    
		    const char *digstart = p;
		    unsigned int uj;

		    if (get_unsigned_int(digstart, &p, &uj, tvs != NULL) == FAIL)
			goto error;

		    precision = uj;
		}
		else if (*p == '*')
		{
		    int j;
		    const char *digstart = p;

		    p++;

		    if (VIM_ISDIGIT((int)(*p)))
		    {
			
			unsigned int uj;

			if (get_unsigned_int(digstart, &p, &uj, tvs != NULL) == FAIL)
			    goto error;

			arg_idx = uj;

			++p;
		    }

		    j =
# if defined(FEAT_EVAL)
			tvs != NULL ? tv_nr(tvs, &arg_idx) :
# endif
			    (skip_to_arg(ap_types, ap_start, &ap, &arg_idx,
					 &arg_cur, fmt),
			    va_arg(ap, int));

		    if (j > MAX_ALLOWED_STRING_WIDTH)
		    {
			if (tvs != NULL)
			{
			    format_overflow_error(digstart);
			    goto error;
			}
			else
			    j = MAX_ALLOWED_STRING_WIDTH;
		    }

		    if (j >= 0)
			precision = j;
		    else
		    {
			precision_specified = 0;
			precision = 0;
		    }
		}
	    }

	    
	    if (*p == 'h' || *p == 'l')
	    {
		length_modifier = *p;
		p++;
		if (length_modifier == 'l' && *p == 'l')
		{
		    
		    length_modifier = 'L';
		    p++;
		}
	    }
	    fmt_spec = *p;

	    
	    switch (fmt_spec)
	    {
		case 'i': fmt_spec = 'd'; break;
		case 'D': fmt_spec = 'd'; length_modifier = 'l'; break;
		case 'U': fmt_spec = 'u'; length_modifier = 'l'; break;
		case 'O': fmt_spec = 'o'; length_modifier = 'l'; break;
		default: break;
	    }

# if defined(FEAT_EVAL)
	    switch (fmt_spec)
	    {
		case 'd': case 'u': case 'o': case 'x': case 'X':
		    if (tvs != NULL && length_modifier == '\0')
			length_modifier = 'L';
	    }
# endif

	    if (pos_arg != -1)
		arg_idx = pos_arg;

	    
	    switch (fmt_spec)
	    {
		
		
	    case '%':
	    case 'c':
	    case 's':
	    case 'S':
		str_arg_l = 1;
		switch (fmt_spec)
		{
		case '%':
		    str_arg = p;
		    break;

		case 'c':
		    {
			int j;

			j =
# if defined(FEAT_EVAL)
			    tvs != NULL ? tv_nr(tvs, &arg_idx) :
# endif
				(skip_to_arg(ap_types, ap_start, &ap, &arg_idx,
					     &arg_cur, fmt),
				va_arg(ap, int));

			
			uchar_arg = (unsigned char)j;
			str_arg = (char *)&uchar_arg;
			break;
		    }

		case 's':
		case 'S':
		    str_arg =
# if defined(FEAT_EVAL)
				tvs != NULL ? tv_str(tvs, &arg_idx, &tofree) :
# endif
				    (skip_to_arg(ap_types, ap_start, &ap, &arg_idx,
						 &arg_cur, fmt),
				    va_arg(ap, char *));

		    if (str_arg == NULL)
		    {
			str_arg = "[NULL]";
			str_arg_l = 6;
		    }
		    
		    
		    else if (!precision_specified)
			str_arg_l = strlen(str_arg);
		    
		    else if (precision == 0)
			str_arg_l = 0;
		    else
		    {
			
			
			
			char *q = memchr(str_arg, '\0',
				  precision <= (size_t)0x7fffffffL ? precision
						       : (size_t)0x7fffffffL);

			str_arg_l = (q == NULL) ? precision
						      : (size_t)(q - str_arg);
		    }
		    if (fmt_spec == 'S')
		    {
			char_u	*p1;
			size_t	i;
			int	cell;

			for (i = 0, p1 = (char_u *)str_arg; *p1;
							  p1 += mb_ptr2len(p1))
			{
			    cell = mb_ptr2cells(p1);
			    if (precision_specified && i + cell > precision)
				break;
			    i += cell;
			}

			str_arg_l = p1 - (char_u *)str_arg;
			if (min_field_width != 0)
			    min_field_width += str_arg_l - i;
		    }
		    break;

		default:
		    break;
		}
		break;

	    case 'd': case 'u':
	    case 'b': case 'B':
	    case 'o':
	    case 'x': case 'X':
	    case 'p':
		{
		    
		    
		    

		    
		    
		    
		    
		    int arg_sign = 0;

		    
		    
		    int int_arg = 0;
		    unsigned int uint_arg = 0;

		    
		    int int long_arg = 0;
		    unsigned int int ulong_arg = 0;

		    
		    varnumber_T llong_arg = 0;
		    uvarnumber_T ullong_arg = 0;

		    
		    uvarnumber_T bin_arg = 0;

		    
		    
		    void *ptr_arg = NULL;

		    if (fmt_spec == 'p')
		    {
			length_modifier = '\0';
			ptr_arg =
# if defined(FEAT_EVAL)
				 tvs != NULL ? (void *)tv_str(tvs, &arg_idx,
									NULL) :
# endif
					(skip_to_arg(ap_types, ap_start, &ap, &arg_idx,
						     &arg_cur, fmt),
					va_arg(ap, void *));

			if (ptr_arg != NULL)
			    arg_sign = 1;
		    }
		    else if (fmt_spec == 'b' || fmt_spec == 'B')
		    {
			bin_arg =
# if defined(FEAT_EVAL)
				    tvs != NULL ?
					   (uvarnumber_T)tv_nr(tvs, &arg_idx) :
# endif
					(skip_to_arg(ap_types, ap_start, &ap, &arg_idx,
						     &arg_cur, fmt),
					va_arg(ap, uvarnumber_T));

			if (bin_arg != 0)
			    arg_sign = 1;
		    }
		    else if (fmt_spec == 'd')
		    {
			
			switch (length_modifier)
			{
			case '\0':
			case 'h':
			    
			    int_arg =
# if defined(FEAT_EVAL)
					tvs != NULL ? tv_nr(tvs, &arg_idx) :
# endif
					    (skip_to_arg(ap_types, ap_start, &ap, &arg_idx,
							 &arg_cur, fmt),
					    va_arg(ap, int));

			    if (int_arg > 0)
				arg_sign =  1;
			    else if (int_arg < 0)
				arg_sign = -1;
			    break;
			case 'l':
			    long_arg =
# if defined(FEAT_EVAL)
					tvs != NULL ? tv_nr(tvs, &arg_idx) :
# endif
					    (skip_to_arg(ap_types, ap_start, &ap, &arg_idx,
							 &arg_cur, fmt),
					    va_arg(ap, int int));

			    if (long_arg > 0)
				arg_sign =  1;
			    else if (long_arg < 0)
				arg_sign = -1;
			    break;
			case 'L':
			    llong_arg =
# if defined(FEAT_EVAL)
					tvs != NULL ? tv_nr(tvs, &arg_idx) :
# endif
					    (skip_to_arg(ap_types, ap_start, &ap, &arg_idx,
							 &arg_cur, fmt),
					    va_arg(ap, varnumber_T));

			    if (llong_arg > 0)
				arg_sign =  1;
			    else if (llong_arg < 0)
				arg_sign = -1;
			    break;
			}
		    }
		    else
		    {
			
			switch (length_modifier)
			{
			    case '\0':
			    case 'h':
				uint_arg =
# if defined(FEAT_EVAL)
					    tvs != NULL ? (unsigned)
							tv_nr(tvs, &arg_idx) :
# endif
						(skip_to_arg(ap_types, ap_start, &ap, &arg_idx,
							     &arg_cur, fmt),
						va_arg(ap, unsigned int));

				if (uint_arg != 0)
				    arg_sign = 1;
				break;
			    case 'l':
				ulong_arg =
# if defined(FEAT_EVAL)
					    tvs != NULL ? (unsigned int)
							tv_nr(tvs, &arg_idx) :
# endif
						(skip_to_arg(ap_types, ap_start, &ap, &arg_idx,
							     &arg_cur, fmt),
						va_arg(ap, unsigned int int));

				if (ulong_arg != 0)
				    arg_sign = 1;
				break;
			    case 'L':
				ullong_arg =
# if defined(FEAT_EVAL)
					    tvs != NULL ? (uvarnumber_T)
							tv_nr(tvs, &arg_idx) :
# endif
						(skip_to_arg(ap_types, ap_start, &ap, &arg_idx,
							     &arg_cur, fmt),
						va_arg(ap, uvarnumber_T));

				if (ullong_arg != 0)
				    arg_sign = 1;
				break;
			}
		    }

		    str_arg = tmp;
		    str_arg_l = 0;

		    
		    
		    
		    
		    
		    if (precision_specified)
			zero_padding = 0;
		    if (fmt_spec == 'd')
		    {
			if (force_sign && arg_sign >= 0)
			    tmp[str_arg_l++] = space_for_positive ? ' ' : '+';
			
			
		    }
		    else if (alternate_form)
		    {
			if (arg_sign != 0
				     && (fmt_spec == 'b' || fmt_spec == 'B'
				      || fmt_spec == 'x' || fmt_spec == 'X') )
			{
			    tmp[str_arg_l++] = '0';
			    tmp[str_arg_l++] = fmt_spec;
			}
			
			
		    }

		    zero_padding_insertion_ind = str_arg_l;
		    if (!precision_specified)
			precision = 1;   
		    if (precision == 0 && arg_sign == 0)
		    {
			
			
			
		    }
		    else
		    {
			char	f[6];
			int	f_l = 0;

			
			f[f_l++] = '%';
			if (!length_modifier)
			    ;
			else if (length_modifier == 'L')
			{
# ifdef MSWIN
			    f[f_l++] = 'I';
			    f[f_l++] = '6';
			    f[f_l++] = '4';
# else
			    f[f_l++] = 'l';
			    f[f_l++] = 'l';
# endif
			}
			else
			    f[f_l++] = length_modifier;
			f[f_l++] = fmt_spec;
			f[f_l++] = '\0';

			if (fmt_spec == 'p')
			    str_arg_l += sprintf(tmp + str_arg_l, f, ptr_arg);
			else if (fmt_spec == 'b' || fmt_spec == 'B')
			{
			    char	    b[8 * sizeof(uvarnumber_T)];
			    size_t	    b_l = 0;
			    uvarnumber_T    bn = bin_arg;

			    do
			    {
				b[sizeof(b) - ++b_l] = '0' + (bn & 0x1);
				bn >>= 1;
			    }
			    while (bn != 0);

			    memcpy(tmp + str_arg_l, b + sizeof(b) - b_l, b_l);
			    str_arg_l += b_l;
			}
			else if (fmt_spec == 'd')
			{
			    
			    switch (length_modifier)
			    {
			    case '\0': str_arg_l += sprintf(
						 tmp + str_arg_l, f,
						 int_arg);
				       break;
			    case 'h': str_arg_l += sprintf(
						 tmp + str_arg_l, f,
						 (short)int_arg);
				      break;
			    case 'l': str_arg_l += sprintf(
						tmp + str_arg_l, f, long_arg);
				      break;
			    case 'L': str_arg_l += sprintf(
					       tmp + str_arg_l, f, llong_arg);
				      break;
			    }
			}
			else
			{
			    
			    switch (length_modifier)
			    {
			    case '\0': str_arg_l += sprintf(
						tmp + str_arg_l, f,
						uint_arg);
				       break;
			    case 'h': str_arg_l += sprintf(
						tmp + str_arg_l, f,
						(unsigned short)uint_arg);
				      break;
			    case 'l': str_arg_l += sprintf(
					       tmp + str_arg_l, f, ulong_arg);
				      break;
			    case 'L': str_arg_l += sprintf(
					      tmp + str_arg_l, f, ullong_arg);
				      break;
			    }
			}

			
			
			
			if (zero_padding_insertion_ind < str_arg_l
				&& tmp[zero_padding_insertion_ind] == '-')
			    zero_padding_insertion_ind++;
			if (zero_padding_insertion_ind + 1 < str_arg_l
				&& tmp[zero_padding_insertion_ind]   == '0'
				&& (tmp[zero_padding_insertion_ind + 1] == 'x'
				 || tmp[zero_padding_insertion_ind + 1] == 'X'))
			    zero_padding_insertion_ind += 2;
		    }

		    {
			size_t num_of_digits = str_arg_l
						 - zero_padding_insertion_ind;

			if (alternate_form && fmt_spec == 'o'
				
				
				&& !(zero_padding_insertion_ind < str_arg_l
				    && tmp[zero_padding_insertion_ind] == '0'))
			{
			    
			    
			    if (!precision_specified
					     || precision < num_of_digits + 1)
			    {
				
				
				
				
				precision = num_of_digits + 1;
			    }
			}
			
			if (num_of_digits < precision)
			    number_of_zeros_to_pad = precision - num_of_digits;
		    }
		    
		    if (!justify_left && zero_padding)
		    {
			int n = (int)(min_field_width - (str_arg_l
						    + number_of_zeros_to_pad));
			if (n > 0)
			    number_of_zeros_to_pad += n;
		    }
		    break;
		}

	    case 'f':
	    case 'F':
	    case 'e':
	    case 'E':
	    case 'g':
	    case 'G':
		{
		    
		    double	f;
		    double	abs_f;
		    char	format[40];
		    int		l;
		    int		remove_trailing_zeroes = FALSE;

		    f =
# if defined(FEAT_EVAL)
			tvs != NULL ? tv_float(tvs, &arg_idx) :
# endif
			    (skip_to_arg(ap_types, ap_start, &ap, &arg_idx,
					 &arg_cur, fmt),
			    va_arg(ap, double));

		    abs_f = f < 0 ? -f : f;

		    if (fmt_spec == 'g' || fmt_spec == 'G')
		    {
			
			
			if ((abs_f >= 0.001 && abs_f < 10000000.0)
							      || abs_f == 0.0)
			    fmt_spec = ASCII_ISUPPER(fmt_spec) ? 'F' : 'f';
			else
			    fmt_spec = fmt_spec == 'g' ? 'e' : 'E';
			remove_trailing_zeroes = TRUE;
		    }

		    if ((fmt_spec == 'f' || fmt_spec == 'F') &&
# ifdef VAX
			    abs_f > 1.0e38
# else
			    abs_f > 1.0e307
# endif
			    )
		    {
			
			STRCPY(tmp, infinity_str(f > 0.0, fmt_spec,
					      force_sign, space_for_positive));
			str_arg_l = STRLEN(tmp);
			zero_padding = 0;
		    }
		    else
		    {
			if (isnan(f))
			{
			    
			    STRCPY(tmp, ASCII_ISUPPER(fmt_spec) ? "NAN"
								      : "nan");
			    str_arg_l = 3;
			    zero_padding = 0;
			}
			else if (isinf(f))
			{
			    STRCPY(tmp, infinity_str(f > 0.0, fmt_spec,
					      force_sign, space_for_positive));
			    str_arg_l = STRLEN(tmp);
			    zero_padding = 0;
			}
			else
			{
			    
			    format[0] = '%';
			    l = 1;
			    if (force_sign)
				format[l++] = space_for_positive ? ' ' : '+';
			    if (precision_specified)
			    {
				size_t max_prec = TMP_LEN - 10;

				
				
				if ((fmt_spec == 'f' || fmt_spec == 'F')
								&& abs_f > 1.0)
				    max_prec -= (size_t)log10(abs_f);
				if (precision > max_prec)
				    precision = max_prec;
				l += sprintf(format + l, ".%d", (int)precision);
			    }
			    format[l] = fmt_spec == 'F' ? 'f' : fmt_spec;
			    format[l + 1] = NUL;

			    str_arg_l = sprintf(tmp, format, f);
			}

			if (remove_trailing_zeroes)
			{
			    int i;
			    char *tp;

			    
			    if (fmt_spec == 'f' || fmt_spec == 'F')
				tp = tmp + str_arg_l - 1;
			    else
			    {
				tp = (char *)vim_strchr((char_u *)tmp,
						 fmt_spec == 'e' ? 'e' : 'E');
				if (tp != NULL)
				{
				    
				    
				    if (tp[1] == '+')
				    {
					
					STRMOVE(tp + 1, tp + 2);
					--str_arg_l;
				    }
				    i = (tp[1] == '-') ? 2 : 1;
				    while (tp[i] == '0')
				    {
					
					STRMOVE(tp + i, tp + i + 1);
					--str_arg_l;
				    }
				    --tp;
				}
			    }

			    if (tp != NULL && !precision_specified)
				
				
				while (tp > tmp + 2 && *tp == '0'
							     && tp[-1] != '.')
				{
				    STRMOVE(tp, tp + 1);
				    --tp;
				    --str_arg_l;
				}
			}
			else
			{
			    char *tp;

			    
			    
			    
			    tp = (char *)vim_strchr((char_u *)tmp,
						 fmt_spec == 'e' ? 'e' : 'E');
			    if (tp != NULL && (tp[1] == '+' || tp[1] == '-')
					  && tp[2] == '0'
					  && vim_isdigit(tp[3])
					  && vim_isdigit(tp[4]))
			    {
				STRMOVE(tp + 2, tp + 3);
				--str_arg_l;
			    }
			}
		    }
		    if (zero_padding && min_field_width > str_arg_l
					      && (tmp[0] == '-' || force_sign))
		    {
			
			number_of_zeros_to_pad = min_field_width - str_arg_l;
			zero_padding_insertion_ind = 1;
		    }
		    str_arg = tmp;
		    break;
		}

	    default:
		
		
		zero_padding = 0;  
				   
		justify_left = 1;
		min_field_width = 0;		    

		
		
		str_arg = p;
		str_arg_l = 0;
		if (*p != NUL)
		    str_arg_l++;  
				  
		break;
	    }

	    if (*p != NUL)
		p++;     

	    
	    
	    
	    if (!justify_left)
	    {
		
		int pn = (int)(min_field_width - (str_arg_l + number_of_zeros_to_pad));

		if (pn > 0)
		{
		    if (str_l < str_m)
		    {
			size_t avail = str_m - str_l;

			vim_memset(str + str_l, zero_padding ? '0' : ' ',
					     (size_t)pn > avail ? avail
								: (size_t)pn);
		    }
		    str_l += pn;
		}
	    }

	    
	    
	    if (number_of_zeros_to_pad == 0)
	    {
		
		
		zero_padding_insertion_ind = 0;
	    }
	    else
	    {
		
		
		int zn = (int)zero_padding_insertion_ind;

		if (zn > 0)
		{
		    if (str_l < str_m)
		    {
			size_t avail = str_m - str_l;

			mch_memmove(str + str_l, str_arg,
					     (size_t)zn > avail ? avail
								: (size_t)zn);
		    }
		    str_l += zn;
		}

		
		
		zn = (int)number_of_zeros_to_pad;
		if (zn > 0)
		{
		    if (str_l < str_m)
		    {
			size_t avail = str_m - str_l;

			vim_memset(str + str_l, '0',
					     (size_t)zn > avail ? avail
								: (size_t)zn);
		    }
		    str_l += zn;
		}
	    }

	    
	    
	    {
		int sn = (int)(str_arg_l - zero_padding_insertion_ind);

		if (sn > 0)
		{
		    if (str_l < str_m)
		    {
			size_t avail = str_m - str_l;

			mch_memmove(str + str_l,
				str_arg + zero_padding_insertion_ind,
				(size_t)sn > avail ? avail : (size_t)sn);
		    }
		    str_l += sn;
		}
	    }

	    
	    if (justify_left)
	    {
		
		int pn = (int)(min_field_width
				      - (str_arg_l + number_of_zeros_to_pad));

		if (pn > 0)
		{
		    if (str_l < str_m)
		    {
			size_t avail = str_m - str_l;

			vim_memset(str + str_l, ' ',
					     (size_t)pn > avail ? avail
								: (size_t)pn);
		    }
		    str_l += pn;
		}
	    }
	    vim_free(tofree);
	}
    }

    if (str_m > 0)
    {
	
	
	
	str[str_l <= str_m - 1 ? str_l : str_m - 1] = '\0';
    }

    if (tvs != NULL && tvs[num_posarg != 0 ? num_posarg : arg_idx - 1].v_type != VAR_UNKNOWN)
	emsg(_(e_too_many_arguments_to_printf));

error:
    vim_free((char*)ap_types);
    va_end(ap);

    
    
    
    return (int)str_l;
}

#endif 
