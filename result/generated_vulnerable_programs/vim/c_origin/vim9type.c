



#define USING_FLOAT_STUFF
#include "vim.h"

#if defined(FEAT_EVAL) || defined(PROTO)

#ifdef VMS
# include <float.h>
#endif


#ifdef PROTO
# include "vim9.h"
#endif


    type_T *
get_type_ptr(garray_T *type_gap)
{
    type_T *type;

    if (ga_grow(type_gap, 1) == FAIL)
	return NULL;
    type = ALLOC_CLEAR_ONE(type_T);
    if (type == NULL)
	return NULL;

    ((type_T **)type_gap->ga_data)[type_gap->ga_len] = type;
    ++type_gap->ga_len;
    return type;
}


    type_T *
copy_type(type_T *type, garray_T *type_gap)
{
    type_T *copy = get_type_ptr(type_gap);

    if (copy == NULL)
	return type;
    *copy = *type;
    copy->tt_flags &= ~TTFLAG_STATIC;

    if (type->tt_args != NULL
	   && func_type_add_arg_types(copy, type->tt_argcount, type_gap) == OK)
	for (int i = 0; i < type->tt_argcount; ++i)
	    copy->tt_args[i] = type->tt_args[i];

    return copy;
}


    static type_T *
copy_type_deep_rec(type_T *type, garray_T *type_gap, garray_T *seen_types)
{
    for (int i = 0; i < seen_types->ga_len; ++i)
	if (((type_T **)seen_types->ga_data)[i * 2] == type)
	    
	    return ((type_T **)seen_types->ga_data)[i * 2 + 1];

    type_T *copy = copy_type(type, type_gap);
    if (ga_grow(seen_types, 1) == FAIL)
	return copy;
    ((type_T **)seen_types->ga_data)[seen_types->ga_len * 2] = type;
    ((type_T **)seen_types->ga_data)[seen_types->ga_len * 2 + 1] = copy;
    ++seen_types->ga_len;

    if (copy->tt_member != NULL)
	copy->tt_member = copy_type_deep_rec(copy->tt_member,
							 type_gap, seen_types);
    if (type->tt_args != NULL)
	for (int i = 0; i < type->tt_argcount; ++i)
	    copy->tt_args[i] = copy_type_deep_rec(copy->tt_args[i],
							 type_gap, seen_types);

    return copy;
}


    static type_T *
copy_type_deep(type_T *type, garray_T *type_gap)
{
    garray_T seen_types;
    
    ga_init2(&seen_types, sizeof(type_T *) * 2, 20);

    type_T *res = copy_type_deep_rec(type, type_gap, &seen_types);

    ga_clear(&seen_types);
    return res;
}

    void
clear_type_list(garray_T *gap)
{
    while (gap->ga_len > 0)
	vim_free(((type_T **)gap->ga_data)[--gap->ga_len]);
    ga_clear(gap);
}

    void
clear_func_type_list(garray_T *gap, type_T **func_type)
{
    while (gap->ga_len > 0)
    {
	
	if (*func_type == ((type_T **)gap->ga_data)[--gap->ga_len])
	    *func_type = &t_func_any;
	vim_free(((type_T **)gap->ga_data)[gap->ga_len]);
    }
    ga_clear(gap);
}


    type_T *
alloc_type(type_T *type)
{
    type_T *ret;

    if (type == NULL)
	return NULL;

    
    if (type->tt_flags & TTFLAG_STATIC)
	return type;

    ret = ALLOC_ONE(type_T);
    *ret = *type;

    if (ret->tt_member != NULL)
	ret->tt_member = alloc_type(ret->tt_member);

    if (type->tt_argcount > 0 && type->tt_args != NULL)
    {
	int i;

	ret->tt_args = ALLOC_MULT(type_T *, type->tt_argcount);
	if (ret->tt_args != NULL)
	    for (i = 0; i < type->tt_argcount; ++i)
		ret->tt_args[i] = alloc_type(type->tt_args[i]);
    }
    else
	ret->tt_args = NULL;

    return ret;
}


    void
free_type(type_T *type)
{
    int i;

    if (type == NULL || (type->tt_flags & TTFLAG_STATIC))
	return;
    if (type->tt_args != NULL)
    {
	for (i = 0; i < type->tt_argcount; ++i)
	    free_type(type->tt_args[i]);
	vim_free(type->tt_args);
    }

    free_type(type->tt_member);

    vim_free(type);
}


    static int
set_tv_type_recurse(type_T *type)
{
    return type->tt_member != NULL
		&& (type->tt_member->tt_type == VAR_DICT
				       || type->tt_member->tt_type == VAR_LIST)
		&& type->tt_member->tt_member != NULL
		&& type->tt_member->tt_member != &t_any
		&& type->tt_member->tt_member != &t_unknown;
}


    static void
set_tv_type_dict(dict_T *d, type_T *type)
{
    if (d->dv_type == type)
	return;

    free_type(d->dv_type);
    d->dv_type = alloc_type(type);

    
    if (!set_tv_type_recurse(type))
	return;

    int		todo = (int)d->dv_hashtab.ht_used;
    hashitem_T	*hi;
    dictitem_T	*di;

    FOR_ALL_HASHTAB_ITEMS(&d->dv_hashtab, hi, todo)
    {
	if (!HASHITEM_EMPTY(hi))
	{
	    --todo;
	    di = HI2DI(hi);
	    set_tv_type(&di->di_tv, type->tt_member);
	}
    }
}


    static void
set_tv_type_list(list_T *l, type_T *type)
{
    if (l->lv_type == type)
	return;

    free_type(l->lv_type);
    l->lv_type = alloc_type(type);

    
    if (l->lv_first == &range_list_item || !set_tv_type_recurse(type))
	return;

    listitem_T	*li;

    FOR_ALL_LIST_ITEMS(l, li)
	set_tv_type(&li->li_tv, type->tt_member);
}


    void
set_tv_type(typval_T *tv, type_T *type)
{
    if (type->tt_type == VAR_ANY)
	
	
	return;

    if (tv->v_type == VAR_DICT && tv->vval.v_dict != NULL)
	set_tv_type_dict(tv->vval.v_dict, type);
    else if (tv->v_type == VAR_LIST && tv->vval.v_list != NULL)
	set_tv_type_list(tv->vval.v_list, type);
}

    type_T *
get_list_type(type_T *member_type, garray_T *type_gap)
{
    type_T *type;

    
    if (member_type == NULL || member_type->tt_type == VAR_ANY)
	return &t_list_any;
    if (member_type->tt_type == VAR_VOID
	    || member_type->tt_type == VAR_UNKNOWN)
	return &t_list_empty;
    if (member_type->tt_type == VAR_BOOL)
	return &t_list_bool;
    if (member_type->tt_type == VAR_NUMBER)
	return &t_list_number;
    if (member_type->tt_type == VAR_STRING)
	return &t_list_string;

    
    type = get_type_ptr(type_gap);
    if (type == NULL)
	return &t_any;
    type->tt_type = VAR_LIST;
    type->tt_member = member_type;
    type->tt_argcount = 0;
    type->tt_args = NULL;
    return type;
}

    type_T *
get_dict_type(type_T *member_type, garray_T *type_gap)
{
    type_T *type;

    
    if (member_type == NULL || member_type->tt_type == VAR_ANY)
	return &t_dict_any;
    if (member_type->tt_type == VAR_VOID
	    || member_type->tt_type == VAR_UNKNOWN)
	return &t_dict_empty;
    if (member_type->tt_type == VAR_BOOL)
	return &t_dict_bool;
    if (member_type->tt_type == VAR_NUMBER)
	return &t_dict_number;
    if (member_type->tt_type == VAR_STRING)
	return &t_dict_string;

    
    type = get_type_ptr(type_gap);
    if (type == NULL)
	return &t_any;
    type->tt_type = VAR_DICT;
    type->tt_member = member_type;
    type->tt_argcount = 0;
    type->tt_args = NULL;
    return type;
}


    type_T *
alloc_func_type(type_T *ret_type, int argcount, garray_T *type_gap)
{
    type_T *type = get_type_ptr(type_gap);

    if (type == NULL)
	return &t_any;
    type->tt_type = VAR_FUNC;
    type->tt_member = ret_type == NULL ? &t_unknown : ret_type;
    type->tt_argcount = argcount;
    type->tt_args = NULL;
    return type;
}


    type_T *
get_func_type(type_T *ret_type, int argcount, garray_T *type_gap)
{
    
    if (ret_type == &t_unknown || ret_type == NULL)
    {
	
	return &t_func_unknown;
    }
    if (ret_type == &t_void)
    {
	if (argcount == 0)
	    return &t_func_0_void;
	else
	    return &t_func_void;
    }
    if (ret_type == &t_any)
    {
	if (argcount == 0)
	    return &t_func_0_any;
	else
	    return &t_func_any;
    }
    if (ret_type == &t_number)
    {
	if (argcount == 0)
	    return &t_func_0_number;
	else
	    return &t_func_number;
    }
    if (ret_type == &t_string)
    {
	if (argcount == 0)
	    return &t_func_0_string;
	else
	    return &t_func_string;
    }

    return alloc_func_type(ret_type, argcount, type_gap);
}


    int
func_type_add_arg_types(
	type_T	    *functype,
	int	    argcount,
	garray_T    *type_gap)
{
    
    
    if (ga_grow(type_gap, 1) == FAIL)
	return FAIL;
    functype->tt_args = ALLOC_CLEAR_MULT(type_T *, argcount);
    if (functype->tt_args == NULL)
	return FAIL;
    ((type_T **)type_gap->ga_data)[type_gap->ga_len] =
						     (void *)functype->tt_args;
    ++type_gap->ga_len;
    return OK;
}


    int
type_any_or_unknown(type_T *type)
{
    return type == NULL || type->tt_type == VAR_ANY
					|| type->tt_type == VAR_UNKNOWN;
}


    static type_T *
special_typval2type(typval_T *tv)
{
    switch (tv->vval.v_number)
    {
	case VVAL_NULL:
	    return &t_null;

	case VVAL_NONE:
	    return &t_none;

	case VVAL_TRUE:
	case VVAL_FALSE:
	    return &t_bool;

	default:
	    return &t_unknown;
    }
}


    static type_T *
list_typval2type(typval_T *tv, int copyID, garray_T *type_gap, int flags)
{
    list_T	*l = tv->vval.v_list;
    listitem_T	*li;
    type_T	*member_type = NULL;

    
    
    
    if (l == NULL || (l->lv_first == NULL
		&& (l->lv_type == NULL || l->lv_type->tt_member == &t_any)))
	return &t_list_empty;

    if ((flags & TVTT_DO_MEMBER) == 0)
	return &t_list_any;

    
    
    if (l->lv_type != NULL && (l->lv_first == NULL
		|| (flags & TVTT_MORE_SPECIFIC) == 0
		|| l->lv_type->tt_member != &t_any))
	
	return copy_type_deep(l->lv_type, type_gap);

    if (l->lv_first == &range_list_item)
	return &t_list_number;

    if (l->lv_copyID == copyID)
	
	return &t_list_any;

    l->lv_copyID = copyID;

    
    member_type = typval2type(&l->lv_first->li_tv, copyID, type_gap,
							TVTT_DO_MEMBER);
    for (li = l->lv_first->li_next; li != NULL; li = li->li_next)
	common_type(typval2type(&li->li_tv, copyID, type_gap, TVTT_DO_MEMBER),
					member_type, &member_type, type_gap);

    return get_list_type(member_type, type_gap);
}


    static type_T *
dict_typval2type(typval_T *tv, int copyID, garray_T *type_gap, int flags)
{
    dict_iterator_T	iter;
    typval_T		*value;
    dict_T		*d = tv->vval.v_dict;
    type_T		*member_type = NULL;

    if (d == NULL || (d->dv_hashtab.ht_used == 0 && d->dv_type == NULL))
	return &t_dict_empty;

    if ((flags & TVTT_DO_MEMBER) == 0)
	return &t_dict_any;

    
    
    if (d->dv_type != NULL && (d->dv_hashtab.ht_used == 0
		|| (flags & TVTT_MORE_SPECIFIC) == 0
		|| d->dv_type->tt_member != &t_any))
	return d->dv_type;

    if (d->dv_copyID == copyID)
	
	return &t_dict_any;

    d->dv_copyID = copyID;

    
    dict_iterate_start(tv, &iter);
    dict_iterate_next(&iter, &value);
    member_type = typval2type(value, copyID, type_gap, TVTT_DO_MEMBER);

    while (dict_iterate_next(&iter, &value) != NULL)
	common_type(typval2type(value, copyID, type_gap, TVTT_DO_MEMBER),
					member_type, &member_type, type_gap);

    return get_dict_type(member_type, type_gap);
}


    static type_T *
partial_typval2type(typval_T *tv, ufunc_T *ufunc, garray_T *type_gap)
{
    partial_T *pt = tv->vval.v_partial;
    type_T  *type;

    type = get_type_ptr(type_gap);
    if (type == NULL)
	return NULL;

    *type = *ufunc->uf_func_type;
    if (type->tt_argcount >= 0 && pt->pt_argc > 0)
    {
	type->tt_argcount -= pt->pt_argc;
	type->tt_min_argcount -= pt->pt_argc;
	if (type->tt_argcount > 0 && func_type_add_arg_types(type,
		    type->tt_argcount, type_gap) == OK)
	    for (int i = 0; i < type->tt_argcount; ++i)
		type->tt_args[i] =
		    ufunc->uf_func_type->tt_args[i + pt->pt_argc];
    }
    if (pt->pt_func != NULL)
	type->tt_member = pt->pt_func->uf_ret_type;

    return type;
}


    static type_T *
oc_typval2type(typval_T *tv)
{
    if (tv->v_type == VAR_CLASS)
    {
	if (tv->vval.v_class == NULL)
	    return &t_class;

	return &tv->vval.v_class->class_type;
    }

    if (tv->vval.v_object != NULL)
	return &tv->vval.v_object->obj_class->class_object_type;

    return &t_object;
}


    static type_T *
fp_typval2type(typval_T *tv, garray_T *type_gap)
{
    char_u	*name = NULL;
    ufunc_T	*ufunc = NULL;
    type_T	*type;
    type_T	*member_type = NULL;
    int		argcount = 0;
    int		min_argcount = 0;

    if (tv->v_type == VAR_PARTIAL && tv->vval.v_partial != NULL)
    {
	if (tv->vval.v_partial->pt_func != NULL)
	    ufunc = tv->vval.v_partial->pt_func;
	else
	    name = tv->vval.v_partial->pt_name;
    }
    else
	name = tv->vval.v_string;

    if (name == NULL && ufunc == NULL)
	return &t_func_unknown;

    if (name != NULL)
    {
	int idx = find_internal_func(name);

	if (idx >= 0)
	{
	    type_T *decl_type;  

	    internal_func_get_argcount(idx, &argcount, &min_argcount);
	    member_type = internal_func_ret_type(idx, 0, NULL, &decl_type,
		    type_gap);
	}
	else
	    ufunc = find_func(name, FALSE);
    }
    if (ufunc != NULL)
    {
	
	
	if (ufunc->uf_def_status == UF_TO_BE_COMPILED
		&& compile_def_function(ufunc, TRUE, CT_NONE, NULL)
		== FAIL)
	    return NULL;
	if (ufunc->uf_func_type == NULL)
	    set_function_type(ufunc);
	if (ufunc->uf_func_type != NULL)
	{
	    if (tv->v_type == VAR_PARTIAL && tv->vval.v_partial != NULL)
		return partial_typval2type(tv, ufunc, type_gap);
	    return ufunc->uf_func_type;
	}
    }

    type = get_type_ptr(type_gap);
    if (type == NULL)
	return NULL;
    type->tt_type = tv->v_type;
    type->tt_argcount = argcount;
    type->tt_min_argcount = min_argcount;
    if (tv->v_type == VAR_PARTIAL && tv->vval.v_partial != NULL
					&& tv->vval.v_partial->pt_argc > 0)
    {
	type->tt_argcount -= tv->vval.v_partial->pt_argc;
	type->tt_min_argcount -= tv->vval.v_partial->pt_argc;
    }
    type->tt_member = member_type;

    return type;
}


    static type_T *
typval2type_int(typval_T *tv, int copyID, garray_T *type_gap, int flags)
{
    switch (tv->v_type)
    {
	case VAR_UNKNOWN:
	    return &t_unknown;

	case VAR_ANY:
	    return &t_any;

	case VAR_VOID:
	    return &t_void;

	case VAR_BOOL:
	    return &t_bool;

	case VAR_SPECIAL:
	    return special_typval2type(tv);

	case VAR_NUMBER:
	    return &t_number;

	case VAR_FLOAT:
	    return &t_float;

	case VAR_STRING:
	    return &t_string;

	case VAR_BLOB:
	    if (tv->vval.v_blob == NULL)
		return &t_blob_null;
	    return &t_blob;

	case VAR_LIST:
	    return list_typval2type(tv, copyID, type_gap, flags);

	case VAR_DICT:
	    return dict_typval2type(tv, copyID, type_gap, flags);

	case VAR_JOB:
	    return &t_job;

	case VAR_CHANNEL:
	    return &t_channel;

	case VAR_CLASS:
	case VAR_OBJECT:
	    return oc_typval2type(tv);

	case VAR_TYPEALIAS:
	    return &t_typealias;

	case VAR_FUNC:
	case VAR_PARTIAL:
	    return fp_typval2type(tv, type_gap);

	case VAR_INSTR:
	default:
	    break;
    }

    return NULL;
}


    int
need_convert_to_bool(type_T *type, typval_T *tv)
{
    return type != NULL && type == &t_bool && tv->v_type != VAR_BOOL
	    && (tv->v_type == VAR_NUMBER
		       && (tv->vval.v_number == 0 || tv->vval.v_number == 1));
}


    type_T *
typval2type(typval_T *tv, int copyID, garray_T *type_gap, int flags)
{
    type_T *type = typval2type_int(tv, copyID, type_gap, flags);

    if (type == NULL)
	return NULL;

    if (type != &t_bool && (tv->v_type == VAR_NUMBER
		&& (tv->vval.v_number == 0 || tv->vval.v_number == 1)))
	
	
	type = &t_number_bool;
    else if (type != &t_float && tv->v_type == VAR_NUMBER)
	
	type = &t_number_float;
    return type;
}


    int
valid_declaration_type(type_T *type)
{
    if (type->tt_type == VAR_SPECIAL  
	    || type->tt_type == VAR_VOID)
    {
	char *tofree = NULL;
	char *name = type_name(type, &tofree);
	semsg(_(e_invalid_type_for_object_variable_str), name);
	vim_free(tofree);
	return FALSE;
    }
    return TRUE;
}


    type_T *
typval2type_vimvar(typval_T *tv, garray_T *type_gap)
{
    if (tv->v_type == VAR_LIST)  
	return &t_list_string;
    if (tv->v_type == VAR_DICT)  
	return &t_dict_any;
    return typval2type(tv, get_copyID(), type_gap, TVTT_DO_MEMBER);
}

    int
check_typval_arg_type(
	type_T	    *expected,
	typval_T    *actual_tv,
	char	    *func_name,
	int	    arg_idx)
{
    where_T	where = WHERE_INIT;

    if (arg_idx > 0)
    {
	where.wt_index = arg_idx;
	where.wt_kind = WT_ARGUMENT;
    }
    where.wt_func_name = func_name;
    return check_typval_type(expected, actual_tv, where);
}


    int
check_typval_type(type_T *expected, typval_T *actual_tv, where_T where)
{
    garray_T	type_list;
    type_T	*actual_type;
    int		res = FAIL;

    if (expected == NULL)
	return OK;  

    ga_init2(&type_list, sizeof(type_T *), 10);

    
    
    if ((actual_tv->v_type == VAR_FUNC && actual_tv->vval.v_string == NULL)
	    || (actual_tv->v_type == VAR_PARTIAL
					 && actual_tv->vval.v_partial == NULL))
	actual_type = &t_func_unknown;
    else
	
	
	actual_type = typval2type(actual_tv, get_copyID(), &type_list,
					  TVTT_DO_MEMBER | TVTT_MORE_SPECIFIC);
    if (actual_type != NULL)
    {
	res = check_type_maybe(expected, actual_type, TRUE, where);
	if (res == MAYBE && !(actual_type->tt_type == VAR_FUNC
				      && (actual_type->tt_member == &t_unknown
					  || actual_type->tt_member == NULL)))
	{
	    
	    
	    
	    
	    
	    type_mismatch_where(expected, actual_type, where);
	    res = FAIL;
	}
    }
    clear_type_list(&type_list);
    return res;
}

    void
arg_type_mismatch(type_T *expected, type_T *actual, int arg_idx)
{
    where_T	where = WHERE_INIT;

    if (arg_idx > 0)
    {
	where.wt_index = arg_idx;
	where.wt_kind = WT_ARGUMENT;
    }
    type_mismatch_where(expected, actual, where);
}

    void
type_mismatch_where(type_T *expected, type_T *actual, where_T where)
{
    char *tofree1, *tofree2;
    char *typename1 = type_name(expected, &tofree1);
    char *typename2 = type_name(actual, &tofree2);

    switch (where.wt_kind)
    {
	case WT_MEMBER:
	    semsg(_(e_variable_str_type_mismatch_expected_str_but_got_str),
		    where.wt_func_name, typename1, typename2);
	    break;
	case WT_METHOD:
	case WT_METHOD_ARG:
	case WT_METHOD_RETURN:
	    semsg(_(e_method_str_type_mismatch_expected_str_but_got_str),
		    where.wt_func_name, typename1, typename2);
	    break;
	case WT_VARIABLE:
	    if (where.wt_func_name == NULL)
		semsg(_(e_variable_nr_type_mismatch_expected_str_but_got_str),
			where.wt_index, typename1, typename2);
	    else
		semsg(_(e_variable_nr_type_mismatch_expected_str_but_got_str_in_str),
			where.wt_index, typename1, typename2, where.wt_func_name);
	    break;
	case WT_ARGUMENT:
	    if (where.wt_func_name == NULL)
		semsg(_(e_argument_nr_type_mismatch_expected_str_but_got_str),
			where.wt_index, typename1, typename2);
	    else
		semsg(_(e_argument_nr_type_mismatch_expected_str_but_got_str_in_str),
			where.wt_index, typename1, typename2, where.wt_func_name);
	    break;
	case WT_CAST:
	case WT_UNKNOWN:
	    if (where.wt_func_name == NULL)
		semsg(_(e_type_mismatch_expected_str_but_got_str),
			typename1, typename2);
	    else
		semsg(_(e_type_mismatch_expected_str_but_got_str_in_str),
			typename1, typename2, where.wt_func_name);
	    break;
    }

    vim_free(tofree1);
    vim_free(tofree2);
}


    int
check_type(
	type_T	*expected,
	type_T	*actual,
	int	give_msg,
	where_T where)
{
    int ret = check_type_maybe(expected, actual, give_msg, where);

    return ret == MAYBE ? OK : ret;
}


    int
check_type_maybe(
	type_T	*expected,
	type_T	*actual,
	int	give_msg,
	where_T where)
{
    int ret = OK;

    
    
    if (expected->tt_type != VAR_UNKNOWN
	    && !(expected->tt_type == VAR_ANY && actual->tt_type != VAR_VOID))

    {
	
	
	
	
	if (!(expected->tt_type == actual->tt_type
		    || actual->tt_type == VAR_UNKNOWN
		    || actual->tt_type == VAR_ANY
		    || (expected->tt_type == VAR_FUNC
					   && actual->tt_type == VAR_PARTIAL)))
	{
	    if (expected->tt_type == VAR_BOOL
					&& (actual->tt_flags & TTFLAG_BOOL_OK))
		
		return OK;
	    if (expected->tt_type == VAR_FLOAT
		    && actual->tt_type == VAR_NUMBER
		    && ((expected->tt_flags & TTFLAG_NUMBER_OK)
			     || (actual->tt_flags & TTFLAG_FLOAT_OK)))
		
		return OK;
	    if (give_msg)
		type_mismatch_where(expected, actual, where);
	    return FAIL;
	}
	if (expected->tt_type == VAR_DICT || expected->tt_type == VAR_LIST)
	{
	    
	    if (actual->tt_member != NULL && actual->tt_member != &t_unknown)
		ret = check_type_maybe(expected->tt_member, actual->tt_member,
								 FALSE, where);
	}
	else if (expected->tt_type == VAR_FUNC && actual != &t_any)
	{
	    
	    
	    if (expected->tt_member != &t_unknown)
	    {
		if (actual->tt_member != NULL
					    && actual->tt_member != &t_unknown)
		{
		    where_T  func_where = where;

		    func_where.wt_kind = WT_METHOD_RETURN;
		    ret = check_type_maybe(expected->tt_member,
					    actual->tt_member, FALSE,
					    func_where);
		}
		else
		    ret = MAYBE;
	    }
	    if (ret != FAIL
		    && ((expected->tt_flags & TTFLAG_VARARGS)
			!= (actual->tt_flags & TTFLAG_VARARGS))
		    && expected->tt_argcount != -1)
		ret = FAIL;
	    if (ret != FAIL && expected->tt_argcount != -1
		    && actual->tt_min_argcount != -1
		    && (actual->tt_argcount == -1
			|| (actual->tt_argcount < expected->tt_min_argcount
			    || actual->tt_argcount > expected->tt_argcount)))
		ret = FAIL;
	    if (ret != FAIL && expected->tt_args != NULL
						    && actual->tt_args != NULL)
	    {
		int i;

		for (i = 0; i < expected->tt_argcount
					       && i < actual->tt_argcount; ++i)
		{
		    where_T  func_where = where;
		    func_where.wt_kind = WT_METHOD_ARG;

		    
		    if (actual->tt_args[i] != &t_any && check_type(
			    expected->tt_args[i], actual->tt_args[i], FALSE,
							func_where) == FAIL)
		    {
			ret = FAIL;
			break;
		    }
		}
	    }
	    if (ret == OK && expected->tt_argcount >= 0
						  && actual->tt_argcount == -1)
		
		ret = MAYBE;
	}
	else if (expected->tt_type == VAR_OBJECT)
	{
	    if (actual->tt_type == VAR_ANY)
		return MAYBE;	
	    if (actual->tt_type != VAR_OBJECT)
		return FAIL;	
	    if (actual->tt_class == NULL)
		return OK;	

	    
	    
	    if (where.wt_kind == WT_METHOD_ARG)
	    {
		if (actual->tt_class != expected->tt_class)
		    ret = FAIL;
	    }
	    else if (!class_instance_of(actual->tt_class, expected->tt_class))
	    {
		
		
		if (where.wt_kind == WT_CAST &&
			class_instance_of(expected->tt_class, actual->tt_class))
		    ret = MAYBE;
		else
		    ret = FAIL;
	    }
	}

	if (ret == FAIL && give_msg)
	    type_mismatch_where(expected, actual, where);
    }

    if (ret == OK && expected->tt_type != VAR_UNKNOWN
	    && expected->tt_type != VAR_ANY
	    && (actual->tt_type == VAR_UNKNOWN || actual->tt_type == VAR_ANY))
	
	ret = MAYBE;

    return ret;
}


    int
check_argument_types(
	type_T	    *type,
	typval_T    *argvars,
	int	    argcount,
	typval_T    *base_tv,
	char_u	    *name)
{
    int	    varargs = (type->tt_flags & TTFLAG_VARARGS) ? 1 : 0;
    int	    i;
    int	    totcount = argcount + (base_tv == NULL ? 0 : 1);

    if (type->tt_type != VAR_FUNC && type->tt_type != VAR_PARTIAL)
	return OK;  
    if (totcount < type->tt_min_argcount - varargs)
    {
	emsg_funcname(e_not_enough_arguments_for_function_str, name);
	return FAIL;
    }
    if (!varargs && type->tt_argcount >= 0 && totcount > type->tt_argcount)
    {
	emsg_funcname(e_too_many_arguments_for_function_str, name);
	return FAIL;
    }
    if (type->tt_args == NULL)
	return OK;  


    for (i = 0; i < totcount; ++i)
    {
	type_T	    *expected;
	typval_T    *tv;

	if (base_tv != NULL)
	{
	    if (i == 0)
		tv = base_tv;
	    else
		tv = &argvars[i - 1];
	}
	else
	    tv = &argvars[i];
	if (varargs && i >= type->tt_argcount - 1)
	{
	    expected = type->tt_args[type->tt_argcount - 1];
	    if (expected != NULL && expected->tt_type == VAR_LIST)
		expected = expected->tt_member;
	    if (expected == NULL)
		expected = &t_any;
	}
	else
	    expected = type->tt_args[i];

	
	if ((tv->v_type != VAR_SPECIAL || tv->vval.v_number != VVAL_NONE)
		   && check_typval_arg_type(expected, tv, NULL, i + 1) == FAIL)
	    return FAIL;
    }
    return OK;
}


    char_u *
skip_type(char_u *start, int optional)
{
    char_u *p = start;

    if (optional && *p == '?')
	++p;

    
    while (ASCII_ISALNUM(*p) || *p == '_' || *p == '.')
	++p;

    
    if (*skipwhite(p) == '<')
    {
	p = skipwhite(p);
	p = skip_type(skipwhite(p + 1), FALSE);
	p = skipwhite(p);
	if (*p == '>')
	    ++p;
    }
    else if ((*p == '(' || (*p == ':' && VIM_ISWHITE(p[1])))
					     && STRNCMP("func", start, 4) == 0)
    {
	if (*p == '(')
	{
	    
	    ++p;
	    while (*p != ')' && *p != NUL)
	    {
		char_u *sp = p;

		if (STRNCMP(p, "...", 3) == 0)
		    p += 3;
		p = skip_type(p, TRUE);
		if (p == sp)
		    return p;  
		if (*p == ',')
		    p = skipwhite(p + 1);
	    }
	    if (*p == ')')
	    {
		if (p[1] == ':')
		    p = skip_type(skipwhite(p + 2), FALSE);
		else
		    ++p;
	    }
	}
	else
	{
	    
	    p = skip_type(skipwhite(p + 1), FALSE);
	}
    }

    return p;
}


    static type_T *
parse_type_member(
	char_u	    **arg,
	type_T	    *type,
	garray_T    *type_gap,
	int	    give_error,
	char	    *info)
{
    char_u  *arg_start = *arg;
    type_T  *member_type;
    int	    prev_called_emsg = called_emsg;

    if (**arg != '<')
    {
	if (give_error)
	{
	    if (*skipwhite(*arg) == '<')
		semsg(_(e_no_white_space_allowed_before_str_str), "<", *arg);
	    else
		semsg(_(e_missing_type_after_str), info);
	}
	return NULL;
    }
    *arg = skipwhite(*arg + 1);

    member_type = parse_type(arg, type_gap, give_error);
    if (member_type == NULL)
	return NULL;

    *arg = skipwhite(*arg);
    if (**arg != '>' && called_emsg == prev_called_emsg)
    {
	if (give_error)
	    semsg(_(e_missing_gt_after_type_str), arg_start);
	return NULL;
    }
    ++*arg;

    if (type->tt_type == VAR_LIST)
	return get_list_type(member_type, type_gap);
    return get_dict_type(member_type, type_gap);
}


    static type_T *
parse_type_func(char_u **arg, size_t len, garray_T *type_gap, int give_error)
{
    char_u  *p;
    type_T  *type;
    type_T  *ret_type = &t_unknown;
    int	argcount = -1;
    int	flags = 0;
    int	first_optional = -1;
    type_T	*arg_type[MAX_FUNC_ARGS + 1];

    
    *arg += len;
    if (**arg == '(')
    {
	
	
	ret_type = &t_void;

	p = ++*arg;
	argcount = 0;
	while (*p != NUL && *p != ')')
	{
	    if (*p == '?')
	    {
		if (first_optional == -1)
		    first_optional = argcount;
		++p;
	    }
	    else if (STRNCMP(p, "...", 3) == 0)
	    {
		flags |= TTFLAG_VARARGS;
		p += 3;
	    }
	    else if (first_optional != -1)
	    {
		if (give_error)
		    emsg(_(e_mandatory_argument_after_optional_argument));
		return NULL;
	    }

	    type = parse_type(&p, type_gap, give_error);
	    if (type == NULL)
		return NULL;
	    if ((flags & TTFLAG_VARARGS) != 0 && type->tt_type != VAR_LIST)
	    {
		char *tofree;
		semsg(_(e_variable_arguments_type_must_be_list_str),
			type_name(type, &tofree));
		vim_free(tofree);
		return NULL;
	    }
	    arg_type[argcount++] = type;

	    
	    if (flags & TTFLAG_VARARGS)
		break;

	    if (*p != ',' && *skipwhite(p) == ',')
	    {
		if (give_error)
		    semsg(_(e_no_white_space_allowed_before_str_str),
			    ",", p);
		return NULL;
	    }
	    if (*p == ',')
	    {
		++p;
		if (!VIM_ISWHITE(*p))
		{
		    if (give_error)
			semsg(_(e_white_space_required_after_str_str),
				",", p - 1);
		    return NULL;
		}
	    }
	    p = skipwhite(p);
	    if (argcount == MAX_FUNC_ARGS)
	    {
		if (give_error)
		    emsg(_(e_too_many_argument_types));
		return NULL;
	    }
	}

	p = skipwhite(p);
	if (*p != ')')
	{
	    if (give_error)
		emsg(_(e_missing_closing_paren));
	    return NULL;
	}
	*arg = p + 1;
    }
    if (**arg == ':')
    {
	
	++*arg;
	if (!VIM_ISWHITE(**arg) && give_error)
	    semsg(_(e_white_space_required_after_str_str), ":", *arg - 1);
	*arg = skipwhite(*arg);
	ret_type = parse_type(arg, type_gap, give_error);
	if (ret_type == NULL)
	    return NULL;
    }
    if (flags == 0 && first_optional == -1 && argcount <= 0)
	type = get_func_type(ret_type, argcount, type_gap);
    else
    {
	type = alloc_func_type(ret_type, argcount, type_gap);
	type->tt_flags = flags;
	if (argcount > 0)
	{
	    type->tt_argcount = argcount;
	    type->tt_min_argcount = first_optional == -1
						? argcount : first_optional;
	    if (func_type_add_arg_types(type, argcount, type_gap) == FAIL)
		return NULL;
	    mch_memmove(type->tt_args, arg_type, sizeof(type_T *) * argcount);
	}
    }

    return type;
}


    static type_T *
parse_type_user_defined(
    char_u	**arg,
    size_t	len,
    garray_T	*type_gap,
    int		give_error)
{
    int		did_emsg_before = did_emsg;
    typval_T	tv;

    tv.v_type = VAR_UNKNOWN;
    if (eval_variable_import(*arg, &tv) == OK)
    {
	if (tv.v_type == VAR_CLASS && tv.vval.v_class != NULL)
	{
	    type_T *type = get_type_ptr(type_gap);
	    if (type != NULL)
	    {
		
		
		type->tt_type = VAR_OBJECT;
		type->tt_class = tv.vval.v_class;
		clear_tv(&tv);

		*arg += len;
		
		while (ASCII_ISALNUM(**arg) || **arg == '_' || **arg == '.')
		    ++*arg;

		return type;
	    }
	}
	else if (tv.v_type == VAR_TYPEALIAS)
	{
	    
	    type_T *type = copy_type(tv.vval.v_typealias->ta_type, type_gap);
	    *arg += len;
	    clear_tv(&tv);
	    
	    while (ASCII_ISALNUM(**arg) || **arg == '_' || **arg == '.')
		++*arg;
	    return type;
	}

	clear_tv(&tv);
    }

    if (give_error && (did_emsg == did_emsg_before))
    {
	char_u	*p = skip_type(*arg, FALSE);
	char	cc = *p;

	*p = NUL;
	semsg(_(e_type_not_recognized_str), *arg);
	*p = cc;
    }

    return NULL;
}


    type_T *
parse_type(char_u **arg, garray_T *type_gap, int give_error)
{
    char_u  *p = *arg;
    size_t  len;

    
    while (ASCII_ISALNUM(*p) || *p == '_')
	++p;
    len = p - *arg;

    switch (**arg)
    {
	case 'a':
	    if (len == 3 && STRNCMP(*arg, "any", len) == 0)
	    {
		*arg += len;
		return &t_any;
	    }
	    break;
	case 'b':
	    if (len == 4 && STRNCMP(*arg, "bool", len) == 0)
	    {
		*arg += len;
		return &t_bool;
	    }
	    if (len == 4 && STRNCMP(*arg, "blob", len) == 0)
	    {
		*arg += len;
		return &t_blob;
	    }
	    break;
	case 'c':
	    if (len == 7 && STRNCMP(*arg, "channel", len) == 0)
	    {
		*arg += len;
		return &t_channel;
	    }
	    break;
	case 'd':
	    if (len == 4 && STRNCMP(*arg, "dict", len) == 0)
	    {
		*arg += len;
		return parse_type_member(arg, &t_dict_any,
						 type_gap, give_error, "dict");
	    }
	    break;
	case 'f':
	    if (len == 5 && STRNCMP(*arg, "float", len) == 0)
	    {
		*arg += len;
		return &t_float;
	    }
	    if (len == 4 && STRNCMP(*arg, "func", len) == 0)
		return parse_type_func(arg, len, type_gap, give_error);
	    break;
	case 'j':
	    if (len == 3 && STRNCMP(*arg, "job", len) == 0)
	    {
		*arg += len;
		return &t_job;
	    }
	    break;
	case 'l':
	    if (len == 4 && STRNCMP(*arg, "list", len) == 0)
	    {
		*arg += len;
		return parse_type_member(arg, &t_list_any,
						 type_gap, give_error, "list");
	    }
	    break;
	case 'n':
	    if (len == 6 && STRNCMP(*arg, "number", len) == 0)
	    {
		*arg += len;
		return &t_number;
	    }
	    break;
	case 's':
	    if (len == 6 && STRNCMP(*arg, "string", len) == 0)
	    {
		*arg += len;
		return &t_string;
	    }
	    break;
	case 'v':
	    if (len == 4 && STRNCMP(*arg, "void", len) == 0)
	    {
		*arg += len;
		return &t_void;
	    }
	    break;
    }

    
    return parse_type_user_defined(arg, len, type_gap, give_error);
}


    int
equal_type(type_T *type1, type_T *type2, int flags)
{
    int i;

    if (type1 == NULL || type2 == NULL)
	return FALSE;
    if (type1->tt_type != type2->tt_type)
	return FALSE;
    switch (type1->tt_type)
    {
	case VAR_UNKNOWN:
	case VAR_ANY:
	case VAR_VOID:
	case VAR_SPECIAL:
	case VAR_BOOL:
	case VAR_NUMBER:
	case VAR_FLOAT:
	case VAR_STRING:
	case VAR_BLOB:
	case VAR_JOB:
	case VAR_CHANNEL:
	case VAR_INSTR:
	case VAR_CLASS:
	case VAR_OBJECT:
	case VAR_TYPEALIAS:
	    break;  
	case VAR_LIST:
	case VAR_DICT:
	    return equal_type(type1->tt_member, type2->tt_member, flags);
	case VAR_FUNC:
	case VAR_PARTIAL:
	    if (!equal_type(type1->tt_member, type2->tt_member, flags)
		    || type1->tt_argcount != type2->tt_argcount)
		return FALSE;
	    if (type1->tt_argcount < 0
			   || type1->tt_args == NULL || type2->tt_args == NULL)
		return TRUE;
	    for (i = 0; i < type1->tt_argcount; ++i)
		if ((flags & ETYPE_ARG_UNKNOWN) == 0
			&& !equal_type(type1->tt_args[i], type2->tt_args[i],
									flags))
		    return FALSE;
	    return TRUE;
    }
    return TRUE;
}


    static void
common_type_var_func(
    type_T	*type1,
    type_T	*type2,
    type_T	**dest,
    garray_T	*type_gap)
{
    type_T *common;

    
    
    if (type1 == &t_func_unknown)
    {
	*dest = type2;
	return;
    }
    if (type2 == &t_func_unknown)
    {
	*dest = type1;
	return;
    }

    common_type(type1->tt_member, type2->tt_member, &common, type_gap);
    if (type1->tt_argcount == type2->tt_argcount
	    && type1->tt_argcount >= 0)
    {
	int argcount = type1->tt_argcount;
	int i;

	*dest = alloc_func_type(common, argcount, type_gap);
	if (type1->tt_args != NULL && type2->tt_args != NULL)
	{
	    if (func_type_add_arg_types(*dest, argcount,
			type_gap) == OK)
		for (i = 0; i < argcount; ++i)
		    common_type(type1->tt_args[i], type2->tt_args[i],
			    &(*dest)->tt_args[i], type_gap);
	}
    }
    else
	
	
	*dest = alloc_func_type(common, -1, type_gap);

    
    (*dest)->tt_min_argcount =
	type1->tt_min_argcount < type2->tt_min_argcount
	? type1->tt_min_argcount : type2->tt_min_argcount;
}


    void
common_type(type_T *type1, type_T *type2, type_T **dest, garray_T *type_gap)
{
    if (equal_type(type1, type2, 0))
    {
	*dest = type1;
	return;
    }

    
    
    if (type1 == NULL || type1->tt_type == VAR_UNKNOWN)
    {
	*dest = type2;
	return;
    }
    if (type2 == NULL || type2->tt_type == VAR_UNKNOWN)
    {
	*dest = type1;
	return;
    }

    if (type1->tt_type == type2->tt_type)
    {
	if (type1->tt_type == VAR_LIST || type2->tt_type == VAR_DICT)
	{
	    type_T *common;

	    common_type(type1->tt_member, type2->tt_member, &common, type_gap);
	    if (type1->tt_type == VAR_LIST)
		*dest = get_list_type(common, type_gap);
	    else
		*dest = get_dict_type(common, type_gap);
	    return;
	}

	if (type1->tt_type == VAR_FUNC)
	{
	    common_type_var_func(type1, type2, dest, type_gap);
	    return;
	}
    }

    *dest = &t_any;
}


    int
push_type_stack(cctx_T *cctx, type_T *type)
{
    return push_type_stack2(cctx, type, type);
}


    int
push_type_stack2(cctx_T *cctx, type_T *type, type_T *decl_type)
{
    garray_T	*stack = &cctx->ctx_type_stack;
    type2_T	*typep;

    if (GA_GROW_FAILS(stack, 1))
	return FAIL;
    typep = ((type2_T *)stack->ga_data) + stack->ga_len;
    typep->type_curr = type;
    typep->type_decl = decl_type;
    ++stack->ga_len;
    return OK;
}


    void
set_type_on_stack(cctx_T *cctx, type_T *type, int offset)
{
    garray_T	*stack = &cctx->ctx_type_stack;
    type2_T	*typep = ((type2_T *)stack->ga_data)
						  + stack->ga_len - 1 - offset;

    typep->type_curr = type;
    typep->type_decl = &t_any;
}


    type_T *
get_type_on_stack(cctx_T *cctx, int offset)
{
    garray_T	*stack = &cctx->ctx_type_stack;

    if (offset + 1 > stack->ga_len)
	return &t_unknown;
    return (((type2_T *)stack->ga_data) + stack->ga_len - offset - 1)
								   ->type_curr;
}


    type_T *
get_decl_type_on_stack(cctx_T *cctx, int offset)
{
    garray_T	*stack = &cctx->ctx_type_stack;

    if (offset + 1 > stack->ga_len)
	return &t_unknown;
    return (((type2_T *)stack->ga_data) + stack->ga_len - offset - 1)
								   ->type_decl;
}


    type_T *
get_member_type_from_stack(
	int	    count,
	int	    skip,
	cctx_T	    *cctx)
{
    garray_T	*stack = &cctx->ctx_type_stack;
    type2_T	*typep;
    garray_T    *type_gap = cctx->ctx_type_list;
    int		i;
    type_T	*result;
    type_T	*type;

    
    if (count == 0)
	return &t_unknown;
    
    typep = ((type2_T *)stack->ga_data) + stack->ga_len;
    result = &t_unknown;
    for (i = 0; i < count; ++i)
    {
	type = (typep -((count - i) * skip) + skip - 1)->type_curr;
	if (check_type_is_value(type) == FAIL)
	    return NULL;
	if (result != &t_any)
	    common_type(type, result, &result, type_gap);
    }

    return result;
}

    char *
vartype_name(vartype_T type)
{
    switch (type)
    {
	case VAR_UNKNOWN: break;
	case VAR_ANY: return "any";
	case VAR_VOID: return "void";
	case VAR_SPECIAL: return "special";
	case VAR_BOOL: return "bool";
	case VAR_NUMBER: return "number";
	case VAR_FLOAT: return "float";
	case VAR_STRING: return "string";
	case VAR_BLOB: return "blob";
	case VAR_JOB: return "job";
	case VAR_CHANNEL: return "channel";
	case VAR_LIST: return "list";
	case VAR_DICT: return "dict";
	case VAR_INSTR: return "instr";
	case VAR_CLASS: return "class";
	case VAR_OBJECT: return "object";
	case VAR_TYPEALIAS: return "typealias";

	case VAR_FUNC:
	case VAR_PARTIAL: return "func";
    }
    return "unknown";
}


    static char *
type_name_list_or_dict(char *name, type_T *type, char **tofree)
{
    char *member_free;
    char *member_name;

    if (type->tt_member->tt_type == VAR_UNKNOWN)
	member_name = type_name(&t_any, &member_free);
    else
	member_name = type_name(type->tt_member, &member_free);

    size_t len = STRLEN(name) + STRLEN(member_name) + 3;
    *tofree = alloc(len);
    if (*tofree == NULL)
	return name;

    vim_snprintf(*tofree, len, "%s<%s>", name, member_name);
    vim_free(member_free);
    return *tofree;
}


    static char *
type_name_class_or_obj(char *name, type_T *type, char **tofree)
{
    char_u *class_name;

    if (type->tt_class != NULL)
    {
	class_name = type->tt_class->class_name;
	if (IS_ENUM(type->tt_class))
	    name = "enum";
    }
    else
	class_name = (char_u *)"Unknown";

    size_t len = STRLEN(name) + STRLEN(class_name) + 3;
    *tofree = alloc(len);
    if (*tofree == NULL)
	return name;

    vim_snprintf(*tofree, len, "%s<%s>", name, class_name);
    return *tofree;
}


    static char *
type_name_func(type_T *type, char **tofree)
{
    garray_T    ga;
    int		i;
    int		varargs = (type->tt_flags & TTFLAG_VARARGS) ? 1 : 0;
    char	*arg_free = NULL;

    ga_init2(&ga, 1, 100);
    if (ga_grow(&ga, 20) == FAIL)
	goto failed;
    STRCPY(ga.ga_data, "func(");
    ga.ga_len += 5;

    for (i = 0; i < type->tt_argcount; ++i)
    {
	char *arg_type;
	int  len;

	if (type->tt_args == NULL)
	    arg_type = "[unknown]";
	else
	    arg_type = type_name(type->tt_args[i], &arg_free);
	if (i > 0)
	{
	    STRCPY((char *)ga.ga_data + ga.ga_len, ", ");
	    ga.ga_len += 2;
	}
	len = (int)STRLEN(arg_type);
	if (ga_grow(&ga, len + 8) == FAIL)
	    goto failed;
	if (varargs && i == type->tt_argcount - 1)
	    ga_concat(&ga, (char_u *)"...");
	else if (i >= type->tt_min_argcount)
	    *((char *)ga.ga_data + ga.ga_len++) = '?';
	ga_concat(&ga, (char_u *)arg_type);
	VIM_CLEAR(arg_free);
    }
    if (type->tt_argcount < 0)
	
	ga_concat(&ga, (char_u *)"...");

    if (type->tt_member == &t_void)
	STRCPY((char *)ga.ga_data + ga.ga_len, ")");
    else
    {
	char *ret_free;
	char *ret_name = type_name(type->tt_member, &ret_free);
	int  len;

	len = (int)STRLEN(ret_name) + 4;
	if (ga_grow(&ga, len) == FAIL)
	    goto failed;
	STRCPY((char *)ga.ga_data + ga.ga_len, "): ");
	STRCPY((char *)ga.ga_data + ga.ga_len + 3, ret_name);
	vim_free(ret_free);
    }
    *tofree = ga.ga_data;
    return ga.ga_data;

failed:
    vim_free(arg_free);
    ga_clear(&ga);
    return "[unknown]";
}


    char *
type_name(type_T *type, char **tofree)
{
    char *name;

    *tofree = NULL;
    if (type == NULL)
	return "[unknown]";
    name = vartype_name(type->tt_type);

    switch (type->tt_type)
    {
	case VAR_LIST:
	case VAR_DICT:
	    return type_name_list_or_dict(name, type, tofree);

	case VAR_CLASS:
	case VAR_OBJECT:
	    return type_name_class_or_obj(name, type, tofree);

	case VAR_FUNC:
	    return type_name_func(type, tofree);

	default:
	    break;
    }

    return name;
}


    void
f_typename(typval_T *argvars, typval_T *rettv)
{
    garray_T	type_list;
    type_T	*type;
    char	*tofree;
    char	*name;

    rettv->v_type = VAR_STRING;
    ga_init2(&type_list, sizeof(type_T *), 10);
    if (argvars[0].v_type == VAR_TYPEALIAS)
    {
	type = copy_type(argvars[0].vval.v_typealias->ta_type, &type_list);
	
	
	if (type->tt_type == VAR_OBJECT)
	    type->tt_type = VAR_CLASS;
    }
    else
	type = typval2type(argvars, get_copyID(), &type_list, TVTT_DO_MEMBER);
    name = type_name(type, &tofree);
    if (argvars[0].v_type == VAR_TYPEALIAS)
    {
	vim_snprintf((char *)IObuff, IOSIZE, "typealias<%s>", name);
	rettv->vval.v_string = vim_strsave((char_u *)IObuff);
	if (tofree != NULL)
	    vim_free(tofree);
    }
    else
    {
	if (tofree != NULL)
	    rettv->vval.v_string = (char_u *)tofree;
	else
	    rettv->vval.v_string = vim_strsave((char_u *)name);
    }
    clear_type_list(&type_list);
}


    int
check_typval_is_value(typval_T *tv)
{
    if (tv == NULL)
	return OK;

    switch (tv->v_type)
    {
	case VAR_CLASS:
	    {
		class_T *cl = tv->vval.v_class;
		char_u *class_name = (cl == NULL) ? (char_u *)""
							: cl->class_name;
		if (cl != NULL && IS_ENUM(cl))
		    semsg(_(e_using_enum_as_value_str), class_name);
		else
		    semsg(_(e_using_class_as_value_str), class_name);
	    }
	    return FAIL;

	case VAR_TYPEALIAS:
	    semsg(_(e_using_typealias_as_value_str),
		    tv->vval.v_typealias->ta_name);
	    return FAIL;

	default:
	    break;
    }
    return OK;
}


    int
check_type_is_value(type_T *type)
{
    if (type == NULL)
	return OK;
    switch (type->tt_type)
    {
	case VAR_CLASS:
	    if (IS_ENUM(type->tt_class))
		semsg(_(e_using_enum_as_value_str),
			type->tt_class->class_name);
	    else
		semsg(_(e_using_class_as_value_str),
			type->tt_class->class_name);
	    return FAIL;

	case VAR_TYPEALIAS:
	    
	    
	    emsg(_(e_using_typealias_as_var_val));
	    return FAIL;

	default:
	    break;
    }
    return OK;
}

#endif 
