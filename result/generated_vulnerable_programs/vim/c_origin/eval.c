


#define USING_FLOAT_STUFF

#include "vim.h"

#if defined(FEAT_EVAL) || defined(PROTO)

#ifdef VMS
# include <float.h>
#endif

#define NAMESPACE_CHAR	(char_u *)"abglstvw"

static int eval2(char_u **arg, typval_T *rettv, evalarg_T *evalarg);
static int eval3(char_u **arg, typval_T *rettv, evalarg_T *evalarg);
static int eval4(char_u **arg, typval_T *rettv, evalarg_T *evalarg);
static int eval5(char_u **arg, typval_T *rettv, evalarg_T *evalarg);
static int eval6(char_u **arg, typval_T *rettv, evalarg_T *evalarg);
static int eval7(char_u **arg, typval_T *rettv, evalarg_T *evalarg, int want_string);
static int eval8(char_u **arg, typval_T *rettv, evalarg_T *evalarg, int want_string);
static int eval9(char_u **arg, typval_T *rettv, evalarg_T *evalarg, int want_string);
static int eval9_leader(typval_T *rettv, int numeric_only, char_u *start_leader, char_u **end_leaderp);

static char_u *make_expanded_name(char_u *in_start, char_u *expr_start, char_u *expr_end, char_u *in_end);


	varnumber_T
num_divide(varnumber_T n1, varnumber_T n2, int *failed)
{
    varnumber_T	result;

    if (n2 == 0)
    {
	if (in_vim9script())
	{
	    emsg(_(e_divide_by_zero));
	    if (failed != NULL)
		*failed = TRUE;
	}
	if (n1 == 0)
	    result = VARNUM_MIN; 
	else if (n1 < 0)
	    result = -VARNUM_MAX;
	else
	    result = VARNUM_MAX;
    }
    else if (n1 == VARNUM_MIN && n2 == -1)
    {
	
	
	result = VARNUM_MAX;
    }
    else
	result = n1 / n2;

    return result;
}


	varnumber_T
num_modulus(varnumber_T n1, varnumber_T n2, int *failed)
{
    if (n2 == 0 && in_vim9script())
    {
	emsg(_(e_divide_by_zero));
	if (failed != NULL)
	    *failed = TRUE;
    }
    return (n2 == 0) ? 0 : (n1 % n2);
}


    void
eval_init(void)
{
    evalvars_init();
    func_init();
}

#if defined(EXITFREE) || defined(PROTO)
    void
eval_clear(void)
{
    evalvars_clear();
    free_scriptnames();  
    free_locales();

    
    free_autoload_scriptnames();

    
    (void)garbage_collect(FALSE);

    
    free_all_functions();
}
#endif

    void
fill_evalarg_from_eap(evalarg_T *evalarg, exarg_T *eap, int skip)
{
    init_evalarg(evalarg);
    evalarg->eval_flags = skip ? 0 : EVAL_EVALUATE;

    if (eap == NULL)
	return;

    evalarg->eval_cstack = eap->cstack;
    if (sourcing_a_script(eap) || eap->ea_getline == get_list_line)
    {
	evalarg->eval_getline = eap->ea_getline;
	evalarg->eval_cookie = eap->cookie;
    }
}


    int
eval_to_bool(
    char_u	*arg,
    int		*error,
    exarg_T	*eap,
    int		skip,	    
    int		use_simple_function)
{
    typval_T	tv;
    varnumber_T	retval = FALSE;
    evalarg_T	evalarg;
    int		r;

    fill_evalarg_from_eap(&evalarg, eap, skip);

    if (skip)
	++emsg_skip;
    if (use_simple_function)
	r = eval0_simple_funccal(arg, &tv, eap, &evalarg);
    else
	r = eval0(arg, &tv, eap, &evalarg);
    if (r == FAIL)
	*error = TRUE;
    else
    {
	*error = FALSE;
	if (!skip)
	{
	    if (in_vim9script())
		retval = tv_get_bool_chk(&tv, error);
	    else
		retval = (tv_get_number_chk(&tv, error) != 0);
	    clear_tv(&tv);
	}
    }
    if (skip)
	--emsg_skip;
    clear_evalarg(&evalarg, eap);

    return (int)retval;
}


    static int
eval1_emsg(char_u **arg, typval_T *rettv, exarg_T *eap)
{
    char_u	*start = *arg;
    int		ret;
    int		did_emsg_before = did_emsg;
    int		called_emsg_before = called_emsg;
    evalarg_T	evalarg;

    fill_evalarg_from_eap(&evalarg, eap, eap != NULL && eap->skip);

    ret = eval1(arg, rettv, &evalarg);
    if (ret == FAIL)
    {
	
	
	
	
	if (!aborting() && did_emsg == did_emsg_before
					  && called_emsg == called_emsg_before)
	    semsg(_(e_invalid_expression_str), start);
    }
    clear_evalarg(&evalarg, eap);
    return ret;
}


    int
eval_expr_valid_arg(typval_T *tv)
{
    return tv->v_type != VAR_UNKNOWN
	    && (tv->v_type != VAR_STRING
		  || (tv->vval.v_string != NULL && *tv->vval.v_string != NUL));
}


    funccall_T *
eval_expr_get_funccal(typval_T *expr, typval_T *rettv)
{
    if (expr->v_type != VAR_PARTIAL)
	return NULL;

    partial_T *partial = expr->vval.v_partial;
    if (partial == NULL)
	return NULL;
    if (partial->pt_func == NULL
	    || partial->pt_func->uf_def_status == UF_NOT_COMPILED)
	return NULL;

    return create_funccal(partial->pt_func, rettv);
}


    static int
eval_expr_partial(
    typval_T	*expr,
    typval_T	*argv,
    int		argc,
    funccall_T	*fc_arg,
    typval_T	*rettv)
{
    partial_T	*partial = expr->vval.v_partial;

    if (partial == NULL)
	return FAIL;

    if (partial->pt_func != NULL
			&& partial->pt_func->uf_def_status != UF_NOT_COMPILED)
    {
	funccall_T	*fc = fc_arg != NULL ? fc_arg
				: create_funccal(partial->pt_func, rettv);
	int		r;

	if (fc == NULL)
	    return FAIL;

	
	r = call_def_function(partial->pt_func, argc, argv, DEF_USE_PT_ARGV,
						partial, NULL, fc, rettv);
	if (fc_arg == NULL)
	    remove_funccal();
	if (r == FAIL)
	    return FAIL;
    }
    else
    {
	char_u		*s = partial_name(partial);
	funcexe_T	funcexe;

	if (s == NULL || *s == NUL)
	    return FAIL;

	CLEAR_FIELD(funcexe);
	funcexe.fe_evaluate = TRUE;
	funcexe.fe_partial = partial;
	if (call_func(s, -1, rettv, argc, argv, &funcexe) == FAIL)
	    return FAIL;
    }

    return OK;
}


    static int
eval_expr_func(
    typval_T	*expr,
    typval_T	*argv,
    int		argc,
    typval_T	*rettv)
{
    funcexe_T	funcexe;
    char_u	buf[NUMBUFLEN];
    char_u	*s;

    if (expr->v_type == VAR_FUNC)
	s = expr->vval.v_string;
    else
	s = tv_get_string_buf_chk_strict(expr, buf, in_vim9script());
    if (s == NULL || *s == NUL)
	return FAIL;

    CLEAR_FIELD(funcexe);
    funcexe.fe_evaluate = TRUE;
    if (call_func(s, -1, rettv, argc, argv, &funcexe) == FAIL)
	return FAIL;

    return OK;
}


    static int
eval_expr_string(
    typval_T	*expr,
    typval_T	*rettv)
{
    char_u	*s;
    char_u	buf[NUMBUFLEN];

    s = tv_get_string_buf_chk_strict(expr, buf, in_vim9script());
    if (s == NULL)
	return FAIL;

    s = skipwhite(s);
    if (eval1_emsg(&s, rettv, NULL) == FAIL)
	return FAIL;

    if (*skipwhite(s) != NUL)  
    {
	clear_tv(rettv);
	semsg(_(e_invalid_expression_str), s);
	return FAIL;
    }

    return OK;
}


    int
eval_expr_typval(
	typval_T    *expr,
	int	    want_func,
	typval_T    *argv,
	int	    argc,
	funccall_T  *fc_arg,
	typval_T    *rettv)
{
    if (expr->v_type == VAR_PARTIAL)
	return eval_expr_partial(expr, argv, argc, fc_arg, rettv);
    else if (expr->v_type == VAR_INSTR)
	return exe_typval_instr(expr, rettv);
    else if (expr->v_type == VAR_FUNC || want_func)
	return eval_expr_func(expr, argv, argc, rettv);
    else
	return eval_expr_string(expr, rettv);

    return OK;
}


    int
eval_expr_to_bool(typval_T *expr, int *error)
{
    typval_T	rettv;
    int		res;

    if (eval_expr_typval(expr, FALSE, NULL, 0, NULL, &rettv) == FAIL)
    {
	*error = TRUE;
	return FALSE;
    }
    res = (tv_get_bool_chk(&rettv, error) != 0);
    clear_tv(&rettv);
    return res;
}


    char_u *
eval_to_string_skip(
    char_u	*arg,
    exarg_T	*eap,
    int		skip)	    
{
    typval_T	tv;
    char_u	*retval;
    evalarg_T	evalarg;

    fill_evalarg_from_eap(&evalarg, eap, skip);
    if (skip)
	++emsg_skip;
    if (eval0(arg, &tv, eap, &evalarg) == FAIL || skip)
	retval = NULL;
    else
    {
	retval = vim_strsave(tv_get_string(&tv));
	clear_tv(&tv);
    }
    if (skip)
	--emsg_skip;
    clear_evalarg(&evalarg, eap);

    return retval;
}


    void
init_evalarg(evalarg_T *evalarg)
{
    CLEAR_POINTER(evalarg);
    ga_init2(&evalarg->eval_tofree_ga, sizeof(char_u *), 20);
}


    static void
free_eval_tofree_later(evalarg_T *evalarg)
{
    if (evalarg->eval_tofree == NULL)
	return;

    if (ga_grow(&evalarg->eval_tofree_ga, 1) == OK)
	((char_u **)evalarg->eval_tofree_ga.ga_data)
	    [evalarg->eval_tofree_ga.ga_len++]
	    = evalarg->eval_tofree;
    else
	vim_free(evalarg->eval_tofree);
}


    void
clear_evalarg(evalarg_T *evalarg, exarg_T *eap)
{
    if (evalarg == NULL)
	return;

    garray_T *etga = &evalarg->eval_tofree_ga;

    if (evalarg->eval_tofree != NULL || evalarg->eval_using_cmdline)
    {
	if (eap != NULL)
	{
	    
	    
	    
	    vim_free(eap->cmdline_tofree);
	    eap->cmdline_tofree = *eap->cmdlinep;

	    if (evalarg->eval_using_cmdline && etga->ga_len > 0)
	    {
		
		
		--etga->ga_len;
		*eap->cmdlinep = ((char_u **)etga->ga_data)[etga->ga_len];
		vim_free(evalarg->eval_tofree);
	    }
	    else
		*eap->cmdlinep = evalarg->eval_tofree;
	}
	else
	    vim_free(evalarg->eval_tofree);
	evalarg->eval_tofree = NULL;
    }

    ga_clear_strings(etga);
    VIM_CLEAR(evalarg->eval_tofree_lambda);
}


    int
skip_expr(char_u **pp, evalarg_T *evalarg)
{
    typval_T	rettv;

    *pp = skipwhite(*pp);
    return eval1(pp, &rettv, evalarg);
}


    int
skip_expr_concatenate(
	char_u	    **arg,
	char_u	    **start,
	char_u	    **end,
	evalarg_T   *evalarg)
{
    typval_T	rettv;
    int		res;
    int		vim9script = in_vim9script();
    garray_T    *gap = evalarg == NULL ? NULL : &evalarg->eval_ga;
    garray_T    *freegap = evalarg == NULL ? NULL : &evalarg->eval_freega;
    int		save_flags = evalarg == NULL ? 0 : evalarg->eval_flags;
    int		evaluate = evalarg == NULL
			       ? FALSE : (evalarg->eval_flags & EVAL_EVALUATE);

    if (vim9script && evaluate
	       && (evalarg->eval_cookie != NULL || evalarg->eval_cctx != NULL))
    {
	ga_init2(gap, sizeof(char_u *), 10);
	
	if (ga_grow(gap, 1) == OK)
	    ++gap->ga_len;
	ga_init2(freegap, sizeof(char_u *), 10);
    }
    *start = *arg;

    
    if (evalarg != NULL)
	evalarg->eval_flags &= ~EVAL_EVALUATE;
    *arg = skipwhite(*arg);
    res = eval1(arg, &rettv, evalarg);
    *end = *arg;
    if (evalarg != NULL)
	evalarg->eval_flags = save_flags;

    if (vim9script && evaluate
	    && (evalarg->eval_cookie != NULL || evalarg->eval_cctx != NULL))
    {
	if (evalarg->eval_ga.ga_len == 1)
	{
	    
	    ga_clear(gap);
	    gap->ga_itemsize = 0;
	}
	else
	{
	    char_u	    *p;
	    size_t	    endoff = STRLEN(*arg);

	    
	    *((char_u **)gap->ga_data) = *start;
	    p = ga_concat_strings(gap, " ");

	    
	    if (evalarg->eval_cookie != NULL)
	    {
		
		*((char_u **)gap->ga_data) = NULL;
		
		
		free_eval_tofree_later(evalarg);
		evalarg->eval_tofree =
				    ((char_u **)gap->ga_data)[gap->ga_len - 1];
		((char_u **)gap->ga_data)[gap->ga_len - 1] = NULL;
		ga_clear_strings(gap);
		ga_clear(freegap);
	    }
	    else
	    {
		ga_clear(gap);

		
		ga_clear_strings(freegap);
	    }

	    gap->ga_itemsize = 0;
	    if (p == NULL)
		return FAIL;
	    *start = p;
	    vim_free(evalarg->eval_tofree_lambda);
	    evalarg->eval_tofree_lambda = p;
	    
	    *end = *start + STRLEN(*start) - endoff;
	}
    }

    return res;
}


    char_u *
typval2string(typval_T *tv, int join_list)
{
    garray_T	ga;
    char_u	*retval;

    if (join_list && tv->v_type == VAR_LIST)
    {
	ga_init2(&ga, sizeof(char), 80);
	if (tv->vval.v_list != NULL)
	{
	    list_join(&ga, tv->vval.v_list, (char_u *)"\n", TRUE, FALSE, 0);
	    if (tv->vval.v_list->lv_len > 0)
		ga_append(&ga, NL);
	}
	ga_append(&ga, NUL);
	retval = (char_u *)ga.ga_data;
    }
    else if (tv->v_type == VAR_LIST || tv->v_type == VAR_DICT)
    {
	char_u	*tofree;
	char_u	numbuf[NUMBUFLEN];

	retval = tv2string(tv, &tofree, numbuf, 0);
	
	if (retval != NULL && tofree == NULL)
	    retval = vim_strsave(retval);
    }
    else
	retval = vim_strsave(tv_get_string(tv));
    return retval;
}


    char_u *
eval_to_string_eap(
    char_u	*arg,
    int		join_list,
    exarg_T	*eap,
    int		use_simple_function)
{
    typval_T	tv;
    char_u	*retval;
    evalarg_T	evalarg;
    int		r;

    fill_evalarg_from_eap(&evalarg, eap, eap != NULL && eap->skip);
    if (use_simple_function)
	r = eval0_simple_funccal(arg, &tv, NULL, &evalarg);
    else
	r = eval0(arg, &tv, NULL, &evalarg);
    if (r == FAIL)
	retval = NULL;
    else
    {
	retval = typval2string(&tv, join_list);
	clear_tv(&tv);
    }
    clear_evalarg(&evalarg, NULL);

    return retval;
}

    char_u *
eval_to_string(
    char_u	*arg,
    int		join_list,
    int		use_simple_function)
{
    return eval_to_string_eap(arg, join_list, NULL, use_simple_function);
}


    char_u *
eval_to_string_safe(
    char_u	*arg,
    int		use_sandbox,
    int		keep_script_version,
    int		use_simple_function)
{
    char_u	*retval;
    funccal_entry_T funccal_entry;
    int		save_sc_version = current_sctx.sc_version;
    int		save_garbage = may_garbage_collect;

    if (!keep_script_version)
	current_sctx.sc_version = 1;
    save_funccal(&funccal_entry);
    if (use_sandbox)
	++sandbox;
    ++textlock;
    may_garbage_collect = FALSE;
    retval = eval_to_string(arg, FALSE, use_simple_function);
    if (use_sandbox)
	--sandbox;
    --textlock;
    may_garbage_collect = save_garbage;
    restore_funccal();
    current_sctx.sc_version = save_sc_version;
    return retval;
}


    varnumber_T
eval_to_number(char_u *expr, int use_simple_function)
{
    typval_T	rettv;
    varnumber_T	retval;
    char_u	*p = skipwhite(expr);
    int		r = NOTDONE;

    ++emsg_off;

    if (use_simple_function)
	r = may_call_simple_func(expr, &rettv);
    if (r == NOTDONE)
	r = eval1(&p, &rettv, &EVALARG_EVALUATE);
    if (r == FAIL)
	retval = -1;
    else
    {
	retval = tv_get_number_chk(&rettv, NULL);
	clear_tv(&rettv);
    }
    --emsg_off;

    return retval;
}


    typval_T *
eval_expr(char_u *arg, exarg_T *eap)
{
    return eval_expr_ext(arg, eap, FALSE);
}

    typval_T *
eval_expr_ext(char_u *arg, exarg_T *eap, int use_simple_function)
{
    typval_T	*tv;
    evalarg_T	evalarg;

    fill_evalarg_from_eap(&evalarg, eap, eap != NULL && eap->skip);

    tv = ALLOC_ONE(typval_T);
    if (tv != NULL)
    {
	int	r = NOTDONE;

	if (use_simple_function)
	    r = eval0_simple_funccal(arg, tv, eap, &evalarg);
	if (r == NOTDONE)
	    r = eval0(arg, tv, eap, &evalarg);

	if (r == FAIL)
	    VIM_CLEAR(tv);
    }

    clear_evalarg(&evalarg, eap);
    return tv;
}


    static char_u *
deref_function_name(
	    char_u	**arg,
	    char_u	**tofree,
	    evalarg_T	*evalarg,
	    int		verbose)
{
    typval_T	ref;
    char_u	*name = *arg;
    int		save_flags = 0;

    ref.v_type = VAR_UNKNOWN;
    if (evalarg != NULL)
    {
	
	save_flags = evalarg->eval_flags;
	evalarg->eval_flags |= EVAL_EVALUATE;
    }
    if (eval9(arg, &ref, evalarg, FALSE) == FAIL)
    {
	dictitem_T	*v;

	
	v = find_var_also_in_script(name, NULL, FALSE);
	if (v == NULL)
	{
	    name = NULL;
	    goto theend;
	}
	copy_tv(&v->di_tv, &ref);
    }
    if (*skipwhite(*arg) != NUL)
    {
	if (verbose)
	    semsg(_(e_trailing_characters_str), *arg);
	name = NULL;
    }
    else if (ref.v_type == VAR_FUNC && ref.vval.v_string != NULL)
    {
	name = ref.vval.v_string;
	ref.vval.v_string = NULL;
	*tofree = name;
    }
    else if (ref.v_type == VAR_PARTIAL && ref.vval.v_partial != NULL)
    {
	if (ref.vval.v_partial->pt_argc > 0
		|| ref.vval.v_partial->pt_dict != NULL)
	{
	    if (verbose)
		emsg(_(e_cannot_use_partial_here));
	    name = NULL;
	}
	else
	{
	    name = vim_strsave(partial_name(ref.vval.v_partial));
	    *tofree = name;
	}
    }
    else
    {
	if (verbose)
	    semsg(_(e_not_callable_type_str), name);
	name = NULL;
    }

theend:
    clear_tv(&ref);
    if (evalarg != NULL)
	evalarg->eval_flags = save_flags;
    return name;
}


    int
call_vim_function(
    char_u      *func,
    int		argc,
    typval_T	*argv,
    typval_T	*rettv)
{
    int		ret;
    funcexe_T	funcexe;
    char_u	*arg;
    char_u	*name;
    char_u	*tofree = NULL;
    int		ignore_errors;

    rettv->v_type = VAR_UNKNOWN;		
    CLEAR_FIELD(funcexe);
    funcexe.fe_firstline = curwin->w_cursor.lnum;
    funcexe.fe_lastline = curwin->w_cursor.lnum;
    funcexe.fe_evaluate = TRUE;

    
    
    
    
    ignore_errors = vim_strchr(func, '.') == NULL;
    arg = func;
    if (ignore_errors)
	++emsg_off;
    name = deref_function_name(&arg, &tofree, &EVALARG_EVALUATE, FALSE);
    if (ignore_errors)
	--emsg_off;
    if (name == NULL)
	name = func;

    ret = call_func(name, -1, rettv, argc, argv, &funcexe);

    if (ret == FAIL)
	clear_tv(rettv);
    vim_free(tofree);

    return ret;
}


    void *
call_func_retstr(
    char_u      *func,
    int		argc,
    typval_T	*argv)
{
    typval_T	rettv;
    char_u	*retval;

    if (call_vim_function(func, argc, argv, &rettv) == FAIL)
	return NULL;

    retval = vim_strsave(tv_get_string(&rettv));
    clear_tv(&rettv);
    return retval;
}


    void *
call_func_retlist(
    char_u      *func,
    int		argc,
    typval_T	*argv)
{
    typval_T	rettv;

    if (call_vim_function(func, argc, argv, &rettv) == FAIL)
	return NULL;

    if (rettv.v_type != VAR_LIST)
    {
	semsg(_(e_custom_list_completion_function_does_not_return_list_but_str),
		vartype_name(rettv.v_type));
	clear_tv(&rettv);
	return NULL;
    }

    return rettv.vval.v_list;
}

#if defined(FEAT_FOLDING) || defined(PROTO)

    int
eval_foldexpr(win_T *wp, int *cp)
{
    char_u	*arg;
    typval_T	tv;
    varnumber_T	retval;
    char_u	*s;
    sctx_T	saved_sctx = current_sctx;
    int		use_sandbox = was_set_insecurely((char_u *)"foldexpr",
								    OPT_LOCAL);

    arg = skipwhite(wp->w_p_fde);
    current_sctx = wp->w_p_script_ctx[WV_FDE];

    ++emsg_off;
    if (use_sandbox)
	++sandbox;
    ++textlock;
    *cp = NUL;

    
    
    if (eval0_simple_funccal(arg, &tv, NULL, &EVALARG_EVALUATE) == FAIL)
	retval = 0;
    else
    {
	
	if (tv.v_type == VAR_NUMBER)
	    retval = tv.vval.v_number;
	else if (tv.v_type != VAR_STRING || tv.vval.v_string == NULL)
	    retval = 0;
	else
	{
	    
	    
	    s = tv.vval.v_string;
	    if (*s != NUL && !VIM_ISDIGIT(*s) && *s != '-')
		*cp = *s++;
	    retval = atol((char *)s);
	}
	clear_tv(&tv);
    }
    --emsg_off;
    if (use_sandbox)
	--sandbox;
    --textlock;
    clear_evalarg(&EVALARG_EVALUATE, NULL);
    current_sctx = saved_sctx;

    return (int)retval;
}
#endif

#ifdef LOG_LOCKVAR
typedef struct flag_string_S
{
    int	    flag;
    char    *str;
} flag_string_T;

    static char *
flags_tostring(int flags, flag_string_T *_fstring, char *buf, size_t n)
{
    char *p = buf;
    *p = NUL;
    for (flag_string_T *fstring = _fstring; fstring->flag; ++fstring)
    {
	if ((fstring->flag & flags) != 0)
	{
	    size_t len = STRLEN(fstring->str);
	    if (n > p - buf + len + 7)
	    {
		STRCAT(p, fstring->str);
		p += len;
		STRCAT(p, " ");
		++p;
	    }
	    else
	    {
		STRCAT(buf, "...");
		break;
	    }
	}
    }
    return buf;
}

flag_string_T glv_flag_strings[] = {
    { GLV_QUIET,		"QUIET" },
    { GLV_NO_AUTOLOAD,		"NO_AUTOLOAD" },
    { GLV_READ_ONLY,		"READ_ONLY" },
    { GLV_NO_DECL,		"NO_DECL" },
    { GLV_COMPILING,		"COMPILING" },
    { GLV_ASSIGN_WITH_OP,	"ASSIGN_WITH_OP" },
    { GLV_PREFER_FUNC,		"PREFER_FUNC" },
    { 0,			NULL }
};
#endif


    static void
fill_lval_from_lval_root(lval_T *lp, lval_root_T *lr)
{
#ifdef LOG_LOCKVAR
    ch_log(NULL, "LKVAR: fill_lval_from_lval_root(): name %s, tv %p",
						lp->ll_name, (void*)lr->lr_tv);
#endif
    if (lr->lr_tv == NULL)
	return;
    if (!lr->lr_is_arg && lr->lr_tv->v_type == VAR_CLASS)
    {
	if (lr->lr_tv->vval.v_class != NULL)
	{
	    
	    class_T	*cl = lr->lr_tv->vval.v_class;
	    int		m_idx;
	    ocmember_T	*m = class_member_lookup(cl, lp->ll_name,
					lp->ll_name_end - lp->ll_name, &m_idx);
	    if (m != NULL)
	    {
		
		lp->ll_class = lr->lr_tv->vval.v_class;
		lp->ll_oi = m_idx;
		lp->ll_valtype = m->ocm_type;
		lp->ll_tv = &lp->ll_class->class_members_tv[m_idx];
#ifdef LOG_LOCKVAR
		ch_log(NULL, "LKVAR:    ... class member %s.%s",
					lp->ll_class->class_name, lp->ll_name);
#endif
		return;
	    }
	}
    }

#ifdef LOG_LOCKVAR
    ch_log(NULL, "LKVAR:    ... type: %s", vartype_name(lr->lr_tv->v_type));
#endif
    lp->ll_tv = lr->lr_tv;
    lp->ll_is_root = TRUE;
}


    static int
get_lval_check_access(
    class_T	*cl_exec,   
    class_T	*cl,	    
    ocmember_T	*om,	    
    char_u	*p,	    
    int		flags)	    
{
#ifdef LOG_LOCKVAR
    ch_log(NULL, "LKVAR: get_lval_check_access(), cl_exec %p, cl %p, %c",
						(void*)cl_exec, (void*)cl, *p);
#endif
    if (cl_exec != NULL && cl_exec == cl)
	return OK;

    char *msg = NULL;
    switch (om->ocm_access)
    {
	case VIM_ACCESS_PRIVATE:
	    msg = e_cannot_access_protected_variable_str;
	    break;
	case VIM_ACCESS_READ:
	    
	    if (*p == '[' || *p == '.')
		break;
	    if ((flags & GLV_READ_ONLY) == 0)
	    {
		if (IS_ENUM(cl))
		{
		    if (om->ocm_type->tt_type == VAR_OBJECT)
			semsg(_(e_enumvalue_str_cannot_be_modified),
				cl->class_name, om->ocm_name);
		    else
			msg = e_variable_is_not_writable_str;
		}
		else
		    msg = e_variable_is_not_writable_str;
	    }
	    break;
	case VIM_ACCESS_ALL:
	    break;
    }
    if (msg != NULL)
    {
	emsg_var_cl_define(msg, om->ocm_name, 0, cl);
	return FAIL;
    }
    return OK;
}


    static char_u *
get_lval_imported(
    lval_T	*lp,
    scid_T	imp_sid,
    char_u	*p,
    dictitem_T	**dip,
    int		fne_flags)
{
    ufunc_T	*ufunc;
    type_T	*type = NULL;
    int		cc;
    int		rc = FAIL;

    p = skipwhite(p);

    import_check_sourced_sid(&imp_sid);
    lp->ll_sid = imp_sid;
    lp->ll_name = p;
    p = find_name_end(lp->ll_name, NULL, NULL, fne_flags);
    lp->ll_name_end = p;

    
    cc = *p;
    *p = NUL;
    if (find_exported(imp_sid, lp->ll_name, &ufunc, &type, NULL, NULL,
								TRUE) == -1)
	goto failed;

    
    hashtab_T *ht = &SCRIPT_VARS(imp_sid);
    if (ht == NULL)
	goto failed;

    dictitem_T *di = find_var_in_ht(ht, 0, lp->ll_name, TRUE);
    if (di == NULL)
	
	goto success;

    *dip = di;

    
    svar_T *sv = find_typval_in_script(&di->di_tv, imp_sid, FALSE);
    if (sv != NULL && sv->sv_const != 0)
    {
	semsg(_(e_cannot_change_readonly_variable_str), lp->ll_name);
	goto failed;
    }

    
    if (value_check_lock(di->di_tv.v_lock, lp->ll_name, FALSE))
	goto failed;

    lp->ll_tv = &di->di_tv;
    lp->ll_valtype = type;

success:
    rc = OK;

failed:
    *p = cc;
    return rc == OK ? p : NULL;
}

typedef enum {
    GLV_FAIL,
    GLV_OK,
    GLV_STOP
} glv_status_T;


    static int
get_lval_dict_item(
    lval_T	*lp,
    char_u	*name,
    char_u	*key,
    int		len,
    char_u	**key_end,
    typval_T	*var1,
    int		flags,
    int		unlet,
    typval_T	*rettv)
{
    int		quiet = flags & GLV_QUIET;
    char_u	*p = *key_end;

    if (len == -1)
    {
	
	key = tv_get_string_chk(var1);	
	if (key == NULL)
	    return GLV_FAIL;
    }
    lp->ll_list = NULL;
    lp->ll_object = NULL;
    lp->ll_class = NULL;

    
    if (lp->ll_tv->vval.v_dict == NULL)
    {
	lp->ll_tv->vval.v_dict = dict_alloc();
	if (lp->ll_tv->vval.v_dict == NULL)
	    return GLV_FAIL;
	++lp->ll_tv->vval.v_dict->dv_refcount;
    }
    lp->ll_dict = lp->ll_tv->vval.v_dict;

    lp->ll_di = dict_find(lp->ll_dict, key, len);

    
    
    
    if (rettv != NULL && lp->ll_dict->dv_scope != 0)
    {
	int prevval;

	if (len != -1)
	{
	    prevval = key[len];
	    key[len] = NUL;
	}
	else
	    prevval = 0; 
	int wrong = (lp->ll_dict->dv_scope == VAR_DEF_SCOPE
		&& (rettv->v_type == VAR_FUNC
		    || rettv->v_type == VAR_PARTIAL)
		&& var_wrong_func_name(key, lp->ll_di == NULL))
	    || !valid_varname(key, -1, TRUE);
	if (len != -1)
	    key[len] = prevval;
	if (wrong)
	    return GLV_FAIL;
    }

    if (lp->ll_valtype != NULL)
	
	lp->ll_valtype = lp->ll_valtype->tt_member;

    if (lp->ll_di == NULL)
    {
	
	if (lp->ll_dict == get_vimvar_dict()
		|| &lp->ll_dict->dv_hashtab == get_funccal_args_ht())
	{
	    semsg(_(e_illegal_variable_name_str), name);
	    return GLV_FAIL;
	}

	
	if (*p == '[' || *p == '.' || unlet)
	{
	    if (!quiet)
		semsg(_(e_key_not_present_in_dictionary_str), key);
	    return GLV_FAIL;
	}
	if (len == -1)
	    lp->ll_newkey = vim_strsave(key);
	else
	    lp->ll_newkey = vim_strnsave(key, len);
	if (lp->ll_newkey == NULL)
	    p = NULL;

	*key_end = p;
	return GLV_STOP;
    }
    
    else if ((flags & GLV_READ_ONLY) == 0
	    && (var_check_ro(lp->ll_di->di_flags, name, FALSE)
		|| var_check_lock(lp->ll_di->di_flags, name, FALSE)))
	return GLV_FAIL;

    lp->ll_tv = &lp->ll_di->di_tv;

    return GLV_OK;
}


    static int
get_lval_blob(
    lval_T	*lp,
    typval_T	*var1,
    typval_T	*var2,
    int		empty1,
    int		quiet)
{
    int	bloblen = blob_len(lp->ll_tv->vval.v_blob);

    
    if (empty1)
	lp->ll_n1 = 0;
    else
	
	lp->ll_n1 = (int)tv_get_number(var1);

    if (check_blob_index(bloblen, lp->ll_n1, quiet) == FAIL)
	return FAIL;
    if (lp->ll_range && !lp->ll_empty2)
    {
	lp->ll_n2 = (int)tv_get_number(var2);
	if (check_blob_range(bloblen, lp->ll_n1, lp->ll_n2, quiet) == FAIL)
	    return FAIL;
    }

    if (!lp->ll_range)
	
	
	lp->ll_valtype = &t_number;

    lp->ll_blob = lp->ll_tv->vval.v_blob;
    lp->ll_tv = NULL;

    return OK;
}


    static int
get_lval_list(
    lval_T	*lp,
    typval_T	*var1,
    typval_T	*var2,
    int		empty1,
    int		flags,
    int		quiet)
{
    
    if (empty1)
	lp->ll_n1 = 0;
    else
	
	lp->ll_n1 = (int)tv_get_number(var1);

    lp->ll_dict = NULL;
    lp->ll_object = NULL;
    lp->ll_class = NULL;
    lp->ll_list = lp->ll_tv->vval.v_list;
    lp->ll_li = check_range_index_one(lp->ll_list, &lp->ll_n1,
				(flags & GLV_ASSIGN_WITH_OP) == 0, quiet);
    if (lp->ll_li == NULL)
	return FAIL;

    if (lp->ll_valtype != NULL && !lp->ll_range)
	
	lp->ll_valtype = lp->ll_valtype->tt_member;

    
    if (lp->ll_range && !lp->ll_empty2)
    {
	lp->ll_n2 = (int)tv_get_number(var2);
	
	if (check_range_index_two(lp->ll_list,
			&lp->ll_n1, lp->ll_li, &lp->ll_n2, quiet) == FAIL)
	    return FAIL;
    }

    lp->ll_tv = &lp->ll_li->li_tv;

    return OK;
}


    static void
get_lval_oc_method(
    lval_T	*lp,
    class_T	*cl,
    char_u	*key,
    char_u	*key_end,
    vartype_T	v_type)
{
    
    
    
    for (int round = v_type == VAR_OBJECT ? 2 : 1; round <= 2; ++round)
    {
	int	m_idx;
	ufunc_T	*fp;

	fp = method_lookup(cl, round == 1 ? VAR_CLASS : VAR_OBJECT,
						key, key_end - key, &m_idx);
	lp->ll_oi = m_idx;
	if (fp != NULL)
	{
	    lp->ll_ufunc = fp;
	    lp->ll_valtype = fp->uf_func_type;
	    break;
	}
    }
}


    static int
get_lval_oc_variable(
    lval_T	*lp,
    class_T	*cl,
    char_u	*key,
    char_u	*key_end,
    vartype_T	v_type,
    class_T	*cl_exec,
    int		flags)
{
    int		m_idx;
    ocmember_T	*om;

    om = member_lookup(cl, v_type, key, key_end - key, &m_idx);
    lp->ll_oi = m_idx;
    if (om == NULL)
	return OK;

    
    if (get_lval_check_access(cl_exec, cl, om, key_end, flags) == FAIL)
	return FAIL;

    
    
    if ((flags & GLV_READ_ONLY) == 0 && (*key_end != '.' && *key_end != '[')
	    && oc_var_check_ro(cl, om))
	return FAIL;

    lp->ll_valtype = om->ocm_type;

    if (v_type == VAR_OBJECT)
	lp->ll_tv = ((typval_T *)(lp->ll_tv->vval.v_object + 1)) + m_idx;
    else
	lp->ll_tv = &cl->class_members_tv[m_idx];

    return OK;
}


    static int
get_lval_class_or_obj(
    lval_T	*lp,
    char_u	*key,
    char_u	*key_end,
    vartype_T	v_type,
    class_T	*cl_exec,
    int		flags,
    int		quiet)
{
    lp->ll_dict = NULL;
    lp->ll_list = NULL;

    class_T *cl;
    if (v_type == VAR_OBJECT)
    {
	if (lp->ll_tv->vval.v_object == NULL)
	{
	    if (!quiet)
		emsg(_(e_using_null_object));
	    return FAIL;
	}
	cl = lp->ll_tv->vval.v_object->obj_class;
	lp->ll_object = lp->ll_tv->vval.v_object;
    }
    else
    {
	cl = lp->ll_tv->vval.v_class;
	lp->ll_object = NULL;
    }
    lp->ll_class = cl;

    if (cl == NULL)
	
	return OK;

    lp->ll_valtype = NULL;

    if (flags & GLV_PREFER_FUNC)
	get_lval_oc_method(lp, cl, key, key_end, v_type);

    
    if (lp->ll_valtype == NULL)
    {
	if (get_lval_oc_variable(lp, cl, key, key_end, v_type, cl_exec, flags)
								== FAIL)
	    return FAIL;
    }

    if (lp->ll_valtype == NULL)
    {
	member_not_found_msg(cl, v_type, key, key_end - key);
	return FAIL;
    }

    return OK;
}


    static int
dot_allowed_after_type(char_u *name, vartype_T v_type, int quiet)
{
    if (v_type != VAR_DICT && v_type != VAR_OBJECT && v_type != VAR_CLASS)
    {
	if (!quiet)
	    semsg(_(e_dot_not_allowed_after_str_str),
		    vartype_name(v_type), name);
	return FALSE;
    }

    return TRUE;
}


    static int
bracket_allowed_after_type(char_u *name, vartype_T v_type, int quiet)
{
    if (v_type == VAR_CLASS || v_type == VAR_OBJECT)
    {
	if (!quiet)
	    semsg(_(e_index_not_allowed_after_str_str),
		    vartype_name(v_type), name);
	return FALSE;
    }

    return TRUE;
}


    static int
index_allowed_after_type(char_u *name, vartype_T v_type, int quiet)
{
    if (v_type != VAR_LIST && v_type != VAR_DICT && v_type != VAR_BLOB &&
	    v_type != VAR_OBJECT && v_type != VAR_CLASS)
    {
	if (!quiet)
	    semsg(_(e_index_not_allowed_after_str_str),
		    vartype_name(v_type), name);
	return FALSE;
    }

    return TRUE;
}


    static char_u *
get_lval_subscript(
    lval_T	*lp,
    char_u	*p,
    char_u	*name,
    typval_T	*rettv,
    hashtab_T	*ht,
    dictitem_T	*v,
    int		unlet,
    int		flags,	    
    class_T	*cl_exec)
{
    int		vim9script = in_vim9script();
    int		quiet = flags & GLV_QUIET;
    char_u	*key = NULL;
    int		len;
    typval_T	var1;
    typval_T	var2;
    int		empty1 = FALSE;
    int		rc = FAIL;

    
    var1.v_type = VAR_UNKNOWN;
    var2.v_type = VAR_UNKNOWN;

    while (*p == '[' || (*p == '.' && p[1] != '=' && p[1] != '.'))
    {
	vartype_T v_type = lp->ll_tv->v_type;

	if (*p == '.' && !dot_allowed_after_type(name, v_type, quiet))
	    goto done;

	if (*p == '[' && !bracket_allowed_after_type(name, v_type, quiet))
	    goto done;

	if (!index_allowed_after_type(name, v_type, quiet))
	    goto done;

	
	int r = OK;
	if (v_type == VAR_LIST && lp->ll_tv->vval.v_list == NULL)
	    r = rettv_list_alloc(lp->ll_tv);
	else if (v_type == VAR_BLOB && lp->ll_tv->vval.v_blob == NULL)
	    r = rettv_blob_alloc(lp->ll_tv);
	if (r == FAIL)
	    goto done;

	if (lp->ll_range)
	{
	    if (!quiet)
		emsg(_(e_slice_must_come_last));
	    goto done;
	}
#ifdef LOG_LOCKVAR
	ch_log(NULL, "LKVAR: get_lval() loop: p: %s, type: %s", p,
		vartype_name(v_type));
#endif

	if (vim9script && lp->ll_valtype == NULL
		&& v != NULL
		&& lp->ll_tv == &v->di_tv
		&& ht != NULL && ht == get_script_local_ht())
	{
	    svar_T  *sv = find_typval_in_script(lp->ll_tv, 0, TRUE);

	    
	    if (sv != NULL)
	    {
		lp->ll_valtype = sv->sv_type;
#ifdef LOG_LOCKVAR
		ch_log(NULL, "LKVAR:    ... loop: vim9 assign type: %s",
			vartype_name(lp->ll_valtype->tt_type));
#endif
	    }
	}

	len = -1;
	if (*p == '.')
	{
	    key = p + 1;

	    for (len = 0; ASCII_ISALNUM(key[len]) || key[len] == '_'; ++len)
		;
	    if (len == 0)
	    {
		if (!quiet)
		    emsg(_(e_cannot_use_empty_key_for_dictionary));
		goto done;
	    }
	    p = key + len;
	}
	else
	{
	    
	    p = skipwhite(p + 1);
	    if (*p == ':')
		empty1 = TRUE;
	    else
	    {
		empty1 = FALSE;
		if (eval1(&p, &var1, &EVALARG_EVALUATE) == FAIL)  
		    goto done;
		if (tv_get_string_chk(&var1) == NULL)
		    
		    goto done;
		p = skipwhite(p);
	    }

	    
	    if (*p == ':')
	    {
		if (v_type == VAR_DICT)
		{
		    if (!quiet)
			emsg(_(e_cannot_slice_dictionary));
		    goto done;
		}
		if (rettv != NULL
			&& !(rettv->v_type == VAR_LIST
			    && rettv->vval.v_list != NULL)
			&& !(rettv->v_type == VAR_BLOB
			    && rettv->vval.v_blob != NULL))
		{
		    if (!quiet)
			emsg(_(e_slice_requires_list_or_blob_value));
		    goto done;
		}
		p = skipwhite(p + 1);
		if (*p == ']')
		    lp->ll_empty2 = TRUE;
		else
		{
		    lp->ll_empty2 = FALSE;
		    
		    if (eval1(&p, &var2, &EVALARG_EVALUATE) == FAIL)
			goto done;
		    if (tv_get_string_chk(&var2) == NULL)
			
			goto done;
		}
		lp->ll_range = TRUE;
	    }
	    else
		lp->ll_range = FALSE;

	    if (*p != ']')
	    {
		if (!quiet)
		    emsg(_(e_missing_closing_square_brace));
		goto done;
	    }

	    
	    ++p;
	}
#ifdef LOG_LOCKVAR
	if (len == -1)
	    ch_log(NULL, "LKVAR:    ... loop: p: %s, '[' key: %s", p,
		    empty1 ? ":" : (char*)tv_get_string(&var1));
	else
	    ch_log(NULL, "LKVAR:    ... loop: p: %s, '.' key: %s", p, key);
#endif

	if (v_type == VAR_DICT)
	{
	    glv_status_T glv_status;

	    glv_status = get_lval_dict_item(lp, name, key, len, &p, &var1,
							flags, unlet, rettv);
	    if (glv_status == GLV_FAIL)
		goto done;
	    if (glv_status == GLV_STOP)
		break;
	}
	else if (v_type == VAR_BLOB)
	{
	    if (get_lval_blob(lp, &var1, &var2, empty1, quiet) == FAIL)
		goto done;

	    break;
	}
	else if (v_type == VAR_LIST)
	{
	    if (get_lval_list(lp, &var1, &var2, empty1, flags, quiet) == FAIL)
		goto done;
	}
	else  
	{
	    if (get_lval_class_or_obj(lp, key, p, v_type, cl_exec, flags,
							quiet) == FAIL)
		goto done;
	}

	clear_tv(&var1);
	clear_tv(&var2);
	var1.v_type = VAR_UNKNOWN;
	var2.v_type = VAR_UNKNOWN;
    }

    rc = OK;

done:
    clear_tv(&var1);
    clear_tv(&var2);
    return rc == OK ? p : NULL;
}


    char_u *
get_lval(
    char_u	*name,
    typval_T	*rettv,
    lval_T	*lp,
    int		unlet,
    int		skip,
    int		flags,	    
    int		fne_flags)  
{
    char_u	*p;
    char_u	*expr_start, *expr_end;
    int		cc;
    dictitem_T	*v = NULL;
    hashtab_T	*ht = NULL;
    int		quiet = flags & GLV_QUIET;
    int		writing = 0;
    int		vim9script = in_vim9script();
    class_T	*cl_exec = NULL;    

#ifdef LOG_LOCKVAR
    if (lval_root == NULL)
	ch_log(NULL, "LKVAR: get_lval(): name: %s, lval_root (nil)", name);
    else
	ch_log(NULL, "LKVAR: get_lval(): name: %s, lr_tv %p lr_is_arg %d",
			name, (void*)lval_root->lr_tv, lval_root->lr_is_arg);
    char buf[80];
    ch_log(NULL, "LKVAR:    ...: GLV flags: %s",
		    flags_tostring(flags, glv_flag_strings, buf, sizeof(buf)));
#endif

    
    CLEAR_POINTER(lp);

    if (skip || (flags & GLV_COMPILING))
    {
	
	lp->ll_name = name;
	lp->ll_name_end = find_name_end(name, NULL, NULL,
						      FNE_INCL_BR | fne_flags);
	return lp->ll_name_end;
    }

    
    if (vim9script && at_script_level()
		  && name[0] == 's' && name[1] == ':' && !VIM_ISWHITE(name[2]))
    {
	semsg(_(e_cannot_use_s_colon_in_vim9_script_str), name);
	return NULL;
    }

    
    p = find_name_end(name, &expr_start, &expr_end, fne_flags);
    lp->ll_name_end = p;
    if (expr_start != NULL)
    {
	
	if (unlet && !VIM_ISWHITE(*p) && !ends_excmd(*p)
						    && *p != '[' && *p != '.')
	{
	    semsg(_(e_trailing_characters_str), p);
	    return NULL;
	}

	lp->ll_exp_name = make_expanded_name(name, expr_start, expr_end, p);
	if (lp->ll_exp_name == NULL)
	{
	    
	    
	    
	    if (!aborting() && !quiet)
	    {
		emsg_severe = TRUE;
		semsg(_(e_invalid_argument_str), name);
		return NULL;
	    }
	}
	lp->ll_name = lp->ll_exp_name;
    }
    else
    {
	lp->ll_name = name;

	if (vim9script)
	{
	    
	    
	    if (p == name + 2 && p[-1] == ':' && *p != '[')
	    {
		--p;
		lp->ll_name_end = p;
	    }
	    if (*skipwhite(p) == ':')
	    {
		char_u	    *tp = skipwhite(p + 1);

		if (is_scoped_variable(name))
		{
		    semsg(_(e_cannot_use_type_with_this_variable_str), name);
		    return NULL;
		}
		if (VIM_ISWHITE(*p))
		{
		    semsg(_(e_no_white_space_allowed_before_colon_str), p);
		    return NULL;
		}
		if (tp == p + 1 && !quiet)
		{
		    semsg(_(e_white_space_required_after_str_str), ":", p);
		    return NULL;
		}
		if (!SCRIPT_ID_VALID(current_sctx.sc_sid))
		{
		    semsg(_(e_using_type_not_in_script_context_str), p);
		    return NULL;
		}
		if (vim9script && (flags & GLV_NO_DECL) &&
			!(flags & GLV_FOR_LOOP))
		{
		    
		    semsg(_(e_trailing_characters_str), p);
		    return NULL;
		}


		
		lp->ll_type = parse_type(&tp,
			       &SCRIPT_ITEM(current_sctx.sc_sid)->sn_type_list,
			       !quiet);
		if (lp->ll_type == NULL && !quiet)
		    return NULL;
		lp->ll_name_end = tp;
	    }
	    
	}
    }
    if (lp->ll_name == NULL)
	return p;

    if (*p == '.')
    {
	imported_T *import = find_imported(lp->ll_name, p - lp->ll_name, TRUE);
	if (import != NULL)
	{
	    p++;	
	    p = get_lval_imported(lp, import->imp_sid, p, &v, fne_flags);
	    if (p == NULL)
		return NULL;
	}
    }

    
    if (*p != '[' && *p != '.')
    {
	if (lval_root != NULL)
	    fill_lval_from_lval_root(lp, lval_root);
	return p;
    }

    if (vim9script && lval_root != NULL)
	cl_exec = lval_root->lr_cl_exec;
    if (vim9script && lval_root != NULL && lval_root->lr_tv != NULL)
    {
	
	lp->ll_tv = lval_root->lr_tv;
	v = NULL;
    }
    else if (lp->ll_tv == NULL)
    {
	cc = *p;
	*p = NUL;
	
	writing = !(flags & GLV_READ_ONLY);
	v = find_var(lp->ll_name, writing ? &ht : NULL,
					 (flags & GLV_NO_AUTOLOAD) || writing);
	if (v == NULL && !quiet)
	    semsg(_(e_undefined_variable_str), lp->ll_name);
	*p = cc;
	if (v == NULL)
	    return NULL;
	lp->ll_tv = &v->di_tv;
    }

    if (vim9script && (flags & GLV_NO_DECL) == 0)
    {
	if (!quiet)
	    semsg(_(e_variable_already_declared_str), lp->ll_name);
	return NULL;
    }

    
    p = get_lval_subscript(lp, p, name, rettv, ht, v, unlet, flags, cl_exec);
    if (p == NULL)
	return NULL;

    if (vim9script && lp->ll_valtype != NULL && rettv != NULL)
    {
	where_T	    where = WHERE_INIT;

	
	
	if (check_typval_type(lp->ll_valtype, rettv, where) == FAIL)
	    return NULL;
    }

    lp->ll_name_end = p;
    return p;
}


    void
clear_lval(lval_T *lp)
{
    vim_free(lp->ll_exp_name);
    vim_free(lp->ll_newkey);
}


    void
set_var_lval(
    lval_T	*lp,
    char_u	*endp,
    typval_T	*rettv,
    int		copy,
    int		flags,	    
    char_u	*op,
    int		var_idx)    
{
    int		cc;
    dictitem_T	*di;

    if (lp->ll_tv == NULL)
    {
	cc = *endp;
	*endp = NUL;
	if (in_vim9script() && check_reserved_name(lp->ll_name, FALSE) == FAIL)
	    return;

	if (lp->ll_blob != NULL)
	{
	    int	    error = FALSE, val;

	    if (op != NULL && *op != '=')
	    {
		semsg(_(e_wrong_variable_type_for_str_equal), op);
		return;
	    }
	    if (value_check_lock(lp->ll_blob->bv_lock, lp->ll_name, FALSE))
		return;

	    if (lp->ll_range && rettv->v_type == VAR_BLOB)
	    {
		if (lp->ll_empty2)
		    lp->ll_n2 = blob_len(lp->ll_blob) - 1;

		if (blob_set_range(lp->ll_blob, lp->ll_n1, lp->ll_n2,
								rettv) == FAIL)
		    return;
	    }
	    else
	    {
		val = (int)tv_get_number_chk(rettv, &error);
		if (!error)
		    blob_set_append(lp->ll_blob, lp->ll_n1, val);
	    }
	}
	else if (op != NULL && *op != '=')
	{
	    typval_T tv;

	    if ((flags & (ASSIGN_CONST | ASSIGN_FINAL))
					     && (flags & ASSIGN_FOR_LOOP) == 0)
	    {
		emsg(_(e_cannot_modify_existing_variable));
		*endp = cc;
		return;
	    }

	    
	    di = NULL;
	    if (eval_variable(lp->ll_name, (int)STRLEN(lp->ll_name),
				 lp->ll_sid, &tv, &di, EVAL_VAR_VERBOSE) == OK)
	    {
		if (di != NULL && check_typval_is_value(&di->di_tv) == FAIL)
		{
		    clear_tv(&tv);
		    return;
		}

		if ((di == NULL
			 || (!var_check_ro(di->di_flags, lp->ll_name, FALSE)
			   && !tv_check_lock(&di->di_tv, lp->ll_name, FALSE)))
			&& tv_op(&tv, rettv, op) == OK)
		    set_var_const(lp->ll_name, lp->ll_sid, NULL, &tv, FALSE,
				ASSIGN_NO_DECL | ASSIGN_COMPOUND_OP, 0);
		clear_tv(&tv);
	    }
	}
	else
	{
	    if (lp->ll_type != NULL && check_typval_arg_type(lp->ll_type, rettv,
							      NULL, 0) == FAIL)
		return;
	    set_var_const(lp->ll_name, lp->ll_sid, lp->ll_type, rettv, copy,
							       flags, var_idx);
	}
	*endp = cc;
    }
    else if (value_check_lock(lp->ll_newkey == NULL
		? lp->ll_tv->v_lock
		: lp->ll_tv->vval.v_dict->dv_lock, lp->ll_name, FALSE))
	;
    else if (lp->ll_range)
    {
	if ((flags & (ASSIGN_CONST | ASSIGN_FINAL))
					     && (flags & ASSIGN_FOR_LOOP) == 0)
	{
	    emsg(_(e_cannot_lock_range));
	    return;
	}

	(void)list_assign_range(lp->ll_list, rettv->vval.v_list,
			 lp->ll_n1, lp->ll_n2, lp->ll_empty2, op, lp->ll_name);
    }
    else
    {
	
	if ((flags & (ASSIGN_CONST | ASSIGN_FINAL))
					     && (flags & ASSIGN_FOR_LOOP) == 0)
	{
	    emsg(_(e_cannot_lock_list_or_dict));
	    return;
	}

	if (lp->ll_valtype != NULL
		    && check_typval_arg_type(lp->ll_valtype, rettv,
							      NULL, 0) == FAIL)
	    return;

	if (lp->ll_newkey != NULL)
	{
	    if (op != NULL && *op != '=')
	    {
		semsg(_(e_key_not_present_in_dictionary_str), lp->ll_newkey);
		return;
	    }
	    if (dict_wrong_func_name(lp->ll_tv->vval.v_dict, rettv,
								lp->ll_newkey))
		return;

	    
	    di = dictitem_alloc(lp->ll_newkey);
	    if (di == NULL)
		return;
	    if (dict_add(lp->ll_tv->vval.v_dict, di) == FAIL)
	    {
		vim_free(di);
		return;
	    }
	    lp->ll_tv = &di->di_tv;
	}
	else if (op != NULL && *op != '=')
	{
	    tv_op(lp->ll_tv, rettv, op);
	    return;
	}
	else
	    clear_tv(lp->ll_tv);

	
	if (copy)
	    copy_tv(rettv, lp->ll_tv);
	else
	{
	    *lp->ll_tv = *rettv;
	    lp->ll_tv->v_lock = 0;
	    init_tv(rettv);
	}
    }
}


    static int
tv_op_blob(typval_T *tv1, typval_T *tv2, char_u *op)
{
    if (*op != '+' || tv2->v_type != VAR_BLOB)
	return FAIL;

    
    if (tv2->vval.v_blob == NULL)
	return OK;

    if (tv1->vval.v_blob == NULL)
    {
	tv1->vval.v_blob = tv2->vval.v_blob;
	++tv1->vval.v_blob->bv_refcount;
	return OK;
    }

    blob_T	*b1 = tv1->vval.v_blob;
    blob_T	*b2 = tv2->vval.v_blob;
    int		len = blob_len(b2);

    for (int i = 0; i < len; i++)
	ga_append(&b1->bv_ga, blob_get(b2, i));

    return OK;
}


    static int
tv_op_list(typval_T *tv1, typval_T *tv2, char_u *op)
{
    if (*op != '+' || tv2->v_type != VAR_LIST)
	return FAIL;

    
    if (tv2->vval.v_list == NULL)
	return OK;

    if (tv1->vval.v_list == NULL)
    {
	tv1->vval.v_list = tv2->vval.v_list;
	++tv1->vval.v_list->lv_refcount;
    }
    else
	list_extend(tv1->vval.v_list, tv2->vval.v_list, NULL);

    return OK;
}


    static int
tv_op_number(typval_T *tv1, typval_T *tv2, char_u *op)
{
    varnumber_T	n;
    int		failed = FALSE;

    n = tv_get_number(tv1);
    if (tv2->v_type == VAR_FLOAT)
    {
	float_T f = n;

	if (*op == '%')
	    return FAIL;
	switch (*op)
	{
	    case '+': f += tv2->vval.v_float; break;
	    case '-': f -= tv2->vval.v_float; break;
	    case '*': f *= tv2->vval.v_float; break;
	    case '/': f /= tv2->vval.v_float; break;
	}
	clear_tv(tv1);
	tv1->v_type = VAR_FLOAT;
	tv1->vval.v_float = f;
    }
    else
    {
	switch (*op)
	{
	    case '+': n += tv_get_number(tv2); break;
	    case '-': n -= tv_get_number(tv2); break;
	    case '*': n *= tv_get_number(tv2); break;
	    case '/': n = num_divide(n, tv_get_number(tv2), &failed); break;
	    case '%': n = num_modulus(n, tv_get_number(tv2), &failed); break;
	}
	clear_tv(tv1);
	tv1->v_type = VAR_NUMBER;
	tv1->vval.v_number = n;
    }

    return failed ? FAIL : OK;
}


    static int
tv_op_string(typval_T *tv1, typval_T *tv2, char_u *op UNUSED)
{
    char_u	numbuf[NUMBUFLEN];
    char_u	*s;

    if (tv2->v_type == VAR_FLOAT)
	return FAIL;

    
    s = tv_get_string(tv1);
    s = concat_str(s, tv_get_string_buf(tv2, numbuf));
    clear_tv(tv1);
    tv1->v_type = VAR_STRING;
    tv1->vval.v_string = s;

    return OK;
}


    static int
tv_op_nr_or_string(typval_T *tv1, typval_T *tv2, char_u *op)
{
    if (tv2->v_type == VAR_LIST)
	return FAIL;

    if (vim_strchr((char_u *)"+-*/%", *op) != NULL)
	return tv_op_number(tv1, tv2, op);

    return tv_op_string(tv1, tv2, op);
}


    static int
tv_op_float(typval_T *tv1, typval_T *tv2, char_u *op)
{
    float_T f;

    if (*op == '%' || *op == '.'
	    || (tv2->v_type != VAR_FLOAT
		&& tv2->v_type != VAR_NUMBER
		&& tv2->v_type != VAR_STRING))
	return FAIL;

    if (tv2->v_type == VAR_FLOAT)
	f = tv2->vval.v_float;
    else
	f = tv_get_number(tv2);
    switch (*op)
    {
	case '+': tv1->vval.v_float += f; break;
	case '-': tv1->vval.v_float -= f; break;
	case '*': tv1->vval.v_float *= f; break;
	case '/': tv1->vval.v_float /= f; break;
    }

    return OK;
}


    int
tv_op(typval_T *tv1, typval_T *tv2, char_u *op)
{
    
    
    if (tv2->v_type == VAR_FUNC || tv2->v_type == VAR_DICT
		|| ((tv2->v_type == VAR_BOOL || tv2->v_type == VAR_SPECIAL)
							&& *op != '.'))
    {
	semsg(_(e_wrong_variable_type_for_str_equal), op);
	return FAIL;
    }

    int retval = FAIL;
    switch (tv1->v_type)
    {
	case VAR_UNKNOWN:
	case VAR_ANY:
	case VAR_VOID:
	case VAR_DICT:
	case VAR_FUNC:
	case VAR_PARTIAL:
	case VAR_BOOL:
	case VAR_SPECIAL:
	case VAR_JOB:
	case VAR_CHANNEL:
	case VAR_INSTR:
	case VAR_OBJECT:
	case VAR_CLASS:
	case VAR_TYPEALIAS:
	    break;

	case VAR_BLOB:
	    retval = tv_op_blob(tv1, tv2, op);
	    break;

	case VAR_LIST:
	    retval = tv_op_list(tv1, tv2, op);
	    break;

	case VAR_NUMBER:
	case VAR_STRING:
	    retval = tv_op_nr_or_string(tv1, tv2, op);
	    break;

	case VAR_FLOAT:
	    retval = tv_op_float(tv1, tv2, op);
	    break;
    }

    if (retval != OK)
	semsg(_(e_wrong_variable_type_for_str_equal), op);

    return retval;
}


    void *
eval_for_line(
    char_u	*arg,
    int		*errp,
    exarg_T	*eap,
    evalarg_T	*evalarg)
{
    forinfo_T	*fi;
    char_u	*var_list_end;
    char_u	*expr;
    typval_T	tv;
    list_T	*l;
    int		skip = !(evalarg->eval_flags & EVAL_EVALUATE);

    *errp = TRUE;	

    fi = ALLOC_CLEAR_ONE(forinfo_T);
    if (fi == NULL)
	return NULL;

    var_list_end = skip_var_list(arg, TRUE, &fi->fi_varcount,
						     &fi->fi_semicolon, FALSE);
    if (var_list_end == NULL)
	return fi;

    expr = skipwhite_and_linebreak(var_list_end, evalarg);
    if (expr[0] != 'i' || expr[1] != 'n'
				  || !(expr[2] == NUL || VIM_ISWHITE(expr[2])))
    {
	if (in_vim9script() && *expr == ':' && expr != var_list_end)
	    semsg(_(e_no_white_space_allowed_before_colon_str), expr);
	else
	    emsg(_(e_missing_in_after_for));
	return fi;
    }

    if (skip)
	++emsg_skip;
    expr = skipwhite_and_linebreak(expr + 2, evalarg);
    if (eval0(expr, &tv, eap, evalarg) == OK)
    {
	*errp = FALSE;
	if (!skip)
	{
	    if (tv.v_type == VAR_LIST)
	    {
		l = tv.vval.v_list;
		if (l == NULL)
		{
		    
		    clear_tv(&tv);
		}
		else
		{
		    
		    CHECK_LIST_MATERIALIZE(l);

		    
		    
		    fi->fi_list = l;
		    list_add_watch(l, &fi->fi_lw);
		    fi->fi_lw.lw_item = l->lv_first;
		}
	    }
	    else if (tv.v_type == VAR_BLOB)
	    {
		fi->fi_bi = 0;
		if (tv.vval.v_blob != NULL)
		{
		    typval_T btv;

		    
		    
		    blob_copy(tv.vval.v_blob, &btv);
		    fi->fi_blob = btv.vval.v_blob;
		}
		clear_tv(&tv);
	    }
	    else if (tv.v_type == VAR_STRING)
	    {
		fi->fi_byte_idx = 0;
		fi->fi_string = tv.vval.v_string;
		tv.vval.v_string = NULL;
		if (fi->fi_string == NULL)
		    fi->fi_string = vim_strsave((char_u *)"");
	    }
	    else
	    {
		emsg(_(e_string_list_or_blob_required));
		clear_tv(&tv);
	    }
	}
    }
    if (skip)
	--emsg_skip;
    fi->fi_break_count = evalarg->eval_break_count;

    return fi;
}


    void
skip_for_lines(void *fi_void, evalarg_T *evalarg)
{
    forinfo_T	*fi = (forinfo_T *)fi_void;
    int		i;

    for (i = 0; i < fi->fi_break_count; ++i)
	eval_next_line(NULL, evalarg);
}


    int
next_for_item(void *fi_void, char_u *arg)
{
    forinfo_T	*fi = (forinfo_T *)fi_void;
    int		result;
    int		flag = ASSIGN_FOR_LOOP | (in_vim9script()
			 ? (ASSIGN_FINAL
			     
			     | (fi->fi_bi == 0 ? 0 : ASSIGN_DECL)
			     | ASSIGN_NO_MEMBER_TYPE
			     | ASSIGN_UPDATE_BLOCK_ID)
			 : 0);
    listitem_T	*item;
    int		skip_assign = in_vim9script() && arg[0] == '_'
						      && !eval_isnamec(arg[1]);

    if (fi->fi_blob != NULL)
    {
	typval_T	tv;

	if (fi->fi_bi >= blob_len(fi->fi_blob))
	    return FALSE;
	tv.v_type = VAR_NUMBER;
	tv.v_lock = VAR_FIXED;
	tv.vval.v_number = blob_get(fi->fi_blob, fi->fi_bi);
	++fi->fi_bi;
	if (skip_assign)
	    return TRUE;
	return ex_let_vars(arg, &tv, TRUE, fi->fi_semicolon,
					    fi->fi_varcount, flag, NULL) == OK;
    }

    if (fi->fi_string != NULL)
    {
	typval_T	tv;
	int		len;

	len = mb_ptr2len(fi->fi_string + fi->fi_byte_idx);
	if (len == 0)
	    return FALSE;
	tv.v_type = VAR_STRING;
	tv.v_lock = VAR_FIXED;
	tv.vval.v_string = vim_strnsave(fi->fi_string + fi->fi_byte_idx, len);
	fi->fi_byte_idx += len;
	++fi->fi_bi;
	if (skip_assign)
	    result = TRUE;
	else
	    result = ex_let_vars(arg, &tv, TRUE, fi->fi_semicolon,
					    fi->fi_varcount, flag, NULL) == OK;
	vim_free(tv.vval.v_string);
	return result;
    }

    item = fi->fi_lw.lw_item;
    if (item == NULL)
	result = FALSE;
    else
    {
	fi->fi_lw.lw_item = item->li_next;
	++fi->fi_bi;
	if (skip_assign)
	    result = TRUE;
	else
	    result = (ex_let_vars(arg, &item->li_tv, TRUE, fi->fi_semicolon,
					   fi->fi_varcount, flag, NULL) == OK);
    }
    return result;
}


    void
free_for_info(void *fi_void)
{
    forinfo_T    *fi = (forinfo_T *)fi_void;

    if (fi == NULL)
	return;
    if (fi->fi_list != NULL)
    {
	list_rem_watch(fi->fi_list, &fi->fi_lw);
	list_unref(fi->fi_list);
    }
    else if (fi->fi_blob != NULL)
	blob_unref(fi->fi_blob);
    else
	vim_free(fi->fi_string);
    vim_free(fi);
}

    void
set_context_for_expression(
    expand_T	*xp,
    char_u	*arg,
    cmdidx_T	cmdidx)
{
    int		has_expr = cmdidx != CMD_let && cmdidx != CMD_var;
    int		c;
    char_u	*p;

    if (cmdidx == CMD_let || cmdidx == CMD_var
				 || cmdidx == CMD_const || cmdidx == CMD_final)
    {
	xp->xp_context = EXPAND_USER_VARS;
	if (vim_strpbrk(arg, (char_u *)"\"'+-*/%.=!?~|&$([<>,#") == NULL)
	{
	    
	    for (p = arg + STRLEN(arg); p >= arg; )
	    {
		xp->xp_pattern = p;
		MB_PTR_BACK(arg, p);
		if (VIM_ISWHITE(*p))
		    break;
	    }
	    return;
	}
    }
    else
	xp->xp_context = cmdidx == CMD_call ? EXPAND_FUNCTIONS
							  : EXPAND_EXPRESSION;
    while ((xp->xp_pattern = vim_strpbrk(arg,
				  (char_u *)"\"'+-*/%.=!?~|&$([<>,#")) != NULL)
    {
	c = *xp->xp_pattern;
	if (c == '&')
	{
	    c = xp->xp_pattern[1];
	    if (c == '&')
	    {
		++xp->xp_pattern;
		xp->xp_context = has_expr ? EXPAND_EXPRESSION : EXPAND_NOTHING;
	    }
	    else if (c != ' ')
	    {
		xp->xp_context = EXPAND_SETTINGS;
		if ((c == 'l' || c == 'g') && xp->xp_pattern[2] == ':')
		    xp->xp_pattern += 2;

	    }
	}
	else if (c == '$')
	{
	    
	    xp->xp_context = EXPAND_ENV_VARS;
	}
	else if (c == '=')
	{
	    has_expr = TRUE;
	    xp->xp_context = EXPAND_EXPRESSION;
	}
	else if (c == '#'
		&& xp->xp_context == EXPAND_EXPRESSION)
	{
	    
	    break;
	}
	else if ((c == '<' || c == '#')
		&& xp->xp_context == EXPAND_FUNCTIONS
		&& vim_strchr(xp->xp_pattern, '(') == NULL)
	{
	    
	    break;
	}
	else if (has_expr)
	{
	    if (c == '"')	    
	    {
		while ((c = *++xp->xp_pattern) != NUL && c != '"')
		    if (c == '\\' && xp->xp_pattern[1] != NUL)
			++xp->xp_pattern;
		xp->xp_context = EXPAND_NOTHING;
	    }
	    else if (c == '\'')	    
	    {
		
		while ((c = *++xp->xp_pattern) != NUL && c != '\'')
		     ;
		xp->xp_context = EXPAND_NOTHING;
	    }
	    else if (c == '|')
	    {
		if (xp->xp_pattern[1] == '|')
		{
		    ++xp->xp_pattern;
		    xp->xp_context = EXPAND_EXPRESSION;
		}
		else
		    xp->xp_context = EXPAND_COMMANDS;
	    }
	    else
		xp->xp_context = EXPAND_EXPRESSION;
	}
	else
	    
	    
	    xp->xp_context = EXPAND_EXPRESSION;
	arg = xp->xp_pattern;
	if (*arg != NUL)
	    while ((c = *++arg) != NUL && (c == ' ' || c == '\t'))
		 ;
    }

    
    if ((cmdidx == CMD_execute
		|| cmdidx == CMD_echo
		|| cmdidx == CMD_echon
		|| cmdidx == CMD_echomsg
		|| cmdidx == CMD_echowindow)
	    && xp->xp_context == EXPAND_EXPRESSION)
    {
	for (;;)
	{
	    char_u *n = skiptowhite(arg);

	    if (n == arg || IS_WHITE_OR_NUL(*skipwhite(n)))
		break;
	    arg = skipwhite(n);
	}
    }

    xp->xp_pattern = arg;
}


    int
pattern_match(char_u *pat, char_u *text, int ic)
{
    int		matches = FALSE;
    char_u	*save_cpo;
    regmatch_T	regmatch;

    
    save_cpo = p_cpo;
    p_cpo = empty_option;
    regmatch.regprog = vim_regcomp(pat, RE_MAGIC + RE_STRING);
    if (regmatch.regprog != NULL)
    {
	regmatch.rm_ic = ic;
	matches = vim_regexec_nl(&regmatch, text, (colnr_T)0);
	vim_regfree(regmatch.regprog);
    }
    p_cpo = save_cpo;
    return matches;
}


    static int
eval_func(
	char_u	    **arg,	
	evalarg_T   *evalarg,
	char_u	    *name,
	int	    name_len,
	typval_T    *rettv,
	int	    flags,
	typval_T    *basetv)	
{
    int		evaluate = flags & EVAL_EVALUATE;
    char_u	*s = name;
    int		len = name_len;
    partial_T	*partial;
    int		ret = OK;
    type_T	*type = NULL;
    int		found_var = FALSE;

    if (!evaluate)
	check_vars(s, len);

    
    
    s = deref_func_name(s, &len, &partial,
		 in_vim9script() ? &type : NULL, !evaluate, FALSE, &found_var);

    
    
    s = vim_strsave(s);
    if (s == NULL || (evaluate && *s == NUL))
	ret = FAIL;
    else
    {
	funcexe_T funcexe;

	
	CLEAR_FIELD(funcexe);
	funcexe.fe_firstline = curwin->w_cursor.lnum;
	funcexe.fe_lastline = curwin->w_cursor.lnum;
	funcexe.fe_evaluate = evaluate;
	funcexe.fe_partial = partial;
	if (partial != NULL)
	{
	    funcexe.fe_object = partial->pt_obj;
	    if (funcexe.fe_object != NULL)
		++funcexe.fe_object->obj_refcount;
	}
	funcexe.fe_basetv = basetv;
	funcexe.fe_check_type = type;
	funcexe.fe_found_var = found_var;
	ret = get_func_tv(s, len, rettv, arg, evalarg, &funcexe);
    }
    vim_free(s);

    
    
    
    if (rettv->v_type == VAR_UNKNOWN && !evaluate && **arg == '(')
    {
	rettv->vval.v_string = NULL;
	rettv->v_type = VAR_FUNC;
    }

    
    
    
    if (evaluate && aborting())
    {
	if (ret == OK)
	    clear_tv(rettv);
	ret = FAIL;
    }
    return ret;
}


    static char_u *
newline_skip_comments(char_u *arg)
{
    char_u *p = arg + 1;

    for (;;)
    {
	p = skipwhite(p);

	if (*p == NUL)
	    break;
	if (vim9_comment_start(p))
	{
	    char_u *nl = vim_strchr(p, NL);

	    if (nl == NULL)
		break;
	    p = nl;
	}
	if (*p != NL)
	    break;
	++p;  
    }
    return p;
}


    static char_u *
getline_peek_skip_comments(evalarg_T *evalarg)
{
    for (;;)
    {
	char_u *next = getline_peek(evalarg->eval_getline,
							 evalarg->eval_cookie);
	char_u *p;

	if (next == NULL)
	    break;
	p = skipwhite(next);
	if (*p != NUL && !vim9_comment_start(p))
	    return next;
	if (eval_next_line(NULL, evalarg) == NULL)
	    break;
    }
    return NULL;
}


    char_u *
eval_next_non_blank(char_u *arg, evalarg_T *evalarg, int *getnext)
{
    char_u *p = skipwhite(arg);

    *getnext = FALSE;
    if (in_vim9script()
	    && evalarg != NULL
	    && (evalarg->eval_cookie != NULL || evalarg->eval_cctx != NULL
								   || *p == NL)
	    && (*p == NUL || *p == NL
			     || (vim9_comment_start(p) && VIM_ISWHITE(p[-1]))))
    {
	char_u *next;

	if (*p == NL)
	    next = newline_skip_comments(p);
	else if (evalarg->eval_cookie != NULL)
	    next = getline_peek_skip_comments(evalarg);
	else
	    next = peek_next_line_from_context(evalarg->eval_cctx);

	if (next != NULL)
	{
	    *getnext = *p != NL;
	    return skipwhite(next);
	}
    }
    return p;
}


    char_u *
eval_next_line(char_u *arg, evalarg_T *evalarg)
{
    garray_T	*gap = &evalarg->eval_ga;
    char_u	*line;

    if (arg != NULL)
    {
	if (*arg == NL)
	    return newline_skip_comments(arg);
	
	
	if (*skipwhite(arg) == '#')
	    *arg = NUL;
    }

    if (evalarg->eval_cookie != NULL)
	line = evalarg->eval_getline(0, evalarg->eval_cookie, 0,
							   GETLINE_CONCAT_ALL);
    else
	line = next_line_from_context(evalarg->eval_cctx, TRUE);
    if (line == NULL)
	return NULL;

    ++evalarg->eval_break_count;
    if (gap->ga_itemsize > 0 && ga_grow(gap, 1) == OK)
    {
	char_u *p = skipwhite(line);

	
	
	if (*p == NUL || vim9_comment_start(p))
	{
	    vim_free(line);
	    line = vim_strsave((char_u *)"");
	}

	((char_u **)gap->ga_data)[gap->ga_len] = line;
	++gap->ga_len;
    }
    else if (evalarg->eval_cookie != NULL)
    {
	free_eval_tofree_later(evalarg);
	evalarg->eval_tofree = line;
    }

    
    
    
    
    
    if (arg != NULL)
	evalarg->eval_using_cmdline = FALSE;
    return skipwhite(line);
}


    char_u *
skipwhite_and_linebreak(char_u *arg, evalarg_T *evalarg)
{
    int	    getnext;
    char_u  *p = skipwhite_and_nl(arg);

    if (evalarg == NULL)
	return skipwhite(arg);
    eval_next_non_blank(p, evalarg, &getnext);
    if (getnext)
	return eval_next_line(arg, evalarg);
    return p;
}




    int
eval0(
    char_u	*arg,
    typval_T	*rettv,
    exarg_T	*eap,
    evalarg_T	*evalarg)
{
    return eval0_retarg(arg, rettv, eap, evalarg, NULL);
}


    int
may_call_simple_func(
    char_u	*arg,
    typval_T	*rettv)
{
    char_u  *parens = (char_u *)strstr((char *)arg, "()");
    int	    r = NOTDONE;

    
    if (parens != NULL && *skipwhite(parens + 2) == NUL)
    {
	char_u *p = STRNCMP(arg, "<SNR>", 5) == 0 ? skipdigits(arg + 5) : arg;

	if (to_name_end(p, TRUE) == parens)
	    r = call_simple_func(arg, (int)(parens - arg), rettv);
    }
    return r;
}


    int
eval0_simple_funccal(
    char_u	*arg,
    typval_T	*rettv,
    exarg_T	*eap,
    evalarg_T	*evalarg)
{
    int	    r = may_call_simple_func(arg, rettv);

    if (r == NOTDONE)
	r = eval0_retarg(arg, rettv, eap, evalarg, NULL);
    return r;
}


    int
eval0_retarg(
    char_u	*arg,
    typval_T	*rettv,
    exarg_T	*eap,
    evalarg_T	*evalarg,
    char_u	**retarg)
{
    int		ret;
    char_u	*p;
    char_u	*expr_end;
    int		did_emsg_before = did_emsg;
    int		called_emsg_before = called_emsg;
    int		check_for_end = retarg == NULL;
    int		end_error = FALSE;

    p = skipwhite(arg);
    ret = eval1(&p, rettv, evalarg);

    if (ret != FAIL)
    {
	expr_end = p;
	p = skipwhite(p);

	
	
	
	if (in_vim9script() && p > expr_end && retarg == NULL)
	    while (*p == '#')
	    {
		char_u *nl = vim_strchr(p, NL);

		if (nl == NULL)
		    break;
		p = skipwhite(nl + 1);
		if (eap != NULL && *p != NUL)
		    eap->nextcmd = p;
		check_for_end = FALSE;
	    }

	if (check_for_end)
	    end_error = !ends_excmd2(arg, p);
    }

    if (ret == FAIL || end_error)
    {
	if (ret != FAIL)
	    clear_tv(rettv);
	
	if (!aborting()
		&& did_emsg == did_emsg_before
		&& called_emsg == called_emsg_before
		&& (!in_vim9script() || !vim9_bad_comment(p)))
	{
	    if (end_error)
		semsg(_(e_trailing_characters_str), p);
	    else
		semsg(_(e_invalid_expression_str), arg);
	}

	if (eap != NULL && p != NULL)
	{
	    
	    
	    
	    char_u *nextcmd = check_nextcmd(p);
	    if (nextcmd != NULL && *nextcmd != '|')
		eap->nextcmd = nextcmd;
	}
	return FAIL;
    }

    if (retarg != NULL)
	*retarg = p;
    else if (check_for_end && eap != NULL)
	set_nextcmd(eap, p);

    return ret;
}


    int
eval1(char_u **arg, typval_T *rettv, evalarg_T *evalarg)
{
    char_u  *p;
    int	    getnext;

    CLEAR_POINTER(rettv);

    
    if (eval2(arg, rettv, evalarg) == FAIL)
	return FAIL;

    p = eval_next_non_blank(*arg, evalarg, &getnext);
    if (*p == '?')
    {
	int		op_falsy = p[1] == '?';
	int		result;
	typval_T	var2;
	evalarg_T	*evalarg_used = evalarg;
	evalarg_T	local_evalarg;
	int		orig_flags;
	int		evaluate;
	int		vim9script = in_vim9script();

	if (evalarg == NULL)
	{
	    init_evalarg(&local_evalarg);
	    evalarg_used = &local_evalarg;
	}
	orig_flags = evalarg_used->eval_flags;
	evaluate = evalarg_used->eval_flags & EVAL_EVALUATE;

	if (getnext)
	    *arg = eval_next_line(*arg, evalarg_used);
	else
	{
	    if (evaluate && vim9script && !VIM_ISWHITE(p[-1]))
	    {
		error_white_both(p, op_falsy ? 2 : 1);
		clear_tv(rettv);
		return FAIL;
	    }
	    *arg = p;
	}

	result = FALSE;
	if (evaluate)
	{
	    int		error = FALSE;

	    if (op_falsy)
		result = tv2bool(rettv);
	    else if (vim9script)
		result = tv_get_bool_chk(rettv, &error);
	    else if (tv_get_number_chk(rettv, &error) != 0)
		result = TRUE;
	    if (error || !op_falsy || !result)
		clear_tv(rettv);
	    if (error)
		return FAIL;
	}

	
	if (op_falsy)
	    ++*arg;
	if (evaluate && vim9script && !IS_WHITE_OR_NUL((*arg)[1]))
	{
	    error_white_both(*arg - (op_falsy ? 1 : 0), op_falsy ? 2 : 1);
	    clear_tv(rettv);
	    return FAIL;
	}
	*arg = skipwhite_and_linebreak(*arg + 1, evalarg_used);
	evalarg_used->eval_flags = (op_falsy ? !result : result)
				  ? orig_flags : (orig_flags & ~EVAL_EVALUATE);
	if (eval1(arg, &var2, evalarg_used) == FAIL)
	{
	    evalarg_used->eval_flags = orig_flags;
	    return FAIL;
	}
	if (!op_falsy || !result)
	    *rettv = var2;

	if (!op_falsy)
	{
	    
	    p = eval_next_non_blank(*arg, evalarg_used, &getnext);
	    if (*p != ':')
	    {
		emsg(_(e_missing_colon_after_questionmark));
		if (evaluate && result)
		    clear_tv(rettv);
		evalarg_used->eval_flags = orig_flags;
		return FAIL;
	    }
	    if (getnext)
		*arg = eval_next_line(*arg, evalarg_used);
	    else
	    {
		if (evaluate && vim9script && !VIM_ISWHITE(p[-1]))
		{
		    error_white_both(p, 1);
		    clear_tv(rettv);
		    evalarg_used->eval_flags = orig_flags;
		    return FAIL;
		}
		*arg = p;
	    }

	    
	    if (evaluate && vim9script && !IS_WHITE_OR_NUL((*arg)[1]))
	    {
		error_white_both(*arg, 1);
		clear_tv(rettv);
		evalarg_used->eval_flags = orig_flags;
		return FAIL;
	    }
	    *arg = skipwhite_and_linebreak(*arg + 1, evalarg_used);
	    evalarg_used->eval_flags = !result ? orig_flags
					       : (orig_flags & ~EVAL_EVALUATE);
	    if (eval1(arg, &var2, evalarg_used) == FAIL)
	    {
		if (evaluate && result)
		    clear_tv(rettv);
		evalarg_used->eval_flags = orig_flags;
		return FAIL;
	    }
	    if (evaluate && !result)
		*rettv = var2;
	}

	if (evalarg == NULL)
	    clear_evalarg(&local_evalarg, NULL);
	else
	    evalarg->eval_flags = orig_flags;
    }

    return OK;
}


    static int
eval2(char_u **arg, typval_T *rettv, evalarg_T *evalarg)
{
    char_u	*p;
    int		getnext;

    
    if (eval3(arg, rettv, evalarg) == FAIL)
	return FAIL;

    
    p = eval_next_non_blank(*arg, evalarg, &getnext);
    if (p[0] == '|' && p[1] == '|')
    {
	evalarg_T   *evalarg_used = evalarg;
	evalarg_T   local_evalarg;
	int	    evaluate;
	int	    orig_flags;
	int	    result = FALSE;
	typval_T    var2;
	int	    error = FALSE;
	int	    vim9script = in_vim9script();

	if (evalarg == NULL)
	{
	    init_evalarg(&local_evalarg);
	    evalarg_used = &local_evalarg;
	}
	orig_flags = evalarg_used->eval_flags;
	evaluate = orig_flags & EVAL_EVALUATE;
	if (evaluate)
	{
	    if (vim9script)
		result = tv_get_bool_chk(rettv, &error);
	    else if (tv_get_number_chk(rettv, &error) != 0)
		result = TRUE;
	    clear_tv(rettv);
	    if (error)
		return FAIL;
	}

	
	while (p[0] == '|' && p[1] == '|')
	{
	    if (getnext)
		*arg = eval_next_line(*arg, evalarg_used);
	    else
	    {
		if (evaluate && vim9script && !VIM_ISWHITE(p[-1]))
		{
		    error_white_both(p, 2);
		    clear_tv(rettv);
		    return FAIL;
		}
		*arg = p;
	    }

	    
	    if (evaluate && vim9script && !IS_WHITE_OR_NUL((*arg)[2]))
	    {
		error_white_both(*arg, 2);
		clear_tv(rettv);
		return FAIL;
	    }
	    *arg = skipwhite_and_linebreak(*arg + 2, evalarg_used);
	    evalarg_used->eval_flags = !result ? orig_flags
					       : (orig_flags & ~EVAL_EVALUATE);
	    if (eval3(arg, &var2, evalarg_used) == FAIL)
		return FAIL;

	    
	    if (evaluate && !result)
	    {
		if (vim9script)
		    result = tv_get_bool_chk(&var2, &error);
		else if (tv_get_number_chk(&var2, &error) != 0)
		    result = TRUE;
		clear_tv(&var2);
		if (error)
		    return FAIL;
	    }
	    if (evaluate)
	    {
		if (vim9script)
		{
		    rettv->v_type = VAR_BOOL;
		    rettv->vval.v_number = result ? VVAL_TRUE : VVAL_FALSE;
		}
		else
		{
		    rettv->v_type = VAR_NUMBER;
		    rettv->vval.v_number = result;
		}
	    }

	    p = eval_next_non_blank(*arg, evalarg_used, &getnext);
	}

	if (evalarg == NULL)
	    clear_evalarg(&local_evalarg, NULL);
	else
	    evalarg->eval_flags = orig_flags;
    }

    return OK;
}


    static int
eval3(char_u **arg, typval_T *rettv, evalarg_T *evalarg)
{
    char_u	*p;
    int		getnext;

    
    if (eval4(arg, rettv, evalarg) == FAIL)
	return FAIL;

    
    p = eval_next_non_blank(*arg, evalarg, &getnext);
    if (p[0] == '&' && p[1] == '&')
    {
	evalarg_T   *evalarg_used = evalarg;
	evalarg_T   local_evalarg;
	int	    orig_flags;
	int	    evaluate;
	int	    result = TRUE;
	typval_T    var2;
	int	    error = FALSE;
	int	    vim9script = in_vim9script();

	if (evalarg == NULL)
	{
	    init_evalarg(&local_evalarg);
	    evalarg_used = &local_evalarg;
	}
	orig_flags = evalarg_used->eval_flags;
	evaluate = orig_flags & EVAL_EVALUATE;
	if (evaluate)
	{
	    if (vim9script)
		result = tv_get_bool_chk(rettv, &error);
	    else if (tv_get_number_chk(rettv, &error) == 0)
		result = FALSE;
	    clear_tv(rettv);
	    if (error)
		return FAIL;
	}

	
	while (p[0] == '&' && p[1] == '&')
	{
	    if (getnext)
		*arg = eval_next_line(*arg, evalarg_used);
	    else
	    {
		if (evaluate && vim9script && !VIM_ISWHITE(p[-1]))
		{
		    error_white_both(p, 2);
		    clear_tv(rettv);
		    return FAIL;
		}
		*arg = p;
	    }

	    
	    if (evaluate && vim9script && !IS_WHITE_OR_NUL((*arg)[2]))
	    {
		error_white_both(*arg, 2);
		clear_tv(rettv);
		return FAIL;
	    }
	    *arg = skipwhite_and_linebreak(*arg + 2, evalarg_used);
	    evalarg_used->eval_flags = result ? orig_flags
					      : (orig_flags & ~EVAL_EVALUATE);
	    CLEAR_FIELD(var2);
	    if (eval4(arg, &var2, evalarg_used) == FAIL)
		return FAIL;

	    
	    if (evaluate && result)
	    {
		if (vim9script)
		    result = tv_get_bool_chk(&var2, &error);
		else if (tv_get_number_chk(&var2, &error) == 0)
		    result = FALSE;
		clear_tv(&var2);
		if (error)
		    return FAIL;
	    }
	    if (evaluate)
	    {
		if (vim9script)
		{
		    rettv->v_type = VAR_BOOL;
		    rettv->vval.v_number = result ? VVAL_TRUE : VVAL_FALSE;
		}
		else
		{
		    rettv->v_type = VAR_NUMBER;
		    rettv->vval.v_number = result;
		}
	    }

	    p = eval_next_non_blank(*arg, evalarg_used, &getnext);
	}

	if (evalarg == NULL)
	    clear_evalarg(&local_evalarg, NULL);
	else
	    evalarg->eval_flags = orig_flags;
    }

    return OK;
}


    static int
eval4(char_u **arg, typval_T *rettv, evalarg_T *evalarg)
{
    char_u	*p;
    int		getnext;
    exprtype_T	type = EXPR_UNKNOWN;
    int		len = 2;
    int		type_is = FALSE;

    
    if (eval5(arg, rettv, evalarg) == FAIL)
	return FAIL;

    p = eval_next_non_blank(*arg, evalarg, &getnext);

    type = get_compare_type(p, &len, &type_is);

    
    if (type != EXPR_UNKNOWN)
    {
	typval_T    var2;
	int	    ic;
	int	    vim9script = in_vim9script();
	int	    evaluate = evalarg == NULL
				   ? 0 : (evalarg->eval_flags & EVAL_EVALUATE);
	int	    comp_lnum = SOURCING_LNUM;

	if (getnext)
	{
	    *arg = eval_next_line(*arg, evalarg);
	    p = *arg;
	}
	else if (evaluate && vim9script && !VIM_ISWHITE(**arg))
	{
	    error_white_both(*arg, len);
	    clear_tv(rettv);
	    return FAIL;
	}

	if (vim9script && type_is && (p[len] == '?' || p[len] == '#'))
	{
	    semsg(_(e_invalid_expression_str), p);
	    clear_tv(rettv);
	    return FAIL;
	}

	
	if (p[len] == '?')
	{
	    ic = TRUE;
	    ++len;
	}
	
	else if (p[len] == '#')
	{
	    ic = FALSE;
	    ++len;
	}
	
	else
	    ic = vim9script ? FALSE : p_ic;

	
	if (evaluate && vim9script && !IS_WHITE_OR_NUL(p[len]))
	{
	    error_white_both(p, len);
	    clear_tv(rettv);
	    return FAIL;
	}
	*arg = skipwhite_and_linebreak(p + len, evalarg);
	if (eval5(arg, &var2, evalarg) == FAIL)
	{
	    clear_tv(rettv);
	    return FAIL;
	}
	if (evaluate)
	{
	    int ret;

	    
	    SOURCING_LNUM = comp_lnum;
	    if (vim9script && check_compare_types(type, rettv, &var2) == FAIL)
	    {
		ret = FAIL;
		clear_tv(rettv);
	    }
	    else
		ret = typval_compare(rettv, &var2, type, ic);
	    clear_tv(&var2);
	    return ret;
	}
    }

    return OK;
}


    void
eval_addblob(typval_T *tv1, typval_T *tv2)
{
    blob_T  *b1 = tv1->vval.v_blob;
    blob_T  *b2 = tv2->vval.v_blob;
    blob_T  *b = blob_alloc();
    int	    i;

    if (b == NULL)
	return;

    for (i = 0; i < blob_len(b1); i++)
	ga_append(&b->bv_ga, blob_get(b1, i));
    for (i = 0; i < blob_len(b2); i++)
	ga_append(&b->bv_ga, blob_get(b2, i));

    clear_tv(tv1);
    rettv_blob_set(tv1, b);
}


    int
eval_addlist(typval_T *tv1, typval_T *tv2)
{
    typval_T var3;

    
    if (list_concat(tv1->vval.v_list, tv2->vval.v_list, &var3) == FAIL)
    {
	clear_tv(tv1);
	clear_tv(tv2);
	return FAIL;
    }
    clear_tv(tv1);
    *tv1 = var3;
    return OK;
}


    static int
eval_shift_number(typval_T *tv1, typval_T *tv2, int shift_type)
{
    if (tv2->v_type != VAR_NUMBER || tv2->vval.v_number < 0)
    {
	
	if (tv2->v_type != VAR_NUMBER)
	    emsg(_(e_bitshift_ops_must_be_number));
	else
	    emsg(_(e_bitshift_ops_must_be_positive));
	clear_tv(tv1);
	clear_tv(tv2);
	return FAIL;
    }

    if (tv2->vval.v_number > MAX_LSHIFT_BITS)
	
	tv1->vval.v_number = 0;
    else if (shift_type == EXPR_LSHIFT)
	tv1->vval.v_number =
	    (uvarnumber_T)tv1->vval.v_number << tv2->vval.v_number;
    else
	tv1->vval.v_number =
	    (uvarnumber_T)tv1->vval.v_number >> tv2->vval.v_number;

    return OK;
}


    static int
eval5(char_u **arg, typval_T *rettv, evalarg_T *evalarg)
{
    
    if (eval6(arg, rettv, evalarg) == FAIL)
	return FAIL;

    
    for (;;)
    {
	char_u		*p;
	int		getnext;
	exprtype_T	exprtype;
	int		evaluate;
	typval_T	var2;
	int		vim9script;

	p = eval_next_non_blank(*arg, evalarg, &getnext);
	if (p[0] == '<' && p[1] == '<')
	    exprtype = EXPR_LSHIFT;
	else if (p[0] == '>' && p[1] == '>')
	    exprtype = EXPR_RSHIFT;
	else
	    return OK;

	
	evaluate = evalarg == NULL ? 0 : (evalarg->eval_flags & EVAL_EVALUATE);
	if (evaluate && rettv->v_type != VAR_NUMBER)
	{
	    
	    emsg(_(e_bitshift_ops_must_be_number));
	    clear_tv(rettv);
	    return FAIL;
	}

	vim9script = in_vim9script();
	if (getnext)
	{
	    *arg = eval_next_line(*arg, evalarg);
	    p = *arg;
	}
	else if (evaluate && vim9script && !VIM_ISWHITE(**arg))
	{
	    error_white_both(*arg, 2);
	    clear_tv(rettv);
	    return FAIL;
	}

	
	if (evaluate && vim9script && !IS_WHITE_OR_NUL(p[2]))
	{
	    error_white_both(p, 2);
	    clear_tv(rettv);
	    return FAIL;
	}
	*arg = skipwhite_and_linebreak(p + 2, evalarg);
	if (eval6(arg, &var2, evalarg) == FAIL)
	{
	    clear_tv(rettv);
	    return FAIL;
	}

	if (evaluate)
	{
	    if (eval_shift_number(rettv, &var2, exprtype) == FAIL)
		return FAIL;
	}

	clear_tv(&var2);
    }

    return OK;
}


    static int
eval_concat_str(typval_T *tv1, typval_T *tv2)
{
    char_u	buf1[NUMBUFLEN], buf2[NUMBUFLEN];
    char_u	*s1 = tv_get_string_buf(tv1, buf1);
    char_u	*s2 = NULL;
    char_u	*p;
    int		vim9script = in_vim9script();

    if (vim9script && (tv2->v_type == VAR_VOID
		|| tv2->v_type == VAR_CHANNEL
		|| tv2->v_type == VAR_JOB))
	semsg(_(e_using_invalid_value_as_string_str),
		vartype_name(tv2->v_type));
    else if (vim9script && tv2->v_type == VAR_FLOAT)
    {
	vim_snprintf((char *)buf2, NUMBUFLEN, "%g",
		tv2->vval.v_float);
	s2 = buf2;
    }
    else
	s2 = tv_get_string_buf_chk(tv2, buf2);
    if (s2 == NULL)		
    {
	clear_tv(tv1);
	clear_tv(tv2);
	return FAIL;
    }

    p = concat_str(s1, s2);
    clear_tv(tv1);
    tv1->v_type = VAR_STRING;
    tv1->vval.v_string = p;

    return OK;
}


    static int
eval_addsub_number(typval_T *tv1, typval_T *tv2, int op)
{
    int		error = FALSE;
    varnumber_T	n1, n2;
    float_T	f1 = 0, f2 = 0;

    if (tv1->v_type == VAR_FLOAT)
    {
	f1 = tv1->vval.v_float;
	n1 = 0;
    }
    else
    {
	n1 = tv_get_number_chk(tv1, &error);
	if (error)
	{
	    
	    
	    
	    
	    clear_tv(tv1);
	    clear_tv(tv2);
	    return FAIL;
	}
	if (tv2->v_type == VAR_FLOAT)
	    f1 = n1;
    }
    if (tv2->v_type == VAR_FLOAT)
    {
	f2 = tv2->vval.v_float;
	n2 = 0;
    }
    else
    {
	n2 = tv_get_number_chk(tv2, &error);
	if (error)
	{
	    clear_tv(tv1);
	    clear_tv(tv2);
	    return FAIL;
	}
	if (tv1->v_type == VAR_FLOAT)
	    f2 = n2;
    }
    clear_tv(tv1);

    
    if (tv1->v_type == VAR_FLOAT || tv2->v_type == VAR_FLOAT)
    {
	if (op == '+')
	    f1 = f1 + f2;
	else
	    f1 = f1 - f2;
	tv1->v_type = VAR_FLOAT;
	tv1->vval.v_float = f1;
    }
    else
    {
	if (op == '+')
	    n1 = n1 + n2;
	else
	    n1 = n1 - n2;
	tv1->v_type = VAR_NUMBER;
	tv1->vval.v_number = n1;
    }

    return OK;
}


    static int
eval6(char_u **arg, typval_T *rettv, evalarg_T *evalarg)
{
    
    if (eval7(arg, rettv, evalarg, FALSE) == FAIL)
	return FAIL;

    
    for (;;)
    {
	int	    evaluate;
	int	    getnext;
	char_u	    *p;
	int	    op;
	int	    oplen;
	int	    concat;
	typval_T    var2;
	int	    vim9script = in_vim9script();

	
	
	
	p = eval_next_non_blank(*arg, evalarg, &getnext);
	op = *p;
	concat = op == '.' && (*(p + 1) == '.' || in_old_script(2));
	if ((op != '+' && op != '-' && !concat) || p[1] == '='
					       || (p[1] == '.' && p[2] == '='))
	    break;
	if (getnext && (op == '+' || op == '-') && p[0] == p[1])
	    break;

	evaluate = evalarg == NULL ? 0 : (evalarg->eval_flags & EVAL_EVALUATE);
	oplen = (concat && p[1] == '.') ? 2 : 1;
	if (getnext)
	    *arg = eval_next_line(*arg, evalarg);
	else
	{
	    if (evaluate && vim9script && !VIM_ISWHITE(**arg))
	    {
		error_white_both(*arg, oplen);
		clear_tv(rettv);
		return FAIL;
	    }
	    *arg = p;
	}
	if ((op != '+' || (rettv->v_type != VAR_LIST
						 && rettv->v_type != VAR_BLOB))
		&& (op == '.' || rettv->v_type != VAR_FLOAT)
		&& evaluate)
	{
	    int		error = FALSE;

	    
	    
	    
	    
	    
	    
	    
	    if (op != '.')
		tv_get_number_chk(rettv, &error);
	    if ((op == '.' && tv_get_string_chk(rettv) == NULL) || error)
	    {
		clear_tv(rettv);
		return FAIL;
	    }
	}

	
	if (evaluate && vim9script && !IS_WHITE_OR_NUL((*arg)[oplen]))
	{
	    error_white_both(*arg, oplen);
	    clear_tv(rettv);
	    return FAIL;
	}
	*arg = skipwhite_and_linebreak(*arg + oplen, evalarg);
	if (eval7(arg, &var2, evalarg, !vim9script && op == '.') == FAIL)
	{
	    clear_tv(rettv);
	    return FAIL;
	}

	if (evaluate)
	{
	    
	    if (op == '.')
	    {
		if (eval_concat_str(rettv, &var2) == FAIL)
		    return FAIL;
	    }
	    else if (op == '+' && rettv->v_type == VAR_BLOB
						   && var2.v_type == VAR_BLOB)
		eval_addblob(rettv, &var2);
	    else if (op == '+' && rettv->v_type == VAR_LIST
						   && var2.v_type == VAR_LIST)
	    {
		if (eval_addlist(rettv, &var2) == FAIL)
		    return FAIL;
	    }
	    else
	    {
		if (eval_addsub_number(rettv, &var2, op) == FAIL)
		    return FAIL;
	    }
	    clear_tv(&var2);
	}
    }
    return OK;
}


    static int
eval_multdiv_number(typval_T *tv1, typval_T *tv2, int op)
{
    varnumber_T	n1, n2;
    float_T	f1, f2;
    int		error;
    int		use_float = FALSE;

    f1 = 0;
    f2 = 0;
    error = FALSE;
    if (tv1->v_type == VAR_FLOAT)
    {
	f1 = tv1->vval.v_float;
	use_float = TRUE;
	n1 = 0;
    }
    else
	n1 = tv_get_number_chk(tv1, &error);
    clear_tv(tv1);
    if (error)
    {
	clear_tv(tv2);
	return FAIL;
    }

    if (tv2->v_type == VAR_FLOAT)
    {
	if (!use_float)
	{
	    f1 = n1;
	    use_float = TRUE;
	}
	f2 = tv2->vval.v_float;
	n2 = 0;
    }
    else
    {
	n2 = tv_get_number_chk(tv2, &error);
	clear_tv(tv2);
	if (error)
	    return FAIL;
	if (use_float)
	    f2 = n2;
    }

    
    if (use_float)
    {
	if (op == '*')
	    f1 = f1 * f2;
	else if (op == '/')
	{
#ifdef VMS
	    
	    if (f2 == 0.0)
	    {
		if (f1 == 0)
		    f1 = -1 * __F_FLT_MAX - 1L;   
		else if (f1 < 0)
		    f1 = -1 * __F_FLT_MAX;
		else
		    f1 = __F_FLT_MAX;
	    }
	    else
		f1 = f1 / f2;
#else
	    
	    
	    f1 = f1 / f2;
#endif
	}
	else
	{
	    emsg(_(e_cannot_use_percent_with_float));
	    return FAIL;
	}
	tv1->v_type = VAR_FLOAT;
	tv1->vval.v_float = f1;
    }
    else
    {
	int	    failed = FALSE;

	if (op == '*')
	    n1 = n1 * n2;
	else if (op == '/')
	    n1 = num_divide(n1, n2, &failed);
	else
	    n1 = num_modulus(n1, n2, &failed);
	if (failed)
	    return FAIL;

	tv1->v_type = VAR_NUMBER;
	tv1->vval.v_number = n1;
    }

    return OK;
}


    static int
eval7(
    char_u	**arg,
    typval_T	*rettv,
    evalarg_T	*evalarg,
    int		want_string)  
{
    
    if (eval8(arg, rettv, evalarg, want_string) == FAIL)
	return FAIL;

    
    for (;;)
    {
	int	    evaluate;
	int	    getnext;
	typval_T    var2;
	char_u	    *p;
	int	    op;

	
	p = eval_next_non_blank(*arg, evalarg, &getnext);
	op = *p;
	if ((op != '*' && op != '/' && op != '%') || p[1] == '=')
	    break;

	evaluate = evalarg == NULL ? 0 : (evalarg->eval_flags & EVAL_EVALUATE);
	if (getnext)
	    *arg = eval_next_line(*arg, evalarg);
	else
	{
	    if (evaluate && in_vim9script() && !VIM_ISWHITE(**arg))
	    {
		error_white_both(*arg, 1);
		clear_tv(rettv);
		return FAIL;
	    }
	    *arg = p;
	}

	
	if (evaluate && in_vim9script() && !IS_WHITE_OR_NUL((*arg)[1]))
	{
	    error_white_both(*arg, 1);
	    clear_tv(rettv);
	    return FAIL;
	}
	*arg = skipwhite_and_linebreak(*arg + 1, evalarg);
	if (eval8(arg, &var2, evalarg, FALSE) == FAIL)
	    return FAIL;

	if (evaluate)
	    
	    if (eval_multdiv_number(rettv, &var2, op) == FAIL)
		return FAIL;
    }

    return OK;
}


    static int
eval8(
    char_u	**arg,
    typval_T	*rettv,
    evalarg_T	*evalarg,
    int		want_string)	
{
    type_T	*want_type = NULL;
    garray_T	type_list;	    
    int		res;
    int		evaluate = evalarg == NULL ? 0
				       : (evalarg->eval_flags & EVAL_EVALUATE);

    
    if (in_vim9script() && **arg == '<' && eval_isnamec1((*arg)[1])
					     && STRNCMP(*arg, "<SNR>", 5) != 0)
    {
	++*arg;
	ga_init2(&type_list, sizeof(type_T *), 10);
	want_type = parse_type(arg, &type_list, TRUE);
	if (want_type == NULL && (evaluate || **arg != '>'))
	{
	    clear_type_list(&type_list);
	    return FAIL;
	}

	if (**arg != '>')
	{
	    if (*skipwhite(*arg) == '>')
		semsg(_(e_no_white_space_allowed_before_str_str), ">", *arg);
	    else
		emsg(_(e_missing_gt));
	    clear_type_list(&type_list);
	    return FAIL;
	}
	++*arg;
	*arg = skipwhite_and_linebreak(*arg, evalarg);
    }

    res = eval9(arg, rettv, evalarg, want_string);

    if (want_type != NULL && evaluate)
    {
	if (res == OK)
	{
	    type_T *actual = typval2type(rettv, get_copyID(), &type_list,
							       TVTT_DO_MEMBER);

	    if (!equal_type(want_type, actual, 0))
	    {
		if (want_type->tt_type == VAR_BOOL
					&& actual->tt_type != VAR_BOOL
					&& (actual->tt_flags & TTFLAG_BOOL_OK))
		{
		    int n = tv2bool(rettv);

		    
		    clear_tv(rettv);
		    rettv->v_type = VAR_BOOL;
		    rettv->vval.v_number = n ? VVAL_TRUE : VVAL_FALSE;
		}
		else
		{
		    where_T where = WHERE_INIT;

		    res = check_type(want_type, actual, TRUE, where);
		}
	    }
	}
	clear_type_list(&type_list);
    }

    return res;
}

    int
eval_leader(char_u **arg, int vim9)
{
    char_u	*s = *arg;
    char_u	*p = *arg;

    while (*p == '!' || *p == '-' || *p == '+')
    {
	char_u *n = skipwhite(p + 1);

	
	if (vim9 && (*p == '-' || *p == '+') && (*n == '-' || *n == '+'))
	{
	    semsg(_(e_invalid_expression_str), s);
	    return FAIL;
	}
	p = n;
    }
    *arg = p;
    return OK;
}


    int
handle_predefined(char_u *s, int len, typval_T *rettv)
{
    switch (len)
    {
	case 4: if (STRNCMP(s, "true", 4) == 0)
		{
		    rettv->v_type = VAR_BOOL;
		    rettv->vval.v_number = VVAL_TRUE;
		    return OK;
		}
		if (STRNCMP(s, "null", 4) == 0)
		{
		    rettv->v_type = VAR_SPECIAL;
		    rettv->vval.v_number = VVAL_NULL;
		    return OK;
		}
		break;
	case 5: if (STRNCMP(s, "false", 5) == 0)
		{
		    rettv->v_type = VAR_BOOL;
		    rettv->vval.v_number = VVAL_FALSE;
		    return OK;
		}
		break;
	case 8: if (STRNCMP(s, "null_job", 8) == 0)
		{
#ifdef FEAT_JOB_CHANNEL
		    rettv->v_type = VAR_JOB;
		    rettv->vval.v_job = NULL;
#else
		    rettv->v_type = VAR_SPECIAL;
		    rettv->vval.v_number = VVAL_NULL;
#endif
		    return OK;
		}
		break;
	case 9:
		if (STRNCMP(s, "null_", 5) != 0)
		    break;
		
		if (STRNCMP(s + 5, "list", 4) == 0)
		{
		    rettv->v_type = VAR_LIST;
		    rettv->vval.v_list = NULL;
		    return OK;
		}
		
		if (STRNCMP(s + 5, "dict", 4) == 0)
		{
		    rettv->v_type = VAR_DICT;
		    rettv->vval.v_dict = NULL;
		    return OK;
		}
		
		if (STRNCMP(s + 5, "blob", 4) == 0)
		{
		    rettv->v_type = VAR_BLOB;
		    rettv->vval.v_blob = NULL;
		    return OK;
		}
		break;
	case 10: if (STRNCMP(s, "null_class", 10) == 0)
		{
		    rettv->v_type = VAR_CLASS;
		    rettv->vval.v_class = NULL;
		    return OK;
		}
		 break;
	case 11: if (STRNCMP(s, "null_string", 11) == 0)
		{
		    rettv->v_type = VAR_STRING;
		    rettv->vval.v_string = NULL;
		    return OK;
		}
		if (STRNCMP(s, "null_object", 11) == 0)
		{
		    rettv->v_type = VAR_OBJECT;
		    rettv->vval.v_object = NULL;
		    return OK;
		}
		break;
	case 12:
		if (STRNCMP(s, "null_channel", 12) == 0)
		{
#ifdef FEAT_JOB_CHANNEL
		    rettv->v_type = VAR_CHANNEL;
		    rettv->vval.v_channel = NULL;
#else
		    rettv->v_type = VAR_SPECIAL;
		    rettv->vval.v_number = VVAL_NULL;
#endif
		    return OK;
		}
		if (STRNCMP(s, "null_partial", 12) == 0)
		{
		    rettv->v_type = VAR_PARTIAL;
		    rettv->vval.v_partial = NULL;
		    return OK;
		}
		break;
	case 13: if (STRNCMP(s, "null_function", 13) == 0)
		{
		    rettv->v_type = VAR_FUNC;
		    rettv->vval.v_string = NULL;
		    return OK;
		}
		break;
    }
    return FAIL;
}


    static void
eval9_reg_contents(
    char_u	**arg,
    typval_T	*rettv,
    int		evaluate)
{
    int		vim9script = in_vim9script();

    ++*arg;	
    if (evaluate)
    {
	if (vim9script && IS_WHITE_OR_NUL(**arg))
	    semsg(_(e_syntax_error_at_str), *arg);
	else if (vim9script && !valid_yank_reg(**arg, FALSE))
	    emsg_invreg(**arg);
	else
	{
	    rettv->v_type = VAR_STRING;
	    rettv->vval.v_string = get_reg_contents(**arg,
		    GREG_EXPR_SRC);
	}
    }
    if (**arg != NUL)
	++*arg;
}


    static int
eval9_nested_expr(
    char_u	**arg,
    typval_T	*rettv,
    evalarg_T	*evalarg,
    int		evaluate)
{
    int		ret = NOTDONE;
    int		vim9script = in_vim9script();

    if (vim9script)
    {
	ret = get_lambda_tv(arg, rettv, TRUE, evalarg);
	if (ret == OK && evaluate)
	{
	    ufunc_T *ufunc = rettv->vval.v_partial->pt_func;

	    
	    
	    
	    if (ufunc->uf_ret_type->tt_type == VAR_VOID)
		ufunc->uf_ret_type = &t_unknown;
	    if (compile_def_function(ufunc, FALSE,
				get_compile_type(ufunc), NULL) == FAIL)
	    {
		clear_tv(rettv);
		ret = FAIL;
	    }
	}
    }
    if (ret == NOTDONE)
    {
	*arg = skipwhite_and_linebreak(*arg + 1, evalarg);
	ret = eval1(arg, rettv, evalarg);	

	*arg = skipwhite_and_linebreak(*arg, evalarg);
	if (**arg == ')')
	    ++*arg;
	else if (ret == OK)
	{
	    emsg(_(e_missing_closing_paren));
	    clear_tv(rettv);
	    ret = FAIL;
	}
    }

    return ret;
}


    static int
eval9_var_func_name(
    char_u	**arg,
    typval_T	*rettv,
    evalarg_T	*evalarg,
    int		evaluate,
    char_u	**name_start)
{
    char_u	*s;
    int		len;
    char_u	*alias;
    int		ret = OK;
    int		vim9script = in_vim9script();

    s = *arg;
    len = get_name_len(arg, &alias, evaluate, TRUE);
    if (alias != NULL)
	s = alias;

    if (len <= 0)
	ret = FAIL;
    else
    {
	int	flags = evalarg == NULL ? 0 : evalarg->eval_flags;

	if (evaluate && vim9script && len == 1 && *s == '_')
	{
	    emsg(_(e_cannot_use_underscore_here));
	    ret = FAIL;
	}
	else if (evaluate && vim9script && len > 2
						&& s[0] == 's' && s[1] == ':')
	{
	    semsg(_(e_cannot_use_s_colon_in_vim9_script_str), s);
	    ret = FAIL;
	}
	else if ((vim9script ? **arg : *skipwhite(*arg)) == '(')
	{
	    
	    *arg = skipwhite(*arg);
	    ret = eval_func(arg, evalarg, s, len, rettv, flags, NULL);
	}
	else if (evaluate)
	{
	    
	    ret = FAIL;
	    if (vim9script)
		ret = handle_predefined(s, len, rettv);
	    if (ret == FAIL)
	    {
		*name_start = s;
		ret = eval_variable(s, len, 0, rettv, NULL,
					EVAL_VAR_VERBOSE + EVAL_VAR_IMPORT);
	    }
	}
	else
	{
	    
	    check_vars(s, len);
	    ret = OK;
	}
    }
    vim_free(alias);

    return ret;
}


    static int
eval9(
    char_u	**arg,
    typval_T	*rettv,
    evalarg_T	*evalarg,
    int		want_string)	
{
    int		evaluate = evalarg != NULL
				      && (evalarg->eval_flags & EVAL_EVALUATE);
    char_u	*name_start = NULL;
    char_u	*start_leader, *end_leader;
    int		ret = OK;
    static int	recurse = 0;
    int		vim9script = in_vim9script();

    
    rettv->v_type = VAR_UNKNOWN;

    
    start_leader = *arg;
    if (eval_leader(arg, vim9script) == FAIL)
	return FAIL;
    end_leader = *arg;

    if (**arg == '.' && (!SAFE_isdigit(*(*arg + 1)) || in_old_script(2)))
    {
	semsg(_(e_invalid_expression_str), *arg);
	++*arg;
	return FAIL;
    }

    
    
    if (recurse ==
#ifdef _MSC_VER
		    300
#else
		    1000
#endif
		    )
    {
	semsg(_(e_expression_too_recursive_str), *arg);
	return FAIL;
    }
    ++recurse;

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
    case '.':	ret = eval_number(arg, rettv, evaluate, want_string);

		
		
		if (ret == OK && evaluate && end_leader > start_leader
						  && rettv->v_type != VAR_BLOB)
		    ret = eval9_leader(rettv, TRUE, start_leader, &end_leader);
		break;

    
    case '"':	ret = eval_string(arg, rettv, evaluate, FALSE);
		break;

    
    case '\'':	ret = eval_lit_string(arg, rettv, evaluate, FALSE);
		break;

    
    case '[':	ret = eval_list(arg, rettv, evalarg, TRUE);
		break;

    
    case '#':	ret = eval_lit_dict(arg, rettv, evalarg);
		break;

    
    case '{':	if (vim9script)
		    ret = NOTDONE;
		else
		    ret = get_lambda_tv(arg, rettv, vim9script, evalarg);
		if (ret == NOTDONE)
		    ret = eval_dict(arg, rettv, evalarg, FALSE);
		break;

    
    case '&':	ret = eval_option(arg, rettv, evaluate);
		break;

    
    case '$':	if ((*arg)[1] == '"' || (*arg)[1] == '\'')
		    ret = eval_interp_string(arg, rettv, evaluate);
		else
		    ret = eval_env_var(arg, rettv, evaluate);
		break;

    
    case '@':	eval9_reg_contents(arg, rettv, evaluate);
		break;

    
    case '(':	ret = eval9_nested_expr(arg, rettv, evalarg, evaluate);
		break;

    default:	ret = NOTDONE;
		break;
    }

    if (ret == NOTDONE)
    {
	
	ret = eval9_var_func_name(arg, rettv, evalarg, evaluate, &name_start);
    }

    
    
    if (ret == OK)
	ret = handle_subscript(arg, name_start, rettv, evalarg, evaluate);

    
    if (ret == OK && evaluate && end_leader > start_leader)
	ret = eval9_leader(rettv, FALSE, start_leader, &end_leader);

    --recurse;
    return ret;
}


    static int
eval9_leader(
	typval_T    *rettv,
	int	    numeric_only,
	char_u	    *start_leader,
	char_u	    **end_leaderp)
{
    char_u	*end_leader = *end_leaderp;
    int		ret = OK;
    int		error = FALSE;
    varnumber_T val = 0;
    vartype_T	type = rettv->v_type;
    int		vim9script = in_vim9script();
    float_T	    f = 0.0;

    if (rettv->v_type == VAR_FLOAT)
	f = rettv->vval.v_float;
    else
    {
	while (VIM_ISWHITE(end_leader[-1]))
	    --end_leader;
	if (vim9script && end_leader[-1] == '!')
	    val = tv2bool(rettv);
	else
	    val = tv_get_number_chk(rettv, &error);
    }
    if (error)
    {
	clear_tv(rettv);
	ret = FAIL;
    }
    else
    {
	while (end_leader > start_leader)
	{
	    --end_leader;
	    if (*end_leader == '!')
	    {
		if (numeric_only)
		{
		    ++end_leader;
		    break;
		}
		if (rettv->v_type == VAR_FLOAT)
		{
		    if (vim9script)
		    {
			rettv->v_type = VAR_BOOL;
			val = f == 0.0 ? VVAL_TRUE : VVAL_FALSE;
		    }
		    else
			f = !f;
		}
		else
		{
		    val = !val;
		    type = VAR_BOOL;
		}
	    }
	    else if (*end_leader == '-')
	    {
		if (rettv->v_type == VAR_FLOAT)
		    f = -f;
		else
		{
		    val = -val;
		    type = VAR_NUMBER;
		}
	    }
	}
	if (rettv->v_type == VAR_FLOAT)
	{
	    clear_tv(rettv);
	    rettv->vval.v_float = f;
	}
	else
	{
	    clear_tv(rettv);
	    if (vim9script)
		rettv->v_type = type;
	    else
		rettv->v_type = VAR_NUMBER;
	    rettv->vval.v_number = val;
	}
    }
    *end_leaderp = end_leader;
    return ret;
}


    static int
call_func_rettv(
	char_u	    **arg,
	evalarg_T   *evalarg,
	typval_T    *rettv,
	int	    evaluate,
	dict_T	    *selfdict,
	typval_T    *basetv)
{
    partial_T	*pt = NULL;
    funcexe_T	funcexe;
    typval_T	functv;
    char_u	*s;
    int		ret;

    
    if (evaluate)
    {
	functv = *rettv;
	rettv->v_type = VAR_UNKNOWN;

	
	if (functv.v_type == VAR_PARTIAL)
	{
	    pt = functv.vval.v_partial;
	    s = partial_name(pt);
	}
	else
	{
	    s = functv.vval.v_string;
	    if (s == NULL || *s == NUL)
	    {
		emsg(_(e_empty_function_name));
		ret = FAIL;
		goto theend;
	    }
	}
    }
    else
	s = (char_u *)"";

    CLEAR_FIELD(funcexe);
    funcexe.fe_firstline = curwin->w_cursor.lnum;
    funcexe.fe_lastline = curwin->w_cursor.lnum;
    funcexe.fe_evaluate = evaluate;
    funcexe.fe_partial = pt;
    funcexe.fe_selfdict = selfdict;
    funcexe.fe_basetv = basetv;
    ret = get_func_tv(s, -1, rettv, arg, evalarg, &funcexe);

theend:
    
    
    if (evaluate)
	clear_tv(&functv);

    return ret;
}


    static int
eval_lambda(
    char_u	**arg,
    typval_T	*rettv,
    evalarg_T	*evalarg,
    int		verbose)	
{
    int		evaluate = evalarg != NULL
				      && (evalarg->eval_flags & EVAL_EVALUATE);
    typval_T	base = *rettv;
    int		ret;

    rettv->v_type = VAR_UNKNOWN;

    if (**arg == '{')
    {
	
	ret = get_lambda_tv(arg, rettv, FALSE, evalarg);
    }
    else
    {
	
	++*arg;
	ret = eval1(arg, rettv, evalarg);
	*arg = skipwhite_and_linebreak(*arg, evalarg);
	if (**arg != ')')
	{
	    emsg(_(e_missing_closing_paren));
	    return FAIL;
	}
	if (rettv->v_type != VAR_STRING && rettv->v_type != VAR_FUNC
					       && rettv->v_type != VAR_PARTIAL)
	{
	    emsg(_(e_string_or_function_required_for_arrow_parens_expr));
	    return FAIL;
	}
	++*arg;
    }
    if (ret != OK)
	return FAIL;

    if (**arg != '(')
    {
	if (verbose)
	{
	    if (*skipwhite(*arg) == '(')
		emsg(_(e_no_white_space_allowed_before_parenthesis));
	    else
		semsg(_(e_missing_parenthesis_str), "lambda");
	}
	clear_tv(rettv);
	ret = FAIL;
    }
    else
	ret = call_func_rettv(arg, evalarg, rettv, evaluate, NULL, &base);

    
    
    if (evaluate)
	clear_tv(&base);

    return ret;
}


    static int
eval_method(
    char_u	**arg,
    typval_T	*rettv,
    evalarg_T	*evalarg,
    int		verbose)	
{
    char_u	*name;
    int	len;
    char_u	*alias;
    char_u	*tofree = NULL;
    typval_T	base = *rettv;
    int		ret = OK;
    int		evaluate = evalarg != NULL
				      && (evalarg->eval_flags & EVAL_EVALUATE);

    rettv->v_type = VAR_UNKNOWN;

    name = *arg;
    len = get_name_len(arg, &alias, evaluate, evaluate);
    if (alias != NULL)
	name = alias;

    if (len <= 0)
    {
	if (verbose)
	    emsg(_(e_missing_name_after_method));
	ret = FAIL;
    }
    else
    {
	char_u *paren;

	
	
	
	*arg = skipwhite(*arg);

	if (**arg != '(' && alias == NULL
				    && (paren = vim_strchr(*arg, '(')) != NULL)
	{
	    *arg = name;

	    
	    
	    *paren = NUL;
	    char_u	*(*getline)(int, void *, int, getline_opt_T) = NULL;
	    if (evalarg != NULL)
	    {
		getline = evalarg->eval_getline;
		evalarg->eval_getline = NULL;
	    }

	    char_u *deref = deref_function_name(arg, &tofree, evalarg, verbose);
	    if (deref == NULL)
	    {
		*arg = name + len;
		ret = FAIL;
	    }
	    else
	    {
		name = deref;
		len = (int)STRLEN(name);
	    }

	    *paren = '(';
	    if (getline != NULL)
		evalarg->eval_getline = getline;
	}

	if (ret == OK)
	{
	    *arg = skipwhite(*arg);

	    if (**arg != '(')
	    {
		if (verbose)
		    semsg(_(e_missing_parenthesis_str), name);
		ret = FAIL;
	    }
	    else if (VIM_ISWHITE((*arg)[-1]))
	    {
		if (verbose)
		    emsg(_(e_no_white_space_allowed_before_parenthesis));
		ret = FAIL;
	    }
	    else
		ret = eval_func(arg, evalarg, name, len, rettv,
					  evaluate ? EVAL_EVALUATE : 0, &base);
	}
    }

    
    
    if (evaluate)
	clear_tv(&base);
    vim_free(tofree);

    if (alias != NULL)
	vim_free(alias);

    return ret;
}


    static int
eval_index(
    char_u	**arg,
    typval_T	*rettv,
    evalarg_T	*evalarg,
    int		verbose)	
{
    int		evaluate = evalarg != NULL
				      && (evalarg->eval_flags & EVAL_EVALUATE);
    int		empty1 = FALSE, empty2 = FALSE;
    typval_T	var1, var2;
    int		range = FALSE;
    char_u	*key = NULL;
    int		keylen = -1;
    int		vim9script = in_vim9script();

    if (check_can_index(rettv, evaluate, verbose) == FAIL)
	return FAIL;

    init_tv(&var1);
    init_tv(&var2);
    if (**arg == '.')
    {
	
	key = *arg + 1;
	for (keylen = 0; eval_isdictc(key[keylen]); ++keylen)
	    ;
	if (keylen == 0)
	    return FAIL;
	*arg = key + keylen;
    }
    else
    {
	
	*arg = skipwhite_and_linebreak(*arg + 1, evalarg);
	if (**arg == ':')
	    empty1 = TRUE;
	else if (eval1(arg, &var1, evalarg) == FAIL)	
	    return FAIL;
	else if (vim9script && **arg == ':')
	{
	    semsg(_(e_white_space_required_before_and_after_str_at_str),
								    ":", *arg);
	    clear_tv(&var1);
	    return FAIL;
	}
	else if (evaluate)
	{
	    int error = FALSE;

	    
	    if (vim9script && rettv->v_type == VAR_DICT
						   && var1.v_type == VAR_FLOAT)
	    {
		var1.vval.v_string = typval_tostring(&var1, TRUE);
		var1.v_type = VAR_STRING;
	    }

	    if (vim9script && rettv->v_type == VAR_LIST)
		tv_get_number_chk(&var1, &error);
	    else
		error = tv_get_string_chk(&var1) == NULL;
	    if (error)
	    {
		
		clear_tv(&var1);
		return FAIL;
	    }
	}

	
	*arg = skipwhite_and_linebreak(*arg, evalarg);
	if (**arg == ':')
	{
	    range = TRUE;
	    ++*arg;
	    if (vim9script && !IS_WHITE_OR_NUL(**arg) && **arg != ']')
	    {
		semsg(_(e_white_space_required_before_and_after_str_at_str),
								":", *arg - 1);
		if (!empty1)
		    clear_tv(&var1);
		return FAIL;
	    }
	    *arg = skipwhite_and_linebreak(*arg, evalarg);
	    if (**arg == ']')
		empty2 = TRUE;
	    else if (eval1(arg, &var2, evalarg) == FAIL)	
	    {
		if (!empty1)
		    clear_tv(&var1);
		return FAIL;
	    }
	    else if (evaluate && tv_get_string_chk(&var2) == NULL)
	    {
		
		if (!empty1)
		    clear_tv(&var1);
		clear_tv(&var2);
		return FAIL;
	    }
	}

	
	*arg = skipwhite_and_linebreak(*arg, evalarg);
	if (**arg != ']')
	{
	    if (verbose)
		emsg(_(e_missing_closing_square_brace));
	    clear_tv(&var1);
	    if (range)
		clear_tv(&var2);
	    return FAIL;
	}
	*arg = *arg + 1;	
    }

    if (evaluate)
    {
	int res = eval_index_inner(rettv, range,
		empty1 ? NULL : &var1, empty2 ? NULL : &var2, FALSE,
		key, keylen, verbose);

	if (!empty1)
	    clear_tv(&var1);
	if (range)
	    clear_tv(&var2);
	return res;
    }
    return OK;
}


    int
check_can_index(typval_T *rettv, int evaluate, int verbose)
{
    switch (rettv->v_type)
    {
	case VAR_FUNC:
	case VAR_PARTIAL:
	    if (verbose)
		emsg(_(e_cannot_index_a_funcref));
	    return FAIL;
	case VAR_FLOAT:
	    if (verbose)
		emsg(_(e_using_float_as_string));
	    return FAIL;
	case VAR_BOOL:
	case VAR_SPECIAL:
	case VAR_JOB:
	case VAR_CHANNEL:
	case VAR_INSTR:
	case VAR_OBJECT:
	    if (verbose)
		emsg(_(e_cannot_index_special_variable));
	    return FAIL;
	case VAR_CLASS:
	case VAR_TYPEALIAS:
	    if (verbose)
		check_typval_is_value(rettv);
	    return FAIL;
	case VAR_UNKNOWN:
	case VAR_ANY:
	case VAR_VOID:
	    if (evaluate)
	    {
		emsg(_(e_cannot_index_special_variable));
		return FAIL;
	    }
	    

	case VAR_STRING:
	case VAR_LIST:
	case VAR_DICT:
	case VAR_BLOB:
	    break;
	case VAR_NUMBER:
	    if (in_vim9script())
		emsg(_(e_cannot_index_number));
	    break;
    }
    return OK;
}


    int
eval_index_inner(
	typval_T    *rettv,
	int	    is_range,
	typval_T    *var1,
	typval_T    *var2,
	int	    exclusive,
	char_u	    *key,
	int	    keylen,
	int	    verbose)
{
    varnumber_T	    n1, n2 = 0;
    int	    len;

    n1 = 0;
    if (var1 != NULL && rettv->v_type != VAR_DICT)
	n1 = tv_get_number(var1);

    if (is_range)
    {
	if (rettv->v_type == VAR_DICT)
	{
	    if (verbose)
		emsg(_(e_cannot_slice_dictionary));
	    return FAIL;
	}
	if (var2 != NULL)
	    n2 = tv_get_number(var2);
	else
	    n2 = VARNUM_MAX;
    }

    switch (rettv->v_type)
    {
	case VAR_UNKNOWN:
	case VAR_ANY:
	case VAR_VOID:
	case VAR_FUNC:
	case VAR_PARTIAL:
	case VAR_FLOAT:
	case VAR_BOOL:
	case VAR_SPECIAL:
	case VAR_JOB:
	case VAR_CHANNEL:
	case VAR_INSTR:
	case VAR_CLASS:
	case VAR_OBJECT:
	case VAR_TYPEALIAS:
	    break; 

	case VAR_NUMBER:
	case VAR_STRING:
	    {
		char_u	*s = tv_get_string(rettv);

		len = (int)STRLEN(s);
		if (in_vim9script() || exclusive)
		{
		    if (is_range)
			s = string_slice(s, n1, n2, exclusive);
		    else
			s = char_from_string(s, n1);
		}
		else if (is_range)
		{
		    
		    
		    if (n1 < 0)
		    {
			n1 = len + n1;
			if (n1 < 0)
			    n1 = 0;
		    }
		    if (n2 < 0)
			n2 = len + n2;
		    else if (n2 >= len)
			n2 = len;
		    if (n1 >= len || n2 < 0 || n1 > n2)
			s = NULL;
		    else
			s = vim_strnsave(s + n1, n2 - n1 + 1);
		}
		else
		{
		    
		    
		    
		    if (n1 >= len || n1 < 0)
			s = NULL;
		    else
			s = vim_strnsave(s + n1, 1);
		}
		clear_tv(rettv);
		rettv->v_type = VAR_STRING;
		rettv->vval.v_string = s;
	    }
	    break;

	case VAR_BLOB:
	    blob_slice_or_index(rettv->vval.v_blob, is_range, n1, n2,
							     exclusive, rettv);
	    break;

	case VAR_LIST:
	    if (var1 == NULL)
		n1 = 0;
	    if (var2 == NULL)
		n2 = VARNUM_MAX;
	    if (list_slice_or_index(rettv->vval.v_list,
			  is_range, n1, n2, exclusive, rettv, verbose) == FAIL)
		return FAIL;
	    break;

	case VAR_DICT:
	    {
		dictitem_T	*item;
		typval_T	tmp;

		if (key == NULL)
		{
		    key = tv_get_string_chk(var1);
		    if (key == NULL)
			return FAIL;
		}

		item = dict_find(rettv->vval.v_dict, key, keylen);

		if (item == NULL)
		{
		    if (verbose)
		    {
			if (keylen > 0)
			    key[keylen] = NUL;
			semsg(_(e_key_not_present_in_dictionary_str), key);
		    }
		    return FAIL;
		}

		copy_tv(&item->di_tv, &tmp);
		clear_tv(rettv);
		*rettv = tmp;
	    }
	    break;
    }
    return OK;
}


    char_u *
partial_name(partial_T *pt)
{
    if (pt != NULL)
    {
	if (pt->pt_name != NULL)
	    return pt->pt_name;
	if (pt->pt_func != NULL)
	    return pt->pt_func->uf_name;
    }
    return (char_u *)"";
}

    static void
partial_free(partial_T *pt)
{
    int i;

    for (i = 0; i < pt->pt_argc; ++i)
	clear_tv(&pt->pt_argv[i]);
    vim_free(pt->pt_argv);
    dict_unref(pt->pt_dict);
    if (pt->pt_name != NULL)
    {
	func_unref(pt->pt_name);
	vim_free(pt->pt_name);
    }
    else
	func_ptr_unref(pt->pt_func);
    object_unref(pt->pt_obj);

    
    partial_unref(pt->pt_outer.out_up_partial);

    
    partial_unref(pt->pt_outer_partial);

    
    
    if (pt->pt_funcstack != NULL)
    {
	--pt->pt_funcstack->fs_refcount;
	funcstack_check_refcount(pt->pt_funcstack);
    }
    
    for (i = 0; i < MAX_LOOP_DEPTH; ++i)
	if (pt->pt_loopvars[i] != NULL)
	{
	    --pt->pt_loopvars[i]->lvs_refcount;
	    loopvars_check_refcount(pt->pt_loopvars[i]);
	}

    vim_free(pt);
}


    void
partial_unref(partial_T *pt)
{
    if (pt == NULL)
	return;

    int	done = FALSE;

    if (--pt->pt_refcount <= 0)
	partial_free(pt);

    
    
    else if (pt->pt_refcount == 1)
    {
	
	
	if (pt->pt_funcstack != NULL)
	    done = funcstack_check_refcount(pt->pt_funcstack);

	if (!done)
	{
	    int	depth;

	    for (depth = 0; depth < MAX_LOOP_DEPTH; ++depth)
		if (pt->pt_loopvars[depth] != NULL
			&& loopvars_check_refcount(pt->pt_loopvars[depth]))
		    break;
	}
    }
}


    static char_u *
string_tv2string(
    typval_T	*tv,
    char_u	**tofree,
    int		echo_style,
    int		composite_val)
{
    char_u	*r = NULL;

    if (echo_style && !composite_val)
    {
	*tofree = NULL;
	r = tv->vval.v_string;
	if (r == NULL)
	    r = (char_u *)"";
    }
    else
    {
	*tofree = string_quote(tv->vval.v_string, FALSE);
	r = *tofree;
    }

    return r;
}


    static char_u *
func_tv2string(typval_T *tv, char_u **tofree, int echo_style)
{
    char_u	*r = NULL;
    char_u	buf[MAX_FUNC_NAME_LEN];

    if (echo_style)
    {
	*tofree = NULL;

	if (tv->vval.v_string == NULL)
	    r = (char_u *)"function()";
	else
	{
	    r = make_ufunc_name_readable(tv->vval.v_string, buf,
							MAX_FUNC_NAME_LEN);
	    if (r == buf)
		r = *tofree = vim_strsave(buf);
	}
    }
    else
    {
	char_u *s = NULL;

	if (tv->vval.v_string != NULL)
	    s = make_ufunc_name_readable(tv->vval.v_string, buf,
							MAX_FUNC_NAME_LEN);

	r = *tofree = string_quote(s, TRUE);
    }

    return r;
}


    static char_u *
method_tv2string(typval_T *tv, char_u **tofree, int echo_style)
{
    char_u	buf[MAX_FUNC_NAME_LEN];
    partial_T	*pt = tv->vval.v_partial;

    size_t len = vim_snprintf((char *)buf, sizeof(buf), "<SNR>%d_%s.%s",
			   pt->pt_func->uf_script_ctx.sc_sid,
			   pt->pt_func->uf_class->class_name,
			   pt->pt_func->uf_name);
    if (len >= sizeof(buf))
    {
	if (echo_style)
	{
	    *tofree = NULL;
	    return (char_u *)"function()";
	}
	else
	    return *tofree = string_quote((char_u*)"", TRUE);
    }

    return *tofree = echo_style ? vim_strsave(buf) : string_quote(buf, TRUE);
}


    static char_u *
partial_tv2string(
    typval_T	*tv,
    char_u	**tofree,
    char_u	*numbuf,
    int		copyID)
{
    char_u	*r = NULL;
    partial_T	*pt;
    char_u	*fname;
    garray_T	ga;
    int		i;
    char_u	*tf;

    pt = tv->vval.v_partial;
    fname = string_quote(pt == NULL ? NULL : partial_name(pt), FALSE);

    ga_init2(&ga, 1, 100);
    ga_concat(&ga, (char_u *)"function(");
    if (fname != NULL)
    {
	
	if (pt != NULL && pt->pt_name == NULL && fname[0] == '\''
						&& vim_isupper(fname[1]))
	{
	    ga_concat(&ga, (char_u *)"'g:");
	    ga_concat(&ga, fname + 1);
	}
	else
	    ga_concat(&ga, fname);
	vim_free(fname);
    }
    if (pt != NULL && pt->pt_argc > 0)
    {
	ga_concat(&ga, (char_u *)", [");
	for (i = 0; i < pt->pt_argc; ++i)
	{
	    if (i > 0)
		ga_concat(&ga, (char_u *)", ");
	    ga_concat(&ga, tv2string(&pt->pt_argv[i], &tf, numbuf, copyID));
	    vim_free(tf);
	}
	ga_concat(&ga, (char_u *)"]");
    }
    if (pt != NULL && pt->pt_dict != NULL)
    {
	typval_T dtv;

	ga_concat(&ga, (char_u *)", ");
	dtv.v_type = VAR_DICT;
	dtv.vval.v_dict = pt->pt_dict;
	ga_concat(&ga, tv2string(&dtv, &tf, numbuf, copyID));
	vim_free(tf);
    }
    
    ga_concat_len(&ga, (char_u *)")", 2);

    *tofree = ga.ga_data;
    r = *tofree;

    return r;
}


    static char_u *
list_tv2string(
    typval_T	*tv,
    char_u	**tofree,
    int		copyID,
    int		restore_copyID)
{
    char_u	*r = NULL;

    if (tv->vval.v_list == NULL)
    {
	
	*tofree = NULL;
	r = (char_u *)"[]";
    }
    else if (copyID != 0 && tv->vval.v_list->lv_copyID == copyID
	    && tv->vval.v_list->lv_len > 0)
    {
	*tofree = NULL;
	r = (char_u *)"[...]";
    }
    else
    {
	int old_copyID;
	if (restore_copyID)
	    old_copyID = tv->vval.v_list->lv_copyID;

	tv->vval.v_list->lv_copyID = copyID;
	*tofree = list2string(tv, copyID, restore_copyID);
	if (restore_copyID)
	    tv->vval.v_list->lv_copyID = old_copyID;
	r = *tofree;
    }

    return r;
}


    static char_u *
dict_tv2string(
    typval_T	*tv,
    char_u	**tofree,
    int		copyID,
    int		restore_copyID)
{
    char_u	*r = NULL;

    if (tv->vval.v_dict == NULL)
    {
	
	*tofree = NULL;
	r = (char_u *)"{}";
    }
    else if (copyID != 0 && tv->vval.v_dict->dv_copyID == copyID
	    && tv->vval.v_dict->dv_hashtab.ht_used != 0)
    {
	*tofree = NULL;
	r = (char_u *)"{...}";
    }
    else
    {
	int old_copyID;
	if (restore_copyID)
	    old_copyID = tv->vval.v_dict->dv_copyID;

	tv->vval.v_dict->dv_copyID = copyID;
	*tofree = dict2string(tv, copyID, restore_copyID);
	if (restore_copyID)
	    tv->vval.v_dict->dv_copyID = old_copyID;
	r = *tofree;
    }

    return r;
}


    static char_u *
jobchan_tv2string(
    typval_T	*tv UNUSED,
    char_u	**tofree UNUSED,
    char_u	*numbuf UNUSED,
    int		composite_val UNUSED)
{
    char_u	*r = NULL;

#ifdef FEAT_JOB_CHANNEL
    *tofree = NULL;

    if (tv->v_type == VAR_JOB)
	r = job_to_string_buf(tv, numbuf);
    else
	r = channel_to_string_buf(tv, numbuf);

    if (composite_val)
    {
	*tofree = string_quote(r, FALSE);
	r = *tofree;
    }
#endif

    return r;
}


    static char_u *
class_tv2string(typval_T *tv, char_u **tofree)
{
    char_u	*r = NULL;
    class_T	*cl = tv->vval.v_class;
    char	*s = "class";

    if (cl != NULL && IS_INTERFACE(cl))
	s = "interface";
    else if (cl != NULL && IS_ENUM(cl))
	s = "enum";
    size_t len = STRLEN(s) + 1 +
				(cl == NULL ? 9 : STRLEN(cl->class_name)) + 1;
    r = *tofree = alloc(len);
    vim_snprintf((char *)r, len, "%s %s", s,
			cl == NULL ? "[unknown]" : (char *)cl->class_name);

    return r;
}


    static char_u *
object_tv2string(
    typval_T	*tv,
    char_u	**tofree,
    int		copyID,
    int		restore_copyID,
    char_u	*numbuf,
    int		echo_style,
    int		composite_val)
{
    char_u	*r = NULL;

    object_T	*obj = tv->vval.v_object;
    if (obj == NULL || obj->obj_class == NULL)
    {
	*tofree = NULL;
	r = (char_u *)"object of [unknown]";
    }
    else if (copyID != 0 && obj->obj_copyID == copyID
	    && obj->obj_class->class_obj_member_count != 0)
    {
	size_t n = 25 + strlen((char *)obj->obj_class->class_name);
	r = alloc(n);
	if (r != NULL)
	    (void)vim_snprintf((char *)r, n, "object of %s {...}",
						obj->obj_class->class_name);
	*tofree = r;
    }
    else
    {
	int old_copyID;
	if (restore_copyID)
	    old_copyID = obj->obj_copyID;

	obj->obj_copyID = copyID;
	*tofree = object2string(obj, numbuf, copyID, echo_style,
				restore_copyID, composite_val);
	if (restore_copyID)
	    obj->obj_copyID = old_copyID;
	r = *tofree;
    }

    return r;
}


    char_u *
echo_string_core(
    typval_T	*tv,
    char_u	**tofree,
    char_u	*numbuf,
    int		copyID,
    int		echo_style,
    int		restore_copyID,
    int		composite_val)
{
    static int	recurse = 0;
    char_u	*r = NULL;

    if (recurse >= DICT_MAXNEST)
    {
	if (!did_echo_string_emsg)
	{
	    
	    
	    
	    did_echo_string_emsg = TRUE;
	    emsg(_(e_variable_nested_too_deep_for_displaying));
	}
	*tofree = NULL;
	return (char_u *)"{E724}";
    }
    ++recurse;

    switch (tv->v_type)
    {
	case VAR_STRING:
	    r = string_tv2string(tv, tofree, echo_style, composite_val);
	    break;

	case VAR_FUNC:
	    r = func_tv2string(tv, tofree, echo_style);
	    break;

	case VAR_PARTIAL:
	    if (tv->vval.v_partial == NULL
		    || tv->vval.v_partial->pt_obj == NULL)
		r = partial_tv2string(tv, tofree, numbuf, copyID);
	    else
		r = method_tv2string(tv, tofree, echo_style);
	    break;

	case VAR_BLOB:
	    r = blob2string(tv->vval.v_blob, tofree, numbuf);
	    break;

	case VAR_LIST:
	    r = list_tv2string(tv, tofree, copyID, restore_copyID);
	    break;

	case VAR_DICT:
	    r = dict_tv2string(tv, tofree, copyID, restore_copyID);
	    break;

	case VAR_NUMBER:
	case VAR_UNKNOWN:
	case VAR_ANY:
	case VAR_VOID:
	    *tofree = NULL;
	    r = tv_get_string_buf(tv, numbuf);
	    break;

	case VAR_JOB:
	case VAR_CHANNEL:
	    r = jobchan_tv2string(tv, tofree, numbuf, composite_val);
	    break;

	case VAR_INSTR:
	    *tofree = NULL;
	    r = (char_u *)"instructions";
	    break;

	case VAR_CLASS:
	    r = class_tv2string(tv, tofree);
	    break;

	case VAR_OBJECT:
	    r = object_tv2string(tv, tofree, copyID, restore_copyID,
					 numbuf, echo_style, composite_val);
	    break;

	case VAR_FLOAT:
	    *tofree = NULL;
	    vim_snprintf((char *)numbuf, NUMBUFLEN, "%g", tv->vval.v_float);
	    r = numbuf;
	    break;

	case VAR_BOOL:
	case VAR_SPECIAL:
	    *tofree = NULL;
	    r = (char_u *)get_var_special_name(tv->vval.v_number);
	    break;

	case VAR_TYPEALIAS:
	    *tofree = vim_strsave(tv->vval.v_typealias->ta_name);
	    r = *tofree;
	    if (r == NULL)
		r = (char_u *)"";
	    break;
    }

    if (--recurse == 0)
	did_echo_string_emsg = FALSE;
    return r;
}


    char_u *
echo_string(
    typval_T	*tv,
    char_u	**tofree,
    char_u	*numbuf,
    int		copyID)
{
    return echo_string_core(tv, tofree, numbuf, copyID, TRUE, FALSE, FALSE);
}


    int
buf_byteidx_to_charidx(buf_T *buf, int lnum, int byteidx)
{
    char_u	*str;
    char_u	*t;
    int		count;

    if (buf == NULL || buf->b_ml.ml_mfp == NULL)
	return -1;

    if (lnum > buf->b_ml.ml_line_count)
	lnum = buf->b_ml.ml_line_count;

    str = ml_get_buf(buf, lnum, FALSE);
    if (str == NULL)
	return -1;

    if (*str == NUL)
	return 0;

    
    t = str;
    for (count = 0; *t != NUL && t <= str + byteidx; count++)
	t += mb_ptr2len(t);

    
    
    
    if (*t == NUL && byteidx != 0 && t == str + byteidx)
	count++;

    return count - 1;
}


    int
buf_charidx_to_byteidx(buf_T *buf, int lnum, int charidx)
{
    char_u	*str;
    char_u	*t;

    if (buf == NULL || buf->b_ml.ml_mfp == NULL)
	return -1;

    if (lnum > buf->b_ml.ml_line_count)
	lnum = buf->b_ml.ml_line_count;

    str = ml_get_buf(buf, lnum, FALSE);
    if (str == NULL)
	return -1;

    
    t = str;
    while (*t != NUL && --charidx > 0)
	t += mb_ptr2len(t);

    return t - str;
}


    pos_T *
var2fpos(
    typval_T	*varp,
    int		dollar_lnum,	
    int		*fnum,		
    int		charcol)	
{
    char_u		*name;
    static pos_T	pos;
    pos_T		*pp;

    
    if (varp->v_type == VAR_LIST)
    {
	list_T		*l;
	int		len;
	int		error = FALSE;
	listitem_T	*li;

	l = varp->vval.v_list;
	if (l == NULL)
	    return NULL;

	
	pos.lnum = list_find_nr(l, 0L, &error);
	if (error || pos.lnum <= 0 || pos.lnum > curbuf->b_ml.ml_line_count)
	    return NULL;	
	if (charcol)
	    len = (int)mb_charlen(ml_get(pos.lnum));
	else
	    len = (int)ml_get_len(pos.lnum);

	
	
	li = list_find(l, 1L);
	if (li != NULL && li->li_tv.v_type == VAR_STRING
		&& li->li_tv.vval.v_string != NULL
		&& STRCMP(li->li_tv.vval.v_string, "$") == 0)
	{
	    pos.col = len + 1;
	}
	else
	{
	    pos.col = list_find_nr(l, 1L, &error);
	    if (error)
		return NULL;
	}

	
	if (pos.col == 0 || (int)pos.col > len + 1)
	    return NULL;	
	--pos.col;

	
	pos.coladd = list_find_nr(l, 2L, &error);
	if (error)
	    pos.coladd = 0;

	return &pos;
    }

    if (in_vim9script() && check_for_string_arg(varp, 0) == FAIL)
	return NULL;

    name = tv_get_string_chk(varp);
    if (name == NULL)
	return NULL;

    pos.lnum = 0;
    if (name[0] == '.' && (!in_vim9script() || name[1] == NUL))
    {
	
	pos = curwin->w_cursor;
    }
    else if (name[0] == 'v' && name[1] == NUL)
    {
	
	if (VIsual_active)
	    pos = VIsual;
	else
	    pos = curwin->w_cursor;
    }
    else if (name[0] == '\'' && (!in_vim9script()
					|| (name[1] != NUL && name[2] == NUL)))
    {
	
	pp = getmark_buf_fnum(curbuf, name[1], FALSE, fnum);
	if (pp == NULL || pp == (pos_T *)-1 || pp->lnum <= 0)
	    return NULL;
	pos = *pp;
    }
    if (pos.lnum != 0)
    {
	if (charcol)
	    pos.col = buf_byteidx_to_charidx(curbuf, pos.lnum, pos.col);
	return &pos;
    }

    pos.coladd = 0;

    if (name[0] == 'w' && dollar_lnum)
    {
	
	
	check_cursor_moved(curwin);

	pos.col = 0;
	if (name[1] == '0')		
	{
	    update_topline();
	    
	    
	    pos.lnum = curwin->w_topline > 0 ? curwin->w_topline : 1;
	    return &pos;
	}
	else if (name[1] == '$')	
	{
	    validate_botline();
	    
	    pos.lnum = curwin->w_botline > 0 ? curwin->w_botline - 1 : 0;
	    return &pos;
	}
    }
    else if (name[0] == '$')		
    {
	if (dollar_lnum)
	{
	    pos.lnum = curbuf->b_ml.ml_line_count;
	    pos.col = 0;
	}
	else
	{
	    pos.lnum = curwin->w_cursor.lnum;
	    if (charcol)
		pos.col = (colnr_T)mb_charlen(ml_get_curline());
	    else
		pos.col = ml_get_curline_len();
	}
	return &pos;
    }
    if (in_vim9script())
	semsg(_(e_invalid_value_for_line_number_str), name);
    return NULL;
}


    int
list2fpos(
    typval_T	*arg,
    pos_T	*posp,
    int		*fnump,
    colnr_T	*curswantp,
    int		charcol)
{
    list_T	*l = arg->vval.v_list;
    int	i = 0;
    int	n;

    
    
    if (arg->v_type != VAR_LIST
	    || l == NULL
	    || l->lv_len < (fnump == NULL ? 2 : 3)
	    || l->lv_len > (fnump == NULL ? 4 : 5))
	return FAIL;

    if (fnump != NULL)
    {
	n = list_find_nr(l, i++, NULL);	
	if (n < 0)
	    return FAIL;
	if (n == 0)
	    n = curbuf->b_fnum;		
	*fnump = n;
    }

    n = list_find_nr(l, i++, NULL);	
    if (n < 0)
	return FAIL;
    posp->lnum = n;

    n = list_find_nr(l, i++, NULL);	
    if (n < 0)
	return FAIL;
    
    
    if (charcol)
    {
	buf_T	*buf;

	
	buf = buflist_findnr(fnump == NULL ? curbuf->b_fnum : *fnump);
	if (buf == NULL || buf->b_ml.ml_mfp == NULL)
	    return FAIL;

	n = buf_charidx_to_byteidx(buf,
		  posp->lnum == 0 ? curwin->w_cursor.lnum : posp->lnum, n) + 1;
    }
    posp->col = n;

    n = list_find_nr(l, i, NULL);	
    if (n < 0)
	posp->coladd = 0;
    else
	posp->coladd = n;

    if (curswantp != NULL)
	*curswantp = list_find_nr(l, i + 1, NULL);  

    return OK;
}


    int
get_env_len(char_u **arg)
{
    char_u	*p;
    int		len;

    for (p = *arg; vim_isIDc(*p); ++p)
	;
    if (p == *arg)	    
	return 0;

    len = (int)(p - *arg);
    *arg = p;
    return len;
}


    int
get_id_len(char_u **arg)
{
    char_u	*p;
    int		len;

    
    for (p = *arg; eval_isnamec(*p); ++p)
    {
	if (*p == ':')
	{
	    
	    
	    len = (int)(p - *arg);
	    if ((len == 1 && vim_strchr(NAMESPACE_CHAR, **arg) == NULL)
		    || len > 1)
		break;
	}
    }
    if (p == *arg)	    
	return 0;

    len = (int)(p - *arg);
    *arg = p;

    return len;
}


    int
get_name_len(
    char_u	**arg,
    char_u	**alias,
    int		evaluate,
    int		verbose)
{
    int		len;
    char_u	*p;
    char_u	*expr_start;
    char_u	*expr_end;

    *alias = NULL;  

    if ((*arg)[0] == K_SPECIAL && (*arg)[1] == KS_EXTRA
						  && (*arg)[2] == (int)KE_SNR)
    {
	
	*arg += 3;
	return get_id_len(arg) + 3;
    }
    len = eval_fname_script(*arg);
    if (len > 0)
    {
	
	*arg += len;
    }

    
    p = find_name_end(*arg, &expr_start, &expr_end,
					       len > 0 ? 0 : FNE_CHECK_START);
    if (expr_start != NULL)
    {
	char_u	*temp_string;

	if (!evaluate)
	{
	    len += (int)(p - *arg);
	    *arg = skipwhite(p);
	    return len;
	}

	
	temp_string = make_expanded_name(*arg - len, expr_start, expr_end, p);
	if (temp_string == NULL)
	    return -1;
	*alias = temp_string;
	*arg = skipwhite(p);
	return (int)STRLEN(temp_string);
    }

    len += get_id_len(arg);
    
    
    if (len == 0 && verbose && **arg != NUL)
	semsg(_(e_invalid_expression_str), *arg);

    return len;
}


    char_u *
find_name_end(
    char_u	*arg,
    char_u	**expr_start,
    char_u	**expr_end,
    int		flags)
{
    int		mb_nest = 0;
    int		br_nest = 0;
    char_u	*p;
    int		len;
    int		allow_curly = !in_vim9script();

    if (expr_start != NULL)
    {
	*expr_start = NULL;
	*expr_end = NULL;
    }

    
    if ((flags & FNE_CHECK_START) && !eval_isnamec1(*arg)
					      && (*arg != '{' || !allow_curly))
	return arg;

    for (p = arg; *p != NUL
		    && (eval_isnamec(*p)
			|| (*p == '{' && allow_curly)
			|| ((flags & FNE_INCL_BR) && (*p == '['
					 || (*p == '.' && eval_isdictc(p[1]))))
			|| mb_nest != 0
			|| br_nest != 0); MB_PTR_ADV(p))
    {
	if (*p == '\'')
	{
	    
	    for (p = p + 1; *p != NUL && *p != '\''; MB_PTR_ADV(p))
		;
	    if (*p == NUL)
		break;
	}
	else if (*p == '"')
	{
	    
	    for (p = p + 1; *p != NUL && *p != '"'; MB_PTR_ADV(p))
		if (*p == '\\' && p[1] != NUL)
		    ++p;
	    if (*p == NUL)
		break;
	}
	else if (br_nest == 0 && mb_nest == 0 && *p == ':')
	{
	    
	    
	    len = (int)(p - arg);
	    if ((len == 1 && vim_strchr(NAMESPACE_CHAR, *arg) == NULL)
		    || (len > 1 && p[-1] != '}'))
		break;
	}

	if (mb_nest == 0)
	{
	    if (*p == '[')
		++br_nest;
	    else if (*p == ']')
		--br_nest;
	}

	if (br_nest == 0 && allow_curly)
	{
	    if (*p == '{')
	    {
		mb_nest++;
		if (expr_start != NULL && *expr_start == NULL)
		    *expr_start = p;
	    }
	    else if (*p == '}')
	    {
		mb_nest--;
		if (expr_start != NULL && mb_nest == 0 && *expr_end == NULL)
		    *expr_end = p;
	    }
	}
    }

    return p;
}


    static char_u *
make_expanded_name(
    char_u	*in_start,
    char_u	*expr_start,
    char_u	*expr_end,
    char_u	*in_end)
{
    char_u	c1;
    char_u	*retval = NULL;
    char_u	*temp_result;

    if (expr_end == NULL || in_end == NULL)
	return NULL;
    *expr_start	= NUL;
    *expr_end = NUL;
    c1 = *in_end;
    *in_end = NUL;

    temp_result = eval_to_string(expr_start + 1, FALSE, FALSE);
    if (temp_result != NULL)
    {
	retval = alloc(STRLEN(temp_result) + (expr_start - in_start)
						   + (in_end - expr_end) + 1);
	if (retval != NULL)
	{
	    STRCPY(retval, in_start);
	    STRCAT(retval, temp_result);
	    STRCAT(retval, expr_end + 1);
	}
    }
    vim_free(temp_result);

    *in_end = c1;		
    *expr_start = '{';
    *expr_end = '}';

    if (retval != NULL)
    {
	temp_result = find_name_end(retval, &expr_start, &expr_end, 0);
	if (expr_start != NULL)
	{
	    
	    temp_result = make_expanded_name(retval, expr_start,
						       expr_end, temp_result);
	    vim_free(retval);
	    retval = temp_result;
	}
    }

    return retval;
}


    int
eval_isnamec(int c)
{
    return ASCII_ISALNUM(c) || c == '_' || c == ':' || c == AUTOLOAD_CHAR;
}


    int
eval_isnamec1(int c)
{
    return ASCII_ISALPHA(c) || c == '_';
}


    int
eval_isdictc(int c)
{
    return ASCII_ISALNUM(c) || c == '_';
}


    int
handle_subscript(
    char_u	**arg,
    char_u	*name_start,
    typval_T	*rettv,
    evalarg_T	*evalarg,
    int		verbose)	
{
    int		evaluate = evalarg != NULL
				      && (evalarg->eval_flags & EVAL_EVALUATE);
    int		ret = OK;
    dict_T	*selfdict = NULL;
    int		check_white = TRUE;
    int		getnext;
    char_u	*p;

    while (ret == OK)
    {
	
	
	p = eval_next_non_blank(*arg, evalarg, &getnext);
	if (getnext
	    && ((*p == '.'
		    && ((rettv->v_type == VAR_DICT && eval_isdictc(p[1]))
			|| rettv->v_type == VAR_CLASS
			|| rettv->v_type == VAR_OBJECT))
		|| (p[0] == '-' && p[1] == '>' && (p[2] == '{'
			|| ASCII_ISALPHA(in_vim9script() ? *skipwhite(p + 2)
								    : p[2])))))
	{
	    *arg = eval_next_line(*arg, evalarg);
	    p = *arg;
	    check_white = FALSE;
	}

	if (rettv->v_type == VAR_ANY)
	{
	    char_u	*exp_name;
	    int		cc;
	    int		idx;
	    ufunc_T	*ufunc;
	    type_T	*type;

	    
	    
	    if (**arg != '.')
	    {
		if (verbose)
		    semsg(_(e_expected_dot_after_name_str),
					name_start != NULL ? name_start: *arg);
		ret = FAIL;
		break;
	    }
	    ++*arg;
	    if (IS_WHITE_OR_NUL(**arg))
	    {
		if (verbose)
		    emsg(_(e_no_white_space_allowed_after_dot));
		ret = FAIL;
		break;
	    }

	    
	    exp_name = *arg;
	    while (eval_isnamec(**arg))
		++*arg;
	    cc = **arg;
	    **arg = NUL;

	    idx = find_exported(rettv->vval.v_number, exp_name, &ufunc, &type,
		       evalarg == NULL ? NULL : evalarg->eval_cctx,
		       evalarg == NULL ? NULL : evalarg->eval_cstack, verbose);
	    **arg = cc;

	    if (idx < 0 && ufunc == NULL)
	    {
		ret = FAIL;
		break;
	    }
	    if (idx >= 0)
	    {
		scriptitem_T    *si = SCRIPT_ITEM(rettv->vval.v_number);
		svar_T		*sv = ((svar_T *)si->sn_var_vals.ga_data) + idx;

		copy_tv(sv->sv_tv, rettv);
	    }
	    else
	    {
		rettv->v_type = VAR_FUNC;
		rettv->vval.v_string = vim_strsave(ufunc->uf_name);
	    }
	    continue;
	}

	if ((**arg == '(' && (!evaluate || rettv->v_type == VAR_FUNC
			    || rettv->v_type == VAR_PARTIAL))
		    && (!check_white || !VIM_ISWHITE(*(*arg - 1))))
	{
	    ret = call_func_rettv(arg, evalarg, rettv, evaluate,
							       selfdict, NULL);

	    
	    
	    
	    if (aborting())
	    {
		if (ret == OK)
		    clear_tv(rettv);
		ret = FAIL;
	    }
	    dict_unref(selfdict);
	    selfdict = NULL;
	}
	else if (p[0] == '-' && p[1] == '>')
	{
	    if (in_vim9script())
		*arg = skipwhite(p + 2);
	    else
		*arg = p + 2;
	    if (VIM_ISWHITE(**arg))
	    {
		emsg(_(e_no_white_space_allowed_before_parenthesis));
		ret = FAIL;
	    }
	    else if ((**arg == '{' && !in_vim9script()) || **arg == '(')
		
		ret = eval_lambda(arg, rettv, evalarg, verbose);
	    else
		
		ret = eval_method(arg, rettv, evalarg, verbose);
	}
	
	
	else if (**arg == '['
		|| (**arg == '.' && (rettv->v_type == VAR_DICT
			|| (!evaluate
			    && (*arg)[1] != '.'
			    && !in_old_script(2)))))
	{
	    dict_unref(selfdict);
	    if (rettv->v_type == VAR_DICT)
	    {
		selfdict = rettv->vval.v_dict;
		if (selfdict != NULL)
		    ++selfdict->dv_refcount;
	    }
	    else
		selfdict = NULL;
	    if (eval_index(arg, rettv, evalarg, verbose) == FAIL)
	    {
		clear_tv(rettv);
		ret = FAIL;
	    }
	}
	else if (**arg == '.' && (rettv->v_type == VAR_CLASS
					       || rettv->v_type == VAR_OBJECT))
	{
	    
	    
	    
	    
	    
	    if (class_object_index(arg, rettv, evalarg, verbose) == FAIL)
	    {
		clear_tv(rettv);
		ret = FAIL;
	    }
	}
	else
	    break;
    }

    
    
    
    if (selfdict != NULL
	    && (rettv->v_type == VAR_FUNC
		|| (rettv->v_type == VAR_PARTIAL
		    && (rettv->vval.v_partial->pt_auto
			|| rettv->vval.v_partial->pt_dict == NULL))))
	selfdict = make_partial(selfdict, rettv);

    dict_unref(selfdict);
    return ret;
}


    int
item_copy(
    typval_T	*from,
    typval_T	*to,
    int		deep,
    int		top,
    int		copyID)
{
    static int	recurse = 0;
    int		ret = OK;

    if (recurse >= DICT_MAXNEST)
    {
	emsg(_(e_variable_nested_too_deep_for_making_copy));
	return FAIL;
    }
    ++recurse;

    switch (from->v_type)
    {
	case VAR_NUMBER:
	case VAR_FLOAT:
	case VAR_STRING:
	case VAR_FUNC:
	case VAR_PARTIAL:
	case VAR_BOOL:
	case VAR_SPECIAL:
	case VAR_JOB:
	case VAR_CHANNEL:
	case VAR_INSTR:
	case VAR_CLASS:
	case VAR_OBJECT:
	case VAR_TYPEALIAS:
	    copy_tv(from, to);
	    break;
	case VAR_LIST:
	    to->v_type = VAR_LIST;
	    to->v_lock = 0;
	    if (from->vval.v_list == NULL)
		to->vval.v_list = NULL;
	    else if (copyID != 0 && from->vval.v_list->lv_copyID == copyID)
	    {
		
		to->vval.v_list = from->vval.v_list->lv_copylist;
		++to->vval.v_list->lv_refcount;
	    }
	    else
		to->vval.v_list = list_copy(from->vval.v_list,
							    deep, top, copyID);
	    if (to->vval.v_list == NULL)
		ret = FAIL;
	    break;
	case VAR_BLOB:
	    ret = blob_copy(from->vval.v_blob, to);
	    break;
	case VAR_DICT:
	    to->v_type = VAR_DICT;
	    to->v_lock = 0;
	    if (from->vval.v_dict == NULL)
		to->vval.v_dict = NULL;
	    else if (copyID != 0 && from->vval.v_dict->dv_copyID == copyID)
	    {
		
		to->vval.v_dict = from->vval.v_dict->dv_copydict;
		++to->vval.v_dict->dv_refcount;
	    }
	    else
		to->vval.v_dict = dict_copy(from->vval.v_dict,
							    deep, top, copyID);
	    if (to->vval.v_dict == NULL)
		ret = FAIL;
	    break;
	case VAR_UNKNOWN:
	case VAR_ANY:
	case VAR_VOID:
	    internal_error_no_abort("item_copy(UNKNOWN)");
	    ret = FAIL;
    }
    --recurse;
    return ret;
}

    void
echo_one(typval_T *rettv, int with_space, int *atstart, int *needclr)
{
    char_u	*tofree;
    char_u	numbuf[NUMBUFLEN];
    char_u	*p = echo_string(rettv, &tofree, numbuf, get_copyID());

    if (*atstart)
    {
	*atstart = FALSE;
	
	
	if (with_space)
	{
	    
	    
	    
	    msg_sb_eol();
	    msg_start();
	}
    }
    else if (with_space)
	msg_puts_attr(" ", echo_attr);

    if (p != NULL)
	for ( ; *p != NUL && !got_int; ++p)
	{
	    if (*p == '\n' || *p == '\r' || *p == TAB)
	    {
		if (*p != TAB && *needclr)
		{
		    
		    msg_clr_eos();
		    *needclr = FALSE;
		}
		msg_putchar_attr(*p, echo_attr);
	    }
	    else
	    {
		if (has_mbyte)
		{
		    int i = (*mb_ptr2len)(p);

		    (void)msg_outtrans_len_attr(p, i, echo_attr);
		    p += i - 1;
		}
		else
		    (void)msg_outtrans_len_attr(p, 1, echo_attr);
	    }
	}
    vim_free(tofree);
}


    void
ex_echo(exarg_T *eap)
{
    char_u	*arg = eap->arg;
    typval_T	rettv;
    char_u	*arg_start;
    int		needclr = TRUE;
    int		atstart = TRUE;
    int		did_emsg_before = did_emsg;
    int		called_emsg_before = called_emsg;
    evalarg_T	evalarg;

    fill_evalarg_from_eap(&evalarg, eap, eap->skip);

    if (eap->skip)
	++emsg_skip;
    while ((!ends_excmd2(eap->cmd, arg) || *arg == '"') && !got_int)
    {
	
	
	need_clr_eos = needclr;

	arg_start = arg;
	if (eval1(&arg, &rettv, &evalarg) == FAIL)
	{
	    
	    if (!aborting() && did_emsg == did_emsg_before
					  && called_emsg == called_emsg_before)
		semsg(_(e_invalid_expression_str), arg_start);
	    need_clr_eos = FALSE;
	    break;
	}
	need_clr_eos = FALSE;

	if (!eap->skip)
	{
	    if (rettv.v_type == VAR_VOID)
	    {
		semsg(_(e_expression_does_not_result_in_value_str), arg_start);
		break;
	    }
	    echo_one(&rettv, eap->cmdidx == CMD_echo, &atstart, &needclr);
	}

	clear_tv(&rettv);
	arg = skipwhite(arg);
    }
    set_nextcmd(eap, arg);
    clear_evalarg(&evalarg, eap);

    if (eap->skip)
	--emsg_skip;
    else
    {
	
	if (needclr)
	    msg_clr_eos();
	if (eap->cmdidx == CMD_echo)
	    msg_end();
    }
}


    void
ex_echohl(exarg_T *eap)
{
    echo_attr = syn_name2attr(eap->arg);
}


    int
get_echo_attr(void)
{
    return echo_attr;
}


    void
ex_execute(exarg_T *eap)
{
    char_u	*arg = eap->arg;
    typval_T	rettv;
    int		ret = OK;
    char_u	*p;
    garray_T	ga;
    int		len;
    int	start_lnum = SOURCING_LNUM;

    ga_init2(&ga, 1, 80);

    if (eap->skip)
	++emsg_skip;
    while (!ends_excmd2(eap->cmd, arg) || *arg == '"')
    {
	ret = eval1_emsg(&arg, &rettv, eap);
	if (ret == FAIL)
	    break;

	if (!eap->skip)
	{
	    char_u   buf[NUMBUFLEN];

	    if (eap->cmdidx == CMD_execute)
	    {
		if (rettv.v_type == VAR_CHANNEL || rettv.v_type == VAR_JOB)
		{
		    semsg(_(e_using_invalid_value_as_string_str),
						  vartype_name(rettv.v_type));
		    p = NULL;
		}
		else
		    p = tv_get_string_buf(&rettv, buf);
	    }
	    else
		p = tv_stringify(&rettv, buf);
	    if (p == NULL)
	    {
		clear_tv(&rettv);
		ret = FAIL;
		break;
	    }
	    len = (int)STRLEN(p);
	    if (ga_grow(&ga, len + 2) == FAIL)
	    {
		clear_tv(&rettv);
		ret = FAIL;
		break;
	    }
	    if (ga.ga_len)
		((char_u *)(ga.ga_data))[ga.ga_len++] = ' ';
	    STRCPY((char_u *)(ga.ga_data) + ga.ga_len, p);
	    ga.ga_len += len;
	}

	clear_tv(&rettv);
	arg = skipwhite(arg);
    }

    if (ret != FAIL && ga.ga_data != NULL)
    {
	
	SOURCING_LNUM = start_lnum;

	if (eap->cmdidx == CMD_echomsg
		|| eap->cmdidx == CMD_echowindow
		|| eap->cmdidx == CMD_echoerr)
	{
	    
	    
	    
	    msg_sb_eol();
	}

	if (eap->cmdidx == CMD_echomsg)
	{
	    msg_attr(ga.ga_data, echo_attr);
	    out_flush();
	}
	else if (eap->cmdidx == CMD_echowindow)
	{
#ifdef HAS_MESSAGE_WINDOW
	    start_echowindow(eap->addr_count > 0 ? eap->line2 : 0);
#endif
	    msg_attr(ga.ga_data, echo_attr);
#ifdef HAS_MESSAGE_WINDOW
	    end_echowindow();
#endif
	}
	else if (eap->cmdidx == CMD_echoconsole)
	{
	    ui_write(ga.ga_data, (int)STRLEN(ga.ga_data), TRUE);
	    ui_write((char_u *)"\r\n", 2, TRUE);
	}
	else if (eap->cmdidx == CMD_echoerr)
	{
	    int		save_did_emsg = did_emsg;

	    
	    emsg(ga.ga_data);
	    if (!force_abort)
		did_emsg = save_did_emsg;
	}
	else if (eap->cmdidx == CMD_execute)
	{
	    int save_sticky_cmdmod_flags = sticky_cmdmod_flags;

	    
	    sticky_cmdmod_flags = cmdmod.cmod_flags
						& (CMOD_LEGACY | CMOD_VIM9CMD);
	    do_cmdline((char_u *)ga.ga_data,
		       eap->ea_getline, eap->cookie, DOCMD_NOWAIT|DOCMD_VERBOSE);
	    sticky_cmdmod_flags = save_sticky_cmdmod_flags;
	}
    }

    ga_clear(&ga);

    if (eap->skip)
	--emsg_skip;
    set_nextcmd(eap, arg);
}


    char_u *
find_option_end(char_u **arg, int *scope)
{
    char_u	*p = *arg;

    ++p;
    if (*p == 'g' && p[1] == ':')
    {
	*scope = OPT_GLOBAL;
	p += 2;
    }
    else if (*p == 'l' && p[1] == ':')
    {
	*scope = OPT_LOCAL;
	p += 2;
    }
    else
	*scope = 0;

    if (!ASCII_ISALPHA(*p))
	return NULL;
    *arg = p;

    if (p[0] == 't' && p[1] == '_' && p[2] != NUL && p[3] != NUL)
	p += 4;	    
    else
	while (ASCII_ISALPHA(*p))
	    ++p;
    return p;
}


    void
last_set_msg(sctx_T script_ctx)
{
    char_u *p;

    if (script_ctx.sc_sid == 0)
	return;

    p = home_replace_save(NULL, get_scriptname(script_ctx.sc_sid));
    if (p == NULL)
	return;

    verbose_enter();
    msg_puts(_("\n\tLast set from "));
    msg_puts((char *)p);
    if (script_ctx.sc_lnum > 0)
    {
	msg_puts(_(line_msg));
	msg_outnum((int)script_ctx.sc_lnum);
    }
    verbose_leave();
    vim_free(p);
}

#endif 


    char_u *
do_string_sub(
    char_u	*str,
    char_u	*pat,
    char_u	*sub,
    typval_T	*expr,
    char_u	*flags)
{
    int		sublen;
    regmatch_T	regmatch;
    int		i;
    int		do_all;
    char_u	*tail;
    char_u	*end;
    garray_T	ga;
    char_u	*ret;
    char_u	*save_cpo;
    char_u	*zero_width = NULL;

    
    save_cpo = p_cpo;
    p_cpo = empty_option;

    ga_init2(&ga, 1, 200);

    do_all = (flags[0] == 'g');

    regmatch.rm_ic = p_ic;
    regmatch.regprog = vim_regcomp(pat, RE_MAGIC + RE_STRING);
    if (regmatch.regprog != NULL)
    {
	tail = str;
	end = str + STRLEN(str);
	while (vim_regexec_nl(&regmatch, str, (colnr_T)(tail - str)))
	{
	    
	    if (regmatch.startp[0] == regmatch.endp[0])
	    {
		if (zero_width == regmatch.startp[0])
		{
		    
		    i = mb_ptr2len(tail);
		    mch_memmove((char_u *)ga.ga_data + ga.ga_len, tail,
								   (size_t)i);
		    ga.ga_len += i;
		    tail += i;
		    continue;
		}
		zero_width = regmatch.startp[0];
	    }

	    
	    sublen = vim_regsub(&regmatch, sub, expr, tail, 0, REGSUB_MAGIC);
	    if (sublen <= 0)
	    {
		ga_clear(&ga);
		break;
	    }
	    if (ga_grow(&ga, (int)((end - tail) + sublen -
			    (regmatch.endp[0] - regmatch.startp[0]))) == FAIL)
	    {
		ga_clear(&ga);
		break;
	    }

	    
	    i = (int)(regmatch.startp[0] - tail);
	    mch_memmove((char_u *)ga.ga_data + ga.ga_len, tail, (size_t)i);
	    
	    (void)vim_regsub(&regmatch, sub, expr,
				  (char_u *)ga.ga_data + ga.ga_len + i, sublen,
				  REGSUB_COPY | REGSUB_MAGIC);
	    ga.ga_len += i + sublen - 1;
	    tail = regmatch.endp[0];
	    if (*tail == NUL)
		break;
	    if (!do_all)
		break;
	}

	if (ga.ga_data != NULL)
	    STRCPY((char *)ga.ga_data + ga.ga_len, tail);

	vim_regfree(regmatch.regprog);
    }

    ret = vim_strsave(ga.ga_data == NULL ? str : (char_u *)ga.ga_data);
    ga_clear(&ga);
    if (p_cpo == empty_option)
	p_cpo = save_cpo;
    else
    {
	
	
	
	if (*p_cpo == NUL)
	    set_option_value_give_err((char_u *)"cpo", 0L, save_cpo, 0);
	free_string_option(save_cpo);
    }

    return ret;
}
