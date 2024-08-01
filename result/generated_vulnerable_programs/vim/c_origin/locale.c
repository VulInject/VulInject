



#include "vim.h"

#if (defined(HAVE_LOCALE_H) || defined(X_LOCALE)) \
	&& (defined(FEAT_EVAL) || defined(FEAT_MULTI_LANG))
# define HAVE_GET_LOCALE_VAL
    static char_u *
get_locale_val(int what)
{
    char_u	*loc;

    
    loc = (char_u *)setlocale(what, NULL);

# ifdef MSWIN
    if (loc != NULL)
    {
	char_u	*p;

	
	
	p = vim_strchr(loc, '=');
	if (p != NULL)
	{
	    loc = ++p;
	    while (*p != NUL)	
	    {
		if (*p < ' ' || *p == ';')
		{
		    *p = NUL;
		    break;
		}
		++p;
	    }
	}
    }
# endif

    return loc;
}
#endif


#ifdef MSWIN

    static char_u *
gettext_lang(char_u *name)
{
    int		i;
    static char *(mtable[]) = {
			"afrikaans",	"af",
			"czech",	"cs",
			"dutch",	"nl",
			"german",	"de",
			"english_united kingdom", "en_GB",
			"spanish",	"es",
			"french",	"fr",
			"italian",	"it",
			"japanese",	"ja",
			"korean",	"ko",
			"norwegian",	"no",
			"polish",	"pl",
			"russian",	"ru",
			"slovak",	"sk",
			"swedish",	"sv",
			"ukrainian",	"uk",
			"chinese_china", "zh_CN",
			"chinese_taiwan", "zh_TW",
			NULL};

    for (i = 0; mtable[i] != NULL; i += 2)
	if (STRNICMP(mtable[i], name, STRLEN(mtable[i])) == 0)
	    return (char_u *)mtable[i + 1];
    return name;
}
#endif

#if defined(FEAT_MULTI_LANG) || defined(PROTO)

    static int
is_valid_mess_lang(char_u *lang)
{
    return lang != NULL && ASCII_ISALPHA(lang[0]) && ASCII_ISALPHA(lang[1]);
}


    char_u *
get_mess_lang(void)
{
    char_u *p;

# ifdef HAVE_GET_LOCALE_VAL
#  if defined(LC_MESSAGES)
    p = get_locale_val(LC_MESSAGES);
#  else
    
    
    
    
    p = get_locale_val(LC_COLLATE);
#  endif
# else
    p = mch_getenv((char_u *)"LC_ALL");
    if (!is_valid_mess_lang(p))
    {
	p = mch_getenv((char_u *)"LC_MESSAGES");
	if (!is_valid_mess_lang(p))
	    p = mch_getenv((char_u *)"LANG");
    }
# endif
# ifdef MSWIN
    p = gettext_lang(p);
# endif
    return is_valid_mess_lang(p) ? p : NULL;
}
#endif


#if (defined(FEAT_EVAL) && !((defined(HAVE_LOCALE_H) || defined(X_LOCALE)) \
	    && defined(LC_MESSAGES))) \
	|| ((defined(HAVE_LOCALE_H) || defined(X_LOCALE)) \
		&& !defined(LC_MESSAGES))

    static char_u *
get_mess_env(void)
{
    char_u	*p;

    p = mch_getenv((char_u *)"LC_ALL");
    if (p != NULL && *p != NUL)
	return p;

    p = mch_getenv((char_u *)"LC_MESSAGES");
    if (p != NULL && *p != NUL)
	return p;

    p = mch_getenv((char_u *)"LANG");
    if (p != NULL && VIM_ISDIGIT(*p))
	p = NULL;		
# ifdef HAVE_GET_LOCALE_VAL
    if (p == NULL || *p == NUL)
	p = get_locale_val(LC_CTYPE);
# endif
    return p;
}
#endif

#if defined(FEAT_EVAL) || defined(PROTO)


    void
set_lang_var(void)
{
    char_u	*loc;

# ifdef HAVE_GET_LOCALE_VAL
    loc = get_locale_val(LC_CTYPE);
# else
    
    loc = (char_u *)"C";
# endif
    set_vim_var_string(VV_CTYPE, loc, -1);

    
    
# if defined(HAVE_GET_LOCALE_VAL) && defined(LC_MESSAGES)
    loc = get_locale_val(LC_MESSAGES);
# else
    loc = get_mess_env();
# endif
    set_vim_var_string(VV_LANG, loc, -1);

# ifdef HAVE_GET_LOCALE_VAL
    loc = get_locale_val(LC_TIME);
# endif
    set_vim_var_string(VV_LC_TIME, loc, -1);

# ifdef HAVE_GET_LOCALE_VAL
    loc = get_locale_val(LC_COLLATE);
# else
    
    loc = (char_u *)"C";
# endif
    set_vim_var_string(VV_COLLATE, loc, -1);
}
#endif

#if defined(HAVE_LOCALE_H) || defined(X_LOCALE)

    void
init_locale(void)
{
    setlocale(LC_ALL, "");

# ifdef FEAT_GUI_GTK
    
    gtk_disable_setlocale();
# endif
# if defined(LC_NUMERIC)
    
    setlocale(LC_NUMERIC, "C");
# endif

# ifdef MSWIN
    
    
    
    setlocale(LC_CTYPE, "C");
# endif

# ifdef FEAT_GETTEXT
    {
	int	mustfree = FALSE;
	char_u	*p;

#  ifdef DYNAMIC_GETTEXT
	
	dyn_libintl_init();
#  endif
	
	
	p = vim_getenv((char_u *)"VIMRUNTIME", &mustfree);
	if (p != NULL && *p != NUL)
	{
	    vim_snprintf((char *)NameBuff, MAXPATHL, "%s/lang", p);
	    bindtextdomain(VIMPACKAGE, (char *)NameBuff);
	}
	if (mustfree)
	    vim_free(p);
	textdomain(VIMPACKAGE);
    }
# endif
}


    void
ex_language(exarg_T *eap)
{
    char	*loc;
    char_u	*p;
    char_u	*name;
    int		what = LC_ALL;
    char	*whatstr = "";
# ifdef LC_MESSAGES
#  define VIM_LC_MESSAGES LC_MESSAGES
# else
#  define VIM_LC_MESSAGES 6789
# endif

    name = eap->arg;

    
    
    
    p = skiptowhite(eap->arg);
    if ((*p == NUL || VIM_ISWHITE(*p)) && p - eap->arg >= 3)
    {
	if (STRNICMP(eap->arg, "messages", p - eap->arg) == 0)
	{
	    what = VIM_LC_MESSAGES;
	    name = skipwhite(p);
	    whatstr = "messages ";
	}
	else if (STRNICMP(eap->arg, "ctype", p - eap->arg) == 0)
	{
	    what = LC_CTYPE;
	    name = skipwhite(p);
	    whatstr = "ctype ";
	}
	else if (STRNICMP(eap->arg, "time", p - eap->arg) == 0)
	{
	    what = LC_TIME;
	    name = skipwhite(p);
	    whatstr = "time ";
	}
	else if (STRNICMP(eap->arg, "collate", p - eap->arg) == 0)
	{
	    what = LC_COLLATE;
	    name = skipwhite(p);
	    whatstr = "collate ";
	}
    }

    if (*name == NUL)
    {
# ifndef LC_MESSAGES
	if (what == VIM_LC_MESSAGES)
	    p = get_mess_env();
	else
# endif
	    p = (char_u *)setlocale(what, NULL);
	if (p == NULL || *p == NUL)
	    p = (char_u *)"Unknown";
	smsg(_("Current %slanguage: \"%s\""), whatstr, p);
    }
    else
    {
# ifndef LC_MESSAGES
	if (what == VIM_LC_MESSAGES)
	    loc = "";
	else
# endif
	{
	    loc = setlocale(what, (char *)name);
# if defined(LC_NUMERIC)
	    
	    setlocale(LC_NUMERIC, "C");
# endif
	}
	if (loc == NULL)
	    semsg(_(e_cannot_set_language_to_str), name);
	else
	{
# ifdef HAVE_NL_MSG_CAT_CNTR
	    
	    
	    extern int _nl_msg_cat_cntr;

	    ++_nl_msg_cat_cntr;
# endif
	    
	    vim_setenv((char_u *)"LC_ALL", (char_u *)"");

	    if (what != LC_TIME && what != LC_COLLATE)
	    {
		
		
		
		
		if (what == LC_ALL)
		{
		    vim_setenv((char_u *)"LANG", name);

		    
		    vim_setenv((char_u *)"LANGUAGE", (char_u *)"");
# ifdef MSWIN
		    
		    
		    
		    setlocale(LC_CTYPE, "C");
# endif
		}
		if (what != LC_CTYPE)
		{
		    char_u	*mname;
# ifdef MSWIN
		    mname = gettext_lang(name);
# else
		    mname = name;
# endif
		    vim_setenv((char_u *)"LC_MESSAGES", mname);
# ifdef FEAT_MULTI_LANG
		    set_helplang_default(mname);
# endif
		}
	    }

# ifdef FEAT_EVAL
	    
	    set_lang_var();
# endif
	    maketitle();
	}
    }
}

static char_u	**locales = NULL;	

static int	did_init_locales = FALSE;


    static char_u **
find_locales(void)
{
    garray_T	locales_ga;
    char_u	*loc;
    char_u	*locale_list;
# ifdef MSWIN
    size_t	len = 0;
# endif

    
    
# ifndef MSWIN
    locale_list = get_cmd_output((char_u *)"locale -a",
						    NULL, SHELL_SILENT, NULL);
# else
    
    
    {
	int		options = WILD_SILENT|WILD_USE_NL|WILD_KEEP_ALL;
	expand_T	xpc;
	char_u		*p;

	ExpandInit(&xpc);
	xpc.xp_context = EXPAND_DIRECTORIES;
	locale_list = ExpandOne(&xpc, (char_u *)"$VIMRUNTIME/lang
    static void
init_locales(void)
{
    if (did_init_locales)
	return;

    did_init_locales = TRUE;
    locales = find_locales();
}

# if defined(EXITFREE) || defined(PROTO)
    void
free_locales(void)
{
    int			i;

    if (locales == NULL)
	return;

    for (i = 0; locales[i] != NULL; i++)
	vim_free(locales[i]);
    VIM_CLEAR(locales);
}
# endif


    char_u *
get_lang_arg(expand_T *xp UNUSED, int idx)
{
    if (idx == 0)
	return (char_u *)"messages";
    if (idx == 1)
	return (char_u *)"ctype";
    if (idx == 2)
	return (char_u *)"time";
    if (idx == 3)
	return (char_u *)"collate";

    init_locales();
    if (locales == NULL)
	return NULL;
    return locales[idx - 4];
}


    char_u *
get_locales(expand_T *xp UNUSED, int idx)
{
    init_locales();
    if (locales == NULL)
	return NULL;
    return locales[idx];
}

#endif
