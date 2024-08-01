



#define IN_OPTION_C
#include "vim.h"
#include "optiondefs.h"

static void set_options_default(int opt_flags);
static void set_string_default_esc(char *name, char_u *val, int escape);
static char_u *find_dup_item(char_u *origval, char_u *newval, long_u flags);
static char_u *option_expand(int opt_idx, char_u *val);
static void didset_options(void);
static void didset_options2(void);
#if defined(FEAT_EVAL) || defined(PROTO)
static long_u *insecure_flag(int opt_idx, int opt_flags);
#else
# define insecure_flag(opt_idx, opt_flags) (&options[opt_idx].flags)
#endif
static char *set_bool_option(int opt_idx, char_u *varp, int value, int opt_flags);
static char *set_num_option(int opt_idx, char_u *varp, int value, char *errbuf, size_t errbuflen, int opt_flags);
static int find_key_option(char_u *arg_arg, int has_lt);
static void showoptions(int all, int opt_flags);
static int optval_default(struct vimoption *, char_u *varp, int compatible);
static void showoneopt(struct vimoption *, int opt_flags);
static int put_setstring(FILE *fd, char *cmd, char *name, char_u **valuep, long_u flags);
static int put_setnum(FILE *fd, char *cmd, char *name, int *valuep);
static int put_setbool(FILE *fd, char *cmd, char *name, int value);
static int istermoption(struct vimoption *p);
static char_u *get_varp_scope(struct vimoption *p, int scope);
static char_u *get_varp(struct vimoption *);
static void check_win_options(win_T *win);
static void option_value2string(struct vimoption *, int scope);
static void check_winopt(winopt_T *wop);
static int wc_use_keyname(char_u *varp, int *wcp);
static void compatible_set(void);

#if defined(FEAT_EVAL) || defined(PROTO)
static char *(p_bin_dep_opts[])    = {"textwidth", "wrapmargin", "modeline", "expandtab", NULL};
static char *(p_paste_dep_opts[])  = {"autoindent", "expandtab", "ruler", "showmatch", "smarttab",
    "softtabstop", "textwidth", "wrapmargin",
#ifdef FEAT_RIGHTLEFT
    "hkmap", "revins",
#endif
#ifdef FEAT_VARTABS
    "varsofttabstop",
#endif
    NULL};
static void didset_options_sctx(int opt_flags, char **buf);
#endif



    static void
set_init_default_shell(void)
{
    char_u	*p;

    
    
    if (((p = mch_getenv((char_u *)"SHELL")) != NULL && *p != NUL)
#if defined(MSWIN)
	    || ((p = mch_getenv((char_u *)"COMSPEC")) != NULL && *p != NUL)
	    || ((p = (char_u *)default_shell()) != NULL && *p != NUL)
#endif
	    )
#if defined(MSWIN)
    {
	
	char_u	    *cmd;
	size_t	    len;

	if (vim_strchr(p, ' ') != NULL)
	{
	    len = STRLEN(p) + 3;  
	    cmd = alloc(len);
	    if (cmd != NULL)
	    {
		vim_snprintf((char *)cmd, len, "\"%s\"", p);
		set_string_default("sh", cmd);
		vim_free(cmd);
	    }
	}
	else
	    set_string_default("sh", p);
    }
#else
	set_string_default_esc("sh", p, TRUE);
#endif
}


    static void
set_init_default_backupskip(void)
{
    int		opt_idx;
    long_u	n;
    char_u	*p;
#ifdef UNIX
    static char	*(names[4]) = {"", "TMPDIR", "TEMP", "TMP"};
#else
    static char	*(names[3]) = {"TMPDIR", "TEMP", "TMP"};
#endif
    int		len;
    garray_T	ga;
    char_u	*item;

    opt_idx = findoption((char_u *)"backupskip");

    ga_init2(&ga, 1, 100);
    for (n = 0; n < (int)ARRAY_LENGTH(names); ++n)
    {
	int		mustfree = FALSE;
#ifdef UNIX
	if (*names[n] == NUL)
# ifdef MACOS_X
	    p = (char_u *)"/private/tmp";
# else
	p = (char_u *)"/tmp";
# endif
	else
#endif
	    p = vim_getenv((char_u *)names[n], &mustfree);
	if (p != NULL && *p != NUL)
	{
	    
	    len = (int)STRLEN(p) + 3;
	    item = alloc(len);
	    if (item != NULL)
	    {
		STRCPY(item, p);
		add_pathsep(item);
		STRCAT(item, "*");
		if (find_dup_item(ga.ga_data, item, options[opt_idx].flags)
									== NULL
			&& ga_grow(&ga, len) == OK)
		{
		    if (ga.ga_len > 0)
			STRCAT(ga.ga_data, ",");
		    STRCAT(ga.ga_data, item);
		    ga.ga_len += len;
		}
		vim_free(item);
	    }
	}
	if (mustfree)
	    vim_free(p);
    }
    if (ga.ga_data != NULL)
    {
	set_string_default("bsk", ga.ga_data);
	vim_free(ga.ga_data);
    }
}


    static void
set_init_default_maxmemtot(void)
{
    int		opt_idx;
    long_u	n;

    opt_idx = findoption((char_u *)"maxmemtot");
    if (opt_idx < 0)
	return;

#if !defined(HAVE_AVAIL_MEM) && !defined(HAVE_TOTAL_MEM)
    if (options[opt_idx].def_val[VI_DEFAULT] == (char_u *)0L)
#endif
    {
#if defined(HAVE_AVAIL_MEM)
	
	n = (mch_avail_mem(FALSE) >> 1);
#elif defined(HAVE_TOTAL_MEM)
	
	n = (mch_total_mem(FALSE) >> 1);
#else
	n = (0x7fffffff >> 11);
#endif
	options[opt_idx].def_val[VI_DEFAULT] = (char_u *)n;
	opt_idx = findoption((char_u *)"maxmem");
	if (opt_idx >= 0)
	{
#if !defined(HAVE_AVAIL_MEM) && !defined(HAVE_TOTAL_MEM)
	    if ((int)(long_i)options[opt_idx].def_val[VI_DEFAULT] > (int)n
		    || (int)(long_i)options[opt_idx].def_val[VI_DEFAULT] == 0L)
#endif
		options[opt_idx].def_val[VI_DEFAULT] = (char_u *)n;
	}
    }
}


    static void
set_init_default_cdpath(void)
{
    int		opt_idx;
    char_u	*cdpath;
    char_u	*buf;
    int	i;
    int	j;
    int	mustfree = FALSE;

    cdpath = vim_getenv((char_u *)"CDPATH", &mustfree);
    if (cdpath == NULL)
	return;

    buf = alloc((STRLEN(cdpath) << 1) + 2);
    if (buf != NULL)
    {
	buf[0] = ',';	    
	j = 1;
	for (i = 0; cdpath[i] != NUL; ++i)
	{
	    if (vim_ispathlistsep(cdpath[i]))
		buf[j++] = ',';
	    else
	    {
		if (cdpath[i] == ' ' || cdpath[i] == ',')
		    buf[j++] = '\\';
		buf[j++] = cdpath[i];
	    }
	}
	buf[j] = NUL;
	opt_idx = findoption((char_u *)"cdpath");
	if (opt_idx >= 0)
	{
	    options[opt_idx].def_val[VI_DEFAULT] = buf;
	    options[opt_idx].flags |= P_DEF_ALLOCED;
	}
	else
	    vim_free(buf); 
    }
    if (mustfree)
	vim_free(cdpath);
}


    static void
set_init_default_printencoding(void)
{
#if defined(FEAT_POSTSCRIPT) && \
    (defined(MSWIN) || defined(VMS) || defined(MAC) || defined(hpux))
    
    set_string_default("penc",
# if defined(MSWIN)
	    (char_u *)"cp1252"
# elif defined(VMS)
	    (char_u *)"dec-mcs"
# elif defined(MAC)
	    (char_u *)"mac-roman"
# else 
	    (char_u *)"hp-roman8"
# endif
	    );
#endif
}

#ifdef FEAT_POSTSCRIPT

    static void
set_init_default_printexpr(void)
{
    
    set_string_default("pexpr",
# if defined(MSWIN)
	    (char_u *)"system('copy' . ' ' . v:fname_in . (&printdevice == '' ? ' LPT1:' : (' \"' . &printdevice . '\"'))) . delete(v:fname_in)"
# elif defined(VMS)
	    (char_u *)"system('print/delete' . (&printdevice == '' ? '' : ' /queue=' . &printdevice) . ' ' . v:fname_in)"

# else
	    (char_u *)"system('lpr' . (&printdevice == '' ? '' : ' -P' . &printdevice) . ' ' . v:fname_in) . delete(v:fname_in) + v:shell_error"
# endif
	    );
}
#endif

#ifdef UNIX

    static void
set_init_restricted_mode(void)
{
    char_u	*p;

    p = get_isolated_shell_name();
    if (p == NULL)
	return;
    if (fnamecmp(p, "nologin") == 0 || fnamecmp(p, "false") == 0)
	restricted = TRUE;
    vim_free(p);
}
#endif

#ifdef CLEAN_RUNTIMEPATH

    static void
set_init_clean_rtp(void)
{
    int		opt_idx;

    opt_idx = findoption((char_u *)"runtimepath");
    if (opt_idx >= 0)
    {
	options[opt_idx].def_val[VI_DEFAULT] = (char_u *)CLEAN_RUNTIMEPATH;
	p_rtp = (char_u *)CLEAN_RUNTIMEPATH;
    }
    opt_idx = findoption((char_u *)"packpath");
    if (opt_idx < 0)
	return;
    options[opt_idx].def_val[VI_DEFAULT] = (char_u *)CLEAN_RUNTIMEPATH;
    p_pp = (char_u *)CLEAN_RUNTIMEPATH;
}
#endif

#ifdef UNIX

    static void
set_init_xdg_rtp(void)
{
    int		opt_idx;
    int		has_xdg_env = TRUE;
    int		should_free_xdg_dir = FALSE;
    char_u	*vimrc1 = NULL;
    char_u	*vimrc2 = NULL;
    char_u	*xdg_dir = NULL;
    char_u	*xdg_rtp = NULL;
    char_u	*vimrc_xdg = NULL;

    
    (void)init_chartab();
    vimrc1 = expand_env_save((char_u *)USR_VIMRC_FILE);
    vimrc2 = expand_env_save((char_u *)USR_VIMRC_FILE2);

    xdg_dir = mch_getenv("XDG_CONFIG_HOME");
    if (!xdg_dir)
    {
	xdg_dir = expand_env_save((char_u *)"~/.config");
	should_free_xdg_dir = TRUE;
	has_xdg_env = FALSE;
    }
    vimrc_xdg = concat_fnames(xdg_dir, (char_u *)"vim/vimrc", TRUE);

    if (file_is_readable(vimrc1) || file_is_readable(vimrc2) ||
	    !file_is_readable(vimrc_xdg))
	goto theend;

    xdg_rtp = has_xdg_env ? (char_u *)XDG_RUNTIMEPATH
	: (char_u *)XDG_RUNTIMEPATH_FB;

    if ((opt_idx = findoption((char_u *)"runtimepath")) < 0)
	goto theend;

    options[opt_idx].def_val[VI_DEFAULT] = xdg_rtp;
    p_rtp = xdg_rtp;

    if ((opt_idx = findoption((char_u *)"packpath")) < 0)
	goto theend;

    options[opt_idx].def_val[VI_DEFAULT] = xdg_rtp;
    p_pp = xdg_rtp;

#if defined(XDG_VDIR) && defined(FEAT_SESSION)
    if ((opt_idx = findoption((char_u *)"viewdir")) < 0)
	goto theend;

    options[opt_idx].def_val[VI_DEFAULT] = (char_u *)XDG_VDIR;
    p_vdir = (char_u *)XDG_VDIR;
#endif

theend:
    vim_free(vimrc1);
    vim_free(vimrc2);
    vim_free(vimrc_xdg);
    if (should_free_xdg_dir)
	vim_free(xdg_dir);
}
#endif


    static void
set_init_expand_env(void)
{
    int		opt_idx;
    char_u	*p;

    for (opt_idx = 0; !istermoption_idx(opt_idx); opt_idx++)
    {
	if ((options[opt_idx].flags & P_GETTEXT)
		&& options[opt_idx].var != NULL)
	    p = (char_u *)_(*(char **)options[opt_idx].var);
	else
	    p = option_expand(opt_idx, NULL);
	if (p != NULL && (p = vim_strsave(p)) != NULL)
	{
	    *(char_u **)options[opt_idx].var = p;
	    
	    
	    
	    
	    if (options[opt_idx].flags & P_DEF_ALLOCED)
		vim_free(options[opt_idx].def_val[VI_DEFAULT]);
	    options[opt_idx].def_val[VI_DEFAULT] = p;
	    options[opt_idx].flags |= P_DEF_ALLOCED;
	}
    }
}


    static void
set_init_lang_env(void)
{
#if defined(MSWIN) && defined(FEAT_GETTEXT)
    
    
    if (mch_getenv((char_u *)"LANG") == NULL)
    {
	char	buf[20];
	long_u	n;

	
	
	
	n = GetLocaleInfo(LOCALE_USER_DEFAULT, LOCALE_SABBREVLANGNAME,
							     (LPTSTR)buf, 20);
	if (n >= 2 && STRNICMP(buf, "en", 2) != 0)
	{
	    
	    if (STRNICMP(buf, "cht", 3) == 0 || STRNICMP(buf, "zht", 3) == 0)
		STRCPY(buf, "zh_TW");
	    else if (STRNICMP(buf, "chs", 3) == 0
					      || STRNICMP(buf, "zhc", 3) == 0)
		STRCPY(buf, "zh_CN");
	    else if (STRNICMP(buf, "jp", 2) == 0)
		STRCPY(buf, "ja");
	    else
		buf[2] = NUL;		
	    vim_setenv((char_u *)"LANG", (char_u *)buf);
	}
    }
#elif defined(MACOS_CONVERT)
    
    mac_lang_init();
#endif
}


    static void
set_init_default_encoding(void)
{
    char_u	*p;
    int		opt_idx;

# if defined(MSWIN) || defined(__MVS__)
    
    
    
    p = vim_strsave((char_u *)ENC_DFLT);
# else
    
    
    p = enc_locale();
# endif
    if (p == NULL)
	return;

    
    
    char_u *save_enc = p_enc;
    p_enc = p;
    if (STRCMP(p_enc, "gb18030") == 0)
    {
	
	
	
	p_enc = vim_strsave((char_u *)"cp936");
	vim_free(p);
    }
    if (mb_init() == NULL)
    {
	opt_idx = findoption((char_u *)"encoding");
	if (opt_idx >= 0)
	{
	    options[opt_idx].def_val[VI_DEFAULT] = p_enc;
	    options[opt_idx].flags |= P_DEF_ALLOCED;
	}

#if defined(MSWIN) || defined(MACOS_X) || defined(VMS)
	if (STRCMP(p_enc, "latin1") == 0 || enc_utf8)
	{
	    
	    
	    
	    set_string_option_direct((char_u *)"isp", -1,
		    ISP_LATIN1, OPT_FREE, SID_NONE);
	    set_string_option_direct((char_u *)"isk", -1,
		    ISK_LATIN1, OPT_FREE, SID_NONE);
	    opt_idx = findoption((char_u *)"isp");
	    if (opt_idx >= 0)
		options[opt_idx].def_val[VIM_DEFAULT] = ISP_LATIN1;
	    opt_idx = findoption((char_u *)"isk");
	    if (opt_idx >= 0)
		options[opt_idx].def_val[VIM_DEFAULT] = ISK_LATIN1;
	    (void)init_chartab();
	}
#endif

#if defined(MSWIN) && (!defined(FEAT_GUI) || defined(VIMDLL))
	
	
	if (
# ifdef VIMDLL
		(!gui.in_use && !gui.starting) &&
# endif
		GetACP() != GetConsoleCP())
	{
	    char	buf[50];

	    
	    
	    if (GetConsoleCP() == 0)
		sprintf(buf, "cp%ld", (int)GetACP());
	    else
		sprintf(buf, "cp%ld", (int)GetConsoleCP());
	    p_tenc = vim_strsave((char_u *)buf);
	    if (p_tenc != NULL)
	    {
		opt_idx = findoption((char_u *)"termencoding");
		if (opt_idx >= 0)
		{
		    options[opt_idx].def_val[VI_DEFAULT] = p_tenc;
		    options[opt_idx].flags |= P_DEF_ALLOCED;
		}
		convert_setup(&input_conv, p_tenc, p_enc);
		convert_setup(&output_conv, p_enc, p_tenc);
	    }
	    else
		p_tenc = empty_option;
	}
#endif
#if defined(MSWIN)
	
	init_homedir();
#endif
    }
    else
    {
	vim_free(p_enc);
	p_enc = save_enc;
    }
}


    void
set_init_1(int clean_arg)
{
#ifdef FEAT_LANGMAP
    langmap_init();
#endif

    
    p_cp = TRUE;

    
    if (mch_getenv((char_u *)"VIM_POSIX") != NULL)
    {
	set_string_default("cpo", (char_u *)CPO_ALL);
	set_string_default("shm", (char_u *)SHM_POSIX);
    }

    set_init_default_shell();
    set_init_default_backupskip();
    set_init_default_maxmemtot();
    set_init_default_cdpath();
    set_init_default_printencoding();
#ifdef FEAT_POSTSCRIPT
    set_init_default_printexpr();
#endif

    
    set_options_default(0);

#ifdef UNIX
    set_init_xdg_rtp();
    set_init_restricted_mode();
#endif

#ifdef CLEAN_RUNTIMEPATH
    if (clean_arg)
	set_init_clean_rtp();
#endif

#ifdef FEAT_GUI
    if (found_reverse_arg)
	set_option_value_give_err((char_u *)"bg", 0L, (char_u *)"dark", 0);
#endif

    curbuf->b_p_initialized = TRUE;
    curbuf->b_p_ar = -1;	
    curbuf->b_p_ul = NO_LOCAL_UNDOLEVEL;
    check_buf_options(curbuf);
    check_win_options(curwin);
    check_options();

    
    didset_options();

#ifdef FEAT_SPELL
    
    
    init_spell_chartab();
#endif

    set_init_default_encoding();

    
    set_init_expand_env();

    save_file_ff(curbuf);	

#if defined(FEAT_ARABIC)
    
    
    
    
    
    if (mch_getenv((char_u *)"MLTERM") != NULL)
	set_option_value_give_err((char_u *)"tbidi", 1L, NULL, 0);
#endif

    didset_options2();

    set_init_lang_env();

#ifdef FEAT_MULTI_LANG
    
    set_helplang_default(get_mess_lang());
#endif
}

static char_u *fencs_utf8_default = (char_u *)"ucs-bom,utf-8,default,latin1";


    void
set_fencs_unicode(void)
{
    set_string_option_direct((char_u *)"fencs", -1, fencs_utf8_default,
								  OPT_FREE, 0);
}


    static void
set_option_default(
    int		opt_idx,
    int		opt_flags,	
    int		compatible)	
{
    char_u	*varp;		
    int		dvi;		
    long_u	flags;
    long_u	*flagsp;
    int		both = (opt_flags & (OPT_LOCAL | OPT_GLOBAL)) == 0;

    varp = get_varp_scope(&(options[opt_idx]), both ? OPT_LOCAL : opt_flags);
    flags = options[opt_idx].flags;
    if (varp != NULL)	    
    {
	dvi = ((flags & P_VI_DEF) || compatible) ? VI_DEFAULT : VIM_DEFAULT;
	if (flags & P_STRING)
	{
	    
	    if (options[opt_idx].var == (char_u *)&p_fencs && enc_utf8)
		set_fencs_unicode();
	    
	    
	    else if (options[opt_idx].indir != PV_NONE)
		set_string_option_direct(NULL, opt_idx,
				 options[opt_idx].def_val[dvi], opt_flags, 0);
	    else
	    {
		if ((opt_flags & OPT_FREE) && (flags & P_ALLOCED))
		    free_string_option(*(char_u **)(varp));
		*(char_u **)varp = options[opt_idx].def_val[dvi];
		options[opt_idx].flags &= ~P_ALLOCED;
	    }
	}
	else if (flags & P_NUM)
	{
	    if (options[opt_idx].indir == PV_SCROLL)
		win_comp_scroll(curwin);
	    else
	    {
		int def_val = (int)(long_i)options[opt_idx].def_val[dvi];

		if ((int *)varp == &curwin->w_p_so
			|| (int *)varp == &curwin->w_p_siso)
		    
		    
		    *(int *)varp = -1;
		else
		    *(int *)varp = def_val;
		
		if (both)
		    *(int *)get_varp_scope(&(options[opt_idx]), OPT_GLOBAL) =
								def_val;
	    }
	}
	else	
	{
	    
	    
	    *(int *)varp = (int)(int)(long_i)options[opt_idx].def_val[dvi];
#ifdef UNIX
	    
	    if (options[opt_idx].indir == PV_ML && getuid() == ROOT_UID)
		*(int *)varp = FALSE;
#endif
	    
	    if (both)
		*(int *)get_varp_scope(&(options[opt_idx]), OPT_GLOBAL) =
								*(int *)varp;
	}

	
	flagsp = insecure_flag(opt_idx, opt_flags);
	*flagsp = *flagsp & ~P_INSECURE;
    }

#ifdef FEAT_EVAL
    set_option_sctx_idx(opt_idx, opt_flags, current_sctx);
#endif
}


    static void
set_options_default(
    int		opt_flags)	
{
    int		i;
    win_T	*wp;
    tabpage_T	*tp;

    for (i = 0; !istermoption_idx(i); i++)
	if (!(options[i].flags & P_NODEFAULT)
		&& (opt_flags == 0
		    || (options[i].var != (char_u *)&p_enc
# if defined(FEAT_CRYPT)
			&& options[i].var != (char_u *)&p_cm
			&& options[i].var != (char_u *)&p_key
# endif
			)))
	    set_option_default(i, opt_flags, p_cp);

    
    FOR_ALL_TAB_WINDOWS(tp, wp)
	win_comp_scroll(wp);
    parse_cino(curbuf);
}


    static void
set_string_default_esc(char *name, char_u *val, int escape)
{
    char_u	*p;
    int		opt_idx;

    if (escape && vim_strchr(val, ' ') != NULL)
	p = vim_strsave_escaped(val, (char_u *)" ");
    else
	p = vim_strsave(val);
    if (p == NULL)		
	return;

    opt_idx = findoption((char_u *)name);
    if (opt_idx < 0)
    {
	vim_free(p);
	return;
    }

    if (options[opt_idx].flags & P_DEF_ALLOCED)
	vim_free(options[opt_idx].def_val[VI_DEFAULT]);
    options[opt_idx].def_val[VI_DEFAULT] = p;
    options[opt_idx].flags |= P_DEF_ALLOCED;
}

    void
set_string_default(char *name, char_u *val)
{
    set_string_default_esc(name, val, FALSE);
}


    static char_u *
find_dup_item(char_u *origval, char_u *newval, long_u flags)
{
    int	    bs = 0;
    size_t  newlen;
    char_u  *s;

    if (origval == NULL)
	return NULL;

    newlen = STRLEN(newval);
    for (s = origval; *s != NUL; ++s)
    {
	if ((!(flags & P_COMMA)
		    || s == origval
		    || (s[-1] == ',' && !(bs & 1)))
		&& STRNCMP(s, newval, newlen) == 0
		&& (!(flags & P_COMMA)
		    || s[newlen] == ','
		    || s[newlen] == NUL))
	    return s;
	
	
	
	if ((s > origval + 1
		    && s[-1] == '\\'
		    && s[-2] != ',')
		|| (s == origval + 1
		    && s[-1] == '\\'))
	    ++bs;
	else
	    bs = 0;
    }
    return NULL;
}


    void
set_number_default(char *name, int val)
{
    int		opt_idx;

    opt_idx = findoption((char_u *)name);
    if (opt_idx >= 0)
	options[opt_idx].def_val[VI_DEFAULT] = (char_u *)(long_i)val;
}

#if defined(FEAT_PROP_POPUP) || defined(PROTO)

    void
set_local_options_default(win_T *wp, int do_buffer)
{
    win_T	*save_curwin = curwin;
    int		i;

    curwin = wp;
    curbuf = curwin->w_buffer;
    block_autocmds();

    for (i = 0; !istermoption_idx(i); i++)
    {
	struct vimoption    *p = &(options[i]);
	char_u		    *varp = get_varp_scope(p, OPT_LOCAL);

	if (p->indir != PV_NONE
		&& (do_buffer || (p->indir & PV_BUF) == 0)
		&& !(options[i].flags & P_NODEFAULT)
		&& !optval_default(p, varp, FALSE))
	    set_option_default(i, OPT_FREE|OPT_LOCAL, FALSE);
    }

    unblock_autocmds();
    curwin = save_curwin;
    curbuf = curwin->w_buffer;
}
#endif

#if defined(EXITFREE) || defined(PROTO)

    void
free_all_options(void)
{
    int		i;

    for (i = 0; !istermoption_idx(i); i++)
    {
	if (options[i].indir == PV_NONE)
	{
	    
	    if ((options[i].flags & P_ALLOCED) && options[i].var != NULL)
		free_string_option(*(char_u **)options[i].var);
	    if (options[i].flags & P_DEF_ALLOCED)
		free_string_option(options[i].def_val[VI_DEFAULT]);
	}
	else if (options[i].var != VAR_WIN
		&& (options[i].flags & P_STRING))
	    
	    clear_string_option((char_u **)options[i].var);
    }
    free_operatorfunc_option();
    free_tagfunc_option();
}
#endif



    void
set_init_2(void)
{
    int		idx;

    
    
    idx = findoption((char_u *)"scroll");
    if (idx >= 0 && !(options[idx].flags & P_WAS_SET))
	set_option_default(idx, OPT_LOCAL, p_cp);
    comp_col();

    
    
    if (!option_was_set((char_u *)"window"))
	p_window = Rows - 1;
    set_number_default("window", Rows - 1);

    
#if !((defined(MSWIN)) && !defined(FEAT_GUI))
    
    
    
    idx = findoption((char_u *)"bg");
    if (idx >= 0 && !(options[idx].flags & P_WAS_SET)
						 && *term_bg_default() == 'd')
    {
	set_string_option_direct(NULL, idx, (char_u *)"dark", OPT_FREE, 0);
	
	
	options[idx].flags &= ~P_WAS_SET;
    }
#endif

#ifdef CURSOR_SHAPE
    parse_shape_opt(SHAPE_CURSOR);	
#endif
#ifdef FEAT_MOUSESHAPE
    parse_shape_opt(SHAPE_MOUSE);	
#endif
#ifdef FEAT_PRINTER
    (void)parse_printoptions(NULL);	
#endif
}


    void
set_init_3(void)
{
#if defined(UNIX) || defined(MSWIN)

    char_u  *p;
    int	    idx_srr;
    int	    do_srr;
# ifdef FEAT_QUICKFIX
    int	    idx_sp;
    int	    do_sp;
# endif

    idx_srr = findoption((char_u *)"srr");
    if (idx_srr < 0)
	do_srr = FALSE;
    else
	do_srr = !(options[idx_srr].flags & P_WAS_SET);
# ifdef FEAT_QUICKFIX
    idx_sp = findoption((char_u *)"sp");
    if (idx_sp < 0)
	do_sp = FALSE;
    else
	do_sp = !(options[idx_sp].flags & P_WAS_SET);
# endif
    p = get_isolated_shell_name();
    if (p != NULL)
    {
	
	
	if (	   fnamecmp(p, "csh") == 0
		|| fnamecmp(p, "tcsh") == 0
# if defined(MSWIN)	
		|| fnamecmp(p, "csh.exe") == 0
		|| fnamecmp(p, "tcsh.exe") == 0
# endif
	   )
	{
# if defined(FEAT_QUICKFIX)
	    if (do_sp)
	    {
#  ifdef MSWIN
		p_sp = (char_u *)">&";
#  else
		p_sp = (char_u *)"|& tee";
#  endif
		options[idx_sp].def_val[VI_DEFAULT] = p_sp;
	    }
# endif
	    if (do_srr)
	    {
		p_srr = (char_u *)">&";
		options[idx_srr].def_val[VI_DEFAULT] = p_srr;
	    }
	}
# ifdef MSWIN
	
	
	else if (   fnamecmp(p, "powershell") == 0
		    || fnamecmp(p, "powershell.exe") == 0
		)
	{
# if defined(FEAT_QUICKFIX)
		if (do_sp)
		{
		    p_sp = (char_u *)"2>&1 | Out-File -Encoding default";
		    options[idx_sp].def_val[VI_DEFAULT] = p_sp;
		}
# endif
		if (do_srr)
		{
		    p_srr = (char_u *)"2>&1 | Out-File -Encoding default";
		    options[idx_srr].def_val[VI_DEFAULT] = p_srr;
		}
	}
#endif
	else
	    
	    if (       fnamecmp(p, "sh") == 0
		    || fnamecmp(p, "ksh") == 0
		    || fnamecmp(p, "mksh") == 0
		    || fnamecmp(p, "pdksh") == 0
		    || fnamecmp(p, "zsh") == 0
		    || fnamecmp(p, "zsh-beta") == 0
		    || fnamecmp(p, "bash") == 0
		    || fnamecmp(p, "fish") == 0
		    || fnamecmp(p, "ash") == 0
		    || fnamecmp(p, "dash") == 0
		    || fnamecmp(p, "pwsh") == 0
# ifdef MSWIN
		    || fnamecmp(p, "cmd") == 0
		    || fnamecmp(p, "sh.exe") == 0
		    || fnamecmp(p, "ksh.exe") == 0
		    || fnamecmp(p, "mksh.exe") == 0
		    || fnamecmp(p, "pdksh.exe") == 0
		    || fnamecmp(p, "zsh.exe") == 0
		    || fnamecmp(p, "zsh-beta.exe") == 0
		    || fnamecmp(p, "bash.exe") == 0
		    || fnamecmp(p, "cmd.exe") == 0
		    || fnamecmp(p, "dash.exe") == 0
		    || fnamecmp(p, "pwsh.exe") == 0
# endif
		    )
	    {
# if defined(FEAT_QUICKFIX)
		if (do_sp)
		{
#  ifdef MSWIN
		    p_sp = (char_u *)">%s 2>&1";
#  else
		    if (fnamecmp(p, "pwsh") == 0)
			p_sp = (char_u *)">%s 2>&1";
		    else
			p_sp = (char_u *)"2>&1| tee";
#  endif
		    options[idx_sp].def_val[VI_DEFAULT] = p_sp;
		}
# endif
		if (do_srr)
		{
		    p_srr = (char_u *)">%s 2>&1";
		    options[idx_srr].def_val[VI_DEFAULT] = p_srr;
		}
	    }
	vim_free(p);
    }
#endif

#if defined(MSWIN)
    
    if (strstr((char *)gettail(p_sh), "powershell") != NULL)
    {
	int	idx_opt;

	idx_opt = findoption((char_u *)"shcf");
	if (idx_opt >= 0 && !(options[idx_opt].flags & P_WAS_SET))
	{
	    p_shcf = (char_u*)"-Command";
	    options[idx_opt].def_val[VI_DEFAULT] = p_shcf;
	}

	idx_opt = findoption((char_u *)"sxq");
	if (idx_opt >= 0 && !(options[idx_opt].flags & P_WAS_SET))
	{
	    p_sxq = (char_u*)"\"";
	    options[idx_opt].def_val[VI_DEFAULT] = p_sxq;
	}
    }
    else if (strstr((char *)gettail(p_sh), "sh") != NULL)
    {
	int	idx3;

	idx3 = findoption((char_u *)"shcf");
	if (idx3 >= 0 && !(options[idx3].flags & P_WAS_SET))
	{
	    p_shcf = (char_u *)"-c";
	    options[idx3].def_val[VI_DEFAULT] = p_shcf;
	}

	
	idx3 = findoption((char_u *)"sxq");
	if (idx3 >= 0 && !(options[idx3].flags & P_WAS_SET))
	{
	    p_sxq = (char_u *)"\"";
	    options[idx3].def_val[VI_DEFAULT] = p_sxq;
	}
    }
    else if (strstr((char *)gettail(p_sh), "cmd.exe") != NULL)
    {
	int	idx3;

	
	idx3 = findoption((char_u *)"sxq");
	if (idx3 >= 0 && !(options[idx3].flags & P_WAS_SET))
	{
	    p_sxq = (char_u *)"(";
	    options[idx3].def_val[VI_DEFAULT] = p_sxq;
	}

	idx3 = findoption((char_u *)"shcf");
	if (idx3 >= 0 && !(options[idx3].flags & P_WAS_SET))
	{
	    p_shcf = (char_u *)"/c";
	    options[idx3].def_val[VI_DEFAULT] = p_shcf;
	}
    }
#endif

    if (BUFEMPTY())
    {
	int idx_ffs = findoption((char_u *)"ffs");

	
	if (idx_ffs >= 0 && (options[idx_ffs].flags & P_WAS_SET))
	    set_fileformat(default_fileformat(), OPT_LOCAL);
    }

    set_title_defaults();
}

#if defined(FEAT_MULTI_LANG) || defined(PROTO)

    void
set_helplang_default(char_u *lang)
{
    int		idx;

    if (lang == NULL || STRLEN(lang) < 2)	
	return;
    idx = findoption((char_u *)"hlg");
    if (idx < 0 || (options[idx].flags & P_WAS_SET))
	return;

    if (options[idx].flags & P_ALLOCED)
	free_string_option(p_hlg);
    p_hlg = vim_strsave(lang);
    if (p_hlg == NULL)
	p_hlg = empty_option;
    else
    {
	
	if (STRNICMP(p_hlg, "zh_", 3) == 0 && STRLEN(p_hlg) >= 5)
	{
	    p_hlg[0] = TOLOWER_ASC(p_hlg[3]);
	    p_hlg[1] = TOLOWER_ASC(p_hlg[4]);
	}
	
	else if (STRLEN(p_hlg) >= 1 && *p_hlg == 'C')
	{
	    p_hlg[0] = 'e';
	    p_hlg[1] = 'n';
	}
	p_hlg[2] = NUL;
    }
    options[idx].flags |= P_ALLOCED;
}
#endif


    void
set_title_defaults(void)
{
    int	    idx1;
    int    val;

    
    
    
    idx1 = findoption((char_u *)"title");
    if (idx1 >= 0 && !(options[idx1].flags & P_WAS_SET))
    {
#ifdef FEAT_GUI
	if (gui.starting || gui.in_use)
	    val = TRUE;
	else
#endif
	    val = mch_can_restore_title();
	options[idx1].def_val[VI_DEFAULT] = (char_u *)(long_i)val;
	p_title = val;
    }
    idx1 = findoption((char_u *)"icon");
    if (idx1 < 0 || (options[idx1].flags & P_WAS_SET))
    {
	return;
    }

#ifdef FEAT_GUI
    if (gui.starting || gui.in_use)
	val = TRUE;
    else
#endif
	val = mch_can_restore_icon();
    options[idx1].def_val[VI_DEFAULT] = (char_u *)(long_i)val;
    p_icon = val;
}

    void
ex_set(exarg_T *eap)
{
    int		flags = 0;

    if (eap->cmdidx == CMD_setlocal)
	flags = OPT_LOCAL;
    else if (eap->cmdidx == CMD_setglobal)
	flags = OPT_GLOBAL;
#if defined(FEAT_EVAL) && defined(FEAT_BROWSE)
    if ((cmdmod.cmod_flags & CMOD_BROWSE) && flags == 0)
	ex_options(eap);
    else
#endif
    {
	if (eap->forceit)
	    flags |= OPT_ONECOLUMN;
	(void)do_set(eap->arg, flags);
    }
}


typedef enum {
    PREFIX_NO = 0,	
    PREFIX_NONE,	
    PREFIX_INV,		
} set_prefix_T;


    static set_prefix_T
get_option_prefix(char_u **argp)
{
    int		prefix = PREFIX_NONE;
    char_u	*arg = *argp;

    if (STRNCMP(arg, "no", 2) == 0 && STRNCMP(arg, "novice", 6) != 0)
    {
	prefix = PREFIX_NO;
	arg += 2;
    }
    else if (STRNCMP(arg, "inv", 3) == 0)
    {
	prefix = PREFIX_INV;
	arg += 3;
    }

    *argp = arg;
    return prefix;
}


    static int
parse_option_name(char_u *arg, int *opt_idxp, int *lenp, int *keyp)
{
    int	key = 0;
    int	len;
    int	opt_idx;

    if (*arg == '<')
    {
	opt_idx = -1;
	
	if (arg[1] == 't' && arg[2] == '_' && arg[3] && arg[4])
	    len = 5;
	else
	{
	    len = 1;
	    while (arg[len] != NUL && arg[len] != '>')
		++len;
	}
	if (arg[len] != '>')
	    return FAIL;

	arg[len] = NUL;			    
	if (arg[1] == 't' && arg[2] == '_') 
	    opt_idx = findoption(arg + 1);
	arg[len++] = '>';		    
	if (opt_idx == -1)
	    key = find_key_option(arg + 1, TRUE);
    }
    else
    {
	int	nextchar;   

	len = 0;
	
	if (arg[0] == 't' && arg[1] == '_' && arg[2] && arg[3])
	    len = 4;
	else
	    while (ASCII_ISALNUM(arg[len]) || arg[len] == '_')
		++len;
	nextchar = arg[len];
	arg[len] = NUL;			    
	opt_idx = findoption(arg);
	arg[len] = nextchar;		    
	if (opt_idx == -1)
	    key = find_key_option(arg, FALSE);
    }

    *keyp = key;
    *lenp = len;
    *opt_idxp = opt_idx;

    return OK;
}


    static set_op_T
get_opt_op(char_u *arg)
{
    set_op_T op = OP_NONE;

    if (*arg != NUL && *(arg + 1) == '=')
    {
	if (*arg == '+')
	    op = OP_ADDING;		
	else if (*arg == '^')
	    op = OP_PREPENDING;		
	else if (*arg == '-')
	    op = OP_REMOVING;		
    }

    return op;
}


    static int
validate_opt_idx(int opt_idx, int opt_flags, long_u flags, char **errmsg)
{
    
    
    if ((opt_flags & OPT_WINONLY)
	    && (opt_idx < 0 || options[opt_idx].var != VAR_WIN))
	return FAIL;

    
    if ((opt_flags & OPT_NOWIN) && opt_idx >= 0
	    && options[opt_idx].var == VAR_WIN)
	return FAIL;

    
    if (opt_flags & OPT_MODELINE)
    {
	if (flags & (P_SECURE | P_NO_ML))
	{
	    *errmsg = e_not_allowed_in_modeline;
	    return FAIL;
	}
	if ((flags & P_MLE) && !p_mle)
	{
	    *errmsg = e_not_allowed_in_modeline_when_modelineexpr_is_off;
	    return FAIL;
	}
#ifdef FEAT_DIFF
	
	
	
	if (curwin->w_p_diff
		&& opt_idx >= 0  
		&& (
# ifdef FEAT_FOLDING
		    options[opt_idx].indir == PV_FDM ||
# endif
		    options[opt_idx].indir == PV_WRAP))
	    return FAIL;
#endif
    }

#ifdef HAVE_SANDBOX
    
    if (sandbox != 0 && (flags & P_SECURE))
    {
	*errmsg = e_not_allowed_in_sandbox;
	return FAIL;
    }
#endif

    return OK;
}


    static char_u *
stropt_get_default_val(
    int		opt_idx,
    char_u	*varp,
    int		flags,
    int		cp_val)
{
    char_u	*newval;

    newval = options[opt_idx].def_val[((flags & P_VI_DEF) || cp_val)
	? VI_DEFAULT : VIM_DEFAULT];
    if ((char_u **)varp == &p_bg)
    {
	
#ifdef FEAT_GUI
	if (gui.in_use)
	    newval = gui_bg_default();
	else
#endif
	    newval = term_bg_default();
    }
    else if ((char_u **)varp == &p_fencs && enc_utf8)
	newval = fencs_utf8_default;

    
    
    
    if (newval == NULL)
	newval = empty_option;
    else
    {
	char_u *s = option_expand(opt_idx, newval);
	if (s == NULL)
	    s = newval;
	newval = vim_strsave(s);
    }

    return newval;
}


    static void
opt_backspace_nr2str(
    char_u	*varp,
    char_u	**origval_p,
    char_u	**origval_l_p,
    char_u	**origval_g_p,
    char_u	**oldval_p)
{
    int		i = getdigits((char_u **)varp);

    switch (i)
    {
	case 0:
	    *(char_u **)varp = empty_option;
	    break;
	case 1:
	    *(char_u **)varp = vim_strsave((char_u *)"indent,eol");
	    break;
	case 2:
	    *(char_u **)varp = vim_strsave((char_u *)"indent,eol,start");
	    break;
	case 3:
	    *(char_u **)varp = vim_strsave((char_u *)"indent,eol,nostop");
	    break;
    }
    vim_free(*oldval_p);
    if (*origval_p == *oldval_p)
	*origval_p = *(char_u **)varp;
    if (*origval_l_p == *oldval_p)
	*origval_l_p = *(char_u **)varp;
    if (*origval_g_p == *oldval_p)
	*origval_g_p = *(char_u **)varp;
    *oldval_p = *(char_u **)varp;
}


    static char_u *
opt_whichwrap_nr2str(char_u **argp, char_u *whichwrap)
{
    *whichwrap = NUL;
    int i = getdigits(argp);
    if (i & 1)
	STRCAT(whichwrap, "b,");
    if (i & 2)
	STRCAT(whichwrap, "s,");
    if (i & 4)
	STRCAT(whichwrap, "h,l,");
    if (i & 8)
	STRCAT(whichwrap, "<,>,");
    if (i & 16)
	STRCAT(whichwrap, "[,],");
    if (*whichwrap != NUL)	
	whichwrap[STRLEN(whichwrap) - 1] = NUL;

    return whichwrap;
}


    static char_u *
stropt_copy_value(
    char_u	*origval,
    char_u	**argp,
    set_op_T	op,
    int		flags UNUSED)
{
    char_u	*arg = *argp;
    unsigned	newlen;
    char_u	*newval;
    char_u	*s = NULL;

    
    newlen = (unsigned)STRLEN(arg) + 1;
    if (op != OP_NONE)
	newlen += (unsigned)STRLEN(origval) + 1;
    newval = alloc(newlen);
    if (newval == NULL)  
	return NULL;
    s = newval;

    
    
    
    
    
    while (*arg != NUL && !VIM_ISWHITE(*arg))
    {
	int i;

	if (*arg == '\\' && arg[1] != NUL
#ifdef BACKSLASH_IN_FILENAME
		&& !((flags & P_EXPAND)
		    && vim_isfilec(arg[1])
		    && !VIM_ISWHITE(arg[1])
		    && (arg[1] != '\\'
			|| (s == newval && arg[2] != '\\')))
#endif
	   )
	    ++arg;	
	if (has_mbyte && (i = (*mb_ptr2len)(arg)) > 1)
	{
	    
	    mch_memmove(s, arg, (size_t)i);
	    arg += i;
	    s += i;
	}
	else
	    *s++ = *arg++;
    }
    *s = NUL;

    *argp = arg;
    return newval;
}


    static char_u *
stropt_expand_envvar(
    int		opt_idx,
    char_u	*origval,
    char_u	*newval,
    set_op_T	op)
{
    char_u *s = option_expand(opt_idx, newval);
    if (s == NULL)
	return newval;

    vim_free(newval);
    unsigned newlen = (unsigned)STRLEN(s) + 1;
    if (op != OP_NONE)
	newlen += (unsigned)STRLEN(origval) + 1;

    newval = alloc(newlen);
    if (newval == NULL)
	return NULL;

    STRCPY(newval, s);

    return newval;
}


    static void
stropt_concat_with_comma(
    char_u	*origval,
    char_u	*newval,
    set_op_T	op,
    int		flags)
{
    int		len = 0;

    int comma = ((flags & P_COMMA) && *origval != NUL && *newval != NUL);
    if (op == OP_ADDING)
    {
	len = (int)STRLEN(origval);
	
	if (comma && len > 1
		&& (flags & P_ONECOMMA) == P_ONECOMMA
		&& origval[len - 1] == ','
		&& origval[len - 2] != '\\')
	    len--;
	mch_memmove(newval + len + comma, newval, STRLEN(newval) + 1);
	mch_memmove(newval, origval, (size_t)len);
    }
    else
    {
	len = (int)STRLEN(newval);
	STRMOVE(newval + len + comma, origval);
    }
    if (comma)
	newval[len] = ',';
}


    static void
stropt_remove_val(
    char_u	*origval,
    char_u	*newval,
    int		flags,
    char_u	*strval,
    int		len)
{
    
    
    STRCPY(newval, origval);
    if (*strval)
    {
	
	if (flags & P_COMMA)
	{
	    if (strval == origval)
	    {
		
		if (strval[len] == ',')
		    ++len;
	    }
	    else
	    {
		
		--strval;
		++len;
	    }
	}
	STRMOVE(newval + (strval - origval), strval + len);
    }
}


    static void
stropt_remove_dupflags(char_u *newval, int flags)
{
    char_u	*s = newval;

    
    while (*s)
    {
	
	if (flags & P_ONECOMMA)
	{
	    if (*s != ',' && *(s + 1) == ',' && vim_strchr(s + 2, *s) != NULL)
	    {
		
		STRMOVE(s, s + 2);
		continue;
	    }
	}
	else
	{
	    if ((!(flags & P_COMMA) || *s != ',')
		    && vim_strchr(s + 1, *s) != NULL)
	    {
		STRMOVE(s, s + 1);
		continue;
	    }
	}
	++s;
    }
}


    static char_u *
stropt_get_newval(
    int		nextchar,
    int		opt_idx,
    char_u	**argp,
    char_u	*varp,
    char_u	**origval_arg,
    char_u	**origval_l_arg,
    char_u	**origval_g_arg,
    char_u	**oldval_arg,
    set_op_T    *op_arg,
    int		flags,
    int		cp_val)
{
    char_u	*arg = *argp;
    char_u	*origval = *origval_arg;
    char_u	*origval_l = *origval_l_arg;
    char_u	*origval_g = *origval_g_arg;
    char_u	*oldval = *oldval_arg;
    set_op_T    op = *op_arg;
    char_u	*save_arg = NULL;
    char_u	*newval;
    char_u	*s = NULL;
    char_u	whichwrap[80];

    if (nextchar == '&')	
	newval = stropt_get_default_val(opt_idx, varp, flags, cp_val);
    else if (nextchar == '<')	
	newval = vim_strsave(*(char_u **)get_varp_scope(
					     &(options[opt_idx]), OPT_GLOBAL));
    else
    {
	++arg;	

	
	
	if (varp == (char_u *)&p_kp && (*arg == NUL || *arg == ' '))
	{
	    save_arg = arg;
	    arg = (char_u *)":help";
	}
	
	else if (varp == (char_u *)&p_bs && VIM_ISDIGIT(**(char_u **)varp))
	    opt_backspace_nr2str(varp, &origval, &origval_l, &origval_g,
								&oldval);
	else if (varp == (char_u *)&p_ww && VIM_ISDIGIT(*arg))
	{
	    
	    
	    char_u *t = opt_whichwrap_nr2str(&arg, whichwrap);
	    save_arg = arg;
	    arg = t;
	}
	
	
	else if (*arg == '>' && (varp == (char_u *)&p_dir
		    || varp == (char_u *)&p_bdir))
	    ++arg;

	
	newval = stropt_copy_value(origval, &arg, op, flags);
	if (newval == NULL)
	    goto done;

	
	
	if (op == OP_NONE || (flags & P_COMMA))
	{
	    newval = stropt_expand_envvar(opt_idx, origval, newval, op);
	    if (newval == NULL)
		goto done;
	}

	
	
	int len = 0;
	if (op == OP_REMOVING || (flags & P_NODUP))
	{
	    len = (int)STRLEN(newval);
	    s = find_dup_item(origval, newval, flags);

	    
	    if ((op == OP_ADDING || op == OP_PREPENDING) && s != NULL)
	    {
		op = OP_NONE;
		STRCPY(newval, origval);
	    }

	    
	    if (s == NULL)
		s = origval + (int)STRLEN(origval);
	}

	
	if (op == OP_ADDING || op == OP_PREPENDING)
	    stropt_concat_with_comma(origval, newval, op, flags);
	else if (op == OP_REMOVING)
	    
	    
	    stropt_remove_val(origval, newval, flags, s, len);

	if (flags & P_FLAGLIST)
	    
	    stropt_remove_dupflags(newval, flags);
    }

done:
    if (save_arg != NULL)
	arg = save_arg;  
    *argp = arg;
    *origval_arg = origval;
    *origval_l_arg = origval_l;
    *origval_g_arg = origval_g;
    *oldval_arg = oldval;
    *op_arg = op;

    return newval;
}


    static int
do_set_option_string(
	int	    opt_idx,
	int	    opt_flags,
	char_u	    **argp,
	int	    nextchar,
	set_op_T    op_arg,
	long_u	    flags,
	int	    cp_val,
	char_u	    *varp_arg,
	char	    *errbuf,
	size_t	    errbuflen,
	int	    *value_checked,
	char	    **errmsg)
{
    char_u	*arg = *argp;
    set_op_T    op = op_arg;
    char_u	*varp = varp_arg;
    char_u	*oldval = NULL; 
    char_u	*newval;
    char_u	*origval = NULL;
    char_u	*origval_l = NULL;
    char_u	*origval_g = NULL;
#if defined(FEAT_EVAL)
    char_u	*saved_origval = NULL;
    char_u	*saved_origval_l = NULL;
    char_u	*saved_origval_g = NULL;
    char_u	*saved_newval = NULL;
#endif

    
    
    
    if ((opt_flags & (OPT_LOCAL | OPT_GLOBAL)) == 0
	    && ((int)options[opt_idx].indir & PV_BOTH))
	varp = options[opt_idx].var;

    
    oldval = *(char_u **)varp;

    if ((opt_flags & (OPT_LOCAL | OPT_GLOBAL)) == 0)
    {
	origval_l = *(char_u **)get_varp_scope(
			   &(options[opt_idx]), OPT_LOCAL);
	origval_g = *(char_u **)get_varp_scope(
			  &(options[opt_idx]), OPT_GLOBAL);

	
	
	if (((int)options[opt_idx].indir & PV_BOTH)
						  && origval_l == empty_option)
	    origval_l = origval_g;
    }

    
    
    if (((int)options[opt_idx].indir & PV_BOTH) && (opt_flags & OPT_LOCAL))
	origval = *(char_u **)get_varp(&options[opt_idx]);
    else
	origval = oldval;

    
    newval = stropt_get_newval(nextchar, opt_idx, &arg, varp, &origval,
				&origval_l, &origval_g, &oldval, &op, flags,
				cp_val);

    
    *(char_u **)(varp) = newval;
    if (newval == NULL)
	*(char_u **)(varp) = empty_option;

#if defined(FEAT_EVAL)
    if (!starting
# ifdef FEAT_CRYPT
	    && options[opt_idx].indir != PV_KEY
# endif
		      && origval != NULL && newval != NULL)
    {
	
	saved_origval = vim_strsave(origval);
	
	
	saved_newval = vim_strsave(newval);
	if (origval_l != NULL)
	    saved_origval_l = vim_strsave(origval_l);
	if (origval_g != NULL)
	    saved_origval_g = vim_strsave(origval_g);
    }
#endif

    {
	long_u	*p = insecure_flag(opt_idx, opt_flags);
	int	secure_saved = secure;

	
	
	
	
	if ((opt_flags & OPT_MODELINE)
#ifdef HAVE_SANDBOX
	      || sandbox != 0
#endif
	      || (op != OP_NONE && (*p & P_INSECURE)))
	    secure = 1;

	
	
	
	*errmsg = did_set_string_option(
			opt_idx, (char_u **)varp, oldval, newval, errbuf,
			errbuflen, opt_flags, op, value_checked);

	secure = secure_saved;
    }

#if defined(FEAT_EVAL)
    if (*errmsg == NULL)
	trigger_optionset_string(opt_idx, opt_flags, saved_origval,
			       saved_origval_l, saved_origval_g, saved_newval);
    vim_free(saved_origval);
    vim_free(saved_origval_l);
    vim_free(saved_origval_g);
    vim_free(saved_newval);
#endif

    *argp = arg;
    return *errmsg == NULL ? OK : FAIL;
}


    static char *
do_set_option_bool(
    int		opt_idx,
    int		opt_flags,
    set_prefix_T prefix,
    long_u	flags,
    char_u	*varp,
    int		nextchar,
    int		afterchar,
    int		cp_val)

{
    varnumber_T	value;

    if (nextchar == '=' || nextchar == ':')
	return e_invalid_argument;
    if (opt_idx < 0 || varp == NULL)
	return NULL;  

    
    
    
    if (nextchar == '!')
	value = *(int *)(varp) ^ 1;
    else if (nextchar == '&')
	value = (int)(int)(long_i)options[opt_idx].def_val[
	    ((flags & P_VI_DEF) || cp_val) ? VI_DEFAULT : VIM_DEFAULT];
    else if (nextchar == '<')
    {
	
	if ((int *)varp == &curbuf->b_p_ar && opt_flags == OPT_LOCAL)
	    value = -1;
	else
	    value = *(int *)get_varp_scope(&(options[opt_idx]), OPT_GLOBAL);
    }
    else
    {
	
	
	if (nextchar != NUL && !VIM_ISWHITE(afterchar))
	    return e_trailing_characters;
	if (prefix == PREFIX_INV)
	    value = *(int *)(varp) ^ 1;
	else
	    value = prefix == PREFIX_NO ? 0 : 1;
    }

    return set_bool_option(opt_idx, varp, (int)value, opt_flags);
}


    static char *
do_set_option_numeric(
    int		opt_idx,
    int		opt_flags,
    char_u	**argp,
    int		nextchar,
    set_op_T	op,
    long_u	flags,
    int		cp_val,
    char_u	*varp,
    char	*errbuf,
    size_t	errbuflen)
{
    char_u		*arg = *argp;
    varnumber_T		value;
    int			i;
    char		*errmsg = NULL;

    if (opt_idx < 0 || varp == NULL)
	return NULL;  
		      
    
    ++arg;
    if (nextchar == '&')
	value = (int)(long_i)options[opt_idx].def_val[
	    ((flags & P_VI_DEF) || cp_val) ? VI_DEFAULT : VIM_DEFAULT];
    else if (nextchar == '<')
    {
	if ((int *)varp == &curbuf->b_p_ul && opt_flags == OPT_LOCAL)
	    
	    value = NO_LOCAL_UNDOLEVEL;
	else if (opt_flags == OPT_LOCAL
		    && ((int *)varp == &curwin->w_p_siso
		     || (int *)varp == &curwin->w_p_so))
	    
	    value = -1;
	else
	    value = *(int *)get_varp_scope(&(options[opt_idx]), OPT_GLOBAL);
    }
    else if (((int *)varp == &p_wc || (int *)varp == &p_wcm)
	    && (*arg == '<'
		|| *arg == '^'
		|| (*arg != NUL
		    && (!arg[1] || VIM_ISWHITE(arg[1]))
		    && !VIM_ISDIGIT(*arg))))
    {
	value = string_to_key(arg, FALSE);
	if (value == 0 && (int *)varp != &p_wcm)
	{
	    errmsg = e_invalid_argument;
	    goto skip;
	}
    }
    else if (*arg == '-' || VIM_ISDIGIT(*arg))
    {
	
	vim_str2nr(arg, NULL, &i, STR2NR_ALL, &value, NULL, 0, TRUE, NULL);
	if (i == 0 || (arg[i] != NUL && !VIM_ISWHITE(arg[i])))
	{
	    errmsg = e_number_required_after_equal;
	    goto skip;
	}
    }
    else
    {
	errmsg = e_number_required_after_equal;
	goto skip;
    }

    if (op == OP_ADDING)
	value = *(int *)varp + value;
    else if (op == OP_PREPENDING)
	value = *(int *)varp * value;
    else if (op == OP_REMOVING)
	value = *(int *)varp - value;

    errmsg = set_num_option(opt_idx, varp, value, errbuf, errbuflen,
								opt_flags);

skip:
    *argp = arg;
    return errmsg;
}


    static char *
do_set_option_keycode(char_u **argp, char_u *key_name, int nextchar)
{
    char_u	*arg = *argp;
    char_u	*p;

    if (nextchar == '&')
    {
	if (add_termcap_entry(key_name, TRUE) == FAIL)
	    return e_not_found_in_termcap;
    }
    else
    {
	++arg; 
	for (p = arg; *p && !VIM_ISWHITE(*p); ++p)
	    if (*p == '\\' && p[1] != NUL)
		++p;
	nextchar = *p;
	*p = NUL;
	add_termcode(key_name, arg, FALSE);
	*p = nextchar;
    }
    if (full_screen)
	ttest(FALSE);
    redraw_all_later(UPD_CLEAR);

    *argp = arg;
    return NULL;
}


    static char *
do_set_option_value(
    int		opt_idx,
    int		opt_flags,
    char_u	**argp,
    set_prefix_T prefix,
    set_op_T	op,
    long_u	flags,
    char_u	*varp,
    char_u	*key_name,
    int		nextchar,
    int		afterchar,
    int		cp_val,
    int		*stopopteval,
    char	*errbuf,
    size_t	errbuflen)
{
    int		value_checked = FALSE;
    char	*errmsg = NULL;
    char_u	*arg = *argp;

    if (flags & P_BOOL)
    {
	
	errmsg = do_set_option_bool(opt_idx, opt_flags, prefix, flags, varp,
						nextchar, afterchar, cp_val);
	if (errmsg != NULL)
	    goto skip;
    }
    else
    {
	
	if (vim_strchr((char_u *)"=:&<", nextchar) == NULL
		|| prefix != PREFIX_NONE)
	{
	    errmsg = e_invalid_argument;
	    goto skip;
	}

	if (flags & P_NUM)
	{
	    
	    errmsg = do_set_option_numeric(opt_idx, opt_flags, &arg, nextchar,
						op, flags, cp_val, varp,
						errbuf, errbuflen);
	    if (errmsg != NULL)
		goto skip;
	}
	else if (opt_idx >= 0)
	{
	    
	    if (do_set_option_string(opt_idx, opt_flags, &arg, nextchar, op,
					flags, cp_val, varp, errbuf, errbuflen,
					&value_checked, &errmsg) == FAIL)
	    {
		if (errmsg != NULL)
		    goto skip;
		*stopopteval = TRUE;
		goto skip;
	    }
	}
	else
	{
	    
	    errmsg = do_set_option_keycode(&arg, key_name, nextchar);
	    if (errmsg != NULL)
		goto skip;
	}
    }

    if (opt_idx >= 0)
	did_set_option(opt_idx, opt_flags, op == OP_NONE, value_checked);

skip:
    *argp = arg;
    return errmsg;
}


    static char *
do_set_option(
    int		opt_flags,
    char_u	**argp,
    char_u	*arg_start,
    char_u	**startarg,
    int		*did_show,
    int		*stopopteval,
    char	*errbuf,
    size_t	errbuflen)
{
    int		opt_idx;
    char_u	*arg;
    set_prefix_T prefix;	
    set_op_T	op;
    long_u	flags;		
    char_u	*varp;		
    char_u	key_name[2];
    int		nextchar;	
    int		afterchar;	
    char	*errmsg = NULL;
    int		key;
    int		len;

    prefix = get_option_prefix(argp);
    arg = *argp;

    
    key = 0;
    if (parse_option_name(arg, &opt_idx, &len, &key) == FAIL)
	return e_invalid_argument;

    
    afterchar = arg[len];

    if (in_vim9script())
    {
	char_u *p = skipwhite(arg + len);

	
	if (p > arg + len && (p[0] == '='
		    || (vim_strchr((char_u *)"+-^", p[0]) != NULL
			&& p[1] == '=')))
	{
	    errmsg = e_no_white_space_allowed_between_option_and;
	    arg = p;
	    *startarg = p;
	    goto skip;
	}
    }
    else
	
	while (VIM_ISWHITE(arg[len]))
	    ++len;

    op = get_opt_op(arg + len);
    if (op != OP_NONE)
	len++;

    nextchar = arg[len];

    if (opt_idx == -1 && key == 0)	
    {
	if (in_vim9script() && arg > arg_start
		&& vim_strchr((char_u *)"!&<", *arg) != NULL)
	    errmsg = e_no_white_space_allowed_between_option_and;
	else
	    errmsg = e_unknown_option;
	goto skip;
    }

    if (opt_idx >= 0)
    {
	if (options[opt_idx].var == NULL)   
	{
	    
	    
	    if (vim_strchr((char_u *)"=:!&<", nextchar) == NULL
		    && (!(options[opt_idx].flags & P_BOOL)
			|| nextchar == '?'))
		errmsg = e_option_not_supported;
	    goto skip;
	}

	flags = options[opt_idx].flags;
	varp = get_varp_scope(&(options[opt_idx]), opt_flags);
    }
    else
    {
	flags = P_STRING;
	varp = NULL;
	if (key < 0)
	{
	    key_name[0] = KEY2TERMCAP0(key);
	    key_name[1] = KEY2TERMCAP1(key);
	}
	else
	{
	    key_name[0] = KS_KEY;
	    key_name[1] = (key & 0xff);
	}
    }

    
    if (validate_opt_idx(opt_idx, opt_flags, flags, &errmsg) == FAIL)
	goto skip;

    int cp_val = p_cp;
    if (vim_strchr((char_u *)"?=:!&<", nextchar) != NULL)
    {
	arg += len;
	if (nextchar == '&' && arg[1] == 'v' && arg[2] == 'i')
	{
	    if (arg[3] == 'm')	
	    {
		cp_val = FALSE;
		arg += 3;
	    }
	    else		
	    {
		cp_val = TRUE;
		arg += 2;
	    }
	}
	if (vim_strchr((char_u *)"?!&<", nextchar) != NULL
		&& arg[1] != NUL && !VIM_ISWHITE(arg[1]))
	{
	    errmsg = e_trailing_characters;
	    goto skip;
	}
    }

    
    
    if (nextchar == '?'
	    || (prefix == PREFIX_NONE
		&& vim_strchr((char_u *)"=:&<", nextchar) == NULL
		&& !(flags & P_BOOL)))
    {
	
	if (*did_show)
	    msg_putchar('\n');	    
	else
	{
	    gotocmdline(TRUE);	    
	    *did_show = TRUE;	    
	}
	if (opt_idx >= 0)
	{
	    showoneopt(&options[opt_idx], opt_flags);
#ifdef FEAT_EVAL
	    if (p_verbose > 0)
	    {
		
		if (varp == options[opt_idx].var)
		    last_set_msg(options[opt_idx].script_ctx);
		else if ((int)options[opt_idx].indir & PV_WIN)
		    last_set_msg(curwin->w_p_script_ctx[
			    (int)options[opt_idx].indir & PV_MASK]);
		else if ((int)options[opt_idx].indir & PV_BUF)
		    last_set_msg(curbuf->b_p_script_ctx[
			    (int)options[opt_idx].indir & PV_MASK]);
	    }
#endif
	}
	else
	{
	    char_u	    *p;

	    p = find_termcode(key_name);
	    if (p == NULL)
	    {
		errmsg = e_key_code_not_set;
		goto skip;
	    }
	    else
		(void)show_one_termcode(key_name, p, TRUE);
	}
	if (nextchar != '?'
		&& nextchar != NUL && !VIM_ISWHITE(afterchar))
	    errmsg = e_trailing_characters;
    }
    else
    {
	errmsg = do_set_option_value(opt_idx, opt_flags, &arg, prefix, op,
					flags, varp, key_name, nextchar,
					afterchar, cp_val, stopopteval, errbuf,
					errbuflen);
    }

skip:
    *argp = arg;
    return errmsg;
}


    int
do_set(
    char_u	*arg_start,	
    int		opt_flags)
{
    char_u	*arg = arg_start;
    int		i;
    int		did_show = FALSE;   

    if (*arg == NUL)
    {
	showoptions(0, opt_flags);
	did_show = TRUE;
	goto theend;
    }

    while (*arg != NUL)		
    {
	if (STRNCMP(arg, "all", 3) == 0 && !ASCII_ISALPHA(arg[3])
						&& !(opt_flags & OPT_MODELINE))
	{
	    
	    
	    arg += 3;
	    if (*arg == '&')
	    {
		++arg;
		
		set_options_default(OPT_FREE | opt_flags);
		didset_options();
		didset_options2();
		redraw_all_later(UPD_CLEAR);
	    }
	    else
	    {
		showoptions(1, opt_flags);
		did_show = TRUE;
	    }
	}
	else if (STRNCMP(arg, "termcap", 7) == 0 && !(opt_flags & OPT_MODELINE))
	{
	    showoptions(2, opt_flags);
	    show_termcodes(opt_flags);
	    did_show = TRUE;
	    arg += 7;
	}
	else
	{
	    int		stopopteval = FALSE;
	    char	*errmsg = NULL;
	    char	errbuf[ERR_BUFLEN];
	    char_u	*startarg = arg;

	    errmsg = do_set_option(opt_flags, &arg, arg_start, &startarg,
					&did_show, &stopopteval, errbuf,
					ERR_BUFLEN);
	    if (stopopteval)
		break;

	    
	    
	    
	    
	    for (i = 0; i < 2 ; ++i)
	    {
		while (*arg != NUL && !VIM_ISWHITE(*arg))
		    if (*arg++ == '\\' && *arg != NUL)
			++arg;
		arg = skipwhite(arg);
		if (*arg != '=')
		    break;
	    }

	    if (errmsg != NULL)
	    {
		vim_strncpy(IObuff, (char_u *)_(errmsg), IOSIZE - 1);
		i = (int)STRLEN(IObuff) + 2;
		if (i + (arg - startarg) < IOSIZE)
		{
		    
		    STRCAT(IObuff, ": ");
		    mch_memmove(IObuff + i, startarg, (arg - startarg));
		    IObuff[i + (arg - startarg)] = NUL;
		}
		
		trans_characters(IObuff, IOSIZE);

		++no_wait_return;		
		emsg((char *)IObuff);	
		--no_wait_return;

		return FAIL;
	    }
	}

	arg = skipwhite(arg);
    }

theend:
    if (silent_mode && did_show)
    {
	
	silent_mode = FALSE;
	info_message = TRUE;	
	msg_putchar('\n');
	cursor_on();		
	out_flush();
	silent_mode = TRUE;
	info_message = FALSE;	
    }

    return OK;
}


    void
did_set_option(
    int	    opt_idx,
    int	    opt_flags,	    
    int	    new_value,	    
    int	    value_checked)  
			    
{
    long_u	*p;

    options[opt_idx].flags |= P_WAS_SET;

    
    
    
    p = insecure_flag(opt_idx, opt_flags);
    if (!value_checked && (secure
#ifdef HAVE_SANDBOX
	    || sandbox != 0
#endif
	    || (opt_flags & OPT_MODELINE)))
	*p = *p | P_INSECURE;
    else if (new_value)
	*p = *p & ~P_INSECURE;
}


    int
string_to_key(char_u *arg, int multi_byte)
{
    if (*arg == '<')
	return find_key_option(arg + 1, TRUE);
    if (*arg == '^')
	return Ctrl_chr(arg[1]);
    if (multi_byte)
	return PTR2CHAR(arg);
    return *arg;
}


    void
did_set_title(void)
{
    if (starting != NO_SCREEN
#ifdef FEAT_GUI
	    && !gui.starting
#endif
				)
	maketitle();
}


    void
set_options_bin(
    int		oldval,
    int		newval,
    int		opt_flags)	
{
    
    
    if (newval)
    {
	if (!oldval)		
	{
	    if (!(opt_flags & OPT_GLOBAL))
	    {
		curbuf->b_p_tw_nobin = curbuf->b_p_tw;
		curbuf->b_p_wm_nobin = curbuf->b_p_wm;
		curbuf->b_p_ml_nobin = curbuf->b_p_ml;
		curbuf->b_p_et_nobin = curbuf->b_p_et;
	    }
	    if (!(opt_flags & OPT_LOCAL))
	    {
		p_tw_nobin = p_tw;
		p_wm_nobin = p_wm;
		p_ml_nobin = p_ml;
		p_et_nobin = p_et;
	    }
	}

	if (!(opt_flags & OPT_GLOBAL))
	{
	    curbuf->b_p_tw = 0;	
	    curbuf->b_p_wm = 0;	
	    curbuf->b_p_ml = 0;	
	    curbuf->b_p_et = 0;	
	}
	if (!(opt_flags & OPT_LOCAL))
	{
	    p_tw = 0;
	    p_wm = 0;
	    p_ml = FALSE;
	    p_et = FALSE;
	    p_bin = TRUE;	
	}
    }
    else if (oldval)		
    {
	if (!(opt_flags & OPT_GLOBAL))
	{
	    curbuf->b_p_tw = curbuf->b_p_tw_nobin;
	    curbuf->b_p_wm = curbuf->b_p_wm_nobin;
	    curbuf->b_p_ml = curbuf->b_p_ml_nobin;
	    curbuf->b_p_et = curbuf->b_p_et_nobin;
	}
	if (!(opt_flags & OPT_LOCAL))
	{
	    p_tw = p_tw_nobin;
	    p_wm = p_wm_nobin;
	    p_ml = p_ml_nobin;
	    p_et = p_et_nobin;
	}
    }
#if defined(FEAT_EVAL) || defined(PROTO)
    
    didset_options_sctx(opt_flags, p_bin_dep_opts);
#endif
}


    static char_u *
option_expand(int opt_idx, char_u *val)
{
    
    if (!(options[opt_idx].flags & P_EXPAND) || options[opt_idx].var == NULL)
	return NULL;

    
    
    if (val != NULL && STRLEN(val) > MAXPATHL)
	return NULL;

    if (val == NULL)
	val = *(char_u **)options[opt_idx].var;

    
    expand_env_esc(val, NameBuff, MAXPATHL,
	    (char_u **)options[opt_idx].var == &p_tags, FALSE,
#ifdef FEAT_SPELL
	    (char_u **)options[opt_idx].var == &p_sps ? (char_u *)"file:" :
#endif
				  NULL);
    if (STRCMP(NameBuff, val) == 0)   
	return NULL;

    return NameBuff;
}


    static void
didset_options(void)
{
    
    (void)init_chartab();

    didset_string_options();

#ifdef FEAT_SPELL
    (void)spell_check_msm();
    (void)spell_check_sps();
    (void)compile_cap_prog(curwin->w_s);
    (void)did_set_spell_option(TRUE);
#endif
    
    (void)did_set_cedit(NULL);
#ifdef FEAT_LINEBREAK
    
    did_set_breakat(NULL);
#endif
    after_copy_winopt(curwin);
}


    static void
didset_options2(void)
{
    
    (void)highlight_changed();

    
    check_opt_wim();

    
    (void)set_listchars_option(curwin, curwin->w_p_lcs, TRUE, NULL, 0);

    
    (void)set_fillchars_option(curwin, curwin->w_p_fcs, TRUE, NULL, 0);

#ifdef FEAT_CLIPBOARD
    
    (void)did_set_clipboard(NULL);
#endif
#ifdef FEAT_VARTABS
    vim_free(curbuf->b_p_vsts_array);
    (void)tabstop_set(curbuf->b_p_vsts, &curbuf->b_p_vsts_array);
    vim_free(curbuf->b_p_vts_array);
    (void)tabstop_set(curbuf->b_p_vts,  &curbuf->b_p_vts_array);
#endif
}


    void
check_options(void)
{
    int		opt_idx;

    for (opt_idx = 0; options[opt_idx].fullname != NULL; opt_idx++)
	if ((options[opt_idx].flags & P_STRING) && options[opt_idx].var != NULL)
	    check_string_option((char_u **)get_varp(&(options[opt_idx])));
}


    int
get_term_opt_idx(char_u **p)
{
    int opt_idx;

    for (opt_idx = 1; options[opt_idx].fullname != NULL; opt_idx++)
	if (options[opt_idx].var == (char_u *)p)
	    return opt_idx;
    return -1; 
}


    int
set_term_option_alloced(char_u **p)
{
    int		opt_idx = get_term_opt_idx(p);

    if (opt_idx >= 0)
	options[opt_idx].flags |= P_ALLOCED;
    return opt_idx;
}

#if defined(FEAT_EVAL) || defined(PROTO)

    int
was_set_insecurely(char_u *opt, int opt_flags)
{
    int	    idx = findoption(opt);
    long_u  *flagp;

    if (idx >= 0)
    {
	flagp = insecure_flag(idx, opt_flags);
	return (*flagp & P_INSECURE) != 0;
    }
    internal_error("was_set_insecurely()");
    return -1;
}


    static long_u *
insecure_flag(int opt_idx, int opt_flags)
{
    if (opt_flags & OPT_LOCAL)
	switch ((int)options[opt_idx].indir)
	{
#ifdef FEAT_STL_OPT
	    case PV_STL:	return &curwin->w_p_stl_flags;
#endif
#ifdef FEAT_EVAL
# ifdef FEAT_FOLDING
	    case PV_FDE:	return &curwin->w_p_fde_flags;
	    case PV_FDT:	return &curwin->w_p_fdt_flags;
# endif
# ifdef FEAT_BEVAL
	    case PV_BEXPR:	return &curbuf->b_p_bexpr_flags;
# endif
	    case PV_INDE:	return &curbuf->b_p_inde_flags;
	    case PV_FEX:	return &curbuf->b_p_fex_flags;
# ifdef FEAT_FIND_ID
	    case PV_INEX:	return &curbuf->b_p_inex_flags;
# endif
#endif
	}

    
    return &options[opt_idx].flags;
}
#endif


    void
redraw_titles(void)
{
    need_maketitle = TRUE;
    redraw_tabline = TRUE;
}


    int
valid_name(char_u *val, char *allowed)
{
    char_u *s;

    for (s = val; *s != NUL; ++s)
	if (!ASCII_ISALNUM(*s) && vim_strchr((char_u *)allowed, *s) == NULL)
	    return FALSE;
    return TRUE;
}

#if defined(FEAT_EVAL) || defined(PROTO)

    void
set_option_sctx_idx(int opt_idx, int opt_flags, sctx_T script_ctx)
{
    int		both = (opt_flags & (OPT_LOCAL | OPT_GLOBAL)) == 0;
    int		indir = (int)options[opt_idx].indir;
    sctx_T	new_script_ctx = script_ctx;

    
    if (!(opt_flags & OPT_MODELINE))
	new_script_ctx.sc_lnum += SOURCING_LNUM;

    
    
    if (both || (opt_flags & OPT_GLOBAL) || (indir & (PV_BUF|PV_WIN)) == 0)
	options[opt_idx].script_ctx = new_script_ctx;
    if (both || (opt_flags & OPT_LOCAL))
    {
	if (indir & PV_BUF)
	    curbuf->b_p_script_ctx[indir & PV_MASK] = new_script_ctx;
	else if (indir & PV_WIN)
	{
	    curwin->w_p_script_ctx[indir & PV_MASK] = new_script_ctx;
	    if (both)
		
		curwin->w_allbuf_opt.wo_script_ctx[indir & PV_MASK] =
								new_script_ctx;
	}
    }
}


    sctx_T *
get_option_sctx(char *name)
{
    int idx = findoption((char_u *)name);

    if (idx >= 0)
	return &options[idx].script_ctx;
    siemsg("no such option: %s", name);
    return NULL;
}


    void
set_term_option_sctx_idx(char *name, int opt_idx)
{
    char_u  buf[5];
    int	    idx;

    if (name == NULL)
	idx = opt_idx;
    else
    {
	buf[0] = 't';
	buf[1] = '_';
	buf[2] = name[0];
	buf[3] = name[1];
	buf[4] = 0;
	idx = findoption(buf);
    }
    if (idx >= 0)
	set_option_sctx_idx(idx, OPT_GLOBAL, current_sctx);
}
#endif

#if defined(FEAT_EVAL)

    static void
apply_optionset_autocmd(
	int	opt_idx,
	int	opt_flags,
	int	oldval,
	int	oldval_g,
	int	newval,
	char	*errmsg)
{
    char_u buf_old[12], buf_old_global[12], buf_new[12], buf_type[12];

    
    if (starting || errmsg != NULL || *get_vim_var_str(VV_OPTION_TYPE) != NUL)
	return;

    vim_snprintf((char *)buf_old, sizeof(buf_old), "%ld", oldval);
    vim_snprintf((char *)buf_old_global, sizeof(buf_old_global), "%ld",
							oldval_g);
    vim_snprintf((char *)buf_new, sizeof(buf_new), "%ld", newval);
    vim_snprintf((char *)buf_type, sizeof(buf_type), "%s",
				(opt_flags & OPT_LOCAL) ? "local" : "global");
    set_vim_var_string(VV_OPTION_NEW, buf_new, -1);
    set_vim_var_string(VV_OPTION_OLD, buf_old, -1);
    set_vim_var_string(VV_OPTION_TYPE, buf_type, -1);
    if (opt_flags & OPT_LOCAL)
    {
	set_vim_var_string(VV_OPTION_COMMAND, (char_u *)"setlocal", -1);
	set_vim_var_string(VV_OPTION_OLDLOCAL, buf_old, -1);
    }
    if (opt_flags & OPT_GLOBAL)
    {
	set_vim_var_string(VV_OPTION_COMMAND, (char_u *)"setglobal", -1);
	set_vim_var_string(VV_OPTION_OLDGLOBAL, buf_old, -1);
    }
    if ((opt_flags & (OPT_LOCAL | OPT_GLOBAL)) == 0)
    {
	set_vim_var_string(VV_OPTION_COMMAND, (char_u *)"set", -1);
	set_vim_var_string(VV_OPTION_OLDLOCAL, buf_old, -1);
	set_vim_var_string(VV_OPTION_OLDGLOBAL, buf_old_global, -1);
    }
    if (opt_flags & OPT_MODELINE)
    {
	set_vim_var_string(VV_OPTION_COMMAND, (char_u *)"modeline", -1);
	set_vim_var_string(VV_OPTION_OLDLOCAL, buf_old, -1);
    }
    apply_autocmds(EVENT_OPTIONSET, (char_u *)options[opt_idx].fullname,
	    NULL, FALSE, NULL);
    reset_v_option_vars();
}
#endif

#if defined(FEAT_ARABIC) || defined(PROTO)

    char *
did_set_arabic(optset_T *args UNUSED)
{
    char *errmsg = NULL;

    if (curwin->w_p_arab)
    {
	
	if (!p_tbidi)
	{
	    
	    if (!curwin->w_p_rl)
	    {
		curwin->w_p_rl = TRUE;
		changed_window_setting();
	    }

	    
	    if (!p_arshape)
	    {
		p_arshape = TRUE;
		redraw_later_clear();
	    }
	}

	
	
	if (STRCMP(p_enc, "utf-8") != 0)
	{
	    static char *w_arabic = N_("W17: Arabic requires UTF-8, do ':set encoding=utf-8'");

	    msg_source(HL_ATTR(HLF_W));
	    msg_attr(_(w_arabic), HL_ATTR(HLF_W));
#ifdef FEAT_EVAL
	    set_vim_var_string(VV_WARNINGMSG, (char_u *)_(w_arabic), -1);
#endif
	}

	
	p_deco = TRUE;

# ifdef FEAT_KEYMAP
	
	errmsg = set_option_value((char_u *)"keymap", 0L, (char_u *)"arabic",
								OPT_LOCAL);
# endif
    }
    else
    {
	
	if (!p_tbidi)
	{
	    
	    if (curwin->w_p_rl)
	    {
		curwin->w_p_rl = FALSE;
		changed_window_setting();
	    }

	    
	    
	}

	
	

# ifdef FEAT_KEYMAP
	
	curbuf->b_p_iminsert = B_IMODE_NONE;
	curbuf->b_p_imsearch = B_IMODE_USE_INSERT;
# endif
    }

    return errmsg;
}
#endif

#if defined(FEAT_AUTOCHDIR) || defined(PROTO)

    char *
did_set_autochdir(optset_T *args UNUSED)
{
    
    DO_AUTOCHDIR;
    return NULL;
}
#endif

#if defined(FEAT_BEVAL_GUI) || defined(PROTO)

    char *
did_set_ballooneval(optset_T *args)
{
    if (balloonEvalForTerm)
	return NULL;

    if (p_beval && !args->os_oldval.boolean)
	gui_mch_enable_beval_area(balloonEval);
    else if (!p_beval && args->os_oldval.boolean)
	gui_mch_disable_beval_area(balloonEval);

    return NULL;
}
#endif

#if defined(FEAT_BEVAL_TERM) || defined(PROTO)

    char *
did_set_balloonevalterm(optset_T *args UNUSED)
{
    mch_bevalterm_changed();
    return NULL;
}
#endif


    char *
did_set_binary(optset_T *args)
{
    
    set_options_bin(args->os_oldval.boolean, curbuf->b_p_bin, args->os_flags);
    redraw_titles();

    return NULL;
}


    char *
did_set_buflisted(optset_T *args)
{
    
    if (args->os_oldval.boolean != curbuf->b_p_bl)
	apply_autocmds(curbuf->b_p_bl ? EVENT_BUFADD : EVENT_BUFDELETE,
						NULL, NULL, TRUE, curbuf);
    return NULL;
}


    char *
did_set_cmdheight(optset_T *args)
{
    int old_value = args->os_oldval.number;
    char *errmsg = NULL;

    
    if (p_ch < 1)
    {
	errmsg = e_argument_must_be_positive;
	p_ch = 1;
    }
    if (p_ch > Rows - min_rows() + 1)
	p_ch = Rows - min_rows() + 1;

    
    
    if ((p_ch != old_value
		|| tabline_height() + topframe->fr_height != Rows - p_ch)
	    && full_screen
#ifdef FEAT_GUI
	    && !gui.starting
#endif
       )
	command_height();

    return errmsg;
}


    char *
did_set_compatible(optset_T *args UNUSED)
{
    compatible_set();
    return NULL;
}

#if defined(FEAT_CONCEAL) || defined(PROTO)

    char *
did_set_conceallevel(optset_T *args UNUSED)
{
    char *errmsg = NULL;

    if (curwin->w_p_cole < 0)
    {
	errmsg = e_argument_must_be_positive;
	curwin->w_p_cole = 0;
    }
    else if (curwin->w_p_cole > 3)
    {
	errmsg = e_invalid_argument;
	curwin->w_p_cole = 3;
    }

    return errmsg;
}
#endif

#if defined(FEAT_DIFF) || defined(PROTO)

    char *
did_set_diff(optset_T *args UNUSED)
{
    
    diff_buf_adjust(curwin);
# ifdef FEAT_FOLDING
    if (foldmethodIsDiff(curwin))
	foldUpdateAll(curwin);
# endif
    return NULL;
}
#endif


    char *
did_set_eof_eol_fixeol_bomb(optset_T *args UNUSED)
{
    
    redraw_titles();
    return NULL;
}


    char *
did_set_equalalways(optset_T *args)
{
    if (p_ea && !args->os_oldval.boolean)
	win_equal(curwin, FALSE, 0);

    return NULL;
}

#if defined(FEAT_FOLDING) || defined(PROTO)

    char *
did_set_foldcolumn(optset_T *args UNUSED)
{
    char *errmsg = NULL;

    if (curwin->w_p_fdc < 0)
    {
	errmsg = e_argument_must_be_positive;
	curwin->w_p_fdc = 0;
    }
    else if (curwin->w_p_fdc > 12)
    {
	errmsg = e_invalid_argument;
	curwin->w_p_fdc = 12;
    }

    return errmsg;
}


    char *
did_set_foldlevel(optset_T *args UNUSED)
{
    if (curwin->w_p_fdl < 0)
	curwin->w_p_fdl = 0;
    newFoldLevel();
    return NULL;
}


    char *
did_set_foldminlines(optset_T *args UNUSED)
{
    foldUpdateAll(curwin);
    return NULL;
}


    char *
did_set_foldnestmax(optset_T *args UNUSED)
{
    if (foldmethodIsSyntax(curwin) || foldmethodIsIndent(curwin))
	foldUpdateAll(curwin);
    return NULL;
}
#endif

#if defined(FEAT_SEARCH_EXTRA) || defined(PROTO)

    char *
did_set_hlsearch(optset_T *args UNUSED)
{
    
    set_no_hlsearch(FALSE);
    return NULL;
}
#endif


    char *
did_set_ignorecase(optset_T *args UNUSED)
{
    
    if (p_hls)
	redraw_all_later(UPD_SOME_VALID);
    return NULL;
}

#if defined(HAVE_INPUT_METHOD) || defined(PROTO)

    char *
did_set_imdisable(optset_T *args UNUSED)
{
    
    if (p_imdisable)
	im_set_active(FALSE);
    else if (State & MODE_INSERT)
	
	
	im_set_active(curbuf->b_p_iminsert == B_IMODE_IM);
    return NULL;
}
#endif


    char *
did_set_iminsert(optset_T *args UNUSED)
{
    char *errmsg = NULL;

    if (curbuf->b_p_iminsert < 0 || curbuf->b_p_iminsert > B_IMODE_LAST)
    {
	errmsg = e_invalid_argument;
	curbuf->b_p_iminsert = B_IMODE_NONE;
    }
    p_iminsert = curbuf->b_p_iminsert;
    if (termcap_active)	
	showmode();
#if defined(FEAT_KEYMAP)
    
    status_redraw_curbuf();
#endif

    return errmsg;
}


    char *
did_set_imsearch(optset_T *args UNUSED)
{
    char *errmsg = NULL;

    if (curbuf->b_p_imsearch < -1 || curbuf->b_p_imsearch > B_IMODE_LAST)
    {
	errmsg = e_invalid_argument;
	curbuf->b_p_imsearch = B_IMODE_NONE;
    }
    p_imsearch = curbuf->b_p_imsearch;

    return errmsg;
}

#if (defined(FEAT_XIM) && defined(FEAT_GUI_GTK)) || defined(PROTO)

    char *
did_set_imstyle(optset_T *args UNUSED)
{
    char *errmsg = NULL;

    if (p_imst != IM_ON_THE_SPOT && p_imst != IM_OVER_THE_SPOT)
	errmsg = e_invalid_argument;

    return errmsg;
}
#endif


    char *
did_set_insertmode(optset_T *args)
{
    
    if (p_im)
    {
	if ((State & MODE_INSERT) == 0)
	    need_start_insertmode = TRUE;
	stop_insert_mode = FALSE;
    }
    
    else if (args->os_oldval.boolean)
    {
	need_start_insertmode = FALSE;
	stop_insert_mode = TRUE;
	if (restart_edit != 0 && mode_displayed)
	    clear_cmdline = TRUE;	
	restart_edit = 0;
    }

    return NULL;
}

#if defined(FEAT_LANGMAP) || defined(PROTO)

    char *
did_set_langnoremap(optset_T *args UNUSED)
{
    
    p_lrm = !p_lnr;
    return NULL;
}


    char *
did_set_langremap(optset_T *args UNUSED)
{
    
    p_lnr = !p_lrm;
    return NULL;
}
#endif


    char *
did_set_laststatus(optset_T *args UNUSED)
{
    last_status(FALSE);	
    return NULL;
}

#if defined(FEAT_GUI) || defined(PROTO)

    char *
did_set_linespace(optset_T *args UNUSED)
{
    
    
    if (gui.in_use && gui_mch_adjust_charheight() == OK)
	gui_set_shellsize(FALSE, FALSE, RESIZE_VERT);
    return NULL;
}
#endif


    char *
did_set_lisp(optset_T *args UNUSED)
{
    
    (void)buf_init_chartab(curbuf, FALSE);	    
    return NULL;
}


    char *
did_set_maxcombine(optset_T *args UNUSED)
{
    if (p_mco > MAX_MCO)
	p_mco = MAX_MCO;
    else if (p_mco < 0)
	p_mco = 0;
    screenclear();	    
    return NULL;
}


    char *
did_set_modifiable(optset_T *args UNUSED)
{
    

# ifdef FEAT_TERMINAL
    
    if (curbuf->b_p_ma && (term_in_normal_mode() || (bt_terminal(curbuf)
		    && curbuf->b_term != NULL && !term_is_finished(curbuf))))
    {
	curbuf->b_p_ma = FALSE;
	return e_cannot_make_terminal_with_running_job_modifiable;
    }
# endif
    redraw_titles();

    return NULL;
}


    char *
did_set_modified(optset_T *args)
{
    if (!args->os_newval.boolean)
	save_file_ff(curbuf);	
    redraw_titles();
    curbuf->b_modified_was_set = args->os_newval.boolean;
    return NULL;
}

#if defined(FEAT_GUI) || defined(PROTO)

    char *
did_set_mousehide(optset_T *args UNUSED)
{
    if (!p_mh)
	gui_mch_mousehide(FALSE);
    return NULL;
}
#endif


    char *
did_set_number_relativenumber(optset_T *args UNUSED)
{
#if (defined(FEAT_SIGNS) && defined(FEAT_GUI)) || defined(PROTO)
    if (gui.in_use
	    && (*curwin->w_p_scl == 'n' && *(curwin->w_p_scl + 1) == 'u')
	    && curbuf->b_signlist != NULL)
    {
	
	
	
	
	
	
	if (!(curwin->w_p_nu && ((int *)args->os_varp == &curwin->w_p_rnu)))
	    redraw_all_later(UPD_CLEAR);
    }
#endif
    return NULL;
}

#if defined(FEAT_LINEBREAK) || defined(PROTO)

    char *
did_set_numberwidth(optset_T *args UNUSED)
{
    char *errmsg = NULL;

    
    if (curwin->w_p_nuw < 1)
    {
	errmsg = e_argument_must_be_positive;
	curwin->w_p_nuw = 1;
    }
    if (curwin->w_p_nuw > 20)
    {
	errmsg = e_invalid_argument;
	curwin->w_p_nuw = 20;
    }
    curwin->w_nrwidth_line_count = 0; 

    return errmsg;
}
#endif


    char *
did_set_paste(optset_T *args UNUSED)
{
    static int	old_p_paste = FALSE;
    static int	save_sm = 0;
    static int	save_sta = 0;
    static int	save_ru = 0;
#ifdef FEAT_RIGHTLEFT
    static int	save_ri = 0;
    static int	save_hkmap = 0;
#endif
    buf_T	*buf;

    if (p_paste)
    {
	
	
	if (!old_p_paste)
	{
	    
	    FOR_ALL_BUFFERS(buf)
	    {
		buf->b_p_tw_nopaste = buf->b_p_tw;
		buf->b_p_wm_nopaste = buf->b_p_wm;
		buf->b_p_sts_nopaste = buf->b_p_sts;
		buf->b_p_ai_nopaste = buf->b_p_ai;
		buf->b_p_et_nopaste = buf->b_p_et;
#ifdef FEAT_VARTABS
		if (buf->b_p_vsts_nopaste)
		    vim_free(buf->b_p_vsts_nopaste);
		buf->b_p_vsts_nopaste =
			buf->b_p_vsts && buf->b_p_vsts != empty_option
					   ? vim_strsave(buf->b_p_vsts) : NULL;
#endif
	    }

	    
	    save_sm = p_sm;
	    save_sta = p_sta;
	    save_ru = p_ru;
#ifdef FEAT_RIGHTLEFT
	    save_ri = p_ri;
	    save_hkmap = p_hkmap;
#endif
	    
	    p_ai_nopaste = p_ai;
	    p_et_nopaste = p_et;
	    p_sts_nopaste = p_sts;
	    p_tw_nopaste = p_tw;
	    p_wm_nopaste = p_wm;
#ifdef FEAT_VARTABS
	    if (p_vsts_nopaste)
		vim_free(p_vsts_nopaste);
	    p_vsts_nopaste = p_vsts && p_vsts != empty_option
						  ? vim_strsave(p_vsts) : NULL;
#endif
	}

	
	
	FOR_ALL_BUFFERS(buf)
	{
	    buf->b_p_tw = 0;	    
	    buf->b_p_wm = 0;	    
	    buf->b_p_sts = 0;	    
	    buf->b_p_ai = 0;	    
	    buf->b_p_et = 0;	    
#ifdef FEAT_VARTABS
	    if (buf->b_p_vsts)
		free_string_option(buf->b_p_vsts);
	    buf->b_p_vsts = empty_option;
	    VIM_CLEAR(buf->b_p_vsts_array);
#endif
	}

	
	p_sm = 0;		    
	p_sta = 0;		    
	if (p_ru)
	    status_redraw_all();    
	p_ru = 0;		    
#ifdef FEAT_RIGHTLEFT
	p_ri = 0;		    
	p_hkmap = 0;		    
#endif
	
	p_tw = 0;
	p_wm = 0;
	p_sts = 0;
	p_ai = 0;
	p_et = 0;
#ifdef FEAT_VARTABS
	if (p_vsts)
	    free_string_option(p_vsts);
	p_vsts = empty_option;
#endif
    }

    
    else if (old_p_paste)
    {
	
	FOR_ALL_BUFFERS(buf)
	{
	    buf->b_p_tw = buf->b_p_tw_nopaste;
	    buf->b_p_wm = buf->b_p_wm_nopaste;
	    buf->b_p_sts = buf->b_p_sts_nopaste;
	    buf->b_p_ai = buf->b_p_ai_nopaste;
	    buf->b_p_et = buf->b_p_et_nopaste;
#ifdef FEAT_VARTABS
	    if (buf->b_p_vsts)
		free_string_option(buf->b_p_vsts);
	    buf->b_p_vsts = buf->b_p_vsts_nopaste
			 ? vim_strsave(buf->b_p_vsts_nopaste) : empty_option;
	    vim_free(buf->b_p_vsts_array);
	    if (buf->b_p_vsts && buf->b_p_vsts != empty_option)
		(void)tabstop_set(buf->b_p_vsts, &buf->b_p_vsts_array);
	    else
		buf->b_p_vsts_array = NULL;
#endif
	}

	
	p_sm = save_sm;
	p_sta = save_sta;
	if (p_ru != save_ru)
	    status_redraw_all();    
	p_ru = save_ru;
#ifdef FEAT_RIGHTLEFT
	p_ri = save_ri;
	p_hkmap = save_hkmap;
#endif
	
	p_ai = p_ai_nopaste;
	p_et = p_et_nopaste;
	p_sts = p_sts_nopaste;
	p_tw = p_tw_nopaste;
	p_wm = p_wm_nopaste;
#ifdef FEAT_VARTABS
	if (p_vsts)
	    free_string_option(p_vsts);
	p_vsts = p_vsts_nopaste ? vim_strsave(p_vsts_nopaste) : empty_option;
#endif
    }

    old_p_paste = p_paste;

#if defined(FEAT_EVAL) || defined(PROTO)
    
    didset_options_sctx((OPT_LOCAL | OPT_GLOBAL), p_paste_dep_opts);
#endif

    return NULL;
}


#ifdef FEAT_QUICKFIX

    char *
did_set_previewwindow(optset_T *args UNUSED)
{
    if (!curwin->w_p_pvw)
	return NULL;

    
    win_T	*win;

    FOR_ALL_WINDOWS(win)
	if (win->w_p_pvw && win != curwin)
	{
	    curwin->w_p_pvw = FALSE;
	    return e_preview_window_already_exists;
	}

    return NULL;
}
#endif

#if defined(FEAT_PYTHON) || defined(FEAT_PYTHON3) || defined(PROTO)

    char *
did_set_pyxversion(optset_T *args UNUSED)
{
    char *errmsg = NULL;

    if (p_pyx != 0 && p_pyx != 2 && p_pyx != 3)
	errmsg = e_invalid_argument;

    return errmsg;
}
#endif


    char *
did_set_readonly(optset_T *args)
{
    
    if (!curbuf->b_p_ro && (args->os_flags & OPT_LOCAL) == 0)
	readonlymode = FALSE;

    
    if (curbuf->b_p_ro)
	curbuf->b_did_warn = FALSE;

    redraw_titles();

    return NULL;
}


    char *
did_set_scrollbind(optset_T *args UNUSED)
{
    
    
    if (!curwin->w_p_scb)
	return NULL;

    do_check_scrollbind(FALSE);
    curwin->w_scbind_pos = curwin->w_topline;
    return NULL;
}

#if defined(BACKSLASH_IN_FILENAME) || defined(PROTO)

    char *
did_set_shellslash(optset_T *args UNUSED)
{
    if (p_ssl)
    {
	psepc = '/';
	psepcN = '\\';
	pseps[0] = '/';
    }
    else
    {
	psepc = '\\';
	psepcN = '/';
	pseps[0] = '\\';
    }

    
    buflist_slash_adjust();
    alist_slash_adjust();
# ifdef FEAT_EVAL
    scriptnames_slash_adjust();
# endif
    return NULL;
}
#endif


    char *
did_set_shiftwidth_tabstop(optset_T *args)
{
    int	*pp = (int *)args->os_varp;
    char	*errmsg = NULL;

    if (curbuf->b_p_sw < 0)
    {
	errmsg = e_argument_must_be_positive;
#ifdef FEAT_VARTABS
	
	curbuf->b_p_sw = tabstop_count(curbuf->b_p_vts_array) > 0
		       ? tabstop_first(curbuf->b_p_vts_array)
		       : curbuf->b_p_ts;
#else
	curbuf->b_p_sw = curbuf->b_p_ts;
#endif
    }

#ifdef FEAT_FOLDING
    if (foldmethodIsIndent(curwin))
	foldUpdateAll(curwin);
#endif
    
    
    if (pp == &curbuf->b_p_sw || curbuf->b_p_sw == 0)
	parse_cino(curbuf);

    return errmsg;
}


    char *
did_set_showtabline(optset_T *args UNUSED)
{
    shell_new_rows();	
    return NULL;
}


    char *
did_set_smoothscroll(optset_T *args UNUSED)
{
    if (!curwin->w_p_sms)
	curwin->w_skipcol = 0;

    return NULL;
}

#if defined(FEAT_SPELL) || defined(PROTO)

    char *
did_set_spell(optset_T *args UNUSED)
{
    if (curwin->w_p_spell)
	return parse_spelllang(curwin);

    return NULL;
}
#endif


    char *
did_set_swapfile(optset_T *args UNUSED)
{
    
    if (curbuf->b_p_swf && p_uc)
	ml_open_file(curbuf);		
    else
	
	
	mf_close_file(curbuf, TRUE);	
    return NULL;
}

#if defined(FEAT_TERMGUICOLORS) || defined(PROTO)
    char *
did_set_termguicolors(optset_T *args UNUSED)
{
# ifdef FEAT_VTP
    
    if (
#  ifdef VIMDLL
	    !gui.in_use && !gui.starting &&
#  endif
	    !has_vtp_working())
    {
	p_tgc = 0;
	return e_24_bit_colors_are_not_supported_on_this_environment;
    }
    if (is_term_win32())
	swap_tcap();
# endif
# ifdef FEAT_GUI
    if (!gui.in_use && !gui.starting)
# endif
	highlight_gui_started();
# ifdef FEAT_VTP
    
    if (is_term_win32())
    {
	control_console_color_rgb();
	set_termname(T_NAME);
	init_highlight(TRUE, FALSE);
    }
# endif
# ifdef FEAT_TERMINAL
    term_update_colors_all();
    term_update_palette_all();
    term_update_wincolor_all();
# endif

    return NULL;
}
#endif


    char *
did_set_terse(optset_T *args UNUSED)
{
    char_u	*p;

    
    p = vim_strchr(p_shm, SHM_SEARCH);

    
    if (p_terse && p == NULL)
    {
	STRCPY(IObuff, p_shm);
	STRCAT(IObuff, "s");
	set_string_option_direct((char_u *)"shm", -1, IObuff, OPT_FREE, 0);
    }
    
    else if (!p_terse && p != NULL)
	STRMOVE(p, p + 1);
    return NULL;
}


    char *
did_set_textauto(optset_T *args)
{
    
    set_string_option_direct((char_u *)"ffs", -1,
				p_ta ? (char_u *)DFLT_FFS_VIM : (char_u *)"",
				OPT_FREE | args->os_flags, 0);

    return NULL;
}


    char *
did_set_textmode(optset_T *args)
{
    
    set_fileformat(curbuf->b_p_tx ? EOL_DOS : EOL_UNIX, args->os_flags);

    return NULL;
}


    char *
did_set_textwidth(optset_T *args UNUSED)
{
    char *errmsg = NULL;

    if (curbuf->b_p_tw < 0)
    {
	errmsg = e_argument_must_be_positive;
	curbuf->b_p_tw = 0;
    }
#ifdef FEAT_SYN_HL
    {
	win_T	*wp;
	tabpage_T	*tp;

	FOR_ALL_TAB_WINDOWS(tp, wp)
	    check_colorcolumn(wp);
    }
#endif

    return errmsg;
}


    char *
did_set_title_icon(optset_T *args UNUSED)
{
    
    did_set_title();
    return NULL;
}


    char *
did_set_titlelen(optset_T *args)
{
    int old_value = args->os_oldval.number;
    char *errmsg = NULL;

    
    if (p_titlelen < 0)
    {
	errmsg = e_argument_must_be_positive;
	p_titlelen = 85;
    }
    if (starting != NO_SCREEN && old_value != p_titlelen)
	need_maketitle = TRUE;

    return errmsg;
}

#if defined(FEAT_PERSISTENT_UNDO) || defined(PROTO)

    char *
did_set_undofile(optset_T *args)
{
    
    if (!curbuf->b_p_udf && !p_udf)
	return NULL;

    
    
    char_u	hash[UNDO_HASH_SIZE];
    buf_T	*save_curbuf = curbuf;

    FOR_ALL_BUFFERS(curbuf)
    {
	
	
	
	
	if ((curbuf == save_curbuf
		    || (args->os_flags & OPT_GLOBAL)
		    || args->os_flags == 0)
		&& !curbufIsChanged() && curbuf->b_ml.ml_mfp != NULL)
	{
#ifdef FEAT_CRYPT
	    if (crypt_method_is_sodium(crypt_get_method_nr(curbuf)))
		continue;
#endif
	    u_compute_hash(hash);
	    u_read_undo(NULL, hash, curbuf->b_fname);
	}
    }
    curbuf = save_curbuf;

    return NULL;
}
#endif


    static void
update_global_undolevels(int value, int old_value)
{
    

    
    p_ul = old_value;
    u_sync(TRUE);
    p_ul = value;
}


    static void
update_buflocal_undolevels(int value, int old_value)
{
    
    curbuf->b_p_ul = old_value;
    u_sync(TRUE);
    curbuf->b_p_ul = value;
}


    char *
did_set_undolevels(optset_T *args)
{
    int *pp = (int *)args->os_varp;

    if (pp == &p_ul)			
	update_global_undolevels(args->os_newval.number,
						       args->os_oldval.number);
    else if (pp == &curbuf->b_p_ul)	
	update_buflocal_undolevels(args->os_newval.number,
						       args->os_oldval.number);

    return NULL;
}


    char *
did_set_updatecount(optset_T *args)
{
    int old_value = args->os_oldval.number;
    char *errmsg = NULL;

    
    if (p_uc < 0)
    {
	errmsg = e_argument_must_be_positive;
	p_uc = 100;
    }
    if (p_uc && !old_value)
	ml_open_files();

    return errmsg;
}


    char *
did_set_weirdinvert(optset_T *args)
{
    
    
    if (p_wiv && !args->os_oldval.boolean)
	T_XS = (char_u *)"y";
    else if (!p_wiv && args->os_oldval.boolean)
	T_XS = empty_option;
    p_wiv = (*T_XS != NUL);

    return NULL;
}


    char *
did_set_wildchar(optset_T *args)
{
    int c = *(int *)args->os_varp;

    
    if (c == Ctrl_C || c == '\n' || c == '\r' || c == K_KENTER)
	return e_invalid_argument;

    return NULL;
}


    char *
did_set_window(optset_T *args UNUSED)
{
    if (p_window < 1)
	p_window = 1;
    else if (p_window >= Rows)
	p_window = Rows - 1;
    return NULL;
}


    char *
did_set_winheight_helpheight(optset_T *args)
{
    int	*pp = (int *)args->os_varp;
    char	*errmsg = NULL;

    if (p_wh < 1)
    {
	errmsg = e_argument_must_be_positive;
	p_wh = 1;
    }
    if (p_wmh > p_wh)
    {
	errmsg = e_winheight_cannot_be_smaller_than_winminheight;
	p_wh = p_wmh;
    }
    if (p_hh < 0)
    {
	errmsg = e_argument_must_be_positive;
	p_hh = 0;
    }

    
    if (!ONE_WINDOW)
    {
	if (pp == &p_wh && curwin->w_height < p_wh)
	    win_setheight((int)p_wh);
	if (pp == &p_hh && curbuf->b_help && curwin->w_height < p_hh)
	    win_setheight((int)p_hh);
    }

    return errmsg;
}


    char *
did_set_winminheight(optset_T *args UNUSED)
{
    char *errmsg = NULL;

    if (p_wmh < 0)
    {
	errmsg = e_argument_must_be_positive;
	p_wmh = 0;
    }
    if (p_wmh > p_wh)
    {
	errmsg = e_winheight_cannot_be_smaller_than_winminheight;
	p_wmh = p_wh;
    }
    win_setminheight();

    return errmsg;
}


    char *
did_set_winminwidth(optset_T *args UNUSED)
{
    char *errmsg = NULL;

    if (p_wmw < 0)
    {
	errmsg = e_argument_must_be_positive;
	p_wmw = 0;
    }
    if (p_wmw > p_wiw)
    {
	errmsg = e_winwidth_cannot_be_smaller_than_winminwidth;
	p_wmw = p_wiw;
    }
    win_setminwidth();

    return errmsg;
}


    char *
did_set_winwidth(optset_T *args UNUSED)
{
    char *errmsg = NULL;

    if (p_wiw < 1)
    {
	errmsg = e_argument_must_be_positive;
	p_wiw = 1;
    }
    if (p_wmw > p_wiw)
    {
	errmsg = e_winwidth_cannot_be_smaller_than_winminwidth;
	p_wiw = p_wmw;
    }

    
    if (!ONE_WINDOW && curwin->w_width < p_wiw)
	win_setwidth((int)p_wiw);

    return errmsg;
}


    char *
did_set_wrap(optset_T *args UNUSED)
{
    
    if (curwin->w_p_wrap)
	curwin->w_leftcol = 0;
    else
	curwin->w_skipcol = 0;

    return NULL;
}


    static char *
set_bool_option(
    int		opt_idx,		
    char_u	*varp,			
    int		value,			
    int		opt_flags)		
{
    int		old_value = *(int *)varp;
#if defined(FEAT_EVAL)
    int		old_global_value = 0;
#endif
    char	*errmsg = NULL;

    
    if ((secure
#ifdef HAVE_SANDBOX
		|| sandbox != 0
#endif
		) && (options[opt_idx].flags & P_SECURE))
	return e_not_allowed_here;

#if defined(FEAT_EVAL)
    
    
    
    if ((opt_flags & (OPT_LOCAL | OPT_GLOBAL)) == 0)
	old_global_value = *(int *)get_varp_scope(&(options[opt_idx]),
								   OPT_GLOBAL);
#endif

    *(int *)varp = value;	    
#ifdef FEAT_EVAL
    
    set_option_sctx_idx(opt_idx, opt_flags, current_sctx);
#endif

#ifdef FEAT_GUI
    need_mouse_correct = TRUE;
#endif

    
    if ((opt_flags & (OPT_LOCAL | OPT_GLOBAL)) == 0)
	*(int *)get_varp_scope(&(options[opt_idx]), OPT_GLOBAL) = value;

    
    if (options[opt_idx].opt_did_set_cb != NULL)
    {
	optset_T args;

	CLEAR_FIELD(args);
	args.os_varp = varp;
	args.os_flags = opt_flags;
	args.os_oldval.boolean = old_value;
	args.os_newval.boolean = value;
	args.os_errbuf = NULL;
	errmsg = options[opt_idx].opt_did_set_cb(&args);
	if (errmsg != NULL)
	    return errmsg;
    }

    

    options[opt_idx].flags |= P_WAS_SET;

#if defined(FEAT_EVAL)
    apply_optionset_autocmd(opt_idx, opt_flags,
				(int)(old_value ? TRUE : FALSE),
				(int)(old_global_value ? TRUE : FALSE),
				(int)(value ? TRUE : FALSE), NULL);
#endif

    comp_col();			    

    if (curwin->w_curswant != MAXCOL
		     && (options[opt_idx].flags & (P_CURSWANT | P_RALL)) != 0
				   && (options[opt_idx].flags & P_HLONLY) == 0)
	curwin->w_set_curswant = TRUE;

    if ((opt_flags & OPT_NO_REDRAW) == 0)
	check_redraw(options[opt_idx].flags);

    return errmsg;
}


    static char *
check_num_option_bounds(
    int	*pp,
    int	old_value,
    int	old_Rows,
    int	old_Columns,
    char	*errbuf,
    size_t	errbuflen,
    char	*errmsg)
{
    if (Rows < min_rows() && full_screen)
    {
	if (errbuf != NULL)
	{
	    vim_snprintf(errbuf, errbuflen,
		    _(e_need_at_least_nr_lines), min_rows());
	    errmsg = errbuf;
	}
	Rows = min_rows();
    }
    if (Columns < MIN_COLUMNS && full_screen)
    {
	if (errbuf != NULL)
	{
	    vim_snprintf(errbuf, errbuflen,
		    _(e_need_at_least_nr_columns), MIN_COLUMNS);
	    errmsg = errbuf;
	}
	Columns = MIN_COLUMNS;
    }
    limit_screen_size();

    
    
    if (old_Rows != Rows || old_Columns != Columns)
    {
	
	if (updating_screen)
	    *pp = old_value;
	else if (full_screen
#ifdef FEAT_GUI
		&& !gui.starting
#endif
		)
	    set_shellsize((int)Columns, (int)Rows, TRUE);
	else
	{
	    
	    
	    check_shellsize();
	    if (cmdline_row > Rows - p_ch && Rows > p_ch)
		cmdline_row = Rows - p_ch;
	}
	if (p_window >= Rows || !option_was_set((char_u *)"window"))
	    p_window = Rows - 1;
    }

    if (curbuf->b_p_ts <= 0)
    {
	errmsg = e_argument_must_be_positive;
	curbuf->b_p_ts = 8;
    }
    else if (curbuf->b_p_ts > TABSTOP_MAX)
    {
	errmsg = e_invalid_argument;
	curbuf->b_p_ts = 8;
    }
    if (p_tm < 0)
    {
	errmsg = e_argument_must_be_positive;
	p_tm = 0;
    }
    if ((curwin->w_p_scr <= 0
		|| (curwin->w_p_scr > curwin->w_height
		    && curwin->w_height > 0))
	    && full_screen)
    {
	if (pp == &(curwin->w_p_scr))
	{
	    if (curwin->w_p_scr != 0)
		errmsg = e_invalid_scroll_size;
	    win_comp_scroll(curwin);
	}
	
	
	else if (curwin->w_p_scr <= 0)
	    curwin->w_p_scr = 1;
	else 
	    curwin->w_p_scr = curwin->w_height;
    }
    if (p_hi < 0)
    {
	errmsg = e_argument_must_be_positive;
	p_hi = 0;
    }
    else if (p_hi > 10000)
    {
	errmsg = e_invalid_argument;
	p_hi = 10000;
    }
    if (p_re < 0 || p_re > 2)
    {
	errmsg = e_invalid_argument;
	p_re = 0;
    }
    if (p_report < 0)
    {
	errmsg = e_argument_must_be_positive;
	p_report = 1;
    }
    if ((p_sj < -100 || p_sj >= Rows) && full_screen)
    {
	if (Rows != old_Rows)	
	    p_sj = Rows / 2;
	else
	{
	    errmsg = e_invalid_scroll_size;
	    p_sj = 1;
	}
    }
    if (p_so < 0 && full_screen)
    {
	errmsg = e_argument_must_be_positive;
	p_so = 0;
    }
    if (p_siso < 0 && full_screen)
    {
	errmsg = e_argument_must_be_positive;
	p_siso = 0;
    }
    if (p_cwh < 1)
    {
	errmsg = e_argument_must_be_positive;
	p_cwh = 1;
    }
    if (p_ut < 0)
    {
	errmsg = e_argument_must_be_positive;
	p_ut = 2000;
    }
    if (p_ss < 0)
    {
	errmsg = e_argument_must_be_positive;
	p_ss = 0;
    }

    return errmsg;
}


    static char *
set_num_option(
    int		opt_idx,		
    char_u	*varp,			
    int	value,			
    char	*errbuf,		
    size_t	errbuflen,		
    int		opt_flags)		
					
{
    char	*errmsg = NULL;
    int	old_value = *(int *)varp;
#if defined(FEAT_EVAL)
    int	old_global_value = 0;	
					
#endif
    int	old_Rows = Rows;	
    int	old_Columns = Columns;	
    int	*pp = (int *)varp;

    
    if ((secure
#ifdef HAVE_SANDBOX
		|| sandbox != 0
#endif
		) && (options[opt_idx].flags & P_SECURE))
	return e_not_allowed_here;

#if defined(FEAT_EVAL)
    
    
    
    if ((opt_flags & (OPT_LOCAL | OPT_GLOBAL)) == 0)
	old_global_value = *(int *)get_varp_scope(&(options[opt_idx]),
								   OPT_GLOBAL);
#endif

    *pp = value;
#ifdef FEAT_EVAL
    
    set_option_sctx_idx(opt_idx, opt_flags, current_sctx);
#endif
#ifdef FEAT_GUI
    need_mouse_correct = TRUE;
#endif

    
    
    if (options[opt_idx].opt_did_set_cb != NULL)
    {
	optset_T args;

	CLEAR_FIELD(args);
	args.os_varp = varp;
	args.os_flags = opt_flags;
	args.os_oldval.number = old_value;
	args.os_newval.number = value;
	args.os_errbuf = NULL;
	errmsg = options[opt_idx].opt_did_set_cb(&args);
    }

    
    errmsg = check_num_option_bounds(pp, old_value, old_Rows, old_Columns,
						errbuf, errbuflen, errmsg);

    
    if ((opt_flags & (OPT_LOCAL | OPT_GLOBAL)) == 0)
	*(int *)get_varp_scope(&(options[opt_idx]), OPT_GLOBAL) = *pp;

    options[opt_idx].flags |= P_WAS_SET;

#if defined(FEAT_EVAL)
    apply_optionset_autocmd(opt_idx, opt_flags, old_value, old_global_value,
								value, errmsg);
#endif

    comp_col();			    

    if (curwin->w_curswant != MAXCOL
		     && (options[opt_idx].flags & (P_CURSWANT | P_RALL)) != 0
				   && (options[opt_idx].flags & P_HLONLY) == 0)
	curwin->w_set_curswant = TRUE;

    if ((opt_flags & OPT_NO_REDRAW) == 0)
	check_redraw(options[opt_idx].flags);

    return errmsg;
}


    void
check_redraw(long_u flags)
{
    
    int		doclear = (flags & P_RCLR) == P_RCLR;
    int		all = ((flags & P_RALL) == P_RALL || doclear);

    if ((flags & P_RSTAT) || all)	
	status_redraw_all();

    if ((flags & P_RBUF) || (flags & P_RWIN) || all)
    {
	if (flags & P_HLONLY)
	    redraw_later(UPD_NOT_VALID);
	else
	    changed_window_setting();
    }
    if (flags & P_RBUF)
	redraw_curbuf_later(UPD_NOT_VALID);
    if (doclear)
	redraw_all_later(UPD_CLEAR);
    else if (all)
	redraw_all_later(UPD_NOT_VALID);
}


    int
findoption(char_u *arg)
{
    int		    opt_idx;
    char	    *s, *p;
    static short    quick_tab[27] = {0, 0};	
    int		    is_term_opt;

    
    
    
    if (quick_tab[1] == 0)
    {
	p = options[0].fullname;
	for (opt_idx = 1; (s = options[opt_idx].fullname) != NULL; opt_idx++)
	{
	    if (s[0] != p[0])
	    {
		if (s[0] == 't' && s[1] == '_')
		    quick_tab[26] = opt_idx;
		else
		    quick_tab[CharOrdLow(s[0])] = opt_idx;
	    }
	    p = s;
	}
    }

    
    if (arg[0] < 'a' || arg[0] > 'z')
	return -1;

    is_term_opt = (arg[0] == 't' && arg[1] == '_');
    if (is_term_opt)
	opt_idx = quick_tab[26];
    else
	opt_idx = quick_tab[CharOrdLow(arg[0])];
    for (; (s = options[opt_idx].fullname) != NULL && s[0] == arg[0]; opt_idx++)
    {
	if (STRCMP(arg, s) == 0)		    
	    break;
    }
    if (s != NULL && s[0] != arg[0])
	s = NULL;
    if (s == NULL && !is_term_opt)
    {
	opt_idx = quick_tab[CharOrdLow(arg[0])];
	for ( ; options[opt_idx].fullname != NULL; opt_idx++)
	{
	    s = options[opt_idx].shortname;
	    if (s != NULL && STRCMP(arg, s) == 0)   
		break;
	    s = NULL;
	}
    }
    if (s == NULL)
	opt_idx = -1;
    return opt_idx;
}

#if defined(FEAT_EVAL) || defined(FEAT_TCL) || defined(FEAT_MZSCHEME) \
	|| defined(FEAT_SPELL) || defined(PROTO)

    getoption_T
get_option_value(
    char_u	*name,
    int	*numval,
    char_u	**stringval,	    
    int		*flagsp,
    int		scope)
{
    int		opt_idx;
    char_u	*varp;

    opt_idx = findoption(name);
    if (opt_idx < 0)		    
    {
	int key;

	if (STRLEN(name) == 4 && name[0] == 't' && name[1] == '_'
				  && (key = find_key_option(name, FALSE)) != 0)
	{
	    char_u key_name[2];
	    char_u *p;

	    if (flagsp != NULL)
		*flagsp = 0;  

	    
	    if (key < 0)
	    {
		key_name[0] = KEY2TERMCAP0(key);
		key_name[1] = KEY2TERMCAP1(key);
	    }
	    else
	    {
		key_name[0] = KS_KEY;
		key_name[1] = (key & 0xff);
	    }
	    p = find_termcode(key_name);
	    if (p != NULL)
	    {
		if (stringval != NULL)
		    *stringval = vim_strsave(p);
		return gov_string;
	    }
	}
	return gov_unknown;
    }

    varp = get_varp_scope(&(options[opt_idx]), scope);

    if (flagsp != NULL)
	
	*flagsp = options[opt_idx].flags;

    if (options[opt_idx].flags & P_STRING)
    {
	if (varp == NULL)		    
	    return gov_hidden_string;
	if (stringval != NULL)
	{
	    if ((char_u **)varp == &p_pt)	
		*stringval = str2special_save(*(char_u **)(varp), FALSE,
									FALSE);
#ifdef FEAT_CRYPT
	    
	    else if ((char_u **)varp == &curbuf->b_p_key
						&& **(char_u **)(varp) != NUL)
		*stringval = vim_strsave((char_u *)"*****");
#endif
	    else
		*stringval = vim_strsave(*(char_u **)(varp));
	}
	return gov_string;
    }

    if (varp == NULL)		    
	return (options[opt_idx].flags & P_NUM)
					 ? gov_hidden_number : gov_hidden_bool;
    if (options[opt_idx].flags & P_NUM)
	*numval = *(int *)varp;
    else
    {
	
	
	if ((int *)varp == &curbuf->b_changed)
	    *numval = curbufIsChanged();
	else
	    *numval = (int) *(int *)varp;
    }
    return (options[opt_idx].flags & P_NUM) ? gov_number : gov_bool;
}
#endif

#if defined(FEAT_PYTHON) || defined(FEAT_PYTHON3) || defined(PROTO)

    int
get_option_value_strict(
    char_u	*name,
    int	*numval,
    char_u	**stringval,	    
    int		opt_type,
    void	*from)
{
    int		opt_idx;
    char_u	*varp = NULL;
    struct vimoption *p;
    int		r = 0;

    opt_idx = findoption(name);
    if (opt_idx < 0)
	return 0;

    p = &(options[opt_idx]);

    
    if (p->var == NULL)
	return 0;

    if (p->flags & P_BOOL)
	r |= SOPT_BOOL;
    else if (p->flags & P_NUM)
	r |= SOPT_NUM;
    else if (p->flags & P_STRING)
	r |= SOPT_STRING;

    if (p->indir == PV_NONE)
    {
	if (opt_type == SREQ_GLOBAL)
	    r |= SOPT_GLOBAL;
	else
	    return 0; 
    }
    else
    {
	if (p->indir & PV_BOTH)
	    r |= SOPT_GLOBAL;
	else if (opt_type == SREQ_GLOBAL)
	    return 0; 

	if (p->indir & PV_WIN)
	{
	    if (opt_type == SREQ_BUF)
		return 0; 
	    else
		r |= SOPT_WIN;
	}
	else if (p->indir & PV_BUF)
	{
	    if (opt_type == SREQ_WIN)
		return 0; 
	    else
		r |= SOPT_BUF;
	}
    }

    if (stringval == NULL)
	return r;

    if (opt_type == SREQ_GLOBAL)
	varp = p->var;
    else
    {
	if (opt_type == SREQ_BUF)
	{
	    
	    
	    if (p->indir == PV_MOD)
	    {
		*numval = bufIsChanged((buf_T *)from);
		varp = NULL;
	    }
# ifdef FEAT_CRYPT
	    else if (p->indir == PV_KEY)
	    {
		
		*stringval = NULL;
		varp = NULL;
	    }
# endif
	    else
	    {
		buf_T *save_curbuf = curbuf;

		
		curbuf = (buf_T *)from;
		curwin->w_buffer = curbuf;
		varp = get_varp(p);
		curbuf = save_curbuf;
		curwin->w_buffer = curbuf;
	    }
	}
	else if (opt_type == SREQ_WIN)
	{
	    win_T	*save_curwin = curwin;

	    curwin = (win_T *)from;
	    curbuf = curwin->w_buffer;
	    varp = get_varp(p);
	    curwin = save_curwin;
	    curbuf = curwin->w_buffer;
	}
	if (varp == p->var)
	    return (r | SOPT_UNSET);
    }

    if (varp != NULL)
    {
	if (p->flags & P_STRING)
	    *stringval = vim_strsave(*(char_u **)(varp));
	else if (p->flags & P_NUM)
	    *numval = *(int *) varp;
	else
	    *numval = *(int *)varp;
    }

    return r;
}


    char_u *
option_iter_next(void **option, int opt_type)
{
    struct vimoption	*ret = NULL;
    do
    {
	if (*option == NULL)
	    *option = (void *) options;
	else if (((struct vimoption *) (*option))->fullname == NULL)
	{
	    *option = NULL;
	    return NULL;
	}
	else
	    *option = (void *) (((struct vimoption *) (*option)) + 1);

	ret = ((struct vimoption *) (*option));

	
	if (ret->var == NULL)
	{
	    ret = NULL;
	    continue;
	}

	switch (opt_type)
	{
	    case SREQ_GLOBAL:
		if (!(ret->indir == PV_NONE || ret->indir & PV_BOTH))
		    ret = NULL;
		break;
	    case SREQ_BUF:
		if (!(ret->indir & PV_BUF))
		    ret = NULL;
		break;
	    case SREQ_WIN:
		if (!(ret->indir & PV_WIN))
		    ret = NULL;
		break;
	    default:
		internal_error("option_iter_next()");
		return NULL;
	}
    }
    while (ret == NULL);

    return (char_u *)ret->fullname;
}
#endif


    long_u
get_option_flags(int opt_idx)
{
    return options[opt_idx].flags;
}


    void
set_option_flag(int opt_idx, long_u flag)
{
    options[opt_idx].flags |= flag;
}


    int
is_global_option(int opt_idx)
{
    return options[opt_idx].indir == PV_NONE;
}


    int
is_global_local_option(int opt_idx)
{
    return options[opt_idx].indir & PV_BOTH;
}


    int
is_window_local_option(int opt_idx)
{
    return options[opt_idx].var == VAR_WIN;
}


    int
is_hidden_option(int opt_idx)
{
    return options[opt_idx].var == NULL;
}

#if defined(FEAT_CRYPT) || defined(PROTO)

    int
is_crypt_key_option(int opt_idx)
{
    return options[opt_idx].indir == PV_KEY;
}
#endif


    char *
set_option_value(
    char_u	*name,
    int	number,
    char_u	*string,
    int		opt_flags)	
{
    int		opt_idx;
    char_u	*varp;
    long_u	flags;
    static char	errbuf[ERR_BUFLEN];
    int		errbuflen = ERR_BUFLEN;

    opt_idx = findoption(name);
    if (opt_idx < 0)
    {
	int key;

	if (STRLEN(name) == 4 && name[0] == 't' && name[1] == '_'
		&& (key = find_key_option(name, FALSE)) != 0)
	{
	    char_u key_name[2];

	    if (key < 0)
	    {
		key_name[0] = KEY2TERMCAP0(key);
		key_name[1] = KEY2TERMCAP1(key);
	    }
	    else
	    {
		key_name[0] = KS_KEY;
		key_name[1] = (key & 0xff);
	    }
	    add_termcode(key_name, string, FALSE);
	    if (full_screen)
		ttest(FALSE);
	    redraw_all_later(UPD_CLEAR);
	    return NULL;
	}

	semsg(_(e_unknown_option_str_2), name);
    }
    else
    {
	flags = options[opt_idx].flags;
#ifdef HAVE_SANDBOX
	
	if (sandbox > 0 && (flags & P_SECURE))
	{
	    emsg(_(e_not_allowed_in_sandbox));
	    return NULL;
	}
#endif
	if (flags & P_STRING)
	    return set_string_option(opt_idx, string, opt_flags, errbuf, errbuflen);

	varp = get_varp_scope(&(options[opt_idx]), opt_flags);
	if (varp != NULL)	
	{
	    if (number == 0 && string != NULL)
	    {
		int idx;

		
		
		for (idx = 0; string[idx] == '0'; ++idx)
		    ;
		if (string[idx] != NUL || idx == 0)
		{
		    
		    
		    
		    semsg(_(e_number_required_after_str_equal_str),
								 name, string);
		    return NULL;     

		}
	    }
	    if (flags & P_NUM)
	    {
		return set_num_option(opt_idx, varp, number,
					   errbuf, sizeof(errbuf), opt_flags);
	    }
	    else
		return set_bool_option(opt_idx, varp, (int)number, opt_flags);
	}

    }
    return NULL;
}


    void
set_option_value_give_err(
    char_u	*name,
    int	number,
    char_u	*string,
    int		opt_flags)	
{
    char *errmsg = set_option_value(name, number, string, opt_flags);

    if (errmsg != NULL)
	emsg(_(errmsg));
}


    char_u *
get_term_code(char_u *tname)
{
    int	    opt_idx;
    char_u  *varp;

    if (tname[0] != 't' || tname[1] != '_' ||
	    tname[2] == NUL || tname[3] == NUL)
	return NULL;
    if ((opt_idx = findoption(tname)) >= 0)
    {
	varp = get_varp(&(options[opt_idx]));
	if (varp != NULL)
	    varp = *(char_u **)(varp);
	return varp;
    }
    return find_termcode(tname + 2);
}

    char_u *
get_highlight_default(void)
{
    int i;

    i = findoption((char_u *)"hl");
    if (i >= 0)
	return options[i].def_val[VI_DEFAULT];
    return (char_u *)NULL;
}

    char_u *
get_encoding_default(void)
{
    int i;

    i = findoption((char_u *)"enc");
    if (i >= 0)
	return options[i].def_val[VI_DEFAULT];
    return (char_u *)NULL;
}

#if defined(FEAT_QUICKFIX) || defined(PROTO)
    int
is_option_allocated(char *name)
{
    int idx = findoption((char_u *)name);

    return idx >= 0 && (options[idx].flags & P_ALLOCED);
}
#endif


    static int
find_key_option(char_u *arg_arg, int has_lt)
{
    int		key = 0;
    int		modifiers;
    char_u	*arg = arg_arg;

    
    
    if (arg[0] == 't' && arg[1] == '_' && arg[2] && arg[3])
	key = TERMCAP2KEY(arg[2], arg[3]);
    else if (has_lt)
    {
	--arg;			    
	modifiers = 0;
	key = find_special_key(&arg, &modifiers,
			    FSK_KEYCODE | FSK_KEEP_X_KEY | FSK_SIMPLIFY, NULL);
	if (modifiers)		    
	    key = 0;
    }
    return key;
}


    static void
showoptions(
    int		all,
    int		opt_flags)	
{
    struct vimoption	*p;
    int			col;
    int			isterm;
    char_u		*varp;
    struct vimoption	**items;
    int			item_count;
    int			run;
    int			row, rows;
    int			cols;
    int			i;
    int			len;

#define INC 20
#define GAP 3

    items = ALLOC_MULT(struct vimoption *, OPTION_COUNT);
    if (items == NULL)
	return;

    
    if (all == 2)
	msg_puts_title(_("\n--- Terminal codes ---"));
    else if (opt_flags & OPT_GLOBAL)
	msg_puts_title(_("\n--- Global option values ---"));
    else if (opt_flags & OPT_LOCAL)
	msg_puts_title(_("\n--- Local option values ---"));
    else
	msg_puts_title(_("\n--- Options ---"));

    
    
    
    
    for (run = 1; run <= 2 && !got_int; ++run)
    {
	
	item_count = 0;
	for (p = &options[0]; p->fullname != NULL; p++)
	{
	    
	    if (message_filtered((char_u *)p->fullname))
		continue;

	    varp = NULL;
	    isterm = istermoption(p);
	    if ((opt_flags & (OPT_LOCAL | OPT_GLOBAL)) != 0)
	    {
		if (p->indir != PV_NONE && !isterm)
		    varp = get_varp_scope(p, opt_flags);
	    }
	    else
		varp = get_varp(p);
	    if (varp != NULL
		    && ((all == 2 && isterm)
			|| (all == 1 && !isterm)
			|| (all == 0 && !optval_default(p, varp, p_cp))))
	    {
		if (opt_flags & OPT_ONECOLUMN)
		    len = Columns;
		else if (p->flags & P_BOOL)
		    len = 1;		
		else
		{
		    option_value2string(p, opt_flags);
		    len = (int)STRLEN(p->fullname) + vim_strsize(NameBuff) + 1;
		}
		if ((len <= INC - GAP && run == 1) ||
						(len > INC - GAP && run == 2))
		    items[item_count++] = p;
	    }
	}

	
	if (run == 1)
	{
	    cols = (Columns + GAP - 3) / INC;
	    if (cols == 0)
		cols = 1;
	    rows = (item_count + cols - 1) / cols;
	}
	else	
	    rows = item_count;
	for (row = 0; row < rows && !got_int; ++row)
	{
	    msg_putchar('\n');			
	    if (got_int)			
		break;
	    col = 0;
	    for (i = row; i < item_count; i += rows)
	    {
		msg_col = col;			
		showoneopt(items[i], opt_flags);
		col += INC;
	    }
	    out_flush();
	    ui_breakcheck();
	}
    }
    vim_free(items);
}


    static int
optval_default(struct vimoption *p, char_u *varp, int compatible)
{
    int		dvi;

    if (varp == NULL)
	return TRUE;	    
    dvi = ((p->flags & P_VI_DEF) || compatible) ? VI_DEFAULT : VIM_DEFAULT;
    if (p->flags & P_NUM)
	return (*(int *)varp == (int)(long_i)p->def_val[dvi]);
    if (p->flags & P_BOOL)
			
			
	return (*(int *)varp == (int)(int)(long_i)p->def_val[dvi]);
    
    return (STRCMP(*(char_u **)varp, p->def_val[dvi]) == 0);
}


    static void
showoneopt(
    struct vimoption	*p,
    int			opt_flags)	
{
    char_u	*varp;
    int		save_silent = silent_mode;

    silent_mode = FALSE;
    info_message = TRUE;	

    varp = get_varp_scope(p, opt_flags);

    
    if ((p->flags & P_BOOL) && ((int *)varp == &curbuf->b_changed
					? !curbufIsChanged() : !*(int *)varp))
	msg_puts("no");
    else if ((p->flags & P_BOOL) && *(int *)varp < 0)
	msg_puts("--");
    else
	msg_puts("  ");
    msg_puts(p->fullname);
    if (!(p->flags & P_BOOL))
    {
	msg_putchar('=');
	
	option_value2string(p, opt_flags);
	msg_outtrans(NameBuff);
    }

    silent_mode = save_silent;
    info_message = FALSE;
}


    int
makeset(FILE *fd, int opt_flags, int local_only)
{
    struct vimoption	*p;
    char_u		*varp;			
    char_u		*varp_fresh;		
    char_u		*varp_local = NULL;	
    char		*cmd;
    int			round;
    int			pri;

    
    for (pri = 1; pri >= 0; --pri)
    {
      for (p = &options[0]; !istermoption(p); p++)
	if (!(p->flags & P_NO_MKRC)
		&& !istermoption(p)
		&& ((pri == 1) == ((p->flags & P_PRI_MKRC) != 0)))
	{
	    
	    if (p->indir == PV_NONE && !(opt_flags & OPT_GLOBAL))
		continue;

	    
	    
	    if ((opt_flags & OPT_GLOBAL) && (p->flags & P_NOGLOB))
		continue;

	    
	    varp = get_varp_scope(p, opt_flags);
	    if ((opt_flags & OPT_GLOBAL) && optval_default(p, varp, p_cp))
		continue;

	    if ((opt_flags & OPT_SKIPRTP) && (p->var == (char_u *)&p_rtp
						 || p->var == (char_u *)&p_pp))
		continue;

	    round = 2;
	    if (p->indir != PV_NONE)
	    {
		if (p->var == VAR_WIN)
		{
		    
		    if (!(opt_flags & OPT_LOCAL))
			continue;
		    
		    
		    if (!(opt_flags & OPT_GLOBAL) && !local_only)
		    {
			varp_fresh = get_varp_scope(p, OPT_GLOBAL);
			if (!optval_default(p, varp_fresh, p_cp))
			{
			    round = 1;
			    varp_local = varp;
			    varp = varp_fresh;
			}
		    }
		}
	    }

	    
	    
	    for ( ; round <= 2; varp = varp_local, ++round)
	    {
		if (round == 1 || (opt_flags & OPT_GLOBAL))
		    cmd = "set";
		else
		    cmd = "setlocal";

		if (p->flags & P_BOOL)
		{
		    if (put_setbool(fd, cmd, p->fullname, *(int *)varp) == FAIL)
			return FAIL;
		}
		else if (p->flags & P_NUM)
		{
		    if (put_setnum(fd, cmd, p->fullname, (int *)varp) == FAIL)
			return FAIL;
		}
		else    
		{
		    int		do_endif = FALSE;

		    
		    
		    if (
#if defined(FEAT_SYN_HL)
			    p->indir == PV_SYN ||
#endif
			    p->indir == PV_FT)
		    {
			if (fprintf(fd, "if &%s != '%s'", p->fullname,
						       *(char_u **)(varp)) < 0
				|| put_eol(fd) < 0)
			    return FAIL;
			do_endif = TRUE;
		    }
		    if (put_setstring(fd, cmd, p->fullname, (char_u **)varp,
							     p->flags) == FAIL)
			return FAIL;
		    if (do_endif)
		    {
			if (put_line(fd, "endif") == FAIL)
			    return FAIL;
		    }
		}
	    }
	}
    }
    return OK;
}

#if defined(FEAT_FOLDING) || defined(PROTO)

    int
makefoldset(FILE *fd)
{
    if (put_setstring(fd, "setlocal", "fdm", &curwin->w_p_fdm, 0) == FAIL
# ifdef FEAT_EVAL
	    || put_setstring(fd, "setlocal", "fde", &curwin->w_p_fde, 0)
								       == FAIL
# endif
	    || put_setstring(fd, "setlocal", "fmr", &curwin->w_p_fmr, 0)
								       == FAIL
	    || put_setstring(fd, "setlocal", "fdi", &curwin->w_p_fdi, 0)
								       == FAIL
	    || put_setnum(fd, "setlocal", "fdl", &curwin->w_p_fdl) == FAIL
	    || put_setnum(fd, "setlocal", "fml", &curwin->w_p_fml) == FAIL
	    || put_setnum(fd, "setlocal", "fdn", &curwin->w_p_fdn) == FAIL
	    || put_setbool(fd, "setlocal", "fen", curwin->w_p_fen) == FAIL
	    )
	return FAIL;

    return OK;
}
#endif

    static int
put_setstring(
    FILE	*fd,
    char	*cmd,
    char	*name,
    char_u	**valuep,
    long_u	flags)
{
    char_u	*s;
    char_u	*buf = NULL;
    char_u	*part = NULL;
    char_u	*p;

    if (fprintf(fd, "%s %s=", cmd, name) < 0)
	return FAIL;
    if (*valuep != NULL)
    {
	
	
	
	if (valuep == &p_pt)
	{
	    s = *valuep;
	    while (*s != NUL)
		if (put_escstr(fd, str2special(&s, FALSE, FALSE), 2) == FAIL)
		    return FAIL;
	}
	
	else if ((flags & P_EXPAND) != 0)
	{
	    int  size = (int)STRLEN(*valuep) + 1;

	    
	    buf = alloc(size);
	    if (buf == NULL)
		goto fail;
	    home_replace(NULL, *valuep, buf, size, FALSE);

	    
	    
	    
	    if (size >= MAXPATHL && (flags & P_COMMA) != 0
					   && vim_strchr(*valuep, ',') != NULL)
	    {
		part = alloc(size);
		if (part == NULL)
		    goto fail;

		
		if (put_eol(fd) == FAIL)
		    goto fail;

		p = buf;
		while (*p != NUL)
		{
		    
		    
		    if (fprintf(fd, "%s %s+=", cmd, name) < 0)
			goto fail;
		    (void)copy_option_part(&p, part, size,  ",");
		    if (put_escstr(fd, part, 2) == FAIL || put_eol(fd) == FAIL)
			goto fail;
		}
		vim_free(buf);
		vim_free(part);
		return OK;
	    }
	    if (put_escstr(fd, buf, 2) == FAIL)
	    {
		vim_free(buf);
		return FAIL;
	    }
	    vim_free(buf);
	}
	else if (put_escstr(fd, *valuep, 2) == FAIL)
	    return FAIL;
    }
    if (put_eol(fd) < 0)
	return FAIL;
    return OK;
fail:
    vim_free(buf);
    vim_free(part);
    return FAIL;
}

    static int
put_setnum(
    FILE	*fd,
    char	*cmd,
    char	*name,
    int	*valuep)
{
    int	wc;

    if (fprintf(fd, "%s %s=", cmd, name) < 0)
	return FAIL;
    if (wc_use_keyname((char_u *)valuep, &wc))
    {
	
	if (fputs((char *)get_special_key_name((int)wc, 0), fd) < 0)
	    return FAIL;
    }
    else if (fprintf(fd, "%ld", *valuep) < 0)
	return FAIL;
    if (put_eol(fd) < 0)
	return FAIL;
    return OK;
}

    static int
put_setbool(
    FILE	*fd,
    char	*cmd,
    char	*name,
    int		value)
{
    if (value < 0)	
	return OK;
    if (fprintf(fd, "%s %s%s", cmd, value ? "" : "no", name) < 0
	    || put_eol(fd) < 0)
	return FAIL;
    return OK;
}


    void
clear_termoptions(void)
{
    
    
    
    mch_setmouse(FALSE);	    
    mch_restore_title(SAVE_RESTORE_BOTH);    
#if defined(FEAT_XCLIPBOARD) && defined(FEAT_GUI)
    
    
    if (gui.starting)
	clear_xterm_clip();
#endif
    stoptermcap();			

    free_termoptions();
}

    void
free_termoptions(void)
{
    struct vimoption   *p;

    for (p = options; p->fullname != NULL; p++)
	if (istermoption(p))
	{
	    if (p->flags & P_ALLOCED)
		free_string_option(*(char_u **)(p->var));
	    if (p->flags & P_DEF_ALLOCED)
		free_string_option(p->def_val[VI_DEFAULT]);
	    *(char_u **)(p->var) = empty_option;
	    p->def_val[VI_DEFAULT] = empty_option;
	    p->flags &= ~(P_ALLOCED|P_DEF_ALLOCED);
#ifdef FEAT_EVAL
	    
	    set_option_sctx_idx((int)(p - options), OPT_GLOBAL, current_sctx);
#endif
	}
    clear_termcodes();
}


    void
free_one_termoption(char_u *var)
{
    struct vimoption   *p;

    for (p = &options[0]; p->fullname != NULL; p++)
	if (p->var == var)
	{
	    if (p->flags & P_ALLOCED)
		free_string_option(*(char_u **)(p->var));
	    *(char_u **)(p->var) = empty_option;
	    p->flags &= ~P_ALLOCED;
	    break;
	}
}


    void
set_term_defaults(void)
{
    struct vimoption   *p;

    for (p = &options[0]; p->fullname != NULL; p++)
    {
	if (istermoption(p) && p->def_val[VI_DEFAULT] != *(char_u **)(p->var))
	{
	    if (p->flags & P_DEF_ALLOCED)
	    {
		free_string_option(p->def_val[VI_DEFAULT]);
		p->flags &= ~P_DEF_ALLOCED;
	    }
	    p->def_val[VI_DEFAULT] = *(char_u **)(p->var);
	    if (p->flags & P_ALLOCED)
	    {
		p->flags |= P_DEF_ALLOCED;
		p->flags &= ~P_ALLOCED;	 
	    }
	}
    }
}


    static int
istermoption(struct vimoption *p)
{
    return (p->fullname[0] == 't' && p->fullname[1] == '_');
}


    int
istermoption_idx(int opt_idx)
{
    return istermoption(&options[opt_idx]);
}

#if defined(FEAT_PYTHON) || defined(FEAT_PYTHON3) || defined(PROTO)

    void
unset_global_local_option(char_u *name, void *from)
{
    struct vimoption *p;
    int		opt_idx;
    buf_T	*buf = (buf_T *)from;

    opt_idx = findoption(name);
    if (opt_idx < 0)
	return;
    p = &(options[opt_idx]);

    switch ((int)p->indir)
    {
	
	case PV_EP:
	    clear_string_option(&buf->b_p_ep);
	    break;
	case PV_KP:
	    clear_string_option(&buf->b_p_kp);
	    break;
	case PV_PATH:
	    clear_string_option(&buf->b_p_path);
	    break;
	case PV_AR:
	    buf->b_p_ar = -1;
	    break;
	case PV_BKC:
	    clear_string_option(&buf->b_p_bkc);
	    buf->b_bkc_flags = 0;
	    break;
	case PV_TAGS:
	    clear_string_option(&buf->b_p_tags);
	    break;
	case PV_TC:
	    clear_string_option(&buf->b_p_tc);
	    buf->b_tc_flags = 0;
	    break;
	case PV_SISO:
	    curwin->w_p_siso = -1;
	    break;
	case PV_SO:
	    curwin->w_p_so = -1;
	    break;
# ifdef FEAT_FIND_ID
	case PV_DEF:
	    clear_string_option(&buf->b_p_def);
	    break;
	case PV_INC:
	    clear_string_option(&buf->b_p_inc);
	    break;
# endif
	case PV_COT:
	    clear_string_option(&buf->b_p_cot);
	    buf->b_cot_flags = 0;
	    break;
	case PV_DICT:
	    clear_string_option(&buf->b_p_dict);
	    break;
	case PV_TSR:
	    clear_string_option(&buf->b_p_tsr);
	    break;
# ifdef FEAT_COMPL_FUNC
	case PV_TSRFU:
	    clear_string_option(&buf->b_p_tsrfu);
	    break;
# endif
	case PV_FP:
	    clear_string_option(&buf->b_p_fp);
	    break;
# ifdef FEAT_QUICKFIX
	case PV_EFM:
	    clear_string_option(&buf->b_p_efm);
	    break;
	case PV_GP:
	    clear_string_option(&buf->b_p_gp);
	    break;
	case PV_MP:
	    clear_string_option(&buf->b_p_mp);
	    break;
# endif
# if defined(FEAT_BEVAL) && defined(FEAT_EVAL)
	case PV_BEXPR:
	    clear_string_option(&buf->b_p_bexpr);
	    break;
# endif
# if defined(FEAT_CRYPT)
	case PV_CM:
	    clear_string_option(&buf->b_p_cm);
	    break;
# endif
# ifdef FEAT_LINEBREAK
	case PV_SBR:
	    clear_string_option(&((win_T *)from)->w_p_sbr);
	    break;
# endif
# ifdef FEAT_STL_OPT
	case PV_STL:
	    clear_string_option(&((win_T *)from)->w_p_stl);
	    break;
# endif
	case PV_UL:
	    buf->b_p_ul = NO_LOCAL_UNDOLEVEL;
	    break;
	case PV_LW:
	    clear_string_option(&buf->b_p_lw);
	    break;
	case PV_MENC:
	    clear_string_option(&buf->b_p_menc);
	    break;
	case PV_LCS:
	    clear_string_option(&((win_T *)from)->w_p_lcs);
	    set_listchars_option((win_T *)from, ((win_T *)from)->w_p_lcs, TRUE,
								      NULL, 0);
	    redraw_later(UPD_NOT_VALID);
	    break;
	case PV_FCS:
	    clear_string_option(&((win_T *)from)->w_p_fcs);
	    set_fillchars_option((win_T *)from, ((win_T *)from)->w_p_fcs, TRUE,
								      NULL, 0);
	    redraw_later(UPD_NOT_VALID);
	    break;
	case PV_VE:
	    clear_string_option(&((win_T *)from)->w_p_ve);
	    ((win_T *)from)->w_ve_flags = 0;
	    break;
    }
}
#endif


    static char_u *
get_varp_scope(struct vimoption *p, int scope)
{
    if ((scope & OPT_GLOBAL) && p->indir != PV_NONE)
    {
	if (p->var == VAR_WIN)
	    return (char_u *)GLOBAL_WO(get_varp(p));
	return p->var;
    }
    if ((scope & OPT_LOCAL) && ((int)p->indir & PV_BOTH))
    {
	switch ((int)p->indir)
	{
	    case PV_FP:   return (char_u *)&(curbuf->b_p_fp);
#ifdef FEAT_QUICKFIX
	    case PV_EFM:  return (char_u *)&(curbuf->b_p_efm);
	    case PV_GP:   return (char_u *)&(curbuf->b_p_gp);
	    case PV_MP:   return (char_u *)&(curbuf->b_p_mp);
#endif
	    case PV_EP:   return (char_u *)&(curbuf->b_p_ep);
	    case PV_KP:   return (char_u *)&(curbuf->b_p_kp);
	    case PV_PATH: return (char_u *)&(curbuf->b_p_path);
	    case PV_AR:   return (char_u *)&(curbuf->b_p_ar);
	    case PV_TAGS: return (char_u *)&(curbuf->b_p_tags);
	    case PV_TC:   return (char_u *)&(curbuf->b_p_tc);
	    case PV_SISO: return (char_u *)&(curwin->w_p_siso);
	    case PV_SO:   return (char_u *)&(curwin->w_p_so);
#ifdef FEAT_FIND_ID
	    case PV_DEF:  return (char_u *)&(curbuf->b_p_def);
	    case PV_INC:  return (char_u *)&(curbuf->b_p_inc);
#endif
	    case PV_COT:  return (char_u *)&(curbuf->b_p_cot);
	    case PV_DICT: return (char_u *)&(curbuf->b_p_dict);
	    case PV_TSR:  return (char_u *)&(curbuf->b_p_tsr);
#ifdef FEAT_COMPL_FUNC
	    case PV_TSRFU: return (char_u *)&(curbuf->b_p_tsrfu);
#endif
#if defined(FEAT_BEVAL) && defined(FEAT_EVAL)
	    case PV_BEXPR: return (char_u *)&(curbuf->b_p_bexpr);
#endif
#if defined(FEAT_CRYPT)
	    case PV_CM:	  return (char_u *)&(curbuf->b_p_cm);
#endif
#ifdef FEAT_LINEBREAK
	    case PV_SBR:  return (char_u *)&(curwin->w_p_sbr);
#endif
#ifdef FEAT_STL_OPT
	    case PV_STL:  return (char_u *)&(curwin->w_p_stl);
#endif
	    case PV_UL:   return (char_u *)&(curbuf->b_p_ul);
	    case PV_LW:   return (char_u *)&(curbuf->b_p_lw);
	    case PV_BKC:  return (char_u *)&(curbuf->b_p_bkc);
	    case PV_MENC: return (char_u *)&(curbuf->b_p_menc);
	    case PV_LCS:  return (char_u *)&(curwin->w_p_lcs);
	    case PV_FCS:  return (char_u *)&(curwin->w_p_fcs);
	    case PV_VE:	  return (char_u *)&(curwin->w_p_ve);

	}
	return NULL; 
    }
    return get_varp(p);
}


    char_u *
get_option_varp_scope(int opt_idx, int scope)
{
    return get_varp_scope(&(options[opt_idx]), scope);
}


    static char_u *
get_varp(struct vimoption *p)
{
    
    if (p->var == NULL)
	return NULL;

    switch ((int)p->indir)
    {
	case PV_NONE:	return p->var;

	
	case PV_EP:	return *curbuf->b_p_ep != NUL
				    ? (char_u *)&curbuf->b_p_ep : p->var;
	case PV_KP:	return *curbuf->b_p_kp != NUL
				    ? (char_u *)&curbuf->b_p_kp : p->var;
	case PV_PATH:	return *curbuf->b_p_path != NUL
				    ? (char_u *)&(curbuf->b_p_path) : p->var;
	case PV_AR:	return curbuf->b_p_ar >= 0
				    ? (char_u *)&(curbuf->b_p_ar) : p->var;
	case PV_TAGS:	return *curbuf->b_p_tags != NUL
				    ? (char_u *)&(curbuf->b_p_tags) : p->var;
	case PV_TC:	return *curbuf->b_p_tc != NUL
				    ? (char_u *)&(curbuf->b_p_tc) : p->var;
	case PV_BKC:	return *curbuf->b_p_bkc != NUL
				    ? (char_u *)&(curbuf->b_p_bkc) : p->var;
	case PV_SISO:	return curwin->w_p_siso >= 0
				    ? (char_u *)&(curwin->w_p_siso) : p->var;
	case PV_SO:	return curwin->w_p_so >= 0
				    ? (char_u *)&(curwin->w_p_so) : p->var;
#ifdef FEAT_FIND_ID
	case PV_DEF:	return *curbuf->b_p_def != NUL
				    ? (char_u *)&(curbuf->b_p_def) : p->var;
	case PV_INC:	return *curbuf->b_p_inc != NUL
				    ? (char_u *)&(curbuf->b_p_inc) : p->var;
#endif
	case PV_COT:	return *curbuf->b_p_cot != NUL
				    ? (char_u *)&(curbuf->b_p_cot) : p->var;
	case PV_DICT:	return *curbuf->b_p_dict != NUL
				    ? (char_u *)&(curbuf->b_p_dict) : p->var;
	case PV_TSR:	return *curbuf->b_p_tsr != NUL
				    ? (char_u *)&(curbuf->b_p_tsr) : p->var;
#ifdef FEAT_COMPL_FUNC
	case PV_TSRFU:	return *curbuf->b_p_tsrfu != NUL
				    ? (char_u *)&(curbuf->b_p_tsrfu) : p->var;
#endif
	case PV_FP:	return *curbuf->b_p_fp != NUL
				    ? (char_u *)&(curbuf->b_p_fp) : p->var;
#ifdef FEAT_QUICKFIX
	case PV_EFM:	return *curbuf->b_p_efm != NUL
				    ? (char_u *)&(curbuf->b_p_efm) : p->var;
	case PV_GP:	return *curbuf->b_p_gp != NUL
				    ? (char_u *)&(curbuf->b_p_gp) : p->var;
	case PV_MP:	return *curbuf->b_p_mp != NUL
				    ? (char_u *)&(curbuf->b_p_mp) : p->var;
#endif
#if defined(FEAT_BEVAL) && defined(FEAT_EVAL)
	case PV_BEXPR:	return *curbuf->b_p_bexpr != NUL
				    ? (char_u *)&(curbuf->b_p_bexpr) : p->var;
#endif
#if defined(FEAT_CRYPT)
	case PV_CM:	return *curbuf->b_p_cm != NUL
				    ? (char_u *)&(curbuf->b_p_cm) : p->var;
#endif
#ifdef FEAT_LINEBREAK
	case PV_SBR:	return *curwin->w_p_sbr != NUL
				    ? (char_u *)&(curwin->w_p_sbr) : p->var;
#endif
#ifdef FEAT_STL_OPT
	case PV_STL:	return *curwin->w_p_stl != NUL
				    ? (char_u *)&(curwin->w_p_stl) : p->var;
#endif
	case PV_UL:	return curbuf->b_p_ul != NO_LOCAL_UNDOLEVEL
				    ? (char_u *)&(curbuf->b_p_ul) : p->var;
	case PV_LW:	return *curbuf->b_p_lw != NUL
				    ? (char_u *)&(curbuf->b_p_lw) : p->var;
	case PV_MENC:	return *curbuf->b_p_menc != NUL
				    ? (char_u *)&(curbuf->b_p_menc) : p->var;
#ifdef FEAT_ARABIC
	case PV_ARAB:	return (char_u *)&(curwin->w_p_arab);
#endif
	case PV_LIST:	return (char_u *)&(curwin->w_p_list);
	case PV_LCS:	return *curwin->w_p_lcs != NUL
				    ? (char_u *)&(curwin->w_p_lcs) : p->var;
	case PV_FCS:	return *curwin->w_p_fcs != NUL
				    ? (char_u *)&(curwin->w_p_fcs) : p->var;
	case PV_VE:	return *curwin->w_p_ve != NUL
				    ? (char_u *)&(curwin->w_p_ve) : p->var;
#ifdef FEAT_SPELL
	case PV_SPELL:	return (char_u *)&(curwin->w_p_spell);
#endif
#ifdef FEAT_SYN_HL
	case PV_CUC:	return (char_u *)&(curwin->w_p_cuc);
	case PV_CUL:	return (char_u *)&(curwin->w_p_cul);
	case PV_CULOPT:	return (char_u *)&(curwin->w_p_culopt);
	case PV_CC:	return (char_u *)&(curwin->w_p_cc);
#endif
#ifdef FEAT_DIFF
	case PV_DIFF:	return (char_u *)&(curwin->w_p_diff);
#endif
#ifdef FEAT_FOLDING
	case PV_FDC:	return (char_u *)&(curwin->w_p_fdc);
	case PV_FEN:	return (char_u *)&(curwin->w_p_fen);
	case PV_FDI:	return (char_u *)&(curwin->w_p_fdi);
	case PV_FDL:	return (char_u *)&(curwin->w_p_fdl);
	case PV_FDM:	return (char_u *)&(curwin->w_p_fdm);
	case PV_FML:	return (char_u *)&(curwin->w_p_fml);
	case PV_FDN:	return (char_u *)&(curwin->w_p_fdn);
# ifdef FEAT_EVAL
	case PV_FDE:	return (char_u *)&(curwin->w_p_fde);
	case PV_FDT:	return (char_u *)&(curwin->w_p_fdt);
# endif
	case PV_FMR:	return (char_u *)&(curwin->w_p_fmr);
#endif
	case PV_NU:	return (char_u *)&(curwin->w_p_nu);
	case PV_RNU:	return (char_u *)&(curwin->w_p_rnu);
#ifdef FEAT_LINEBREAK
	case PV_NUW:	return (char_u *)&(curwin->w_p_nuw);
#endif
	case PV_WFB:	return (char_u *)&(curwin->w_p_wfb);
	case PV_WFH:	return (char_u *)&(curwin->w_p_wfh);
	case PV_WFW:	return (char_u *)&(curwin->w_p_wfw);
#if defined(FEAT_QUICKFIX)
	case PV_PVW:	return (char_u *)&(curwin->w_p_pvw);
#endif
#ifdef FEAT_RIGHTLEFT
	case PV_RL:	return (char_u *)&(curwin->w_p_rl);
	case PV_RLC:	return (char_u *)&(curwin->w_p_rlc);
#endif
	case PV_SCROLL:	return (char_u *)&(curwin->w_p_scr);
	case PV_SMS:	return (char_u *)&(curwin->w_p_sms);
	case PV_WRAP:	return (char_u *)&(curwin->w_p_wrap);
#ifdef FEAT_LINEBREAK
	case PV_LBR:	return (char_u *)&(curwin->w_p_lbr);
	case PV_BRI:	return (char_u *)&(curwin->w_p_bri);
	case PV_BRIOPT: return (char_u *)&(curwin->w_p_briopt);
#endif
	case PV_WCR:	return (char_u *)&(curwin->w_p_wcr);
	case PV_SCBIND: return (char_u *)&(curwin->w_p_scb);
	case PV_CRBIND: return (char_u *)&(curwin->w_p_crb);
#ifdef FEAT_CONCEAL
	case PV_COCU:   return (char_u *)&(curwin->w_p_cocu);
	case PV_COLE:   return (char_u *)&(curwin->w_p_cole);
#endif
#ifdef FEAT_TERMINAL
	case PV_TWK:    return (char_u *)&(curwin->w_p_twk);
	case PV_TWS:    return (char_u *)&(curwin->w_p_tws);
	case PV_TWSL:	return (char_u *)&(curbuf->b_p_twsl);
#endif

	case PV_AI:	return (char_u *)&(curbuf->b_p_ai);
	case PV_BIN:	return (char_u *)&(curbuf->b_p_bin);
	case PV_BOMB:	return (char_u *)&(curbuf->b_p_bomb);
	case PV_BH:	return (char_u *)&(curbuf->b_p_bh);
	case PV_BT:	return (char_u *)&(curbuf->b_p_bt);
	case PV_BL:	return (char_u *)&(curbuf->b_p_bl);
	case PV_CI:	return (char_u *)&(curbuf->b_p_ci);
	case PV_CIN:	return (char_u *)&(curbuf->b_p_cin);
	case PV_CINK:	return (char_u *)&(curbuf->b_p_cink);
	case PV_CINO:	return (char_u *)&(curbuf->b_p_cino);
	case PV_CINSD:	return (char_u *)&(curbuf->b_p_cinsd);
	case PV_CINW:	return (char_u *)&(curbuf->b_p_cinw);
	case PV_COM:	return (char_u *)&(curbuf->b_p_com);
#ifdef FEAT_FOLDING
	case PV_CMS:	return (char_u *)&(curbuf->b_p_cms);
#endif
	case PV_CPT:	return (char_u *)&(curbuf->b_p_cpt);
#ifdef BACKSLASH_IN_FILENAME
	case PV_CSL:	return (char_u *)&(curbuf->b_p_csl);
#endif
#ifdef FEAT_COMPL_FUNC
	case PV_CFU:	return (char_u *)&(curbuf->b_p_cfu);
	case PV_OFU:	return (char_u *)&(curbuf->b_p_ofu);
#endif
#ifdef FEAT_EVAL
	case PV_TFU:	return (char_u *)&(curbuf->b_p_tfu);
#endif
	case PV_EOF:	return (char_u *)&(curbuf->b_p_eof);
	case PV_EOL:	return (char_u *)&(curbuf->b_p_eol);
	case PV_FIXEOL:	return (char_u *)&(curbuf->b_p_fixeol);
	case PV_ET:	return (char_u *)&(curbuf->b_p_et);
	case PV_FENC:	return (char_u *)&(curbuf->b_p_fenc);
	case PV_FF:	return (char_u *)&(curbuf->b_p_ff);
	case PV_FT:	return (char_u *)&(curbuf->b_p_ft);
	case PV_FO:	return (char_u *)&(curbuf->b_p_fo);
	case PV_FLP:	return (char_u *)&(curbuf->b_p_flp);
	case PV_IMI:	return (char_u *)&(curbuf->b_p_iminsert);
	case PV_IMS:	return (char_u *)&(curbuf->b_p_imsearch);
	case PV_INF:	return (char_u *)&(curbuf->b_p_inf);
	case PV_ISK:	return (char_u *)&(curbuf->b_p_isk);
#ifdef FEAT_FIND_ID
# ifdef FEAT_EVAL
	case PV_INEX:	return (char_u *)&(curbuf->b_p_inex);
# endif
#endif
#if defined(FEAT_EVAL)
	case PV_INDE:	return (char_u *)&(curbuf->b_p_inde);
	case PV_INDK:	return (char_u *)&(curbuf->b_p_indk);
#endif
#ifdef FEAT_EVAL
	case PV_FEX:	return (char_u *)&(curbuf->b_p_fex);
#endif
#ifdef FEAT_CRYPT
	case PV_KEY:	return (char_u *)&(curbuf->b_p_key);
#endif
	case PV_LISP:	return (char_u *)&(curbuf->b_p_lisp);
	case PV_LOP:	return (char_u *)&(curbuf->b_p_lop);
	case PV_ML:	return (char_u *)&(curbuf->b_p_ml);
	case PV_MPS:	return (char_u *)&(curbuf->b_p_mps);
	case PV_MA:	return (char_u *)&(curbuf->b_p_ma);
	case PV_MOD:	return (char_u *)&(curbuf->b_changed);
	case PV_NF:	return (char_u *)&(curbuf->b_p_nf);
	case PV_PI:	return (char_u *)&(curbuf->b_p_pi);
	case PV_QE:	return (char_u *)&(curbuf->b_p_qe);
	case PV_RO:	return (char_u *)&(curbuf->b_p_ro);
	case PV_SI:	return (char_u *)&(curbuf->b_p_si);
	case PV_SN:	return (char_u *)&(curbuf->b_p_sn);
	case PV_STS:	return (char_u *)&(curbuf->b_p_sts);
	case PV_SUA:	return (char_u *)&(curbuf->b_p_sua);
	case PV_SWF:	return (char_u *)&(curbuf->b_p_swf);
#ifdef FEAT_SYN_HL
	case PV_SMC:	return (char_u *)&(curbuf->b_p_smc);
	case PV_SYN:	return (char_u *)&(curbuf->b_p_syn);
#endif
#ifdef FEAT_SPELL
	case PV_SPC:	return (char_u *)&(curwin->w_s->b_p_spc);
	case PV_SPF:	return (char_u *)&(curwin->w_s->b_p_spf);
	case PV_SPL:	return (char_u *)&(curwin->w_s->b_p_spl);
	case PV_SPO:	return (char_u *)&(curwin->w_s->b_p_spo);
#endif
	case PV_SW:	return (char_u *)&(curbuf->b_p_sw);
	case PV_TS:	return (char_u *)&(curbuf->b_p_ts);
	case PV_TW:	return (char_u *)&(curbuf->b_p_tw);
	case PV_TX:	return (char_u *)&(curbuf->b_p_tx);
#ifdef FEAT_PERSISTENT_UNDO
	case PV_UDF:	return (char_u *)&(curbuf->b_p_udf);
#endif
	case PV_WM:	return (char_u *)&(curbuf->b_p_wm);
#ifdef FEAT_KEYMAP
	case PV_KMAP:	return (char_u *)&(curbuf->b_p_keymap);
#endif
#ifdef FEAT_SIGNS
	case PV_SCL:	return (char_u *)&(curwin->w_p_scl);
#endif
#ifdef FEAT_VARTABS
	case PV_VSTS:	return (char_u *)&(curbuf->b_p_vsts);
	case PV_VTS:	return (char_u *)&(curbuf->b_p_vts);
#endif
	default:	iemsg(e_get_varp_error);
    }
    
    return (char_u *)&(curbuf->b_p_wm);
}


    char_u *
get_option_var(int opt_idx)
{
    return options[opt_idx].var;
}

#if defined(FEAT_EVAL) || defined(PROTO)

    char_u *
get_option_fullname(int opt_idx)
{
    return (char_u *)options[opt_idx].fullname;
}
#endif


    opt_did_set_cb_T
get_option_did_set_cb(int opt_idx)
{
    return options[opt_idx].opt_did_set_cb;
}


    char_u *
get_equalprg(void)
{
    if (*curbuf->b_p_ep == NUL)
	return p_ep;
    return curbuf->b_p_ep;
}


    void
win_copy_options(win_T *wp_from, win_T *wp_to)
{
    copy_winopt(&wp_from->w_onebuf_opt, &wp_to->w_onebuf_opt);
    copy_winopt(&wp_from->w_allbuf_opt, &wp_to->w_allbuf_opt);
    after_copy_winopt(wp_to);
}


    void
after_copy_winopt(win_T *wp)
{
#ifdef FEAT_LINEBREAK
    briopt_check(wp);
#endif
#ifdef FEAT_SYN_HL
    fill_culopt_flags(NULL, wp);
    check_colorcolumn(wp);
#endif
    set_listchars_option(wp, wp->w_p_lcs, TRUE, NULL, 0);
    set_fillchars_option(wp, wp->w_p_fcs, TRUE, NULL, 0);
}

    static char_u *
copy_option_val(char_u *val)
{
    if (val == empty_option)
	return empty_option;  
    return vim_strsave(val);
}


    void
copy_winopt(winopt_T *from, winopt_T *to)
{
#ifdef FEAT_ARABIC
    to->wo_arab = from->wo_arab;
#endif
    to->wo_list = from->wo_list;
    to->wo_lcs = copy_option_val(from->wo_lcs);
    to->wo_fcs = copy_option_val(from->wo_fcs);
    to->wo_nu = from->wo_nu;
    to->wo_rnu = from->wo_rnu;
    to->wo_ve = copy_option_val(from->wo_ve);
    to->wo_ve_flags = from->wo_ve_flags;
#ifdef FEAT_LINEBREAK
    to->wo_nuw = from->wo_nuw;
#endif
#ifdef FEAT_RIGHTLEFT
    to->wo_rl  = from->wo_rl;
    to->wo_rlc = copy_option_val(from->wo_rlc);
#endif
#ifdef FEAT_LINEBREAK
    to->wo_sbr = copy_option_val(from->wo_sbr);
#endif
#ifdef FEAT_STL_OPT
    to->wo_stl = copy_option_val(from->wo_stl);
#endif
    to->wo_wrap = from->wo_wrap;
#ifdef FEAT_DIFF
    to->wo_wrap_save = from->wo_wrap_save;
#endif
#ifdef FEAT_LINEBREAK
    to->wo_lbr = from->wo_lbr;
    to->wo_bri = from->wo_bri;
    to->wo_briopt = copy_option_val(from->wo_briopt);
#endif
    to->wo_wcr = copy_option_val(from->wo_wcr);
    to->wo_scb = from->wo_scb;
    to->wo_scb_save = from->wo_scb_save;
    to->wo_sms = from->wo_sms;
    to->wo_crb = from->wo_crb;
    to->wo_crb_save = from->wo_crb_save;
    to->wo_siso = from->wo_siso;
    to->wo_so = from->wo_so;
#ifdef FEAT_SPELL
    to->wo_spell = from->wo_spell;
#endif
#ifdef FEAT_SYN_HL
    to->wo_cuc = from->wo_cuc;
    to->wo_cul = from->wo_cul;
    to->wo_culopt = copy_option_val(from->wo_culopt);
    to->wo_cc = copy_option_val(from->wo_cc);
#endif
#ifdef FEAT_DIFF
    to->wo_diff = from->wo_diff;
    to->wo_diff_saved = from->wo_diff_saved;
#endif
#ifdef FEAT_CONCEAL
    to->wo_cocu = copy_option_val(from->wo_cocu);
    to->wo_cole = from->wo_cole;
#endif
#ifdef FEAT_TERMINAL
    to->wo_twk = copy_option_val(from->wo_twk);
    to->wo_tws = copy_option_val(from->wo_tws);
#endif
#ifdef FEAT_FOLDING
    to->wo_fdc = from->wo_fdc;
    to->wo_fdc_save = from->wo_fdc_save;
    to->wo_fen = from->wo_fen;
    to->wo_fen_save = from->wo_fen_save;
    to->wo_fdi = copy_option_val(from->wo_fdi);
    to->wo_fml = from->wo_fml;
    to->wo_fdl = from->wo_fdl;
    to->wo_fdl_save = from->wo_fdl_save;
    to->wo_fdm = copy_option_val(from->wo_fdm);
    to->wo_fdm_save = from->wo_diff_saved
			       ? vim_strsave(from->wo_fdm_save) : empty_option;
    to->wo_fdn = from->wo_fdn;
# ifdef FEAT_EVAL
    to->wo_fde = copy_option_val(from->wo_fde);
    to->wo_fdt = copy_option_val(from->wo_fdt);
# endif
    to->wo_fmr = copy_option_val(from->wo_fmr);
#endif
#ifdef FEAT_SIGNS
    to->wo_scl = copy_option_val(from->wo_scl);
#endif

#ifdef FEAT_EVAL
    
    mch_memmove(to->wo_script_ctx, from->wo_script_ctx,
						    sizeof(to->wo_script_ctx));
#endif
    check_winopt(to);		
}


    static void
check_win_options(win_T *win)
{
    check_winopt(&win->w_onebuf_opt);
    check_winopt(&win->w_allbuf_opt);
}


    static void
check_winopt(winopt_T *wop UNUSED)
{
#ifdef FEAT_FOLDING
    check_string_option(&wop->wo_fdi);
    check_string_option(&wop->wo_fdm);
    check_string_option(&wop->wo_fdm_save);
# ifdef FEAT_EVAL
    check_string_option(&wop->wo_fde);
    check_string_option(&wop->wo_fdt);
# endif
    check_string_option(&wop->wo_fmr);
#endif
#ifdef FEAT_SIGNS
    check_string_option(&wop->wo_scl);
#endif
#ifdef FEAT_RIGHTLEFT
    check_string_option(&wop->wo_rlc);
#endif
#ifdef FEAT_LINEBREAK
    check_string_option(&wop->wo_sbr);
#endif
#ifdef FEAT_STL_OPT
    check_string_option(&wop->wo_stl);
#endif
#ifdef FEAT_SYN_HL
    check_string_option(&wop->wo_culopt);
    check_string_option(&wop->wo_cc);
#endif
#ifdef FEAT_CONCEAL
    check_string_option(&wop->wo_cocu);
#endif
#ifdef FEAT_TERMINAL
    check_string_option(&wop->wo_twk);
    check_string_option(&wop->wo_tws);
#endif
#ifdef FEAT_LINEBREAK
    check_string_option(&wop->wo_briopt);
#endif
    check_string_option(&wop->wo_wcr);
    check_string_option(&wop->wo_lcs);
    check_string_option(&wop->wo_fcs);
    check_string_option(&wop->wo_ve);
}


    void
clear_winopt(winopt_T *wop UNUSED)
{
#ifdef FEAT_FOLDING
    clear_string_option(&wop->wo_fdi);
    clear_string_option(&wop->wo_fdm);
    clear_string_option(&wop->wo_fdm_save);
# ifdef FEAT_EVAL
    clear_string_option(&wop->wo_fde);
    clear_string_option(&wop->wo_fdt);
# endif
    clear_string_option(&wop->wo_fmr);
#endif
#ifdef FEAT_SIGNS
    clear_string_option(&wop->wo_scl);
#endif
#ifdef FEAT_LINEBREAK
    clear_string_option(&wop->wo_briopt);
#endif
    clear_string_option(&wop->wo_wcr);
#ifdef FEAT_RIGHTLEFT
    clear_string_option(&wop->wo_rlc);
#endif
#ifdef FEAT_LINEBREAK
    clear_string_option(&wop->wo_sbr);
#endif
#ifdef FEAT_STL_OPT
    clear_string_option(&wop->wo_stl);
#endif
#ifdef FEAT_SYN_HL
    clear_string_option(&wop->wo_culopt);
    clear_string_option(&wop->wo_cc);
#endif
#ifdef FEAT_CONCEAL
    clear_string_option(&wop->wo_cocu);
#endif
#ifdef FEAT_TERMINAL
    clear_string_option(&wop->wo_twk);
    clear_string_option(&wop->wo_tws);
#endif
    clear_string_option(&wop->wo_lcs);
    clear_string_option(&wop->wo_fcs);
    clear_string_option(&wop->wo_ve);
}

#ifdef FEAT_EVAL

static int buf_opt_idx[BV_COUNT];
# define COPY_OPT_SCTX(buf, bv) buf->b_p_script_ctx[bv] = options[buf_opt_idx[bv]].script_ctx


    static void
init_buf_opt_idx(void)
{
    static int did_init_buf_opt_idx = FALSE;
    int i;

    if (did_init_buf_opt_idx)
	return;
    did_init_buf_opt_idx = TRUE;
    for (i = 0; !istermoption_idx(i); i++)
	if (options[i].indir & PV_BUF)
	    buf_opt_idx[options[i].indir & PV_MASK] = i;
}
#else
# define COPY_OPT_SCTX(buf, bv)
#endif


    void
buf_copy_options(buf_T *buf, int flags)
{
    int		should_copy = TRUE;
    char_u	*save_p_isk = NULL;	    
    int		dont_do_help;
    int		did_isk = FALSE;

    
    
    if (p_cpo != NULL)
    {
	
	if ((vim_strchr(p_cpo, CPO_BUFOPTGLOB) == NULL || !(flags & BCO_ENTER))
		&& (buf->b_p_initialized
		    || (!(flags & BCO_ENTER)
			&& vim_strchr(p_cpo, CPO_BUFOPT) != NULL)))
	    should_copy = FALSE;

	if (should_copy || (flags & BCO_ALWAYS))
	{
#ifdef FEAT_EVAL
	    CLEAR_FIELD(buf->b_p_script_ctx);
	    init_buf_opt_idx();
#endif
	    
	    
	    
	    dont_do_help = ((flags & BCO_NOHELP) && buf->b_help)
						       || buf->b_p_initialized;
	    if (dont_do_help)		
	    {
		save_p_isk = buf->b_p_isk;
		buf->b_p_isk = NULL;
	    }
	    
	    
	    if (!buf->b_p_initialized)
	    {
		free_buf_options(buf, TRUE);
		buf->b_p_ro = FALSE;		
		buf->b_p_tx = p_tx;
		buf->b_p_fenc = vim_strsave(p_fenc);
		switch (*p_ffs)
		{
		    case 'm':
			buf->b_p_ff = vim_strsave((char_u *)FF_MAC); break;
		    case 'd':
			buf->b_p_ff = vim_strsave((char_u *)FF_DOS); break;
		    case 'u':
			buf->b_p_ff = vim_strsave((char_u *)FF_UNIX); break;
		    default:
			buf->b_p_ff = vim_strsave(p_ff);
		}
		if (buf->b_p_ff != NULL)
		    buf->b_start_ffc = *buf->b_p_ff;
		buf->b_p_bh = empty_option;
		buf->b_p_bt = empty_option;
	    }
	    else
		free_buf_options(buf, FALSE);

	    buf->b_p_ai = p_ai;
	    COPY_OPT_SCTX(buf, BV_AI);
	    buf->b_p_ai_nopaste = p_ai_nopaste;
	    buf->b_p_sw = p_sw;
	    COPY_OPT_SCTX(buf, BV_SW);
	    buf->b_p_tw = p_tw;
	    COPY_OPT_SCTX(buf, BV_TW);
	    buf->b_p_tw_nopaste = p_tw_nopaste;
	    buf->b_p_tw_nobin = p_tw_nobin;
	    buf->b_p_wm = p_wm;
	    COPY_OPT_SCTX(buf, BV_WM);
	    buf->b_p_wm_nopaste = p_wm_nopaste;
	    buf->b_p_wm_nobin = p_wm_nobin;
	    buf->b_p_bin = p_bin;
	    COPY_OPT_SCTX(buf, BV_BIN);
	    buf->b_p_bomb = p_bomb;
	    COPY_OPT_SCTX(buf, BV_BOMB);
	    buf->b_p_fixeol = p_fixeol;
	    COPY_OPT_SCTX(buf, BV_FIXEOL);
	    buf->b_p_et = p_et;
	    COPY_OPT_SCTX(buf, BV_ET);
	    buf->b_p_et_nobin = p_et_nobin;
	    buf->b_p_et_nopaste = p_et_nopaste;
	    buf->b_p_ml = p_ml;
	    COPY_OPT_SCTX(buf, BV_ML);
	    buf->b_p_ml_nobin = p_ml_nobin;
	    buf->b_p_inf = p_inf;
	    COPY_OPT_SCTX(buf, BV_INF);
	    if (cmdmod.cmod_flags & CMOD_NOSWAPFILE)
		buf->b_p_swf = FALSE;
	    else
	    {
		buf->b_p_swf = p_swf;
		COPY_OPT_SCTX(buf, BV_SWF);
	    }
	    buf->b_p_cpt = vim_strsave(p_cpt);
	    COPY_OPT_SCTX(buf, BV_CPT);
#ifdef BACKSLASH_IN_FILENAME
	    buf->b_p_csl = vim_strsave(p_csl);
	    COPY_OPT_SCTX(buf, BV_CSL);
#endif
#ifdef FEAT_COMPL_FUNC
	    buf->b_p_cfu = vim_strsave(p_cfu);
	    COPY_OPT_SCTX(buf, BV_CFU);
	    set_buflocal_cfu_callback(buf);
	    buf->b_p_ofu = vim_strsave(p_ofu);
	    COPY_OPT_SCTX(buf, BV_OFU);
	    set_buflocal_ofu_callback(buf);
#endif
#ifdef FEAT_EVAL
	    buf->b_p_tfu = vim_strsave(p_tfu);
	    COPY_OPT_SCTX(buf, BV_TFU);
	    set_buflocal_tfu_callback(buf);
#endif
	    buf->b_p_sts = p_sts;
	    COPY_OPT_SCTX(buf, BV_STS);
	    buf->b_p_sts_nopaste = p_sts_nopaste;
#ifdef FEAT_VARTABS
	    buf->b_p_vsts = vim_strsave(p_vsts);
	    COPY_OPT_SCTX(buf, BV_VSTS);
	    if (p_vsts && p_vsts != empty_option)
		(void)tabstop_set(p_vsts, &buf->b_p_vsts_array);
	    else
		buf->b_p_vsts_array = NULL;
	    buf->b_p_vsts_nopaste = p_vsts_nopaste
				 ? vim_strsave(p_vsts_nopaste) : NULL;
#endif
	    buf->b_p_sn = p_sn;
	    COPY_OPT_SCTX(buf, BV_SN);
	    buf->b_p_com = vim_strsave(p_com);
	    COPY_OPT_SCTX(buf, BV_COM);
#ifdef FEAT_FOLDING
	    buf->b_p_cms = vim_strsave(p_cms);
	    COPY_OPT_SCTX(buf, BV_CMS);
#endif
	    buf->b_p_fo = vim_strsave(p_fo);
	    COPY_OPT_SCTX(buf, BV_FO);
	    buf->b_p_flp = vim_strsave(p_flp);
	    COPY_OPT_SCTX(buf, BV_FLP);
	    
	    
	    buf->b_p_nf = vim_strsave(p_nf);
	    COPY_OPT_SCTX(buf, BV_NF);
	    buf->b_p_mps = vim_strsave(p_mps);
	    COPY_OPT_SCTX(buf, BV_MPS);
	    buf->b_p_si = p_si;
	    COPY_OPT_SCTX(buf, BV_SI);
	    buf->b_p_ci = p_ci;
	    COPY_OPT_SCTX(buf, BV_CI);

	    buf->b_p_cin = p_cin;
	    COPY_OPT_SCTX(buf, BV_CIN);
	    buf->b_p_cink = vim_strsave(p_cink);
	    COPY_OPT_SCTX(buf, BV_CINK);
	    buf->b_p_cino = vim_strsave(p_cino);
	    COPY_OPT_SCTX(buf, BV_CINO);
	    buf->b_p_cinsd = vim_strsave(p_cinsd);
	    COPY_OPT_SCTX(buf, BV_CINSD);
	    buf->b_p_lop = vim_strsave(p_lop);
	    COPY_OPT_SCTX(buf, BV_LOP);

	    
	    buf->b_p_ft = empty_option;
	    buf->b_p_pi = p_pi;
	    COPY_OPT_SCTX(buf, BV_PI);
	    buf->b_p_cinw = vim_strsave(p_cinw);
	    COPY_OPT_SCTX(buf, BV_CINW);
	    buf->b_p_lisp = p_lisp;
	    COPY_OPT_SCTX(buf, BV_LISP);
#ifdef FEAT_SYN_HL
	    
	    buf->b_p_syn = empty_option;
	    buf->b_p_smc = p_smc;
	    COPY_OPT_SCTX(buf, BV_SMC);
	    buf->b_s.b_syn_isk = empty_option;
#endif
#ifdef FEAT_SPELL
	    buf->b_s.b_p_spc = vim_strsave(p_spc);
	    COPY_OPT_SCTX(buf, BV_SPC);
	    (void)compile_cap_prog(&buf->b_s);
	    buf->b_s.b_p_spf = vim_strsave(p_spf);
	    COPY_OPT_SCTX(buf, BV_SPF);
	    buf->b_s.b_p_spl = vim_strsave(p_spl);
	    COPY_OPT_SCTX(buf, BV_SPL);
	    buf->b_s.b_p_spo = vim_strsave(p_spo);
	    COPY_OPT_SCTX(buf, BV_SPO);
#endif
#if defined(FEAT_EVAL)
	    buf->b_p_inde = vim_strsave(p_inde);
	    COPY_OPT_SCTX(buf, BV_INDE);
	    buf->b_p_indk = vim_strsave(p_indk);
	    COPY_OPT_SCTX(buf, BV_INDK);
#endif
	    buf->b_p_fp = empty_option;
#if defined(FEAT_EVAL)
	    buf->b_p_fex = vim_strsave(p_fex);
	    COPY_OPT_SCTX(buf, BV_FEX);
#endif
#ifdef FEAT_CRYPT
	    buf->b_p_key = vim_strsave(p_key);
	    COPY_OPT_SCTX(buf, BV_KEY);
#endif
	    buf->b_p_sua = vim_strsave(p_sua);
	    COPY_OPT_SCTX(buf, BV_SUA);
#ifdef FEAT_KEYMAP
	    buf->b_p_keymap = vim_strsave(p_keymap);
	    COPY_OPT_SCTX(buf, BV_KMAP);
	    buf->b_kmap_state |= KEYMAP_INIT;
#endif
#ifdef FEAT_TERMINAL
	    buf->b_p_twsl = p_twsl;
	    COPY_OPT_SCTX(buf, BV_TWSL);
#endif
	    
	    
	    buf->b_p_iminsert = p_iminsert;
	    COPY_OPT_SCTX(buf, BV_IMI);
	    buf->b_p_imsearch = p_imsearch;
	    COPY_OPT_SCTX(buf, BV_IMS);

	    
	    
	    buf->b_p_ar = -1;
	    buf->b_p_ul = NO_LOCAL_UNDOLEVEL;
	    buf->b_p_bkc = empty_option;
	    buf->b_bkc_flags = 0;
#ifdef FEAT_QUICKFIX
	    buf->b_p_gp = empty_option;
	    buf->b_p_mp = empty_option;
	    buf->b_p_efm = empty_option;
#endif
	    buf->b_p_ep = empty_option;
	    buf->b_p_kp = empty_option;
	    buf->b_p_path = empty_option;
	    buf->b_p_tags = empty_option;
	    buf->b_p_tc = empty_option;
	    buf->b_tc_flags = 0;
#ifdef FEAT_FIND_ID
	    buf->b_p_def = empty_option;
	    buf->b_p_inc = empty_option;
# ifdef FEAT_EVAL
	    buf->b_p_inex = vim_strsave(p_inex);
	    COPY_OPT_SCTX(buf, BV_INEX);
# endif
#endif
	    buf->b_p_cot = empty_option;
	    buf->b_cot_flags = 0;
	    buf->b_p_dict = empty_option;
	    buf->b_p_tsr = empty_option;
#ifdef FEAT_COMPL_FUNC
	    buf->b_p_tsrfu = empty_option;
#endif
	    buf->b_p_qe = vim_strsave(p_qe);
	    COPY_OPT_SCTX(buf, BV_QE);
#if defined(FEAT_BEVAL) && defined(FEAT_EVAL)
	    buf->b_p_bexpr = empty_option;
#endif
#if defined(FEAT_CRYPT)
	    buf->b_p_cm = empty_option;
#endif
#ifdef FEAT_PERSISTENT_UNDO
	    buf->b_p_udf = p_udf;
	    COPY_OPT_SCTX(buf, BV_UDF);
#endif
	    buf->b_p_lw = empty_option;
	    buf->b_p_menc = empty_option;

	    
	    
	    
	    
	    if (dont_do_help)
	    {
		buf->b_p_isk = save_p_isk;
#ifdef FEAT_VARTABS
		if (p_vts && *p_vts != NUL && !buf->b_p_vts_array)
		    (void)tabstop_set(p_vts, &buf->b_p_vts_array);
		else
		    buf->b_p_vts_array = NULL;
#endif
	    }
	    else
	    {
		buf->b_p_isk = vim_strsave(p_isk);
		COPY_OPT_SCTX(buf, BV_ISK);
		did_isk = TRUE;
		buf->b_p_ts = p_ts;
		COPY_OPT_SCTX(buf, BV_TS);
#ifdef FEAT_VARTABS
		buf->b_p_vts = vim_strsave(p_vts);
		COPY_OPT_SCTX(buf, BV_VTS);
		if (p_vts && *p_vts != NUL && !buf->b_p_vts_array)
		    (void)tabstop_set(p_vts, &buf->b_p_vts_array);
		else
		    buf->b_p_vts_array = NULL;
#endif
		buf->b_help = FALSE;
		if (buf->b_p_bt[0] == 'h')
		    clear_string_option(&buf->b_p_bt);
		buf->b_p_ma = p_ma;
		COPY_OPT_SCTX(buf, BV_MA);
	    }
	}

	
	
	if (should_copy)
	    buf->b_p_initialized = TRUE;
    }

    check_buf_options(buf);	    
    if (did_isk)
	(void)buf_init_chartab(buf, FALSE);
}


    void
reset_modifiable(void)
{
    int		opt_idx;

    curbuf->b_p_ma = FALSE;
    p_ma = FALSE;
    opt_idx = findoption((char_u *)"ma");
    if (opt_idx >= 0)
	options[opt_idx].def_val[VI_DEFAULT] = FALSE;
}


    void
set_iminsert_global(void)
{
    p_iminsert = curbuf->b_p_iminsert;
}


    void
set_imsearch_global(void)
{
    p_imsearch = curbuf->b_p_imsearch;
}

static int expand_option_idx = -1;
static int expand_option_start_col = 0;
static char_u expand_option_name[5] = {'t', '_', NUL, NUL, NUL};
static int expand_option_flags = 0;
static int expand_option_append = FALSE;

    void
set_context_in_set_cmd(
    expand_T	*xp,
    char_u	*arg,
    int		opt_flags)	
{
    int		nextchar;
    long_u	flags = 0;	
    int		opt_idx = 0;	
    char_u	*p;
    char_u	*s;
    int		is_term_option = FALSE;
    int		key;

    expand_option_flags = opt_flags;

    xp->xp_context = EXPAND_SETTINGS;
    if (*arg == NUL)
    {
	xp->xp_pattern = arg;
	return;
    }
    p = arg + STRLEN(arg) - 1;
    if (*p == ' ' && *(p - 1) != '\\')
    {
	xp->xp_pattern = p + 1;
	return;
    }
    while (p > arg)
    {
	s = p;
	
	if (*p == ' ' || *p == ',')
	{
	    while (s > arg && *(s - 1) == '\\')
		--s;
	}
	
	if (*p == ' ' && ((p - s) & 1) == 0)
	{
	    ++p;
	    break;
	}
	--p;
    }
    if (STRNCMP(p, "no", 2) == 0 && STRNCMP(p, "novice", 6) != 0)
    {
	xp->xp_context = EXPAND_BOOL_SETTINGS;
	xp->xp_prefix = XP_PREFIX_NO;
	p += 2;
    }
    else if (STRNCMP(p, "inv", 3) == 0)
    {
	xp->xp_context = EXPAND_BOOL_SETTINGS;
	xp->xp_prefix = XP_PREFIX_INV;
	p += 3;
    }
    xp->xp_pattern = arg = p;
    if (*arg == '<')
    {
	while (*p != '>')
	    if (*p++ == NUL)	    
		return;
	key = get_special_key_code(arg + 1);
	if (key == 0)		    
	{
	    xp->xp_context = EXPAND_NOTHING;
	    return;
	}
	nextchar = *++p;
	is_term_option = TRUE;
	expand_option_name[2] = KEY2TERMCAP0(key);
	expand_option_name[3] = KEY2TERMCAP1(key);
    }
    else
    {
	if (p[0] == 't' && p[1] == '_')
	{
	    p += 2;
	    if (*p != NUL)
		++p;
	    if (*p == NUL)
		return;		
	    nextchar = *++p;
	    is_term_option = TRUE;
	    expand_option_name[2] = p[-2];
	    expand_option_name[3] = p[-1];
	}
	else
	{
	    
	    while (ASCII_ISALNUM(*p) || *p == '_' || *p == '*')
		p++;
	    if (*p == NUL)
		return;
	    nextchar = *p;
	    *p = NUL;
	    opt_idx = findoption(arg);
	    *p = nextchar;
	    if (opt_idx == -1 || options[opt_idx].var == NULL)
	    {
		xp->xp_context = EXPAND_NOTHING;
		return;
	    }
	    flags = options[opt_idx].flags;
	    if (flags & P_BOOL)
	    {
		xp->xp_context = EXPAND_NOTHING;
		return;
	    }
	}
    }
    
    expand_option_append = FALSE;
    int expand_option_subtract = FALSE;
    if ((nextchar == '-' || nextchar == '+' || nextchar == '^') && p[1] == '=')
    {
	if (nextchar == '-')
	    expand_option_subtract = TRUE;
	if (nextchar == '+' || nextchar == '^')
	    expand_option_append = TRUE;
	++p;
	nextchar = '=';
    }
    if ((nextchar != '=' && nextchar != ':')
				    || xp->xp_context == EXPAND_BOOL_SETTINGS)
    {
	xp->xp_context = EXPAND_UNSUCCESSFUL;
	return;
    }

    
    

    if (is_term_option)
	expand_option_idx = -1;
    else
	expand_option_idx = opt_idx;

    if (!is_term_option)
    {
	if (options[opt_idx].flags & P_NO_CMD_EXPAND)
	{
	    xp->xp_context=EXPAND_UNSUCCESSFUL;
	    return;
	}
    }

    xp->xp_pattern = p + 1;
    expand_option_start_col = (int)(p + 1 - xp->xp_line);

    
    
#ifdef FEAT_SYN_HL
    if (options[opt_idx].var == (char_u *)&p_syn)
    {
	xp->xp_context = EXPAND_OWNSYNTAX;
	return;
    }
#endif
    if (options[opt_idx].var == (char_u *)&p_ft)
    {
	xp->xp_context = EXPAND_FILETYPE;
	return;
    }
#ifdef FEAT_KEYMAP
    if (options[opt_idx].var == (char_u *)&p_keymap)
    {
	xp->xp_context = EXPAND_KEYMAP;
	return;
    }
#endif

    
    
    if (expand_option_subtract)
    {
	xp->xp_context = EXPAND_SETTING_SUBTRACT;
	return;
    }
    else if (expand_option_idx >= 0 &&
	    options[expand_option_idx].opt_expand_cb != NULL)
    {
	xp->xp_context = EXPAND_STRING_SETTING;
    }
    else if (*xp->xp_pattern == NUL)
    {
	xp->xp_context = EXPAND_OLD_SETTING;
	return;
    }
    else
	xp->xp_context = EXPAND_NOTHING;

    if (is_term_option || (flags & P_NUM))
	return;

    

    
    if (flags & P_EXPAND)
    {
	p = options[opt_idx].var;
	if (p == (char_u *)&p_bdir
		|| p == (char_u *)&p_dir
		|| p == (char_u *)&p_path
		|| p == (char_u *)&p_pp
		|| p == (char_u *)&p_rtp
		|| p == (char_u *)&p_cdpath
#ifdef FEAT_SESSION
		|| p == (char_u *)&p_vdir
#endif
		)
	{
	    xp->xp_context = EXPAND_DIRECTORIES;
	    if (p == (char_u *)&p_path || p == (char_u *)&p_cdpath)
		xp->xp_backslash = XP_BS_THREE;
	    else
		xp->xp_backslash = XP_BS_ONE;
	}
	else
	{
	    xp->xp_context = EXPAND_FILES;
	    
	    if (p == (char_u *)&p_tags)
		xp->xp_backslash = XP_BS_THREE;
	    else
		xp->xp_backslash = XP_BS_ONE;
	}
	if (flags & P_COMMA)
	    xp->xp_backslash |= XP_BS_COMMA;
    }

    
    
    
    
    
    if ((flags & P_EXPAND) || (flags & P_COMMA) || (flags & P_COLON))
    {
	for (p = arg + STRLEN(arg) - 1; p >= xp->xp_pattern; --p)
	{
	    
	    if (*p == ' ' || *p == ',' ||
		    (*p == ':' && (flags & P_COLON)))
	    {
		s = p;
		while (s > xp->xp_pattern && *(s - 1) == '\\')
		    --s;
		if ((*p == ' ' && ((xp->xp_backslash & XP_BS_THREE) && (p - s) < 3))
#if defined(BACKSLASH_IN_FILENAME)
			|| (*p == ',' && (flags & P_COMMA) && (p - s) < 1)
#else
			|| (*p == ',' && (flags & P_COMMA) && (p - s) < 2)
#endif
			|| (*p == ':' && (flags & P_COLON)))
		{
		    xp->xp_pattern = p + 1;
		    break;
		}
	    }
	}
    }

    
    
    if (flags & P_FLAGLIST)
	xp->xp_pattern = arg + STRLEN(arg);

    
    
    
#ifdef FEAT_SPELL
    if (options[opt_idx].var == (char_u *)&p_sps)
    {
	if (STRNCMP(xp->xp_pattern, "file:", 5) == 0)
	{
	    xp->xp_pattern += 5;
	    return;
	}
	else if (options[expand_option_idx].opt_expand_cb != NULL)
	{
	    xp->xp_context = EXPAND_STRING_SETTING;
	}
    }
#endif
}


    static int
match_str(
	char_u		*str,
	regmatch_T	*regmatch,
	char_u		**matches,
	int		idx,
	int		test_only,
	int		fuzzy,
	char_u		*fuzzystr,
	fuzmatch_str_T  *fuzmatch)
{
    if (!fuzzy)
    {
	if (vim_regexec(regmatch, str, (colnr_T)0))
	{
	    if (!test_only)
		matches[idx] = vim_strsave(str);
	    return TRUE;
	}
    }
    else
    {
	int score;

	score = fuzzy_match_str(str, fuzzystr);
	if (score != 0)
	{
	    if (!test_only)
	    {
		fuzmatch[idx].idx = idx;
		fuzmatch[idx].str = vim_strsave(str);
		fuzmatch[idx].score = score;
	    }

	    return TRUE;
	}
    }

    return FALSE;
}

    int
ExpandSettings(
    expand_T	*xp,
    regmatch_T	*regmatch,
    char_u	*fuzzystr,
    int		*numMatches,
    char_u	***matches,
    int		can_fuzzy)
{
    int		num_normal = 0;	    
    int		num_term = 0;	    
    int		opt_idx;
    int		match;
    int		count = 0;
    char_u	*str;
    int		loop;
    int		is_term_opt;
    char_u	name_buf[MAX_KEY_NAME_LEN];
    static char *(names[]) = {"all", "termcap"};
    int		ic = regmatch->rm_ic;	
    int		fuzzy;
    fuzmatch_str_T  *fuzmatch = NULL;

    fuzzy = can_fuzzy && cmdline_fuzzy_complete(fuzzystr);

    
    
    
    for (loop = 0; loop <= 1; ++loop)
    {
	regmatch->rm_ic = ic;
	if (xp->xp_context != EXPAND_BOOL_SETTINGS)
	{
	    for (match = 0; match < (int)ARRAY_LENGTH(names); ++match)
	    {
		if (match_str((char_u *)names[match], regmatch, *matches,
			    count, (loop == 0), fuzzy, fuzzystr, fuzmatch))
		{
		    if (loop == 0)
			num_normal++;
		    else
			count++;
		}
	    }
	}
	for (opt_idx = 0; (str = (char_u *)options[opt_idx].fullname) != NULL;
								    opt_idx++)
	{
	    if (options[opt_idx].var == NULL)
		continue;
	    if (xp->xp_context == EXPAND_BOOL_SETTINGS
		    && !(options[opt_idx].flags & P_BOOL))
		continue;
	    is_term_opt = istermoption_idx(opt_idx);
	    if (is_term_opt && num_normal > 0)
		continue;

	    if (match_str(str, regmatch, *matches, count, (loop == 0),
						fuzzy, fuzzystr, fuzmatch))
	    {
		if (loop == 0)
		{
		    if (is_term_opt)
			num_term++;
		    else
			num_normal++;
		}
		else
		    count++;
	    }
	    else if (!fuzzy && options[opt_idx].shortname != NULL
			&& vim_regexec(regmatch,
			     (char_u *)options[opt_idx].shortname, (colnr_T)0))
	    {
		
		
		
		if (loop == 0)
		{
		    if (is_term_opt)
			num_term++;
		    else
			num_normal++;
		}
		else
		    (*matches)[count++] = vim_strsave(str);
	    }
	    else if (is_term_opt)
	    {
		name_buf[0] = '<';
		name_buf[1] = 't';
		name_buf[2] = '_';
		name_buf[3] = str[2];
		name_buf[4] = str[3];
		name_buf[5] = '>';
		name_buf[6] = NUL;

		if (match_str(name_buf, regmatch, *matches, count, (loop == 0),
			    fuzzy, fuzzystr, fuzmatch))
		{
		    if (loop == 0)
			num_term++;
		    else
			count++;
		}
	    }
	}

	
	if (xp->xp_context != EXPAND_BOOL_SETTINGS  && num_normal == 0)
	{
	    for (opt_idx = 0; (str = get_termcode(opt_idx)) != NULL; opt_idx++)
	    {
		if (!SAFE_isprint(str[0]) || !SAFE_isprint(str[1]))
		    continue;

		name_buf[0] = 't';
		name_buf[1] = '_';
		name_buf[2] = str[0];
		name_buf[3] = str[1];
		name_buf[4] = NUL;

		if (match_str(name_buf, regmatch, *matches, count,
				       (loop == 0), fuzzy, fuzzystr, fuzmatch))
		{
		    if (loop == 0)
			num_term++;
		    else
			count++;
		}
		else
		{
		    name_buf[0] = '<';
		    name_buf[1] = 't';
		    name_buf[2] = '_';
		    name_buf[3] = str[0];
		    name_buf[4] = str[1];
		    name_buf[5] = '>';
		    name_buf[6] = NUL;

		    if (match_str(name_buf, regmatch, *matches, count,
					    (loop == 0), fuzzy, fuzzystr,
					    fuzmatch))
		    {
			if (loop == 0)
			    num_term++;
			else
			    count++;
		    }
		}
	    }

	    
	    regmatch->rm_ic = TRUE;		
	    for (opt_idx = 0; (str = get_key_name(opt_idx)) != NULL; opt_idx++)
	    {
		name_buf[0] = '<';
		STRCPY(name_buf + 1, str);
		STRCAT(name_buf, ">");

		if (match_str(name_buf, regmatch, *matches, count, (loop == 0),
			    fuzzy, fuzzystr, fuzmatch))
		{
		    if (loop == 0)
			num_term++;
		    else
			count++;
		}
	    }
	}
	if (loop == 0)
	{
	    if (num_normal > 0)
		*numMatches = num_normal;
	    else if (num_term > 0)
		*numMatches = num_term;
	    else
		return OK;
	    if (!fuzzy)
	    {
		*matches = ALLOC_MULT(char_u *, *numMatches);
		if (*matches == NULL)
		{
		    *matches = (char_u **)"";
		    return FAIL;
		}
	    }
	    else
	    {
		fuzmatch = ALLOC_MULT(fuzmatch_str_T, *numMatches);
		if (fuzmatch == NULL)
		{
		    *matches = (char_u **)"";
		    return FAIL;
		}
	    }
	}
    }

    if (fuzzy &&
	fuzzymatches_to_strmatches(fuzmatch, matches, count, FALSE) == FAIL)
	return FAIL;

    return OK;
}



    static char_u*
escape_option_str_cmdline(char_u *var)
{
    char_u *buf;

    
    
    buf = vim_strsave_escaped(var, escape_chars);
    if (buf == NULL)
	return NULL;

#ifdef BACKSLASH_IN_FILENAME
    
    
    
    for (var = buf; *var != NUL; MB_PTR_ADV(var))
	if (var[0] == '\\' && var[1] == '\\'
		&& expand_option_idx >= 0
		&& (options[expand_option_idx].flags & P_EXPAND)
		&& vim_isfilec(var[2])
		&& (var[2] != '\\' || (var == buf && var[4] != '\\')))
	    STRMOVE(var, var + 1);
#endif
    return buf;
}


    int
ExpandOldSetting(int *numMatches, char_u ***matches)
{
    char_u  *var = NULL;	
    char_u  *buf;

    *numMatches = 0;
    *matches = ALLOC_MULT(char_u *, 1);
    if (*matches == NULL)
	return FAIL;

    
    if (expand_option_idx < 0)
    {
	var = find_termcode(expand_option_name + 2);
	if (var == NULL)
	    expand_option_idx = findoption(expand_option_name);
    }

    if (expand_option_idx >= 0)
    {
	
	option_value2string(&options[expand_option_idx], expand_option_flags);
	var = NameBuff;
    }
    else if (var == NULL)
	var = (char_u *)"";

    buf = escape_option_str_cmdline(var);
    if (buf == NULL)
    {
	VIM_CLEAR(*matches);
	return FAIL;
    }

    (*matches)[0] = buf;
    *numMatches = 1;
    return OK;
}


    int
ExpandStringSetting(
    expand_T	*xp,
    regmatch_T	*regmatch,
    int		*numMatches,
    char_u	***matches)
{
    char_u  *var = NULL;	
    char_u  *buf;

    if (expand_option_idx < 0 ||
	    options[expand_option_idx].opt_expand_cb == NULL)
    {
	
	
	return FAIL;
    }

    optexpand_T args;
    args.oe_varp = get_varp_scope(&options[expand_option_idx], expand_option_flags);
    args.oe_append = expand_option_append;
    args.oe_regmatch = regmatch;
    args.oe_xp = xp;
    args.oe_set_arg = xp->xp_line + expand_option_start_col;
    args.oe_include_orig_val =
	!expand_option_append &&
	(*args.oe_set_arg == NUL);

    
    
    
    option_value2string(&options[expand_option_idx], expand_option_flags);
    var = NameBuff;
    buf = escape_option_str_cmdline(var);
    if (buf == NULL)
	return FAIL;

    args.oe_opt_value = buf;

    int num_ret = options[expand_option_idx].opt_expand_cb(&args, numMatches, matches);

    vim_free(buf);
    return num_ret;
}


    int
ExpandSettingSubtract(
    expand_T	*xp,
    regmatch_T	*regmatch,
    int		*numMatches,
    char_u	***matches)
{
    if (expand_option_idx < 0)
	
	return ExpandOldSetting(numMatches, matches);

    char_u *option_val = *(char_u**)get_option_varp_scope(
	expand_option_idx, expand_option_flags);

    long_u option_flags =  options[expand_option_idx].flags;

    if (option_flags & P_NUM)
	return ExpandOldSetting(numMatches, matches);
    else if (option_flags & P_COMMA)
    {
	
	
	
	
	garray_T    ga;

	char_u	    *item;
	char_u	    *option_copy;
	char_u	    *next_val;
	char_u	    *comma;

	if (*option_val == NUL)
	    return FAIL;

	
	option_copy = vim_strsave(option_val);
	if (option_copy == NULL)
	    return FAIL;
	next_val = option_copy;

	ga_init2(&ga, sizeof(char_u *), 10);

	do
	{
	    item = next_val;
	    comma = vim_strchr(next_val, ',');
	    while (comma != NULL && comma != next_val && *(comma - 1) == '\\')
	    {
		
		
		
		comma = vim_strchr(comma + 1, ',');
	    }
	    if (comma != NULL)
	    {
		*comma = NUL; 
		next_val = comma + 1;
	    }
	    else
		next_val = NULL;

	    if (*item == NUL)
		
		continue;

	    if (!vim_regexec(regmatch, item, (colnr_T)0))
		continue;

	    char_u *buf = escape_option_str_cmdline(item);
	    if (buf == NULL)
	    {
		vim_free(option_copy);
		ga_clear_strings(&ga);
		return FAIL;
	    }
	    if (ga_add_string(&ga, buf) != OK)
	    {
		vim_free(buf);
		break;
	    }
	} while (next_val != NULL);

	vim_free(option_copy);

	*matches = ga.ga_data;
	*numMatches = ga.ga_len;
	return OK;
    }
    else if (option_flags & P_FLAGLIST)
    {
	
	

	if (*xp->xp_pattern != NUL)
	{
	    
	    
	    
	    
	    return FAIL;
	}

	size_t num_flags = STRLEN(option_val);
	if (num_flags == 0)
	    return FAIL;

	*matches = ALLOC_MULT(char_u *, num_flags + 1);
	if (*matches == NULL)
	    return FAIL;

	int count = 0;
	char_u *p;

	p = vim_strsave(option_val);
	if (p == NULL)
	{
	    VIM_CLEAR(*matches);
	    return FAIL;
	}
	(*matches)[count++] = p;

	if (num_flags > 1)
	{
	    
	    
	    for (char_u *flag = option_val; *flag != NUL; flag++)
	    {
		p = vim_strnsave(flag, 1);
		if (p == NULL)
		    break;
		(*matches)[count++] = p;
	    }
	}

	*numMatches = count;
	return OK;
    }

    return ExpandOldSetting(numMatches, matches);
}


    static void
option_value2string(
    struct vimoption	*opp,
    int			scope)	
{
    char_u	*varp;

    varp = get_varp_scope(opp, scope);

    if (opp->flags & P_NUM)
    {
	int wc = 0;

	if (wc_use_keyname(varp, &wc))
	    STRCPY(NameBuff, get_special_key_name((int)wc, 0));
	else if (wc != 0)
	    STRCPY(NameBuff, transchar((int)wc));
	else
	    sprintf((char *)NameBuff, "%ld", *(int *)varp);
    }
    else    
    {
	varp = *(char_u **)(varp);
	if (varp == NULL)		    
	    NameBuff[0] = NUL;
#ifdef FEAT_CRYPT
	
	else if (opp->var == (char_u *)&p_key && *varp)
	    STRCPY(NameBuff, "*****");
#endif
	else if (opp->flags & P_EXPAND)
	    home_replace(NULL, varp, NameBuff, MAXPATHL, FALSE);
	
	else if ((char_u **)opp->var == &p_pt)
	    str2specialbuf(p_pt, NameBuff, MAXPATHL);
	else
	    vim_strncpy(NameBuff, varp, MAXPATHL - 1);
    }
}


    static int
wc_use_keyname(char_u *varp, int *wcp)
{
    if (((int *)varp == &p_wc) || ((int *)varp == &p_wcm))
    {
	*wcp = *(int *)varp;
	if (IS_SPECIAL(*wcp) || find_special_key_in_table((int)*wcp) >= 0)
	    return TRUE;
    }
    return FALSE;
}


    int
shortmess(int x)
{
    return p_shm != NULL &&
	    (   vim_strchr(p_shm, x) != NULL
	    || (vim_strchr(p_shm, 'a') != NULL
		&& vim_strchr((char_u *)SHM_A, x) != NULL));
}


    void
vimrc_found(char_u *fname, char_u *envname)
{
    int		opt_idx;
    int		dofree = FALSE;
    char_u	*p;

    if (!option_was_set((char_u *)"cp"))
    {
	p_cp = FALSE;
	for (opt_idx = 0; !istermoption_idx(opt_idx); opt_idx++)
	    if (!(options[opt_idx].flags & (P_WAS_SET|P_VI_DEF)))
		set_option_default(opt_idx, OPT_FREE, FALSE);
	didset_options();
	didset_options2();
    }

    if (fname != NULL)
    {
	p = vim_getenv(envname, &dofree);
	if (p == NULL)
	{
	    
	    p = FullName_save(fname, FALSE);
	    if (p != NULL)
	    {
		vim_setenv(envname, p);
		vim_free(p);
	    }
	}
	else if (dofree)
	    vim_free(p);
    }
}


    void
change_compatible(int on)
{
    int	    opt_idx;

    if (p_cp != on)
    {
	p_cp = on;
	compatible_set();
    }
    opt_idx = findoption((char_u *)"cp");
    if (opt_idx >= 0)
	options[opt_idx].flags |= P_WAS_SET;
}


    int
option_was_set(char_u *name)
{
    int idx;

    idx = findoption(name);
    if (idx < 0)	
	return FALSE;
    if (options[idx].flags & P_WAS_SET)
	return TRUE;
    return FALSE;
}


    int
reset_option_was_set(char_u *name)
{
    int idx = findoption(name);

    if (idx < 0)
	return FAIL;

    options[idx].flags &= ~P_WAS_SET;
    return OK;
}


    static void
compatible_set(void)
{
    int	    opt_idx;

    for (opt_idx = 0; !istermoption_idx(opt_idx); opt_idx++)
	if (	   ((options[opt_idx].flags & P_VIM) && p_cp)
		|| (!(options[opt_idx].flags & P_VI_DEF) && !p_cp))
	    set_option_default(opt_idx, OPT_FREE, p_cp);
    didset_options();
    didset_options2();
}


    int
can_bs(
    int		what)	    
{
#ifdef FEAT_JOB_CHANNEL
    if (what == BS_START && bt_prompt(curbuf))
	return FALSE;
#endif
    switch (*p_bs)
    {
	case '3':       return TRUE;
	case '2':	return (what != BS_NOSTOP);
	case '1':	return (what != BS_START);
	case '0':	return FALSE;
    }
    return vim_strchr(p_bs, what) != NULL;
}


    int
get_scrolloff_value(void)
{
    return curwin->w_p_so < 0 ? p_so : curwin->w_p_so;
}


    int
get_sidescrolloff_value(void)
{
    return curwin->w_p_siso < 0 ? p_siso : curwin->w_p_siso;
}


    unsigned int
get_bkc_flags(buf_T *buf)
{
    return buf->b_bkc_flags ? buf->b_bkc_flags : bkc_flags;
}

#if defined(FEAT_LINEBREAK) || defined(PROTO)

    char_u *
get_flp_value(buf_T *buf)
{
    if (buf->b_p_flp == NULL || *buf->b_p_flp == NUL)
	return p_flp;
    return buf->b_p_flp;
}
#endif


    unsigned int
get_ve_flags(void)
{
    return (curwin->w_ve_flags ? curwin->w_ve_flags : ve_flags)
	    & ~(VE_NONE | VE_NONEU);
}

#if defined(FEAT_LINEBREAK) || defined(PROTO)

    char_u *
get_showbreak_value(win_T *win)
{
    if (win->w_p_sbr == NULL || *win->w_p_sbr == NUL)
	return p_sbr;
    if (STRCMP(win->w_p_sbr, "NONE") == 0)
	return empty_option;
    return win->w_p_sbr;
}
#endif

#if defined(FEAT_EVAL) || defined(PROTO)

    dict_T *
get_winbuf_options(int bufopt)
{
    dict_T	*d;
    int		opt_idx;

    d = dict_alloc();
    if (d == NULL)
	return NULL;

    for (opt_idx = 0; !istermoption_idx(opt_idx); opt_idx++)
    {
	struct vimoption *opt = &options[opt_idx];

	if ((bufopt && (opt->indir & PV_BUF))
					 || (!bufopt && (opt->indir & PV_WIN)))
	{
	    char_u *varp = get_varp(opt);

	    if (varp != NULL)
	    {
		if (opt->flags & P_STRING)
		    dict_add_string(d, opt->fullname, *(char_u **)varp);
		else if (opt->flags & P_NUM)
		    dict_add_number(d, opt->fullname, *(int *)varp);
		else
		    dict_add_number(d, opt->fullname, *(int *)varp);
	    }
	}
    }

    return d;
}
#endif

#if defined(FEAT_SYN_HL) || defined(PROTO)

    int
fill_culopt_flags(char_u *val, win_T *wp)
{
    char_u	*p;
    char_u	culopt_flags_new = 0;

    if (val == NULL)
	p = wp->w_p_culopt;
    else
	p = val;
    while (*p != NUL)
    {
	
	if (STRNCMP(p, "line", 4) == 0)
	{
	    p += 4;
	    culopt_flags_new |= CULOPT_LINE;
	}
	else if (STRNCMP(p, "both", 4) == 0)
	{
	    p += 4;
	    culopt_flags_new |= CULOPT_LINE | CULOPT_NBR;
	}
	else if (STRNCMP(p, "number", 6) == 0)
	{
	    p += 6;
	    culopt_flags_new |= CULOPT_NBR;
	}
	else if (STRNCMP(p, "screenline", 10) == 0)
	{
	    p += 10;
	    culopt_flags_new |= CULOPT_SCRLINE;
	}

	if (*p != ',' && *p != NUL)
	    return FAIL;
	if (*p == ',')
	    ++p;
    }

    
    if ((culopt_flags_new & CULOPT_LINE) && (culopt_flags_new & CULOPT_SCRLINE))
	return FAIL;
    wp->w_p_culopt_flags = culopt_flags_new;

    return OK;
}
#endif


    int
magic_isset(void)
{
    switch (magic_overruled)
    {
	case OPTION_MAGIC_ON:      return TRUE;
	case OPTION_MAGIC_OFF:     return FALSE;
	case OPTION_MAGIC_NOT_SET: break;
    }
#ifdef FEAT_EVAL
    if (in_vim9script())
	return TRUE;
#endif
    return p_magic;
}


    int
option_set_callback_func(char_u *optval UNUSED, callback_T *optcb UNUSED)
{
#ifdef FEAT_EVAL
    typval_T	*tv;
    callback_T	cb;

    if (optval == NULL || *optval == NUL)
    {
	free_callback(optcb);
	return OK;
    }

    if (*optval == '{' || (in_vim9script() && *optval == '(')
	    || (STRNCMP(optval, "function(", 9) == 0)
	    || (STRNCMP(optval, "funcref(", 8) == 0))
	
	tv = eval_expr(optval, NULL);
    else
	
	tv = alloc_string_tv(vim_strsave(optval));
    if (tv == NULL)
	return FAIL;

    cb = get_callback(tv);
    if (cb.cb_name == NULL || *cb.cb_name == NUL)
    {
	free_tv(tv);
	return FAIL;
    }

    free_callback(optcb);
    set_callback(optcb, &cb);
    if (cb.cb_free_name)
	vim_free(cb.cb_name);
    free_tv(tv);

    
    
    expand_autload_callback(optcb);

    return OK;
#else
    return FAIL;
#endif
}

#if defined(FEAT_EVAL) || defined(PROTO)
    static void
didset_options_sctx(int opt_flags, char **buf)
{
	for (int i = 0; ; ++i)
	{
	    if (buf[i] == NULL)
		break;

	    int idx = findoption((char_u *)buf[i]);
	    if (idx >= 0)
		set_option_sctx_idx(idx, opt_flags, current_sctx);
	}
}
#endif
