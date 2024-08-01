



#include "vim.h"

static histentry_T *(history[HIST_COUNT]) = {NULL, NULL, NULL, NULL, NULL};
static int	hisidx[HIST_COUNT] = {-1, -1, -1, -1, -1};  
static int	hisnum[HIST_COUNT] = {0, 0, 0, 0, 0};
		    
static int	hislen = 0;		


    int
get_hislen(void)
{
    return hislen;
}


    histentry_T *
get_histentry(int hist_type)
{
    return history[hist_type];
}

#if defined(FEAT_VIMINFO) || defined(PROTO)
    void
set_histentry(int hist_type, histentry_T *entry)
{
    history[hist_type] = entry;
}
#endif

    int *
get_hisidx(int hist_type)
{
    return &hisidx[hist_type];
}

#if defined(FEAT_VIMINFO) || defined(PROTO)
    int *
get_hisnum(int hist_type)
{
    return &hisnum[hist_type];
}
#endif


    int
hist_char2type(int c)
{
    if (c == ':')
	return HIST_CMD;
    if (c == '=')
	return HIST_EXPR;
    if (c == '@')
	return HIST_INPUT;
    if (c == '>')
	return HIST_DEBUG;
    return HIST_SEARCH;	    
}



static char *(history_names[]) =
{
    "cmd",
    "search",
    "expr",
    "input",
    "debug",
    NULL
};


    char_u *
get_history_arg(expand_T *xp UNUSED, int idx)
{
    char    *short_names = ":=@>?/";
    int	    short_names_count = (int)STRLEN(short_names);
    int	    history_name_count = ARRAY_LENGTH(history_names) - 1;

    if (idx < short_names_count)
    {
	xp->xp_buf[0] = (char_u)short_names[idx];
	xp->xp_buf[1] = NUL;
	return xp->xp_buf;
    }
    if (idx < short_names_count + history_name_count)
	return (char_u *)history_names[idx - short_names_count];
    if (idx == short_names_count + history_name_count)
	return (char_u *)"all";
    return NULL;
}


    void
init_history(void)
{
    int		newlen;	    
    histentry_T	*temp;
    int		i;
    int		j;
    int		type;

    
    newlen = (int)p_hi;
    if (newlen == hislen)		
	return;

    
    for (type = 0; type < HIST_COUNT; ++type)   
    {
	if (newlen > 0)
	{
	    temp = ALLOC_MULT(histentry_T, newlen);
	    if (temp == NULL)   
	    {
		if (type == 0)  
		{
		    newlen = hislen;
		    break;
		}
		
		
		newlen = 0;
		type = -1;
		continue;
	    }
	}
	else
	    temp = NULL;

	if (hisidx[type] < 0)		
	{
	    for (i = 0; i < newlen; ++i)
		clear_hist_entry(&temp[i]);
	}
	else if (newlen > hislen)	
	{
	    for (i = 0; i <= hisidx[type]; ++i)
		temp[i] = history[type][i];
	    j = i;
	    for ( ; i <= newlen - (hislen - hisidx[type]); ++i)
		clear_hist_entry(&temp[i]);
	    for ( ; j < hislen; ++i, ++j)
		temp[i] = history[type][j];
	}
	else				
	{
	    j = hisidx[type];
	    for (i = newlen - 1; ; --i)
	    {
		if (i >= 0)		
		    temp[i] = history[type][j];
		else			
		    vim_free(history[type][j].hisstr);
		if (--j < 0)
		    j = hislen - 1;
		if (j == hisidx[type])
		    break;
	    }
	    hisidx[type] = newlen - 1;
	}
	vim_free(history[type]);
	history[type] = temp;
    }
    hislen = newlen;
}

    void
clear_hist_entry(histentry_T *hisptr)
{
    hisptr->hisnum = 0;
    hisptr->viminfo = FALSE;
    hisptr->hisstr = NULL;
    hisptr->time_set = 0;
}


    int
in_history(
    int	    type,
    char_u  *str,
    int	    move_to_front,	
    int	    sep,
    int	    writing)		
{
    int	    i;
    int	    last_i = -1;
    char_u  *p;

    if (hisidx[type] < 0)
	return FALSE;
    i = hisidx[type];
    do
    {
	if (history[type][i].hisstr == NULL)
	    return FALSE;

	
	
	p = history[type][i].hisstr;
	if (STRCMP(str, p) == 0
		&& !(writing && history[type][i].viminfo)
		&& (type != HIST_SEARCH || sep == p[STRLEN(p) + 1]))
	{
	    if (!move_to_front)
		return TRUE;
	    last_i = i;
	    break;
	}
	if (--i < 0)
	    i = hislen - 1;
    } while (i != hisidx[type]);

    if (last_i < 0)
	return FALSE;

    str = history[type][i].hisstr;
    while (i != hisidx[type])
    {
	if (++i >= hislen)
	    i = 0;
	history[type][last_i] = history[type][i];
	last_i = i;
    }
    history[type][i].hisnum = ++hisnum[type];
    history[type][i].viminfo = FALSE;
    history[type][i].hisstr = str;
    history[type][i].time_set = vim_time();
    return TRUE;
}


    static int
get_histtype(char_u *name)
{
    int		i;
    int		len = (int)STRLEN(name);

    
    if (len == 0)
	return hist_char2type(get_cmdline_firstc());

    for (i = 0; history_names[i] != NULL; ++i)
	if (STRNICMP(name, history_names[i], len) == 0)
	    return i;

    if (vim_strchr((char_u *)":=@>?/", name[0]) != NULL && name[1] == NUL)
	return hist_char2type(name[0]);

    return -1;
}

static int	last_maptick = -1;	


    void
add_to_history(
    int		histype,
    char_u	*new_entry,
    size_t	new_entrylen,
    int		in_map,		
    int		sep)		
{
    histentry_T	*hisptr;

    if (hislen == 0)		
	return;

    if ((cmdmod.cmod_flags & CMOD_KEEPPATTERNS) && histype == HIST_SEARCH)
	return;

    
    
    
    if (histype == HIST_SEARCH && in_map)
    {
	if (maptick == last_maptick && hisidx[HIST_SEARCH] >= 0)
	{
	    
	    hisptr = &history[HIST_SEARCH][hisidx[HIST_SEARCH]];
	    vim_free(hisptr->hisstr);
	    clear_hist_entry(hisptr);
	    --hisnum[histype];
	    if (--hisidx[HIST_SEARCH] < 0)
		hisidx[HIST_SEARCH] = hislen - 1;
	}
	last_maptick = -1;
    }

    if (in_history(histype, new_entry, TRUE, sep, FALSE))
	return;

    if (++hisidx[histype] == hislen)
	hisidx[histype] = 0;
    hisptr = &history[histype][hisidx[histype]];
    vim_free(hisptr->hisstr);

    
    hisptr->hisstr = vim_strnsave(new_entry, new_entrylen + 2);
    if (hisptr->hisstr != NULL)
	hisptr->hisstr[new_entrylen + 1] = sep;

    hisptr->hisnum = ++hisnum[histype];
    hisptr->viminfo = FALSE;
    hisptr->time_set = vim_time();
    if (histype == HIST_SEARCH && in_map)
	last_maptick = maptick;
}

#if defined(FEAT_EVAL) || defined(PROTO)


    static int
get_history_idx(int histype)
{
    if (hislen == 0 || histype < 0 || histype >= HIST_COUNT
		    || hisidx[histype] < 0)
	return -1;

    return history[histype][hisidx[histype]].hisnum;
}


    static int
calc_hist_idx(int histype, int num)
{
    int		i;
    histentry_T	*hist;
    int		wrapped = FALSE;

    if (hislen == 0 || histype < 0 || histype >= HIST_COUNT
		    || (i = hisidx[histype]) < 0 || num == 0)
	return -1;

    hist = history[histype];
    if (num > 0)
    {
	while (hist[i].hisnum > num)
	    if (--i < 0)
	    {
		if (wrapped)
		    break;
		i += hislen;
		wrapped = TRUE;
	    }
	if (i >= 0 && hist[i].hisnum == num && hist[i].hisstr != NULL)
	    return i;
    }
    else if (-num <= hislen)
    {
	i += num + 1;
	if (i < 0)
	    i += hislen;
	if (hist[i].hisstr != NULL)
	    return i;
    }
    return -1;
}


    static char_u *
get_history_entry(int histype, int idx)
{
    idx = calc_hist_idx(histype, idx);
    if (idx >= 0)
	return history[histype][idx].hisstr;
    else
	return (char_u *)"";
}


    static int
clr_history(int histype)
{
    int		i;
    histentry_T	*hisptr;

    if (hislen != 0 && histype >= 0 && histype < HIST_COUNT)
    {
	hisptr = history[histype];
	for (i = hislen; i--;)
	{
	    vim_free(hisptr->hisstr);
	    clear_hist_entry(hisptr);
	    hisptr++;
	}
	hisidx[histype] = -1;	
	hisnum[histype] = 0;	
	return OK;
    }
    return FAIL;
}


    static int
del_history_entry(int histype, char_u *str)
{
    regmatch_T	regmatch;
    histentry_T	*hisptr;
    int		idx;
    int		i;
    int		last;
    int		found = FALSE;

    if (hislen == 0 || histype < 0 || histype >= HIST_COUNT || *str == NUL
		|| hisidx[histype] < 0)
	return FALSE;

    idx = hisidx[histype];
    regmatch.regprog = vim_regcomp(str, RE_MAGIC + RE_STRING);
    if (regmatch.regprog == NULL)
	return FALSE;

    regmatch.rm_ic = FALSE;	

    i = last = idx;
    do
    {
	hisptr = &history[histype][i];
	if (hisptr->hisstr == NULL)
	    break;
	if (vim_regexec(&regmatch, hisptr->hisstr, (colnr_T)0))
	{
	    found = TRUE;
	    vim_free(hisptr->hisstr);
	    clear_hist_entry(hisptr);
	}
	else
	{
	    if (i != last)
	    {
		history[histype][last] = *hisptr;
		clear_hist_entry(hisptr);
	    }
	    if (--last < 0)
		last += hislen;
	}
	if (--i < 0)
	    i += hislen;
    } while (i != idx);

    if (history[histype][idx].hisstr == NULL)
	hisidx[histype] = -1;

    vim_regfree(regmatch.regprog);
    return found;
}


    static int
del_history_idx(int histype, int idx)
{
    int	    i, j;

    i = calc_hist_idx(histype, idx);
    if (i < 0)
	return FALSE;
    idx = hisidx[histype];
    vim_free(history[histype][i].hisstr);

    
    
    if (histype == HIST_SEARCH && maptick == last_maptick && i == idx)
	last_maptick = -1;

    while (i != idx)
    {
	j = (i + 1) % hislen;
	history[histype][i] = history[histype][j];
	i = j;
    }
    clear_hist_entry(&history[histype][i]);
    if (--i < 0)
	i += hislen;
    hisidx[histype] = i;
    return TRUE;
}


    void
f_histadd(typval_T *argvars UNUSED, typval_T *rettv)
{
    int		histype;
    char_u	*str;
    char_u	buf[NUMBUFLEN];

    rettv->vval.v_number = FALSE;
    if (check_secure())
	return;

    if (in_vim9script()
	    && (check_for_string_arg(argvars, 0) == FAIL
		|| check_for_string_arg(argvars, 1) == FAIL))
	return;

    str = tv_get_string_chk(&argvars[0]);	
    histype = str != NULL ? get_histtype(str) : -1;
    if (histype < 0)
	return;

    str = tv_get_string_buf(&argvars[1], buf);
    if (*str == NUL)
	return;

    init_history();
    add_to_history(histype, str, STRLEN(str), FALSE, NUL);
    rettv->vval.v_number = TRUE;
}


    void
f_histdel(typval_T *argvars UNUSED, typval_T *rettv UNUSED)
{
    int		n;
    char_u	buf[NUMBUFLEN];
    char_u	*str;

    if (in_vim9script()
	    && (check_for_string_arg(argvars, 0) == FAIL
		|| check_for_opt_string_or_number_arg(argvars, 1) == FAIL))
	return;

    str = tv_get_string_chk(&argvars[0]);	
    if (str == NULL)
	n = 0;
    else if (argvars[1].v_type == VAR_UNKNOWN)
	
	n = clr_history(get_histtype(str));
    else if (argvars[1].v_type == VAR_NUMBER)
	
	n = del_history_idx(get_histtype(str),
					  (int)tv_get_number(&argvars[1]));
    else
	
	n = del_history_entry(get_histtype(str),
				      tv_get_string_buf(&argvars[1], buf));
    rettv->vval.v_number = n;
}


    void
f_histget(typval_T *argvars UNUSED, typval_T *rettv)
{
    int		type;
    int		idx;
    char_u	*str;

    if (in_vim9script()
	    && (check_for_string_arg(argvars, 0) == FAIL
		|| check_for_opt_number_arg(argvars, 1) == FAIL))
	return;

    str = tv_get_string_chk(&argvars[0]);	
    if (str == NULL)
	rettv->vval.v_string = NULL;
    else
    {
	type = get_histtype(str);
	if (argvars[1].v_type == VAR_UNKNOWN)
	    idx = get_history_idx(type);
	else
	    idx = (int)tv_get_number_chk(&argvars[1], NULL);
						    
	rettv->vval.v_string = vim_strsave(get_history_entry(type, idx));
    }
    rettv->v_type = VAR_STRING;
}


    void
f_histnr(typval_T *argvars UNUSED, typval_T *rettv)
{
    int		i;
    char_u	*histname;

    if (in_vim9script() && check_for_string_arg(argvars, 0) == FAIL)
	return;

    histname = tv_get_string_chk(&argvars[0]);
    i = histname == NULL ? HIST_CMD - 1 : get_histtype(histname);
    if (i >= HIST_CMD && i < HIST_COUNT)
	i = get_history_idx(i);
    else
	i = -1;
    rettv->vval.v_number = i;
}
#endif 

#if defined(FEAT_CRYPT) || defined(PROTO)

    void
remove_key_from_history(void)
{
    char_u	*p;
    int		i;

    i = hisidx[HIST_CMD];
    if (i < 0)
	return;
    p = history[HIST_CMD][i].hisstr;
    if (p == NULL)
	return;

    for ( ; *p; ++p)
	if (STRNCMP(p, "key", 3) == 0 && !SAFE_isalpha(p[3]))
	{
	    p = vim_strchr(p + 3, '=');
	    if (p == NULL)
		break;
	    ++p;
	    for (i = 0; p[i] && !VIM_ISWHITE(p[i]); ++i)
		if (p[i] == '\\' && p[i + 1])
		    ++i;
	    STRMOVE(p, p + i);
	    --p;
	}
}
#endif


    void
ex_history(exarg_T *eap)
{
    histentry_T	*hist;
    int		histype1 = HIST_CMD;
    int		histype2 = HIST_CMD;
    int		hisidx1 = 1;
    int		hisidx2 = -1;
    int		idx;
    int		i, j, k;
    char_u	*end;
    char_u	*arg = eap->arg;

    if (hislen == 0)
    {
	msg(_("'history' option is zero"));
	return;
    }

    if (!(VIM_ISDIGIT(*arg) || *arg == '-' || *arg == ','))
    {
	end = arg;
	while (ASCII_ISALPHA(*end)
		|| vim_strchr((char_u *)":=@>/?", *end) != NULL)
	    end++;
	i = *end;
	*end = NUL;
	histype1 = get_histtype(arg);
	if (histype1 == -1)
	{
	    if (STRNICMP(arg, "all", STRLEN(arg)) == 0)
	    {
		histype1 = 0;
		histype2 = HIST_COUNT-1;
	    }
	    else
	    {
		*end = i;
		semsg(_(e_trailing_characters_str), arg);
		return;
	    }
	}
	else
	    histype2 = histype1;
	*end = i;
    }
    else
	end = arg;
    if (!get_list_range(&end, &hisidx1, &hisidx2) || *end != NUL)
    {
	if (*end != NUL)
	    semsg(_(e_trailing_characters_str), end);
	else
	    semsg(_(e_val_too_large), arg);
	return;
    }

    for (; !got_int && histype1 <= histype2; ++histype1)
    {
	STRCPY(IObuff, "\n      #  ");
	STRCAT(STRCAT(IObuff, history_names[histype1]), " history");
	msg_puts_title((char *)IObuff);
	idx = hisidx[histype1];
	hist = history[histype1];
	j = hisidx1;
	k = hisidx2;
	if (j < 0)
	    j = (-j > hislen) ? 0 : hist[(hislen+j+idx+1) % hislen].hisnum;
	if (k < 0)
	    k = (-k > hislen) ? 0 : hist[(hislen+k+idx+1) % hislen].hisnum;
	if (idx >= 0 && j <= k)
	    for (i = idx + 1; !got_int; ++i)
	    {
		if (i == hislen)
		    i = 0;
		if (hist[i].hisstr != NULL
			&& hist[i].hisnum >= j && hist[i].hisnum <= k
			&& !message_filtered(hist[i].hisstr))
		{
		    msg_putchar('\n');
		    sprintf((char *)IObuff, "%c%6d  ", i == idx ? '>' : ' ',
							      hist[i].hisnum);
		    if (vim_strsize(hist[i].hisstr) > (int)Columns - 10)
			trunc_string(hist[i].hisstr, IObuff + STRLEN(IObuff),
			     (int)Columns - 10, IOSIZE - (int)STRLEN(IObuff));
		    else
			STRCAT(IObuff, hist[i].hisstr);
		    msg_outtrans(IObuff);
		    out_flush();
		}
		if (i == idx)
		    break;
	    }
    }
}
