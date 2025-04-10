



#include "vim.h"

#if defined(FEAT_CLIENTSERVER) || defined(PROTO)

static void cmdsrv_main(int *argc, char **argv, char_u *serverName_arg, char_u **serverStr);
static char_u *serverMakeName(char_u *arg, char *cmd);


    void
server_to_input_buf(char_u *str)
{
    char_u      *ptr = NULL;
    char_u      *cpo_save = p_cpo;

    
    
    
    
    
    
    p_cpo = (char_u *)"Bk";
    str = replace_termcodes(str, &ptr, 0, REPTERM_DO_LT, NULL);
    p_cpo = cpo_save;

    if (*ptr != NUL)	
    {
	
	if (typebuf.tb_maplen < typebuf.tb_len)
	    del_typebuf(typebuf.tb_len - typebuf.tb_maplen, typebuf.tb_maplen);
	(void)ins_typebuf(str, REMAP_NONE, typebuf.tb_len, TRUE, FALSE);

	
	
	typebuf_was_filled = TRUE;
    }
    vim_free(ptr);
}


    char_u *
eval_client_expr_to_string(char_u *expr)
{
    char_u	*res;
    int		save_dbl = debug_break_level;
    int		save_ro = redir_off;
    funccal_entry_T funccal_entry;
    int		did_save_funccal = FALSE;

#if defined(FEAT_EVAL)
    ch_log(NULL, "eval_client_expr_to_string(\"%s\")", expr);
#endif

    
    
    if (!debug_mode)
    {
	save_funccal(&funccal_entry);
	did_save_funccal = TRUE;
    }

     
     
    debug_break_level = -1;
    redir_off = 0;
    
    
    ++emsg_silent;

    res = eval_to_string(expr, TRUE, FALSE);

    debug_break_level = save_dbl;
    redir_off = save_ro;
    --emsg_silent;
    if (emsg_silent < 0)
	emsg_silent = 0;
    if (did_save_funccal)
	restore_funccal();

    
    
    setcursor();
    out_flush_cursor(FALSE, FALSE);

    return res;
}


    int
sendToLocalVim(char_u *cmd, int asExpr, char_u **result)
{
    if (asExpr)
    {
	char_u *ret;

	ret = eval_client_expr_to_string(cmd);
	if (result != NULL)
	{
	    if (ret == NULL)
	    {
		char	*err = _(e_invalid_expression_received);
		size_t	len = STRLEN(cmd) + STRLEN(err) + 5;
		char_u	*msg;

		msg = alloc(len);
		if (msg != NULL)
		    vim_snprintf((char *)msg, len, "%s: \"%s\"", err, cmd);
		*result = msg;
	    }
	    else
		*result = ret;
	}
	else
	    vim_free(ret);
	return ret == NULL ? -1 : 0;
    }
    server_to_input_buf(cmd);
    return 0;
}


    char_u *
serverConvert(
    char_u *client_enc UNUSED,
    char_u *data,
    char_u **tofree)
{
    char_u	*res = data;

    *tofree = NULL;
    if (client_enc == NULL || p_enc == NULL)
	return res;

    vimconv_T	vimconv;

    vimconv.vc_type = CONV_NONE;
    if (convert_setup(&vimconv, client_enc, p_enc) != FAIL
	    && vimconv.vc_type != CONV_NONE)
    {
	res = string_convert(&vimconv, data, NULL);
	if (res == NULL)
	    res = data;
	else
	    *tofree = res;
    }
    convert_setup(&vimconv, NULL, NULL);
    return res;
}
#endif

#if (defined(FEAT_CLIENTSERVER) && !defined(NO_VIM_MAIN)) || defined(PROTO)



static char_u *build_drop_cmd(int filec, char **filev, int tabs, int sendReply);


    void
exec_on_server(mparm_T *parmp)
{
    if (parmp->serverName_arg != NULL && *parmp->serverName_arg == NUL)
	return;

# ifdef MSWIN
    
    serverInitMessaging();
# endif

    
    if (parmp->serverArg)
    {
	cmdsrv_main(&parmp->argc, parmp->argv,
		parmp->serverName_arg, &parmp->serverStr);
	parmp->serverStrEnc = vim_strsave(p_enc);
    }

    
    
    
    parmp->servername = serverMakeName(parmp->serverName_arg,
	    parmp->argv[0]);
# ifdef MSWIN
    if (parmp->servername != NULL)
    {
	serverSetName(parmp->servername);
	vim_free(parmp->servername);
    }
# endif
}


    void
prepare_server(mparm_T *parmp)
{
# if defined(FEAT_X11)
    
    if (X_DISPLAY != NULL && parmp->servername != NULL && (
#  if defined(FEAT_AUTOSERVERNAME) || defined(FEAT_GUI)
		(
#   if defined(FEAT_AUTOSERVERNAME)
		    1
#   else
		    gui.in_use
#   endif
#   ifdef UNIX
		 && getuid() != ROOT_UID
#   endif
		) ||
#  endif
		parmp->serverName_arg != NULL))
    {
	(void)serverRegisterName(X_DISPLAY, parmp->servername);
	vim_free(parmp->servername);
	TIME_MSG("register server name");
    }
    else
	serverDelayedStartName = parmp->servername;
# endif

    
    if (parmp->serverStr != NULL)
    {
	char_u *p;

	server_to_input_buf(serverConvert(parmp->serverStrEnc,
						       parmp->serverStr, &p));
	vim_free(p);
    }
}

    static void
cmdsrv_main(
    int		*argc,
    char	**argv,
    char_u	*serverName_arg,
    char_u	**serverStr)
{
    char_u	*res;
    int		i;
    char_u	*sname;
    int		ret;
    int		didone = FALSE;
    int		exiterr = 0;
    char	**newArgV = argv + 1;
    int		newArgC = 1,
		Argc = *argc;
    int		argtype;
#define ARGTYPE_OTHER		0
#define ARGTYPE_EDIT		1
#define ARGTYPE_EDIT_WAIT	2
#define ARGTYPE_SEND		3
    int		silent = FALSE;
    int		tabs = FALSE;
# ifndef FEAT_X11
    HWND	srv;
# else
    Window	srv;

    setup_term_clip();
# endif

    sname = serverMakeName(serverName_arg, argv[0]);
    if (sname == NULL)
	return;

    
    for (i = 1; i < Argc; i++)
    {
	res = NULL;
	if (STRCMP(argv[i], "--") == 0)	
	{
	    for (; i < *argc; i++)
	    {
		*newArgV++ = argv[i];
		newArgC++;
	    }
	    break;
	}

	if (STRICMP(argv[i], "--remote-send") == 0)
	    argtype = ARGTYPE_SEND;
	else if (STRNICMP(argv[i], "--remote", 8) == 0)
	{
	    char	*p = argv[i] + 8;

	    argtype = ARGTYPE_EDIT;
	    while (*p != NUL)
	    {
		if (STRNICMP(p, "-wait", 5) == 0)
		{
		    argtype = ARGTYPE_EDIT_WAIT;
		    p += 5;
		}
		else if (STRNICMP(p, "-silent", 7) == 0)
		{
		    silent = TRUE;
		    p += 7;
		}
		else if (STRNICMP(p, "-tab", 4) == 0)
		{
		    tabs = TRUE;
		    p += 4;
		}
		else
		{
		    argtype = ARGTYPE_OTHER;
		    break;
		}
	    }
	}
	else
	    argtype = ARGTYPE_OTHER;

	if (argtype != ARGTYPE_OTHER)
	{
	    if (i == *argc - 1)
		mainerr_arg_missing((char_u *)argv[i]);
	    if (argtype == ARGTYPE_SEND)
	    {
		*serverStr = (char_u *)argv[i + 1];
		i++;
	    }
	    else
	    {
		*serverStr = build_drop_cmd(*argc - i - 1, argv + i + 1,
					  tabs, argtype == ARGTYPE_EDIT_WAIT);
		if (*serverStr == NULL)
		{
		    
		    didone = TRUE;
		    exiterr = 1;
		    break;
		}
		Argc = i;
	    }
# ifdef FEAT_X11
	    if (xterm_dpy == NULL)
	    {
		mch_errmsg(_("No display"));
		ret = -1;
	    }
	    else
		ret = serverSendToVim(xterm_dpy, sname, *serverStr,
						  NULL, &srv, 0, 0, 0, silent);
# else
	    
	    ret = serverSendToVim(sname, *serverStr, NULL, &srv, 0, 0, silent);
# endif
	    if (ret < 0)
	    {
		if (argtype == ARGTYPE_SEND)
		{
		    
		    mch_errmsg(_(": Send failed.\n"));
		    didone = TRUE;
		    exiterr = 1;
		}
		else if (!silent)
		    
		    mch_errmsg(_(": Send failed. Trying to execute locally\n"));
		break;
	    }

# ifdef FEAT_GUI_MSWIN
	    
	    
	    
	    if (argtype != ARGTYPE_SEND && TOUPPER_ASC(*sname) == 'G')
		SetForegroundWindow(srv);
# endif

	    
	    if (argtype == ARGTYPE_EDIT_WAIT)
	    {
		int	numFiles = *argc - i - 1;
		char_u  *done = alloc(numFiles);
# ifdef FEAT_GUI_MSWIN
		NOTIFYICONDATA ni;
		int	count = 0;
		extern HWND message_window;
# endif

		if (numFiles > 0 && argv[i + 1][0] == '+')
		    
		    --numFiles;

# ifdef FEAT_GUI_MSWIN
		ni.cbSize = sizeof(ni);
		ni.hWnd = message_window;
		ni.uID = 0;
		ni.uFlags = NIF_ICON|NIF_TIP;
		ni.hIcon = LoadIcon((HINSTANCE)GetModuleHandle(0), "IDR_VIM");
		sprintf(ni.szTip, _("%d of %d edited"), count, numFiles);
		Shell_NotifyIcon(NIM_ADD, &ni);
# endif

		
		vim_memset(done, 0, numFiles);
		while (memchr(done, 0, numFiles) != NULL)
		{
		    char_u  *p;
		    int	    j;
# ifdef MSWIN
		    p = serverGetReply(srv, NULL, TRUE, TRUE, 0);
		    if (p == NULL)
			break;
# else
		    if (serverReadReply(xterm_dpy, srv, &p, TRUE, -1) < 0)
			break;
# endif
		    j = atoi((char *)p);
		    vim_free(p);
		    if (j >= 0 && j < numFiles)
		    {
# ifdef FEAT_GUI_MSWIN
			++count;
			sprintf(ni.szTip, _("%d of %d edited"),
							     count, numFiles);
			Shell_NotifyIcon(NIM_MODIFY, &ni);
# endif
			done[j] = 1;
		    }
		}
# ifdef FEAT_GUI_MSWIN
		Shell_NotifyIcon(NIM_DELETE, &ni);
# endif
		vim_free(done);
	    }
	}
	else if (STRICMP(argv[i], "--remote-expr") == 0)
	{
	    if (i == *argc - 1)
		mainerr_arg_missing((char_u *)argv[i]);
# ifdef MSWIN
	    
	    if (serverSendToVim(sname, (char_u *)argv[i + 1],
						  &res, NULL, 1, 0, FALSE) < 0)
# else
	    if (xterm_dpy == NULL)
		mch_errmsg(_("No display: Send expression failed.\n"));
	    else if (serverSendToVim(xterm_dpy, sname, (char_u *)argv[i + 1],
					       &res, NULL, 1, 0, 1, FALSE) < 0)
# endif
	    {
		if (res != NULL && *res != NUL)
		{
		    
		    mch_errmsg((char *)res);
		    VIM_CLEAR(res);
		}
		mch_errmsg(_(": Send expression failed.\n"));
	    }
	}
	else if (STRICMP(argv[i], "--serverlist") == 0)
	{
# ifdef MSWIN
	    
	    res = serverGetVimNames();
# else
	    if (xterm_dpy != NULL)
		res = serverGetVimNames(xterm_dpy);
# endif
	    if (did_emsg)
		mch_errmsg("\n");
	}
	else if (STRICMP(argv[i], "--servername") == 0)
	{
	    
	    i++;
	    continue;
	}
	else
	{
	    *newArgV++ = argv[i];
	    newArgC++;
	    continue;
	}
	didone = TRUE;
	if (res != NULL && *res != NUL)
	{
	    mch_msg((char *)res);
	    if (res[STRLEN(res) - 1] != '\n')
		mch_msg("\n");
	}
	vim_free(res);
    }

    if (didone)
    {
	display_errors();	
	exit(exiterr);	
    }

    
    *argc = newArgC;
    vim_free(sname);
}


    static char_u *
build_drop_cmd(
    int		filec,
    char	**filev,
    int		tabs,		
    int		sendReply)
{
    garray_T	ga;
    int		i;
    char_u	*inicmd = NULL;
    char_u	*p;
    char_u	*cdp;
    char_u	*cwd;
    
    const char *wig[] =
    { "<CR><C-\\><C-N>:let g:_wig=&wig|set wig=",
      "<C-\\><C-N>:let &wig=g:_wig|unlet g:_wig<CR>"};

    if (filec > 0 && filev[0][0] == '+')
    {
	inicmd = (char_u *)filev[0] + 1;
	filev++;
	filec--;
    }
    
    if (filec <= 0)
	mainerr_arg_missing((char_u *)filev[-1]);

    
    cwd = alloc(MAXPATHL);
    if (cwd == NULL)
	return NULL;
    if (mch_dirname(cwd, MAXPATHL) != OK)
    {
	vim_free(cwd);
	return NULL;
    }
    cdp = vim_strsave_escaped_ext(cwd,
#ifdef BACKSLASH_IN_FILENAME
	    (char_u *)"",  
#else
	    PATH_ESC_CHARS,
#endif
	    '\\', TRUE);
    vim_free(cwd);
    if (cdp == NULL)
	return NULL;
    ga_init2(&ga, 1, 100);
    ga_concat(&ga, (char_u *)"<C-\\><C-N>:cd ");
    ga_concat(&ga, cdp);
    
    ga_concat(&ga, (char_u *)wig[0]);

    
    ga_concat(&ga, (char_u *)
	    "<CR><C-\\><C-N>:if exists('*inputsave')|call inputsave()|endif|");
    if (tabs)
	ga_concat(&ga, (char_u *)"tab ");
    ga_concat(&ga, (char_u *)"drop");
    for (i = 0; i < filec; i++)
    {
	
	
	
	p = vim_strsave_escaped((char_u *)filev[i],
#ifdef UNIX
		PATH_ESC_CHARS
#else
		(char_u *)" \t%#"
#endif
		);
	if (p == NULL)
	{
	    vim_free(ga.ga_data);
	    return NULL;
	}
	ga_concat(&ga, (char_u *)" ");
	ga_concat(&ga, p);
	vim_free(p);
    }
    ga_concat(&ga, (char_u *)
		  "|if exists('*inputrestore')|call inputrestore()|endif<CR>");

    
    
    ga_concat(&ga, (char_u *)"<C-\\><C-N>");

    
    
    
    
    
    
    
    
    
    
    
    ga_concat(&ga, (char_u *)":if !exists('+acd')||!&acd|if haslocaldir()|");
#ifdef MSWIN
    
    
    ga_concat(&ga, (char_u *)"cd -|lcd -|elseif getcwd()->tr('/','\\') ==# '");
#else
    ga_concat(&ga, (char_u *)"cd -|lcd -|elseif getcwd() ==# '");
#endif
    ga_concat(&ga, cdp);
    ga_concat(&ga, (char_u *)"'|cd -|endif|endif<CR>");
    vim_free(cdp);
    
    ga_concat(&ga, (char_u *)wig[1]);

    if (sendReply)
	ga_concat(&ga, (char_u *)":call SetupRemoteReplies()<CR>");
    ga_concat(&ga, (char_u *)":");
    if (inicmd != NULL)
    {
	
	
	
	ga_concat(&ga, inicmd);
	ga_concat(&ga, (char_u *)"|");
    }
    
    
    ga_concat(&ga, (char_u *)"cal foreground()|if &im|star|en|redr|f<CR>");
    ga_append(&ga, NUL);
    return ga.ga_data;
}


    static char_u *
serverMakeName(char_u *arg, char *cmd)
{
    char_u *p;

    if (arg != NULL && *arg != NUL)
	p = vim_strsave_up(arg);
    else
    {
	p = vim_strsave_up(gettail((char_u *)cmd));
	
	if (p != NULL && vim_strchr(p, '.') != NULL)
	    *vim_strchr(p, '.') = NUL;
    }
    return p;
}
#endif 

#if defined(FEAT_CLIENTSERVER) && defined(FEAT_X11)
    static void
make_connection(void)
{
    if (X_DISPLAY == NULL
# ifdef FEAT_GUI
	    && !gui.in_use
# endif
	    )
    {
	x_force_connect = TRUE;
	setup_term_clip();
	x_force_connect = FALSE;
    }
}

    static int
check_connection(void)
{
    make_connection();
    if (X_DISPLAY == NULL)
    {
	emsg(_(e_no_connection_to_x_server));
	return FAIL;
    }
    return OK;
}
#endif

#ifdef FEAT_CLIENTSERVER
    static void
remote_common(typval_T *argvars, typval_T *rettv, int expr)
{
    char_u	*server_name;
    char_u	*keys;
    char_u	*r = NULL;
    char_u	buf[NUMBUFLEN];
    int		timeout = 0;
# ifdef MSWIN
    HWND	w;
# else
    Window	w;
# endif

    if (check_restricted() || check_secure())
	return;

# ifdef FEAT_X11
    if (check_connection() == FAIL)
	return;
# endif
    if (argvars[2].v_type != VAR_UNKNOWN
	    && argvars[3].v_type != VAR_UNKNOWN)
	timeout = tv_get_number(&argvars[3]);

    server_name = tv_get_string_chk(&argvars[0]);
    if (server_name == NULL)
	return;		
    keys = tv_get_string_buf(&argvars[1], buf);
# ifdef MSWIN
    if (serverSendToVim(server_name, keys, &r, &w, expr, timeout, TRUE) < 0)
# else
    if (serverSendToVim(X_DISPLAY, server_name, keys, &r, &w, expr, timeout,
								  0, TRUE) < 0)
# endif
    {
	if (r != NULL)
	{
	    emsg((char *)r);	
	    vim_free(r);
	}
	else
	    semsg(_(e_unable_to_send_to_str), server_name);
	return;
    }

    rettv->vval.v_string = r;

    if (argvars[2].v_type != VAR_UNKNOWN)
    {
	dictitem_T	v;
	char_u		str[30];
	char_u		*idvar;

	idvar = tv_get_string_chk(&argvars[2]);
	if (idvar != NULL && *idvar != NUL)
	{
	    sprintf((char *)str, PRINTF_HEX_LONG_U, (long_u)w);
	    v.di_tv.v_type = VAR_STRING;
	    v.di_tv.vval.v_string = vim_strsave(str);
	    set_var(idvar, &v.di_tv, FALSE);
	    vim_free(v.di_tv.vval.v_string);
	}
    }
}
#endif

#if defined(FEAT_EVAL) || defined(PROTO)

    void
f_remote_expr(typval_T *argvars UNUSED, typval_T *rettv)
{
    rettv->v_type = VAR_STRING;
    rettv->vval.v_string = NULL;

#ifdef FEAT_CLIENTSERVER
    if (in_vim9script()
	    && (check_for_string_arg(argvars, 0) == FAIL
		|| check_for_string_arg(argvars, 1) == FAIL
		|| check_for_opt_string_arg(argvars, 2) == FAIL
		|| (argvars[2].v_type != VAR_UNKNOWN
		    && check_for_opt_number_arg(argvars, 3) == FAIL)))
	return;

    remote_common(argvars, rettv, TRUE);
#endif
}


    void
f_remote_foreground(typval_T *argvars UNUSED, typval_T *rettv UNUSED)
{
#ifdef FEAT_CLIENTSERVER
    if (in_vim9script() && check_for_string_arg(argvars, 0) == FAIL)
	return;

# ifdef MSWIN
    
    {
	char_u	*server_name = tv_get_string_chk(&argvars[0]);

	if (server_name != NULL)
	    serverForeground(server_name);
    }
# else
    
    argvars[1].v_type = VAR_STRING;
    argvars[1].vval.v_string = vim_strsave((char_u *)"foreground()");
    argvars[2].v_type = VAR_UNKNOWN;
    rettv->v_type = VAR_STRING;
    rettv->vval.v_string = NULL;
    remote_common(argvars, rettv, TRUE);
    vim_free(argvars[1].vval.v_string);
# endif
#endif
}

    void
f_remote_peek(typval_T *argvars UNUSED, typval_T *rettv)
{
#ifdef FEAT_CLIENTSERVER
    dictitem_T	v;
    char_u	*s = NULL;
# ifdef MSWIN
    long_u	n = 0;
# endif
    char_u	*serverid;

    rettv->vval.v_number = -1;
    if (check_restricted() || check_secure())
	return;

    if (in_vim9script()
	    && (check_for_string_arg(argvars, 0) == FAIL
		|| check_for_opt_string_arg(argvars, 1) == FAIL))
	return;

    serverid = tv_get_string_chk(&argvars[0]);
    if (serverid == NULL)
	return;		
# ifdef MSWIN
    sscanf((const char *)serverid, SCANF_HEX_LONG_U, &n);
    if (n == 0)
	rettv->vval.v_number = -1;
    else
    {
	s = serverGetReply((HWND)n, FALSE, FALSE, FALSE, 0);
	rettv->vval.v_number = (s != NULL);
    }
# else
    if (check_connection() == FAIL)
	return;

    rettv->vval.v_number = serverPeekReply(X_DISPLAY,
						serverStrToWin(serverid), &s);
# endif

    if (argvars[1].v_type != VAR_UNKNOWN && rettv->vval.v_number > 0)
    {
	char_u		*retvar;

	v.di_tv.v_type = VAR_STRING;
	v.di_tv.vval.v_string = vim_strsave(s);
	retvar = tv_get_string_chk(&argvars[1]);
	if (retvar != NULL)
	    set_var(retvar, &v.di_tv, FALSE);
	vim_free(v.di_tv.vval.v_string);
    }
#else
    rettv->vval.v_number = -1;
#endif
}

    void
f_remote_read(typval_T *argvars UNUSED, typval_T *rettv)
{
    char_u	*r = NULL;

#ifdef FEAT_CLIENTSERVER
    char_u	*serverid;

    if (in_vim9script()
	    && (check_for_string_arg(argvars, 0) == FAIL
		|| check_for_opt_number_arg(argvars, 1) == FAIL))
	return;

    serverid = tv_get_string_chk(&argvars[0]);
    if (serverid != NULL && !check_restricted() && !check_secure())
    {
	int timeout = 0;
# ifdef MSWIN
	
	long_u		n = 0;
# endif

	if (argvars[1].v_type != VAR_UNKNOWN)
	    timeout = tv_get_number(&argvars[1]);

# ifdef MSWIN
	sscanf((char *)serverid, SCANF_HEX_LONG_U, &n);
	if (n != 0)
	    r = serverGetReply((HWND)n, FALSE, TRUE, TRUE, timeout);
	if (r == NULL)
# else
	if (check_connection() == FAIL
		|| serverReadReply(X_DISPLAY, serverStrToWin(serverid),
						       &r, FALSE, timeout) < 0)
# endif
	    emsg(_(e_unable_to_read_server_reply));
    }
#endif
    rettv->v_type = VAR_STRING;
    rettv->vval.v_string = r;
}


    void
f_remote_send(typval_T *argvars UNUSED, typval_T *rettv)
{
    rettv->v_type = VAR_STRING;
    rettv->vval.v_string = NULL;

#ifdef FEAT_CLIENTSERVER
    if (in_vim9script()
	    && (check_for_string_arg(argvars, 0) == FAIL
		|| check_for_string_arg(argvars, 1) == FAIL
		|| check_for_opt_string_arg(argvars, 2) == FAIL))
	return;

    remote_common(argvars, rettv, FALSE);
#endif
}


    void
f_remote_startserver(typval_T *argvars UNUSED, typval_T *rettv UNUSED)
{
#ifdef FEAT_CLIENTSERVER
    if (check_for_nonempty_string_arg(argvars, 0) == FAIL)
	return;

    if (serverName != NULL)
    {
	emsg(_(e_already_started_server));
	return;
    }

    char_u *server = tv_get_string_chk(&argvars[0]);
# ifdef FEAT_X11
    if (check_connection() == OK)
	serverRegisterName(X_DISPLAY, server);
# else
    serverSetName(server);
# endif

#else
    emsg(_(e_clientserver_feature_not_available));
#endif
}

    void
f_server2client(typval_T *argvars UNUSED, typval_T *rettv)
{
#ifdef FEAT_CLIENTSERVER
    char_u	buf[NUMBUFLEN];
    char_u	*server;
    char_u	*reply;

    rettv->vval.v_number = -1;
    if (check_restricted() || check_secure())
	return;

    if (in_vim9script()
	    && (check_for_string_arg(argvars, 0) == FAIL
		|| check_for_string_arg(argvars, 1) == FAIL))
	return;

    server = tv_get_string_chk(&argvars[0]);
    reply = tv_get_string_buf_chk(&argvars[1], buf);
    if (server == NULL || reply == NULL)
	return;

# ifdef FEAT_X11
    if (check_connection() == FAIL)
	return;
# endif

    if (serverSendReply(server, reply) < 0)
    {
	emsg(_(e_unable_to_send_to_client));
	return;
    }
    rettv->vval.v_number = 0;
#else
    rettv->vval.v_number = -1;
#endif
}

    void
f_serverlist(typval_T *argvars UNUSED, typval_T *rettv)
{
    char_u	*r = NULL;

#ifdef FEAT_CLIENTSERVER
# ifdef MSWIN
    r = serverGetVimNames();
# else
    make_connection();
    if (X_DISPLAY != NULL)
	r = serverGetVimNames(X_DISPLAY);
# endif
#endif
    rettv->v_type = VAR_STRING;
    rettv->vval.v_string = r;
}
#endif
