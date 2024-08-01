



#define USING_FLOAT_STUFF
#include "vim.h"

#if defined(FEAT_EVAL) || defined(PROTO)


#ifdef PROTO
# include "vim9.h"
#endif


static int paren_follows_after_expr = 0;


    int
generate_ppconst(cctx_T *cctx, ppconst_T *ppconst)
{
    int	    i;
    int	    ret = OK;
    int	    save_skip = cctx->ctx_skip;

    cctx->ctx_skip = SKIP_NOT;
    for (i = 0; i < ppconst->pp_used; ++i)
	if (generate_tv_PUSH(cctx, &ppconst->pp_tv[i]) == FAIL)
	    ret = FAIL;
    ppconst->pp_used = 0;
    cctx->ctx_skip = save_skip;
    return ret;
}


    static int
check_ppconst_bool(ppconst_T *ppconst)
{
    if (ppconst->pp_used > 0)
    {
	typval_T    *tv = &ppconst->pp_tv[ppconst->pp_used - 1];
	where_T	    where = WHERE_INIT;

	return check_typval_type(&t_bool, tv, where);
    }
    return OK;
}


    void
clear_ppconst(ppconst_T *ppconst)
{
    int	    i;

    for (i = 0; i < ppconst->pp_used; ++i)
	clear_tv(&ppconst->pp_tv[i]);
    ppconst->pp_used = 0;
}


    int
compile_member(int is_slice, int *keeping_dict, cctx_T *cctx)
{
    type2_T	*typep;
    garray_T	*stack = &cctx->ctx_type_stack;
    vartype_T	vartype;
    type_T	*idxtype;

    
    
    
    
    typep = (((type2_T *)stack->ga_data) + stack->ga_len - (is_slice ? 3 : 2));
    vartype = typep->type_curr->tt_type;
    idxtype = (((type2_T *)stack->ga_data) + stack->ga_len - 1)->type_curr;
    
    if ((typep->type_curr->tt_type == VAR_ANY
		|| typep->type_curr->tt_type == VAR_UNKNOWN)
						       && idxtype == &t_string)
	vartype = VAR_DICT;
    if (vartype == VAR_STRING || vartype == VAR_LIST || vartype == VAR_BLOB)
    {
	if (need_type(idxtype, &t_number, FALSE,
					    -1, 0, cctx, FALSE, FALSE) == FAIL)
	    return FAIL;
	if (is_slice)
	{
	    idxtype = get_type_on_stack(cctx, 1);
	    if (need_type(idxtype, &t_number, FALSE,
					    -2, 0, cctx, FALSE, FALSE) == FAIL)
		return FAIL;
	}
    }

    if (vartype == VAR_DICT)
    {
	if (is_slice)
	{
	    emsg(_(e_cannot_slice_dictionary));
	    return FAIL;
	}
	if (typep->type_curr->tt_type == VAR_DICT)
	{
	    typep->type_curr = typep->type_curr->tt_member;
	    if (typep->type_curr == &t_unknown)
		
		typep->type_curr = &t_any;
	    if (typep->type_decl->tt_type == VAR_DICT)
	    {
		typep->type_decl = typep->type_decl->tt_member;
		if (typep->type_decl == &t_unknown)
		    
		    typep->type_decl = &t_any;
	    }
	    else
		typep->type_decl = typep->type_curr;
	}
	else
	{
	    if (need_type(typep->type_curr, &t_dict_any, FALSE,
					    -2, 0, cctx, FALSE, FALSE) == FAIL)
		return FAIL;
	    typep->type_curr = &t_any;
	    typep->type_decl = &t_any;
	}
	if (may_generate_2STRING(-1, TOSTRING_NONE, cctx) == FAIL
		|| generate_instr_drop(cctx, ISN_MEMBER, 1) == FAIL)
	    return FAIL;
	if (keeping_dict != NULL)
	    *keeping_dict = TRUE;
    }
    else if (vartype == VAR_STRING)
    {
	typep->type_curr = &t_string;
	typep->type_decl = &t_string;
	if ((is_slice
		? generate_instr_drop(cctx, ISN_STRSLICE, 2)
		: generate_instr_drop(cctx, ISN_STRINDEX, 1)) == FAIL)
	    return FAIL;
    }
    else if (vartype == VAR_BLOB)
    {
	if (is_slice)
	{
	    typep->type_curr = &t_blob;
	    typep->type_decl = &t_blob;
	    if (generate_instr_drop(cctx, ISN_BLOBSLICE, 2) == FAIL)
		return FAIL;
	}
	else
	{
	    typep->type_curr = &t_number;
	    typep->type_decl = &t_number;
	    if (generate_instr_drop(cctx, ISN_BLOBINDEX, 1) == FAIL)
		return FAIL;
	}
    }
    else if (vartype == VAR_LIST || typep->type_curr->tt_type == VAR_ANY
				 || typep->type_curr->tt_type == VAR_UNKNOWN)
    {
	if (is_slice)
	{
	    if (generate_instr_drop(cctx,
		     vartype == VAR_LIST ?  ISN_LISTSLICE : ISN_ANYSLICE,
							    2) == FAIL)
		return FAIL;
	    
	    if (typep->type_decl->tt_type == VAR_LIST)
		typep->type_decl = &t_list_any;

	    
	    if (typep->type_curr->tt_flags & TTFLAG_CONST)
	    {
		type_T *type = copy_type(typep->type_curr, cctx->ctx_type_list);

		if (type != typep->type_curr)  
		{
		    type->tt_flags &= ~(TTFLAG_CONST | TTFLAG_STATIC);
		    typep->type_curr = type;
		}
	    }
	}
	else
	{
	    if (typep->type_curr->tt_type == VAR_LIST)
	    {
		typep->type_curr = typep->type_curr->tt_member;
		if (typep->type_curr == &t_unknown)
		    
		    typep->type_curr = &t_any;
		if (typep->type_decl->tt_type == VAR_LIST)
		{
		    typep->type_decl = typep->type_decl->tt_member;
		    if (typep->type_decl == &t_unknown)
			
			typep->type_decl = &t_any;
		}
		else
			typep->type_decl = typep->type_curr;
	    }
	    if (generate_instr_drop(cctx,
			vartype == VAR_LIST ?  ISN_LISTINDEX : ISN_ANYINDEX, 1)
								       == FAIL)
		return FAIL;
	}
    }
    else
    {
	switch (vartype)
	{
	    case VAR_FUNC:
	    case VAR_PARTIAL:
		emsg(_(e_cannot_index_a_funcref));
		break;
	    case VAR_BOOL:
	    case VAR_SPECIAL:
	    case VAR_JOB:
	    case VAR_CHANNEL:
	    case VAR_INSTR:
	    case VAR_CLASS:
	    case VAR_OBJECT:
	    case VAR_TYPEALIAS:
	    case VAR_UNKNOWN:
	    case VAR_ANY:
	    case VAR_VOID:
		emsg(_(e_cannot_index_special_variable));
		break;
	    default:
		emsg(_(e_string_list_dict_or_blob_required));
	}
	return FAIL;
    }
    return OK;
}


    static int
inside_class_hierarchy(cctx_T *cctx_arg, class_T *cl)
{
    for (cctx_T *cctx = cctx_arg; cctx != NULL; cctx = cctx->ctx_outer)
    {
	if (cctx->ctx_ufunc != NULL && cctx->ctx_ufunc->uf_class != NULL)
	{
	    class_T	*clp = cctx->ctx_ufunc->uf_class;
	    while (clp != NULL)
	    {
		if (clp == cl)
		    return TRUE;
		clp = clp->class_extends;
	    }
	}
    }

    return FALSE;
}


    static int
compile_class_object_index(cctx_T *cctx, char_u **arg, type_T *type)
{
    int m_idx;

    if (VIM_ISWHITE((*arg)[1]))
    {
	semsg(_(e_no_white_space_allowed_after_str_str), ".", *arg);
	return FAIL;
    }

    class_T *cl = type->tt_class;
    int is_super = type->tt_flags & TTFLAG_SUPER;
    if (type == &t_super)
    {
	if (cctx->ctx_ufunc == NULL || cctx->ctx_ufunc->uf_class == NULL)
	{
	    emsg(_(e_using_super_not_in_class_method));
	    return FAIL;
	}
	is_super = TRUE;
	cl = cctx->ctx_ufunc->uf_class;
	
	--cctx->ctx_type_stack.ga_len;
    }
    else if (type->tt_type == VAR_CLASS)
    {
	garray_T *instr = &cctx->ctx_instr;
	if (instr->ga_len > 0)
	{
	    isn_T *isn = ((isn_T *)instr->ga_data) + instr->ga_len - 1;
	    if (isn->isn_type == ISN_LOADSCRIPT)
	    {
		
		
		--instr->ga_len;
		vim_free(isn->isn_arg.script.scriptref);
	    }
	}
    }

    if (cl == NULL)
    {
	
	emsg(_(e_incomplete_type));
	return FAIL;
    }

    ++*arg;
    char_u *name = *arg;
    char_u *name_end = find_name_end(name, NULL, NULL, FNE_CHECK_START);
    if (name_end == name)
	return FAIL;
    size_t len = name_end - name;

    if (*name_end == '(')
    {
	int	function_count;
	int	child_count;
	ufunc_T	**functions;

	if (type->tt_type == VAR_CLASS)
	{
	    function_count = cl->class_class_function_count;
	    child_count = cl->class_class_function_count_child;
	    functions = cl->class_class_functions;
	}
	else
	{
	    
	    function_count = cl->class_obj_method_count;
	    child_count = cl->class_obj_method_count_child;
	    functions = cl->class_obj_methods;
	}

	ufunc_T *ufunc = NULL;
	int fi;
	for (fi = is_super ? child_count : 0; fi < function_count; ++fi)
	{
	    ufunc_T *fp = functions[fi];
	    
	    
	    char_u *ufname = (char_u *)fp->uf_name;
	    if (STRNCMP(name, ufname, len) == 0 && ufname[len] == NUL)
	    {
		ufunc = fp;
		break;
	    }
	}
	ocmember_T  *ocm = NULL;
	if (ufunc == NULL)
	{
	    
	    ocm = member_lookup(cl, type->tt_type, name, len, &m_idx);
	    if (ocm == NULL || ocm->ocm_type->tt_type != VAR_FUNC)
	    {
		method_not_found_msg(cl, type->tt_type, name, len);
		return FAIL;
	    }
	    if (type->tt_type == VAR_CLASS)
	    {
		
		--cctx->ctx_type_stack.ga_len;
		if (generate_CLASSMEMBER(cctx, TRUE, cl, m_idx) == FAIL)
		    return FAIL;
	    }
	    else
	    {
		if (generate_GET_OBJ_MEMBER(cctx, m_idx, ocm->ocm_type) ==
									FAIL)
		    return FAIL;
	    }
	}

	
	
	
	
	if (ocm == NULL && *ufunc->uf_name == '_' &&
		((type->tt_type == VAR_OBJECT
		  && !inside_class_hierarchy(cctx, cl))
		 || (type->tt_type == VAR_CLASS
		     && cctx->ctx_ufunc->uf_class != cl)))
	{
	    semsg(_(e_cannot_access_protected_method_str), name);
	    return FAIL;
	}

	
	
	
	*arg = skipwhite(name_end + 1);
	int argcount = 0;
	if (compile_arguments(arg, cctx, &argcount, CA_NOT_SPECIAL) == FAIL)
	    return FAIL;

	if (ocm != NULL)
	    return generate_PCALL(cctx, argcount, name, ocm->ocm_type, TRUE);
	if (type->tt_type == VAR_OBJECT
		     && (cl->class_flags & (CLASS_INTERFACE | CLASS_EXTENDED)))
	    return generate_CALL(cctx, ufunc, cl, fi, argcount);
	return generate_CALL(cctx, ufunc, NULL, 0, argcount);
    }

    if (type->tt_type == VAR_OBJECT)
    {
	ocmember_T *m = object_member_lookup(cl, name, len, &m_idx);
	if (m_idx >= 0)
	{
	    if (*name == '_' && !inside_class(cctx, cl))
	    {
		emsg_var_cl_define(e_cannot_access_protected_variable_str,
							m->ocm_name, 0, cl);
		return FAIL;
	    }

	    *arg = name_end;
	    if (cl->class_flags & (CLASS_INTERFACE | CLASS_EXTENDED))
		return generate_GET_ITF_MEMBER(cctx, cl, m_idx, m->ocm_type);
	    return generate_GET_OBJ_MEMBER(cctx, m_idx, m->ocm_type);
	}

	
	m_idx = object_method_idx(cl, name, len);
	if (m_idx >= 0)
	{
	    ufunc_T *fp = cl->class_obj_methods[m_idx];
	    
	    if (*name == '_' && !inside_class(cctx, cl))
	    {
		semsg(_(e_cannot_access_protected_method_str), fp->uf_name);
		return FAIL;
	    }
	    *arg = name_end;
	    
	    --cctx->ctx_type_stack.ga_len;
	    return generate_FUNCREF(cctx, fp, cl, TRUE, m_idx, NULL);
	}

	member_not_found_msg(cl, VAR_OBJECT, name, len);
    }
    else
    {
	
	int idx;
	ocmember_T *m = class_member_lookup(cl, name, len, &idx);
	if (m != NULL)
	{
	    
	    
	    
	    if (*name == '_' && cctx->ctx_ufunc->uf_class != cl)
	    {
		emsg_var_cl_define(e_cannot_access_protected_variable_str,
							m->ocm_name, 0, cl);
		return FAIL;
	    }

	    *arg = name_end;
	    
	    --cctx->ctx_type_stack.ga_len;
	    return generate_CLASSMEMBER(cctx, TRUE, cl, idx);
	}

	
	m_idx = class_method_idx(cl, name, len);
	if (m_idx >= 0)
	{
	    ufunc_T *fp = cl->class_class_functions[m_idx];
	    
	    if (*name == '_' && !inside_class(cctx, cl))
	    {
		semsg(_(e_cannot_access_protected_method_str), fp->uf_name);
		return FAIL;
	    }
	    *arg = name_end;
	    
	    --cctx->ctx_type_stack.ga_len;
	    return generate_FUNCREF(cctx, fp, cl, FALSE, m_idx, NULL);
	}

	member_not_found_msg(cl, VAR_CLASS, name, len);
    }

    return FAIL;
}


    int
compile_load_scriptvar(
	cctx_T *cctx,
	char_u *name,	    
	char_u *start,	    
	char_u **end)	    
{
    scriptitem_T    *si;
    int		    idx;
    imported_T	    *import;

    if (!SCRIPT_ID_VALID(current_sctx.sc_sid))
	return FAIL;
    si = SCRIPT_ITEM(current_sctx.sc_sid);
    idx = get_script_item_idx(current_sctx.sc_sid, name, 0, cctx, NULL);
    if (idx >= 0)
    {
	svar_T		*sv = ((svar_T *)si->sn_var_vals.ga_data) + idx;

	generate_VIM9SCRIPT(cctx, ISN_LOADSCRIPT,
					current_sctx.sc_sid, idx, sv->sv_type);
	return OK;
    }

    import = end == NULL ? NULL : find_imported(name, 0, FALSE);
    if (import != NULL)
    {
	char_u	*p = skipwhite(*end);
	char_u	*exp_name;
	int	cc;
	ufunc_T	*ufunc = NULL;
	type_T	*type;
	int	done = FALSE;
	int	res = OK;

	check_script_symlink(import->imp_sid);
	import_check_sourced_sid(&import->imp_sid);

	
	if (*p != '.')
	{
	    semsg(_(e_expected_dot_after_name_str), start);
	    return FAIL;
	}
	++p;
	if (VIM_ISWHITE(*p))
	{
	    emsg(_(e_no_white_space_allowed_after_dot));
	    return FAIL;
	}

	
	exp_name = p;
	while (eval_isnamec(*p))
	    ++p;
	cc = *p;
	*p = NUL;

	si = SCRIPT_ITEM(import->imp_sid);
	if (si->sn_import_autoload && si->sn_state == SN_STATE_NOT_LOADED)
	    
	    
	    res = generate_SOURCE(cctx, import->imp_sid);

	if (res == OK)
	{
	    if (si->sn_autoload_prefix != NULL
					&& si->sn_state == SN_STATE_NOT_LOADED)
	    {
		char_u  *auto_name =
				  concat_str(si->sn_autoload_prefix, exp_name);

		
		
		
		if (cc == '(' || paren_follows_after_expr)
		    res = generate_PUSHFUNC(cctx, auto_name, &t_func_any, TRUE);
		else
		    res = generate_AUTOLOAD(cctx, auto_name, &t_any);
		vim_free(auto_name);
		done = TRUE;
	    }
	    else if (si->sn_import_autoload
					&& si->sn_state == SN_STATE_NOT_LOADED)
	    {
		
		
		if (cc == '(' || paren_follows_after_expr)
		{
		    char_u sid_name[MAX_FUNC_NAME_LEN];

		    func_name_with_sid(exp_name, import->imp_sid, sid_name);
		    res = generate_PUSHFUNC(cctx, sid_name, &t_func_any, TRUE);
		}
		else
		    res = generate_OLDSCRIPT(cctx, ISN_LOADEXPORT, exp_name,
						      import->imp_sid, &t_any);
		done = TRUE;
	    }
	    else
	    {
		idx = find_exported(import->imp_sid, exp_name, &ufunc, &type,
							     cctx, NULL, TRUE);
	    }
	}

	*p = cc;
	*end = p;
	if (done)
	    return res;

	if (idx < 0)
	{
	    if (ufunc != NULL)
	    {
		
		generate_PUSHFUNC(cctx, ufunc->uf_name, NULL, TRUE);
		return OK;
	    }
	    return FAIL;
	}

	generate_VIM9SCRIPT(cctx, ISN_LOADSCRIPT,
		import->imp_sid,
		idx,
		type);
	return OK;
    }

    
    
    return generate_OLDSCRIPT(cctx, ISN_LOADS, name, current_sctx.sc_sid,
								       &t_any);
}

    static int
generate_funcref(cctx_T *cctx, char_u *name, int has_g_prefix)
{
    ufunc_T *ufunc = find_func(name, FALSE);
    compiletype_T compile_type;

    
    if (ufunc == NULL || (!has_g_prefix && func_requires_g_prefix(ufunc)))
	return FAIL;

    
    compile_type = get_compile_type(ufunc);
    if (func_needs_compiling(ufunc, compile_type)
	      && compile_def_function(ufunc, TRUE, compile_type, NULL) == FAIL)
	return FAIL;
    return generate_PUSHFUNC(cctx, ufunc->uf_name, ufunc->uf_func_type, TRUE);
}


    int
compile_load(
	char_u **arg,
	char_u *end_arg,
	cctx_T	*cctx,
	int	is_expr,
	int	error)
{
    type_T	*type;
    char_u	*name = NULL;
    char_u	*end = end_arg;
    int		res = FAIL;
    int		prev_called_emsg = called_emsg;

    if (*(*arg + 1) == ':')
    {
	if (end <= *arg + 2)
	{
	    isntype_T  isn_type;

	    
	    switch (**arg)
	    {
		case 'g': isn_type = ISN_LOADGDICT; break;
		case 'w': isn_type = ISN_LOADWDICT; break;
		case 't': isn_type = ISN_LOADTDICT; break;
		case 'b': isn_type = ISN_LOADBDICT; break;
		default:
		    semsg(_(e_namespace_not_supported_str), *arg);
		    goto theend;
	    }
	    if (generate_instr_type(cctx, isn_type, &t_dict_any) == NULL)
		goto theend;
	    res = OK;
	}
	else
	{
	    isntype_T  isn_type = ISN_DROP;

	    
	    name = vim_strnsave(*arg + 2, end - (*arg + 2));
	    if (name == NULL)
		return FAIL;

	    switch (**arg)
	    {
		case 'v': res = generate_LOADV(cctx, name);
			  break;
		case 's': if (current_script_is_vim9())
			  {
			      semsg(_(e_cannot_use_s_colon_in_vim9_script_str),
									 *arg);
			      vim_free(name);
			      return FAIL;
			  }
			  if (is_expr && find_func(name, FALSE) != NULL)
			      res = generate_funcref(cctx, name, FALSE);
			  else
			      res = compile_load_scriptvar(cctx, name,
								   NULL, &end);
			  break;
		case 'g': if (vim_strchr(name, AUTOLOAD_CHAR) == NULL)
			  {
			      if (is_expr && ASCII_ISUPPER(*name)
				       && find_func(name, FALSE) != NULL)
				  res = generate_funcref(cctx, name, TRUE);
			      else
				  isn_type = ISN_LOADG;
			  }
			  else
			  {
			      isn_type = ISN_LOADAUTO;
			      vim_free(name);
			      name = vim_strnsave(*arg, end - *arg);
			      if (name == NULL)
				  return FAIL;
			  }
			  break;
		case 'w': isn_type = ISN_LOADW; break;
		case 't': isn_type = ISN_LOADT; break;
		case 'b': isn_type = ISN_LOADB; break;
		default:  
			  semsg(_(e_namespace_not_supported_str), *arg);
			  goto theend;
	    }
	    if (isn_type != ISN_DROP)
	    {
		
		
		
		res = generate_LOAD(cctx, isn_type, 0, name, &t_any);
	    }
	}
    }
    else
    {
	size_t	    len = end - *arg;
	int	    idx;
	int	    method_idx;
	int	    gen_load = FALSE;
	int	    gen_load_outer = 0;
	int	    outer_loop_depth = -1;
	int	    outer_loop_idx = -1;

	name = vim_strnsave(*arg, end - *arg);
	if (name == NULL)
	    return FAIL;

	if (STRCMP(name, "super") == 0
		&& cctx->ctx_ufunc != NULL
		&& (cctx->ctx_ufunc->uf_flags & (FC_OBJECT|FC_NEW)) == 0)
	{
	    
	    
	    res = push_type_stack(cctx, &t_super);
	    if (*end != '.')
		emsg(_(e_super_must_be_followed_by_dot));
	}
	else if (vim_strchr(name, AUTOLOAD_CHAR) != NULL)
	{
	    script_autoload(name, FALSE);
	    res = generate_LOAD(cctx, ISN_LOADAUTO, 0, name, &t_any);
	}
	else if (arg_exists(*arg, len, &idx, &type, &gen_load_outer, cctx)
									 == OK)
	{
	    if (gen_load_outer == 0)
		gen_load = TRUE;
	}
	else
	{
	    lvar_T  lvar;
	    class_T *cl = NULL;

	    if (lookup_local(*arg, len, &lvar, cctx) == OK)
	    {
		type = lvar.lv_type;
		idx = lvar.lv_idx;
		if (lvar.lv_from_outer != 0)
		{
		    gen_load_outer = lvar.lv_from_outer;
		    outer_loop_depth = lvar.lv_loop_depth;
		    outer_loop_idx = lvar.lv_loop_idx;
		}
		else
		    gen_load = TRUE;
	    }
	    else if (cctx->ctx_ufunc->uf_defclass != NULL &&
		    (((idx =
		       cctx_class_member_idx(cctx, *arg, len, &cl)) >= 0)
		     || ((method_idx =
			     cctx_class_method_idx(cctx, *arg, len, &cl)) >= 0)))
	    {
		
		
		
		
		if (cctx->ctx_ufunc->uf_defclass == cl)
		{
		    if (idx >= 0)
			res = generate_CLASSMEMBER(cctx, TRUE, cl, idx);
		    else
		    {
			ufunc_T *fp = cl->class_class_functions[method_idx];
			res = generate_FUNCREF(cctx, fp, cl, FALSE, method_idx,
									NULL);
		    }
		}
		else
		{
		    semsg(_(e_class_variable_str_accessible_only_inside_class_str),
			    name, cl->class_name);
		    res = FAIL;
		}
	    }
	    else
	    {
		
		
		if (script_var_exists(*arg, len, cctx, NULL) == OK
				      || find_imported(name, 0, FALSE) != NULL)
		   res = compile_load_scriptvar(cctx, name, *arg, &end);

		
		
		
		if (res == FAIL && is_expr && ASCII_ISUPPER(*name))
		    res = generate_funcref(cctx, name, FALSE);
	    }
	}
	if (gen_load)
	    res = generate_LOAD(cctx, ISN_LOAD, idx, NULL, type);
	if (gen_load_outer > 0)
	{
	    res = generate_LOADOUTER(cctx, idx, gen_load_outer,
				       outer_loop_depth, outer_loop_idx, type);
	    cctx->ctx_outer_used = TRUE;
	}
    }

    *arg = end;

theend:
    if (res == FAIL && error && called_emsg == prev_called_emsg)
	semsg(_(e_variable_not_found_str), name);
    vim_free(name);
    return res;
}


    static int
compile_string(isn_T *isn, cctx_T *cctx, int str_offset)
{
    char_u	*s = isn->isn_arg.string + str_offset;
    garray_T	save_ga = cctx->ctx_instr;
    int		expr_res;
    int		trailing_error;
    int		instr_count;
    isn_T	*instr = NULL;

    
    --cctx->ctx_type_stack.ga_len;

    
    
    cctx->ctx_instr.ga_len = 0;
    cctx->ctx_instr.ga_maxlen = 0;
    cctx->ctx_instr.ga_data = NULL;

    
    int galen_save = cctx->ctx_ufunc->uf_lines.ga_len;
    cctx->ctx_ufunc->uf_lines.ga_len = 0;

    expr_res = compile_expr0(&s, cctx);

    cctx->ctx_ufunc->uf_lines.ga_len = galen_save;

    s = skipwhite(s);
    trailing_error = *s != NUL;

    if (expr_res == FAIL || trailing_error
				       || GA_GROW_FAILS(&cctx->ctx_instr, 1))
    {
	if (trailing_error)
	    semsg(_(e_trailing_characters_str), s);
	clear_instr_ga(&cctx->ctx_instr);
	cctx->ctx_instr = save_ga;
	++cctx->ctx_type_stack.ga_len;
	return FAIL;
    }

    
    
    instr_count = cctx->ctx_instr.ga_len;
    instr = cctx->ctx_instr.ga_data;
    instr[instr_count].isn_type = ISN_FINISH;

    cctx->ctx_instr = save_ga;
    vim_free(isn->isn_arg.string);
    isn->isn_type = ISN_INSTR;
    isn->isn_arg.instr = instr;
    return OK;
}


    int
compile_arguments(
	char_u	     **arg,
	cctx_T	     *cctx,
	int	     *argcount,
	ca_special_T special_fn)
{
    char_u  *p = *arg;
    char_u  *whitep = *arg;
    int	    must_end = FALSE;
    int	    instr_count;

    for (;;)
    {
	if (may_get_next_line(whitep, &p, cctx) == FAIL)
	    goto failret;
	if (*p == ')')
	{
	    *arg = p + 1;
	    return OK;
	}
	if (must_end)
	{
	    semsg(_(e_missing_comma_before_argument_str), p);
	    return FAIL;
	}

	instr_count = cctx->ctx_instr.ga_len;
	if (compile_expr0(&p, cctx) == FAIL)
	    return FAIL;
	++*argcount;

	if (special_fn == CA_SEARCHPAIR && *argcount == 5
		&& cctx->ctx_instr.ga_len == instr_count + 1)
	{
	    isn_T *isn = ((isn_T *)cctx->ctx_instr.ga_data) + instr_count;

	    
	    if (isn->isn_type == ISN_PUSHS && *isn->isn_arg.string != NUL)
		compile_string(isn, cctx, 0);
	}
	else if (special_fn == CA_SUBSTITUTE && *argcount == 3
		&& cctx->ctx_instr.ga_len == instr_count + 1)
	{
	    isn_T *isn = ((isn_T *)cctx->ctx_instr.ga_data) + instr_count;

	    
	    
	    if (isn->isn_type == ISN_PUSHS && isn->isn_arg.string[0] == '\\'
					      && isn->isn_arg.string[1] == '=')
		compile_string(isn, cctx, 2);
	}

	if (*p != ',' && *skipwhite(p) == ',')
	{
	    semsg(_(e_no_white_space_allowed_before_str_str), ",", p);
	    p = skipwhite(p);
	}
	if (*p == ',')
	{
	    ++p;
	    if (*p != NUL && !VIM_ISWHITE(*p))
		semsg(_(e_white_space_required_after_str_str), ",", p - 1);
	}
	else
	    must_end = TRUE;
	whitep = p;
	p = skipwhite(p);
    }
failret:
    emsg(_(e_missing_closing_paren));
    return FAIL;
}


    static int
compile_builtin_method_call(cctx_T *cctx, class_builtin_T builtin_method)
{
    type_T	*type = get_decl_type_on_stack(cctx, 0);
    int		res = FAIL;

    
    
    
    if (type->tt_type == VAR_OBJECT)
    {
	int	method_idx;
	ufunc_T *uf = class_get_builtin_method(type->tt_class, builtin_method,
							&method_idx);
	if (uf != NULL)
	    res = generate_CALL(cctx, uf, type->tt_class, method_idx, 0);
    }

    return res;
}



    static int
compile_call(
	char_u	    **arg,
	size_t	    varlen,
	cctx_T	    *cctx,
	ppconst_T   *ppconst,
	int	    argcount_init)
{
    char_u	*name = *arg;
    char_u	*p;
    int		argcount = argcount_init;
    char_u	namebuf[MAX_FUNC_NAME_LEN];
    char_u	fname_buf[FLEN_FIXED + 1];
    char_u	*tofree = NULL;
    ufunc_T	*ufunc = NULL;
    int		res = FAIL;
    int		is_autoload;
    int		has_g_namespace;
    ca_special_T special_fn;
    imported_T	*import;

    if (varlen >= sizeof(namebuf))
    {
	semsg(_(e_name_too_long_str), name);
	return FAIL;
    }
    vim_strncpy(namebuf, *arg, varlen);

    import = find_imported(name, varlen, FALSE);
    if (import != NULL)
    {
	semsg(_(e_cannot_use_str_itself_it_is_imported), namebuf);
	return FAIL;
    }

    
    
    
    if ((varlen == 3
	     && (STRNCMP(*arg, "has", 3) == 0 || STRNCMP(*arg, "len", 3) == 0))
	    || (varlen == 15 && STRNCMP(*arg, "exists_compiled", 6) == 0))
    {
	char_u	    *s = skipwhite(*arg + varlen + 1);
	typval_T    argvars[2];
	int	    is_has = **arg == 'h';
	int	    is_len = **arg == 'l';

	argvars[0].v_type = VAR_UNKNOWN;
	if (*s == '"')
	    (void)eval_string(&s, &argvars[0], TRUE, FALSE);
	else if (*s == '\'')
	    (void)eval_lit_string(&s, &argvars[0], TRUE, FALSE);
	s = skipwhite(s);
	if (*s == ')' && argvars[0].v_type == VAR_STRING
	       && ((is_has && !dynamic_feature(argvars[0].vval.v_string))
		    || !is_has))
	{
	    typval_T	*tv = &ppconst->pp_tv[ppconst->pp_used];

	    *arg = s + 1;
	    argvars[1].v_type = VAR_UNKNOWN;
	    tv->v_type = VAR_NUMBER;
	    tv->vval.v_number = 0;
	    if (is_has)
		f_has(argvars, tv);
	    else if (is_len)
		f_len(argvars, tv);
	    else
		f_exists(argvars, tv);
	    clear_tv(&argvars[0]);
	    ++ppconst->pp_used;
	    return OK;
	}
	clear_tv(&argvars[0]);
	if (!is_has && !is_len)
	{
	    emsg(_(e_argument_of_exists_compiled_must_be_literal_string));
	    return FAIL;
	}
    }

    if (generate_ppconst(cctx, ppconst) == FAIL)
	return FAIL;

    funcerror_T	error;
    name = fname_trans_sid(namebuf, fname_buf, &tofree, &error);

    
    
    if ((varlen == 6 && STRNCMP(*arg, "search", 6) == 0)
	    || (varlen == 9 && STRNCMP(*arg, "searchpos", 9) == 0)
	    || (varlen == 10 && STRNCMP(*arg, "searchpair", 10) == 0)
	    || (varlen == 13 && STRNCMP(*arg, "searchpairpos", 13) == 0))
	special_fn = CA_SEARCHPAIR;
    else if (varlen == 10 && STRNCMP(*arg, "substitute", 10) == 0)
	special_fn = CA_SUBSTITUTE;
    else
	special_fn = CA_NOT_SPECIAL;

    *arg = skipwhite(*arg + varlen + 1);
    if (compile_arguments(arg, cctx, &argcount, special_fn) == FAIL)
	goto theend;

    is_autoload = vim_strchr(name, AUTOLOAD_CHAR) != NULL;
    if (ASCII_ISLOWER(*name) && name[1] != ':' && !is_autoload)
    {
	int	    idx;

	
	idx = find_internal_func(name);
	if (idx >= 0)
	{
	    if (STRCMP(name, "flatten") == 0)
	    {
		emsg(_(e_cannot_use_flatten_in_vim9_script));
		goto theend;
	    }

	    if (STRCMP(name, "add") == 0 && argcount == 2)
	    {
		type_T	    *type = get_decl_type_on_stack(cctx, 1);
		if (check_type_is_value(get_type_on_stack(cctx, 0)) == FAIL)
		    goto theend;

		
		if (type->tt_type == VAR_LIST)
		{
		    
		    res = generate_LISTAPPEND(cctx);
		    idx = -1;
		}
		else if (type->tt_type == VAR_BLOB)
		{
		    
		    res = generate_BLOBAPPEND(cctx);
		    idx = -1;
		}
	    }

	    if ((STRCMP(name, "writefile") == 0 && argcount > 2)
		    || (STRCMP(name, "mkdir") == 0 && argcount > 1))
	    {
		
		
		if (get_defer_var_idx(cctx) == 0)
		    idx = -1;
	    }

	    class_builtin_T	builtin_method = CLASS_BUILTIN_INVALID;
	    if (STRCMP(name, "string") == 0)
		builtin_method = CLASS_BUILTIN_STRING;
	    else if (STRCMP(name, "empty") == 0)
		builtin_method = CLASS_BUILTIN_EMPTY;
	    else if (STRCMP(name, "len") == 0)
		builtin_method = CLASS_BUILTIN_LEN;
	    if (builtin_method != CLASS_BUILTIN_INVALID)
	    {
		res = compile_builtin_method_call(cctx, builtin_method);
		if (res == OK)
		    idx = -1;
	    }

	    if (idx >= 0)
		res = generate_BCALL(cctx, idx, argcount, argcount_init == 1);
	}
	else
	    emsg_funcname(e_unknown_function_str, namebuf);
	goto theend;
    }

    has_g_namespace = STRNCMP(namebuf, "g:", 2) == 0;

    
    
    if (lookup_local(namebuf, varlen, NULL, cctx) == FAIL
	    && arg_exists(namebuf, varlen, NULL, NULL, NULL, cctx) != OK)
    {
	class_T		*cl = NULL;
	int		mi = 0;

	
	
	ufunc = find_func(name, FALSE);
	if (ufunc != NULL)
	{
	    if (!func_is_global(ufunc))
	    {
		res = generate_CALL(cctx, ufunc, NULL, 0, argcount);
		goto theend;
	    }
	    if (!has_g_namespace
			  && vim_strchr(ufunc->uf_name, AUTOLOAD_CHAR) == NULL)
	    {
		
		emsg_funcname(e_unknown_function_str, namebuf);
		goto theend;
	    }
	}
	else if ((mi = cctx_class_method_idx(cctx, name, varlen, &cl)) >= 0)
	{
	    
	    
	    
	    if (cctx->ctx_ufunc->uf_defclass == cl)
	    {
		res = generate_CALL(cctx, cl->class_class_functions[mi], NULL,
							0, argcount);
	    }
	    else
	    {
		semsg(_(e_class_method_str_accessible_only_inside_class_str),
			name, cl->class_name);
		res = FAIL;
	    }
	    goto theend;
	}
    }

    
    
    
    p = namebuf;
    if (!has_g_namespace && !is_autoload
	    && compile_load(&p, namebuf + varlen, cctx, FALSE, FALSE) == OK)
    {
	type_T	    *s_type = get_type_on_stack(cctx, 0);

	res = generate_PCALL(cctx, argcount, namebuf, s_type, FALSE);
	goto theend;
    }

    
    if (ufunc != NULL)
    {
	res = generate_CALL(cctx, ufunc, NULL, 0, argcount);
	goto theend;
    }

    
    
    if (has_g_namespace || is_autoload)
	res = generate_UCALL(cctx, name, argcount);
    else
	emsg_funcname(e_unknown_function_str, namebuf);

theend:
    vim_free(tofree);
    return res;
}


#define VIM9_NAMESPACE_CHAR	(char_u *)"bgstvw"


    char_u *
to_name_end(char_u *arg, int use_namespace)
{
    char_u	*p;

    
    if (!eval_isnamec1(*arg))
	return arg;

    for (p = arg + 1; *p != NUL && eval_isnamec(*p); MB_PTR_ADV(p))
	
	
	if (*p == ':' && (p != arg + 1
			     || !use_namespace
			     || vim_strchr(VIM9_NAMESPACE_CHAR, *arg) == NULL))
	    break;
    return p;
}


    char_u *
to_name_const_end(char_u *arg)
{
    char_u	*p = arg;
    typval_T	rettv;

    if (STRNCMP(p, "<SNR>", 5) == 0)
	p = skipdigits(p + 5);
    p = to_name_end(p, TRUE);
    if (p == arg && *arg == '[')
    {

	
	if (eval_list(&p, &rettv, NULL, FALSE) == FAIL)
	    p = arg;
    }
    return p;
}


    static int
compile_list(char_u **arg, cctx_T *cctx, ppconst_T *ppconst)
{
    char_u	*p = skipwhite(*arg + 1);
    char_u	*whitep = *arg + 1;
    int		count = 0;
    int		is_const;
    int		is_all_const = TRUE;	
    int		must_end = FALSE;

    for (;;)
    {
	if (may_get_next_line(whitep, &p, cctx) == FAIL)
	{
	    semsg(_(e_missing_end_of_list_rsb_str), *arg);
	    return FAIL;
	}
	if (*p == ',')
	{
	    semsg(_(e_no_white_space_allowed_before_str_str), ",", p);
	    return FAIL;
	}
	if (*p == ']')
	{
	    ++p;
	    break;
	}
	if (must_end)
	{
	    semsg(_(e_missing_comma_in_list_str), p);
	    return FAIL;
	}
	if (compile_expr0_ext(&p, cctx, &is_const) == FAIL)
	    return FAIL;
	if (!is_const)
	    is_all_const = FALSE;
	++count;
	if (*p == ',')
	{
	    ++p;
	    if (*p != ']' && !IS_WHITE_OR_NUL(*p))
	    {
		semsg(_(e_white_space_required_after_str_str), ",", p - 1);
		return FAIL;
	    }
	}
	else
	    must_end = TRUE;
	whitep = p;
	p = skipwhite(p);
    }
    *arg = p;

    ppconst->pp_is_const = is_all_const;
    return generate_NEWLIST(cctx, count, FALSE);
}


    static int
compile_lambda(char_u **arg, cctx_T *cctx)
{
    int		r;
    typval_T	rettv;
    ufunc_T	*ufunc;
    evalarg_T	evalarg;

    init_evalarg(&evalarg);
    evalarg.eval_flags = EVAL_EVALUATE;
    evalarg.eval_cctx = cctx;

    
    r = get_lambda_tv(arg, &rettv, TRUE, &evalarg);
    if (r != OK)
    {
	clear_evalarg(&evalarg, NULL);
	return r;
    }

    
    ufunc = rettv.vval.v_partial->pt_func;
    ++ufunc->uf_refcount;
    clear_tv(&rettv);

    
    
    
    if (ufunc->uf_ret_type->tt_type == VAR_VOID)
	ufunc->uf_ret_type = &t_unknown;
    compile_def_function(ufunc, FALSE, cctx->ctx_compile_type, cctx);

    
    
    
    if (cctx->ctx_compile_type == CT_DEBUG
#ifdef FEAT_PROFILE
	    || cctx->ctx_compile_type == CT_PROFILE
#endif
       )
	compile_def_function(ufunc, FALSE, CT_NONE, cctx);

    
    
    if (cctx->ctx_compile_type == CT_NONE)
    {
	compiletype_T compile_type = get_compile_type(ufunc);

	if (compile_type != CT_NONE)
	    compile_def_function(ufunc, FALSE, compile_type, cctx);
    }

    
    
    
    if (evalarg.eval_using_cmdline)
    {
	garray_T    *gap = &evalarg.eval_tofree_ga;
	size_t	    off = *arg - ((char_u **)gap->ga_data)[gap->ga_len - 1];

	*arg = ((char_u **)cctx->ctx_ufunc->uf_lines.ga_data)[cctx->ctx_lnum]
									 + off;
	evalarg.eval_using_cmdline = FALSE;
    }

    clear_evalarg(&evalarg, NULL);

    if (ufunc->uf_def_status == UF_COMPILED)
    {
	
	set_function_type(ufunc);

	
	
	
	return generate_FUNCREF(cctx, ufunc, NULL, FALSE, 0, NULL);
    }

    func_ptr_unref(ufunc);
    return FAIL;
}


    int
get_lambda_tv_and_compile(
	char_u	    **arg,
	typval_T    *rettv,
	int	    types_optional,
	evalarg_T   *evalarg)
{
    int		r;
    ufunc_T	*ufunc;
    int		save_sc_version = current_sctx.sc_version;

    
    current_sctx.sc_version = SCRIPT_VERSION_VIM9;
    r = get_lambda_tv(arg, rettv, types_optional, evalarg);
    current_sctx.sc_version = save_sc_version;
    if (r != OK)
	return r;  

    
    ufunc = rettv->vval.v_partial->pt_func;

    
    
    
    if (ufunc->uf_ret_type == NULL || ufunc->uf_ret_type->tt_type == VAR_VOID)
	ufunc->uf_ret_type = &t_unknown;
    compile_def_function(ufunc, FALSE, CT_NONE, NULL);

    if (ufunc->uf_def_status == UF_COMPILED)
    {
	
	set_function_type(ufunc);
	return OK;
    }
    clear_tv(rettv);
    return FAIL;
}


    static int
compile_dict(char_u **arg, cctx_T *cctx, ppconst_T *ppconst)
{
    garray_T	*instr = &cctx->ctx_instr;
    int		count = 0;
    dict_T	*d = dict_alloc();
    dictitem_T	*item;
    char_u	*whitep = *arg + 1;
    char_u	*p;
    int		is_const;
    int		is_all_const = TRUE;	

    if (d == NULL)
	return FAIL;
    if (generate_ppconst(cctx, ppconst) == FAIL)
    {
	dict_unref(d);
	return FAIL;
    }
    for (;;)
    {
	char_u	    *key = NULL;

	if (may_get_next_line(whitep, arg, cctx) == FAIL)
	{
	    *arg = NULL;
	    goto failret;
	}

	if (**arg == '}')
	    break;

	if (**arg == '[')
	{
	    isn_T	*isn;

	    
	    *arg = skipwhite(*arg + 1);
	    if (compile_expr0(arg, cctx) == FAIL)
		return FAIL;
	    isn = ((isn_T *)instr->ga_data) + instr->ga_len - 1;
	    if (isn->isn_type == ISN_PUSHNR)
	    {
		char buf[NUMBUFLEN];

		
		vim_snprintf(buf, NUMBUFLEN, "%lld", isn->isn_arg.number);
		isn->isn_type = ISN_PUSHS;
		isn->isn_arg.string = vim_strsave((char_u *)buf);
	    }
	    if (isn->isn_type == ISN_PUSHS)
		key = isn->isn_arg.string;
	    else if (may_generate_2STRING(-1, TOSTRING_NONE, cctx) == FAIL)
		return FAIL;
	    *arg = skipwhite(*arg);
	    if (**arg != ']')
	    {
		emsg(_(e_missing_matching_bracket_after_dict_key));
		return FAIL;
	    }
	    ++*arg;
	}
	else
	{
	    
	    
	    
	    key = get_literal_key(arg);
	    if (key == NULL)
		return FAIL;
	    if (generate_PUSHS(cctx, &key) == FAIL)
		return FAIL;
	}

	
	if (key != NULL)
	{
	    item = dict_find(d, key, -1);
	    if (item != NULL)
	    {
		semsg(_(e_duplicate_key_in_dictionary_str), key);
		goto failret;
	    }
	    item = dictitem_alloc(key);
	    if (item != NULL)
	    {
		item->di_tv.v_type = VAR_UNKNOWN;
		item->di_tv.v_lock = 0;
		if (dict_add(d, item) == FAIL)
		    dictitem_free(item);
	    }
	}

	if (**arg != ':')
	{
	    if (*skipwhite(*arg) == ':')
		semsg(_(e_no_white_space_allowed_before_str_str), ":", *arg);
	    else
		semsg(_(e_missing_colon_in_dictionary_str), *arg);
	    return FAIL;
	}
	whitep = *arg + 1;
	if (!IS_WHITE_OR_NUL(*whitep))
	{
	    semsg(_(e_white_space_required_after_str_str), ":", *arg);
	    return FAIL;
	}

	if (may_get_next_line(whitep, arg, cctx) == FAIL)
	{
	    *arg = NULL;
	    goto failret;
	}

	if (compile_expr0_ext(arg, cctx, &is_const) == FAIL)
	    return FAIL;
	if (!is_const)
	    is_all_const = FALSE;
	++count;

	whitep = *arg;
	if (may_get_next_line(whitep, arg, cctx) == FAIL)
	{
	    *arg = NULL;
	    goto failret;
	}
	if (**arg == '}')
	    break;
	if (**arg != ',')
	{
	    semsg(_(e_missing_comma_in_dictionary_str), *arg);
	    goto failret;
	}
	if (IS_WHITE_OR_NUL(*whitep))
	{
	    semsg(_(e_no_white_space_allowed_before_str_str), ",", whitep);
	    return FAIL;
	}
	whitep = *arg + 1;
	if (!IS_WHITE_OR_NUL(*whitep))
	{
	    semsg(_(e_white_space_required_after_str_str), ",", *arg);
	    return FAIL;
	}
	*arg = skipwhite(whitep);
    }

    *arg = *arg + 1;

    
    p = skipwhite(*arg);
    if (VIM_ISWHITE(**arg) && vim9_comment_start(p))
	*arg += STRLEN(*arg);

    dict_unref(d);
    ppconst->pp_is_const = is_all_const;
    return generate_NEWDICT(cctx, count, FALSE);

failret:
    if (*arg == NULL)
    {
	semsg(_(e_missing_dict_end_str), _("[end of lines]"));
	*arg = (char_u *)"";
    }
    dict_unref(d);
    return FAIL;
}


    static int
compile_get_option(char_u **arg, cctx_T *cctx)
{
    typval_T	rettv;
    char_u	*start = *arg;
    int		ret;

    
    rettv.v_type = VAR_UNKNOWN;
    ret = eval_option(arg, &rettv, TRUE);
    if (ret == OK)
    {
	
	char_u	*name = vim_strnsave(start, *arg - start);
	type_T	*type = rettv.v_type == VAR_BOOL ? &t_bool
			  : rettv.v_type == VAR_NUMBER ? &t_number : &t_string;

	ret = generate_LOAD(cctx, ISN_LOADOPT, 0, name, type);
	vim_free(name);
    }
    clear_tv(&rettv);

    return ret;
}


    static int
compile_get_env(char_u **arg, cctx_T *cctx)
{
    char_u	*start = *arg;
    int		len;
    int		ret;
    char_u	*name;

    ++*arg;
    len = get_env_len(arg);
    if (len == 0)
    {
	semsg(_(e_syntax_error_at_str), start);
	return FAIL;
    }

    
    name = vim_strnsave(start, len + 1);
    ret = generate_LOAD(cctx, ISN_LOADENV, 0, name, &t_string);
    vim_free(name);
    return ret;
}


    static int
compile_interp_string(char_u **arg, cctx_T *cctx)
{
    typval_T	tv;
    int		ret;
    int		quote;
    int		evaluate = cctx->ctx_skip != SKIP_YES;
    int		count = 0;
    char_u	*p;

    
    ++*arg;
    quote = **arg;
    ++*arg;

    for (;;)
    {
	
	
	if (quote == '"')
	    ret = eval_string(arg, &tv, evaluate, TRUE);
	else
	    ret = eval_lit_string(arg, &tv, evaluate, TRUE);
	if (ret == FAIL)
	    break;
	if (evaluate)
	{
	    if ((tv.vval.v_string != NULL && *tv.vval.v_string != NUL)
		    || (**arg != '{' && count == 0))
	    {
		
		
		if (generate_PUSHS(cctx, &tv.vval.v_string) == FAIL)
		    return FAIL;
		tv.vval.v_string = NULL;  
		++count;
	    }
	    clear_tv(&tv);
	}

	if (**arg != '{')
	{
	    
	    ++*arg;
	    break;
	}

	p = compile_one_expr_in_str(*arg, cctx);
	if (p == NULL)
	{
	    ret = FAIL;
	    break;
	}
	++count;
	*arg = p;
    }

    if (ret == FAIL || !evaluate)
	return ret;

    
    if (count > 1)
	return generate_CONCAT(cctx, count);

    return OK;
}


    static int
compile_get_register(char_u **arg, cctx_T *cctx)
{
    int		ret;

    ++*arg;
    if (**arg == NUL)
    {
	semsg(_(e_syntax_error_at_str), *arg - 1);
	return FAIL;
    }
    if (!valid_yank_reg(**arg, FALSE))
    {
	emsg_invreg(**arg);
	return FAIL;
    }
    ret = generate_LOAD(cctx, ISN_LOADREG, **arg, NULL, &t_string);
    ++*arg;
    return ret;
}


    static int
apply_leader(typval_T *rettv, int numeric_only, char_u *start, char_u **end)
{
    char_u *p = *end;

    
    while (p > start)
    {
	--p;
	if (*p == '-' || *p == '+')
	{
	    
	    if (rettv->v_type == VAR_FLOAT)
	    {
		if (*p == '-')
		    rettv->vval.v_float = -rettv->vval.v_float;
	    }
	    else
	    {
		varnumber_T	val;
		int		error = FALSE;

		
		
		if (check_not_string(rettv) == FAIL)
		    return FAIL;
		val = tv_get_number_chk(rettv, &error);
		clear_tv(rettv);
		if (error)
		    return FAIL;
		if (*p == '-')
		    val = -val;
		rettv->v_type = VAR_NUMBER;
		rettv->vval.v_number = val;
	    }
	}
	else if (numeric_only)
	{
	    ++p;
	    break;
	}
	else if (*p == '!')
	{
	    int v = tv2bool(rettv);

	    
	    clear_tv(rettv);
	    rettv->v_type = VAR_BOOL;
	    rettv->vval.v_number = v ? VVAL_FALSE : VVAL_TRUE;
	}
    }
    *end = p;
    return OK;
}


    static void
get_vim_constant(char_u **arg, typval_T *rettv)
{
    if (STRNCMP(*arg, "v:true", 6) == 0)
    {
	rettv->v_type = VAR_BOOL;
	rettv->vval.v_number = VVAL_TRUE;
	*arg += 6;
    }
    else if (STRNCMP(*arg, "v:false", 7) == 0)
    {
	rettv->v_type = VAR_BOOL;
	rettv->vval.v_number = VVAL_FALSE;
	*arg += 7;
    }
    else if (STRNCMP(*arg, "v:null", 6) == 0)
    {
	rettv->v_type = VAR_SPECIAL;
	rettv->vval.v_number = VVAL_NULL;
	*arg += 6;
    }
    else if (STRNCMP(*arg, "v:none", 6) == 0)
    {
	rettv->v_type = VAR_SPECIAL;
	rettv->vval.v_number = VVAL_NONE;
	*arg += 6;
    }
}

    exprtype_T
get_compare_type(char_u *p, int *len, int *type_is)
{
    exprtype_T	type = EXPR_UNKNOWN;
    int		i;

    switch (p[0])
    {
	case '=':   if (p[1] == '=')
			type = EXPR_EQUAL;
		    else if (p[1] == '~')
			type = EXPR_MATCH;
		    break;
	case '!':   if (p[1] == '=')
			type = EXPR_NEQUAL;
		    else if (p[1] == '~')
			type = EXPR_NOMATCH;
		    break;
	case '>':   if (p[1] != '=')
		    {
			type = EXPR_GREATER;
			*len = 1;
		    }
		    else
			type = EXPR_GEQUAL;
		    break;
	case '<':   if (p[1] != '=')
		    {
			type = EXPR_SMALLER;
			*len = 1;
		    }
		    else
			type = EXPR_SEQUAL;
		    break;
	case 'i':   if (p[1] == 's')
		    {
			
			if (p[2] == 'n' && p[3] == 'o' && p[4] == 't')
			    *len = 5;
			i = p[*len];
			if (!SAFE_isalnum(i) && i != '_')
			{
			    type = *len == 2 ? EXPR_IS : EXPR_ISNOT;
			    *type_is = TRUE;
			}
		    }
		    break;
    }
    return type;
}


    void
skip_expr_cctx(char_u **arg, cctx_T *cctx)
{
    evalarg_T	evalarg;

    init_evalarg(&evalarg);
    evalarg.eval_cctx = cctx;
    skip_expr(arg, &evalarg);
    clear_evalarg(&evalarg, NULL);
}


    int
bool_on_stack(cctx_T *cctx)
{
    type_T	*type;

    type = get_type_on_stack(cctx, 0);
    if (type == &t_bool)
	return OK;

    if (type->tt_type == VAR_ANY
	    || type->tt_type == VAR_UNKNOWN
	    || type->tt_type == VAR_NUMBER
	    || type == &t_number_bool
	    || type == &t_const_number_bool)
	
	
	return generate_COND2BOOL(cctx);

    return need_type(type, &t_bool, FALSE, -1, 0, cctx, FALSE, FALSE);
}


    void
error_white_both(char_u *op, int len)
{
    char_u	buf[10];

    vim_strncpy(buf, op, len);
    semsg(_(e_white_space_required_before_and_after_str_at_str), buf, op);
}


    static int
compile_leader(cctx_T *cctx, int numeric_only, char_u *start, char_u **end)
{
    char_u	*p = *end;

    
    while (p > start)
    {
	--p;
	while (VIM_ISWHITE(*p))
	    --p;
	if (*p == '-' || *p == '+')
	{
	    type_T *type = get_type_on_stack(cctx, 0);
	    if (type->tt_type != VAR_FLOAT && need_type(type, &t_number,
				     FALSE, -1, 0, cctx, FALSE, FALSE) == FAIL)
		return FAIL;

	    
	    if (*p == '-' && generate_instr(cctx, ISN_NEGATENR) == NULL)
		return FAIL;
	}
	else if (numeric_only)
	{
	    ++p;
	    break;
	}
	else
	{
	    int  invert = *p == '!';

	    while (p > start && (p[-1] == '!' || VIM_ISWHITE(p[-1])))
	    {
		if (p[-1] == '!')
		    invert = !invert;
		--p;
	    }
	    if (generate_2BOOL(cctx, invert, -1) == FAIL)
		return FAIL;
	}
    }
    *end = p;
    return OK;
}


    static int
compile_parenthesis(char_u **arg, cctx_T *cctx, ppconst_T *ppconst)
{
    int	    ret;
    char_u  *p = *arg + 1;

    if (may_get_next_line_error(p, arg, cctx) == FAIL)
	return FAIL;
    if (ppconst->pp_used <= PPSIZE - 10)
    {
	ret = compile_expr1(arg, cctx, ppconst);
    }
    else
    {
	
	if (generate_ppconst(cctx, ppconst) == FAIL)
	    return FAIL;
	ret = compile_expr0(arg, cctx);
    }
    if (may_get_next_line_error(*arg, arg, cctx) == FAIL)
	return FAIL;
    if (**arg == ')')
	++*arg;
    else if (ret == OK)
    {
	emsg(_(e_missing_closing_paren));
	ret = FAIL;
    }
    return ret;
}

static int compile_expr9(char_u **arg,  cctx_T *cctx, ppconst_T *ppconst);


    static int
compile_subscript(
	char_u **arg,
	cctx_T *cctx,
	char_u *start_leader,
	char_u **end_leader,
	ppconst_T *ppconst)
{
    char_u	*name_start = *end_leader;
    int		keeping_dict = FALSE;

    for (;;)
    {
	char_u *p = skipwhite(*arg);
	type_T *type;

	if (*p == NUL || (VIM_ISWHITE(**arg) && vim9_comment_start(p)))
	{
	    char_u *next = peek_next_line_from_context(cctx);

	    
	    
	    
	    if (next != NULL &&
		    ((next[0] == '-' && next[1] == '>'
				 && (next[2] == '{'
				       || next[2] == '('
				       || ASCII_ISALPHA(*skipwhite(next + 2))))
		    || (next[0] == '.' && eval_isdictc(next[1]))))
	    {
		next = next_line_from_context(cctx, TRUE);
		if (next == NULL)
		    return FAIL;
		*arg = next;
		p = skipwhite(*arg);
	    }
	}

	
	
	if (**arg == '(')
	{
	    int		argcount = 0;

	    if (generate_ppconst(cctx, ppconst) == FAIL)
		return FAIL;
	    ppconst->pp_is_const = FALSE;

	    
	    type = get_type_on_stack(cctx, 0);

	    *arg = skipwhite(p + 1);
	    if (compile_arguments(arg, cctx, &argcount, CA_NOT_SPECIAL) == FAIL)
		return FAIL;
	    if (generate_PCALL(cctx, argcount, name_start, type, TRUE) == FAIL)
		return FAIL;
	    if (keeping_dict)
	    {
		keeping_dict = FALSE;
		if (generate_instr(cctx, ISN_CLEARDICT) == NULL)
		    return FAIL;
	    }
	}
	else if (*p == '-' && p[1] == '>')
	{
	    char_u  *pstart = p;
	    int	    alt;
	    char_u  *paren;

	    
	    if (generate_ppconst(cctx, ppconst) == FAIL)
		return FAIL;
	    ppconst->pp_is_const = FALSE;

	    
	    
	    if (compile_leader(cctx, TRUE, start_leader, end_leader) == FAIL)
		return FAIL;

	    p += 2;
	    *arg = skipwhite(p);
	    

	    
	    
	    
	    
	    if (**arg == '(')
		alt = 2;
	    else
	    {
		
		p = *arg;
		if (!eval_isnamec1(*p))
		{
		    semsg(_(e_trailing_characters_str), pstart);
		    return FAIL;
		}
		if (ASCII_ISALPHA(*p) && p[1] == ':')
		    p += 2;
		for ( ; eval_isnamec(*p); ++p)
		    ;
		if (*p == '(')
		{
		    
		    alt = 1;
		    if (compile_call(arg, p - *arg, cctx, ppconst, 1) == FAIL)
			return FAIL;
		}
		else
		{
		    
		    
		    alt = 3;
		    paren = vim_strchr(p, '(');
		    if (paren == NULL)
		    {
			semsg(_(e_missing_parenthesis_str), *arg);
			return FAIL;
		    }
		}
	    }

	    if (alt != 1)
	    {
		int	    argcount = 1;
		garray_T    *stack = &cctx->ctx_type_stack;
		int	    type_idx_start = stack->ga_len;
		int	    expr_isn_start = cctx->ctx_instr.ga_len;
		int	    expr_isn_end;
		int	    arg_isn_count;

		if (alt == 2)
		{
		    
		    
		    
		    
		    if (compile_parenthesis(arg, cctx, ppconst) == FAIL)
			return FAIL;
		}
		else
		{
		    int fail;
		    int save_len = cctx->ctx_ufunc->uf_lines.ga_len;
		    int	prev_did_emsg = did_emsg;

		    *paren = NUL;

		    
		    ++paren_follows_after_expr;

		    
		    cctx->ctx_ufunc->uf_lines.ga_len = 1;

		    fail = compile_expr9(arg, cctx, ppconst) == FAIL
						    || *skipwhite(*arg) != NUL;
		    *paren = '(';
		    --paren_follows_after_expr;
		    cctx->ctx_ufunc->uf_lines.ga_len = save_len;

		    if (fail)
		    {
			if (did_emsg == prev_did_emsg)
			    semsg(_(e_invalid_expression_str), pstart);
			return FAIL;
		    }
		}

		
		if (**arg != '(')
		{
		    if (*skipwhite(*arg) == '(')
			emsg(_(e_no_white_space_allowed_before_parenthesis));
		    else
			semsg(_(e_missing_parenthesis_str), *arg);
		    return FAIL;
		}

		
		
		expr_isn_end = cctx->ctx_instr.ga_len;

		*arg = skipwhite(*arg + 1);
		if (compile_arguments(arg, cctx, &argcount, CA_NOT_SPECIAL)
								       == FAIL)
		    return FAIL;

		
		
		
		
		arg_isn_count = cctx->ctx_instr.ga_len - expr_isn_end;
		if (arg_isn_count > 0)
		{
		    int	    expr_isn_count = expr_isn_end - expr_isn_start;
		    isn_T   *isn = ALLOC_MULT(isn_T, expr_isn_count);
		    type_T  *decl_type;
		    type2_T  *typep;

		    if (isn == NULL)
			return FAIL;
		    mch_memmove(isn, ((isn_T *)cctx->ctx_instr.ga_data)
							      + expr_isn_start,
					       sizeof(isn_T) * expr_isn_count);
		    mch_memmove(((isn_T *)cctx->ctx_instr.ga_data)
							      + expr_isn_start,
			     ((isn_T *)cctx->ctx_instr.ga_data) + expr_isn_end,
						sizeof(isn_T) * arg_isn_count);
		    mch_memmove(((isn_T *)cctx->ctx_instr.ga_data)
					      + expr_isn_start + arg_isn_count,
					  isn, sizeof(isn_T) * expr_isn_count);
		    vim_free(isn);

		    typep = ((type2_T *)stack->ga_data) + type_idx_start;
		    type = typep->type_curr;
		    decl_type = typep->type_decl;
		    mch_memmove(((type2_T *)stack->ga_data) + type_idx_start,
			      ((type2_T *)stack->ga_data) + type_idx_start + 1,
			      sizeof(type2_T)
				       * (stack->ga_len - type_idx_start - 1));
		    typep = ((type2_T *)stack->ga_data) + stack->ga_len - 1;
		    typep->type_curr = type;
		    typep->type_decl = decl_type;
		}

		type = get_type_on_stack(cctx, 0);
		if (generate_PCALL(cctx, argcount, p - 2, type, FALSE) == FAIL)
		    return FAIL;
	    }

	    if (keeping_dict)
	    {
		keeping_dict = FALSE;
		if (generate_instr(cctx, ISN_CLEARDICT) == NULL)
		    return FAIL;
	    }
	}
	else if (**arg == '[')
	{
	    int		is_slice = FALSE;

	    
	    
	    
	    
	    if (generate_ppconst(cctx, ppconst) == FAIL)
		return FAIL;
	    ppconst->pp_is_const = FALSE;

	    ++p;
	    if (may_get_next_line_error(p, arg, cctx) == FAIL)
		return FAIL;
	    if (**arg == ':')
	    {
		
		generate_PUSHNR(cctx, 0);
	    }
	    else
	    {
		if (compile_expr0(arg, cctx) == FAIL)
		    return FAIL;
		if (**arg == ':')
		{
		    semsg(_(e_white_space_required_before_and_after_str_at_str),
								    ":", *arg);
		    return FAIL;
		}
		if (may_get_next_line_error(*arg, arg, cctx) == FAIL)
		    return FAIL;
		*arg = skipwhite(*arg);
	    }
	    if (**arg == ':')
	    {
		is_slice = TRUE;
		++*arg;
		if (!IS_WHITE_OR_NUL(**arg) && **arg != ']')
		{
		    semsg(_(e_white_space_required_before_and_after_str_at_str),
								    ":", *arg);
		    return FAIL;
		}
		if (may_get_next_line_error(*arg, arg, cctx) == FAIL)
		    return FAIL;
		if (**arg == ']')
		    
		    generate_PUSHNR(cctx, -1);
		else
		{
		    if (compile_expr0(arg, cctx) == FAIL)
			return FAIL;
		    if (may_get_next_line_error(*arg, arg, cctx) == FAIL)
			return FAIL;
		    *arg = skipwhite(*arg);
		}
	    }

	    if (**arg != ']')
	    {
		emsg(_(e_missing_closing_square_brace));
		return FAIL;
	    }
	    *arg = *arg + 1;

	    if (keeping_dict)
	    {
		keeping_dict = FALSE;
		if (generate_instr(cctx, ISN_CLEARDICT) == NULL)
		    return FAIL;
	    }
	    if (compile_member(is_slice, &keeping_dict, cctx) == FAIL)
		return FAIL;
	}
	else if (*p == '.' && p[1] != '.')
	{
	    
	    if (generate_ppconst(cctx, ppconst) == FAIL)
		return FAIL;
	    ppconst->pp_is_const = FALSE;

	    type = get_type_on_stack(cctx, 0);
	    if (type != &t_unknown
		    && (type->tt_type == VAR_CLASS
					       || type->tt_type == VAR_OBJECT))
	    {
		
		
		
		
		
		*arg = p;
		if (compile_class_object_index(cctx, arg, type) == FAIL)
		    return FAIL;
	    }
	    else
	    {
		*arg = p + 1;
		if (IS_WHITE_OR_NUL(**arg))
		{
		    emsg(_(e_missing_name_after_dot));
		    return FAIL;
		}
		p = *arg;
		if (eval_isdictc(*p))
		    while (eval_isnamec(*p))
			MB_PTR_ADV(p);
		if (p == *arg)
		{
		    semsg(_(e_syntax_error_at_str), *arg);
		    return FAIL;
		}
		if (keeping_dict && generate_instr(cctx, ISN_CLEARDICT) == NULL)
		    return FAIL;
		if (generate_STRINGMEMBER(cctx, *arg, p - *arg) == FAIL)
		    return FAIL;
		keeping_dict = TRUE;
		*arg = p;
	    }
	}
	else
	    break;
    }

    
    
    if (keeping_dict && cctx->ctx_skip != SKIP_YES
				  && generate_instr(cctx, ISN_USEDICT) == NULL)
	return FAIL;

    return OK;
}




    static int
compile_expr9(
	char_u **arg,
	cctx_T *cctx,
	ppconst_T *ppconst)
{
    char_u	*start_leader, *end_leader;
    int		ret = OK;
    typval_T	*rettv = &ppconst->pp_tv[ppconst->pp_used];
    int		used_before = ppconst->pp_used;

    ppconst->pp_is_const = FALSE;

    
    start_leader = *arg;
    if (eval_leader(arg, TRUE) == FAIL)
	return FAIL;
    end_leader = *arg;

    rettv->v_type = VAR_UNKNOWN;
    switch (**arg)
    {
	
	case '0':	
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case '.':   if (eval_number(arg, rettv, TRUE, FALSE) == FAIL)
			return FAIL;
		    
		    
		    
		    if (apply_leader(rettv, TRUE,
					    start_leader, &end_leader) == FAIL)
		    {
			clear_tv(rettv);
			return FAIL;
		    }
		    break;

	
	case '"':   if (eval_string(arg, rettv, TRUE, FALSE) == FAIL)
			return FAIL;
		    break;

	
	case '\'':  if (eval_lit_string(arg, rettv, TRUE, FALSE) == FAIL)
			return FAIL;
		    break;

	
	case 'v':   get_vim_constant(arg, rettv);
		    ret = NOTDONE;
		    break;

	
	case 't':   if (STRNCMP(*arg, "true", 4) == 0
						   && !eval_isnamec((*arg)[4]))
		    {
			*arg += 4;
			rettv->v_type = VAR_BOOL;
			rettv->vval.v_number = VVAL_TRUE;
		    }
		    else
			ret = NOTDONE;
		    break;

	
	case 'f':   if (STRNCMP(*arg, "false", 5) == 0
						   && !eval_isnamec((*arg)[5]))
		    {
			*arg += 5;
			rettv->v_type = VAR_BOOL;
			rettv->vval.v_number = VVAL_FALSE;
		    }
		    else
			ret = NOTDONE;
		    break;

	
	case 'n':   if (STRNCMP(*arg, "null", 4) == 0)
		    {
			char_u  *p = *arg + 4;
			int	len;

			for (len = 0; eval_isnamec(p[len]); ++len)
			    ;
			ret = handle_predefined(*arg, len + 4, rettv);
			if (ret == FAIL)
			    ret = NOTDONE;
			else
			    *arg += len + 4;
		    }
		    else
			ret = NOTDONE;
		    break;

	
	case '[':   if (generate_ppconst(cctx, ppconst) == FAIL)
			return FAIL;
		    ret = compile_list(arg, cctx, ppconst);
		    break;

	
	case '{':   if (generate_ppconst(cctx, ppconst) == FAIL)
			return FAIL;
		    ret = compile_dict(arg, cctx, ppconst);
		    break;

	
	case '&':	if (generate_ppconst(cctx, ppconst) == FAIL)
			    return FAIL;
			ret = compile_get_option(arg, cctx);
			break;

	
	case '$':	if (generate_ppconst(cctx, ppconst) == FAIL)
			    return FAIL;
			if ((*arg)[1] == '"' || (*arg)[1] == '\'')
			    ret = compile_interp_string(arg, cctx);
			else
			    ret = compile_get_env(arg, cctx);
			break;

	
	case '@':	if (generate_ppconst(cctx, ppconst) == FAIL)
			    return FAIL;
			ret = compile_get_register(arg, cctx);
			break;
	
	case '(':   
		    ret = compile_lambda(arg, cctx);
		    if (ret == NOTDONE)
			ret = compile_parenthesis(arg, cctx, ppconst);
		    break;

	default:    ret = NOTDONE;
		    break;
    }
    if (ret == FAIL)
	return FAIL;

    if (rettv->v_type != VAR_UNKNOWN && used_before == ppconst->pp_used)
    {
	if (cctx->ctx_skip == SKIP_YES)
	    clear_tv(rettv);
	else
	    
	    
	    ++ppconst->pp_used;
    }
    else if (ret == NOTDONE)
    {
	char_u	    *p;
	int	    r;

	if (!eval_isnamec1(**arg))
	{
	    if (!vim9_bad_comment(*arg))
	    {
		if (ends_excmd(*skipwhite(*arg)))
		    semsg(_(e_empty_expression_str), *arg);
		else
		    semsg(_(e_name_expected_str), *arg);
	    }
	    return FAIL;
	}

	
	p = to_name_end(*arg, TRUE);
	if (p - *arg == (size_t)1 && **arg == '_')
	{
	    emsg(_(e_cannot_use_underscore_here));
	    return FAIL;
	}

	if (*p == '(')
	{
	    r = compile_call(arg, p - *arg, cctx, ppconst, 0);
	}
	else
	{
	    if (cctx->ctx_skip != SKIP_YES
				    && generate_ppconst(cctx, ppconst) == FAIL)
		return FAIL;
	    r = compile_load(arg, p, cctx, TRUE, TRUE);
	}
	if (r == FAIL)
	    return FAIL;
    }

    
    
    if (compile_subscript(arg, cctx, start_leader, &end_leader,
							     ppconst) == FAIL)
	return FAIL;
    if ((ppconst->pp_used > 0) && (cctx->ctx_skip != SKIP_YES))
    {
	
	rettv = &ppconst->pp_tv[ppconst->pp_used - 1];
	if (apply_leader(rettv, FALSE, start_leader, &end_leader) == FAIL)
	    return FAIL;
	return OK;
    }
    if (compile_leader(cctx, FALSE, start_leader, &end_leader) == FAIL)
	return FAIL;
    return OK;
}


    static int
compile_expr8(char_u **arg, cctx_T *cctx, ppconst_T *ppconst)
{
    type_T *want_type = NULL;

    
    if (**arg == '<' && eval_isnamec1((*arg)[1]))
    {
	++*arg;
	want_type = parse_type(arg, cctx->ctx_type_list, TRUE);
	if (want_type == NULL)
	    return FAIL;

	if (**arg != '>')
	{
	    if (*skipwhite(*arg) == '>')
		semsg(_(e_no_white_space_allowed_before_str_str), ">", *arg);
	    else
		emsg(_(e_missing_gt));
	    return FAIL;
	}
	++*arg;
	if (may_get_next_line_error(*arg, arg, cctx) == FAIL)
	    return FAIL;
    }

    if (compile_expr9(arg, cctx, ppconst) == FAIL)
	return FAIL;

    if (want_type != NULL)
    {
	type_T	    *actual;
	where_T	    where = WHERE_INIT;

	where.wt_kind = WT_CAST;
	generate_ppconst(cctx, ppconst);
	actual = get_type_on_stack(cctx, 0);
	if (check_type_maybe(want_type, actual, FALSE, where) != OK)
	{
	    if (need_type_where(actual, want_type, FALSE, -1, where, cctx, FALSE, FALSE)
		    == FAIL)
		return FAIL;
	}
    }

    return OK;
}


    static int
compile_expr7(char_u **arg, cctx_T *cctx, ppconst_T *ppconst)
{
    char_u	*op;
    char_u	*next;
    int		ppconst_used = ppconst->pp_used;

    
    if (compile_expr8(arg, cctx, ppconst) == FAIL)
	return FAIL;

    
    for (;;)
    {
	op = may_peek_next_line(cctx, *arg, &next);
	if (*op != '*' && *op != '/' && *op != '%')
	    break;
	if (next != NULL)
	{
	    *arg = next_line_from_context(cctx, TRUE);
	    op = skipwhite(*arg);
	}

	if (!IS_WHITE_OR_NUL(**arg) || !IS_WHITE_OR_NUL(op[1]))
	{
	    error_white_both(op, 1);
	    return FAIL;
	}
	if (may_get_next_line_error(op + 1, arg, cctx) == FAIL)
	    return FAIL;

	
	if (compile_expr8(arg, cctx, ppconst) == FAIL)
	    return FAIL;

	if (ppconst->pp_used == ppconst_used + 2
		&& ppconst->pp_tv[ppconst_used].v_type == VAR_NUMBER
		&& ppconst->pp_tv[ppconst_used + 1].v_type == VAR_NUMBER)
	{
	    typval_T	    *tv1 = &ppconst->pp_tv[ppconst_used];
	    typval_T	    *tv2 = &ppconst->pp_tv[ppconst_used + 1];
	    varnumber_T	    res = 0;
	    int		    failed = FALSE;

	    
	    switch (*op)
	    {
		case '*': res = tv1->vval.v_number * tv2->vval.v_number;
			  break;
		case '/': res = num_divide(tv1->vval.v_number,
						  tv2->vval.v_number, &failed);
			  break;
		case '%': res = num_modulus(tv1->vval.v_number,
						  tv2->vval.v_number, &failed);
			  break;
	    }
	    if (failed)
		return FAIL;
	    tv1->vval.v_number = res;
	    --ppconst->pp_used;
	}
	else
	{
	    generate_ppconst(cctx, ppconst);
	    generate_two_op(cctx, op);
	}
    }

    return OK;
}


    static int
compile_expr6(char_u **arg, cctx_T *cctx, ppconst_T *ppconst)
{
    char_u	*op;
    char_u	*next;
    int		oplen;
    int		ppconst_used = ppconst->pp_used;

    
    if (compile_expr7(arg, cctx, ppconst) == FAIL)
	return FAIL;

    
    for (;;)
    {
	op = may_peek_next_line(cctx, *arg, &next);
	if (*op != '+' && *op != '-' && !(*op == '.' && *(op + 1) == '.'))
	    break;
	if (op[0] == op[1] && *op != '.' && next)
	    
	    
	    break;
	oplen = (*op == '.' ? 2 : 1);
	if (next != NULL)
	{
	    *arg = next_line_from_context(cctx, TRUE);
	    op = skipwhite(*arg);
	}

	if (!IS_WHITE_OR_NUL(**arg) || !IS_WHITE_OR_NUL(op[oplen]))
	{
	    error_white_both(op, oplen);
	    return FAIL;
	}

	if (may_get_next_line_error(op + oplen, arg, cctx) == FAIL)
	    return FAIL;

	
	if (compile_expr7(arg, cctx, ppconst) == FAIL)
	    return FAIL;

	if (ppconst->pp_used == ppconst_used + 2
		&& (*op == '.'
		    ? (ppconst->pp_tv[ppconst_used].v_type == VAR_STRING
		    && ppconst->pp_tv[ppconst_used + 1].v_type == VAR_STRING)
		    : (ppconst->pp_tv[ppconst_used].v_type == VAR_NUMBER
		    && ppconst->pp_tv[ppconst_used + 1].v_type == VAR_NUMBER)))
	{
	    typval_T *tv1 = &ppconst->pp_tv[ppconst_used];
	    typval_T *tv2 = &ppconst->pp_tv[ppconst_used + 1];

	    
	    if (*op == '+')
		tv1->vval.v_number = tv1->vval.v_number + tv2->vval.v_number;
	    else if (*op == '-')
		tv1->vval.v_number = tv1->vval.v_number - tv2->vval.v_number;
	    else
	    {
		
		char_u *s1 = tv1->vval.v_string;
		char_u *s2 = tv2->vval.v_string;
		size_t len1 = STRLEN(s1);

		tv1->vval.v_string = alloc((int)(len1 + STRLEN(s2) + 1));
		if (tv1->vval.v_string == NULL)
		{
		    clear_ppconst(ppconst);
		    return FAIL;
		}
		mch_memmove(tv1->vval.v_string, s1, len1);
		STRCPY(tv1->vval.v_string + len1, s2);
		vim_free(s1);
		vim_free(s2);
	    }
	    --ppconst->pp_used;
	}
	else
	{
	    generate_ppconst(cctx, ppconst);
	    ppconst->pp_is_const = FALSE;
	    if (*op == '.')
	    {
		if (may_generate_2STRING(-2, TOSTRING_NONE, cctx) == FAIL
			|| may_generate_2STRING(-1, TOSTRING_NONE, cctx) == FAIL)
		    return FAIL;
		if (generate_CONCAT(cctx, 2) == FAIL)
		    return FAIL;
	    }
	    else
		generate_two_op(cctx, op);
	}
    }

    return OK;
}


    static int
compile_expr5(char_u **arg, cctx_T *cctx, ppconst_T *ppconst)
{
    exprtype_T	type = EXPR_UNKNOWN;
    char_u	*p;
    char_u	*next;
    int		len = 2;
    int		ppconst_used = ppconst->pp_used;
    isn_T	*isn;

    
    if (compile_expr6(arg, cctx, ppconst) == FAIL)
	return FAIL;

    
    for (;;)
    {
	type = EXPR_UNKNOWN;

	p = may_peek_next_line(cctx, *arg, &next);
	if (p[0] == '<' && p[1] == '<')
	    type = EXPR_LSHIFT;
	else if (p[0] == '>' && p[1] == '>')
	    type = EXPR_RSHIFT;

	if (type == EXPR_UNKNOWN)
	    return OK;

	
	if (ppconst->pp_used == ppconst_used + 1)
	{
	    if (ppconst->pp_tv[ppconst->pp_used - 1].v_type != VAR_NUMBER)
	    {
		
		emsg(_(e_bitshift_ops_must_be_number));
		return FAIL;
	    }
	}
	else
	{
	    type_T	*t = get_type_on_stack(cctx, 0);

	    if (need_type(t, &t_number, FALSE, 0, 0, cctx, FALSE, FALSE) == FAIL)
	    {
		emsg(_(e_bitshift_ops_must_be_number));
		return FAIL;
	    }
	}

	if (next != NULL)
	{
	    *arg = next_line_from_context(cctx, TRUE);
	    p = skipwhite(*arg);
	}

	if (!IS_WHITE_OR_NUL(**arg) || !IS_WHITE_OR_NUL(p[len]))
	{
	    error_white_both(p, len);
	    return FAIL;
	}

	
	if (may_get_next_line_error(p + len, arg, cctx) == FAIL)
	    return FAIL;

	if (compile_expr6(arg, cctx, ppconst) == FAIL)
	    return FAIL;

	if (ppconst->pp_used == ppconst_used + 2)
	{
	    typval_T	*tv1 = &ppconst->pp_tv[ppconst->pp_used - 2];
	    typval_T	*tv2 = &ppconst->pp_tv[ppconst->pp_used - 1];

	    
	    if (tv2->v_type != VAR_NUMBER || tv2->vval.v_number < 0)
	    {
		
		if (tv2->v_type != VAR_NUMBER)
		    emsg(_(e_bitshift_ops_must_be_number));
		else
		    emsg(_(e_bitshift_ops_must_be_positive));
		return FAIL;
	    }

	    if (tv2->vval.v_number > MAX_LSHIFT_BITS)
		tv1->vval.v_number = 0;
	    else if (type == EXPR_LSHIFT)
		tv1->vval.v_number =
			(uvarnumber_T)tv1->vval.v_number << tv2->vval.v_number;
	    else
		tv1->vval.v_number =
			(uvarnumber_T)tv1->vval.v_number >> tv2->vval.v_number;
	    clear_tv(tv2);
	    --ppconst->pp_used;
	}
	else
	{
	    if (need_type(get_type_on_stack(cctx, 0), &t_number, FALSE,
					     0, 0, cctx, FALSE, FALSE) == FAIL)
	    {
		emsg(_(e_bitshift_ops_must_be_number));
		return FAIL;
	    }

	    generate_ppconst(cctx, ppconst);

	    isn = generate_instr_drop(cctx, ISN_OPNR, 1);
	    if (isn == NULL)
		return FAIL;

	    if (isn != NULL)
		isn->isn_arg.op.op_type = type;
	}
    }

    return OK;
}


    static int
compile_expr4(char_u **arg, cctx_T *cctx, ppconst_T *ppconst)
{
    exprtype_T	type = EXPR_UNKNOWN;
    char_u	*p;
    char_u	*next;
    int		len = 2;
    int		type_is = FALSE;
    int		ppconst_used = ppconst->pp_used;

    
    if (compile_expr5(arg, cctx, ppconst) == FAIL)
	return FAIL;

    p = may_peek_next_line(cctx, *arg, &next);

    type = get_compare_type(p, &len, &type_is);

    
    if (type != EXPR_UNKNOWN)
    {
	int ic = FALSE;  

	if (next != NULL)
	{
	    *arg = next_line_from_context(cctx, TRUE);
	    p = skipwhite(*arg);
	}
	if (type_is && (p[len] == '?' || p[len] == '#'))
	{
	    semsg(_(e_invalid_expression_str), *arg);
	    return FAIL;
	}
	
	if (p[len] == '?')
	{
	    ic = TRUE;
	    ++len;
	}
	
	else if (p[len] == '#')
	    ++len;
	

	if (!IS_WHITE_OR_NUL(**arg) || !IS_WHITE_OR_NUL(p[len]))
	{
	    error_white_both(p, len);
	    return FAIL;
	}

	
	if (may_get_next_line_error(p + len, arg, cctx) == FAIL)
	    return FAIL;

	if (compile_expr5(arg, cctx, ppconst) == FAIL)
	    return FAIL;

	if (ppconst->pp_used == ppconst_used + 2)
	{
	    typval_T	*tv1 = &ppconst->pp_tv[ppconst->pp_used - 2];
	    typval_T	*tv2 = &ppconst->pp_tv[ppconst->pp_used - 1];
	    int		ret;

	    
	    
	    
	    if (check_compare_types(type, tv1, tv2) == FAIL)
		ret = FAIL;
	    else
	    {
		ret = typval_compare(tv1, tv2, type, ic);
		tv1->v_type = VAR_BOOL;
		tv1->vval.v_number = tv1->vval.v_number
						      ? VVAL_TRUE : VVAL_FALSE;
		clear_tv(tv2);
		--ppconst->pp_used;
	    }
	    return ret;
	}

	generate_ppconst(cctx, ppconst);
	return generate_COMPARE(cctx, type, ic);
    }

    return OK;
}

static int compile_expr3(char_u **arg,  cctx_T *cctx, ppconst_T *ppconst);


    static int
compile_and_or(
	char_u **arg,
	cctx_T	*cctx,
	char	*op,
	ppconst_T *ppconst,
	int	ppconst_used UNUSED)
{
    char_u	*next;
    char_u	*p = may_peek_next_line(cctx, *arg, &next);
    int		opchar = *op;

    if (p[0] == opchar && p[1] == opchar)
    {
	garray_T	*instr = &cctx->ctx_instr;
	garray_T	end_ga;
	int		save_skip = cctx->ctx_skip;

	
	ga_init2(&end_ga, sizeof(int), 10);
	while (p[0] == opchar && p[1] == opchar)
	{
	    int	start_lnum = SOURCING_LNUM;
	    int	save_sourcing_lnum;
	    int		start_ctx_lnum = cctx->ctx_lnum;
	    int		save_lnum;
	    int		const_used;
	    int		status;
	    jumpwhen_T	jump_when = opchar == '|'
				      ? JUMP_IF_COND_TRUE : JUMP_IF_COND_FALSE;

	    if (next != NULL)
	    {
		*arg = next_line_from_context(cctx, TRUE);
		p = skipwhite(*arg);
	    }

	    if (!IS_WHITE_OR_NUL(**arg) || !IS_WHITE_OR_NUL(p[2]))
	    {
		semsg(_(e_white_space_required_before_and_after_str_at_str),
									op, p);
		ga_clear(&end_ga);
		return FAIL;
	    }

	    save_sourcing_lnum = SOURCING_LNUM;
	    SOURCING_LNUM = start_lnum;
	    save_lnum = cctx->ctx_lnum;
	    cctx->ctx_lnum = start_ctx_lnum;

	    status = check_ppconst_bool(ppconst);
	    if (status != FAIL)
	    {
		
		if (ppconst->pp_used > 0)
		{
		    typval_T	*tv = &ppconst->pp_tv[ppconst->pp_used - 1];
		    int		is_true = tv2bool(tv);

		    if ((is_true && opchar == '|')
						|| (!is_true && opchar == '&'))
		    {
			
			
			cctx->ctx_skip = SKIP_YES;
			clear_tv(tv);
			tv->v_type = VAR_BOOL;
			tv->vval.v_number = is_true ? VVAL_TRUE : VVAL_FALSE;
		    }
		    else
		    {
			
			
			--ppconst->pp_used;
			jump_when = JUMP_NEVER;
		    }
		}
		else
		{
		    
		    status = bool_on_stack(cctx);
		}
	    }
	    if (status != FAIL)
		status = ga_grow(&end_ga, 1);
	    cctx->ctx_lnum = save_lnum;
	    if (status == FAIL)
	    {
		ga_clear(&end_ga);
		return FAIL;
	    }

	    if (jump_when != JUMP_NEVER)
	    {
		if (cctx->ctx_skip != SKIP_YES)
		{
		    *(((int *)end_ga.ga_data) + end_ga.ga_len) = instr->ga_len;
		    ++end_ga.ga_len;
		}
		generate_JUMP(cctx, jump_when, 0);
	    }

	    
	    SOURCING_LNUM = save_sourcing_lnum;
	    if (may_get_next_line_error(p + 2, arg, cctx) == FAIL)
	    {
		ga_clear(&end_ga);
		return FAIL;
	    }

	    const_used = ppconst->pp_used;
	    if ((opchar == '|' ? compile_expr3(arg, cctx, ppconst)
				  : compile_expr4(arg, cctx, ppconst)) == FAIL)
	    {
		ga_clear(&end_ga);
		return FAIL;
	    }

	    
	    if (ppconst->pp_used == const_used + 1)
	    {
		typval_T	*tv = &ppconst->pp_tv[ppconst->pp_used - 1];

		if (tv->v_type == VAR_NUMBER
			 && (tv->vval.v_number == 1 || tv->vval.v_number == 0))
		{
		    tv->vval.v_number = tv->vval.v_number == 1
						      ? VVAL_TRUE : VVAL_FALSE;
		    tv->v_type = VAR_BOOL;
		}
	    }

	    p = may_peek_next_line(cctx, *arg, &next);
	}

	if (check_ppconst_bool(ppconst) == FAIL)
	{
	    ga_clear(&end_ga);
	    return FAIL;
	}

	if (cctx->ctx_skip != SKIP_YES && ppconst->pp_used == 0)
	    
	    if (bool_on_stack(cctx) == FAIL)
	    {
		ga_clear(&end_ga);
		return FAIL;
	    }

	if (end_ga.ga_len > 0)
	{
	    
	    generate_ppconst(cctx, ppconst);
	    while (end_ga.ga_len > 0)
	    {
		isn_T	*isn;

		--end_ga.ga_len;
		isn = ((isn_T *)instr->ga_data)
				  + *(((int *)end_ga.ga_data) + end_ga.ga_len);
		isn->isn_arg.jump.jump_where = instr->ga_len;
	    }
	}
	ga_clear(&end_ga);

	cctx->ctx_skip = save_skip;
    }

    return OK;
}


    static int
compile_expr3(char_u **arg, cctx_T *cctx, ppconst_T *ppconst)
{
    int		ppconst_used = ppconst->pp_used;

    
    if (compile_expr4(arg, cctx, ppconst) == FAIL)
	return FAIL;

    
    return compile_and_or(arg, cctx, "&&", ppconst, ppconst_used);
}


    static int
compile_expr2(char_u **arg, cctx_T *cctx, ppconst_T *ppconst)
{
    int		ppconst_used = ppconst->pp_used;

    
    if (compile_expr3(arg, cctx, ppconst) == FAIL)
	return FAIL;

    
    return compile_and_or(arg, cctx, "||", ppconst, ppconst_used);
}


    int
compile_expr1(char_u **arg, cctx_T *cctx, ppconst_T *ppconst)
{
    char_u	*p;
    int		ppconst_used = ppconst->pp_used;
    char_u	*next;

    
    if (cctx->ctx_skip == SKIP_YES)
    {
	int		prev_did_emsg = did_emsg;

	skip_expr_cctx(arg, cctx);
	return did_emsg == prev_did_emsg ? OK : FAIL;
    }

    
    if (compile_expr2(arg, cctx, ppconst) == FAIL)
	return FAIL;

    p = may_peek_next_line(cctx, *arg, &next);
    if (*p == '?')
    {
	int		op_falsy = p[1] == '?';
	garray_T	*instr = &cctx->ctx_instr;
	garray_T	*stack = &cctx->ctx_type_stack;
	int		alt_idx = instr->ga_len;
	int		end_idx = 0;
	isn_T		*isn;
	type_T		*type1 = NULL;
	int		has_const_expr = FALSE;
	int		const_value = FALSE;
	int		save_skip = cctx->ctx_skip;

	if (next != NULL)
	{
	    *arg = next_line_from_context(cctx, TRUE);
	    p = skipwhite(*arg);
	}

	if (!IS_WHITE_OR_NUL(**arg) || !IS_WHITE_OR_NUL(p[1 + op_falsy]))
	{
	    semsg(_(e_white_space_required_before_and_after_str_at_str),
						     op_falsy ? "??" : "?", p);
	    return FAIL;
	}

	if (ppconst->pp_used == ppconst_used + 1)
	{
	    
	    
	    has_const_expr = TRUE;
	    if (op_falsy)
		const_value = tv2bool(&ppconst->pp_tv[ppconst_used]);
	    else
	    {
		int error = FALSE;

		const_value = tv_get_bool_chk(&ppconst->pp_tv[ppconst_used],
								       &error);
		if (error)
		    return FAIL;
	    }
	    cctx->ctx_skip = save_skip == SKIP_YES ||
		 (op_falsy ? const_value : !const_value) ? SKIP_YES : SKIP_NOT;

	    if (op_falsy && cctx->ctx_skip == SKIP_YES)
		
		generate_ppconst(cctx, ppconst);
	    else
	    {
		clear_tv(&ppconst->pp_tv[ppconst_used]);
		--ppconst->pp_used;
	    }
	}
	else
	{
	    generate_ppconst(cctx, ppconst);
	    if (op_falsy)
		end_idx = instr->ga_len;
	    generate_JUMP(cctx, op_falsy
				   ? JUMP_AND_KEEP_IF_TRUE : JUMP_IF_FALSE, 0);
	    if (op_falsy)
		type1 = get_type_on_stack(cctx, -1);
	}

	
	if (may_get_next_line_error(p + 1 + op_falsy, arg, cctx) == FAIL)
	    return FAIL;
	if (compile_expr1(arg, cctx, ppconst) == FAIL)
	    return FAIL;

	if (!has_const_expr)
	{
	    generate_ppconst(cctx, ppconst);

	    if (!op_falsy)
	    {
		
		type1 = get_type_on_stack(cctx, 0);
		--stack->ga_len;

		end_idx = instr->ga_len;
		generate_JUMP(cctx, JUMP_ALWAYS, 0);

		
		isn = ((isn_T *)instr->ga_data) + alt_idx;
		isn->isn_arg.jump.jump_where = instr->ga_len;
	    }
	}

	if (!op_falsy)
	{
	    
	    p = may_peek_next_line(cctx, *arg, &next);
	    if (*p != ':')
	    {
		emsg(_(e_missing_colon_after_questionmark));
		return FAIL;
	    }
	    if (next != NULL)
	    {
		*arg = next_line_from_context(cctx, TRUE);
		p = skipwhite(*arg);
	    }

	    if (!IS_WHITE_OR_NUL(**arg) || !IS_WHITE_OR_NUL(p[1]))
	    {
		semsg(_(e_white_space_required_before_and_after_str_at_str),
								       ":", p);
		return FAIL;
	    }

	    
	    if (has_const_expr)
		cctx->ctx_skip = save_skip == SKIP_YES || const_value
							 ? SKIP_YES : SKIP_NOT;
	    if (may_get_next_line_error(p + 1, arg, cctx) == FAIL)
		return FAIL;
	    if (compile_expr1(arg, cctx, ppconst) == FAIL)
		return FAIL;
	}

	if (!has_const_expr)
	{
	    type_T	**typep;

	    generate_ppconst(cctx, ppconst);
	    ppconst->pp_is_const = FALSE;

	    
	    typep = &((((type2_T *)stack->ga_data)
					      + stack->ga_len - 1)->type_curr);
	    common_type(type1, *typep, typep, cctx->ctx_type_list);

	    
	    isn = ((isn_T *)instr->ga_data) + end_idx;
	    isn->isn_arg.jump.jump_where = instr->ga_len;
	}

	cctx->ctx_skip = save_skip;
    }
    return OK;
}


    int
compile_expr0_ext(char_u **arg,  cctx_T *cctx, int *is_const)
{
    ppconst_T	ppconst;

    CLEAR_FIELD(ppconst);
    if (compile_expr1(arg, cctx, &ppconst) == FAIL)
    {
	clear_ppconst(&ppconst);
	return FAIL;
    }
    if (is_const != NULL)
	*is_const = ppconst.pp_used > 0 || ppconst.pp_is_const;
    if (generate_ppconst(cctx, &ppconst) == FAIL)
	return FAIL;
    return OK;
}


    int
compile_expr0(char_u **arg,  cctx_T *cctx)
{
    return compile_expr0_ext(arg, cctx, NULL);
}


#endif 
