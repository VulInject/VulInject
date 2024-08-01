



#include "vim.h"


#ifdef PROTO
# include "vim9.h"
#endif


    int
in_vim9script(void)
{
    
    
    return (current_sctx.sc_version == SCRIPT_VERSION_VIM9
					 || (cmdmod.cmod_flags & CMOD_VIM9CMD))
		&& !(cmdmod.cmod_flags & CMOD_LEGACY);
}

#if defined(FEAT_EVAL) || defined(PROTO)

    int
in_old_script(int max_version)
{
    return (current_sctx.sc_version < max_version
					&& !(cmdmod.cmod_flags & CMOD_VIM9CMD))
		|| (cmdmod.cmod_flags & CMOD_LEGACY);
}


    int
current_script_is_vim9(void)
{
    return SCRIPT_ID_VALID(current_sctx.sc_sid)
	    && SCRIPT_ITEM(current_sctx.sc_sid)->sn_version
						       == SCRIPT_VERSION_VIM9;
}
#endif

#ifdef FEAT_EVAL

    void
clear_vim9_scriptlocal_vars(int sid)
{
    hashtab_T	*ht = &SCRIPT_VARS(sid);

    hashtab_free_contents(ht);
    hash_init(ht);
    delete_script_functions(sid);

    
    free_imports_and_script_vars(sid);
}
#endif


    void
ex_vim9script(exarg_T *eap UNUSED)
{
#ifdef FEAT_EVAL
    int		    sid = current_sctx.sc_sid;
    scriptitem_T    *si;
    int		    found_noclear = FALSE;
    char_u	    *p;

    if (!sourcing_a_script(eap))
    {
	emsg(_(e_vim9script_can_only_be_used_in_script));
	return;
    }

    si = SCRIPT_ITEM(sid);
    if (si->sn_state == SN_STATE_HAD_COMMAND)
    {
	emsg(_(e_vim9script_must_be_first_command_in_script));
	return;
    }

    for (p = eap->arg; !IS_WHITE_OR_NUL(*p); p = skipwhite(skiptowhite(p)))
    {
	if (STRNCMP(p, "noclear", 7) == 0 && IS_WHITE_OR_NUL(p[7]))
	{
	    if (found_noclear)
	    {
		semsg(_(e_duplicate_argument_str), p);
		return;
	    }
	    found_noclear = TRUE;
	}
	else
	{
	    semsg(_(e_invalid_argument_str), eap->arg);
	    return;
	}
    }

    if (si->sn_state == SN_STATE_RELOAD && !found_noclear)
	
	
	clear_vim9_scriptlocal_vars(sid);
    si->sn_state = SN_STATE_HAD_COMMAND;

    
    if (si->sn_autoload_prefix == NULL)
	si->sn_autoload_prefix = get_autoload_prefix(si);

    current_sctx.sc_version = SCRIPT_VERSION_VIM9;
    si->sn_version = SCRIPT_VERSION_VIM9;

    if (STRCMP(p_cpo, CPO_VIM) != 0)
    {
	si->sn_save_cpo = vim_strsave(p_cpo);
	set_option_value_give_err((char_u *)"cpo",
					 0L, (char_u *)CPO_VIM, OPT_NO_REDRAW);
    }
#else
    
    
    current_sctx.sc_version = SCRIPT_VERSION_VIM9;
#endif
}

#if defined(FEAT_EVAL) || defined(PROTO)

    int
not_in_vim9(exarg_T *eap)
{
    if (in_vim9script())
	switch (eap->cmdidx)
	{
	    case CMD_k:
		if (eap->addr_count > 0)
		{
		    emsg(_(e_no_range_allowed));
		    return FAIL;
		}
		
	    case CMD_append:
	    case CMD_change:
	    case CMD_insert:
	    case CMD_open:
	    case CMD_t:
	    case CMD_xit:
		semsg(_(e_command_not_supported_in_vim9_script_missing_var_str), eap->cmd);
		return FAIL;
	    default: break;
	}
    return OK;
}


    int
vim9_bad_comment(char_u *p)
{
    if (p[0] == '#' && p[1] == '{' && p[2] != '{')
    {
	if (!did_emsg)
	    emsg(_(e_cannot_use_hash_curly_to_start_comment));
	return TRUE;
    }
    return FALSE;
}
#endif


    int
vim9_comment_start(char_u *p)
{
#ifdef FEAT_EVAL
    return p[0] == '#' && !vim9_bad_comment(p);
#else
    return p[0] == '#' && (p[1] != '{' || p[2] == '{');
#endif
}

#if defined(FEAT_EVAL) || defined(PROTO)


    void
ex_incdec(exarg_T *eap)
{
    char_u	*cmd = eap->cmd;
    char_u	*nextcmd = eap->nextcmd;
    size_t	len = STRLEN(eap->cmd) + 8;

    if (VIM_ISWHITE(cmd[2]))
    {
	semsg(_(e_no_white_space_allowed_after_str_str),
			 eap->cmdidx == CMD_increment ? "++" : "--", eap->cmd);
	return;
    }

    
    
    eap->cmd = alloc(len);
    if (eap->cmd == NULL)
	return;
    vim_snprintf((char *)eap->cmd, len, "%s %c= 1 |", cmd + 2,
				     eap->cmdidx == CMD_increment ? '+' : '-');
    eap->arg = eap->cmd;
    eap->cmdidx = CMD_var;
    eap->nextcmd = NULL;
    ex_let(eap);
    vim_free(eap->cmd);
    eap->cmd = cmd;
    eap->nextcmd = nextcmd;
}


    void
ex_export(exarg_T *eap UNUSED)
{
    
    emsg(_(e_export_can_only_be_used_in_vim9script));
}


    static imported_T *
new_imported(garray_T *gap)
{
    if (ga_grow(gap, 1) == OK)
	return ((imported_T *)gap->ga_data + gap->ga_len++);
    return NULL;
}


    static void
free_all_script_vars(scriptitem_T *si)
{
    int		todo;
    hashtab_T	*ht = &si->sn_all_vars.dv_hashtab;
    hashitem_T	*hi;
    sallvar_T	*sav;
    sallvar_T	*sav_next;
    int		idx;

    hash_lock(ht);
    todo = (int)ht->ht_used;
    FOR_ALL_HASHTAB_ITEMS(ht, hi, todo)
    {
	if (!HASHITEM_EMPTY(hi))
	{
	    --todo;

	    
	    
	    sav = HI2SAV(hi);
	    while (sav != NULL)
	    {
		sav_next = sav->sav_next;
		if (sav->sav_di == NULL)
		    clear_tv(&sav->sav_tv);
		vim_free(sav);
		sav = sav_next;
	    }
	}
    }
    hash_clear(ht);
    hash_init(ht);

    for (idx = 0; idx < si->sn_var_vals.ga_len; ++idx)
    {
	svar_T    *sv = ((svar_T *)si->sn_var_vals.ga_data) + idx;

	if (sv->sv_flags & SVFLAG_TYPE_ALLOCATED)
	    free_type(sv->sv_type);
    }
    ga_clear(&si->sn_var_vals);

    
    si->sn_script_seq = current_sctx.sc_seq;
}


    void
free_imports_and_script_vars(int sid)
{
    scriptitem_T    *si = SCRIPT_ITEM(sid);
    int		    idx;

    for (idx = 0; idx < si->sn_imports.ga_len; ++idx)
    {
	imported_T *imp = ((imported_T *)si->sn_imports.ga_data) + idx;

	vim_free(imp->imp_name);
    }
    ga_clear(&si->sn_imports);

    free_all_script_vars(si);

    clear_type_list(&si->sn_type_list);
}


    void
mark_imports_for_reload(int sid)
{
    scriptitem_T    *si = SCRIPT_ITEM(sid);
    int		    idx;

    for (idx = 0; idx < si->sn_imports.ga_len; ++idx)
    {
	imported_T *imp = ((imported_T *)si->sn_imports.ga_data) + idx;

	imp->imp_flags |= IMP_FLAGS_RELOAD;
    }
}


    static int
handle_import_fname(char_u *fname, int is_autoload, int *sid)
{
    if (is_autoload)
    {
	scriptitem_T	*si;

	*sid = find_script_by_name(fname);
	if (*sid < 0)
	{
	    int error = OK;

	    
	    
	    if (!file_is_readable(fname))
	    {
		semsg(_(mch_isdir(fname) ? e_str_is_directory
					  : e_cannot_read_from_str_2), fname);
		return FAIL;
	    }
	    *sid = get_new_scriptitem_for_fname(&error, fname);
	    if (error == FAIL)
		return FAIL;
	}

	si = SCRIPT_ITEM(*sid);
	si->sn_import_autoload = TRUE;

	if (si->sn_autoload_prefix == NULL)
	    si->sn_autoload_prefix = get_autoload_prefix(si);

	
	if (!override_autoload || si->sn_state != SN_STATE_NOT_LOADED)
	    return OK;
    }
    return do_source(fname, FALSE, DOSO_NONE, sid);
}


    static char_u *
handle_import(
	char_u	    *arg_start,
	garray_T    *gap,
	int	    import_sid,
	evalarg_T   *evalarg,
	void	    *cctx)
{
    char_u	*arg = arg_start;
    char_u	*nextarg;
    int		is_autoload = FALSE;
    int		getnext;
    char_u	*expr_end;
    int		ret = FAIL;
    char_u	*as_name = NULL;
    typval_T	tv;
    int		sid = -2;
    int		res;
    int	start_lnum = SOURCING_LNUM;
    garray_T	*import_gap;
    int		i;

    if (STRNCMP(arg, "autoload", 8) == 0 && VIM_ISWHITE(arg[8]))
    {
	is_autoload = TRUE;
	arg = skipwhite(arg + 8);
    }

    
    
    ret = eval0_retarg(arg, &tv, NULL, evalarg, &expr_end);
    if (ret == FAIL)
	goto erret;
    if (tv.v_type != VAR_STRING
		       || tv.vval.v_string == NULL || *tv.vval.v_string == NUL)
    {
	semsg(_(e_invalid_string_for_import_str), arg);
	goto erret;
    }

    
    SOURCING_LNUM = start_lnum;

    
    if (*tv.vval.v_string == '.')
    {
	size_t		len;
	scriptitem_T	*si = SCRIPT_ITEM(current_sctx.sc_sid);
	char_u		*tail = gettail(si->sn_name);
	char_u		*from_name;
	int		sourced_from_nofile_buf = FALSE;

	if (STRNCMP(si->sn_name, ":source buffer=", 15) == 0)
	    sourced_from_nofile_buf = TRUE;

	if (!sourced_from_nofile_buf)
	{
	    
	    len = STRLEN(si->sn_name) - STRLEN(tail) + STRLEN(tv.vval.v_string) + 2;
	    from_name = alloc((int)len);
	    if (from_name == NULL)
		goto erret;
	    vim_strncpy(from_name, si->sn_name, tail - si->sn_name);
	    add_pathsep(from_name);
	    STRCAT(from_name, tv.vval.v_string);
	}
	else
	    from_name = vim_strsave(tv.vval.v_string);
	simplify_filename(from_name);

	res = handle_import_fname(from_name, is_autoload, &sid);
	vim_free(from_name);
    }
    else if (mch_isFullName(tv.vval.v_string)
#ifdef BACKSLASH_IN_FILENAME
	    
	    
	    || *tv.vval.v_string == '/' || *tv.vval.v_string == '\\'
#endif
	    )
    {
	
	res = handle_import_fname(tv.vval.v_string, is_autoload, &sid);
    }
    else if (is_autoload)
    {
	size_t	    len = 9 + STRLEN(tv.vval.v_string) + 1;
	char_u	    *from_name;

	
	from_name = alloc((int)len);
	if (from_name == NULL)
	    goto erret;
	vim_snprintf((char *)from_name, len, "autoload/%s", tv.vval.v_string);
	
	sid = find_script_in_rtp(from_name);
	vim_free(from_name);
	if (SCRIPT_ID_VALID(sid))
	{
	    scriptitem_T    *si = SCRIPT_ITEM(sid);

	    if (si->sn_autoload_prefix == NULL)
		si->sn_autoload_prefix = get_autoload_prefix(si);
	    res = OK;
	    if (override_autoload && si->sn_state == SN_STATE_NOT_LOADED)
		
		(void)do_source(si->sn_name, FALSE, DOSO_NONE, NULL);
	}
	else
	    res = FAIL;
    }
    else
    {
	size_t	    len = 7 + STRLEN(tv.vval.v_string) + 1;
	char_u	    *from_name;

	
	from_name = alloc((int)len);
	if (from_name == NULL)
	    goto erret;
	vim_snprintf((char *)from_name, len, "import/%s", tv.vval.v_string);
	res = source_in_path(p_rtp, from_name, DIP_NOAFTER, &sid);
	vim_free(from_name);
    }

    if (res == FAIL || sid <= 0)
    {
	semsg(_(is_autoload && sid == -2
		    ? e_autoload_import_cannot_use_absolute_or_relative_path
		    : e_could_not_import_str), tv.vval.v_string);
	goto erret;
    }

    if (sid == current_sctx.sc_sid)
    {
	emsg(_(e_script_cannot_import_itself));
	goto erret;
    }

    import_gap = gap != NULL ? gap : &SCRIPT_ITEM(import_sid)->sn_imports;
    for (i = 0; i < import_gap->ga_len; ++i)
    {
	imported_T *import = (imported_T *)import_gap->ga_data + i;

	if (import->imp_sid == sid)
	{
	    if (import->imp_flags & IMP_FLAGS_RELOAD)
	    {
		
		import->imp_flags &= ~IMP_FLAGS_RELOAD;
		break;
	    }
	    semsg(_(e_cannot_import_same_script_twice_str), tv.vval.v_string);
	    goto erret;
	}
    }

    
    nextarg = eval_next_non_blank(expr_end, evalarg, &getnext);
    if (STRNCMP("as", nextarg, 2) == 0 && IS_WHITE_OR_NUL(nextarg[2]))
    {
	char_u *p;

	if (getnext)
	    arg = eval_next_line(expr_end, evalarg);
	else
	    arg = nextarg;

	
	
	arg = skipwhite(arg + 2);
	p = arg;
	if (eval_isnamec1(*arg))
	    while (ASCII_ISALNUM(*arg) || *arg == '_')
		++arg;
	if (p == arg || !IS_WHITE_OR_NUL(*arg))
	{
	    semsg(_(e_syntax_error_in_import_str), p);
	    goto erret;
	}
	as_name = vim_strnsave(p, arg - p);
	arg = skipwhite(arg);
    }
    else
    {
	char_u *p = gettail(tv.vval.v_string);
	char_u *end = (char_u *)strstr((char *)p, ".vim");

	if (!ends_excmd2(arg_start, expr_end))
	{
	    semsg(_(e_trailing_characters_str), expr_end);
	    goto erret;
	}
	if (end == NULL || end[4] != NUL)
	{
	    semsg(_(e_imported_script_must_use_as_or_end_in_dot_vim_str), p);
	    goto erret;
	}
	if (end == p)
	{
	    semsg(_(e_cannot_import_dot_vim_without_using_as), p);
	    goto erret;
	}
	as_name = vim_strnsave(p, end - p);
    }

    if (as_name != NULL)
    {
	imported_T  *imported;

	imported = find_imported(as_name, STRLEN(as_name), FALSE);
	if (imported != NULL && imported->imp_sid != sid)
	{
	    semsg(_(e_name_already_defined_str), as_name);
	    goto erret;
	}
	else if (imported == NULL
		&& check_defined(as_name, STRLEN(as_name), cctx, NULL,
								FALSE) == FAIL)
	    goto erret;

	if (imported == NULL)
	{
	    imported = new_imported(import_gap);
	    if (imported == NULL)
		goto erret;
	    imported->imp_name = as_name;
	    as_name = NULL;
	    imported->imp_sid = sid;
	    if (is_autoload)
		imported->imp_flags = IMP_FLAGS_AUTOLOAD;
	}
    }

erret:
    clear_tv(&tv);
    vim_free(as_name);
    return arg;
}


    void
ex_import(exarg_T *eap)
{
    char_u	*cmd_end;
    evalarg_T	evalarg;

    if (!sourcing_a_script(eap))
    {
	emsg(_(e_import_can_only_be_used_in_script));
	return;
    }
    fill_evalarg_from_eap(&evalarg, eap, eap->skip);

    cmd_end = handle_import(eap->arg, NULL, current_sctx.sc_sid,
							       &evalarg, NULL);
    if (cmd_end != NULL)
	set_nextcmd(eap, cmd_end);
    clear_evalarg(&evalarg, eap);
}


    void
import_check_sourced_sid(int *sid)
{
    scriptitem_T *script = SCRIPT_ITEM(*sid);

    if (script->sn_sourced_sid > 0)
	*sid = script->sn_sourced_sid;
}


    int
find_exported(
	int	    sid,
	char_u	    *name,
	ufunc_T	    **ufunc,
	type_T	    **type,
	cctx_T	    *cctx,
	cstack_T    *cstack,
	int	    verbose)
{
    int		idx = -1;
    svar_T	*sv;
    scriptitem_T *script = SCRIPT_ITEM(sid);

    *ufunc = NULL;

    if (script->sn_import_autoload && script->sn_state == SN_STATE_NOT_LOADED)
    {
	if (do_source(script->sn_name, FALSE, DOSO_NONE, NULL) == FAIL)
	{
	    semsg(_(e_cant_open_file_str), script->sn_name);
	    return -1;
	}
    }

    
    idx = get_script_item_idx(sid, name, 0, cctx, cstack);
    if (idx >= 0)
    {
	sv = ((svar_T *)script->sn_var_vals.ga_data) + idx;
	if ((sv->sv_flags & SVFLAG_EXPORTED) == 0)
	{
	    if (verbose)
		semsg(_(e_item_not_exported_in_script_str), name);
	    return -1;
	}
	*type = sv->sv_type;
    }
    else
    {
	size_t	len = STRLEN(name);
	char_u	buffer[200];
	char_u	*funcname;

	
	
	
	if (script->sn_autoload_prefix != NULL)
	    len += STRLEN(script->sn_autoload_prefix) + 2;
	else
	    len += 15;

	if (len < sizeof(buffer))
	    funcname = buffer;
	else
	{
	    funcname = alloc(len);
	    if (funcname == NULL)
		return -1;
	}
	if (script->sn_autoload_prefix != NULL)
	{
	    sprintf((char *)funcname, "%s%s", script->sn_autoload_prefix, name);
	}
	else
	{
	    funcname[0] = K_SPECIAL;
	    funcname[1] = KS_EXTRA;
	    funcname[2] = (int)KE_SNR;
	    sprintf((char *)funcname + 3, "%ld_%s", (int)sid, name);
	}
	*ufunc = find_func(funcname, FALSE);

	if (*ufunc == NULL)
	{
	    if (verbose)
	    {
		ufunc_T *alt_ufunc = NULL;

		if (script->sn_autoload_prefix != NULL)
		{
		    
		    funcname[0] = K_SPECIAL;
		    funcname[1] = KS_EXTRA;
		    funcname[2] = (int)KE_SNR;
		    sprintf((char *)funcname + 3, "%ld_%s", (int)sid, name);
		    alt_ufunc = find_func(funcname, FALSE);
		}
		if (alt_ufunc != NULL)
		    semsg(_(e_item_not_exported_in_script_str), name);
		else
		    semsg(_(e_item_not_found_in_script_str), name);
	    }
	}
	else if (((*ufunc)->uf_flags & FC_EXPORT) == 0)
	{
	    if (verbose)
		semsg(_(e_item_not_exported_in_script_str), name);
	    *ufunc = NULL;
	}
	if (funcname != buffer)
	    vim_free(funcname);
    }

    return idx;
}


    char_u *
vim9_declare_scriptvar(exarg_T *eap, char_u *arg)
{
    char_u	    *p;
    char_u	    *name;
    scriptitem_T    *si = SCRIPT_ITEM(current_sctx.sc_sid);
    type_T	    *type;
    typval_T	    init_tv;

    if (eap->cmdidx == CMD_final || eap->cmdidx == CMD_const)
    {
	if (eap->cmdidx == CMD_final)
	    emsg(_(e_final_requires_a_value));
	else
	    emsg(_(e_const_requires_a_value));
	return arg + STRLEN(arg);
    }

    
    if (!eval_isnamec1(*arg))
    {
	semsg(_(e_invalid_argument_str), arg);
	return arg + STRLEN(arg);
    }

    for (p = arg + 1; *p != NUL && eval_isnamec(*p); MB_PTR_ADV(p))
	if (*p == ':' && (VIM_ISWHITE(p[1]) || p != arg + 1))
	    break;

    if (*p != ':')
    {
	emsg(_(e_type_or_initialization_required));
	return arg + STRLEN(arg);
    }
    if (!VIM_ISWHITE(p[1]))
    {
	semsg(_(e_white_space_required_after_str_str), ":", p);
	return arg + STRLEN(arg);
    }
    name = vim_strnsave(arg, p - arg);

    
    p = skipwhite(p + 1);
    type = parse_type(&p, &si->sn_type_list, TRUE);
    if (type == NULL || check_reserved_name(name, FALSE) == FAIL)
    {
	vim_free(name);
	return p;
    }

    
    CLEAR_FIELD(init_tv);
    if (type->tt_type == VAR_ANY)
	
	init_tv.v_type = VAR_NUMBER;
    else
	init_tv.v_type = type->tt_type;
    set_var_const(name, 0, type, &init_tv, FALSE, ASSIGN_INIT, 0);

    vim_free(name);
    return p;
}


    void
update_vim9_script_var(
	int	    create,
	dictitem_T  *di,
	char_u	    *name,
	int	    flags,
	typval_T    *tv,
	type_T	    **type,
	int	    do_member)
{
    scriptitem_T    *si = SCRIPT_ITEM(current_sctx.sc_sid);
    hashitem_T	    *hi;
    svar_T	    *sv = NULL;

    if (create)
    {
	sallvar_T   *newsav;
	sallvar_T   *sav = NULL;

	
	
	if (ga_grow(&si->sn_var_vals, 1) == FAIL)
	    return;

	hi = hash_find(&si->sn_all_vars.dv_hashtab, name);
	if (!HASHITEM_EMPTY(hi))
	{
	    
	    
	    for (sav = HI2SAV(hi); ; sav = sav->sav_next)
	    {
		if (sav->sav_block_id == si->sn_current_block_id)
		{
		    
		    sv = ((svar_T *)si->sn_var_vals.ga_data)
						       + sav->sav_var_vals_idx;
		    
		    if (sv->sv_tv == &sav->sav_tv)
		    {
			clear_tv(&sav->sav_tv);
			sv->sv_tv = &di->di_tv;
			sav->sav_di = di;
		    }
		    break;
		}
		if (sav->sav_next == NULL)
		    break;
	    }
	}

	if (sv == NULL)
	{
	    
	    
	    sv = ((svar_T *)si->sn_var_vals.ga_data) + si->sn_var_vals.ga_len;
	    newsav = (sallvar_T *)alloc_clear(
			      offsetof(sallvar_T, sav_key) + STRLEN(name) + 1);
	    if (newsav == NULL)
		return;

	    sv->sv_tv = &di->di_tv;
	    sv->sv_const = (flags & ASSIGN_FINAL) ? ASSIGN_FINAL
				   : (flags & ASSIGN_CONST) ? ASSIGN_CONST : 0;
	    sv->sv_flags = is_export ? SVFLAG_EXPORTED : 0;
	    if ((flags & ASSIGN_INIT) == 0)
		sv->sv_flags |= SVFLAG_ASSIGNED;
	    newsav->sav_var_vals_idx = si->sn_var_vals.ga_len;
	    ++si->sn_var_vals.ga_len;
	    
	    STRCPY(&newsav->sav_key[0], name);
	    sv->sv_name = newsav->sav_key;
	    newsav->sav_di = di;
	    newsav->sav_block_id = si->sn_current_block_id;

	    if (HASHITEM_EMPTY(hi))
		
		hash_add(&si->sn_all_vars.dv_hashtab, newsav->sav_key,
							       "add variable");
	    else if (sav != NULL)
		
		sav->sav_next = newsav;
	}
    }
    else
    {
	sv = find_typval_in_script(&di->di_tv, 0, TRUE);
    }
    if (sv != NULL)
    {
	if (*type == NULL)
	    *type = typval2type(tv, get_copyID(), &si->sn_type_list,
					       do_member ? TVTT_DO_MEMBER : 0);
	else if ((flags & ASSIGN_INIT) == 0
		&& (*type)->tt_type == VAR_BLOB && tv->v_type == VAR_BLOB
						    && tv->vval.v_blob == NULL)
	{
	    
	    *type = &t_blob_null;
	}
	if (sv->sv_flags & SVFLAG_TYPE_ALLOCATED)
	    free_type(sv->sv_type);
	if (*type != NULL && ((*type)->tt_type == VAR_FUNC
					   || (*type)->tt_type == VAR_PARTIAL))
	{
	    
	    
	    
	    sv->sv_type = alloc_type(*type);
	    sv->sv_flags |= SVFLAG_TYPE_ALLOCATED;
	}
	else
	{
	    sv->sv_type = *type;
	    sv->sv_flags &= ~SVFLAG_TYPE_ALLOCATED;
	}
    }

    
    is_export = FALSE;
}


    void
hide_script_var(scriptitem_T *si, int idx, int func_defined)
{
    svar_T	*sv = ((svar_T *)si->sn_var_vals.ga_data) + idx;
    hashtab_T	*script_ht = get_script_local_ht();
    hashtab_T	*all_ht = &si->sn_all_vars.dv_hashtab;
    hashitem_T	*script_hi;
    hashitem_T	*all_hi;

    
    
    
    script_hi = hash_find(script_ht, sv->sv_name);
    all_hi = hash_find(all_ht, sv->sv_name);

    if (HASHITEM_EMPTY(script_hi) || HASHITEM_EMPTY(all_hi))
	return;

    dictitem_T	*di = HI2DI(script_hi);
    sallvar_T	*sav = HI2SAV(all_hi);
    sallvar_T	*sav_prev = NULL;

    
    
    while (sav != NULL && sav->sav_var_vals_idx != idx)
    {
	sav_prev = sav;
	sav = sav->sav_next;
    }
    if (sav == NULL)
	return;

    if (func_defined)
    {
	
	sav->sav_tv = di->di_tv;
	di->di_tv.v_type = VAR_UNKNOWN;
	sav->sav_flags = di->di_flags;
	sav->sav_di = NULL;
	sv->sv_tv = &sav->sav_tv;
    }
    else
    {
	if (sav_prev == NULL)
	    hash_remove(all_ht, all_hi, "hide variable");
	else
	    sav_prev->sav_next = sav->sav_next;
	sv->sv_name = NULL;
	vim_free(sav);
    }
    delete_var(script_ht, script_hi);
}


    svar_T *
find_typval_in_script(typval_T *dest, scid_T sid, int must_find)
{
    scriptitem_T    *si = SCRIPT_ITEM(sid == 0 ? current_sctx.sc_sid : sid);
    int		    idx;

    if (si->sn_version != SCRIPT_VERSION_VIM9)
	
	return NULL;

    
    
    for (idx = si->sn_var_vals.ga_len - 1; idx >= 0; --idx)
    {
	svar_T    *sv = ((svar_T *)si->sn_var_vals.ga_data) + idx;

	
	
	if (sv->sv_name != NULL && sv->sv_tv == dest)
	    return sv;
    }
    if (must_find)
	iemsg("find_typval_in_script(): not found");
    return NULL;
}


    int
check_script_var_type(
	svar_T	    *sv,
	typval_T    *value,
	char_u	    *name,
	where_T	    where)
{
    int	    ret;

    if (sv->sv_const != 0)
    {
	semsg(_(e_cannot_change_readonly_variable_str), name);
	return FAIL;
    }
    ret = check_typval_type(sv->sv_type, value, where);
    if (ret == OK && need_convert_to_bool(sv->sv_type, value))
    {
	int	val = tv2bool(value);

	clear_tv(value);
	value->v_type = VAR_BOOL;
	value->v_lock = 0;
	value->vval.v_number = val ? VVAL_TRUE : VVAL_FALSE;
    }
    return ret;
}


static char *reserved[] = {
    "true",
    "false",
    "null",
    "null_blob",
    "null_dict",
    "null_function",
    "null_list",
    "null_partial",
    "null_string",
    "null_channel",
    "null_job",
    "super",
    "this",
    NULL
};

    int
check_reserved_name(char_u *name, int is_objm_access)
{
    int idx;

    for (idx = 0; reserved[idx] != NULL; ++idx)
	if (STRCMP(reserved[idx], name) == 0
		&& !(STRCMP("this", name) == 0 && is_objm_access))
	{
	    semsg(_(e_cannot_use_reserved_name_str), name);
	    return FAIL;
	}
    return OK;
}

#endif 
