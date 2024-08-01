



#include "vim.h"

static int	cmd_showtail;	

static int	ExpandFromContext(expand_T *xp, char_u *, char_u ***, int *, int);
static char_u	*showmatches_gettail(char_u *s);
static int	expand_showtail(expand_T *xp);
static int	expand_shellcmd(char_u *filepat, char_u ***matches, int *numMatches, int flagsarg);
#if defined(FEAT_EVAL)
static int	ExpandUserDefined(char_u *pat, expand_T *xp, regmatch_T *regmatch, char_u ***matches, int *numMatches);
static int	ExpandUserList(expand_T *xp, char_u ***matches, int *numMatches);
#endif



static pumitem_T *compl_match_array = NULL;
static int compl_match_arraysize;

static int compl_startcol;
static int compl_selected;

#define SHOW_MATCH(m) (showtail ? showmatches_gettail(matches[m]) : matches[m])


    static int
cmdline_fuzzy_completion_supported(expand_T *xp)
{
    return (vim_strchr(p_wop, WOP_FUZZY) != NULL
	    && xp->xp_context != EXPAND_BOOL_SETTINGS
	    && xp->xp_context != EXPAND_COLORS
	    && xp->xp_context != EXPAND_COMPILER
	    && xp->xp_context != EXPAND_DIRECTORIES
	    && xp->xp_context != EXPAND_DIRS_IN_CDPATH
	    && xp->xp_context != EXPAND_FILES
	    && xp->xp_context != EXPAND_FILES_IN_PATH
	    && xp->xp_context != EXPAND_FILETYPE
	    && xp->xp_context != EXPAND_HELP
	    && xp->xp_context != EXPAND_KEYMAP
	    && xp->xp_context != EXPAND_OLD_SETTING
	    && xp->xp_context != EXPAND_STRING_SETTING
	    && xp->xp_context != EXPAND_SETTING_SUBTRACT
	    && xp->xp_context != EXPAND_OWNSYNTAX
	    && xp->xp_context != EXPAND_PACKADD
	    && xp->xp_context != EXPAND_RUNTIME
	    && xp->xp_context != EXPAND_SHELLCMD
	    && xp->xp_context != EXPAND_TAGS
	    && xp->xp_context != EXPAND_TAGS_LISTFILES
	    && xp->xp_context != EXPAND_USER_LIST);
}


    int
cmdline_fuzzy_complete(char_u *fuzzystr)
{
    return vim_strchr(p_wop, WOP_FUZZY) != NULL && *fuzzystr != NUL;
}


    static int
sort_func_compare(const void *s1, const void *s2)
{
    char_u *p1 = *(char_u **)s1;
    char_u *p2 = *(char_u **)s2;

    if (*p1 != '<' && *p2 == '<') return -1;
    if (*p1 == '<' && *p2 != '<') return 1;
    return STRCMP(p1, p2);
}


    static void
wildescape(
    expand_T	*xp,
    char_u	*str,
    int		numfiles,
    char_u	**files)
{
    char_u	*p;
    int		vse_what = xp->xp_context == EXPAND_BUFFERS
						       ? VSE_BUFFER : VSE_NONE;

    if (xp->xp_context == EXPAND_FILES
	    || xp->xp_context == EXPAND_FILES_IN_PATH
	    || xp->xp_context == EXPAND_SHELLCMD
	    || xp->xp_context == EXPAND_BUFFERS
	    || xp->xp_context == EXPAND_DIRECTORIES
	    || xp->xp_context == EXPAND_DIRS_IN_CDPATH)
    {
	
	
	for (int i = 0; i < numfiles; ++i)
	{
	    
	    if (xp->xp_backslash & XP_BS_THREE)
	    {
		char *pat = (xp->xp_backslash & XP_BS_COMMA) ?  " ," : " ";
		p = vim_strsave_escaped(files[i], (char_u *)pat);
		if (p != NULL)
		{
		    vim_free(files[i]);
		    files[i] = p;
#if defined(BACKSLASH_IN_FILENAME)
		    p = vim_strsave_escaped(files[i], (char_u *)" ");
		    if (p != NULL)
		    {
			vim_free(files[i]);
			files[i] = p;
		    }
#endif
		}
	    }
	    else if (xp->xp_backslash & XP_BS_COMMA)
	    {
		if (vim_strchr(files[i], ',') != NULL)
		{
		    p = vim_strsave_escaped(files[i], (char_u *)",");
		    if (p != NULL)
		    {
			vim_free(files[i]);
			files[i] = p;
		    }
		}
	    }
#ifdef BACKSLASH_IN_FILENAME
	    p = vim_strsave_fnameescape(files[i], vse_what);
#else
	    p = vim_strsave_fnameescape(files[i],
		    xp->xp_shell ? VSE_SHELL : vse_what);
#endif
	    if (p != NULL)
	    {
		vim_free(files[i]);
		files[i] = p;
	    }

	    
	    
	    if (str[0] == '\\' && str[1] == '~' && files[i][0] == '~')
		escape_fname(&files[i]);
	}
	xp->xp_backslash = XP_BS_NONE;

	
	
	if (*files[0] == '+')
	    escape_fname(&files[0]);
    }
    else if (xp->xp_context == EXPAND_TAGS)
    {
	
	
	for (int i = 0; i < numfiles; ++i)
	{
	    p = vim_strsave_escaped(files[i], (char_u *)"\\|\"");
	    if (p != NULL)
	    {
		vim_free(files[i]);
		files[i] = p;
	    }
	}
    }
}


    static void
ExpandEscape(
    expand_T	*xp,
    char_u	*str,
    int		numfiles,
    char_u	**files,
    int		options)
{
    
    if (options & WILD_HOME_REPLACE)
	tilde_replace(str, numfiles, files);

    if (options & WILD_ESCAPE)
	wildescape(xp, str, numfiles, files);
}


    int
nextwild(
    expand_T	*xp,
    int		type,
    int		options,	
    int		escape)		
{
    cmdline_info_T	*ccline = get_cmdline_info();
    int		i, j;
    char_u	*p1;
    char_u	*p2;
    int		difflen;
    int		v;

    if (xp->xp_numfiles == -1)
    {
	set_expand_context(xp);
	cmd_showtail = expand_showtail(xp);
    }

    if (xp->xp_context == EXPAND_UNSUCCESSFUL)
    {
	beep_flush();
	return OK;  
    }
    if (xp->xp_context == EXPAND_NOTHING)
    {
	
	return FAIL;
    }

    
    
    if (!cmd_silent)
    {
	msg_puts("...");	    
	out_flush();
    }

    i = (int)(xp->xp_pattern - ccline->cmdbuff);
    xp->xp_pattern_len = ccline->cmdpos - i;

    if (type == WILD_NEXT || type == WILD_PREV
	    || type == WILD_PAGEUP || type == WILD_PAGEDOWN)
    {
	
	p2 = ExpandOne(xp, NULL, NULL, 0, type);
    }
    else
    {
	if (cmdline_fuzzy_completion_supported(xp))
	    
	    p1 = vim_strnsave(xp->xp_pattern, xp->xp_pattern_len);
	else
	    p1 = addstar(xp->xp_pattern, xp->xp_pattern_len, xp->xp_context);

	
	if (p1 == NULL)
	    p2 = NULL;
	else
	{
	    int use_options = options |
		    WILD_HOME_REPLACE|WILD_ADD_SLASH|WILD_SILENT;
	    if (escape)
		use_options |= WILD_ESCAPE;

	    if (p_wic)
		use_options += WILD_ICASE;
	    p2 = ExpandOne(xp, p1,
			 vim_strnsave(&ccline->cmdbuff[i], xp->xp_pattern_len),
							   use_options, type);
	    vim_free(p1);
	    
	    if (p2 != NULL && type == WILD_LONGEST)
	    {
		for (j = 0; j < xp->xp_pattern_len; ++j)
		     if (ccline->cmdbuff[i + j] == '*'
			     || ccline->cmdbuff[i + j] == '?')
			 break;
		if ((int)STRLEN(p2) < j)
		    VIM_CLEAR(p2);
	    }
	}
    }

    if (p2 != NULL && !got_int)
    {
	difflen = (int)STRLEN(p2) - xp->xp_pattern_len;
	if (ccline->cmdlen + difflen + 4 > ccline->cmdbufflen)
	{
	    v = realloc_cmdbuff(ccline->cmdlen + difflen + 4);
	    xp->xp_pattern = ccline->cmdbuff + i;
	}
	else
	    v = OK;
	if (v == OK)
	{
	    mch_memmove(&ccline->cmdbuff[ccline->cmdpos + difflen],
		    &ccline->cmdbuff[ccline->cmdpos],
		    (size_t)(ccline->cmdlen - ccline->cmdpos + 1));
	    mch_memmove(&ccline->cmdbuff[i], p2, STRLEN(p2));
	    ccline->cmdlen += difflen;
	    ccline->cmdpos += difflen;
	}
    }
    vim_free(p2);

    redrawcmd();
    cursorcmd();

    
    
    if (xp->xp_context == EXPAND_MAPPINGS && p2 == NULL)
	return FAIL;

    if (xp->xp_numfiles <= 0 && p2 == NULL)
	beep_flush();
    else if (xp->xp_numfiles == 1)
	
	(void)ExpandOne(xp, NULL, NULL, 0, WILD_FREE);

    return OK;
}


    static int
cmdline_pum_create(
	cmdline_info_T	*ccline,
	expand_T	*xp,
	char_u		**matches,
	int		numMatches,
	int		showtail)
{
    int		i;
    int		columns;

    
    compl_match_arraysize = numMatches;
    compl_match_array = ALLOC_MULT(pumitem_T, compl_match_arraysize);
    for (i = 0; i < numMatches; i++)
    {
	compl_match_array[i].pum_text = SHOW_MATCH(i);
	compl_match_array[i].pum_info = NULL;
	compl_match_array[i].pum_extra = NULL;
	compl_match_array[i].pum_kind = NULL;
	compl_match_array[i].pum_user_hlattr = -1;
    }

    
    compl_startcol = vim_strsize(ccline->cmdbuff) + 1;
    columns = vim_strsize(xp->xp_pattern);
    if (showtail)
    {
	columns += vim_strsize(showmatches_gettail(matches[0]));
	columns -= vim_strsize(matches[0]);
    }
    if (columns >= compl_startcol)
	compl_startcol = 0;
    else
	compl_startcol -= columns;

    
    compl_selected = -1;

    cmdline_pum_display();

    return EXPAND_OK;
}


    void
cmdline_pum_display(void)
{
    pum_display(compl_match_array, compl_match_arraysize, compl_selected);
}


    int
cmdline_pum_active(void)
{
    return pum_visible() && compl_match_array != NULL;
}


    void
cmdline_pum_remove(void)
{
    int save_p_lz = p_lz;
    int	save_KeyTyped = KeyTyped;

    pum_undisplay();
    VIM_CLEAR(compl_match_array);
    p_lz = FALSE;  
    update_screen(0);
    p_lz = save_p_lz;
    redrawcmd();

    
    
    KeyTyped = save_KeyTyped;
}

    void
cmdline_pum_cleanup(cmdline_info_T *cclp)
{
    cmdline_pum_remove();
    wildmenu_cleanup(cclp);
}


    int
cmdline_compl_startcol(void)
{
    return compl_startcol;
}


    char_u *
cmdline_compl_pattern(void)
{
    expand_T	*xp = get_cmdline_info()->xpc;

    return xp == NULL ? NULL : xp->xp_orig;
}


    int
cmdline_compl_is_fuzzy(void)
{
    expand_T	*xp = get_cmdline_info()->xpc;

    return xp != NULL && cmdline_fuzzy_completion_supported(xp);
}


    static int
skip_status_match_char(expand_T *xp, char_u *s)
{
    if ((rem_backslash(s) && xp->xp_context != EXPAND_HELP)
#ifdef FEAT_MENU
	    || ((xp->xp_context == EXPAND_MENUS
		    || xp->xp_context == EXPAND_MENUNAMES)
			  && (s[0] == '\t' || (s[0] == '\\' && s[1] != NUL)))
#endif
	   )
    {
#ifndef BACKSLASH_IN_FILENAME
	if (xp->xp_shell && csh_like_shell() && s[1] == '\\' && s[2] == '!')
	    return 2;
#endif
	return 1;
    }
    return 0;
}


    static int
status_match_len(expand_T *xp, char_u *s)
{
    int	len = 0;

#ifdef FEAT_MENU
    int emenu = xp->xp_context == EXPAND_MENUS
	     || xp->xp_context == EXPAND_MENUNAMES;

    
    if (emenu && menu_is_separator(s))
	return 1;
#endif

    while (*s != NUL)
    {
	s += skip_status_match_char(xp, s);
	len += ptr2cells(s);
	MB_PTR_ADV(s);
    }

    return len;
}


    static void
win_redr_status_matches(
    expand_T	*xp,
    int		num_matches,
    char_u	**matches,	
    int		match,
    int		showtail)
{
    int		row;
    char_u	*buf;
    int		len;
    int		clen;		
    int		fillchar;
    int		attr;
    int		i;
    int		highlight = TRUE;
    char_u	*selstart = NULL;
    int		selstart_col = 0;
    char_u	*selend = NULL;
    static int	first_match = 0;
    int		add_left = FALSE;
    char_u	*s;
#ifdef FEAT_MENU
    int		emenu;
#endif
    int		l;

    if (matches == NULL)	
	return;

    if (has_mbyte)
	buf = alloc(Columns * MB_MAXBYTES + 1);
    else
	buf = alloc(Columns + 1);
    if (buf == NULL)
	return;

    if (match == -1)	
    {
	match = 0;
	highlight = FALSE;
    }
    
    clen = status_match_len(xp, SHOW_MATCH(match)) + 3;
    if (match == 0)
	first_match = 0;
    else if (match < first_match)
    {
	
	first_match = match;
	add_left = TRUE;
    }
    else
    {
	
	for (i = first_match; i < match; ++i)
	    clen += status_match_len(xp, SHOW_MATCH(i)) + 2;
	if (first_match > 0)
	    clen += 2;
	
	if ((int)clen > Columns)
	{
	    first_match = match;
	    
	    clen = 2;
	    for (i = match; i < num_matches; ++i)
	    {
		clen += status_match_len(xp, SHOW_MATCH(i)) + 2;
		if ((int)clen >= Columns)
		    break;
	    }
	    if (i == num_matches)
		add_left = TRUE;
	}
    }
    if (add_left)
	while (first_match > 0)
	{
	    clen += status_match_len(xp, SHOW_MATCH(first_match - 1)) + 2;
	    if ((int)clen >= Columns)
		break;
	    --first_match;
	}

    fillchar = fillchar_status(&attr, curwin);

    if (first_match == 0)
    {
	*buf = NUL;
	len = 0;
    }
    else
    {
	STRCPY(buf, "< ");
	len = 2;
    }
    clen = len;

    i = first_match;
    while ((int)(clen + status_match_len(xp, SHOW_MATCH(i)) + 2) < Columns)
    {
	if (i == match)
	{
	    selstart = buf + len;
	    selstart_col = clen;
	}

	s = SHOW_MATCH(i);
	
#ifdef FEAT_MENU
	emenu = (xp->xp_context == EXPAND_MENUS
		|| xp->xp_context == EXPAND_MENUNAMES);
	if (emenu && menu_is_separator(s))
	{
	    STRCPY(buf + len, transchar('|'));
	    l = (int)STRLEN(buf + len);
	    len += l;
	    clen += l;
	}
	else
#endif
	    for ( ; *s != NUL; ++s)
	{
	    s += skip_status_match_char(xp, s);
	    clen += ptr2cells(s);
	    if (has_mbyte && (l = (*mb_ptr2len)(s)) > 1)
	    {
		STRNCPY(buf + len, s, l);
		s += l - 1;
		len += l;
	    }
	    else
	    {
		STRCPY(buf + len, transchar_byte(*s));
		len += (int)STRLEN(buf + len);
	    }
	}
	if (i == match)
	    selend = buf + len;

	*(buf + len++) = ' ';
	*(buf + len++) = ' ';
	clen += 2;
	if (++i == num_matches)
		break;
    }

    if (i != num_matches)
    {
	*(buf + len++) = '>';
	++clen;
    }

    buf[len] = NUL;

    row = cmdline_row - 1;
    if (row >= 0)
    {
	if (wild_menu_showing == 0)
	{
	    if (msg_scrolled > 0)
	    {
		
		
		if (cmdline_row == Rows - 1)
		{
		    screen_del_lines(0, 0, 1, (int)Rows, TRUE, 0, NULL);
		    ++msg_scrolled;
		}
		else
		{
		    ++cmdline_row;
		    ++row;
		}
		wild_menu_showing = WM_SCROLLED;
	    }
	    else
	    {
		
		
		
		if (lastwin->w_status_height == 0)
		{
		    save_p_ls = p_ls;
		    save_p_wmh = p_wmh;
		    p_ls = 2;
		    p_wmh = 0;
		    last_status(FALSE);
		}
		wild_menu_showing = WM_SHOWN;
	    }
	}

	screen_puts(buf, row, 0, attr);
	if (selstart != NULL && highlight)
	{
	    *selend = NUL;
	    screen_puts(selstart, row, selstart_col, HL_ATTR(HLF_WM));
	}

	screen_fill(row, row + 1, clen, (int)Columns, fillchar, fillchar, attr);
    }

    win_redraw_last_status(topframe);
    vim_free(buf);
}


    static char_u *
get_next_or_prev_match(
	int		mode,
	expand_T	*xp)
{
    int findex = xp->xp_selected;
    int ht;

    if (xp->xp_numfiles <= 0)
	return NULL;

    if (mode == WILD_PREV)
    {
	if (findex == -1)
	    findex = xp->xp_numfiles;
	--findex;
    }
    else if (mode == WILD_NEXT)
	++findex;
    else if (mode == WILD_PAGEUP)
    {
	if (findex == 0)
	    
	    findex = -1;
	else if (findex == -1)
	    
	    findex = xp->xp_numfiles - 1;
	else
	{
	    
	    ht = pum_get_height();
	    if (ht > 3)
		ht -= 2;
	    findex -= ht;
	    if (findex < 0)
		
		findex = 0;
	}
    }
    else   
    {
	if (findex == xp->xp_numfiles - 1)
	    
	    findex = -1;
	else if (findex == -1)
	    
	    findex = 0;
	else
	{
	    
	    ht = pum_get_height();
	    if (ht > 3)
		ht -= 2;
	    findex += ht;
	    if (findex >= xp->xp_numfiles)
		
		findex = xp->xp_numfiles - 1;
	}
    }

    
    if (findex < 0)
    {
	if (xp->xp_orig == NULL)
	    findex = xp->xp_numfiles - 1;
	else
	    findex = -1;
    }
    if (findex >= xp->xp_numfiles)
    {
	if (xp->xp_orig == NULL)
	    findex = 0;
	else
	    findex = -1;
    }
    if (compl_match_array)
    {
	compl_selected = findex;
	cmdline_pum_display();
    }
    else if (p_wmnu)
	win_redr_status_matches(xp, xp->xp_numfiles, xp->xp_files,
		findex, cmd_showtail);
    xp->xp_selected = findex;

    if (findex == -1)
	return vim_strsave(xp->xp_orig);

    return vim_strsave(xp->xp_files[findex]);
}


    static char_u *
ExpandOne_start(int mode, expand_T *xp, char_u *str, int options)
{
    int		non_suf_match;		
    int		i;
    char_u	*ss = NULL;

    
    if (ExpandFromContext(xp, str, &xp->xp_files, &xp->xp_numfiles,
		options) == FAIL)
    {
#ifdef FNAME_ILLEGAL
	
	
	
	if (!(options & WILD_SILENT) && (options & WILD_LIST_NOTFOUND))
	    semsg(_(e_no_match_str_2), str);
#endif
    }
    else if (xp->xp_numfiles == 0)
    {
	if (!(options & WILD_SILENT))
	    semsg(_(e_no_match_str_2), str);
    }
    else
    {
	
	ExpandEscape(xp, str, xp->xp_numfiles, xp->xp_files, options);

	
	if (mode != WILD_ALL && mode != WILD_ALL_KEEP && mode != WILD_LONGEST)
	{
	    if (xp->xp_numfiles)
		non_suf_match = xp->xp_numfiles;
	    else
		non_suf_match = 1;
	    if ((xp->xp_context == EXPAND_FILES
			|| xp->xp_context == EXPAND_DIRECTORIES)
		    && xp->xp_numfiles > 1)
	    {
		
		
		
		non_suf_match = 0;
		for (i = 0; i < 2; ++i)
		    if (match_suffix(xp->xp_files[i]))
			++non_suf_match;
	    }
	    if (non_suf_match != 1)
	    {
		
		
		
		
		if (!(options & WILD_SILENT))
		    emsg(_(e_too_many_file_names));
		else if (!(options & WILD_NO_BEEP))
		    beep_flush();
	    }
	    if (!(non_suf_match != 1 && mode == WILD_EXPAND_FREE))
		ss = vim_strsave(xp->xp_files[0]);
	}
    }

    return ss;
}


    static char_u *
find_longest_match(expand_T *xp, int options)
{
    long_u	len;
    int		mb_len = 1;
    int		c0, ci;
    int		i;
    char_u	*ss;

    for (len = 0; xp->xp_files[0][len]; len += mb_len)
    {
	if (has_mbyte)
	{
	    mb_len = (*mb_ptr2len)(&xp->xp_files[0][len]);
	    c0 =(* mb_ptr2char)(&xp->xp_files[0][len]);
	}
	else
	    c0 = xp->xp_files[0][len];
	for (i = 1; i < xp->xp_numfiles; ++i)
	{
	    if (has_mbyte)
		ci =(* mb_ptr2char)(&xp->xp_files[i][len]);
	    else
		ci = xp->xp_files[i][len];
	    if (p_fic && (xp->xp_context == EXPAND_DIRECTORIES
			|| xp->xp_context == EXPAND_FILES
			|| xp->xp_context == EXPAND_SHELLCMD
			|| xp->xp_context == EXPAND_BUFFERS))
	    {
		if (MB_TOLOWER(c0) != MB_TOLOWER(ci))
		    break;
	    }
	    else if (c0 != ci)
		break;
	}
	if (i < xp->xp_numfiles)
	{
	    if (!(options & WILD_NO_BEEP))
		vim_beep(BO_WILD);
	    break;
	}
    }

    ss = alloc(len + 1);
    if (ss)
	vim_strncpy(ss, xp->xp_files[0], (size_t)len);

    return ss;
}


    char_u *
ExpandOne(
    expand_T	*xp,
    char_u	*str,
    char_u	*orig,	    
    int		options,
    int		mode)
{
    char_u	*ss = NULL;
    int		orig_saved = FALSE;
    int		i;
    long_u	len;

    
    if (mode == WILD_NEXT || mode == WILD_PREV
	    || mode == WILD_PAGEUP || mode == WILD_PAGEDOWN)
	return get_next_or_prev_match(mode, xp);

    if (mode == WILD_CANCEL)
	ss = vim_strsave(xp->xp_orig ? xp->xp_orig : (char_u *)"");
    else if (mode == WILD_APPLY)
	ss = vim_strsave(xp->xp_selected == -1
			    ? (xp->xp_orig ? xp->xp_orig : (char_u *)"")
			    : xp->xp_files[xp->xp_selected]);

    
    if (xp->xp_numfiles != -1 && mode != WILD_ALL && mode != WILD_LONGEST)
    {
	FreeWild(xp->xp_numfiles, xp->xp_files);
	xp->xp_numfiles = -1;
	VIM_CLEAR(xp->xp_orig);

	
	if (compl_match_array != NULL)
	    cmdline_pum_remove();
    }
    xp->xp_selected = 0;

    if (mode == WILD_FREE)	
	return NULL;

    if (xp->xp_numfiles == -1 && mode != WILD_APPLY && mode != WILD_CANCEL)
    {
	vim_free(xp->xp_orig);
	xp->xp_orig = orig;
	orig_saved = TRUE;

	ss = ExpandOne_start(mode, xp, str, options);
    }

    
    if (mode == WILD_LONGEST && xp->xp_numfiles > 0)
    {
	ss = find_longest_match(xp, options);
	xp->xp_selected = -1;			
    }

    
    
    if (mode == WILD_ALL && xp->xp_numfiles > 0 && !got_int)
    {
	len = 0;
	for (i = 0; i < xp->xp_numfiles; ++i)
	{
	    if (i > 0)
	    {
		if (xp->xp_prefix == XP_PREFIX_NO)
		    len += 2;	
		else if (xp->xp_prefix == XP_PREFIX_INV)
		    len += 3;	
	    }
	    len += (long_u)STRLEN(xp->xp_files[i]) + 1;
	}
	ss = alloc(len);
	if (ss != NULL)
	{
	    *ss = NUL;
	    for (i = 0; i < xp->xp_numfiles; ++i)
	    {
		if (i > 0)
		{
		    if (xp->xp_prefix == XP_PREFIX_NO)
			STRCAT(ss, "no");
		    else if (xp->xp_prefix == XP_PREFIX_INV)
			STRCAT(ss, "inv");
		}
		STRCAT(ss, xp->xp_files[i]);

		if (i != xp->xp_numfiles - 1)
		    STRCAT(ss, (options & WILD_USE_NL) ? "\n" : " ");
	    }
	}
    }

    if (mode == WILD_EXPAND_FREE || mode == WILD_ALL)
	ExpandCleanup(xp);

    
    if (!orig_saved)
	vim_free(orig);

    return ss;
}


    void
ExpandInit(expand_T *xp)
{
    CLEAR_POINTER(xp);
    xp->xp_backslash = XP_BS_NONE;
    xp->xp_prefix = XP_PREFIX_NONE;
    xp->xp_numfiles = -1;
}


    void
ExpandCleanup(expand_T *xp)
{
    if (xp->xp_numfiles >= 0)
    {
	FreeWild(xp->xp_numfiles, xp->xp_files);
	xp->xp_numfiles = -1;
    }
    VIM_CLEAR(xp->xp_orig);
}


    static void
showmatches_oneline(
	expand_T	*xp,
	char_u		**matches,
	int		numMatches,
	int		lines,
	int		linenr,
	int		maxlen,
	int		showtail,
	int		dir_attr)
{
    int		i, j;
    int		isdir;
    int		lastlen;
    char_u	*p;

    lastlen = 999;
    for (j = linenr; j < numMatches; j += lines)
    {
	if (xp->xp_context == EXPAND_TAGS_LISTFILES)
	{
	    msg_outtrans_attr(matches[j], HL_ATTR(HLF_D));
	    p = matches[j] + STRLEN(matches[j]) + 1;
	    msg_advance(maxlen + 1);
	    msg_puts((char *)p);
	    msg_advance(maxlen + 3);
	    msg_outtrans_long_attr(p + 2, HL_ATTR(HLF_D));
	    break;
	}
	for (i = maxlen - lastlen; --i >= 0; )
	    msg_putchar(' ');
	if (xp->xp_context == EXPAND_FILES
		|| xp->xp_context == EXPAND_SHELLCMD
		|| xp->xp_context == EXPAND_BUFFERS)
	{
	    
	    if (xp->xp_numfiles != -1)
	    {
		char_u	*halved_slash;
		char_u	*exp_path;
		char_u	*path;

		
		
		
		exp_path = expand_env_save_opt(matches[j], TRUE);
		path = exp_path != NULL ? exp_path : matches[j];
		halved_slash = backslash_halve_save(path);
		isdir = mch_isdir(halved_slash != NULL ? halved_slash
			: matches[j]);
		vim_free(exp_path);
		if (halved_slash != path)
		    vim_free(halved_slash);
	    }
	    else
		
		isdir = mch_isdir(matches[j]);
	    if (showtail)
		p = SHOW_MATCH(j);
	    else
	    {
		home_replace(NULL, matches[j], NameBuff, MAXPATHL,
			TRUE);
		p = NameBuff;
	    }
	}
	else
	{
	    isdir = FALSE;
	    p = SHOW_MATCH(j);
	}
	lastlen = msg_outtrans_attr(p, isdir ? dir_attr : 0);
    }
    if (msg_col > 0)	
    {
	msg_clr_eos();
	msg_putchar('\n');
    }
    out_flush();		    
}


    int
showmatches(expand_T *xp, int wildmenu UNUSED)
{
    cmdline_info_T	*ccline = get_cmdline_info();
    int		numMatches;
    char_u	**matches;
    int		i, j;
    int		maxlen;
    int		lines;
    int		columns;
    int		attr;
    int		showtail;

    if (xp->xp_numfiles == -1)
    {
	set_expand_context(xp);
	i = expand_cmdline(xp, ccline->cmdbuff, ccline->cmdpos,
						    &numMatches, &matches);
	showtail = expand_showtail(xp);
	if (i != EXPAND_OK)
	    return i;
    }
    else
    {
	numMatches = xp->xp_numfiles;
	matches = xp->xp_files;
	showtail = cmd_showtail;
    }

    if (wildmenu && vim_strchr(p_wop, WOP_PUM) != NULL)
	
	return cmdline_pum_create(ccline, xp, matches, numMatches, showtail);

    if (!wildmenu)
    {
	msg_didany = FALSE;		
	msg_start();			
	msg_putchar('\n');
	out_flush();
	cmdline_row = msg_row;
	msg_didany = FALSE;		
	msg_start();			
    }

    if (got_int)
	got_int = FALSE;	
    else if (wildmenu)
	win_redr_status_matches(xp, numMatches, matches, -1, showtail);
    else
    {
	
	maxlen = 0;
	for (i = 0; i < numMatches; ++i)
	{
	    if (!showtail && (xp->xp_context == EXPAND_FILES
			  || xp->xp_context == EXPAND_SHELLCMD
			  || xp->xp_context == EXPAND_BUFFERS))
	    {
		home_replace(NULL, matches[i], NameBuff, MAXPATHL, TRUE);
		j = vim_strsize(NameBuff);
	    }
	    else
		j = vim_strsize(SHOW_MATCH(i));
	    if (j > maxlen)
		maxlen = j;
	}

	if (xp->xp_context == EXPAND_TAGS_LISTFILES)
	    lines = numMatches;
	else
	{
	    
	    maxlen += 2;    
	    columns = ((int)Columns + 2) / maxlen;
	    if (columns < 1)
		columns = 1;
	    lines = (numMatches + columns - 1) / columns;
	}

	attr = HL_ATTR(HLF_D);	

	if (xp->xp_context == EXPAND_TAGS_LISTFILES)
	{
	    msg_puts_attr(_("tagname"), HL_ATTR(HLF_T));
	    msg_clr_eos();
	    msg_advance(maxlen - 3);
	    msg_puts_attr(_(" kind file\n"), HL_ATTR(HLF_T));
	}

	
	for (i = 0; i < lines; ++i)
	{
	    showmatches_oneline(xp, matches, numMatches, lines, i,
						maxlen, showtail, attr);
	    if (got_int)
	    {
		got_int = FALSE;
		break;
	    }
	}

	
	
	cmdline_row = msg_row;	
    }

    if (xp->xp_numfiles == -1)
	FreeWild(numMatches, matches);

    return EXPAND_OK;
}


    static char_u *
showmatches_gettail(char_u *s)
{
    char_u	*p;
    char_u	*t = s;
    int		had_sep = FALSE;

    for (p = s; *p != NUL; )
    {
	if (vim_ispathsep(*p)
#ifdef BACKSLASH_IN_FILENAME
		&& !rem_backslash(p)
#endif
	   )
	    had_sep = TRUE;
	else if (had_sep)
	{
	    t = p;
	    had_sep = FALSE;
	}
	MB_PTR_ADV(p);
    }
    return t;
}


    static int
expand_showtail(expand_T *xp)
{
    char_u	*s;
    char_u	*end;

    
    if (xp->xp_context != EXPAND_FILES
	    && xp->xp_context != EXPAND_SHELLCMD
	    && xp->xp_context != EXPAND_DIRECTORIES)
	return FALSE;

    end = gettail(xp->xp_pattern);
    if (end == xp->xp_pattern)		
	return FALSE;

    for (s = xp->xp_pattern; s < end; s++)
    {
	
	
	if (rem_backslash(s))
	    ++s;
	else if (vim_strchr((char_u *)"*?[", *s) != NULL)
	    return FALSE;
    }
    return TRUE;
}


    char_u *
addstar(
    char_u	*fname,
    int		len,
    int		context)	
{
    char_u	*retval;
    int		i, j;
    int		new_len;
    char_u	*tail;
    int		ends_in_star;

    if (context != EXPAND_FILES
	    && context != EXPAND_FILES_IN_PATH
	    && context != EXPAND_SHELLCMD
	    && context != EXPAND_DIRECTORIES
	    && context != EXPAND_DIRS_IN_CDPATH)
    {
	
	
	

	
	
	if (context == EXPAND_HELP
		|| context == EXPAND_COLORS
		|| context == EXPAND_COMPILER
		|| context == EXPAND_OWNSYNTAX
		|| context == EXPAND_FILETYPE
		|| context == EXPAND_KEYMAP
		|| context == EXPAND_PACKADD
		|| context == EXPAND_RUNTIME
		|| ((context == EXPAND_TAGS_LISTFILES
			|| context == EXPAND_TAGS)
		    && fname[0] == '/'))
	    retval = vim_strnsave(fname, len);
	else
	{
	    new_len = len + 2;		
	    for (i = 0; i < len; i++)
	    {
		if (fname[i] == '*' || fname[i] == '~')
		    new_len++;		
					

		
		if (context == EXPAND_BUFFERS && fname[i] == '.')
		    new_len++;		

		
		
		if ((context == EXPAND_USER_DEFINED
			  || context == EXPAND_USER_LIST) && fname[i] == '\\')
		    new_len++;		
	    }
	    retval = alloc(new_len);
	    if (retval != NULL)
	    {
		retval[0] = '^';
		j = 1;
		for (i = 0; i < len; i++, j++)
		{
		    
		    
		    if (context != EXPAND_USER_DEFINED
			    && context != EXPAND_USER_LIST
			    && fname[i] == '\\'
			    && ++i == len)
			break;

		    switch (fname[i])
		    {
			case '*':   retval[j++] = '.';
				    break;
			case '~':   retval[j++] = '\\';
				    break;
			case '?':   retval[j] = '.';
				    continue;
			case '.':   if (context == EXPAND_BUFFERS)
					retval[j++] = '\\';
				    break;
			case '\\':  if (context == EXPAND_USER_DEFINED
					    || context == EXPAND_USER_LIST)
					retval[j++] = '\\';
				    break;
		    }
		    retval[j] = fname[i];
		}
		retval[j] = NUL;
	    }
	}
    }
    else
    {
	retval = alloc(len + 4);
	if (retval != NULL)
	{
	    vim_strncpy(retval, fname, len);

	    
	    
	    
	    
	    
	    
	    tail = gettail(retval);
	    ends_in_star = (len > 0 && retval[len - 1] == '*');
#ifndef BACKSLASH_IN_FILENAME
	    for (i = len - 2; i >= 0; --i)
	    {
		if (retval[i] != '\\')
		    break;
		ends_in_star = !ends_in_star;
	    }
#endif
	    if ((*retval != '~' || tail != retval)
		    && !ends_in_star
		    && vim_strchr(tail, '$') == NULL
		    && vim_strchr(retval, '`') == NULL)
		retval[len++] = '*';
	    else if (len > 0 && retval[len - 1] == '$')
		--len;
	    retval[len] = NUL;
	}
    }
    return retval;
}


    void
set_expand_context(expand_T *xp)
{
    cmdline_info_T	*ccline = get_cmdline_info();

    
    if (ccline->cmdfirstc != ':'
#ifdef FEAT_EVAL
	    && ccline->cmdfirstc != '>' && ccline->cmdfirstc != '='
	    && !ccline->input_fn
#endif
	    )
    {
	xp->xp_context = EXPAND_NOTHING;
	return;
    }
    set_cmd_context(xp, ccline->cmdbuff, ccline->cmdlen, ccline->cmdpos, TRUE);
}


    static char_u *
set_cmd_index(char_u *cmd, exarg_T *eap, expand_T *xp, int *complp)
{
    char_u	*p = NULL;
    int		len = 0;
    int		fuzzy = cmdline_fuzzy_complete(cmd);

    
    
    
    
    
    
    
    if (!fuzzy && (*cmd == 'k' && cmd[1] != 'e'))
    {
	eap->cmdidx = CMD_k;
	p = cmd + 1;
    }
    else
    {
	p = cmd;
	while (ASCII_ISALPHA(*p) || *p == '*')    
	    ++p;
	
	
	if (ASCII_ISUPPER(cmd[0]) || STRNCMP("vim9", cmd, 4) == 0)
	    while (ASCII_ISALNUM(*p) || *p == '*')
		++p;
	
	if (cmd[0] == 'p' && cmd[1] == 'y' && p == cmd + 2 && *p == '3')
	{
	    ++p;
	    while (ASCII_ISALPHA(*p) || *p == '*')
		++p;
	}
	
	if (p == cmd && vim_strchr((char_u *)"@*!=><&~#", *p) != NULL)
	    ++p;
	len = (int)(p - cmd);

	if (len == 0)
	{
	    xp->xp_context = EXPAND_UNSUCCESSFUL;
	    return NULL;
	}

	eap->cmdidx = excmd_get_cmdidx(cmd, len);

	
	
	
	if ((cmd[0] >= 'A' && cmd[0] <= 'Z')
		|| (fuzzy && eap->cmdidx != CMD_bang && *p != NUL))
	    while (ASCII_ISALNUM(*p) || *p == '*')	
		++p;
    }

    
    
    if (*p == NUL && ASCII_ISALNUM(p[-1]))
	return NULL;

    if (eap->cmdidx == CMD_SIZE)
    {
	if (*cmd == 's' && vim_strchr((char_u *)"cgriI", cmd[1]) != NULL)
	{
	    eap->cmdidx = CMD_substitute;
	    p = cmd + 1;
	}
	else if (cmd[0] >= 'A' && cmd[0] <= 'Z')
	{
	    eap->cmd = cmd;
	    p = find_ucmd(eap, p, NULL, xp, complp);
	    if (p == NULL)
		eap->cmdidx = CMD_SIZE;	
	}
    }
    if (eap->cmdidx == CMD_SIZE)
    {
	
	xp->xp_context = EXPAND_UNSUCCESSFUL;
	return NULL;
    }

    return p;
}


    static void
set_context_for_wildcard_arg(
	exarg_T		*eap,
	char_u		*arg,
	int		usefilter,
	expand_T	*xp,
	int		*complp)
{
    char_u	*p;
    int		c;
    int		in_quote = FALSE;
    char_u	*bow = NULL;	
    int		len = 0;

    
    
    xp->xp_pattern = skipwhite(arg);
    p = xp->xp_pattern;
    while (*p != NUL)
    {
	if (has_mbyte)
	    c = mb_ptr2char(p);
	else
	    c = *p;
	if (c == '\\' && p[1] != NUL)
	    ++p;
	else if (c == '`')
	{
	    if (!in_quote)
	    {
		xp->xp_pattern = p;
		bow = p + 1;
	    }
	    in_quote = !in_quote;
	}
	
	
	else if (c == '|' || c == '\n' || c == '"' || (VIM_ISWHITE(c)
#ifdef SPACE_IN_FILENAME
		    && (!(eap->argt & EX_NOSPC) || usefilter)
#endif
		    ))
	{
	    len = 0;  
	    while (*p != NUL)
	    {
		if (has_mbyte)
		    c = mb_ptr2char(p);
		else
		    c = *p;
		if (c == '`' || vim_isfilec_or_wc(c))
		    break;
		if (has_mbyte)
		    len = (*mb_ptr2len)(p);
		else
		    len = 1;
		MB_PTR_ADV(p);
	    }
	    if (in_quote)
		bow = p;
	    else
		xp->xp_pattern = p;
	    p -= len;
	}
	MB_PTR_ADV(p);
    }

    
    
    if (bow != NULL && in_quote)
	xp->xp_pattern = bow;
    xp->xp_context = EXPAND_FILES;

    
    if (usefilter || eap->cmdidx == CMD_bang || eap->cmdidx == CMD_terminal)
    {
#ifndef BACKSLASH_IN_FILENAME
	xp->xp_shell = TRUE;
#endif
	
	if (xp->xp_pattern == skipwhite(arg))
	    xp->xp_context = EXPAND_SHELLCMD;
    }

    
    if (*xp->xp_pattern == '$')
    {
	for (p = xp->xp_pattern + 1; *p != NUL; ++p)
	    if (!vim_isIDc(*p))
		break;
	if (*p == NUL)
	{
	    xp->xp_context = EXPAND_ENV_VARS;
	    ++xp->xp_pattern;
	    
	    if (*complp != EXPAND_USER_DEFINED && *complp != EXPAND_USER_LIST)
		*complp = EXPAND_ENV_VARS;
	}
    }
    
    if (*xp->xp_pattern == '~')
    {
	for (p = xp->xp_pattern + 1; *p != NUL && *p != '/'; ++p)
	    ;
	
	
	
	if (*p == NUL && p > xp->xp_pattern + 1
		&& match_user(xp->xp_pattern + 1) >= 1)
	{
	    xp->xp_context = EXPAND_USER;
	    ++xp->xp_pattern;
	}
    }
}


    static char_u *
set_context_in_argopt(expand_T *xp, char_u *arg)
{
    char_u	*p;

    p = vim_strchr(arg, '=');
    if (p == NULL)
	xp->xp_pattern = arg;
    else
	xp->xp_pattern = p + 1;

    xp->xp_context = EXPAND_ARGOPT;
    return NULL;
}

#ifdef FEAT_TERMINAL

    static char_u *
set_context_in_terminalopt(expand_T *xp, char_u *arg)
{
    char_u	*p;

    p = vim_strchr(arg, '=');
    if (p == NULL)
	xp->xp_pattern = arg;
    else
	xp->xp_pattern = p + 1;

    xp->xp_context = EXPAND_TERMINALOPT;
    return NULL;
}
#endif


    static char_u *
set_context_in_filter_cmd(expand_T *xp, char_u *arg)
{
    if (*arg != NUL)
	arg = skip_vimgrep_pat(arg, NULL, NULL);
    if (arg == NULL || *arg == NUL)
    {
	xp->xp_context = EXPAND_NOTHING;
	return NULL;
    }
    return skipwhite(arg);
}

#ifdef FEAT_SEARCH_EXTRA

    static char_u *
set_context_in_match_cmd(expand_T *xp, char_u *arg)
{
    if (*arg == NUL || !ends_excmd(*arg))
    {
	
	set_context_in_echohl_cmd(xp, arg);
	arg = skipwhite(skiptowhite(arg));
	if (*arg != NUL)
	{
	    xp->xp_context = EXPAND_NOTHING;
	    arg = skip_regexp(arg + 1, *arg, magic_isset());
	}
    }
    return find_nextcmd(arg);
}
#endif


    static char_u *
find_cmd_after_global_cmd(char_u *arg)
{
    int		delim;

    delim = *arg;	    
    if (delim)
	++arg;		    

    while (arg[0] != NUL && arg[0] != delim)
    {
	if (arg[0] == '\\' && arg[1] != NUL)
	    ++arg;
	++arg;
    }
    if (arg[0] != NUL)
	return arg + 1;

    return NULL;
}


    static char_u *
find_cmd_after_substitute_cmd(char_u *arg)
{
    int		delim;

    delim = *arg;
    if (delim)
    {
	
	++arg;
	arg = skip_regexp(arg, delim, magic_isset());

	if (arg[0] != NUL && arg[0] == delim)
	{
	    
	    ++arg;
	    while (arg[0] != NUL && arg[0] != delim)
	    {
		if (arg[0] == '\\' && arg[1] != NUL)
		    ++arg;
		++arg;
	    }
	    if (arg[0] != NUL)	
		++arg;
	}
    }
    while (arg[0] && vim_strchr((char_u *)"|\"#", arg[0]) == NULL)
	++arg;
    if (arg[0] != NUL)
	return arg;

    return NULL;
}


    static char_u *
find_cmd_after_isearch_cmd(expand_T *xp, char_u *arg)
{
    arg = skipwhite(skipdigits(arg));	    
    if (*arg != '/')
	return NULL;

    
    for (++arg; *arg && *arg != '/'; arg++)
	if (*arg == '\\' && arg[1] != NUL)
	    arg++;
    if (*arg)
    {
	arg = skipwhite(arg + 1);

	
	if (*arg == NUL || vim_strchr((char_u *)"|\"\n", *arg) == NULL)
	    xp->xp_context = EXPAND_NOTHING;
	else
	    return arg;
    }

    return NULL;
}

#ifdef FEAT_EVAL

    static char_u *
set_context_in_unlet_cmd(expand_T *xp, char_u *arg)
{
    while ((xp->xp_pattern = vim_strchr(arg, ' ')) != NULL)
	arg = xp->xp_pattern + 1;

    xp->xp_context = EXPAND_USER_VARS;
    xp->xp_pattern = arg;

    if (*xp->xp_pattern == '$')
    {
	xp->xp_context = EXPAND_ENV_VARS;
	++xp->xp_pattern;
    }

    return NULL;
}
#endif

#if defined(HAVE_LOCALE_H) || defined(X_LOCALE)

    static char_u *
set_context_in_lang_cmd(expand_T *xp, char_u *arg)
{
    char_u	*p;

    p = skiptowhite(arg);
    if (*p == NUL)
    {
	xp->xp_context = EXPAND_LANGUAGE;
	xp->xp_pattern = arg;
    }
    else
    {
	if ( STRNCMP(arg, "messages", p - arg) == 0
		|| STRNCMP(arg, "ctype", p - arg) == 0
		|| STRNCMP(arg, "time", p - arg) == 0
		|| STRNCMP(arg, "collate", p - arg) == 0)
	{
	    xp->xp_context = EXPAND_LOCALES;
	    xp->xp_pattern = skipwhite(p);
	}
	else
	    xp->xp_context = EXPAND_NOTHING;
    }

    return NULL;
}
#endif

#ifdef FEAT_EVAL
static enum
{
    EXP_BREAKPT_ADD,	
    EXP_BREAKPT_DEL,	
    EXP_PROFDEL		
} breakpt_expand_what;


    static char_u *
set_context_in_breakadd_cmd(expand_T *xp, char_u *arg, cmdidx_T cmdidx)
{
    char_u *p;
    char_u *subcmd_start;

    xp->xp_context = EXPAND_BREAKPOINT;
    xp->xp_pattern = arg;

    if (cmdidx == CMD_breakadd)
	breakpt_expand_what = EXP_BREAKPT_ADD;
    else if (cmdidx == CMD_breakdel)
	breakpt_expand_what = EXP_BREAKPT_DEL;
    else
	breakpt_expand_what = EXP_PROFDEL;

    p = skipwhite(arg);
    if (*p == NUL)
	return NULL;
    subcmd_start = p;

    if (STRNCMP("file ", p, 5) == 0 || STRNCMP("func ", p, 5) == 0)
    {
	
	
	p += 4;
	p = skipwhite(p);

	
	if (VIM_ISDIGIT(*p))
	{
	    p = skipdigits(p);
	    if (*p != ' ')
	    {
		xp->xp_context = EXPAND_NOTHING;
		return NULL;
	    }
	    p = skipwhite(p);
	}
	if (STRNCMP("file", subcmd_start, 4) == 0)
	    xp->xp_context = EXPAND_FILES;
	else
	    xp->xp_context = EXPAND_USER_FUNC;
	xp->xp_pattern = p;
    }
    else if (STRNCMP("expr ", p, 5) == 0)
    {
	
	xp->xp_context = EXPAND_EXPRESSION;
	xp->xp_pattern = skipwhite(p + 5);
    }

    return NULL;
}

    static char_u *
set_context_in_scriptnames_cmd(expand_T *xp, char_u *arg)
{
    char_u *p;

    xp->xp_context = EXPAND_NOTHING;
    xp->xp_pattern = NULL;

    p = skipwhite(arg);
    if (VIM_ISDIGIT(*p))
	return NULL;

    xp->xp_context = EXPAND_SCRIPTNAMES;
    xp->xp_pattern = p;

    return NULL;
}
#endif


    static char_u *
set_context_by_cmdname(
	char_u		*cmd,
	cmdidx_T	cmdidx,
	expand_T	*xp,
	char_u		*arg,
	int		argt,
	int		compl,
	int		forceit)
{
    switch (cmdidx)
    {
	case CMD_find:
	case CMD_sfind:
	case CMD_tabfind:
	    if (xp->xp_context == EXPAND_FILES)
		xp->xp_context = EXPAND_FILES_IN_PATH;
	    break;
	case CMD_cd:
	case CMD_chdir:
	case CMD_tcd:
	case CMD_tchdir:
	case CMD_lcd:
	case CMD_lchdir:
	    if (xp->xp_context == EXPAND_FILES)
		xp->xp_context = EXPAND_DIRS_IN_CDPATH;
	    break;
	case CMD_help:
	    xp->xp_context = EXPAND_HELP;
	    xp->xp_pattern = arg;
	    break;

	
	
	case CMD_aboveleft:
	case CMD_argdo:
	case CMD_belowright:
	case CMD_botright:
	case CMD_browse:
	case CMD_bufdo:
	case CMD_cdo:
	case CMD_cfdo:
	case CMD_confirm:
	case CMD_debug:
	case CMD_folddoclosed:
	case CMD_folddoopen:
	case CMD_hide:
	case CMD_horizontal:
	case CMD_keepalt:
	case CMD_keepjumps:
	case CMD_keepmarks:
	case CMD_keeppatterns:
	case CMD_ldo:
	case CMD_leftabove:
	case CMD_lfdo:
	case CMD_lockmarks:
	case CMD_noautocmd:
	case CMD_noswapfile:
	case CMD_rightbelow:
	case CMD_sandbox:
	case CMD_silent:
	case CMD_tab:
	case CMD_tabdo:
	case CMD_topleft:
	case CMD_verbose:
	case CMD_vertical:
	case CMD_windo:
	case CMD_vim9cmd:
	case CMD_legacy:
	    return arg;

	case CMD_filter:
	    return set_context_in_filter_cmd(xp, arg);

#ifdef FEAT_SEARCH_EXTRA
	case CMD_match:
	    return set_context_in_match_cmd(xp, arg);
#endif

	

	case CMD_command:
	    return set_context_in_user_cmd(xp, arg);

	case CMD_delcommand:
	    xp->xp_context = EXPAND_USER_COMMANDS;
	    xp->xp_pattern = arg;
	    break;

	case CMD_global:
	case CMD_vglobal:
	    return find_cmd_after_global_cmd(arg);
	case CMD_and:
	case CMD_substitute:
	    return find_cmd_after_substitute_cmd(arg);
	case CMD_isearch:
	case CMD_dsearch:
	case CMD_ilist:
	case CMD_dlist:
	case CMD_ijump:
	case CMD_psearch:
	case CMD_djump:
	case CMD_isplit:
	case CMD_dsplit:
	    return find_cmd_after_isearch_cmd(xp, arg);
	case CMD_autocmd:
	    return set_context_in_autocmd(xp, arg, FALSE);
	case CMD_doautocmd:
	case CMD_doautoall:
	    return set_context_in_autocmd(xp, arg, TRUE);
	case CMD_set:
	    set_context_in_set_cmd(xp, arg, 0);
	    break;
	case CMD_setglobal:
	    set_context_in_set_cmd(xp, arg, OPT_GLOBAL);
	    break;
	case CMD_setlocal:
	    set_context_in_set_cmd(xp, arg, OPT_LOCAL);
	    break;
	case CMD_tag:
	case CMD_stag:
	case CMD_ptag:
	case CMD_ltag:
	case CMD_tselect:
	case CMD_stselect:
	case CMD_ptselect:
	case CMD_tjump:
	case CMD_stjump:
	case CMD_ptjump:
	    if (vim_strchr(p_wop, WOP_TAGFILE) != NULL)
		xp->xp_context = EXPAND_TAGS_LISTFILES;
	    else
		xp->xp_context = EXPAND_TAGS;
	    xp->xp_pattern = arg;
	    break;
	case CMD_augroup:
	    xp->xp_context = EXPAND_AUGROUP;
	    xp->xp_pattern = arg;
	    break;
#ifdef FEAT_SYN_HL
	case CMD_syntax:
	    set_context_in_syntax_cmd(xp, arg);
	    break;
#endif
#ifdef FEAT_EVAL
	case CMD_final:
	case CMD_const:
	case CMD_let:
	case CMD_var:
	case CMD_if:
	case CMD_elseif:
	case CMD_while:
	case CMD_for:
	case CMD_echo:
	case CMD_echon:
	case CMD_execute:
	case CMD_echomsg:
	case CMD_echoerr:
	case CMD_call:
	case CMD_return:
	case CMD_cexpr:
	case CMD_caddexpr:
	case CMD_cgetexpr:
	case CMD_lexpr:
	case CMD_laddexpr:
	case CMD_lgetexpr:
	    set_context_for_expression(xp, arg, cmdidx);
	    break;

	case CMD_unlet:
	    return set_context_in_unlet_cmd(xp, arg);
	case CMD_function:
	case CMD_delfunction:
	    xp->xp_context = EXPAND_USER_FUNC;
	    xp->xp_pattern = arg;
	    break;
	case CMD_disassemble:
	    set_context_in_disassemble_cmd(xp, arg);
	    break;

	case CMD_echohl:
	    set_context_in_echohl_cmd(xp, arg);
	    break;
#endif
	case CMD_highlight:
	    set_context_in_highlight_cmd(xp, arg);
	    break;
#ifdef FEAT_CSCOPE
	case CMD_cscope:
	case CMD_lcscope:
	case CMD_scscope:
	    set_context_in_cscope_cmd(xp, arg, cmdidx);
	    break;
#endif
#ifdef FEAT_SIGNS
	case CMD_sign:
	    set_context_in_sign_cmd(xp, arg);
	    break;
#endif
	case CMD_bdelete:
	case CMD_bwipeout:
	case CMD_bunload:
	    while ((xp->xp_pattern = vim_strchr(arg, ' ')) != NULL)
		arg = xp->xp_pattern + 1;
	    
	case CMD_buffer:
	case CMD_sbuffer:
	case CMD_checktime:
	    xp->xp_context = EXPAND_BUFFERS;
	    xp->xp_pattern = arg;
	    break;
#ifdef FEAT_DIFF
	case CMD_diffget:
	case CMD_diffput:
	    
	    
	    xp->xp_context = EXPAND_DIFF_BUFFERS;
	    xp->xp_pattern = arg;
	    break;
#endif
	case CMD_USER:
	case CMD_USER_BUF:
	    return set_context_in_user_cmdarg(cmd, arg, argt, compl, xp,
								forceit);

	case CMD_map:	    case CMD_noremap:
	case CMD_nmap:	    case CMD_nnoremap:
	case CMD_vmap:	    case CMD_vnoremap:
	case CMD_omap:	    case CMD_onoremap:
	case CMD_imap:	    case CMD_inoremap:
	case CMD_cmap:	    case CMD_cnoremap:
	case CMD_lmap:	    case CMD_lnoremap:
	case CMD_smap:	    case CMD_snoremap:
	case CMD_tmap:	    case CMD_tnoremap:
	case CMD_xmap:	    case CMD_xnoremap:
	    return set_context_in_map_cmd(xp, cmd, arg, forceit,
						     FALSE, FALSE, cmdidx);
	case CMD_unmap:
	case CMD_nunmap:
	case CMD_vunmap:
	case CMD_ounmap:
	case CMD_iunmap:
	case CMD_cunmap:
	case CMD_lunmap:
	case CMD_sunmap:
	case CMD_tunmap:
	case CMD_xunmap:
	    return set_context_in_map_cmd(xp, cmd, arg, forceit,
						      FALSE, TRUE, cmdidx);
	case CMD_mapclear:
	case CMD_nmapclear:
	case CMD_vmapclear:
	case CMD_omapclear:
	case CMD_imapclear:
	case CMD_cmapclear:
	case CMD_lmapclear:
	case CMD_smapclear:
	case CMD_tmapclear:
	case CMD_xmapclear:
	    xp->xp_context = EXPAND_MAPCLEAR;
	    xp->xp_pattern = arg;
	    break;

	case CMD_abbreviate:	case CMD_noreabbrev:
	case CMD_cabbrev:	case CMD_cnoreabbrev:
	case CMD_iabbrev:	case CMD_inoreabbrev:
	    return set_context_in_map_cmd(xp, cmd, arg, forceit,
						      TRUE, FALSE, cmdidx);
	case CMD_unabbreviate:
	case CMD_cunabbrev:
	case CMD_iunabbrev:
	    return set_context_in_map_cmd(xp, cmd, arg, forceit,
						       TRUE, TRUE, cmdidx);
#ifdef FEAT_MENU
	case CMD_menu:	    case CMD_noremenu:	    case CMD_unmenu:
	case CMD_amenu:	    case CMD_anoremenu:	    case CMD_aunmenu:
	case CMD_nmenu:	    case CMD_nnoremenu:	    case CMD_nunmenu:
	case CMD_vmenu:	    case CMD_vnoremenu:	    case CMD_vunmenu:
	case CMD_omenu:	    case CMD_onoremenu:	    case CMD_ounmenu:
	case CMD_imenu:	    case CMD_inoremenu:	    case CMD_iunmenu:
	case CMD_cmenu:	    case CMD_cnoremenu:	    case CMD_cunmenu:
	case CMD_tlmenu:    case CMD_tlnoremenu:    case CMD_tlunmenu:
	case CMD_tmenu:				    case CMD_tunmenu:
	case CMD_popup:	    case CMD_tearoff:	    case CMD_emenu:
	    return set_context_in_menu_cmd(xp, cmd, arg, forceit);
#endif

	case CMD_colorscheme:
	    xp->xp_context = EXPAND_COLORS;
	    xp->xp_pattern = arg;
	    break;

	case CMD_compiler:
	    xp->xp_context = EXPAND_COMPILER;
	    xp->xp_pattern = arg;
	    break;

	case CMD_ownsyntax:
	    xp->xp_context = EXPAND_OWNSYNTAX;
	    xp->xp_pattern = arg;
	    break;

	case CMD_setfiletype:
	    xp->xp_context = EXPAND_FILETYPE;
	    xp->xp_pattern = arg;
	    break;

	case CMD_packadd:
	    xp->xp_context = EXPAND_PACKADD;
	    xp->xp_pattern = arg;
	    break;

	case CMD_runtime:
	    set_context_in_runtime_cmd(xp, arg);
	    break;

#if defined(HAVE_LOCALE_H) || defined(X_LOCALE)
	case CMD_language:
	    return set_context_in_lang_cmd(xp, arg);
#endif
#if defined(FEAT_PROFILE)
	case CMD_profile:
	    set_context_in_profile_cmd(xp, arg);
	    break;
#endif
	case CMD_behave:
	    xp->xp_context = EXPAND_BEHAVE;
	    xp->xp_pattern = arg;
	    break;

	case CMD_messages:
	    xp->xp_context = EXPAND_MESSAGES;
	    xp->xp_pattern = arg;
	    break;

	case CMD_history:
	    xp->xp_context = EXPAND_HISTORY;
	    xp->xp_pattern = arg;
	    break;
#if defined(FEAT_PROFILE)
	case CMD_syntime:
	    xp->xp_context = EXPAND_SYNTIME;
	    xp->xp_pattern = arg;
	    break;
#endif

	case CMD_argdelete:
	    while ((xp->xp_pattern = vim_strchr(arg, ' ')) != NULL)
		arg = xp->xp_pattern + 1;
	    xp->xp_context = EXPAND_ARGLIST;
	    xp->xp_pattern = arg;
	    break;

#ifdef FEAT_EVAL
	case CMD_breakadd:
	case CMD_profdel:
	case CMD_breakdel:
	    return set_context_in_breakadd_cmd(xp, arg, cmdidx);

	case CMD_scriptnames:
	    return set_context_in_scriptnames_cmd(xp, arg);
#endif

	default:
	    break;
    }
    return NULL;
}


    static char_u *
set_one_cmd_context(
    expand_T	*xp,
    char_u	*buff)	    
{
    char_u		*p;
    char_u		*cmd, *arg;
    int			len = 0;
    exarg_T		ea;
    int			compl = EXPAND_NOTHING;
    int			forceit = FALSE;
    int			usefilter = FALSE;  

    ExpandInit(xp);
    xp->xp_pattern = buff;
    xp->xp_line = buff;
    xp->xp_context = EXPAND_COMMANDS;	
    ea.argt = 0;

    
    for (cmd = buff; vim_strchr((char_u *)" \t:|", *cmd) != NULL; cmd++)
	;
    xp->xp_pattern = cmd;

    if (*cmd == NUL)
	return NULL;
    if (*cmd == '"')	    
    {
	xp->xp_context = EXPAND_NOTHING;
	return NULL;
    }

    
    cmd = skip_range(cmd, TRUE, &xp->xp_context);
    xp->xp_pattern = cmd;
    if (*cmd == NUL)
	return NULL;
    if (*cmd == '"')
    {
	xp->xp_context = EXPAND_NOTHING;
	return NULL;
    }

    if (*cmd == '|' || *cmd == '\n')
	return cmd + 1;			

    
    p = set_cmd_index(cmd, &ea, xp, &compl);
    if (p == NULL)
	return NULL;

    xp->xp_context = EXPAND_NOTHING; 

    if (*p == '!')		    
    {
	forceit = TRUE;
	++p;
    }

    
    if (!IS_USER_CMDIDX(ea.cmdidx))
	ea.argt = excmd_get_argt(ea.cmdidx);

    arg = skipwhite(p);

    
    if ((ea.argt & EX_ARGOPT) || ea.cmdidx == CMD_terminal)
    {
	while (*arg != NUL && STRNCMP(arg, "++", 2) == 0)
	{
	    p = arg + 2;
	    while (*p && !vim_isspace(*p))
		MB_PTR_ADV(p);

	    
	    if (*p == NUL)
	    {
		if (ea.argt & EX_ARGOPT)
		    return set_context_in_argopt(xp, arg + 2);
#ifdef FEAT_TERMINAL
		if (ea.cmdidx == CMD_terminal)
		    return set_context_in_terminalopt(xp, arg + 2);
#endif
	    }

	    arg = skipwhite(p);
	}
    }

    if (ea.cmdidx == CMD_write || ea.cmdidx == CMD_update)
    {
	if (*arg == '>')			
	{
	    if (*++arg == '>')
		++arg;
	    arg = skipwhite(arg);
	}
	else if (*arg == '!' && ea.cmdidx == CMD_write)	
	{
	    ++arg;
	    usefilter = TRUE;
	}
    }

    if (ea.cmdidx == CMD_read)
    {
	usefilter = forceit;			
	if (*arg == '!')			
	{
	    ++arg;
	    usefilter = TRUE;
	}
    }

    if (ea.cmdidx == CMD_lshift || ea.cmdidx == CMD_rshift)
    {
	while (*arg == *cmd)	    
	    ++arg;
	arg = skipwhite(arg);
    }

    
    if ((ea.argt & EX_CMDARG) && !usefilter && *arg == '+')
    {
	
	p = arg + 1;
	arg = skip_cmd_arg(arg, FALSE);

	
	if (*arg == NUL)
	    return p;

	
	arg = skipwhite(arg);
    }


    
    
    if ((ea.argt & EX_TRLBAR) && !usefilter)
    {
	p = arg;
	
	if (ea.cmdidx == CMD_redir && p[0] == '@' && p[1] == '"')
	    p += 2;
	while (*p)
	{
	    if (*p == Ctrl_V)
	    {
		if (p[1] != NUL)
		    ++p;
	    }
	    else if ( (*p == '"' && !(ea.argt & EX_NOTRLCOM))
		    || *p == '|' || *p == '\n')
	    {
		if (*(p - 1) != '\\')
		{
		    if (*p == '|' || *p == '\n')
			return p + 1;
		    return NULL;    
		}
	    }
	    MB_PTR_ADV(p);
	}
    }

    if (!(ea.argt & EX_EXTRA) && *arg != NUL
				  && vim_strchr((char_u *)"|\"", *arg) == NULL)
	
	return NULL;

    
    p = buff;
    xp->xp_pattern = p;
    len = (int)STRLEN(buff);
    while (*p && p < buff + len)
    {
	if (*p == ' ' || *p == TAB)
	{
	    
	    xp->xp_pattern = ++p;
	}
	else
	{
	    if (*p == '\\' && *(p + 1) != NUL)
		++p; 
	    MB_PTR_ADV(p);
	}
    }

    if (ea.argt & EX_XFILE)
	set_context_for_wildcard_arg(&ea, arg, usefilter, xp, &compl);

    
    return set_context_by_cmdname(cmd, ea.cmdidx, xp, arg, ea.argt, compl,
								forceit);
}


    void
set_cmd_context(
    expand_T	*xp,
    char_u	*str,	    
    int		len,	    
    int		col,	    
    int		use_ccline UNUSED) 
{
#ifdef FEAT_EVAL
    cmdline_info_T	*ccline = get_cmdline_info();
#endif
    int		old_char = NUL;
    char_u	*nextcomm;

    
    
    if (col < len)
	old_char = str[col];
    str[col] = NUL;
    nextcomm = str;

#ifdef FEAT_EVAL
    if (use_ccline && ccline->cmdfirstc == '=')
    {
	
	set_context_for_expression(xp, str, CMD_SIZE);
    }
    else if (use_ccline && ccline->input_fn)
    {
	xp->xp_context = ccline->xp_context;
	xp->xp_pattern = ccline->cmdbuff;
	xp->xp_arg = ccline->xp_arg;
    }
    else
#endif
	while (nextcomm != NULL)
	    nextcomm = set_one_cmd_context(xp, nextcomm);

    
    
    xp->xp_line = str;
    xp->xp_col = col;

    str[col] = old_char;
}


    int
expand_cmdline(
    expand_T	*xp,
    char_u	*str,		
    int		col,		
    int		*matchcount,	
    char_u	***matches)	
{
    char_u	*file_str = NULL;
    int		options = WILD_ADD_SLASH|WILD_SILENT;

    if (xp->xp_context == EXPAND_UNSUCCESSFUL)
    {
	beep_flush();
	return EXPAND_UNSUCCESSFUL;  
    }
    if (xp->xp_context == EXPAND_NOTHING)
    {
	
	return EXPAND_NOTHING;
    }

    
    xp->xp_pattern_len = (int)(str + col - xp->xp_pattern);
    if (cmdline_fuzzy_completion_supported(xp))
	
	file_str = vim_strsave(xp->xp_pattern);
    else
    {
	file_str = addstar(xp->xp_pattern, xp->xp_pattern_len, xp->xp_context);
	if (file_str == NULL)
	    return EXPAND_UNSUCCESSFUL;
    }

    if (p_wic)
	options += WILD_ICASE;

    
    if (ExpandFromContext(xp, file_str, matches, matchcount, options) == FAIL)
    {
	*matchcount = 0;
	*matches = NULL;
    }
    vim_free(file_str);

    return EXPAND_OK;
}


    static int
expand_files_and_dirs(
	expand_T	*xp,
	char_u		*pat,
	char_u		***matches,
	int		*numMatches,
	int		flags,
	int		options)
{
    int		free_pat = FALSE;
    int		i;
    int		ret;

    
    
    if (xp->xp_backslash != XP_BS_NONE)
    {
	free_pat = TRUE;
	pat = vim_strsave(pat);
	for (i = 0; pat[i]; ++i)
	    if (pat[i] == '\\')
	    {
		if (xp->xp_backslash & XP_BS_THREE
			&& pat[i + 1] == '\\'
			&& pat[i + 2] == '\\'
			&& pat[i + 3] == ' ')
		    STRMOVE(pat + i, pat + i + 3);
		else if (xp->xp_backslash & XP_BS_ONE
			&& pat[i + 1] == ' ')
		    STRMOVE(pat + i, pat + i + 1);
		else if ((xp->xp_backslash & XP_BS_COMMA)
			&& pat[i + 1] == '\\'
			&& pat[i + 2] == ',')
		    STRMOVE(pat + i, pat + i + 2);
#ifdef BACKSLASH_IN_FILENAME
		else if ((xp->xp_backslash & XP_BS_COMMA)
			&& pat[i + 1] == ',')
		    STRMOVE(pat + i, pat + i + 1);
#endif
	    }
    }

    if (xp->xp_context == EXPAND_FILES)
	flags |= EW_FILE;
    else if (xp->xp_context == EXPAND_FILES_IN_PATH)
	flags |= (EW_FILE | EW_PATH);
    else if (xp->xp_context == EXPAND_DIRS_IN_CDPATH)
	flags = (flags | EW_DIR | EW_CDPATH) & ~EW_FILE;
    else
	flags = (flags | EW_DIR) & ~EW_FILE;
    if (options & WILD_ICASE)
	flags |= EW_ICASE;

    
    ret = expand_wildcards_eval(&pat, numMatches, matches, flags);
    if (free_pat)
	vim_free(pat);
#ifdef BACKSLASH_IN_FILENAME
    if (p_csl[0] != NUL && (options & WILD_IGNORE_COMPLETESLASH) == 0)
    {
	int	    j;

	for (j = 0; j < *numMatches; ++j)
	{
	    char_u	*ptr = (*matches)[j];

	    while (*ptr != NUL)
	    {
		if (p_csl[0] == 's' && *ptr == '\\')
		    *ptr = '/';
		else if (p_csl[0] == 'b' && *ptr == '/')
		    *ptr = '\\';
		ptr += (*mb_ptr2len)(ptr);
	    }
	}
    }
#endif
    return ret;
}


    static char_u *
get_behave_arg(expand_T *xp UNUSED, int idx)
{
    if (idx == 0)
	return (char_u *)"mswin";
    if (idx == 1)
	return (char_u *)"xterm";
    return NULL;
}

#ifdef FEAT_EVAL

    static char_u *
get_breakadd_arg(expand_T *xp UNUSED, int idx)
{
    char *opts[] = {"expr", "file", "func", "here"};

    if (idx >= 0 && idx <= 3)
    {
	
	if (breakpt_expand_what == EXP_BREAKPT_ADD)
	    return (char_u *)opts[idx];
	else if (breakpt_expand_what == EXP_BREAKPT_DEL)
	{
	    
	    if (idx <= 2)
		return (char_u *)opts[idx + 1];
	}
	else
	{
	    
	    if (idx <= 1)
		return (char_u *)opts[idx + 1];
	}
    }
    return NULL;
}


    static char_u *
get_scriptnames_arg(expand_T *xp UNUSED, int idx)
{
    scriptitem_T *si;

    if (!SCRIPT_ID_VALID(idx + 1))
	return NULL;

    si = SCRIPT_ITEM(idx + 1);
    home_replace(NULL, si->sn_name, NameBuff, MAXPATHL, TRUE);
    return NameBuff;
}
#endif


    static char_u *
get_messages_arg(expand_T *xp UNUSED, int idx)
{
    if (idx == 0)
	return (char_u *)"clear";
    return NULL;
}

    static char_u *
get_mapclear_arg(expand_T *xp UNUSED, int idx)
{
    if (idx == 0)
	return (char_u *)"<buffer>";
    return NULL;
}


    static int
ExpandOther(
	char_u		*pat,
	expand_T	*xp,
	regmatch_T	*rmp,
	char_u		***matches,
	int		*numMatches)
{
    static struct expgen
    {
	int		context;
	char_u	*((*func)(expand_T *, int));
	int		ic;
	int		escaped;
    } tab[] =
    {
	{EXPAND_COMMANDS, get_command_name, FALSE, TRUE},
	{EXPAND_BEHAVE, get_behave_arg, TRUE, TRUE},
	{EXPAND_MAPCLEAR, get_mapclear_arg, TRUE, TRUE},
	{EXPAND_MESSAGES, get_messages_arg, TRUE, TRUE},
	{EXPAND_HISTORY, get_history_arg, TRUE, TRUE},
	{EXPAND_USER_COMMANDS, get_user_commands, FALSE, TRUE},
	{EXPAND_USER_ADDR_TYPE, get_user_cmd_addr_type, FALSE, TRUE},
	{EXPAND_USER_CMD_FLAGS, get_user_cmd_flags, FALSE, TRUE},
	{EXPAND_USER_NARGS, get_user_cmd_nargs, FALSE, TRUE},
	{EXPAND_USER_COMPLETE, get_user_cmd_complete, FALSE, TRUE},
#ifdef FEAT_EVAL
	{EXPAND_USER_VARS, get_user_var_name, FALSE, TRUE},
	{EXPAND_FUNCTIONS, get_function_name, FALSE, TRUE},
	{EXPAND_USER_FUNC, get_user_func_name, FALSE, TRUE},
	{EXPAND_DISASSEMBLE, get_disassemble_argument, FALSE, TRUE},
	{EXPAND_EXPRESSION, get_expr_name, FALSE, TRUE},
#endif
#ifdef FEAT_MENU
	{EXPAND_MENUS, get_menu_name, FALSE, TRUE},
	{EXPAND_MENUNAMES, get_menu_names, FALSE, TRUE},
#endif
#ifdef FEAT_SYN_HL
	{EXPAND_SYNTAX, get_syntax_name, TRUE, TRUE},
#endif
#ifdef FEAT_PROFILE
	{EXPAND_SYNTIME, get_syntime_arg, TRUE, TRUE},
#endif
	{EXPAND_HIGHLIGHT, get_highlight_name, TRUE, TRUE},
	{EXPAND_EVENTS, get_event_name, TRUE, FALSE},
	{EXPAND_AUGROUP, get_augroup_name, TRUE, FALSE},
#ifdef FEAT_CSCOPE
	{EXPAND_CSCOPE, get_cscope_name, TRUE, TRUE},
#endif
#ifdef FEAT_SIGNS
	{EXPAND_SIGN, get_sign_name, TRUE, TRUE},
#endif
#ifdef FEAT_PROFILE
	{EXPAND_PROFILE, get_profile_name, TRUE, TRUE},
#endif
#if defined(HAVE_LOCALE_H) || defined(X_LOCALE)
	{EXPAND_LANGUAGE, get_lang_arg, TRUE, FALSE},
	{EXPAND_LOCALES, get_locales, TRUE, FALSE},
#endif
	{EXPAND_ENV_VARS, get_env_name, TRUE, TRUE},
	{EXPAND_USER, get_users, TRUE, FALSE},
	{EXPAND_ARGLIST, get_arglist_name, TRUE, FALSE},
#ifdef FEAT_EVAL
	{EXPAND_BREAKPOINT, get_breakadd_arg, TRUE, TRUE},
	{EXPAND_SCRIPTNAMES, get_scriptnames_arg, TRUE, FALSE},
#endif
    };
    int	i;
    int ret = FAIL;

    
    
    for (i = 0; i < (int)ARRAY_LENGTH(tab); ++i)
    {
	if (xp->xp_context == tab[i].context)
	{
	    if (tab[i].ic)
		rmp->rm_ic = TRUE;
	    ret = ExpandGeneric(pat, xp, rmp, matches, numMatches,
						tab[i].func, tab[i].escaped);
	    break;
	}
    }

    return ret;
}


    static int
map_wildopts_to_ewflags(int options)
{
    int		flags;

    flags = EW_DIR;	
    if (options & WILD_LIST_NOTFOUND)
	flags |= EW_NOTFOUND;
    if (options & WILD_ADD_SLASH)
	flags |= EW_ADDSLASH;
    if (options & WILD_KEEP_ALL)
	flags |= EW_KEEPALL;
    if (options & WILD_SILENT)
	flags |= EW_SILENT;
    if (options & WILD_NOERROR)
	flags |= EW_NOERROR;
    if (options & WILD_ALLLINKS)
	flags |= EW_ALLLINKS;

    return flags;
}


    static int
ExpandFromContext(
    expand_T	*xp,
    char_u	*pat,
    char_u	***matches,
    int		*numMatches,
    int		options)  
{
    regmatch_T	regmatch;
    int		ret;
    int		flags;
    char_u	*tofree = NULL;
    int		fuzzy = cmdline_fuzzy_complete(pat)
				     && cmdline_fuzzy_completion_supported(xp);

    flags = map_wildopts_to_ewflags(options);

    if (xp->xp_context == EXPAND_FILES
	    || xp->xp_context == EXPAND_DIRECTORIES
	    || xp->xp_context == EXPAND_FILES_IN_PATH
	    || xp->xp_context == EXPAND_DIRS_IN_CDPATH)
	return expand_files_and_dirs(xp, pat, matches, numMatches, flags,
								options);

    *matches = (char_u **)"";
    *numMatches = 0;
    if (xp->xp_context == EXPAND_HELP)
    {
	
	
	if (find_help_tags(*pat == NUL ? (char_u *)"help" : pat,
					numMatches, matches, FALSE) == OK)
	{
#ifdef FEAT_MULTI_LANG
	    cleanup_help_tags(*numMatches, *matches);
#endif
	    return OK;
	}
	return FAIL;
    }

    if (xp->xp_context == EXPAND_SHELLCMD)
	return expand_shellcmd(pat, matches, numMatches, flags);
    if (xp->xp_context == EXPAND_OLD_SETTING)
	return ExpandOldSetting(numMatches, matches);
    if (xp->xp_context == EXPAND_BUFFERS)
	return ExpandBufnames(pat, numMatches, matches, options);
#ifdef FEAT_DIFF
    if (xp->xp_context == EXPAND_DIFF_BUFFERS)
	return ExpandBufnames(pat, numMatches, matches,
						options | BUF_DIFF_FILTER);
#endif
    if (xp->xp_context == EXPAND_TAGS
	    || xp->xp_context == EXPAND_TAGS_LISTFILES)
	return expand_tags(xp->xp_context == EXPAND_TAGS, pat, numMatches,
								matches);
    if (xp->xp_context == EXPAND_COLORS)
    {
	char *directories[] = {"colors", NULL};
	return ExpandRTDir(pat, DIP_START + DIP_OPT, numMatches, matches,
								directories);
    }
    if (xp->xp_context == EXPAND_COMPILER)
    {
	char *directories[] = {"compiler", NULL};
	return ExpandRTDir(pat, 0, numMatches, matches, directories);
    }
    if (xp->xp_context == EXPAND_OWNSYNTAX)
    {
	char *directories[] = {"syntax", NULL};
	return ExpandRTDir(pat, 0, numMatches, matches, directories);
    }
    if (xp->xp_context == EXPAND_FILETYPE)
    {
	char *directories[] = {"syntax", "indent", "ftplugin", NULL};
	return ExpandRTDir(pat, 0, numMatches, matches, directories);
    }
#ifdef FEAT_KEYMAP
    if (xp->xp_context == EXPAND_KEYMAP)
    {
	char *directories[] = {"keymap", NULL};
	return ExpandRTDir(pat, 0, numMatches, matches, directories);
    }
#endif
#if defined(FEAT_EVAL)
    if (xp->xp_context == EXPAND_USER_LIST)
	return ExpandUserList(xp, matches, numMatches);
#endif
    if (xp->xp_context == EXPAND_PACKADD)
	return ExpandPackAddDir(pat, numMatches, matches);
    if (xp->xp_context == EXPAND_RUNTIME)
	return expand_runtime_cmd(pat, numMatches, matches);

    
    
    if ((xp->xp_context == EXPAND_USER_FUNC
				       || xp->xp_context == EXPAND_DISASSEMBLE)
	    && STRNCMP(pat, "^s:", 3) == 0)
    {
	int len = (int)STRLEN(pat) + 20;

	tofree = alloc(len);
	if (tofree == NULL)
	    return FAIL;
	vim_snprintf((char *)tofree, len, "^<SNR>\\d\\+_%s", pat + 3);
	pat = tofree;
    }

    if (!fuzzy)
    {
	regmatch.regprog = vim_regcomp(pat, magic_isset() ? RE_MAGIC : 0);
	if (regmatch.regprog == NULL)
	    return FAIL;

	
	regmatch.rm_ic = ignorecase(pat);
    }

    if (xp->xp_context == EXPAND_SETTINGS
	    || xp->xp_context == EXPAND_BOOL_SETTINGS)
	ret = ExpandSettings(xp, &regmatch, pat, numMatches, matches, fuzzy);
    else if (xp->xp_context == EXPAND_STRING_SETTING)
	ret = ExpandStringSetting(xp, &regmatch, numMatches, matches);
    else if (xp->xp_context == EXPAND_SETTING_SUBTRACT)
	ret = ExpandSettingSubtract(xp, &regmatch, numMatches, matches);
    else if (xp->xp_context == EXPAND_MAPPINGS)
	ret = ExpandMappings(pat, &regmatch, numMatches, matches);
    else if (xp->xp_context == EXPAND_ARGOPT)
	ret = expand_argopt(pat, xp, &regmatch, matches, numMatches);
#if defined(FEAT_TERMINAL)
    else if (xp->xp_context == EXPAND_TERMINALOPT)
	ret = expand_terminal_opt(pat, xp, &regmatch, matches, numMatches);
#endif
#if defined(FEAT_EVAL)
    else if (xp->xp_context == EXPAND_USER_DEFINED)
	ret = ExpandUserDefined(pat, xp, &regmatch, matches, numMatches);
#endif
    else
	ret = ExpandOther(pat, xp, &regmatch, matches, numMatches);

    if (!fuzzy)
	vim_regfree(regmatch.regprog);
    vim_free(tofree);

    return ret;
}


    int
ExpandGeneric(
    char_u	*pat,
    expand_T	*xp,
    regmatch_T	*regmatch,
    char_u	***matches,
    int		*numMatches,
    char_u	*((*func)(expand_T *, int)),
					  
    int		escaped)
{
    int		i;
    garray_T	ga;
    char_u	*str;
    fuzmatch_str_T	*fuzmatch = NULL;
    int		score = 0;
    int		fuzzy;
    int		match;
    int		sort_matches = FALSE;
    int		funcsort = FALSE;

    fuzzy = cmdline_fuzzy_complete(pat);
    *matches = NULL;
    *numMatches = 0;

    if (!fuzzy)
	ga_init2(&ga, sizeof(char *), 30);
    else
	ga_init2(&ga, sizeof(fuzmatch_str_T), 30);

    for (i = 0; ; ++i)
    {
	str = (*func)(xp, i);
	if (str == NULL)	    
	    break;
	if (*str == NUL)	    
	    continue;

	if (xp->xp_pattern[0] != NUL)
	{
	    if (!fuzzy)
		match = vim_regexec(regmatch, str, (colnr_T)0);
	    else
	    {
		score = fuzzy_match_str(str, pat);
		match = (score != 0);
	    }
	}
	else
	    match = TRUE;

	if (!match)
	    continue;

	if (escaped)
	    str = vim_strsave_escaped(str, (char_u *)" \t\\.");
	else
	    str = vim_strsave(str);
	if (str == NULL)
	{
	    if (!fuzzy)
	    {
		ga_clear_strings(&ga);
		return FAIL;
	    }
	    fuzmatch_str_free(ga.ga_data, ga.ga_len);
	    return FAIL;
	}

	if (ga_grow(&ga, 1) == FAIL)
	{
	    vim_free(str);
	    break;
	}

	if (fuzzy)
	{
	    fuzmatch = &((fuzmatch_str_T *)ga.ga_data)[ga.ga_len];
	    fuzmatch->idx = ga.ga_len;
	    fuzmatch->str = str;
	    fuzmatch->score = score;
	}
	else
	    ((char_u **)ga.ga_data)[ga.ga_len] = str;

#ifdef FEAT_MENU
	if (func == get_menu_names)
	{
	    
	    str += STRLEN(str) - 1;
	    if (*str == '\001')
		*str = '.';
	}
#endif

	++ga.ga_len;
    }

    if (ga.ga_len == 0)
	return OK;

    
    
    
    if (!fuzzy && xp->xp_context != EXPAND_MENUNAMES
					&& xp->xp_context != EXPAND_STRING_SETTING
					&& xp->xp_context != EXPAND_MENUS
					&& xp->xp_context != EXPAND_SCRIPTNAMES
					&& xp->xp_context != EXPAND_ARGOPT
					&& xp->xp_context != EXPAND_TERMINALOPT)
	sort_matches = TRUE;

    
    if (xp->xp_context == EXPAND_EXPRESSION
	    || xp->xp_context == EXPAND_FUNCTIONS
	    || xp->xp_context == EXPAND_USER_FUNC
	    || xp->xp_context == EXPAND_DISASSEMBLE)
	funcsort = TRUE;

    
    if (sort_matches)
    {
	if (funcsort)
	    
	    qsort((void *)ga.ga_data, (size_t)ga.ga_len, sizeof(char_u *),
							   sort_func_compare);
	else
	    sort_strings((char_u **)ga.ga_data, ga.ga_len);
    }

    if (!fuzzy)
    {
	*matches = ga.ga_data;
	*numMatches = ga.ga_len;
    }
    else
    {
	if (fuzzymatches_to_strmatches(ga.ga_data, matches, ga.ga_len,
							funcsort) == FAIL)
	    return FAIL;
	*numMatches = ga.ga_len;
    }

#if defined(FEAT_SYN_HL)
    
    
    reset_expand_highlight();
#endif

    return OK;
}


    static void
expand_shellcmd_onedir(
	char_u		*buf,
	char_u		*s,
	size_t		l,
	char_u		*pat,
	char_u		***matches,
	int		*numMatches,
	int		flags,
	hashtab_T	*ht,
	garray_T	*gap)
{
    int		ret;
    hash_T	hash;
    hashitem_T	*hi;

    vim_strncpy(buf, s, l);
    add_pathsep(buf);
    l = STRLEN(buf);
    vim_strncpy(buf + l, pat, MAXPATHL - 1 - l);

    
    ret = expand_wildcards(1, &buf, numMatches, matches, flags);
    if (ret != OK)
	return;

    if (ga_grow(gap, *numMatches) == FAIL)
    {
	FreeWild(*numMatches, *matches);
	return;
    }

    for (int i = 0; i < *numMatches; ++i)
    {
	char_u *name = (*matches)[i];

	if (STRLEN(name) > l)
	{
	    
	    hash = hash_hash(name + l);
	    hi = hash_lookup(ht, name + l, hash);
	    if (HASHITEM_EMPTY(hi))
	    {
		
		STRMOVE(name, name + l);
		((char_u **)gap->ga_data)[gap->ga_len++] = name;
		hash_add_item(ht, hi, name, hash);
		name = NULL;
	    }
	}
	vim_free(name);
    }
    vim_free(*matches);
}


    static int
expand_shellcmd(
    char_u	*filepat,	
    char_u	***matches,	
    int		*numMatches,	
    int		flagsarg)	
{
    char_u	*pat;
    int		i;
    char_u	*path = NULL;
    int		mustfree = FALSE;
    garray_T    ga;
    char_u	*buf;
    size_t	l;
    char_u	*s, *e;
    int		flags = flagsarg;
    int		did_curdir = FALSE;
    hashtab_T	found_ht;

    buf = alloc(MAXPATHL);
    if (buf == NULL)
	return FAIL;

    
    pat = vim_strsave(filepat);
    if (pat == NULL)
    {
	vim_free(buf);
	return FAIL;
    }

    for (i = 0; pat[i]; ++i)
	if (pat[i] == '\\' && pat[i + 1] == ' ')
	    STRMOVE(pat + i, pat + i + 1);

    flags |= EW_FILE | EW_EXEC | EW_SHELLCMD;

    if (pat[0] == '.' && (vim_ispathsep(pat[1])
			       || (pat[1] == '.' && vim_ispathsep(pat[2]))))
	path = (char_u *)".";
    else
    {
	
	if (!mch_isFullName(pat))
	    path = vim_getenv((char_u *)"PATH", &mustfree);
	if (path == NULL)
	    path = (char_u *)"";
    }

    
    
    
    ga_init2(&ga, sizeof(char *), 10);
    hash_init(&found_ht);
    for (s = path; ; s = e)
    {
#if defined(MSWIN)
	e = vim_strchr(s, ';');
#else
	e = vim_strchr(s, ':');
#endif
	if (e == NULL)
	    e = s + STRLEN(s);

	if (*s == NUL)
	{
	    if (did_curdir)
		break;
	    
	    did_curdir = TRUE;
	    flags |= EW_DIR;
	}
	else if (STRNCMP(s, ".", (int)(e - s)) == 0)
	{
	    did_curdir = TRUE;
	    flags |= EW_DIR;
	}
	else
	    
	    flags &= ~EW_DIR;

	l = e - s;
	if (l > MAXPATHL - 5)
	    break;

	expand_shellcmd_onedir(buf, s, l, pat, matches, numMatches, flags,
							&found_ht, &ga);

	if (*e != NUL)
	    ++e;
    }
    *matches = ga.ga_data;
    *numMatches = ga.ga_len;

    vim_free(buf);
    vim_free(pat);
    if (mustfree)
	vim_free(path);
    hash_clear(&found_ht);
    return OK;
}

#if defined(FEAT_EVAL)

    static void *
call_user_expand_func(
    void	*(*user_expand_func)(char_u *, int, typval_T *),
    expand_T	*xp)
{
    cmdline_info_T	*ccline = get_cmdline_info();
    int		keep = 0;
    typval_T	args[4];
    sctx_T	save_current_sctx = current_sctx;
    char_u	*pat = NULL;
    void	*ret;

    if (xp->xp_arg == NULL || xp->xp_arg[0] == '\0' || xp->xp_line == NULL)
	return NULL;

    if (ccline->cmdbuff != NULL)
    {
	keep = ccline->cmdbuff[ccline->cmdlen];
	ccline->cmdbuff[ccline->cmdlen] = 0;
    }

    pat = vim_strnsave(xp->xp_pattern, xp->xp_pattern_len);

    args[0].v_type = VAR_STRING;
    args[0].vval.v_string = pat;
    args[1].v_type = VAR_STRING;
    args[1].vval.v_string = xp->xp_line;
    args[2].v_type = VAR_NUMBER;
    args[2].vval.v_number = xp->xp_col;
    args[3].v_type = VAR_UNKNOWN;

    current_sctx = xp->xp_script_ctx;

    ret = user_expand_func(xp->xp_arg, 3, args);

    current_sctx = save_current_sctx;
    if (ccline->cmdbuff != NULL)
	ccline->cmdbuff[ccline->cmdlen] = keep;

    vim_free(pat);
    return ret;
}


    static int
ExpandUserDefined(
    char_u	*pat,
    expand_T	*xp,
    regmatch_T	*regmatch,
    char_u	***matches,
    int		*numMatches)
{
    char_u	*retstr;
    char_u	*s;
    char_u	*e;
    int		keep;
    garray_T	ga;
    int		fuzzy;
    int		match;
    int		score = 0;

    fuzzy = cmdline_fuzzy_complete(pat);
    *matches = NULL;
    *numMatches = 0;

    retstr = call_user_expand_func(call_func_retstr, xp);
    if (retstr == NULL)
	return FAIL;

    if (!fuzzy)
	ga_init2(&ga, sizeof(char *), 3);
    else
	ga_init2(&ga, sizeof(fuzmatch_str_T), 3);

    for (s = retstr; *s != NUL; s = e)
    {
	e = vim_strchr(s, '\n');
	if (e == NULL)
	    e = s + STRLEN(s);
	keep = *e;
	*e = NUL;

	if (xp->xp_pattern[0] != NUL)
	{
	    if (!fuzzy)
		match = vim_regexec(regmatch, s, (colnr_T)0);
	    else
	    {
		score = fuzzy_match_str(s, pat);
		match = (score != 0);
	    }
	}
	else
	    match = TRUE;		

	*e = keep;

	if (match)
	{
	    if (ga_grow(&ga, 1) == FAIL)
		break;
	    if (!fuzzy)
		((char_u **)ga.ga_data)[ga.ga_len] = vim_strnsave(s, e - s);
	    else
	    {
		fuzmatch_str_T  *fuzmatch =
				&((fuzmatch_str_T  *)ga.ga_data)[ga.ga_len];
		fuzmatch->idx = ga.ga_len;
		fuzmatch->str = vim_strnsave(s, e - s);
		fuzmatch->score = score;
	    }
	    ++ga.ga_len;
	}

	if (*e != NUL)
	    ++e;
    }
    vim_free(retstr);

    if (ga.ga_len == 0)
	return OK;

    if (!fuzzy)
    {
	*matches = ga.ga_data;
	*numMatches = ga.ga_len;
    }
    else
    {
	if (fuzzymatches_to_strmatches(ga.ga_data, matches, ga.ga_len,
								FALSE) == FAIL)
	    return FAIL;
	*numMatches = ga.ga_len;
    }
    return OK;
}


    static int
ExpandUserList(
    expand_T	*xp,
    char_u	***matches,
    int		*numMatches)
{
    list_T      *retlist;
    listitem_T	*li;
    garray_T	ga;

    *matches = NULL;
    *numMatches = 0;
    retlist = call_user_expand_func(call_func_retlist, xp);
    if (retlist == NULL)
	return FAIL;

    ga_init2(&ga, sizeof(char *), 3);
    
    FOR_ALL_LIST_ITEMS(retlist, li)
    {
	if (li->li_tv.v_type != VAR_STRING || li->li_tv.vval.v_string == NULL)
	    continue;  

	if (ga_grow(&ga, 1) == FAIL)
	    break;

	((char_u **)ga.ga_data)[ga.ga_len] =
					 vim_strsave(li->li_tv.vval.v_string);
	++ga.ga_len;
    }
    list_unref(retlist);

    *matches = ga.ga_data;
    *numMatches = ga.ga_len;
    return OK;
}
#endif


    void
globpath(
    char_u	*path,
    char_u	*file,
    garray_T	*ga,
    int		expand_options,
    int		dirs)
{
    expand_T	xpc;
    char_u	*buf;
    int		i;
    int		num_p;
    char_u	**p;

    buf = alloc(MAXPATHL);
    if (buf == NULL)
	return;

    ExpandInit(&xpc);
    xpc.xp_context = dirs ? EXPAND_DIRECTORIES : EXPAND_FILES;

    
    while (*path != NUL)
    {
	
	copy_option_part(&path, buf, MAXPATHL, ",");
	if (STRLEN(buf) + STRLEN(file) + 2 < MAXPATHL)
	{
#if defined(MSWIN)
	    
	    
	    if (*buf != NUL && !after_pathsep(buf, buf + STRLEN(buf)))
		STRCAT(buf, "/");
#else
	    add_pathsep(buf);
#endif
	    STRCAT(buf, file);
	    if (ExpandFromContext(&xpc, buf, &p, &num_p,
			     WILD_SILENT|expand_options) != FAIL && num_p > 0)
	    {
		ExpandEscape(&xpc, buf, num_p, p, WILD_SILENT|expand_options);

		if (ga_grow(ga, num_p) == OK)
		    
		    for (i = 0; i < num_p; ++i)
		    {
			((char_u **)ga->ga_data)[ga->ga_len] = p[i];
			++ga->ga_len;
		    }
		vim_free(p);
	    }
	}
    }

    vim_free(buf);
}


    int
wildmenu_translate_key(
	cmdline_info_T	*cclp,
	int		key,
	expand_T	*xp,
	int		did_wild_list)
{
    int c = key;

    if (cmdline_pum_active())
    {
	
	
	
	
	
	switch (c)
	{
	    case K_UP:	  c = K_LEFT; break;
	    case K_DOWN:  c = K_RIGHT; break;
	    case K_LEFT:  c = K_UP; break;
	    case K_RIGHT: c = K_DOWN; break;
	    default:	  break;
	}
    }

    if (did_wild_list)
    {
	if (c == K_LEFT)
	    c = Ctrl_P;
	else if (c == K_RIGHT)
	    c = Ctrl_N;
    }

    
    if (xp->xp_context == EXPAND_MENUNAMES
	    && cclp->cmdpos > 1
	    && cclp->cmdbuff[cclp->cmdpos - 1] == '.'
	    && cclp->cmdbuff[cclp->cmdpos - 2] != '\\'
	    && (c == '\n' || c == '\r' || c == K_KENTER))
	c = K_DOWN;

    return c;
}


    static void
cmdline_del(cmdline_info_T *cclp, int from)
{
    mch_memmove(cclp->cmdbuff + from, cclp->cmdbuff + cclp->cmdpos,
	    (size_t)(cclp->cmdlen - cclp->cmdpos + 1));
    cclp->cmdlen -= cclp->cmdpos - from;
    cclp->cmdpos = from;
}


    static int
wildmenu_process_key_menunames(cmdline_info_T *cclp, int key, expand_T *xp)
{
    int		i;
    int		j;

    
    if (key == K_DOWN && cclp->cmdpos > 0
	    && cclp->cmdbuff[cclp->cmdpos - 1] == '.')
    {
	key = p_wc;
	KeyTyped = TRUE;  
    }
    else if (key == K_UP)
    {
	
	
	int found = FALSE;

	j = (int)(xp->xp_pattern - cclp->cmdbuff);
	i = 0;
	while (--j > 0)
	{
	    
	    if (cclp->cmdbuff[j] == ' '
		    && cclp->cmdbuff[j - 1] != '\\')
	    {
		i = j + 1;
		break;
	    }
	    
	    if (cclp->cmdbuff[j] == '.'
		    && cclp->cmdbuff[j - 1] != '\\')
	    {
		if (found)
		{
		    i = j + 1;
		    break;
		}
		else
		    found = TRUE;
	    }
	}
	if (i > 0)
	    cmdline_del(cclp, i);
	key = p_wc;
	KeyTyped = TRUE;  
	xp->xp_context = EXPAND_NOTHING;
    }

    return key;
}


    static int
wildmenu_process_key_filenames(cmdline_info_T *cclp, int key, expand_T *xp)
{
    int		i;
    int		j;
    char_u	upseg[5];

    upseg[0] = PATHSEP;
    upseg[1] = '.';
    upseg[2] = '.';
    upseg[3] = PATHSEP;
    upseg[4] = NUL;

    if (key == K_DOWN
	    && cclp->cmdpos > 0
	    && cclp->cmdbuff[cclp->cmdpos - 1] == PATHSEP
	    && (cclp->cmdpos < 3
		|| cclp->cmdbuff[cclp->cmdpos - 2] != '.'
		|| cclp->cmdbuff[cclp->cmdpos - 3] != '.'))
    {
	
	key = p_wc;
	KeyTyped = TRUE;  
    }
    else if (STRNCMP(xp->xp_pattern, upseg + 1, 3) == 0 && key == K_DOWN)
    {
	
	int found = FALSE;

	j = cclp->cmdpos;
	i = (int)(xp->xp_pattern - cclp->cmdbuff);
	while (--j > i)
	{
	    if (has_mbyte)
		j -= (*mb_head_off)(cclp->cmdbuff, cclp->cmdbuff + j);
	    if (vim_ispathsep(cclp->cmdbuff[j]))
	    {
		found = TRUE;
		break;
	    }
	}
	if (found
		&& cclp->cmdbuff[j - 1] == '.'
		&& cclp->cmdbuff[j - 2] == '.'
		&& (vim_ispathsep(cclp->cmdbuff[j - 3]) || j == i + 2))
	{
	    cmdline_del(cclp, j - 2);
	    key = p_wc;
	    KeyTyped = TRUE;  
	}
    }
    else if (key == K_UP)
    {
	
	int found = FALSE;

	j = cclp->cmdpos - 1;
	i = (int)(xp->xp_pattern - cclp->cmdbuff);
	while (--j > i)
	{
	    if (has_mbyte)
		j -= (*mb_head_off)(cclp->cmdbuff, cclp->cmdbuff + j);
	    if (vim_ispathsep(cclp->cmdbuff[j])
#ifdef BACKSLASH_IN_FILENAME
		    && vim_strchr((char_u *)" *?[{`$%#",
			cclp->cmdbuff[j + 1]) == NULL
#endif
	       )
	    {
		if (found)
		{
		    i = j + 1;
		    break;
		}
		else
		    found = TRUE;
	    }
	}

	if (!found)
	    j = i;
	else if (STRNCMP(cclp->cmdbuff + j, upseg, 4) == 0)
	    j += 4;
	else if (STRNCMP(cclp->cmdbuff + j, upseg + 1, 3) == 0
		&& j == i)
	    j += 3;
	else
	    j = 0;
	if (j > 0)
	{
	    
	    
	    cmdline_del(cclp, j);
	    put_on_cmdline(upseg + 1, 3, FALSE);
	}
	else if (cclp->cmdpos > i)
	    cmdline_del(cclp, i);

	
	
	key = p_wc;
	KeyTyped = TRUE;
    }

    return key;
}


    int
wildmenu_process_key(cmdline_info_T *cclp, int key, expand_T *xp)
{
    if (xp->xp_context == EXPAND_MENUNAMES)
	return wildmenu_process_key_menunames(cclp, key, xp);
    else if ((xp->xp_context == EXPAND_FILES
		|| xp->xp_context == EXPAND_DIRECTORIES
		|| xp->xp_context == EXPAND_SHELLCMD))
	return wildmenu_process_key_filenames(cclp, key, xp);

    return key;
}


    void
wildmenu_cleanup(cmdline_info_T *cclp UNUSED)
{
    int skt = KeyTyped;

    if (!p_wmnu || wild_menu_showing == 0)
	return;

#ifdef FEAT_EVAL
    int save_RedrawingDisabled = RedrawingDisabled;
    if (cclp->input_fn)
	RedrawingDisabled = 0;
#endif

    if (wild_menu_showing == WM_SCROLLED)
    {
	
	cmdline_row--;
	redrawcmd();
    }
    else if (save_p_ls != -1)
    {
	
	p_ls = save_p_ls;
	p_wmh = save_p_wmh;
	last_status(FALSE);
	update_screen(UPD_VALID);	
	redrawcmd();
	save_p_ls = -1;
    }
    else
    {
	win_redraw_last_status(topframe);
	redraw_statuslines();
    }
    KeyTyped = skt;
    wild_menu_showing = 0;
#ifdef FEAT_EVAL
    if (cclp->input_fn)
	RedrawingDisabled = save_RedrawingDisabled;
#endif
}

#if defined(FEAT_EVAL) || defined(PROTO)

    void
f_getcompletion(typval_T *argvars, typval_T *rettv)
{
    char_u	*pat;
    char_u	*type;
    expand_T	xpc;
    int		filtered = FALSE;
    int		options = WILD_SILENT | WILD_USE_NL | WILD_ADD_SLASH
					| WILD_NO_BEEP | WILD_HOME_REPLACE;

    if (in_vim9script()
	    && (check_for_string_arg(argvars, 0) == FAIL
		|| check_for_string_arg(argvars, 1) == FAIL
		|| check_for_opt_bool_arg(argvars, 2) == FAIL))
	return;

    pat = tv_get_string(&argvars[0]);
    if (check_for_string_arg(argvars, 1) == FAIL)
	return;
    type = tv_get_string(&argvars[1]);

    if (argvars[2].v_type != VAR_UNKNOWN)
	filtered = tv_get_bool_chk(&argvars[2], NULL);

    if (p_wic)
	options |= WILD_ICASE;

    
    if (!filtered)
	options |= WILD_KEEP_ALL;

    ExpandInit(&xpc);
    if (STRCMP(type, "cmdline") == 0)
    {
	int cmdline_len = (int)STRLEN(pat);
	set_cmd_context(&xpc, pat, cmdline_len, cmdline_len, FALSE);
	xpc.xp_pattern_len = (int)STRLEN(xpc.xp_pattern);
	xpc.xp_col = cmdline_len;
    }
    else
    {
	xpc.xp_pattern = pat;
	xpc.xp_pattern_len = (int)STRLEN(xpc.xp_pattern);
	xpc.xp_line = pat;

	xpc.xp_context = cmdcomplete_str_to_type(type);
	if (xpc.xp_context == EXPAND_NOTHING)
	{
	    semsg(_(e_invalid_argument_str), type);
	    return;
	}

	if (xpc.xp_context == EXPAND_USER_DEFINED)
	{
	    
	    if (STRNCMP(type, "custom,", 7) != 0)
	    {
		semsg(_(e_invalid_argument_str), type);
		return;
	    }

	    xpc.xp_arg = type + 7;
	}

	if (xpc.xp_context == EXPAND_USER_LIST)
	{
	    
	    if (STRNCMP(type, "customlist,", 11) != 0)
	    {
		semsg(_(e_invalid_argument_str), type);
		return;
	    }

	    xpc.xp_arg = type + 11;
	}

# if defined(FEAT_MENU)
	if (xpc.xp_context == EXPAND_MENUS)
	{
	    set_context_in_menu_cmd(&xpc, (char_u *)"menu", xpc.xp_pattern, FALSE);
	    xpc.xp_pattern_len = (int)STRLEN(xpc.xp_pattern);
	}
# endif
# ifdef FEAT_CSCOPE
	if (xpc.xp_context == EXPAND_CSCOPE)
	{
	    set_context_in_cscope_cmd(&xpc, xpc.xp_pattern, CMD_cscope);
	    xpc.xp_pattern_len = (int)STRLEN(xpc.xp_pattern);
	}
# endif
# ifdef FEAT_SIGNS
	if (xpc.xp_context == EXPAND_SIGN)
	{
	    set_context_in_sign_cmd(&xpc, xpc.xp_pattern);
	    xpc.xp_pattern_len = (int)STRLEN(xpc.xp_pattern);
	}
# endif
	if (xpc.xp_context == EXPAND_RUNTIME)
	{
	    set_context_in_runtime_cmd(&xpc, xpc.xp_pattern);
	    xpc.xp_pattern_len = (int)STRLEN(xpc.xp_pattern);
	}
    }

    if (cmdline_fuzzy_completion_supported(&xpc))
       
       pat = vim_strsave(xpc.xp_pattern);
    else
       pat = addstar(xpc.xp_pattern, xpc.xp_pattern_len, xpc.xp_context);

    if (rettv_list_alloc(rettv) == OK && pat != NULL)
    {
	int	i;

	ExpandOne(&xpc, pat, NULL, options, WILD_ALL_KEEP);

	for (i = 0; i < xpc.xp_numfiles; i++)
	    list_append_string(rettv->vval.v_list, xpc.xp_files[i], -1);
    }
    vim_free(pat);
    ExpandCleanup(&xpc);
}
#endif 
