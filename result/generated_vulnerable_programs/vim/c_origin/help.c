



#include "vim.h"


    void
ex_help(exarg_T *eap)
{
    char_u	*arg;
    char_u	*tag;
    FILE	*helpfd;	
    int		n;
    int		i;
    win_T	*wp;
    int		num_matches;
    char_u	**matches;
    char_u	*p;
    int		empty_fnum = 0;
    int		alt_fnum = 0;
    buf_T	*buf;
#ifdef FEAT_MULTI_LANG
    int		len;
    char_u	*lang;
#endif
#ifdef FEAT_FOLDING
    int		old_KeyTyped = KeyTyped;
#endif

    if (ERROR_IF_ANY_POPUP_WINDOW)
	return;

    if (eap != NULL)
    {
	
	
	for (arg = eap->arg; *arg; ++arg)
	{
	    if (*arg == '\n' || *arg == '\r'
		    || (*arg == '|' && arg[1] != NUL && arg[1] != '|'))
	    {
		*arg++ = NUL;
		eap->nextcmd = arg;
		break;
	    }
	}
	arg = eap->arg;

	if (eap->forceit && *arg == NUL && !curbuf->b_help)
	{
	    emsg(_(e_dont_panic));
	    return;
	}

	if (eap->skip)	    
	    return;
    }
    else
	arg = (char_u *)"";

    
    p = arg + STRLEN(arg) - 1;
    while (p > arg && VIM_ISWHITE(*p) && p[-1] != '\\')
	*p-- = NUL;

#ifdef FEAT_MULTI_LANG
    
    lang = check_help_lang(arg);
#endif

    
    if (*arg == NUL)
	arg = (char_u *)"help.txt";

    
    n = find_help_tags(arg, &num_matches, &matches,
						 eap != NULL && eap->forceit);

    i = 0;
#ifdef FEAT_MULTI_LANG
    if (n != FAIL && lang != NULL)
	
	for (i = 0; i < num_matches; ++i)
	{
	    len = (int)STRLEN(matches[i]);
	    if (len > 3 && matches[i][len - 3] == '@'
				  && STRICMP(matches[i] + len - 2, lang) == 0)
		break;
	}
#endif
    if (i >= num_matches || n == FAIL)
    {
#ifdef FEAT_MULTI_LANG
	if (lang != NULL)
	    semsg(_(e_sorry_no_str_help_for_str), lang, arg);
	else
#endif
	    semsg(_(e_sorry_no_help_for_str), arg);
	if (n != FAIL)
	    FreeWild(num_matches, matches);
	return;
    }

    
    tag = vim_strsave(matches[i]);
    FreeWild(num_matches, matches);

#ifdef FEAT_GUI
    need_mouse_correct = TRUE;
#endif

    
    
    if (!bt_help(curwin->w_buffer) || cmdmod.cmod_tab != 0)
    {
	if (cmdmod.cmod_tab != 0)
	    wp = NULL;
	else
	    FOR_ALL_WINDOWS(wp)
		if (bt_help(wp->w_buffer))
		    break;
	if (wp != NULL && wp->w_buffer->b_nwindows > 0)
	    win_enter(wp, TRUE);
	else
	{
	    
	    
	    if ((helpfd = mch_fopen((char *)p_hf, READBIN)) == NULL)
	    {
		smsg(_("Sorry, help file \"%s\" not found"), p_hf);
		goto erret;
	    }
	    fclose(helpfd);

	    
	    
	    
	    n = WSP_HELP;
	    if (cmdmod.cmod_split == 0 && curwin->w_width != Columns
						  && curwin->w_width < 80)
		n |= p_sb ? WSP_BOT : WSP_TOP;
	    if (win_split(0, n) == FAIL)
		goto erret;

	    if (curwin->w_height < p_hh)
		win_setheight((int)p_hh);

	    
	    
	    
	    alt_fnum = curbuf->b_fnum;
	    (void)do_ecmd(0, NULL, NULL, NULL, ECMD_LASTL,
			  ECMD_HIDE + ECMD_SET_HELP,
			  NULL);  
	    if ((cmdmod.cmod_flags & CMOD_KEEPALT) == 0)
		curwin->w_alt_fnum = alt_fnum;
	    empty_fnum = curbuf->b_fnum;
	}
    }

    if (!p_im)
	restart_edit = 0;	    

#ifdef FEAT_FOLDING
    
    
    KeyTyped = old_KeyTyped;
#endif

    if (tag != NULL)
	do_tag(tag, DT_HELP, 1, FALSE, TRUE);

    
    
    
    if (empty_fnum != 0 && curbuf->b_fnum != empty_fnum)
    {
	buf = buflist_findnr(empty_fnum);
	if (buf != NULL && buf->b_nwindows == 0)
	    wipe_buffer(buf, TRUE);
    }

    
    if (alt_fnum != 0 && curwin->w_alt_fnum == empty_fnum
				    && (cmdmod.cmod_flags & CMOD_KEEPALT) == 0)
	curwin->w_alt_fnum = alt_fnum;

erret:
    vim_free(tag);
}


    void
ex_helpclose(exarg_T *eap UNUSED)
{
    win_T *win;

    FOR_ALL_WINDOWS(win)
    {
	if (bt_help(win->w_buffer))
	{
	    win_close(win, FALSE);
	    return;
	}
    }
}

#if defined(FEAT_MULTI_LANG) || defined(PROTO)

    char_u *
check_help_lang(char_u *arg)
{
    int len = (int)STRLEN(arg);

    if (len >= 3 && arg[len - 3] == '@' && ASCII_ISALPHA(arg[len - 2])
					       && ASCII_ISALPHA(arg[len - 1]))
    {
	arg[len - 3] = NUL;		
	return arg + len - 2;
    }
    return NULL;
}
#endif


    int
help_heuristic(
    char_u	*matched_string,
    int		offset,			
    int		wrong_case)		
{
    int		num_letters;
    char_u	*p;

    num_letters = 0;
    for (p = matched_string; *p; p++)
	if (ASCII_ISALNUM(*p))
	    num_letters++;

    
    
    
    
    
    
    
    if (ASCII_ISALNUM(matched_string[offset]) && offset > 0
				 && ASCII_ISALNUM(matched_string[offset - 1]))
	offset += 10000;
    else if (offset > 2)
	offset *= 200;
    if (wrong_case)
	offset += 5000;
    
    
    if (matched_string[0] == '+' && matched_string[1] != NUL)
	offset += 100;
    return (int)(100 * num_letters + STRLEN(matched_string) + offset);
}


    static int
help_compare(const void *s1, const void *s2)
{
    char    *p1;
    char    *p2;
    int	    cmp;

    p1 = *(char **)s1 + strlen(*(char **)s1) + 1;
    p2 = *(char **)s2 + strlen(*(char **)s2) + 1;

    
    cmp = strcmp(p1, p2);
    if (cmp != 0)
	return cmp;

    
    return strcmp(*(char **)s1, *(char **)s2);
}


    int
find_help_tags(
    char_u	*arg,
    int		*num_matches,
    char_u	***matches,
    int		keep_lang)
{
    char_u	*s, *d;
    int		i;
    
    
    static char *(except_tbl[][2]) = {
	{"*",		"star"},
	{"g*",		"gstar"},
	{"[*",		"[star"},
	{"]*",		"]star"},
	{":*",		":star"},
	{"
    void
cleanup_help_tags(int num_file, char_u **file)
{
    int		i, j;
    int		len;
    char_u	buf[4];
    char_u	*p = buf;

    if (p_hlg[0] != NUL && (p_hlg[0] != 'e' || p_hlg[1] != 'n'))
    {
	*p++ = '@';
	*p++ = p_hlg[0];
	*p++ = p_hlg[1];
    }
    *p = NUL;

    for (i = 0; i < num_file; ++i)
    {
	len = (int)STRLEN(file[i]) - 3;
	if (len <= 0)
	    continue;
	if (STRCMP(file[i] + len, "@en") == 0)
	{
	    
	    
	    for (j = 0; j < num_file; ++j)
		if (j != i && (int)STRLEN(file[j]) == len + 3
			   && STRNCMP(file[i], file[j], len + 1) == 0)
		    break;
	    if (j == num_file)
		
		file[i][len] = NUL;
	}
    }

    if (*buf != NUL)
	for (i = 0; i < num_file; ++i)
	{
	    len = (int)STRLEN(file[i]) - 3;
	    if (len <= 0)
		continue;
	    if (STRCMP(file[i] + len, buf) == 0)
	    {
		
		file[i][len] = NUL;
	    }
	}
}
#endif


    void
prepare_help_buffer(void)
{
    char_u	*p;

    curbuf->b_help = TRUE;
#ifdef FEAT_QUICKFIX
    set_string_option_direct((char_u *)"buftype", -1,
				     (char_u *)"help", OPT_FREE|OPT_LOCAL, 0);
#endif

    
    
    

    
    
    
    p = (char_u *)"!-~,^*,^|,^\",192-255";
    if (STRCMP(curbuf->b_p_isk, p) != 0)
    {
	set_string_option_direct((char_u *)"isk", -1, p, OPT_FREE|OPT_LOCAL, 0);
	check_buf_options(curbuf);
	(void)buf_init_chartab(curbuf, FALSE);
    }

#ifdef FEAT_FOLDING
    
    set_string_option_direct((char_u *)"fdm", -1, (char_u *)"manual",
						       OPT_FREE|OPT_LOCAL, 0);
#endif

    curbuf->b_p_ts = 8;		
    curwin->w_p_list = FALSE;	

    curbuf->b_p_ma = FALSE;	
    curbuf->b_p_bin = FALSE;	
    curwin->w_p_nu = 0;		
    curwin->w_p_rnu = 0;	
    RESET_BINDING(curwin);	
#ifdef FEAT_ARABIC
    curwin->w_p_arab = FALSE;	
#endif
#ifdef FEAT_RIGHTLEFT
    curwin->w_p_rl  = FALSE;	
#endif
#ifdef FEAT_FOLDING
    curwin->w_p_fen = FALSE;	
#endif
#ifdef FEAT_DIFF
    curwin->w_p_diff = FALSE;	
#endif
#ifdef FEAT_SPELL
    curwin->w_p_spell = FALSE;	
#endif

    set_buflisted(FALSE);
}


    void
fix_help_buffer(void)
{
    linenr_T	lnum;
    char_u	*line;
    int		in_example = FALSE;
    int		len;
    char_u	*fname;
    char_u	*p;
    char_u	*rt;
    int		mustfree;

    
    if (STRCMP(curbuf->b_p_ft, "help") != 0)
    {
	++curbuf_lock;
	set_option_value_give_err((char_u *)"ft",
					      0L, (char_u *)"help", OPT_LOCAL);
	--curbuf_lock;
    }

#ifdef FEAT_SYN_HL
    if (!syntax_present(curwin))
#endif
    {
	for (lnum = 1; lnum <= curbuf->b_ml.ml_line_count; ++lnum)
	{
	    line = ml_get_buf(curbuf, lnum, FALSE);
	    len = ml_get_buf_len(curbuf, lnum);
	    if (in_example && len > 0 && !VIM_ISWHITE(line[0]))
	    {
		
		if (line[0] == '<')
		{
		    
		    line = ml_get_buf(curbuf, lnum, TRUE);
		    line[0] = ' ';
		}
		in_example = FALSE;
	    }
	    if (!in_example && len > 0)
	    {
		if (line[len - 1] == '>' && (len == 1 || line[len - 2] == ' '))
		{
		    
		    line = ml_get_buf(curbuf, lnum, TRUE);
		    line[len - 1] = ' ';
		    in_example = TRUE;
		}
		else if (line[len - 1] == '~')
		{
		    
		    line = ml_get_buf(curbuf, lnum, TRUE);
		    line[len - 1] = ' ';
		}
	    }
	}
    }

    
    
    fname = gettail(curbuf->b_fname);
    if (fnamecmp(fname, "help.txt") == 0
#ifdef FEAT_MULTI_LANG
	|| (fnamencmp(fname, "help.", 5) == 0
	    && ASCII_ISALPHA(fname[5])
	    && ASCII_ISALPHA(fname[6])
	    && TOLOWER_ASC(fname[7]) == 'x'
	    && fname[8] == NUL)
#endif
	)
    {
	for (lnum = 1; lnum < curbuf->b_ml.ml_line_count; ++lnum)
	{
	    line = ml_get_buf(curbuf, lnum, FALSE);
	    if (strstr((char *)line, "*local-additions*") == NULL)
		continue;

	    
	    
	    p = p_rtp;
	    while (*p != NUL)
	    {
		copy_option_part(&p, NameBuff, MAXPATHL, ",");
		mustfree = FALSE;
		rt = vim_getenv((char_u *)"VIMRUNTIME", &mustfree);
		if (rt != NULL &&
			    fullpathcmp(rt, NameBuff, FALSE, TRUE) != FPC_SAME)
		{
		    int		fcount;
		    char_u	**fnames;
		    FILE	*fd;
		    char_u	*s;
		    int		fi;
		    vimconv_T	vc;
		    char_u	*cp;

		    
		    add_pathsep(NameBuff);
#ifdef FEAT_MULTI_LANG
		    STRCAT(NameBuff, "doc
    void
ex_exusage(exarg_T *eap UNUSED)
{
    do_cmdline_cmd((char_u *)"help ex-cmd-index");
}


    void
ex_viusage(exarg_T *eap UNUSED)
{
    do_cmdline_cmd((char_u *)"help normal-index");
}


    static void
helptags_one(
    char_u	*dir,		
    char_u	*ext,		
    char_u	*tagfname,	
    int		add_help_tags,	
    int		ignore_writeerr)    
{
    FILE	*fd_tags;
    FILE	*fd;
    garray_T	ga;
    int		res;
    int		filecount;
    char_u	**files;
    char_u	*p1, *p2;
    int		fi;
    char_u	*s;
    int		i;
    char_u	*fname;
    int		dirlen;
    int		utf8 = MAYBE;
    int		this_utf8;
    int		firstline;
    int		in_example;
    int		len;
    int		mix = FALSE;	

    
    dirlen = (int)STRLEN(dir);
    STRCPY(NameBuff, dir);
    STRCAT(NameBuff, "*");
    STRCAT(NameBuff, ext);
    res = gen_expand_wildcards(1, &NameBuff, &filecount, &files,
							    EW_FILE|EW_SILENT);
    if (res == FAIL || filecount == 0)
    {
	if (!got_int)
	    semsg(_(e_no_match_str_1), NameBuff);
	if (res != FAIL)
	    FreeWild(filecount, files);
	return;
    }

    
    
    STRCPY(NameBuff, dir);
    add_pathsep(NameBuff);
    STRCAT(NameBuff, tagfname);
    fd_tags = mch_fopen((char *)NameBuff, "w");
    if (fd_tags == NULL)
    {
	if (!ignore_writeerr)
	    semsg(_(e_cannot_open_str_for_writing_1), NameBuff);
	FreeWild(filecount, files);
	return;
    }

    
    
    ga_init2(&ga, sizeof(char_u *), 100);
    if (add_help_tags || fullpathcmp((char_u *)"$VIMRUNTIME/doc",
						dir, FALSE, TRUE) == FPC_SAME)
    {
	if (ga_grow(&ga, 1) == FAIL)
	    got_int = TRUE;
	else
	{
	    s = alloc(18 + (unsigned)STRLEN(tagfname));
	    if (s == NULL)
		got_int = TRUE;
	    else
	    {
		sprintf((char *)s, "help-tags\t%s\t1\n", tagfname);
		((char_u **)ga.ga_data)[ga.ga_len] = s;
		++ga.ga_len;
	    }
	}
    }

    
    for (fi = 0; fi < filecount && !got_int; ++fi)
    {
	fd = mch_fopen((char *)files[fi], "r");
	if (fd == NULL)
	{
	    semsg(_(e_unable_to_open_str_for_reading), files[fi]);
	    continue;
	}
	fname = files[fi] + dirlen + 1;

	in_example = FALSE;
	firstline = TRUE;
	while (!vim_fgets(IObuff, IOSIZE, fd) && !got_int)
	{
	    if (firstline)
	    {
		
		this_utf8 = MAYBE;
		for (s = IObuff; *s != NUL; ++s)
		    if (*s >= 0x80)
		    {
			int l;

			this_utf8 = TRUE;
			l = utf_ptr2len(s);
			if (l == 1)
			{
			    
			    this_utf8 = FALSE;
			    break;
			}
			s += l - 1;
		    }
		if (this_utf8 == MAYBE)	    
		    this_utf8 = FALSE;
		if (utf8 == MAYBE)	    
		    utf8 = this_utf8;
		else if (utf8 != this_utf8)
		{
		    semsg(_(e_mix_of_help_file_encodings_within_language_str), files[fi]);
		    mix = !got_int;
		    got_int = TRUE;
		}
		firstline = FALSE;
	    }
	    if (in_example)
	    {
		
		if (vim_strchr((char_u *)" \t\n\r", IObuff[0]))
		    continue;
		in_example = FALSE;
	    }
	    p1 = vim_strchr(IObuff, '*');	
	    while (p1 != NULL)
	    {
		
		
		
		p2 = vim_strbyte(p1 + 1, '*');	
		if (p2 != NULL && p2 > p1 + 1)	
		{
		    for (s = p1 + 1; s < p2; ++s)
			if (*s == ' ' || *s == '\t' || *s == '|')
			    break;

		    
		    
		    
		    if (s == p2
			    && (p1 == IObuff || p1[-1] == ' ' || p1[-1] == '\t')
			    && (vim_strchr((char_u *)" \t\n\r", s[1]) != NULL
				|| s[1] == '\0'))
		    {
			*p2 = '\0';
			++p1;
			if (ga_grow(&ga, 1) == FAIL)
			{
			    got_int = TRUE;
			    break;
			}
			s = alloc(p2 - p1 + STRLEN(fname) + 2);
			if (s == NULL)
			{
			    got_int = TRUE;
			    break;
			}
			((char_u **)ga.ga_data)[ga.ga_len] = s;
			++ga.ga_len;
			sprintf((char *)s, "%s\t%s", p1, fname);

			
			p2 = vim_strchr(p2 + 1, '*');
		    }
		}
		p1 = p2;
	    }
	    len = (int)STRLEN(IObuff);
	    if ((len == 2 && STRCMP(&IObuff[len - 2], ">\n") == 0)
		    || (len >= 3 && STRCMP(&IObuff[len - 3], " >\n") == 0))
		in_example = TRUE;
	    line_breakcheck();
	}

	fclose(fd);
    }

    FreeWild(filecount, files);

    if (!got_int)
    {
	
	if (ga.ga_data != NULL)
	    sort_strings((char_u **)ga.ga_data, ga.ga_len);

	
	for (i = 1; i < ga.ga_len; ++i)
	{
	    p1 = ((char_u **)ga.ga_data)[i - 1];
	    p2 = ((char_u **)ga.ga_data)[i];
	    while (*p1 == *p2)
	    {
		if (*p2 == '\t')
		{
		    *p2 = NUL;
		    vim_snprintf((char *)NameBuff, MAXPATHL,
			    _(e_duplicate_tag_str_in_file_str_str),
				     ((char_u **)ga.ga_data)[i], dir, p2 + 1);
		    emsg((char *)NameBuff);
		    *p2 = '\t';
		    break;
		}
		++p1;
		++p2;
	    }
	}

	if (utf8 == TRUE)
	    fprintf(fd_tags, "!_TAG_FILE_ENCODING\tutf-8\t

	
	for (i = 0; i < ga.ga_len; ++i)
	{
	    s = ((char_u **)ga.ga_data)[i];
	    if (STRNCMP(s, "help-tags\t", 10) == 0)
		
		fputs((char *)s, fd_tags);
	    else
	    {
		fprintf(fd_tags, "%s\t
    static void
do_helptags(char_u *dirname, int add_help_tags, int ignore_writeerr)
{
#ifdef FEAT_MULTI_LANG
    int		len;
    int		i, j;
    garray_T	ga;
    char_u	lang[2];
    char_u	ext[5];
    char_u	fname[8];
    int		filecount;
    char_u	**files;

    
    STRCPY(NameBuff, dirname);
    add_pathsep(NameBuff);
    STRCAT(NameBuff, "**");
    if (gen_expand_wildcards(1, &NameBuff, &filecount, &files,
						    EW_FILE|EW_SILENT) == FAIL
	    || filecount == 0)
    {
	semsg(_(e_no_match_str_1), NameBuff);
	return;
    }

    
    
    ga_init2(&ga, 1, 10);
    for (i = 0; i < filecount; ++i)
    {
	len = (int)STRLEN(files[i]);
	if (len <= 4)
	    continue;

	if (STRICMP(files[i] + len - 4, ".txt") == 0)
	{
	    
	    lang[0] = 'e';
	    lang[1] = 'n';
	}
	else if (files[i][len - 4] == '.'
		&& ASCII_ISALPHA(files[i][len - 3])
		&& ASCII_ISALPHA(files[i][len - 2])
		&& TOLOWER_ASC(files[i][len - 1]) == 'x')
	{
	    
	    lang[0] = TOLOWER_ASC(files[i][len - 3]);
	    lang[1] = TOLOWER_ASC(files[i][len - 2]);
	}
	else
	    continue;

	
	for (j = 0; j < ga.ga_len; j += 2)
	    if (STRNCMP(lang, ((char_u *)ga.ga_data) + j, 2) == 0)
		break;
	if (j == ga.ga_len)
	{
	    
	    if (ga_grow(&ga, 2) == FAIL)
		break;
	    ((char_u *)ga.ga_data)[ga.ga_len++] = lang[0];
	    ((char_u *)ga.ga_data)[ga.ga_len++] = lang[1];
	}
    }

    
    for (j = 0; j < ga.ga_len; j += 2)
    {
	STRCPY(fname, "tags-xx");
	fname[5] = ((char_u *)ga.ga_data)[j];
	fname[6] = ((char_u *)ga.ga_data)[j + 1];
	if (fname[5] == 'e' && fname[6] == 'n')
	{
	    
	    fname[4] = NUL;
	    STRCPY(ext, ".txt");
	}
	else
	{
	    
	    STRCPY(ext, ".xxx");
	    ext[1] = fname[5];
	    ext[2] = fname[6];
	}
	helptags_one(dirname, ext, fname, add_help_tags, ignore_writeerr);
    }

    ga_clear(&ga);
    FreeWild(filecount, files);

#else
    
    helptags_one(dirname, (char_u *)".txt", (char_u *)"tags", add_help_tags,
							    ignore_writeerr);
#endif
}

    static void
helptags_cb(char_u *fname, void *cookie)
{
    do_helptags(fname, *(int *)cookie, TRUE);
}


    void
ex_helptags(exarg_T *eap)
{
    expand_T	xpc;
    char_u	*dirname;
    int		add_help_tags = FALSE;

    
    if (STRNCMP(eap->arg, "++t", 3) == 0 && VIM_ISWHITE(eap->arg[3]))
    {
	add_help_tags = TRUE;
	eap->arg = skipwhite(eap->arg + 3);
    }

    if (STRCMP(eap->arg, "ALL") == 0)
    {
	do_in_path(p_rtp, "", (char_u *)"doc", DIP_ALL + DIP_DIR,
						 helptags_cb, &add_help_tags);
    }
    else
    {
	ExpandInit(&xpc);
	xpc.xp_context = EXPAND_DIRECTORIES;
	dirname = ExpandOne(&xpc, eap->arg, NULL,
			    WILD_LIST_NOTFOUND|WILD_SILENT, WILD_EXPAND_FREE);
	if (dirname == NULL || !mch_isdir(dirname))
	    semsg(_(e_not_a_directory_str), eap->arg);
	else
	    do_helptags(dirname, add_help_tags, FALSE);
	vim_free(dirname);
    }
}
