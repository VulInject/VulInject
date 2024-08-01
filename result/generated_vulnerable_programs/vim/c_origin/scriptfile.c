



#include "vim.h"

#if defined(FEAT_EVAL) || defined(PROTO)

static garray_T		ga_loaded = {0, 0, sizeof(char_u *), 4, NULL};
#endif


#ifdef FEAT_EVAL
static int		last_current_SID_seq = 0;
#endif

static int do_source_ext(char_u *fname, int check_other, int is_vimrc, int *ret_sid, exarg_T *eap, int clearvars);


    void
estack_init(void)
{
    estack_T *entry;

    if (ga_grow(&exestack, 10) == FAIL)
	mch_exit(0);
    entry = ((estack_T *)exestack.ga_data) + exestack.ga_len;
    entry->es_type = ETYPE_TOP;
    entry->es_name = NULL;
    entry->es_lnum = 0;
#ifdef FEAT_EVAL
    entry->es_info.ufunc = NULL;
#endif
    ++exestack.ga_len;
}


    estack_T *
estack_push(etype_T type, char_u *name, int lnum)
{
    estack_T *entry;

    
    
    if (ga_grow(&exestack, 1) == FAIL)
	return NULL;

    entry = ((estack_T *)exestack.ga_data) + exestack.ga_len;
    entry->es_type = type;
    entry->es_name = name;
    entry->es_lnum = lnum;
#ifdef FEAT_EVAL
    entry->es_info.ufunc = NULL;
#endif
    ++exestack.ga_len;
    return entry;
}

#if defined(FEAT_EVAL) || defined(PROTO)

    estack_T *
estack_push_ufunc(ufunc_T *ufunc, int lnum)
{
    estack_T *entry = estack_push(ETYPE_UFUNC,
	    ufunc->uf_name_exp != NULL
				  ? ufunc->uf_name_exp : ufunc->uf_name, lnum);
    if (entry != NULL)
	entry->es_info.ufunc = ufunc;
    return entry;
}


    int
estack_top_is_ufunc(ufunc_T *ufunc, int lnum)
{
    estack_T *entry;

    if (exestack.ga_len == 0)
	return FALSE;
    entry = ((estack_T *)exestack.ga_data) + exestack.ga_len - 1;
    return entry->es_type == ETYPE_UFUNC
	&& STRCMP( entry->es_name, ufunc->uf_name_exp != NULL
				    ? ufunc->uf_name_exp : ufunc->uf_name) == 0
	&& entry->es_lnum == lnum;
}
#endif


    estack_T *
estack_pop(void)
{
    if (exestack.ga_len == 0)
	return NULL;
    --exestack.ga_len;
    return ((estack_T *)exestack.ga_data) + exestack.ga_len;
}


    char_u *
estack_sfile(estack_arg_T which UNUSED)
{
    estack_T	*entry;
#ifdef FEAT_EVAL
    garray_T	ga;
    size_t	len;
    int		idx;
    etype_T	last_type = ETYPE_SCRIPT;
#endif

    entry = ((estack_T *)exestack.ga_data) + exestack.ga_len - 1;
#ifdef FEAT_EVAL
    if (which == ESTACK_SFILE && entry->es_type != ETYPE_UFUNC)
#endif
    {
	if (entry->es_name == NULL)
	    return NULL;
	return vim_strsave(entry->es_name);
    }
#ifdef FEAT_EVAL
    
    
    if (which == ESTACK_SFILE && in_vim9script())
    {
	int  save_emsg_off = emsg_off;

	if (emsg_off == 1)
	    
	    emsg_off = 0;
	emsg(_(e_cannot_expand_sfile_in_vim9_function));
	emsg_off = save_emsg_off;
	return NULL;
    }

    
    
    
    if (which == ESTACK_SCRIPT)
    {
	
	for (idx = exestack.ga_len - 1; idx >= 0; --idx, --entry)
	{
	    if (entry->es_type == ETYPE_UFUNC || entry->es_type == ETYPE_AUCMD)
	    {
		sctx_T *def_ctx = entry->es_type == ETYPE_UFUNC
				      ? &entry->es_info.ufunc->uf_script_ctx
				      : acp_script_ctx(entry->es_info.aucmd);

		return def_ctx->sc_sid > 0
			   ? vim_strsave(SCRIPT_ITEM(def_ctx->sc_sid)->sn_name)
			   : NULL;
	    }
	    else if (entry->es_type == ETYPE_SCRIPT)
		return vim_strsave(entry->es_name);
	}
	return NULL;
    }

    
    
    
    ga_init2(&ga, sizeof(char), 100);
    for (idx = 0; idx < exestack.ga_len; ++idx)
    {
	entry = ((estack_T *)exestack.ga_data) + idx;
	if (entry->es_name != NULL)
	{
	    int    lnum = 0;
	    char_u  *type_name = (char_u *)"";
	    char_u  *class_name = (char_u *)"";

	    if (entry->es_type != last_type)
	    {
		switch (entry->es_type)
		{
		    case ETYPE_SCRIPT: type_name = (char_u *)"script "; break;
		    case ETYPE_UFUNC: type_name = (char_u *)"function "; break;
		    default: type_name = (char_u *)""; break;
		}
		last_type = entry->es_type;
	    }
	    if (entry->es_type == ETYPE_UFUNC && entry->es_info.ufunc->uf_class != NULL)
		class_name = entry->es_info.ufunc->uf_class->class_name;
	    if (idx == exestack.ga_len - 1)
		lnum = which == ESTACK_STACK ? SOURCING_LNUM : 0;
	    else
		lnum = entry->es_lnum;
	    len = STRLEN(entry->es_name) + STRLEN(type_name) + STRLEN(class_name) + 26;
	    if (ga_grow(&ga, (int)len) == FAIL)
		break;
	    ga_concat(&ga, type_name);
	    if (*class_name != NUL)
	    {
		
		ga_concat(&ga, (char_u *)"<SNR>");
		ga.ga_len += vim_snprintf((char *)ga.ga_data + ga.ga_len, 23,
		       "%d_", entry->es_info.ufunc->uf_script_ctx.sc_sid);
		ga_concat(&ga, class_name);
		ga_append(&ga, '.');
	    }
	    ga_concat(&ga, entry->es_name);
	    
	    
	    if (lnum != 0)
		ga.ga_len += vim_snprintf((char *)ga.ga_data + ga.ga_len, 23, "[%ld]",
			lnum);
	    if (idx != exestack.ga_len - 1)
		ga_concat(&ga, (char_u *)"..");
	}
    }

    ga_append(&ga, '\0');
    return (char_u *)ga.ga_data;
#endif
}


    static int
get_runtime_cmd_flags(char_u **argp, size_t where_len)
{
    char_u *arg = *argp;

    if (where_len == 0)
	return 0;

    if (STRNCMP(arg, "START", where_len) == 0)
    {
	*argp = skipwhite(arg + where_len);
	return DIP_START + DIP_NORTP;
    }
    if (STRNCMP(arg, "OPT", where_len) == 0)
    {
	*argp = skipwhite(arg + where_len);
	return DIP_OPT + DIP_NORTP;
    }
    if (STRNCMP(arg, "PACK", where_len) == 0)
    {
	*argp = skipwhite(arg + where_len);
	return DIP_START + DIP_OPT + DIP_NORTP;
    }
    if (STRNCMP(arg, "ALL", where_len) == 0)
    {
	*argp = skipwhite(arg + where_len);
	return DIP_START + DIP_OPT;
    }

    return 0;
}


    void
ex_runtime(exarg_T *eap)
{
    char_u  *arg = eap->arg;
    int	    flags = eap->forceit ? DIP_ALL : 0;
    char_u  *p = skiptowhite(arg);
    flags += get_runtime_cmd_flags(&arg, p - arg);
    source_runtime(arg, flags);
}

static int runtime_expand_flags;


    void
set_context_in_runtime_cmd(expand_T *xp, char_u *arg)
{
    char_u  *p = skiptowhite(arg);
    runtime_expand_flags
	= *p != NUL ? get_runtime_cmd_flags(&arg, p - arg) : 0;
    
    while (*(p = skiptowhite_esc(arg)) != NUL)
    {
	if (runtime_expand_flags == 0)
	    
	    
	    runtime_expand_flags = DIP_ALL;
	arg = skipwhite(p);
    }
    xp->xp_context = EXPAND_RUNTIME;
    xp->xp_pattern = arg;
}

    static void
source_callback(char_u *fname, void *cookie)
{
    (void)do_source(fname, FALSE, DOSO_NONE, cookie);
}

#ifdef FEAT_EVAL

    int
find_script_by_name(char_u *name)
{
    int		    sid;
    scriptitem_T    *si;

    for (sid = script_items.ga_len; sid > 0; --sid)
    {
	
	
	
	
	
	si = SCRIPT_ITEM(sid);
	if (si->sn_name != NULL && fnamecmp(si->sn_name, name) == 0)
	    return sid;
    }
    return -1;
}


    static int
get_new_scriptitem(int *error)
{
    static scid_T   last_current_SID = 0;
    int		    sid = ++last_current_SID;
    scriptitem_T    *si = NULL;

    if (ga_grow(&script_items, (int)(sid - script_items.ga_len)) == FAIL)
    {
	*error = FAIL;
	return sid;
    }
    while (script_items.ga_len < sid)
    {
	si = ALLOC_CLEAR_ONE(scriptitem_T);
	if (si == NULL)
	{
	    *error = FAIL;
	    return sid;
	}
	++script_items.ga_len;
	SCRIPT_ITEM(script_items.ga_len) = si;
	si->sn_name = NULL;
	si->sn_version = 1;

	
	new_script_vars(script_items.ga_len);
	ga_init2(&si->sn_var_vals, sizeof(svar_T), 10);
	hash_init(&si->sn_all_vars.dv_hashtab);
	ga_init2(&si->sn_imports, sizeof(imported_T), 10);
	ga_init2(&si->sn_type_list, sizeof(type_T), 10);
# ifdef FEAT_PROFILE
	si->sn_prof_on = FALSE;
# endif
    }

    
    if (si != NULL)
	
	si->sn_script_seq = current_sctx.sc_seq;

    return sid;
}

    int
get_new_scriptitem_for_fname(int *error, char_u *fname)
{
    int sid = get_new_scriptitem(error);

    if (*error == OK)
    {
	scriptitem_T *si = SCRIPT_ITEM(sid);

	si->sn_name = vim_strsave(fname);
	si->sn_state = SN_STATE_NOT_LOADED;
    }
    return sid;
}


    void
check_script_symlink(int sid)
{
    scriptitem_T *si = SCRIPT_ITEM(sid);
    if (si->sn_syml_checked || si->sn_sourced_sid > 0)
	return;
    si->sn_syml_checked = TRUE;

    

    char_u *real_fname = fix_fname(si->sn_name);
    if (real_fname != NULL && STRCMP(real_fname, si->sn_name) != 0)
    {
	int real_sid = find_script_by_name(real_fname);
	int error2 = OK;
	int new_sid = FALSE;
	if (real_sid < 0)
	{
	    real_sid = get_new_scriptitem_for_fname(&error2, real_fname);
	    new_sid = TRUE;
	}
	if (error2 == OK)
	{
	    si = SCRIPT_ITEM(sid);
	    si->sn_sourced_sid = real_sid;
	    if (new_sid)
	    {
		SCRIPT_ITEM(real_sid)->sn_import_autoload
						    = si->sn_import_autoload;
		if (si->sn_autoload_prefix != NULL)
		    SCRIPT_ITEM(real_sid)->sn_autoload_prefix =
					vim_strsave(si->sn_autoload_prefix);
	    }
	}
    }
    vim_free(real_fname);
}

    static void
find_script_callback(char_u *fname, void *cookie)
{
    int sid;
    int error = OK;
    int *ret_sid = cookie;

    sid = find_script_by_name(fname);
    if (sid < 0)
	
	sid = get_new_scriptitem_for_fname(&error, fname);
    *ret_sid = sid;
}
#endif


    int
do_in_path(
    char_u	*path,
    char	*prefix,
    char_u	*name,
    int		flags,
    void	(*callback)(char_u *fname, void *ck),
    void	*cookie)
{
    char_u	*rtp;
    char_u	*np;
    char_u	*buf;
    char_u	*rtp_copy;
    char_u	*tail;
    int		num_files;
    char_u	**files;
    int		i;
    int		did_one = FALSE;
#ifdef AMIGA
    struct Process	*proc = (struct Process *)FindTask(0L);
    APTR		save_winptr = proc->pr_WindowPtr;

    
    proc->pr_WindowPtr = (APTR)-1L;
#endif

    
    
    rtp_copy = vim_strsave(path);
    buf = alloc(MAXPATHL);
    if (buf != NULL && rtp_copy != NULL)
    {
	if (p_verbose > 10 && name != NULL)
	{
	    verbose_enter();
	    if (*prefix != NUL)
		smsg(_("Searching for \"%s\" under \"%s\" in \"%s\""),
					   (char *)name, prefix, (char *)path);
	    else
		smsg(_("Searching for \"%s\" in \"%s\""),
						   (char *)name, (char *)path);
	    verbose_leave();
	}

	
	rtp = rtp_copy;
	while (*rtp != NUL && ((flags & DIP_ALL) || !did_one))
	{
	    size_t buflen;

	    
	    copy_option_part(&rtp, buf, MAXPATHL, ",");
	    buflen = STRLEN(buf);

	    
	    if (flags & (DIP_NOAFTER | DIP_AFTER))
	    {
		int is_after = buflen >= 5
				     && STRCMP(buf + buflen - 5, "after") == 0;

		if ((is_after && (flags & DIP_NOAFTER))
			|| (!is_after && (flags & DIP_AFTER)))
		    continue;
	    }

	    if (name == NULL)
	    {
		(*callback)(buf, (void *) &cookie);
		if (!did_one)
		    did_one = (cookie == NULL);
	    }
	    else if (buflen + 2 + STRLEN(prefix) + STRLEN(name) < MAXPATHL)
	    {
		add_pathsep(buf);
		STRCAT(buf, prefix);
		tail = buf + STRLEN(buf);

		
		np = name;
		while (*np != NUL && ((flags & DIP_ALL) || !did_one))
		{
		    
		    copy_option_part(&np, tail, (int)(MAXPATHL - (tail - buf)),
								       "\t ");

		    if (p_verbose > 10)
		    {
			verbose_enter();
			smsg(_("Searching for \"%s\""), buf);
			verbose_leave();
		    }

		    
		    if (gen_expand_wildcards(1, &buf, &num_files, &files,
				  (flags & DIP_DIR) ? EW_DIR : EW_FILE) == OK)
		    {
			for (i = 0; i < num_files; ++i)
			{
			    (*callback)(files[i], cookie);
			    did_one = TRUE;
			    if (!(flags & DIP_ALL))
				break;
			}
			FreeWild(num_files, files);
		    }
		}
	    }
	}
    }
    vim_free(buf);
    vim_free(rtp_copy);
    if (!did_one && name != NULL)
    {
	char *basepath = path == p_rtp ? "runtimepath" : "packpath";

	if (flags & DIP_ERR)
	    semsg(_(e_directory_not_found_in_str_str), basepath, name);
	else if (p_verbose > 0)
	{
	    verbose_enter();
	    smsg(_("not found in '%s': \"%s\""), basepath, name);
	    verbose_leave();
	}
    }

#ifdef AMIGA
    proc->pr_WindowPtr = save_winptr;
#endif

    return did_one ? OK : FAIL;
}


    static int
do_in_path_and_pp(
    char_u	*path,
    char_u	*name,
    int		flags,
    void	(*callback)(char_u *fname, void *ck),
    void	*cookie)
{
    int		done = FAIL;

    if ((flags & DIP_NORTP) == 0)
	done = do_in_path(path, "", name, flags, callback, cookie);

    if ((done == FAIL || (flags & DIP_ALL)) && (flags & DIP_START))
	done = do_in_path(p_pp, "pack", name, flags, callback,
								       cookie);

    if ((done == FAIL || (flags & DIP_ALL)) && (flags & DIP_OPT))
	done = do_in_path(p_pp, "pack", name, flags, callback,
								       cookie);

    return done;
}


    int
do_in_runtimepath(
    char_u	*name,
    int		flags,
    void	(*callback)(char_u *fname, void *ck),
    void	*cookie)
{
    return do_in_path_and_pp(p_rtp, name, flags, callback, cookie);
}


    int
source_runtime(char_u *name, int flags)
{
    return source_in_path(p_rtp, name, flags, NULL);
}


    int
source_in_path(char_u *path, char_u *name, int flags, int *ret_sid)
{
    return do_in_path_and_pp(path, name, flags, source_callback, ret_sid);
}

#if defined(FEAT_EVAL) || defined(PROTO)


    int
find_script_in_rtp(char_u *name)
{
    int sid = -1;

    (void)do_in_path_and_pp(p_rtp, name, DIP_START | DIP_NOAFTER,
						   find_script_callback, &sid);
    return sid;
}


    static void
source_all_matches(char_u *pat)
{
    int	    num_files;
    char_u  **files;
    int	    i;

    if (gen_expand_wildcards(1, &pat, &num_files, &files, EW_FILE) != OK)
	return;

    for (i = 0; i < num_files; ++i)
	(void)do_source(files[i], FALSE, DOSO_NONE, NULL);
    FreeWild(num_files, files);
}


    static int
add_pack_dir_to_rtp(char_u *fname)
{
    char_u  *p4, *p3, *p2, *p1, *p;
    char_u  *entry;
    char_u  *insp = NULL;
    int	    c;
    char_u  *new_rtp;
    int	    keep;
    size_t  oldlen;
    size_t  addlen;
    size_t  new_rtp_len;
    char_u  *afterdir = NULL;
    size_t  afterlen = 0;
    char_u  *after_insp = NULL;
    char_u  *ffname = NULL;
    size_t  fname_len;
    char_u  *buf = NULL;
    char_u  *rtp_ffname;
    int	    match;
    int	    retval = FAIL;

    p4 = p3 = p2 = p1 = get_past_head(fname);
    for (p = p1; *p; MB_PTR_ADV(p))
	if (vim_ispathsep_nocolon(*p))
	{
	    p4 = p3; p3 = p2; p2 = p1; p1 = p;
	}

    
    
    
    
    
    c = *++p4; 
    *p4 = NUL;
    ffname = fix_fname(fname);
    *p4 = c;
    if (ffname == NULL)
	return FAIL;

    
    
    fname_len = STRLEN(ffname);
    buf = alloc(MAXPATHL);
    if (buf == NULL)
	goto theend;
    for (entry = p_rtp; *entry != NUL; )
    {
	char_u *cur_entry = entry;

	copy_option_part(&entry, buf, MAXPATHL, ",");

	if ((p = (char_u *)strstr((char *)buf, "after")) != NULL
		&& p > buf
		&& vim_ispathsep(p[-1])
		&& (vim_ispathsep(p[5]) || p[5] == NUL || p[5] == ','))
	{
	    if (insp == NULL)
		
		
		insp = cur_entry;
	    after_insp = cur_entry;
	    break;
	}

	if (insp == NULL)
	{
	    add_pathsep(buf);
	    rtp_ffname = fix_fname(buf);
	    if (rtp_ffname == NULL)
		goto theend;
	    match = vim_fnamencmp(rtp_ffname, ffname, fname_len) == 0;
	    vim_free(rtp_ffname);
	    if (match)
		
		insp = entry;
	}
    }

    if (insp == NULL)
	
	insp = p_rtp + STRLEN(p_rtp);

    
    afterdir = concat_fnames(fname, (char_u *)"after", TRUE);
    if (afterdir != NULL && mch_isdir(afterdir))
	afterlen = STRLEN(afterdir) + 1; 

    oldlen = STRLEN(p_rtp);
    addlen = STRLEN(fname) + 1; 
    new_rtp = alloc(oldlen + addlen + afterlen + 1); 
    if (new_rtp == NULL)
	goto theend;

    
    
    keep = (int)(insp - p_rtp);
    mch_memmove(new_rtp, p_rtp, keep);
    new_rtp_len = keep;
    if (*insp == NUL)
	new_rtp[new_rtp_len++] = ',';  
    mch_memmove(new_rtp + new_rtp_len, fname, addlen - 1);
    new_rtp_len += addlen - 1;
    if (*insp != NUL)
	new_rtp[new_rtp_len++] = ',';  

    if (afterlen > 0 && after_insp != NULL)
    {
	int keep_after = (int)(after_insp - p_rtp);

	
	mch_memmove(new_rtp + new_rtp_len, p_rtp + keep,
							keep_after - keep);
	new_rtp_len += keep_after - keep;
	mch_memmove(new_rtp + new_rtp_len, afterdir, afterlen - 1);
	new_rtp_len += afterlen - 1;
	new_rtp[new_rtp_len++] = ',';
	keep = keep_after;
    }

    if (p_rtp[keep] != NUL)
	
	mch_memmove(new_rtp + new_rtp_len, p_rtp + keep, oldlen - keep + 1);
    else
	new_rtp[new_rtp_len] = NUL;

    if (afterlen > 0 && after_insp == NULL)
    {
	
	
	STRCAT(new_rtp, ",");
	STRCAT(new_rtp, afterdir);
    }

    set_option_value_give_err((char_u *)"rtp", 0L, new_rtp, 0);
    vim_free(new_rtp);
    retval = OK;

theend:
    vim_free(buf);
    vim_free(ffname);
    vim_free(afterdir);
    return retval;
}


    static int
load_pack_plugin(char_u *fname)
{
    static char *plugpat = "%s/plugin*.vim";
    static char *ftpat = "%s/ftdetect
    void
add_pack_start_dirs(void)
{
    do_in_path(p_pp, "", (char_u *)"pack
    void
load_start_packages(void)
{
    did_source_packages = TRUE;
    do_in_path(p_pp, "", (char_u *)"pack
    void
ex_packloadall(exarg_T *eap)
{
    if (!did_source_packages || eap->forceit)
    {
	
	
	
	add_pack_start_dirs();
	load_start_packages();
    }
}


    void
ex_packadd(exarg_T *eap)
{
    static char *plugpat = "pack
    void
remove_duplicates(garray_T *gap)
{
    int	    i;
    int	    j;
    char_u  **fnames = (char_u **)gap->ga_data;

    sort_strings(fnames, gap->ga_len);
    for (i = gap->ga_len - 1; i > 0; --i)
	if (fnamecmp(fnames[i - 1], fnames[i]) == 0)
	{
	    vim_free(fnames[i]);
	    for (j = i + 1; j < gap->ga_len; ++j)
		fnames[j - 1] = fnames[j];
	    --gap->ga_len;
	}
}

    static void
ExpandRTDir_int(
    char_u	*pat,
    size_t	pat_len,
    int		flags,
    int		keep_ext,
    garray_T	*gap,
    char	*dirnames[])
{
    for (int i = 0; dirnames[i] != NULL; ++i)
    {
	size_t		buf_len = STRLEN(dirnames[i]) + pat_len + 22;
	char		*buf = alloc(buf_len);
	if (buf == NULL)
	{
	    ga_clear_strings(gap);
	    return;
	}
	char		*tail = buf + 15;
	size_t		tail_buflen = buf_len - 15;
	int		glob_flags = 0;
	int		expand_dirs = FALSE;

	if (*(dirnames[i]) == NUL)  
	    vim_snprintf(tail, tail_buflen, "%s*.vim", pat);
	else
	    vim_snprintf(tail, tail_buflen, "%s/%s*.vim", dirnames[i], pat);

expand:
	if ((flags & DIP_NORTP) == 0)
	    globpath(p_rtp, (char_u *)tail, gap, glob_flags, expand_dirs);

	if (flags & DIP_START)
	{
	    memcpy(tail - 15, "pack", 15);
	    globpath(p_pp, (char_u *)tail - 15, gap, glob_flags, expand_dirs);
	}

	if (flags & DIP_OPT)
	{
	    memcpy(tail - 13, "pack", 13);
	    globpath(p_pp, (char_u *)tail - 13, gap, glob_flags, expand_dirs);
	}

	if (*(dirnames[i]) == NUL && !expand_dirs)
	{
	    
	    vim_snprintf(tail, tail_buflen, "%s*", pat);
	    glob_flags = WILD_ADD_SLASH;
	    expand_dirs = TRUE;
	    goto expand;
	}

	vim_free(buf);
    }

    int pat_pathsep_cnt = 0;
    for (size_t i = 0; i < pat_len; ++i)
	if (vim_ispathsep(pat[i]))
	    ++pat_pathsep_cnt;

    for (int i = 0; i < gap->ga_len; ++i)
    {
	char_u *match = ((char_u **)gap->ga_data)[i];
	char_u *s = match;
	char_u *e = s + STRLEN(s);
	if (e - 4 > s && !keep_ext && STRNICMP(e - 4, ".vim", 4) == 0)
	{
	    e -= 4;
	    *e = NUL;
	}

	int match_pathsep_cnt = (e > s && e[-1] == '/') ? -1 : 0;
	for (s = e; s > match; MB_PTR_BACK(match, s))
	    if (s < match || (vim_ispathsep(*s)
				     && ++match_pathsep_cnt > pat_pathsep_cnt))
		break;
	++s;
	if (s != match)
	    mch_memmove(match, s, e - s + 1);
    }

    if (gap->ga_len == 0)
	return;

    
    
    remove_duplicates(gap);
}


    int
ExpandRTDir(
    char_u	*pat,
    int		flags,
    int		*num_file,
    char_u	***file,
    char	*dirnames[])
{
    *num_file = 0;
    *file = NULL;

    garray_T	ga;
    ga_init2(&ga, sizeof(char *), 10);

    ExpandRTDir_int(pat, STRLEN(pat), flags, FALSE, &ga, dirnames);

    if (ga.ga_len == 0)
	return FAIL;

    *file = ga.ga_data;
    *num_file = ga.ga_len;
    return OK;
}


    int
expand_runtime_cmd(char_u *pat, int *numMatches, char_u ***matches)
{
    *numMatches = 0;
    *matches = NULL;

    garray_T	ga;
    ga_init2(&ga, sizeof(char *), 10);

    size_t pat_len = (int)STRLEN(pat);
    char *dirnames[] = {"", NULL};
    ExpandRTDir_int(pat, pat_len, runtime_expand_flags, TRUE, &ga, dirnames);

    
    if (runtime_expand_flags == 0)
    {
	char *where_values[] = {"START", "OPT", "PACK", "ALL"};
	for (size_t i = 0; i < ARRAY_LENGTH(where_values); ++i)
	    if (STRNCMP(pat, where_values[i], pat_len) == 0)
	    {
		char_u *p = vim_strsave((char_u *)where_values[i]);
		if (p != NULL && ga_add_string(&ga, p) == FAIL)
		    vim_free(p);
	    }
    }

    if (ga.ga_len == 0)
	return FAIL;

    *matches = ga.ga_data;
    *numMatches = ga.ga_len;
    return OK;
}


    int
ExpandPackAddDir(
    char_u	*pat,
    int		*num_file,
    char_u	***file)
{
    char_u	*s;
    char_u	*e;
    char_u	*match;
    garray_T	ga;
    int		i;
    int		pat_len;

    *num_file = 0;
    *file = NULL;
    pat_len = (int)STRLEN(pat);
    ga_init2(&ga, sizeof(char *), 10);

    s = alloc(pat_len + 26);
    if (s == NULL)
    {
	ga_clear_strings(&ga);
	return FAIL;
    }
    sprintf((char *)s, "pack
    void
ex_source(exarg_T *eap)
{
#ifdef FEAT_BROWSE
    if (cmdmod.cmod_flags & CMOD_BROWSE)
    {
	char_u *fname = NULL;

	fname = do_browse(0, (char_u *)_("Source Vim script"), eap->arg,
				      NULL, NULL,
				      (char_u *)_(BROWSE_FILTER_MACROS), NULL);
	if (fname != NULL)
	{
	    cmd_source(fname, eap);
	    vim_free(fname);
	}
    }
    else
#endif
	cmd_source(eap->arg, eap);
}

#if defined(FEAT_EVAL) || defined(PROTO)

    void
ex_options(
    exarg_T	*eap UNUSED)
{
    char_u  buf[500];
    int	    multi_mods = 0;

    buf[0] = NUL;
    (void)add_win_cmd_modifiers(buf, &cmdmod, &multi_mods);

    vim_setenv((char_u *)"OPTWIN_CMD", buf);
    cmd_source((char_u *)SYS_OPTWIN_FILE, NULL);
}
#endif



#if defined(FEAT_EVAL) || defined(PROTO)

    linenr_T *
source_breakpoint(void *cookie)
{
    return &((source_cookie_T *)cookie)->breakpoint;
}


    int *
source_dbg_tick(void *cookie)
{
    return &((source_cookie_T *)cookie)->dbg_tick;
}


    int
source_level(void *cookie)
{
    return ((source_cookie_T *)cookie)->level;
}


    char_u *
source_nextline(void *cookie)
{
    return ((source_cookie_T *)cookie)->nextline;
}
#endif

#if (defined(MSWIN) && defined(FEAT_CSCOPE)) || defined(HAVE_FD_CLOEXEC)
# define USE_FOPEN_NOINH

    static FILE *
fopen_noinh_readbin(char *filename)
{
# ifdef MSWIN
    int	fd_tmp = mch_open(filename, O_RDONLY | O_BINARY | O_NOINHERIT, 0);
# else
    int	fd_tmp = mch_open(filename, O_RDONLY, 0);
# endif

    if (fd_tmp == -1)
	return NULL;

# ifdef HAVE_FD_CLOEXEC
    {
	int fdflags = fcntl(fd_tmp, F_GETFD);
	if (fdflags >= 0 && (fdflags & FD_CLOEXEC) == 0)
	    (void)fcntl(fd_tmp, F_SETFD, fdflags | FD_CLOEXEC);
    }
# endif

    return fdopen(fd_tmp, READBIN);
}
#endif


    static char_u *
do_source_buffer_init(source_cookie_T *sp, exarg_T *eap)
{
    linenr_T	curr_lnum;
    char_u	*line = NULL;
    char_u	*fname;

    if (curbuf == NULL)
	return NULL;

    
    if (curbuf->b_ffname != NULL)
	fname = vim_strsave(curbuf->b_ffname);
    else
    {
	vim_snprintf((char *)IObuff, IOSIZE, ":source buffer=%d", curbuf->b_fnum);
	fname = vim_strsave(IObuff);
    }
    if (fname == NULL)
	return NULL;

    ga_init2(&sp->buflines, sizeof(char_u *), 100);

    
    for (curr_lnum = eap->line1; curr_lnum <= eap->line2; curr_lnum++)
    {
	line = vim_strsave(ml_get(curr_lnum));
	if (line == NULL)
	    goto errret;
	if (ga_add_string(&sp->buflines, line) == FAIL)
	    goto errret;
    }
    sp->buf_lnum = 0;
    sp->source_from_buf = TRUE;
    
    sp->sourcing_lnum = eap->line1 - 1;

    return fname;

errret:
    vim_free(fname);
    vim_free(line);
    ga_clear_strings(&sp->buflines);
    return NULL;
}


    static int
do_source_ext(
    char_u	*fname,
    int		check_other,	    
    int		is_vimrc,	    
    int		*ret_sid UNUSED,
    exarg_T	*eap,
    int		clearvars UNUSED)
{
    source_cookie_T	    cookie;
    char_u		    *p;
    char_u		    *fname_not_fixed = NULL;
    char_u		    *fname_exp = NULL;
    char_u		    *firstline = NULL;
    int			    retval = FAIL;
    sctx_T		    save_current_sctx;
#ifdef STARTUPTIME
    struct timeval	    tv_rel;
    struct timeval	    tv_start;
#endif
#ifdef FEAT_PROFILE
    proftime_T		    wait_start;
#endif
    int			    save_sticky_cmdmod_flags = sticky_cmdmod_flags;
    int			    trigger_source_post = FALSE;
#ifdef FEAT_EVAL
    funccal_entry_T	    funccalp_entry;
    int			    save_debug_break_level = debug_break_level;
    int			    sid = -1;
    scriptitem_T	    *si = NULL;
    int			    save_estack_compiling = estack_compiling;
    ESTACK_CHECK_DECLARATION;
#endif

    CLEAR_FIELD(cookie);
    if (fname == NULL)
    {
	
	fname_exp = do_source_buffer_init(&cookie, eap);
	if (fname_exp == NULL)
	    return FAIL;
    }
    else
    {
	fname_not_fixed = expand_env_save(fname);
	if (fname_not_fixed == NULL)
	    goto theend;
	fname_exp = fix_fname(fname_not_fixed);
	if (fname_exp == NULL)
	    goto theend;
	if (mch_isdir(fname_exp))
	{
	    smsg(_("Cannot source a directory: \"%s\""), fname);
	    goto theend;
	}
    }
#ifdef FEAT_EVAL
    estack_compiling = FALSE;

    
    sid = find_script_by_name(fname_exp);
    if (sid > 0 && ret_sid != NULL
			  && SCRIPT_ITEM(sid)->sn_state != SN_STATE_NOT_LOADED)
    {
	
	*ret_sid = sid;
	retval = OK;
	goto theend;
    }
#endif

    
    if (has_autocmd(EVENT_SOURCECMD, fname_exp, NULL)
	    && apply_autocmds(EVENT_SOURCECMD, fname_exp, fname_exp,
							       FALSE, curbuf))
    {
#ifdef FEAT_EVAL
	retval = aborting() ? FAIL : OK;
#else
	retval = OK;
#endif
	if (retval == OK)
	    
	    apply_autocmds(EVENT_SOURCEPOST, fname_exp, fname_exp,
								FALSE, curbuf);
	goto theend;
    }

    
    apply_autocmds(EVENT_SOURCEPRE, fname_exp, fname_exp, FALSE, curbuf);

    if (!cookie.source_from_buf)
    {
#ifdef USE_FOPEN_NOINH
	cookie.fp = fopen_noinh_readbin((char *)fname_exp);
#else
	cookie.fp = mch_fopen((char *)fname_exp, READBIN);
#endif
    }
    if (cookie.fp == NULL && check_other)
    {
	
	
	p = gettail(fname_exp);
	if ((*p == '.' || *p == '_')
		&& (STRICMP(p + 1, "vimrc") == 0
		    || STRICMP(p + 1, "gvimrc") == 0
		    || STRICMP(p + 1, "exrc") == 0))
	{
	    if (*p == '_')
		*p = '.';
	    else
		*p = '_';
#ifdef USE_FOPEN_NOINH
	    cookie.fp = fopen_noinh_readbin((char *)fname_exp);
#else
	    cookie.fp = mch_fopen((char *)fname_exp, READBIN);
#endif
	}
    }

    if (cookie.fp == NULL && !cookie.source_from_buf)
    {
	if (p_verbose > 0)
	{
	    verbose_enter();
	    if (SOURCING_NAME == NULL)
		smsg(_("could not source \"%s\""), fname);
	    else
		smsg(_("line %ld: could not source \"%s\""),
							SOURCING_LNUM, fname);
	    verbose_leave();
	}
	goto theend;
    }

    
    
    
    if (p_verbose > 1)
    {
	verbose_enter();
	if (SOURCING_NAME == NULL)
	    smsg(_("sourcing \"%s\""), fname);
	else
	    smsg(_("line %ld: sourcing \"%s\""), SOURCING_LNUM, fname);
	verbose_leave();
    }
    if (is_vimrc == DOSO_VIMRC)
	vimrc_found(fname_exp, (char_u *)"MYVIMRC");
    else if (is_vimrc == DOSO_GVIMRC)
	vimrc_found(fname_exp, (char_u *)"MYGVIMRC");

#ifdef USE_CRNL
    
    if (*p_ffs == NUL)
	cookie.fileformat = EOL_DOS;
    else
	cookie.fileformat = EOL_UNKNOWN;
#endif

#ifdef FEAT_EVAL
    
    cookie.breakpoint = dbg_find_breakpoint(TRUE, fname_exp, (linenr_T)0);
    cookie.fname = fname_exp;
    cookie.dbg_tick = debug_tick;

    cookie.level = ex_nesting_level;
#endif

#ifdef STARTUPTIME
    if (time_fd != NULL)
	time_push(&tv_rel, &tv_start);
#endif

    
    sticky_cmdmod_flags = 0;

    save_current_sctx = current_sctx;
    if (cmdmod.cmod_flags & CMOD_VIM9CMD)
	
	
	current_sctx.sc_version = SCRIPT_VERSION_VIM9;
    else
	current_sctx.sc_version = 1;  

#ifdef FEAT_EVAL
    current_sctx.sc_lnum = 0;

# ifdef FEAT_PROFILE
    if (do_profiling == PROF_YES)
	prof_child_enter(&wait_start);		
# endif

    
    
    save_funccal(&funccalp_entry);

    
    
    int save_KeyTyped = KeyTyped;
    KeyTyped = FALSE;

    
    
    current_sctx.sc_seq = ++last_current_SID_seq;
    if (sid > 0)
    {
	hashtab_T	*ht;
	int		todo;
	hashitem_T	*hi;
	dictitem_T	*di;

	
	current_sctx.sc_sid = sid;
	si = SCRIPT_ITEM(sid);
	if (si->sn_state == SN_STATE_NOT_LOADED)
	{
	    
	    si->sn_state = SN_STATE_NEW;
	}
	else
	{
	    si->sn_state = SN_STATE_RELOAD;

	    if (!clearvars)
	    {
		
		
		
		ht = &SCRIPT_VARS(sid);
		todo = (int)ht->ht_used;
		FOR_ALL_HASHTAB_ITEMS(ht, hi, todo)
		    if (!HASHITEM_EMPTY(hi))
		    {
			--todo;
			di = HI2DI(hi);
			di->di_flags |= DI_FLAGS_RELOAD;
		    }
		
		mark_imports_for_reload(sid);
	    }
	    else
		clear_vim9_scriptlocal_vars(sid);

	    
	    si->sn_version = 1;
	}
	if (ret_sid != NULL)
	    *ret_sid = sid;
    }
    else
    {
	int error = OK;

	
	sid = get_new_scriptitem(&error);
	current_sctx.sc_sid = sid;
	if (error == FAIL)
	    goto almosttheend;
	si = SCRIPT_ITEM(sid);
	si->sn_name = fname_exp;
	fname_exp = vim_strsave(si->sn_name);  
	if (ret_sid != NULL)
	    *ret_sid = sid;

	
	si->sn_is_vimrc = is_vimrc;
    }

    
    estack_push(ETYPE_SCRIPT, si->sn_name, 0);
    ESTACK_CHECK_SETUP;

# ifdef FEAT_PROFILE
    if (do_profiling == PROF_YES)
    {
	int	forceit;

	
	if (!si->sn_prof_on && has_profiling(TRUE, si->sn_name, &forceit, NULL))
	{
	    script_do_profile(si);
	    si->sn_pr_force = forceit;
	}
	if (si->sn_prof_on)
	{
	    ++si->sn_pr_count;
	    profile_start(&si->sn_pr_start);
	    profile_zero(&si->sn_pr_children);
	}
    }
# endif
#else
    
    estack_push(ETYPE_SCRIPT, fname_exp, 0);
#endif

    cookie.conv.vc_type = CONV_NONE;		

    
    firstline = getsourceline(0, (void *)&cookie, 0, TRUE);
    if (firstline != NULL && STRLEN(firstline) >= 3 && firstline[0] == 0xef
			      && firstline[1] == 0xbb && firstline[2] == 0xbf)
    {
	
	convert_setup(&cookie.conv, (char_u *)"utf-8", p_enc);
	p = string_convert(&cookie.conv, firstline + 3, NULL);
	if (p == NULL)
	    p = vim_strsave(firstline + 3);
	if (p != NULL)
	{
	    vim_free(firstline);
	    firstline = p;
	}
    }

    
    do_cmdline(firstline, getsourceline, (void *)&cookie,
				     DOCMD_VERBOSE|DOCMD_NOWAIT|DOCMD_REPEAT);
    retval = OK;

#ifdef FEAT_PROFILE
    if (do_profiling == PROF_YES)
    {
	
	si = SCRIPT_ITEM(sid);
	if (si->sn_prof_on)
	{
	    profile_end(&si->sn_pr_start);
	    profile_sub_wait(&wait_start, &si->sn_pr_start);
	    profile_add(&si->sn_pr_total, &si->sn_pr_start);
	    profile_self(&si->sn_pr_self, &si->sn_pr_start,
							 &si->sn_pr_children);
	}
    }
#endif

    if (got_int)
	emsg(_(e_interrupted));
#ifdef FEAT_EVAL
    ESTACK_CHECK_NOW;
#endif
    estack_pop();
    if (p_verbose > 1)
    {
	verbose_enter();
	smsg(_("finished sourcing %s"), fname);
	if (SOURCING_NAME != NULL)
	    smsg(_("continuing in %s"), SOURCING_NAME);
	verbose_leave();
    }
#ifdef STARTUPTIME
    if (time_fd != NULL)
    {
	vim_snprintf((char *)IObuff, IOSIZE, "sourcing %s", fname);
	time_msg((char *)IObuff, &tv_start);
	time_pop(&tv_rel);
    }
#endif

    if (!got_int)
	trigger_source_post = TRUE;

#ifdef FEAT_EVAL
    
    
    if (save_debug_break_level > ex_nesting_level
	    && debug_break_level == ex_nesting_level)
	++debug_break_level;
#endif

#ifdef FEAT_EVAL
almosttheend:
    
    
    
    si = SCRIPT_ITEM(sid);
    if (si->sn_save_cpo != NULL && si->sn_is_vimrc == DOSO_NONE)
    {
	if (STRCMP(p_cpo, CPO_VIM) != 0)
	{
	    char_u *f;
	    char_u *t;

	    
	    
	    for (f = (char_u *)CPO_VIM; *f != NUL; ++f)
		if (vim_strchr(p_cpo, *f) == NULL
			&& (t = vim_strchr(si->sn_save_cpo, *f)) != NULL)
		    
		    mch_memmove(t, t + 1, STRLEN(t));
	    for (f = p_cpo; *f != NUL; ++f)
		if (vim_strchr((char_u *)CPO_VIM, *f) == NULL
			&& vim_strchr(si->sn_save_cpo, *f) == NULL)
		{
		    
		    t = alloc(STRLEN(si->sn_save_cpo) + 2);
		    if (t != NULL)
		    {
			*t = *f;
			STRCPY(t + 1, si->sn_save_cpo);
			vim_free(si->sn_save_cpo);
			si->sn_save_cpo = t;
		    }
		}
	}
	set_option_value_give_err((char_u *)"cpo",
					   0L, si->sn_save_cpo, OPT_NO_REDRAW);
    }
    VIM_CLEAR(si->sn_save_cpo);

    restore_funccal();
# ifdef FEAT_PROFILE
    if (do_profiling == PROF_YES)
	prof_child_exit(&wait_start);		
# endif

    KeyTyped = save_KeyTyped;
#endif
    current_sctx = save_current_sctx;

    if (cookie.fp != NULL)
	fclose(cookie.fp);
    if (cookie.source_from_buf)
	ga_clear_strings(&cookie.buflines);
    vim_free(cookie.nextline);
    vim_free(firstline);
    convert_setup(&cookie.conv, NULL, NULL);

    if (trigger_source_post)
	apply_autocmds(EVENT_SOURCEPOST, fname_exp, fname_exp, FALSE, curbuf);

theend:
#ifdef FEAT_EVAL
    if (sid > 0 && ret_sid != NULL
	    && fname_not_fixed != NULL && fname_exp != NULL)
    {
	int not_fixed_sid = find_script_by_name(fname_not_fixed);

	
	
	
	if (SCRIPT_ID_VALID(not_fixed_sid) && not_fixed_sid != sid)
	    SCRIPT_ITEM(not_fixed_sid)->sn_sourced_sid = sid;
    }
#endif

    vim_free(fname_not_fixed);
    vim_free(fname_exp);
    sticky_cmdmod_flags = save_sticky_cmdmod_flags;
#ifdef FEAT_EVAL
    estack_compiling = save_estack_compiling;
#endif
    return retval;
}

    int
do_source(
    char_u	*fname,
    int		check_other,	    
    int		is_vimrc,	    
    int		*ret_sid)
{
    return do_source_ext(fname, check_other, is_vimrc, ret_sid, NULL, FALSE);
}


#if defined(FEAT_EVAL) || defined(PROTO)


    void
ex_scriptnames(exarg_T *eap)
{
    int i;

    if (eap->addr_count > 0 || *eap->arg != NUL)
    {
	
	if (eap->addr_count > 0 && !SCRIPT_ID_VALID(eap->line2))
	    emsg(_(e_invalid_argument));
	else
	{
	    if (eap->addr_count > 0)
		eap->arg = SCRIPT_ITEM(eap->line2)->sn_name;
	    else
	    {
		expand_env(eap->arg, NameBuff, MAXPATHL);
		eap->arg = NameBuff;
	    }
	    do_exedit(eap, NULL);
	}
	return;
    }

    for (i = 1; i <= script_items.ga_len && !got_int; ++i)
    {
	scriptitem_T *si = SCRIPT_ITEM(i);

	if (si->sn_name != NULL)
	{
	    char sourced_buf[20];

	    home_replace(NULL, si->sn_name, NameBuff, MAXPATHL, TRUE);
	    if (si->sn_sourced_sid > 0)
		vim_snprintf(sourced_buf, 20, "->%d", si->sn_sourced_sid);
	    else
		sourced_buf[0] = NUL;
	    vim_snprintf((char *)IObuff, IOSIZE, "%3d%s%s: %s",
		    i,
		    sourced_buf,
		    si->sn_state == SN_STATE_NOT_LOADED ? " A" : "",
		    NameBuff);
	    if (!message_filtered(IObuff))
	    {
		msg_putchar('\n');
		msg_outtrans(IObuff);
		out_flush();	    
		ui_breakcheck();
	    }
	}
    }
}

# if defined(BACKSLASH_IN_FILENAME) || defined(PROTO)

    void
scriptnames_slash_adjust(void)
{
    int i;

    for (i = 1; i <= script_items.ga_len; ++i)
	if (SCRIPT_ITEM(i)->sn_name != NULL)
	    slash_adjust(SCRIPT_ITEM(i)->sn_name);
}
# endif


    char_u *
get_scriptname(scid_T id)
{
    if (id == SID_MODELINE)
	return (char_u *)_("modeline");
    if (id == SID_CMDARG)
	return (char_u *)_("--cmd argument");
    if (id == SID_CARG)
	return (char_u *)_("-c argument");
    if (id == SID_ENV)
	return (char_u *)_("environment variable");
    if (id == SID_ERROR)
	return (char_u *)_("error handler");
    if (id == SID_WINLAYOUT)
	return (char_u *)_("changed window size");
    return SCRIPT_ITEM(id)->sn_name;
}

# if defined(EXITFREE) || defined(PROTO)
    void
free_scriptnames(void)
{
    int			i;

    for (i = script_items.ga_len; i > 0; --i)
    {
	scriptitem_T *si = SCRIPT_ITEM(i);

	
	vim_free(si->sn_vars);

	vim_free(si->sn_name);
	free_imports_and_script_vars(i);
	free_string_option(si->sn_save_cpo);
#  ifdef FEAT_PROFILE
	ga_clear(&si->sn_prl_ga);
#  endif
	vim_free(si->sn_autoload_prefix);
	vim_free(si);
    }
    ga_clear(&script_items);
}

    void
free_autoload_scriptnames(void)
{
    ga_clear_strings(&ga_loaded);
}
# endif

    linenr_T
get_sourced_lnum(
	char_u *(*fgetline)(int, void *, int, getline_opt_T),
	void *cookie)
{
    return fgetline == getsourceline
			? ((source_cookie_T *)cookie)->sourcing_lnum
			: SOURCING_LNUM;
}


    static list_T *
get_script_local_funcs(scid_T sid)
{
    hashtab_T	*functbl;
    hashitem_T	*hi;
    long_u	todo;
    list_T	*l;

    l = list_alloc();
    if (l == NULL)
	return NULL;

    
    
    functbl = func_tbl_get();
    todo = functbl->ht_used;
    FOR_ALL_HASHTAB_ITEMS(functbl, hi, todo)
    {
	ufunc_T	*fp;

	if (HASHITEM_EMPTY(hi))
	    continue;

	--todo;
	fp = HI2UF(hi);

	
	if (!(fp->uf_flags & FC_DEAD) && (fp->uf_script_ctx.sc_sid == sid))
	{
	    char_u	*name;

	    if (fp->uf_name_exp != NULL)
		name = fp->uf_name_exp;
	    else
		name = fp->uf_name;

	    list_append_string(l, name, -1);
	}
    }

    return l;
}


    void
f_getscriptinfo(typval_T *argvars, typval_T *rettv)
{
    list_T	*l;
    char_u	*pat = NULL;
    regmatch_T	regmatch;
    int		filterpat = FALSE;
    scid_T	sid = -1;

    if (rettv_list_alloc(rettv) == FAIL)
	return;

    if (check_for_opt_dict_arg(argvars, 0) == FAIL)
	return;

    l = rettv->vval.v_list;

    regmatch.regprog = NULL;
    regmatch.rm_ic = p_ic;

    if (argvars[0].v_type == VAR_DICT)
    {
	dictitem_T *sid_di = dict_find(argvars[0].vval.v_dict,
							   (char_u *)"sid", 3);
	if (sid_di != NULL)
	{
	    int error = FALSE;
	    sid = tv_get_number_chk(&sid_di->di_tv, &error);
	    if (error)
		return;
	    if (sid <= 0)
	    {
		semsg(_(e_invalid_value_for_argument_str_str), "sid",
						tv_get_string(&sid_di->di_tv));
		return;
	    }
	}
	else
	{
	    pat = dict_get_string(argvars[0].vval.v_dict, "name", TRUE);
	    if (pat != NULL)
		regmatch.regprog = vim_regcomp(pat, RE_MAGIC + RE_STRING);
	    if (regmatch.regprog != NULL)
		filterpat = TRUE;
	}
    }

    for (varnumber_T i = sid > 0 ? sid : 1;
		       (i == sid || sid <= 0) && i <= script_items.ga_len; ++i)
    {
	scriptitem_T	*si = SCRIPT_ITEM(i);
	dict_T		*d;

	if (si->sn_name == NULL)
	    continue;

	if (filterpat && !vim_regexec(&regmatch, si->sn_name, (colnr_T)0))
	    continue;

	if ((d = dict_alloc()) == NULL
		|| list_append_dict(l, d) == FAIL
		|| dict_add_string(d, "name", si->sn_name) == FAIL
		|| dict_add_number(d, "sid", i) == FAIL
		|| dict_add_number(d, "sourced", si->sn_sourced_sid) == FAIL
		|| dict_add_number(d, "version", si->sn_version) == FAIL
		|| dict_add_bool(d, "autoload",
				si->sn_state == SN_STATE_NOT_LOADED) == FAIL)
	    return;

	
	
	if (sid > 0)
	{
	    dict_T	*var_dict;

	    var_dict = dict_copy(&si->sn_vars->sv_dict, TRUE, TRUE,
								get_copyID());
	    if (var_dict == NULL
		    || dict_add_dict(d, "variables", var_dict) == FAIL
		    || dict_add_list(d, "functions",
					get_script_local_funcs(sid)) == FAIL)
		return;
	}
    }

    vim_regfree(regmatch.regprog);
    vim_free(pat);
}

#endif

    static char_u *
get_one_sourceline(source_cookie_T *sp)
{
    garray_T		ga;
    int			len;
    int			c;
    char_u		*buf;
#ifdef USE_CRNL
    int			has_cr;		
#endif
    int			have_read = FALSE;

    
    ga_init2(&ga, 1, 250);

    
    ++sp->sourcing_lnum;
    for (;;)
    {
	
	if (ga_grow(&ga, 120) == FAIL)
	    break;
	if (sp->source_from_buf)
	{
	    if (sp->buf_lnum >= sp->buflines.ga_len)
		break;		    
	    ga_concat(&ga, ((char_u **)sp->buflines.ga_data)[sp->buf_lnum]);
	    sp->buf_lnum++;
	    if (ga_grow(&ga, 1) == FAIL)
		break;
	    buf = (char_u *)ga.ga_data;
	    buf[ga.ga_len++] = NUL;
	    len = ga.ga_len;
	}
	else
	{
	    buf = (char_u *)ga.ga_data;
	    if (fgets((char *)buf + ga.ga_len, ga.ga_maxlen - ga.ga_len,
			sp->fp) == NULL)
		break;
	    len = ga.ga_len + (int)STRLEN(buf + ga.ga_len);
	}
#ifdef USE_CRNL
	
	
	if (	   (len == 1 || (len >= 2 && buf[len - 2] == '\n'))
		&& sp->fileformat == EOL_DOS
		&& buf[len - 1] == Ctrl_Z)
	{
	    buf[len - 1] = NUL;
	    break;
	}
#endif

	have_read = TRUE;
	ga.ga_len = len;

	
	if (ga.ga_maxlen - ga.ga_len == 1 && buf[len - 1] != '\n')
	    continue;

	if (len >= 1 && buf[len - 1] == '\n')	
	{
#ifdef USE_CRNL
	    has_cr = (len >= 2 && buf[len - 2] == '\r');
	    if (sp->fileformat == EOL_UNKNOWN)
	    {
		if (has_cr)
		    sp->fileformat = EOL_DOS;
		else
		    sp->fileformat = EOL_UNIX;
	    }

	    if (sp->fileformat == EOL_DOS)
	    {
		if (has_cr)	    
		{
		    buf[len - 2] = '\n';
		    --len;
		    --ga.ga_len;
		}
		else	    
		{
		    if (!sp->error)
		    {
			msg_source(HL_ATTR(HLF_W));
			emsg(_("W15: Warning: Wrong line separator, ^M may be missing"));
		    }
		    sp->error = TRUE;
		    sp->fileformat = EOL_UNIX;
		}
	    }
#endif
	    
	    
	    
	    for (c = len - 2; c >= 0 && buf[c] == Ctrl_V; c--)
		;
	    if ((len & 1) != (c & 1))	
	    {
		++sp->sourcing_lnum;
		continue;
	    }

	    buf[len - 1] = NUL;		
	}

	
	line_breakcheck();
	break;
    }

    if (have_read)
	return (char_u *)ga.ga_data;

    vim_free(ga.ga_data);
    return NULL;
}


    char_u *
getsourceline(
	int c UNUSED,
	void *cookie,
	int indent UNUSED,
	getline_opt_T options)
{
    source_cookie_T	*sp = (source_cookie_T *)cookie;
    char_u		*line;
    char_u		*p;
    int			do_vim9_all = in_vim9script()
					      && options == GETLINE_CONCAT_ALL;
    int			do_bar_cont = do_vim9_all
					 || options == GETLINE_CONCAT_CONTBAR;

#ifdef FEAT_EVAL
    
    if ((sp->dbg_tick < debug_tick) && !sp->source_from_buf)
    {
	sp->breakpoint = dbg_find_breakpoint(TRUE, sp->fname, SOURCING_LNUM);
	sp->dbg_tick = debug_tick;
    }
# ifdef FEAT_PROFILE
    if (do_profiling == PROF_YES)
	script_line_end();
# endif
#endif

    
    SOURCING_LNUM = sp->sourcing_lnum + 1;

    
    
    if (sp->finished || (!sp->source_from_buf && sp->fp == NULL))
	line = NULL;
    else if (sp->nextline == NULL)
	line = get_one_sourceline(sp);
    else
    {
	line = sp->nextline;
	sp->nextline = NULL;
	++sp->sourcing_lnum;
    }
#ifdef FEAT_PROFILE
    if (line != NULL && do_profiling == PROF_YES)
	script_line_start();
#endif

    
    
    if (line != NULL && options != GETLINE_NONE
				      && vim_strchr(p_cpo, CPO_CONCAT) == NULL)
    {
	int comment_char = in_vim9script() ? '#' : '"';

	
	--sp->sourcing_lnum;

	
	
	
	
	
	
	sp->nextline = get_one_sourceline(sp);
	if (sp->nextline != NULL
		&& (*(p = skipwhite(sp->nextline)) == '\\'
			      || (p[0] == comment_char
						&& p[1] == '\\' && p[2] == ' ')
			      || (do_vim9_all && (*p == NUL
						     || vim9_comment_start(p)))
			      || (do_bar_cont && p[0] == '|' && p[1] != '|')))
	{
	    garray_T    ga;

	    ga_init2(&ga, sizeof(char_u), 400);
	    ga_concat(&ga, line);
	    if (*p == '\\')
		ga_concat(&ga, p + 1);
	    else if (*p == '|')
	    {
		ga_concat(&ga, (char_u *)" ");
		ga_concat(&ga, p);
	    }
	    for (;;)
	    {
		vim_free(sp->nextline);
		sp->nextline = get_one_sourceline(sp);
		if (sp->nextline == NULL)
		    break;
		p = skipwhite(sp->nextline);
		if (*p == '\\' || (do_bar_cont && p[0] == '|' && p[1] != '|'))
		{
		    
		    
		    if (ga.ga_len > 400)
		    {
			if (ga.ga_len > 8000)
			    ga.ga_growsize = 8000;
			else
			    ga.ga_growsize = ga.ga_len;
		    }
		    if (*p == '\\')
			ga_concat(&ga, p + 1);
		    else
		    {
			ga_concat(&ga, (char_u *)" ");
			ga_concat(&ga, p);
		    }
		}
		else if (!(p[0] == (comment_char)
						&& p[1] == '\\' && p[2] == ' ')
		     && !(do_vim9_all && (*p == NUL || vim9_comment_start(p))))
		    break;
		
	    }
	    ga_append(&ga, NUL);
	    vim_free(line);
	    line = ga.ga_data;
	}
    }

    if (line != NULL && sp->conv.vc_type != CONV_NONE)
    {
	char_u	*s;

	
	s = string_convert(&sp->conv, line, NULL);
	if (s != NULL)
	{
	    vim_free(line);
	    line = s;
	}
    }

#ifdef FEAT_EVAL
    
    if (!sp->source_from_buf && sp->breakpoint != 0
	    && sp->breakpoint <= SOURCING_LNUM)
    {
	dbg_breakpoint(sp->fname, SOURCING_LNUM);
	
	sp->breakpoint = dbg_find_breakpoint(TRUE, sp->fname, SOURCING_LNUM);
	sp->dbg_tick = debug_tick;
    }
#endif

    return line;
}


    int
sourcing_a_script(exarg_T *eap)
{
    return (getline_equal(eap->ea_getline, eap->cookie, getsourceline));
}


    void
ex_scriptencoding(exarg_T *eap)
{
    source_cookie_T	*sp;
    char_u		*name;

    if (!sourcing_a_script(eap))
    {
	emsg(_(e_scriptencoding_used_outside_of_sourced_file));
	return;
    }

    if (*eap->arg != NUL)
    {
	name = enc_canonize(eap->arg);
	if (name == NULL)	
	    return;
    }
    else
	name = eap->arg;

    
    sp = (source_cookie_T *)getline_cookie(eap->ea_getline, eap->cookie);
    convert_setup(&sp->conv, name, p_enc);

    if (name != eap->arg)
	vim_free(name);
}


    void
ex_scriptversion(exarg_T *eap UNUSED)
{
    int		nr;

    if (!sourcing_a_script(eap))
    {
	emsg(_(e_scriptversion_used_outside_of_sourced_file));
	return;
    }
    if (in_vim9script())
    {
	emsg(_(e_cannot_use_scriptversion_after_vim9script));
	return;
    }

    nr = getdigits(&eap->arg);
    if (nr == 0 || *eap->arg != NUL)
	emsg(_(e_invalid_argument));
    else if (nr > SCRIPT_VERSION_MAX)
	semsg(_(e_scriptversion_not_supported_nr), nr);
    else
    {
	current_sctx.sc_version = nr;
#ifdef FEAT_EVAL
	SCRIPT_ITEM(current_sctx.sc_sid)->sn_version = nr;
#endif
    }
}

#if defined(FEAT_EVAL) || defined(PROTO)

    void
ex_finish(exarg_T *eap)
{
    if (sourcing_a_script(eap))
	do_finish(eap, FALSE);
    else
	emsg(_(e_finish_used_outside_of_sourced_file));
}


    void
do_finish(exarg_T *eap, int reanimate)
{
    int		idx;

    if (reanimate)
	((source_cookie_T *)getline_cookie(eap->ea_getline,
					      eap->cookie))->finished = FALSE;

    
    
    
    
    idx = cleanup_conditionals(eap->cstack, 0, TRUE);
    if (idx >= 0)
    {
	eap->cstack->cs_pending[idx] = CSTP_FINISH;
	report_make_pending(CSTP_FINISH, NULL);
    }
    else
	((source_cookie_T *)getline_cookie(eap->ea_getline,
					       eap->cookie))->finished = TRUE;
}



    int
source_finished(
    char_u	*(*fgetline)(int, void *, int, getline_opt_T),
    void	*cookie)
{
    return (getline_equal(fgetline, cookie, getsourceline)
	    && ((source_cookie_T *)getline_cookie(
						fgetline, cookie))->finished);
}


    static char_u *
script_name_after_autoload(scriptitem_T *si)
{
    char_u	*p = si->sn_name;
    char_u	*res = NULL;

    for (;;)
    {
	char_u *n = (char_u *)strstr((char *)p, "autoload");

	if (n == NULL)
	    break;
	if (n > p && vim_ispathsep(n[-1]) && vim_ispathsep(n[8]))
	    res = n + 9;
	p = n + 8;
    }
    return res;
}


    char_u *
get_autoload_prefix(scriptitem_T *si)
{
    char_u *p = script_name_after_autoload(si);
    char_u *prefix;

    if (p == NULL)
	return NULL;
    prefix = vim_strsave(p);
    if (prefix == NULL)
	return NULL;

    
    for (p = prefix; *p != NUL; p += mb_ptr2len(p))
    {
	if (vim_ispathsep(*p))
	    *p = '#';
	else if (STRCMP(p, ".vim") == 0)
	{
	    p[0] = '#';
	    p[1] = NUL;
	    return prefix;
	}
    }

    
    vim_free(prefix);
    return NULL;
}


    char_u *
may_prefix_autoload(char_u *name)
{
    if (!SCRIPT_ID_VALID(current_sctx.sc_sid))
	return name;

    scriptitem_T *si = SCRIPT_ITEM(current_sctx.sc_sid);

    if (si->sn_autoload_prefix == NULL)
	return name;

    char_u  *basename = name;
    size_t  len;
    char_u  *res;

    if (*name == K_SPECIAL)
    {
	char_u *p = vim_strchr(name, '_');

	
	if (p != NULL)
	    basename = p + 1;
    }

    len = STRLEN(si->sn_autoload_prefix) + STRLEN(basename) + 2;
    res = alloc(len);
    if (res == NULL)
	return NULL;

    vim_snprintf((char *)res, len, "%s%s", si->sn_autoload_prefix, basename);
    return res;
}


    char_u *
autoload_name(char_u *name)
{
    char_u	*p, *q = NULL;
    char_u	*scriptname;

    
    scriptname = alloc(STRLEN(name) + 14);
    if (scriptname == NULL)
	return NULL;
    STRCPY(scriptname, "autoload/");
    STRCAT(scriptname, name[0] == 'g' && name[1] == ':' ? name + 2: name);
    for (p = scriptname + 9; (p = vim_strchr(p, AUTOLOAD_CHAR)) != NULL;
								    q = p, ++p)
	*p = '/';
    STRCPY(q, ".vim");
    return scriptname;
}


    int
script_autoload(
    char_u	*name,
    int		reload)	    
{
    char_u	*p;
    char_u	*scriptname, *tofree;
    int		ret = FALSE;
    int		i;
    int		ret_sid;

    
    if (name[0] == K_SPECIAL && name[1] == KS_EXTRA && name[2] == KE_SNR)
    {
	p = name + 3;
	ret_sid = (int)getdigits(&p);
	if (*p == '_' && SCRIPT_ID_VALID(ret_sid))
	{
	    may_load_script(ret_sid, &ret);
	    return ret;
	}
    }

    
    p = vim_strchr(name, AUTOLOAD_CHAR);
    if (p == NULL || p == name)
	return FALSE;

    tofree = scriptname = autoload_name(name);
    if (scriptname == NULL)
	return FALSE;

    
    
    for (i = 0; i < ga_loaded.ga_len; ++i)
	if (STRCMP(((char_u **)ga_loaded.ga_data)[i] + 9, scriptname + 9) == 0)
	    break;
    if (!reload && i < ga_loaded.ga_len)
	ret = FALSE;	    
    else
    {
	
	if (i == ga_loaded.ga_len && ga_grow(&ga_loaded, 1) == OK)
	{
	    ((char_u **)ga_loaded.ga_data)[ga_loaded.ga_len++] = scriptname;
	    tofree = NULL;
	}

	
	
	if (source_in_path(p_rtp, scriptname, DIP_START, &ret_sid) == OK)
	    ret = TRUE;
    }

    vim_free(tofree);
    return ret;
}
#endif
