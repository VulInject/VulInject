

#include "vim.h"

#if defined(FEAT_CSCOPE) || defined(PROTO)

#include <sys/types.h>
#include <sys/stat.h>
#if defined(UNIX)
# include <sys/wait.h>
#endif

#if defined (MSWIN)
# ifndef WIN32_LEAN_AND_MEAN
#  define WIN32_LEAN_AND_MEAN
# endif
# include <windows.h>
#endif

#define CSCOPE_SUCCESS		0
#define CSCOPE_FAILURE		-1

#define	CSCOPE_DBFILE		"cscope.out"
#define	CSCOPE_PROMPT		">> "



typedef struct {
    char *  name;
    int     (*func)(exarg_T *eap);
    char *  help;
    char *  usage;
    int	    cansplit;		
} cscmd_T;

typedef struct csi {
    char *	    fname;	
    char *	    ppath;	
    char *	    flags;	
#if defined(UNIX)
    pid_t	    pid;	
    dev_t	    st_dev;	
    ino_t	    st_ino;	
#else
# if defined(MSWIN)
    DWORD	    pid;	
    HANDLE	    hProc;	
    DWORD	    nVolume;	
    DWORD	    nIndexHigh;	
    DWORD	    nIndexLow;
# endif
#endif

    FILE *	    fr_fp;	
    FILE *	    to_fp;	
} csinfo_T;

typedef enum { Add, Find, Help, Kill, Reset, Show } csid_e;

typedef enum {
    Store,
    Get,
    Free,
    Print
} mcmd_e;

static int	    cs_add(exarg_T *eap);
static int	    cs_add_common(char *, char *, char *);
static int	    cs_check_for_connections(void);
static int	    cs_check_for_tags(void);
static int	    cs_cnt_connections(void);
static int	    cs_create_connection(int i);
#ifdef FEAT_QUICKFIX
static void	    cs_file_results(FILE *, int *);
#endif
static void	    cs_fill_results(char *, int , int *, char ***,
			char ***, int *);
static int	    cs_find(exarg_T *eap);
static int	    cs_find_common(char *opt, char *pat, int, int, int, char_u *cmdline);
static int	    cs_help(exarg_T *eap);
static int	    cs_insert_filelist(char *, char *, char *,
			stat_T *);
static int	    cs_kill(exarg_T *eap);
static void	    cs_kill_execute(int, char *);
static cscmd_T *    cs_lookup_cmd(exarg_T *eap);
static char *	    cs_make_vim_style_matches(char *, char *,
			char *, char *);
static char *	    cs_manage_matches(char **, char **, int, mcmd_e);
static void	    cs_print_tags_priv(char **, char **, int);
static int	    cs_read_prompt(int);
static void	    cs_release_csp(int, int freefnpp);
static int	    cs_reset(exarg_T *eap);
static char *	    cs_resolve_file(int, char *);
static int	    cs_show(exarg_T *eap);


static csinfo_T *   csinfo = NULL;
static int	    csinfo_size = 0;	
					

static int	    eap_arg_len;    
				    
static cscmd_T	    cs_cmds[] =
{
    { "add",	cs_add,
		N_("Add a new database"),     "add file|dir [pre-path] [flags]", 0 },
    { "find",	cs_find,
		N_("Query for a pattern"),    "find a|c|d|e|f|g|i|s|t name", 1 },
    { "help",	cs_help,
		N_("Show this message"),      "help", 0 },
    { "kill",	cs_kill,
		N_("Kill a connection"),      "kill #", 0 },
    { "reset",	cs_reset,
		N_("Reinit all connections"), "reset", 0 },
    { "show",	cs_show,
		N_("Show connections"),       "show", 0 },
    { NULL, NULL, NULL, NULL, 0 }
};

    static void
cs_usage_msg(csid_e x)
{
    (void)semsg(_(e_usage_cscope_str), cs_cmds[(int)x].usage);
}

static enum
{
    EXP_CSCOPE_SUBCMD,	
    EXP_SCSCOPE_SUBCMD,	
    EXP_CSCOPE_FIND,	
    EXP_CSCOPE_KILL	
} expand_what;


    char_u *
get_cscope_name(expand_T *xp UNUSED, int idx)
{
    int		current_idx;
    int		i;

    switch (expand_what)
    {
    case EXP_CSCOPE_SUBCMD:
	
	
	return (char_u *)cs_cmds[idx].name;
    case EXP_SCSCOPE_SUBCMD:
	
	
	for (i = 0, current_idx = 0; cs_cmds[i].name != NULL; i++)
	    if (cs_cmds[i].cansplit)
		if (current_idx++ == idx)
		    break;
	return (char_u *)cs_cmds[i].name;
    case EXP_CSCOPE_FIND:
	{
	    const char *query_type[] =
	    {
		"a", "c", "d", "e", "f", "g", "i", "s", "t", NULL
	    };

	    
	    
	    
	    
	    return (char_u *)query_type[idx];
	}
    case EXP_CSCOPE_KILL:
	{
	    static char	connection[5];

	    
	    
	    
	    
	    for (i = 0, current_idx = 0; i < csinfo_size; i++)
	    {
		if (csinfo[i].fname == NULL)
		    continue;
		if (current_idx++ == idx)
		{
		    vim_snprintf(connection, sizeof(connection), "%d", i);
		    return (char_u *)connection;
		}
	    }
	    return (current_idx == idx && idx > 0) ? (char_u *)"-1" : NULL;
	}
    default:
	return NULL;
    }
}


    void
set_context_in_cscope_cmd(
    expand_T	*xp,
    char_u	*arg,
    cmdidx_T	cmdidx)
{
    char_u	*p;

    
    xp->xp_context = EXPAND_CSCOPE;
    xp->xp_pattern = arg;
    expand_what = (cmdidx == CMD_scscope)
			? EXP_SCSCOPE_SUBCMD : EXP_CSCOPE_SUBCMD;

    if (*arg == NUL)
	return;

    
    p = skiptowhite(arg);
    if (*p == NUL)
	return;

    
    xp->xp_pattern = skipwhite(p);
    if (*skiptowhite(xp->xp_pattern) != NUL)
	xp->xp_context = EXPAND_NOTHING;
    else if (STRNICMP(arg, "add", p - arg) == 0)
	xp->xp_context = EXPAND_FILES;
    else if (STRNICMP(arg, "kill", p - arg) == 0)
	expand_what = EXP_CSCOPE_KILL;
    else if (STRNICMP(arg, "find", p - arg) == 0)
	expand_what = EXP_CSCOPE_FIND;
    else
	xp->xp_context = EXPAND_NOTHING;
}


    static void
do_cscope_general(
    exarg_T	*eap,
    int		make_split UNUSED) 
{
    cscmd_T *cmdp;

    if ((cmdp = cs_lookup_cmd(eap)) == NULL)
    {
	cs_help(eap);
	return;
    }

    if (make_split)
    {
	if (!cmdp->cansplit)
	{
	    (void)msg_puts(_("This cscope command does not support splitting the window.\n"));
	    return;
	}
	postponed_split = -1;
	postponed_split_flags = cmdmod.cmod_split;
	postponed_split_tab = cmdmod.cmod_tab;
    }

    cmdp->func(eap);

    postponed_split_flags = 0;
    postponed_split_tab = 0;
}


    void
ex_cscope(exarg_T *eap)
{
    do_cscope_general(eap, FALSE);
}


    void
ex_scscope(exarg_T *eap)
{
    do_cscope_general(eap, TRUE);
}


    void
ex_cstag(exarg_T *eap)
{
    int ret = FALSE;

    if (*eap->arg == NUL)
    {
	(void)emsg(_(e_usage_cstag_ident));
	return;
    }

    switch (p_csto)
    {
    case 0 :
	if (cs_check_for_connections())
	{
	    ret = cs_find_common("g", (char *)(eap->arg), eap->forceit, FALSE,
						       FALSE, *eap->cmdlinep);
	    if (ret == FALSE)
	    {
		cs_free_tags();
		if (msg_col)
		    msg_putchar('\n');

		if (cs_check_for_tags())
		    ret = do_tag(eap->arg, DT_JUMP, 0, eap->forceit, FALSE);
	    }
	}
	else if (cs_check_for_tags())
	{
	    ret = do_tag(eap->arg, DT_JUMP, 0, eap->forceit, FALSE);
	}
	break;
    case 1 :
	if (cs_check_for_tags())
	{
	    ret = do_tag(eap->arg, DT_JUMP, 0, eap->forceit, FALSE);
	    if (ret == FALSE)
	    {
		if (msg_col)
		    msg_putchar('\n');

		if (cs_check_for_connections())
		{
		    ret = cs_find_common("g", (char *)(eap->arg), eap->forceit,
						FALSE, FALSE, *eap->cmdlinep);
		    if (ret == FALSE)
			cs_free_tags();
		}
	    }
	}
	else if (cs_check_for_connections())
	{
	    ret = cs_find_common("g", (char *)(eap->arg), eap->forceit, FALSE,
						       FALSE, *eap->cmdlinep);
	    if (ret == FALSE)
		cs_free_tags();
	}
	break;
    default :
	break;
    }

    if (!ret)
    {
	(void)emsg(_(e_cstag_tag_not_founc));
#if defined(FEAT_QUICKFIX)
	g_do_tagpreview = 0;
#endif
    }

}



    int
cs_fgets(char_u *buf, int size)
{
    char *p;

    if ((p = cs_manage_matches(NULL, NULL, -1, Get)) == NULL)
	return TRUE;
    vim_strncpy(buf, (char_u *)p, size - 1);

    return FALSE;
}



    void
cs_free_tags(void)
{
    cs_manage_matches(NULL, NULL, -1, Free);
}



    void
cs_print_tags(void)
{
    cs_manage_matches(NULL, NULL, -1, Print);
}



#if defined(FEAT_EVAL) || defined(PROTO)
    static int
cs_connection(int num, char_u *dbpath, char_u *ppath)
{
    int i;

    if (num < 0 || num > 4 || (num > 0 && !dbpath))
	return FALSE;

    for (i = 0; i < csinfo_size; i++)
    {
	if (!csinfo[i].fname)
	    continue;

	if (num == 0)
	    return TRUE;

	switch (num)
	{
	case 1:
	    if (strstr(csinfo[i].fname, (char *)dbpath))
		return TRUE;
	    break;
	case 2:
	    if (strcmp(csinfo[i].fname, (char *)dbpath) == 0)
		return TRUE;
	    break;
	case 3:
	    if (strstr(csinfo[i].fname, (char *)dbpath)
		    && ((!ppath && !csinfo[i].ppath)
			|| (ppath
			    && csinfo[i].ppath
			    && strstr(csinfo[i].ppath, (char *)ppath))))
		return TRUE;
	    break;
	case 4:
	    if ((strcmp(csinfo[i].fname, (char *)dbpath) == 0)
		    && ((!ppath && !csinfo[i].ppath)
			|| (ppath
			    && csinfo[i].ppath
			    && (strcmp(csinfo[i].ppath, (char *)ppath) == 0))))
		return TRUE;
	    break;
	}
    }

    return FALSE;
}

#endif





    static int
cs_add(exarg_T *eap UNUSED)
{
    char *fname, *ppath, *flags = NULL;

    if ((fname = strtok((char *)NULL, (const char *)" ")) == NULL)
    {
	cs_usage_msg(Add);
	return CSCOPE_FAILURE;
    }
    if ((ppath = strtok((char *)NULL, (const char *)" ")) != NULL)
	flags = strtok((char *)NULL, (const char *)" ");

    return cs_add_common(fname, ppath, flags);
}

    static void
cs_stat_emsg(char *fname)
{
    int err = errno;
    (void)semsg(_(e_stat_str_error_nr), fname, err);
}



    static int
cs_add_common(
    char *arg1,	    
    char *arg2,	    
    char *flags)
{
    stat_T	statbuf;
    int		ret;
    char	*fname = NULL;
    char	*fname2 = NULL;
    char	*ppath = NULL;
    int		i;
    int		len;
    size_t	usedlen = 0;
    char_u	*fbuf = NULL;

    
    if ((fname = alloc(MAXPATHL + 1)) == NULL)
	goto add_err;

    expand_env((char_u *)arg1, (char_u *)fname, MAXPATHL);
    len = (int)STRLEN(fname);
    fbuf = (char_u *)fname;
    (void)modify_fname((char_u *)":p", FALSE, &usedlen,
					      (char_u **)&fname, &fbuf, &len);
    if (fname == NULL)
	goto add_err;
    fname = (char *)vim_strnsave((char_u *)fname, len);
    vim_free(fbuf);

    ret = mch_stat(fname, &statbuf);
    if (ret < 0)
    {
staterr:
	if (p_csverbose)
	    cs_stat_emsg(fname);
	goto add_err;
    }

    
    if (arg2 != NULL)
    {
	stat_T	    statbuf2;

	if ((ppath = alloc(MAXPATHL + 1)) == NULL)
	    goto add_err;

	expand_env((char_u *)arg2, (char_u *)ppath, MAXPATHL);
	ret = mch_stat(ppath, &statbuf2);
	if (ret < 0)
	    goto staterr;
    }

    
    if (S_ISDIR(statbuf.st_mode))
    {
	fname2 = alloc(strlen(CSCOPE_DBFILE) + strlen(fname) + 2);
	if (fname2 == NULL)
	    goto add_err;

	while (fname[strlen(fname)-1] == '/'
#ifdef MSWIN
		|| fname[strlen(fname)-1] == '\\'
#endif
		)
	{
	    fname[strlen(fname)-1] = '\0';
	    if (fname[0] == '\0')
		break;
	}
	if (fname[0] == '\0')
	    (void)sprintf(fname2, "/%s", CSCOPE_DBFILE);
	else
	    (void)sprintf(fname2, "%s/%s", fname, CSCOPE_DBFILE);

	ret = mch_stat(fname2, &statbuf);
	if (ret < 0)
	{
	    if (p_csverbose)
		cs_stat_emsg(fname2);
	    goto add_err;
	}

	i = cs_insert_filelist(fname2, ppath, flags, &statbuf);
    }
    else if (S_ISREG(statbuf.st_mode) || S_ISLNK(statbuf.st_mode))
    {
	i = cs_insert_filelist(fname, ppath, flags, &statbuf);
    }
    else
    {
	if (p_csverbose)
	    (void)semsg(_(e_str_is_not_directory_or_valid_cscope_database),
									fname);
	goto add_err;
    }

    if (i != -1)
    {
	if (cs_create_connection(i) == CSCOPE_FAILURE
		|| cs_read_prompt(i) == CSCOPE_FAILURE)
	{
	    cs_release_csp(i, TRUE);
	    goto add_err;
	}

	if (p_csverbose)
	{
	    msg_clr_eos();
	    (void)smsg_attr(HL_ATTR(HLF_R),
			    _("Added cscope database %s"),
			    csinfo[i].fname);
	}
    }

    vim_free(fname);
    vim_free(fname2);
    vim_free(ppath);
    return CSCOPE_SUCCESS;

add_err:
    vim_free(fname2);
    vim_free(fname);
    vim_free(ppath);
    return CSCOPE_FAILURE;
}


    static int
cs_check_for_connections(void)
{
    return (cs_cnt_connections() > 0);
}


    static int
cs_check_for_tags(void)
{
    return (p_tags[0] != NUL && curbuf->b_p_tags != NULL);
}



    static int
cs_cnt_connections(void)
{
    int i;
    int cnt = 0;

    for (i = 0; i < csinfo_size; i++)
	if (csinfo[i].fname != NULL)
	    cnt++;
    return cnt;
}

    static void
cs_reading_emsg(
    int idx)	
{
    semsg(_(e_error_reading_cscope_connection_nr), idx);
}

#define	CSREAD_BUFSIZE	2048

    static int
cs_cnt_matches(int idx)
{
    char *stok;
    char *buf;
    int nlines = 0;

    buf = alloc(CSREAD_BUFSIZE);
    if (buf == NULL)
	return 0;
    for (;;)
    {
	if (!fgets(buf, CSREAD_BUFSIZE, csinfo[idx].fr_fp))
	{
	    if (feof(csinfo[idx].fr_fp))
		errno = EIO;

	    cs_reading_emsg(idx);

	    vim_free(buf);
	    return -1;
	}

	
	if (strstr((const char *)buf, "Unable to search database") != NULL)
	    break;
	if ((stok = strtok(buf, (const char *)" ")) == NULL)
	    continue;
	if (strstr((const char *)stok, "cscope:") == NULL)
	    continue;

	if ((stok = strtok(NULL, (const char *)" ")) == NULL)
	    continue;
	nlines = atoi(stok);
	if (nlines < 0)
	{
	    nlines = 0;
	    break;
	}

	if ((stok = strtok(NULL, (const char *)" ")) == NULL)
	    continue;
	if (strncmp((const char *)stok, "lines", 5))
	    continue;

	break;
    }

    vim_free(buf);
    return nlines;
}



    static char *
cs_create_cmd(char *csoption, char *pattern)
{
    char *cmd;
    short search;
    char *pat;

    switch (csoption[0])
    {
    case '0' : case 's' :
	search = 0;
	break;
    case '1' : case 'g' :
	search = 1;
	break;
    case '2' : case 'd' :
	search = 2;
	break;
    case '3' : case 'c' :
	search = 3;
	break;
    case '4' : case 't' :
	search = 4;
	break;
    case '6' : case 'e' :
	search = 6;
	break;
    case '7' : case 'f' :
	search = 7;
	break;
    case '8' : case 'i' :
	search = 8;
	break;
    case '9' : case 'a' :
	search = 9;
	break;
    default :
	(void)emsg(_(e_unknown_cscope_search_type));
	cs_usage_msg(Find);
	return NULL;
    }

    
    
    pat = pattern;
    if (search != 4 && search != 6)
	while VIM_ISWHITE(*pat)
	    ++pat;

    if ((cmd = alloc(strlen(pat) + 2)) == NULL)
	return NULL;

    (void)sprintf(cmd, "%d%s", search, pat);

    return cmd;
}



    static int
cs_create_connection(int i)
{
#ifdef UNIX
    int		to_cs[2], from_cs[2];
#endif
    int		cmdlen;
    int		len;
    char	*prog, *cmd, *ppath = NULL;
#ifdef MSWIN
    int		fd;
    SECURITY_ATTRIBUTES sa;
    PROCESS_INFORMATION pi;
    STARTUPINFO si;
    BOOL	pipe_stdin = FALSE, pipe_stdout = FALSE;
    HANDLE	stdin_rd, stdout_rd;
    HANDLE	stdout_wr, stdin_wr;
    BOOL	created;
#endif

#if defined(UNIX)
    
    to_cs[0] = to_cs[1] = from_cs[0] = from_cs[1] = -1;
    if (pipe(to_cs) < 0 || pipe(from_cs) < 0)
    {
	(void)emsg(_(e_could_not_create_cscope_pipes));
err_closing:
	if (to_cs[0] != -1)
	    (void)close(to_cs[0]);
	if (to_cs[1] != -1)
	    (void)close(to_cs[1]);
	if (from_cs[0] != -1)
	    (void)close(from_cs[0]);
	if (from_cs[1] != -1)
	    (void)close(from_cs[1]);
	return CSCOPE_FAILURE;
    }

    if ((csinfo[i].pid = fork()) == -1)
    {
	(void)emsg(_(e_could_not_fork_for_cscope));
	goto err_closing;
    }
    else if (csinfo[i].pid == 0)	
    {
	char **argv = NULL;
	int argc = 0;

	if (dup2(to_cs[0], STDIN_FILENO) == -1)
	    PERROR("cs_create_connection 1");
	if (dup2(from_cs[1], STDOUT_FILENO) == -1)
	    PERROR("cs_create_connection 2");
	if (dup2(from_cs[1], STDERR_FILENO) == -1)
	    PERROR("cs_create_connection 3");

	
	(void)close(to_cs[1]);
	(void)close(from_cs[0]);
#else
	
	
	sa.nLength = sizeof(SECURITY_ATTRIBUTES);
	sa.bInheritHandle = TRUE;
	sa.lpSecurityDescriptor = NULL;

	if (!(pipe_stdin = CreatePipe(&stdin_rd, &stdin_wr, &sa, 0))
		|| !(pipe_stdout = CreatePipe(&stdout_rd, &stdout_wr, &sa, 0)))
	{
	    (void)emsg(_(e_could_not_create_cscope_pipes));
err_closing:
	    if (pipe_stdin)
	    {
		CloseHandle(stdin_rd);
		CloseHandle(stdin_wr);
	    }
	    if (pipe_stdout)
	    {
		CloseHandle(stdout_rd);
		CloseHandle(stdout_wr);
	    }
	    return CSCOPE_FAILURE;
	}
#endif
	
	if ((prog = alloc(MAXPATHL + 1)) == NULL)
	{
#ifdef UNIX
	    exit(EXIT_FAILURE);
#else
	    
	    goto err_closing;
#endif
	}
	expand_env(p_csprg, (char_u *)prog, MAXPATHL);

	
	cmdlen = (int)(strlen(prog) + strlen(csinfo[i].fname) + 32);
	if (csinfo[i].ppath)
	{
	    
	    if ((ppath = alloc(MAXPATHL + 1)) == NULL)
	    {
		vim_free(prog);
#ifdef UNIX
		exit(EXIT_FAILURE);
#else
		
		goto err_closing;
#endif
	    }
	    expand_env((char_u *)csinfo[i].ppath, (char_u *)ppath, MAXPATHL);

	    cmdlen += (int)strlen(ppath);
	}

	if (csinfo[i].flags)
	    cmdlen += (int)strlen(csinfo[i].flags);

	if ((cmd = alloc(cmdlen)) == NULL)
	{
	    vim_free(prog);
	    vim_free(ppath);
#ifdef UNIX
	    exit(EXIT_FAILURE);
#else
	    
	    goto err_closing;
#endif
	}

	
#ifdef UNIX
	vim_snprintf(cmd, cmdlen, "/bin/sh -c \"exec %s -dl -f %s",
							prog, csinfo[i].fname);
#else
	vim_snprintf(cmd, cmdlen, "%s -dl -f %s", prog, csinfo[i].fname);
#endif
	if (csinfo[i].ppath != NULL)
	{
	    len = (int)STRLEN(cmd);
	    vim_snprintf(cmd + len, cmdlen - len, " -P%s", csinfo[i].ppath);
	}
	if (csinfo[i].flags != NULL)
	{
	    len = (int)STRLEN(cmd);
	    vim_snprintf(cmd + len, cmdlen - len, " %s", csinfo[i].flags);
	}
# ifdef UNIX
	
	STRCAT(cmd, "\"");

	
	vim_free(prog);
# endif
	vim_free(ppath);

#if defined(UNIX)
# if defined(HAVE_SETSID) || defined(HAVE_SETPGID)
	
#  if defined(HAVE_SETSID)
	(void)setsid();
#  else
	if (setpgid(0, 0) == -1)
	    PERROR(_("cs_create_connection setpgid failed"));
#  endif
# endif
	if (build_argv_from_string((char_u *)cmd, &argv, &argc) == FAIL)
	    exit(EXIT_FAILURE);

	if (execvp(argv[0], argv) == -1)
	    PERROR(_("cs_create_connection exec failed"));

	exit(127);
	
    }
    else	
    {
	
	if ((csinfo[i].to_fp = fdopen(to_cs[1], "w")) == NULL)
	    PERROR(_("cs_create_connection: fdopen for to_fp failed"));
	if ((csinfo[i].fr_fp = fdopen(from_cs[0], "r")) == NULL)
	    PERROR(_("cs_create_connection: fdopen for fr_fp failed"));

	
	(void)close(to_cs[0]);
	(void)close(from_cs[1]);
    }
#else
    
    
    GetStartupInfo(&si);
    si.dwFlags = STARTF_USESTDHANDLES | STARTF_USESHOWWINDOW;
    si.wShowWindow = SW_HIDE;  
    si.hStdOutput = stdout_wr;
    si.hStdError  = stdout_wr;
    si.hStdInput  = stdin_rd;
    created = CreateProcess(NULL, cmd, NULL, NULL, TRUE, CREATE_NEW_CONSOLE,
							NULL, NULL, &si, &pi);
    vim_free(prog);
    vim_free(cmd);

    if (!created)
    {
	PERROR(_("cs_create_connection exec failed"));
	(void)emsg(_(e_could_not_spawn_cscope_process));
	goto err_closing;
    }
    
    csinfo[i].pid = pi.dwProcessId;
    csinfo[i].hProc = pi.hProcess;
    CloseHandle(pi.hThread);

    
    if (((fd = _open_osfhandle((intptr_t)stdin_wr,
						      _O_TEXT|_O_APPEND)) < 0)
	    || ((csinfo[i].to_fp = _fdopen(fd, "w")) == NULL))
	PERROR(_("cs_create_connection: fdopen for to_fp failed"));
    if (((fd = _open_osfhandle((intptr_t)stdout_rd,
						      _O_TEXT|_O_RDONLY)) < 0)
	    || ((csinfo[i].fr_fp = _fdopen(fd, "r")) == NULL))
	PERROR(_("cs_create_connection: fdopen for fr_fp failed"));

    
    CloseHandle(stdin_rd);
    CloseHandle(stdout_wr);

#endif 

    return CSCOPE_SUCCESS;
}



    static int
cs_find(exarg_T *eap)
{
    char *opt, *pat;
    int i;

    if (cs_check_for_connections() == FALSE)
    {
	(void)emsg(_(e_no_cscope_connections));
	return FALSE;
    }

    if ((opt = strtok((char *)NULL, (const char *)" ")) == NULL)
    {
	cs_usage_msg(Find);
	return FALSE;
    }

    pat = opt + strlen(opt) + 1;
    if (pat >= (char *)eap->arg + eap_arg_len)
    {
	cs_usage_msg(Find);
	return FALSE;
    }

    
    for (i = 0; i < eap_arg_len; ++i)
	if (NUL == eap->arg[i])
	    eap->arg[i] = ' ';

    return cs_find_common(opt, pat, eap->forceit, TRUE,
				  eap->cmdidx == CMD_lcscope, *eap->cmdlinep);
}



    static int
cs_find_common(
    char *opt,
    char *pat,
    int forceit,
    int verbose,
    int	use_ll UNUSED,
    char_u *cmdline UNUSED)
{
    int i;
    char *cmd;
    int *nummatches;
    int totmatches;
#ifdef FEAT_QUICKFIX
    char cmdletter;
    char *qfpos;

    
    switch (opt[0])
    {
    case '0' :
	cmdletter = 's';
	break;
    case '1' :
	cmdletter = 'g';
	break;
    case '2' :
	cmdletter = 'd';
	break;
    case '3' :
	cmdletter = 'c';
	break;
    case '4' :
	cmdletter = 't';
	break;
    case '6' :
	cmdletter = 'e';
	break;
    case '7' :
	cmdletter = 'f';
	break;
    case '8' :
	cmdletter = 'i';
	break;
    case '9' :
	cmdletter = 'a';
	break;
    default :
	cmdletter = opt[0];
    }

    qfpos = (char *)vim_strchr(p_csqf, cmdletter);
    if (qfpos != NULL)
    {
	qfpos++;
	
	if (strchr(CSQF_FLAGS, *qfpos) == NULL)
	{
	    (void)semsg(_(e_invalid_cscopequickfix_flag_chr_for_chr),
							 *qfpos, *(qfpos - 1));
	    return FALSE;
	}

	if (*qfpos != '0'
		&& apply_autocmds(EVENT_QUICKFIXCMDPRE, (char_u *)"cscope",
					       curbuf->b_fname, TRUE, curbuf))
	{
# ifdef FEAT_EVAL
	    if (aborting())
		return FALSE;
# endif
	}
    }
#endif

    
    cmd = cs_create_cmd(opt, pat);
    if (cmd == NULL)
	return FALSE;

    nummatches = ALLOC_MULT(int, csinfo_size);
    if (nummatches == NULL)
    {
	vim_free(cmd);
	return FALSE;
    }

    
    
    for (i = 0; i < csinfo_size; i++)
	nummatches[i] = 0;
    totmatches = 0;
    for (i = 0; i < csinfo_size; i++)
    {
	if (csinfo[i].fname == NULL || csinfo[i].to_fp == NULL)
	    continue;

	
	(void)fprintf(csinfo[i].to_fp, "%s\n", cmd);
	(void)fflush(csinfo[i].to_fp);

	nummatches[i] = cs_cnt_matches(i);

	if (nummatches[i] > -1)
	    totmatches += nummatches[i];

	if (nummatches[i] == 0)
	    (void)cs_read_prompt(i);
    }
    vim_free(cmd);

    if (totmatches == 0)
    {
	if (verbose)
	    (void)semsg(_(e_no_matches_found_for_cscope_query_str_of_str),
								     opt, pat);
	vim_free(nummatches);
	return FALSE;
    }

#ifdef FEAT_QUICKFIX
    if (qfpos != NULL && *qfpos != '0' && totmatches > 0)
    {
	
	FILE	    *f;
	char_u	    *tmp = vim_tempname('c', TRUE);
	qf_info_T   *qi = NULL;
	win_T	    *wp = NULL;

	f = mch_fopen((char *)tmp, "w");
	if (f == NULL)
	    semsg(_(e_cant_open_file_str), tmp);
	else
	{
	    cs_file_results(f, nummatches);
	    fclose(f);
	    if (use_ll)	    
		wp = curwin;
	    
	    if (qf_init(wp, tmp, (char_u *)"%f%*\\t%l%*\\t%m",
					  *qfpos == '-', cmdline, NULL) > 0)
	    {
		if (postponed_split != 0)
		{
		    (void)win_split(postponed_split > 0 ? postponed_split : 0,
						       postponed_split_flags);
		    RESET_BINDING(curwin);
		    postponed_split = 0;
		}

		apply_autocmds(EVENT_QUICKFIXCMDPOST, (char_u *)"cscope",
					       curbuf->b_fname, TRUE, curbuf);
		if (use_ll)
		    
		    qi = (bt_quickfix(wp->w_buffer) && wp->w_llist_ref != NULL)
			?  wp->w_llist_ref : wp->w_llist;
		qf_jump(qi, 0, 0, forceit);
	    }
	}
	mch_remove(tmp);
	vim_free(tmp);
	vim_free(nummatches);
	return TRUE;
    }
    else
#endif 
    {
	char **matches = NULL, **contexts = NULL;
	int matched = 0;

	
	cs_fill_results(pat, totmatches, nummatches, &matches,
							 &contexts, &matched);
	vim_free(nummatches);
	if (matches == NULL)
	    return FALSE;

	(void)cs_manage_matches(matches, contexts, matched, Store);

	return do_tag((char_u *)pat, DT_CSCOPE, 0, forceit, verbose);
    }

}


    static int
cs_help(exarg_T *eap UNUSED)
{
    cscmd_T *cmdp = cs_cmds;

    (void)msg_puts(_("cscope commands:\n"));
    while (cmdp->name != NULL)
    {
	char *help = _(cmdp->help);
	int  space_cnt = 30 - vim_strsize((char_u *)help);

	
	if (space_cnt < 0)
	    space_cnt = 0;
	(void)smsg(_("%-5s: %s%*s (Usage: %s)"),
				      cmdp->name,
				      help, space_cnt, " ",
				      cmdp->usage);
	if (strcmp(cmdp->name, "find") == 0)
	    msg_puts(_("\n"
		       "       a: Find assignments to this symbol\n"
		       "       c: Find functions calling this function\n"
		       "       d: Find functions called by this function\n"
		       "       e: Find this egrep pattern\n"
		       "       f: Find this file\n"
		       "       g: Find this definition\n"
		       "       i: Find files #including this file\n"
		       "       s: Find this C symbol\n"
		       "       t: Find this text string\n"));

	cmdp++;
    }

    wait_return(TRUE);
    return 0;
}


    static void
clear_csinfo(int i)
{
    csinfo[i].fname  = NULL;
    csinfo[i].ppath  = NULL;
    csinfo[i].flags  = NULL;
#if defined(UNIX)
    csinfo[i].st_dev = (dev_t)0;
    csinfo[i].st_ino = (ino_t)0;
#else
    csinfo[i].nVolume = 0;
    csinfo[i].nIndexHigh = 0;
    csinfo[i].nIndexLow = 0;
#endif
    csinfo[i].pid    = 0;
    csinfo[i].fr_fp  = NULL;
    csinfo[i].to_fp  = NULL;
#if defined(MSWIN)
    csinfo[i].hProc = NULL;
#endif
}


    static int
cs_insert_filelist(
    char *fname,
    char *ppath,
    char *flags,
    stat_T *sb UNUSED)
{
    int	    i;
    int	    j;
#ifndef UNIX
    BY_HANDLE_FILE_INFORMATION bhfi;

    switch (win32_fileinfo((char_u *)fname, &bhfi))
    {
	case FILEINFO_ENC_FAIL:		
	case FILEINFO_READ_FAIL:	
	    if (p_csverbose)
	    {
		char *cant_msg = _(e_cannot_open_cscope_database_str);
		char *winmsg = GetWin32Error();

		if (winmsg != NULL)
		    (void)semsg(cant_msg, winmsg);
		else
		    
		    (void)semsg(cant_msg, fname);
	    }
	    return -1;

	case FILEINFO_INFO_FAIL:    
	    if (p_csverbose)
		(void)emsg(_(e_cannot_get_cscope_database_information));
	    return -1;
    }
#endif

    i = -1; 
    for (j = 0; j < csinfo_size; j++)
    {
	if (csinfo[j].fname != NULL
#if defined(UNIX)
	    && csinfo[j].st_dev == sb->st_dev && csinfo[j].st_ino == sb->st_ino
#else
	    
	    && ((fullpathcmp((char_u *)csinfo[j].fname,
			(char_u *)fname, FALSE, TRUE) & FPC_SAME)
		
		|| (csinfo[j].nVolume == bhfi.dwVolumeSerialNumber
		    && csinfo[j].nIndexHigh == bhfi.nFileIndexHigh
		    && csinfo[j].nIndexLow == bhfi.nFileIndexLow))
#endif
	    )
	{
	    if (p_csverbose)
		(void)emsg(_(e_duplicate_cscope_database_not_added));
	    return -1;
	}

	if (csinfo[j].fname == NULL && i == -1)
	    i = j; 
    }

    if (i == -1)
    {
	i = csinfo_size;
	if (csinfo_size == 0)
	{
	    
	    
	    
	    csinfo_size = 1;
	    csinfo = ALLOC_CLEAR_ONE(csinfo_T);
	}
	else
	{
	    csinfo_T *t_csinfo = csinfo;

	    
	    csinfo_size *= 2;
	    csinfo = vim_realloc(csinfo, sizeof(csinfo_T)*csinfo_size);
	    if (csinfo == NULL)
	    {
		vim_free(t_csinfo);
		csinfo_size = 0;
	    }
	}
	if (csinfo == NULL)
	    return -1;
	for (j = csinfo_size/2; j < csinfo_size; j++)
	    clear_csinfo(j);
    }

    if ((csinfo[i].fname = alloc(strlen(fname)+1)) == NULL)
	return -1;

    (void)strcpy(csinfo[i].fname, (const char *)fname);

    if (ppath != NULL)
    {
	if ((csinfo[i].ppath = alloc(strlen(ppath) + 1)) == NULL)
	{
	    VIM_CLEAR(csinfo[i].fname);
	    return -1;
	}
	(void)strcpy(csinfo[i].ppath, (const char *)ppath);
    }
    else
	csinfo[i].ppath = NULL;

    if (flags != NULL)
    {
	if ((csinfo[i].flags = alloc(strlen(flags) + 1)) == NULL)
	{
	    VIM_CLEAR(csinfo[i].fname);
	    VIM_CLEAR(csinfo[i].ppath);
	    return -1;
	}
	(void)strcpy(csinfo[i].flags, (const char *)flags);
    }
    else
	csinfo[i].flags = NULL;

#if defined(UNIX)
    csinfo[i].st_dev = sb->st_dev;
    csinfo[i].st_ino = sb->st_ino;

#else
    csinfo[i].nVolume = bhfi.dwVolumeSerialNumber;
    csinfo[i].nIndexLow = bhfi.nFileIndexLow;
    csinfo[i].nIndexHigh = bhfi.nFileIndexHigh;
#endif
    return i;
}



    static cscmd_T *
cs_lookup_cmd(exarg_T *eap)
{
    cscmd_T *cmdp;
    char *stok;
    size_t len;

    if (eap->arg == NULL)
	return NULL;

    
    eap_arg_len = (int)STRLEN(eap->arg);

    if ((stok = strtok((char *)(eap->arg), (const char *)" ")) == NULL)
	return NULL;

    len = strlen(stok);
    for (cmdp = cs_cmds; cmdp->name != NULL; ++cmdp)
    {
	if (strncmp((const char *)(stok), cmdp->name, len) == 0)
	    return (cmdp);
    }
    return NULL;
}



    static int
cs_kill(exarg_T *eap UNUSED)
{
    char *stok;
    int i;

    if ((stok = strtok((char *)NULL, (const char *)" ")) == NULL)
    {
	cs_usage_msg(Kill);
	return CSCOPE_FAILURE;
    }

    
    if ((strlen(stok) < 2 && VIM_ISDIGIT((int)(stok[0])))
	    || (strlen(stok) < 3 && stok[0] == '-'
					      && VIM_ISDIGIT((int)(stok[1]))))
	i = atoi(stok);
    else
    {
	
	
	for (i = 0; i < csinfo_size; i++)
	{
	    if (csinfo[i].fname != NULL && strstr(csinfo[i].fname, stok))
		break;
	}
    }

    if ((i != -1) && (i >= csinfo_size || i < -1 || csinfo[i].fname == NULL))
    {
	if (p_csverbose)
	    (void)semsg(_(e_cscope_connection_str_not_founc), stok);
    }
    else
    {
	if (i == -1)
	{
	    for (i = 0; i < csinfo_size; i++)
	    {
		if (csinfo[i].fname)
		    cs_kill_execute(i, csinfo[i].fname);
	    }
	}
	else
	    cs_kill_execute(i, stok);
    }

    return 0;
}



    static void
cs_kill_execute(
    int i,	    
    char *cname)    
{
    if (p_csverbose)
    {
	msg_clr_eos();
	(void)smsg_attr(HL_ATTR(HLF_R) | MSG_HIST,
			_("cscope connection %s closed"), cname);
    }
    cs_release_csp(i, TRUE);
}



    static char *
cs_make_vim_style_matches(
    char *fname,
    char *slno,
    char *search,
    char *tagstr)
{
    
    
    
    
    
    
    
    
    
    
    char *buf;
    int amt;

    if (search != NULL)
    {
	amt = (int)(strlen(fname) + strlen(slno) + strlen(tagstr) + strlen(search)+6);
	if ((buf = alloc(amt)) == NULL)
	    return NULL;

	(void)sprintf(buf, "%s\t%s\t%s;\"\t%s", tagstr, fname, slno, search);
    }
    else
    {
	amt = (int)(strlen(fname) + strlen(slno) + strlen(tagstr) + 5);
	if ((buf = alloc(amt)) == NULL)
	    return NULL;

	(void)sprintf(buf, "%s\t%s\t%s;\"", tagstr, fname, slno);
    }

    return buf;
}



    static char *
cs_manage_matches(
    char **matches,
    char **contexts,
    int totmatches,
    mcmd_e cmd)
{
    static char **mp = NULL;
    static char **cp = NULL;
    static int cnt = -1;
    static int next = -1;
    char *p = NULL;

    switch (cmd)
    {
    case Store:
	assert(matches != NULL);
	assert(totmatches > 0);
	if (mp != NULL || cp != NULL)
	    (void)cs_manage_matches(NULL, NULL, -1, Free);
	mp = matches;
	cp = contexts;
	cnt = totmatches;
	next = 0;
	break;
    case Get:
	if (next >= cnt)
	    return NULL;

	p = mp[next];
	next++;
	break;
    case Free:
	if (mp != NULL)
	{
	    if (cnt > 0)
		while (cnt--)
		{
		    vim_free(mp[cnt]);
		    if (cp != NULL)
			vim_free(cp[cnt]);
		}
	    vim_free(mp);
	    vim_free(cp);
	}
	mp = NULL;
	cp = NULL;
	cnt = 0;
	next = 0;
	break;
    case Print:
	cs_print_tags_priv(mp, cp, cnt);
	break;
    default:	
	iemsg(e_fatal_error_in_cs_manage_matches);
	return NULL;
    }

    return p;
}



    static char *
cs_parse_results(
    int cnumber,
    char *buf,
    int bufsize,
    char **context,
    char **linenumber,
    char **search)
{
    int ch;
    char *p;
    char *name;

    if (fgets(buf, bufsize, csinfo[cnumber].fr_fp) == NULL)
    {
	if (feof(csinfo[cnumber].fr_fp))
	    errno = EIO;

	cs_reading_emsg(cnumber);

	return NULL;
    }

    
    if ((p = strchr(buf, '\n')) == NULL)
    {
	while ((ch = getc(csinfo[cnumber].fr_fp)) != EOF && ch != '\n')
	    ;
	return NULL;
    }
    *p = '\0';

    
    if ((name = strtok(buf, (const char *)" ")) == NULL)
	return NULL;
    if ((*context = strtok(NULL, (const char *)" ")) == NULL)
	return NULL;
    if ((*linenumber = strtok(NULL, (const char *)" ")) == NULL)
	return NULL;
    *search = *linenumber + strlen(*linenumber) + 1;	

    
    
    
    
    if (strcmp(*search, "<unknown>") == 0)
	*search = NULL;

    name = cs_resolve_file(cnumber, name);
    return name;
}

#ifdef FEAT_QUICKFIX

    static void
cs_file_results(FILE *f, int *nummatches_a)
{
    int i, j;
    char *buf;
    char *search, *slno;
    char *fullname;
    char *cntx;
    char *context;

    buf = alloc(CSREAD_BUFSIZE);
    if (buf == NULL)
	return;

    for (i = 0; i < csinfo_size; i++)
    {
	if (nummatches_a[i] < 1)
	    continue;

	for (j = 0; j < nummatches_a[i]; j++)
	{
	   if ((fullname = cs_parse_results(i, buf, CSREAD_BUFSIZE, &cntx,
			   &slno, &search)) == NULL)
	       continue;

	   context = alloc(strlen(cntx)+5);
	   if (context == NULL)
	   {
	       vim_free(fullname);
	       continue;
	   }

	   if (strcmp(cntx, "<global>")==0)
	       strcpy(context, "<<global>>");
	   else
	       sprintf(context, "<<%s>>", cntx);

	   if (search == NULL)
	       fprintf(f, "%s\t%s\t%s\n", fullname, slno, context);
	   else
	       fprintf(f, "%s\t%s\t%s %s\n", fullname, slno, context, search);

	   vim_free(context);
	   vim_free(fullname);
	} 

	(void)cs_read_prompt(i);

    } 
    vim_free(buf);
}
#endif


    static void
cs_fill_results(
    char *tagstr,
    int totmatches,
    int *nummatches_a,
    char ***matches_p,
    char ***cntxts_p,
    int *matched)
{
    int i, j;
    char *buf;
    char *search, *slno;
    int totsofar = 0;
    char **matches = NULL;
    char **cntxts = NULL;
    char *fullname;
    char *cntx;

    assert(totmatches > 0);

    buf = alloc(CSREAD_BUFSIZE);
    if (buf == NULL)
	return;

    if ((matches = ALLOC_MULT(char *, totmatches)) == NULL)
	goto parse_out;
    if ((cntxts = ALLOC_MULT(char *, totmatches)) == NULL)
	goto parse_out;

    for (i = 0; i < csinfo_size; i++)
    {
	if (nummatches_a[i] < 1)
	    continue;

	for (j = 0; j < nummatches_a[i]; j++)
	{
	   if ((fullname = cs_parse_results(i, buf, CSREAD_BUFSIZE, &cntx,
			   &slno, &search)) == NULL)
		continue;

	    matches[totsofar] = cs_make_vim_style_matches(fullname, slno,
							  search, tagstr);

	    vim_free(fullname);

	    if (strcmp(cntx, "<global>") == 0)
		cntxts[totsofar] = NULL;
	    else
		
		
		cntxts[totsofar] = (char *)vim_strsave((char_u *)cntx);

	    if (matches[totsofar] != NULL)
		totsofar++;

	} 

	(void)cs_read_prompt(i);

    } 

parse_out:
    if (totsofar == 0)
    {
	
	VIM_CLEAR(matches);
	VIM_CLEAR(cntxts);
    }
    *matched = totsofar;
    *matches_p = matches;
    *cntxts_p = cntxts;

    vim_free(buf);
}



    static char *
cs_pathcomponents(char *path)
{
    int		i;
    char	*s;

    if (p_cspc == 0)
	return path;

    s = path + strlen(path) - 1;
    for (i = 0; i < p_cspc; ++i)
	while (s > path && *--s != '/'
#ifdef MSWIN
		&& *--s != '\\'
#endif
		)
	    ;
    if ((s > path && *s == '/')
#ifdef MSWIN
	|| (s > path && *s == '\\')
#endif
	    )
	++s;
    return s;
}


    static void
cs_print_tags_priv(char **matches, char **cntxts, int num_matches)
{
    char	*buf = NULL;
    char	*t_buf;
    int		bufsize = 0; 
    int		newsize = 0;
    char	*ptag;
    char	*fname, *lno, *extra, *tbuf;
    int		i, idx, num;
    char	*globalcntx = "GLOBAL";
    char	*cntxformat = " <<%s>>";
    char	*context;
    char	*cstag_msg = _("Cscope tag: %s");
    char	*csfmt_str = "%4d %6s  ";

    assert(num_matches > 0);

    if ((tbuf = alloc(strlen(matches[0]) + 1)) == NULL)
	return;

    strcpy(tbuf, matches[0]);
    ptag = strtok(tbuf, "\t");
    if (ptag == NULL)
    {
	vim_free(tbuf);
	return;
    }

    newsize = (int)(strlen(cstag_msg) + strlen(ptag));
    buf = alloc(newsize);
    if (buf != NULL)
    {
	bufsize = newsize;
	(void)sprintf(buf, cstag_msg, ptag);
	msg_puts_attr(buf, HL_ATTR(HLF_T));
    }

    vim_free(tbuf);

    msg_puts_attr(_("\n   #   line"), HL_ATTR(HLF_T));    
    msg_advance(msg_col + 2);
    msg_puts_attr(_("filename / context / line\n"), HL_ATTR(HLF_T));

    num = 1;
    for (i = 0; i < num_matches; i++)
    {
	idx = i;

	
	
	
	if ((tbuf = alloc(strlen(matches[idx]) + 1)) == NULL)
	    continue;
	(void)strcpy(tbuf, matches[idx]);

	if (strtok(tbuf, (const char *)"\t") == NULL
		|| (fname = strtok(NULL, (const char *)"\t")) == NULL
		|| (lno = strtok(NULL, (const char *)"\t")) == NULL)
	{
	    vim_free(tbuf);
	    continue;
	}
	extra = strtok(NULL, (const char *)"\t");

	lno[strlen(lno)-2] = '\0';  

	
	newsize = (int)(strlen(csfmt_str) + 16 + strlen(lno));
	if (bufsize < newsize)
	{
	    t_buf = buf;
	    buf = vim_realloc(buf, newsize);
	    if (buf == NULL)
	    {
		bufsize = 0;
		vim_free(t_buf);
	    }
	    else
		bufsize = newsize;
	}
	if (buf != NULL)
	{
	    
	    (void)sprintf(buf, csfmt_str, num, lno);
	    msg_puts_attr(buf, HL_ATTR(HLF_CM));
	}
	msg_outtrans_long_attr((char_u *)cs_pathcomponents(fname),
							      HL_ATTR(HLF_CM));

	
	if (cntxts[idx] != NULL)
	    context = cntxts[idx];
	else
	    context = globalcntx;
	newsize = (int)(strlen(context) + strlen(cntxformat));

	if (bufsize < newsize)
	{
	    t_buf = buf;
	    buf = vim_realloc(buf, newsize);
	    if (buf == NULL)
	    {
		bufsize = 0;
		vim_free(t_buf);
	    }
	    else
		bufsize = newsize;
	}
	if (buf != NULL)
	{
	    (void)sprintf(buf, cntxformat, context);

	    
	    if (msg_col + (int)strlen(buf) >= (int)Columns)
		msg_putchar('\n');
	    msg_advance(12);
	    msg_outtrans_long_attr((char_u *)buf, 0);
	    msg_putchar('\n');
	}
	if (extra != NULL)
	{
	    msg_advance(13);
	    msg_outtrans_long_attr((char_u *)extra, 0);
	}

	vim_free(tbuf); 

	if (msg_col)
	    msg_putchar('\n');

	ui_breakcheck();
	if (got_int)
	{
	    got_int = FALSE;	
	    break;
	}

	num++;
    } 

    vim_free(buf);
}



    static int
cs_read_prompt(int i)
{
    int		ch;
    char	*buf = NULL; 
    int		bufpos = 0;
    int		maxlen;
    static char *eprompt = "Press the RETURN key to continue:";
    int		epromptlen = (int)strlen(eprompt);
    int		n;

    
    char *cs_emsg = _(e_cscope_error_str);
    maxlen = (int)(IOSIZE - strlen(cs_emsg));

    for (;;)
    {
	while ((ch = getc(csinfo[i].fr_fp)) != EOF && ch != CSCOPE_PROMPT[0])
	    
	    if (bufpos < maxlen - 1 && vim_isprintc(ch))
	    {
		if (buf == NULL) 
		    buf = alloc(maxlen);
		if (buf != NULL)
		{
		    
		    buf[bufpos++] = ch;
		    buf[bufpos] = NUL;
		    if (bufpos >= epromptlen
			    && strcmp(&buf[bufpos - epromptlen], eprompt) == 0)
		    {
			
			buf[bufpos - epromptlen] = NUL;

			
			(void)semsg(cs_emsg, buf);

			
			(void)putc('\n', csinfo[i].to_fp);
			(void)fflush(csinfo[i].to_fp);

			
			bufpos = 0;
			buf[bufpos] = NUL;
		    }
		}
	    }

	for (n = 0; n < (int)strlen(CSCOPE_PROMPT); ++n)
	{
	    if (n > 0)
		ch = getc(csinfo[i].fr_fp);
	    if (ch == EOF)
	    {
		if (buf != NULL && buf[0] != NUL)
		    (void)semsg(cs_emsg, buf);
		else if (p_csverbose)
		    cs_reading_emsg(i); 
		cs_release_csp(i, TRUE);
		vim_free(buf);
		return CSCOPE_FAILURE;
	    }

	    if (ch != CSCOPE_PROMPT[n])
	    {
		ch = EOF;
		break;
	    }
	}

	if (ch == EOF)
	    continue;	    
	break;		    
    }

    vim_free(buf);
    return CSCOPE_SUCCESS;
}

#if defined(UNIX) && defined(SIGALRM)

    static void
sig_handler SIGDEFARG(sigarg)
{
    
}
#endif


    static void
cs_release_csp(int i, int freefnpp)
{
    
    if (csinfo[i].to_fp != NULL)
    {
	(void)fputs("q\n", csinfo[i].to_fp);
	(void)fflush(csinfo[i].to_fp);
    }
#if defined(UNIX)
    {
	int waitpid_errno;
	int pstat;
	pid_t pid;

# if defined(HAVE_SIGACTION)
	struct sigaction sa, old;

	
	sigemptyset(&sa.sa_mask);
	sa.sa_handler = sig_handler;
#  ifdef SA_NODEFER
	sa.sa_flags = SA_NODEFER;
#  else
	sa.sa_flags = 0;
#  endif
	sigaction(SIGALRM, &sa, &old);
	alarm(2); 

	
	pid = waitpid(csinfo[i].pid, &pstat, 0);
	waitpid_errno = errno;

	
	alarm(0);
	sigaction(SIGALRM, &old, NULL);
# else
	int waited;

	
	
	sleep(0);
	for (waited = 0; waited < 40; ++waited)
	{
	    pid = waitpid(csinfo[i].pid, &pstat, WNOHANG);
	    waitpid_errno = errno;
	    if (pid != 0)
		break;  
	    mch_delay(50L, 0); 
	}
# endif
	
	if (pid < 0 && csinfo[i].pid > 1)
	{
# ifdef ECHILD
	    int alive = TRUE;

	    if (waitpid_errno == ECHILD)
	    {
		
		int waited;

		sleep(0);
		for (waited = 0; waited < 40; ++waited)
		{
		    
		    if (kill(csinfo[i].pid, 0) != 0)
		    {
			alive = FALSE; 
			break;
		    }
		    mch_delay(50L, 0); 
		}
	    }
	    if (alive)
# endif
	    {
		kill(csinfo[i].pid, SIGKILL);
		(void)waitpid(csinfo[i].pid, &pstat, 0);
	    }
	}
    }
#else  
    if (csinfo[i].hProc != NULL)
    {
	
	if (WaitForSingleObject(csinfo[i].hProc, 1000) == WAIT_TIMEOUT)
	    TerminateProcess(csinfo[i].hProc, 0);
	CloseHandle(csinfo[i].hProc);
    }
#endif

    if (csinfo[i].fr_fp != NULL)
	(void)fclose(csinfo[i].fr_fp);
    if (csinfo[i].to_fp != NULL)
	(void)fclose(csinfo[i].to_fp);

    if (freefnpp)
    {
	vim_free(csinfo[i].fname);
	vim_free(csinfo[i].ppath);
	vim_free(csinfo[i].flags);
    }

    clear_csinfo(i);
}



    static int
cs_reset(exarg_T *eap UNUSED)
{
    char	**dblist = NULL, **pplist = NULL, **fllist = NULL;
    int	i;
    char buf[20]; 

    if (csinfo_size == 0)
	return CSCOPE_SUCCESS;

    
    dblist = ALLOC_MULT(char *, csinfo_size);
    pplist = ALLOC_MULT(char *, csinfo_size);
    fllist = ALLOC_MULT(char *, csinfo_size);
    if (dblist == NULL || pplist == NULL || fllist == NULL)
    {
	vim_free(dblist);
	vim_free(pplist);
	vim_free(fllist);
	return CSCOPE_FAILURE;
    }

    for (i = 0; i < csinfo_size; i++)
    {
	dblist[i] = csinfo[i].fname;
	pplist[i] = csinfo[i].ppath;
	fllist[i] = csinfo[i].flags;
	if (csinfo[i].fname != NULL)
	    cs_release_csp(i, FALSE);
    }

    
    for (i = 0; i < csinfo_size; i++)
    {
	if (dblist[i] != NULL)
	{
	    cs_add_common(dblist[i], pplist[i], fllist[i]);
	    if (p_csverbose)
	    {
		
		
		
		sprintf(buf, " (#%d)", i);
		msg_puts_attr(buf, HL_ATTR(HLF_R));
	    }
	}
	vim_free(dblist[i]);
	vim_free(pplist[i]);
	vim_free(fllist[i]);
    }
    vim_free(dblist);
    vim_free(pplist);
    vim_free(fllist);

    if (p_csverbose)
	msg_attr(_("All cscope databases reset"), HL_ATTR(HLF_R) | MSG_HIST);
    return CSCOPE_SUCCESS;
}



    static char *
cs_resolve_file(int i, char *name)
{
    char	*fullname;
    int		len;
    char_u	*csdir = NULL;

    
    len = (int)(strlen(name) + 2);
    if (csinfo[i].ppath != NULL)
	len += (int)strlen(csinfo[i].ppath);
    else if (p_csre && csinfo[i].fname != NULL)
    {
	
	
	csdir = alloc(MAXPATHL);
	if (csdir != NULL)
	{
	    vim_strncpy(csdir, (char_u *)csinfo[i].fname,
					  gettail((char_u *)csinfo[i].fname)
						 - (char_u *)csinfo[i].fname);
	    len += (int)STRLEN(csdir);
	}
    }

    
    
    
    if (csinfo[i].ppath != NULL
	    && (strncmp(name, csinfo[i].ppath, strlen(csinfo[i].ppath)) != 0)
	    && (name[0] != '/')
#ifdef MSWIN
	    && name[0] != '\\' && name[1] != ':'
#endif
       )
    {
	if ((fullname = alloc(len)) != NULL)
	    (void)sprintf(fullname, "%s/%s", csinfo[i].ppath, name);
    }
    else if (csdir != NULL && csinfo[i].fname != NULL && *csdir != NUL)
    {
	
	
	fullname = (char *)concat_fnames(csdir, (char_u *)name, TRUE);
    }
    else
    {
	fullname = (char *)vim_strsave((char_u *)name);
    }

    vim_free(csdir);
    return fullname;
}



    static int
cs_show(exarg_T *eap UNUSED)
{
    int i;

    if (cs_cnt_connections() == 0)
	msg_puts(_("no cscope connections\n"));
    else
    {
	msg_puts_attr(
	    _(" # pid    database name                       prepend path\n"),
	    HL_ATTR(HLF_T));
	for (i = 0; i < csinfo_size; i++)
	{
	    if (csinfo[i].fname == NULL)
		continue;

	    if (csinfo[i].ppath != NULL)
		(void)smsg("%2d %-5ld  %-34s  %-32s",
		    i, (int)csinfo[i].pid, csinfo[i].fname, csinfo[i].ppath);
	    else
		(void)smsg("%2d %-5ld  %-34s  <none>",
			   i, (int)csinfo[i].pid, csinfo[i].fname);
	}
    }

    wait_return(FALSE);
    return CSCOPE_SUCCESS;
}



    void
cs_end(void)
{
    int i;

    for (i = 0; i < csinfo_size; i++)
	cs_release_csp(i, TRUE);
    vim_free(csinfo);
    csinfo_size = 0;
}

#endif	

#if defined(FEAT_EVAL) || defined(PROTO)


    void
f_cscope_connection(typval_T *argvars UNUSED, typval_T *rettv UNUSED)
{
# ifdef FEAT_CSCOPE
    int		num = 0;
    char_u	*dbpath = NULL;
    char_u	*prepend = NULL;
    char_u	buf[NUMBUFLEN];

    if (in_vim9script()
	    && (check_for_opt_number_arg(argvars, 0) == FAIL
		|| (argvars[0].v_type != VAR_UNKNOWN
		    && (check_for_opt_string_arg(argvars, 1) == FAIL
			|| (argvars[1].v_type != VAR_UNKNOWN
			    && check_for_opt_string_arg(argvars, 2) == FAIL)))))
	return;

    if (argvars[0].v_type != VAR_UNKNOWN
	    && argvars[1].v_type != VAR_UNKNOWN)
    {
	num = (int)tv_get_number(&argvars[0]);
	dbpath = tv_get_string(&argvars[1]);
	if (argvars[2].v_type != VAR_UNKNOWN)
	    prepend = tv_get_string_buf(&argvars[2], buf);
    }

    rettv->vval.v_number = cs_connection(num, dbpath, prepend);
# endif
}

#endif 