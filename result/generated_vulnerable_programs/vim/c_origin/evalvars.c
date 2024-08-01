



#include "vim.h"

#if defined(FEAT_EVAL) || defined(PROTO)

static dictitem_T	globvars_var;		
static dict_T		globvardict;		
#define globvarht globvardict.dv_hashtab


static hashtab_T	compat_hashtab;




#define VV_COMPAT	1	
#define VV_RO		2	
#define VV_RO_SBX	4	

#define VV_NAME(s, t)	s, {{t, 0, {0}}, 0, {0}}

typedef struct vimvar vimvar_T;

static struct vimvar
{
    char	*vv_name;	
    dictitem16_T vv_di;		
    type_T	*vv_type;	
    char	vv_flags;	
} vimvars[VV_LEN] =
{
    
    
    {VV_NAME("count",		 VAR_NUMBER), NULL, VV_COMPAT+VV_RO},
    {VV_NAME("count1",		 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("prevcount",	 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("errmsg",		 VAR_STRING), NULL, VV_COMPAT},
    {VV_NAME("warningmsg",	 VAR_STRING), NULL, 0},
    {VV_NAME("statusmsg",	 VAR_STRING), NULL, 0},
    {VV_NAME("shell_error",	 VAR_NUMBER), NULL, VV_COMPAT+VV_RO},
    {VV_NAME("this_session",	 VAR_STRING), NULL, VV_COMPAT},
    {VV_NAME("version",		 VAR_NUMBER), NULL, VV_COMPAT+VV_RO},
    {VV_NAME("lnum",		 VAR_NUMBER), NULL, VV_RO_SBX},
    {VV_NAME("termresponse",	 VAR_STRING), NULL, VV_RO},
    {VV_NAME("fname",		 VAR_STRING), NULL, VV_RO},
    {VV_NAME("lang",		 VAR_STRING), NULL, VV_RO},
    {VV_NAME("lc_time",		 VAR_STRING), NULL, VV_RO},
    {VV_NAME("ctype",		 VAR_STRING), NULL, VV_RO},
    {VV_NAME("charconvert_from", VAR_STRING), NULL, VV_RO},
    {VV_NAME("charconvert_to",	 VAR_STRING), NULL, VV_RO},
    {VV_NAME("fname_in",	 VAR_STRING), NULL, VV_RO},
    {VV_NAME("fname_out",	 VAR_STRING), NULL, VV_RO},
    {VV_NAME("fname_new",	 VAR_STRING), NULL, VV_RO},
    {VV_NAME("fname_diff",	 VAR_STRING), NULL, VV_RO},
    {VV_NAME("cmdarg",		 VAR_STRING), NULL, VV_RO},
    {VV_NAME("foldstart",	 VAR_NUMBER), NULL, VV_RO_SBX},
    {VV_NAME("foldend",		 VAR_NUMBER), NULL, VV_RO_SBX},
    {VV_NAME("folddashes",	 VAR_STRING), NULL, VV_RO_SBX},
    {VV_NAME("foldlevel",	 VAR_NUMBER), NULL, VV_RO_SBX},
    {VV_NAME("progname",	 VAR_STRING), NULL, VV_RO},
    {VV_NAME("servername",	 VAR_STRING), NULL, VV_RO},
    {VV_NAME("dying",		 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("exception",	 VAR_STRING), NULL, VV_RO},
    {VV_NAME("throwpoint",	 VAR_STRING), NULL, VV_RO},
    {VV_NAME("register",	 VAR_STRING), NULL, VV_RO},
    {VV_NAME("cmdbang",		 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("insertmode",	 VAR_STRING), NULL, VV_RO},
    {VV_NAME("val",		 VAR_UNKNOWN), NULL, VV_RO},
    {VV_NAME("key",		 VAR_UNKNOWN), NULL, VV_RO},
    {VV_NAME("profiling",	 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("fcs_reason",	 VAR_STRING), NULL, VV_RO},
    {VV_NAME("fcs_choice",	 VAR_STRING), NULL, 0},
    {VV_NAME("beval_bufnr",	 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("beval_winnr",	 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("beval_winid",	 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("beval_lnum",	 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("beval_col",	 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("beval_text",	 VAR_STRING), NULL, VV_RO},
    {VV_NAME("scrollstart",	 VAR_STRING), NULL, 0},
    {VV_NAME("swapname",	 VAR_STRING), NULL, VV_RO},
    {VV_NAME("swapchoice",	 VAR_STRING), NULL, 0},
    {VV_NAME("swapcommand",	 VAR_STRING), NULL, VV_RO},
    {VV_NAME("char",		 VAR_STRING), NULL, 0},
    {VV_NAME("mouse_win",	 VAR_NUMBER), NULL, 0},
    {VV_NAME("mouse_winid",	 VAR_NUMBER), NULL, 0},
    {VV_NAME("mouse_lnum",	 VAR_NUMBER), NULL, 0},
    {VV_NAME("mouse_col",	 VAR_NUMBER), NULL, 0},
    {VV_NAME("operator",	 VAR_STRING), NULL, VV_RO},
    {VV_NAME("searchforward",	 VAR_NUMBER), NULL, 0},
    {VV_NAME("hlsearch",	 VAR_NUMBER), NULL, 0},
    {VV_NAME("oldfiles",	 VAR_LIST), &t_list_string, 0},
    {VV_NAME("windowid",	 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("progpath",	 VAR_STRING), NULL, VV_RO},
    {VV_NAME("completed_item",	 VAR_DICT), &t_dict_string, 0},
    {VV_NAME("option_new",	 VAR_STRING), NULL, VV_RO},
    {VV_NAME("option_old",	 VAR_STRING), NULL, VV_RO},
    {VV_NAME("option_oldlocal",	 VAR_STRING), NULL, VV_RO},
    {VV_NAME("option_oldglobal", VAR_STRING), NULL, VV_RO},
    {VV_NAME("option_command",	 VAR_STRING), NULL, VV_RO},
    {VV_NAME("option_type",	 VAR_STRING), NULL, VV_RO},
    {VV_NAME("errors",		 VAR_LIST), &t_list_string, 0},
    {VV_NAME("false",		 VAR_BOOL), NULL, VV_RO},
    {VV_NAME("true",		 VAR_BOOL), NULL, VV_RO},
    {VV_NAME("none",		 VAR_SPECIAL), NULL, VV_RO},
    {VV_NAME("null",		 VAR_SPECIAL), NULL, VV_RO},
    {VV_NAME("numbermax",	 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("numbermin",	 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("numbersize",	 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("vim_did_enter",	 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("testing",		 VAR_NUMBER), NULL, 0},
    {VV_NAME("t_number",	 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("t_string",	 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("t_func",		 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("t_list",		 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("t_dict",		 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("t_float",		 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("t_bool",		 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("t_none",		 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("t_job",		 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("t_channel",	 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("t_blob",		 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("t_class",		 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("t_object",	 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("termrfgresp",	 VAR_STRING), NULL, VV_RO},
    {VV_NAME("termrbgresp",	 VAR_STRING), NULL, VV_RO},
    {VV_NAME("termu7resp",	 VAR_STRING), NULL, VV_RO},
    {VV_NAME("termstyleresp",	 VAR_STRING), NULL, VV_RO},
    {VV_NAME("termblinkresp",	 VAR_STRING), NULL, VV_RO},
    {VV_NAME("event",		 VAR_DICT), NULL, VV_RO},
    {VV_NAME("versionlong",	 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("echospace",	 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("argv",		 VAR_LIST), &t_list_string, VV_RO},
    {VV_NAME("collate",		 VAR_STRING), NULL, VV_RO},
    {VV_NAME("exiting",		 VAR_SPECIAL), NULL, VV_RO},
    {VV_NAME("colornames",       VAR_DICT), &t_dict_string, VV_RO},
    {VV_NAME("sizeofint",	 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("sizeoflong",	 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("sizeofpointer",	 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("maxcol",		 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("python3_version",	 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("t_typealias",	 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("t_enum",		 VAR_NUMBER), NULL, VV_RO},
    {VV_NAME("t_enumvalue",	 VAR_NUMBER), NULL, VV_RO},
};


#define vv_tv_type	vv_di.di_tv.v_type
#define vv_nr		vv_di.di_tv.vval.v_number
#define vv_float	vv_di.di_tv.vval.v_float
#define vv_str		vv_di.di_tv.vval.v_string
#define vv_list		vv_di.di_tv.vval.v_list
#define vv_dict		vv_di.di_tv.vval.v_dict
#define vv_blob		vv_di.di_tv.vval.v_blob
#define vv_tv		vv_di.di_tv

static dictitem_T	vimvars_var;		
static dict_T		vimvardict;		
#define vimvarht  vimvardict.dv_hashtab


#include "version.h"

static void list_glob_vars(int *first);
static void list_buf_vars(int *first);
static void list_win_vars(int *first);
static void list_tab_vars(int *first);
static char_u *list_arg_vars(exarg_T *eap, char_u *arg, int *first);
static char_u *ex_let_one(char_u *arg, typval_T *tv, int copy, int flags, char_u *endchars, char_u *op, int var_idx);
static int do_unlet_var(lval_T *lp, char_u *name_end, exarg_T *eap, int deep, void *cookie);
static int do_lock_var(lval_T *lp, char_u *name_end, exarg_T *eap, int deep, void *cookie);
static void list_one_var(dictitem_T *v, char *prefix, int *first);
static void list_one_var_a(char *prefix, char_u *name, int type, char_u *string, int *first);


    void
evalvars_init(void)
{
    int		    i;
    struct vimvar   *p;

    init_var_dict(&globvardict, &globvars_var, VAR_DEF_SCOPE);
    init_var_dict(&vimvardict, &vimvars_var, VAR_SCOPE);
    vimvardict.dv_lock = VAR_FIXED;
    hash_init(&compat_hashtab);

    for (i = 0; i < VV_LEN; ++i)
    {
	p = &vimvars[i];
	if (STRLEN(p->vv_name) > DICTITEM16_KEY_LEN)
	{
	    iemsg("Name too int, increase size of dictitem16_T");
	    getout(1);
	}
	STRCPY(p->vv_di.di_key, p->vv_name);
	if (p->vv_flags & VV_RO)
	    p->vv_di.di_flags = DI_FLAGS_RO | DI_FLAGS_FIX;
	else if (p->vv_flags & VV_RO_SBX)
	    p->vv_di.di_flags = DI_FLAGS_RO_SBX | DI_FLAGS_FIX;
	else
	    p->vv_di.di_flags = DI_FLAGS_FIX;

	
	if (p->vv_tv_type != VAR_UNKNOWN)
	    hash_add(&vimvarht, p->vv_di.di_key, "initialization");
	if (p->vv_flags & VV_COMPAT)
	    
	    hash_add(&compat_hashtab, p->vv_di.di_key, "initialization");
    }
    set_vim_var_nr(VV_VERSION, VIM_VERSION_100);
    set_vim_var_nr(VV_VERSIONLONG, VIM_VERSION_100 * 10000 + highest_patch());

    set_vim_var_nr(VV_SEARCHFORWARD, 1L);
    set_vim_var_nr(VV_HLSEARCH, 1L);
    set_vim_var_nr(VV_EXITING, VVAL_NULL);
    set_vim_var_dict(VV_COMPLETED_ITEM, dict_alloc_lock(VAR_FIXED));
    set_vim_var_list(VV_ERRORS, list_alloc());
    set_vim_var_dict(VV_EVENT, dict_alloc_lock(VAR_FIXED));

    set_vim_var_nr(VV_FALSE, VVAL_FALSE);
    set_vim_var_nr(VV_TRUE, VVAL_TRUE);
    set_vim_var_nr(VV_NONE, VVAL_NONE);
    set_vim_var_nr(VV_NULL, VVAL_NULL);
    set_vim_var_nr(VV_NUMBERMAX, VARNUM_MAX);
    set_vim_var_nr(VV_NUMBERMIN, VARNUM_MIN);
    set_vim_var_nr(VV_NUMBERSIZE, sizeof(varnumber_T) * 8);
    set_vim_var_nr(VV_SIZEOFINT, sizeof(int));
    set_vim_var_nr(VV_SIZEOFLONG, sizeof(int));
    set_vim_var_nr(VV_SIZEOFPOINTER, sizeof(char *));
    set_vim_var_nr(VV_MAXCOL, MAXCOL);

    set_vim_var_nr(VV_TYPE_NUMBER,  VAR_TYPE_NUMBER);
    set_vim_var_nr(VV_TYPE_STRING,  VAR_TYPE_STRING);
    set_vim_var_nr(VV_TYPE_FUNC,    VAR_TYPE_FUNC);
    set_vim_var_nr(VV_TYPE_LIST,    VAR_TYPE_LIST);
    set_vim_var_nr(VV_TYPE_DICT,    VAR_TYPE_DICT);
    set_vim_var_nr(VV_TYPE_FLOAT,   VAR_TYPE_FLOAT);
    set_vim_var_nr(VV_TYPE_BOOL,    VAR_TYPE_BOOL);
    set_vim_var_nr(VV_TYPE_NONE,    VAR_TYPE_NONE);
    set_vim_var_nr(VV_TYPE_JOB,     VAR_TYPE_JOB);
    set_vim_var_nr(VV_TYPE_CHANNEL, VAR_TYPE_CHANNEL);
    set_vim_var_nr(VV_TYPE_BLOB,    VAR_TYPE_BLOB);
    set_vim_var_nr(VV_TYPE_CLASS,   VAR_TYPE_CLASS);
    set_vim_var_nr(VV_TYPE_OBJECT,  VAR_TYPE_OBJECT);
    set_vim_var_nr(VV_TYPE_TYPEALIAS,  VAR_TYPE_TYPEALIAS);
    set_vim_var_nr(VV_TYPE_ENUM,  VAR_TYPE_ENUM);
    set_vim_var_nr(VV_TYPE_ENUMVALUE,  VAR_TYPE_ENUMVALUE);

    set_vim_var_nr(VV_ECHOSPACE,    sc_col - 1);

    set_vim_var_dict(VV_COLORNAMES, dict_alloc());

#ifdef FEAT_PYTHON3
    set_vim_var_nr(VV_PYTHON3_VERSION, python3_version());
#endif

    
    
    set_reg_var(0);
}

#if defined(EXITFREE) || defined(PROTO)

    void
evalvars_clear(void)
{
    int		    i;
    struct vimvar   *p;

    for (i = 0; i < VV_LEN; ++i)
    {
	p = &vimvars[i];
	if (p->vv_di.di_tv.v_type == VAR_STRING)
	    VIM_CLEAR(p->vv_str);
	else if (p->vv_di.di_tv.v_type == VAR_LIST)
	{
	    list_unref(p->vv_list);
	    p->vv_list = NULL;
	}
    }
    hash_clear(&vimvarht);
    hash_init(&vimvarht);  
    hash_clear(&compat_hashtab);

    
    vars_clear(&globvarht);

    
    
    
    
    for (i = 1; i <= script_items.ga_len; ++i)
	vars_clear(&SCRIPT_VARS(i));
}
#endif

    int
garbage_collect_globvars(int copyID)
{
    return set_ref_in_ht(&globvarht, copyID, NULL);
}

    int
garbage_collect_vimvars(int copyID)
{
    return set_ref_in_ht(&vimvarht, copyID, NULL);
}

    int
garbage_collect_scriptvars(int copyID)
{
    int		    i;
    int		    idx;
    int		    abort = FALSE;
    scriptitem_T    *si;

    for (i = 1; i <= script_items.ga_len; ++i)
    {
	abort = abort || set_ref_in_ht(&SCRIPT_VARS(i), copyID, NULL);

	si = SCRIPT_ITEM(i);
	for (idx = 0; idx < si->sn_var_vals.ga_len; ++idx)
	{
	    svar_T    *sv = ((svar_T *)si->sn_var_vals.ga_data) + idx;

	    if (sv->sv_name != NULL)
		abort = abort || set_ref_in_item(sv->sv_tv, copyID, NULL, NULL);
	}
    }

    return abort;
}


    void
set_internal_string_var(char_u *name, char_u *value)
{
    char_u	*val;
    typval_T	*tvp;

    val = vim_strsave(value);
    if (val == NULL)
	return;

    tvp = alloc_string_tv(val);
    if (tvp == NULL)
	return;

    set_var(name, tvp, FALSE);
    free_tv(tvp);
}

    int
eval_charconvert(
    char_u	*enc_from,
    char_u	*enc_to,
    char_u	*fname_from,
    char_u	*fname_to)
{
    int		err = FALSE;
    sctx_T	saved_sctx = current_sctx;
    sctx_T	*ctx;

    set_vim_var_string(VV_CC_FROM, enc_from, -1);
    set_vim_var_string(VV_CC_TO, enc_to, -1);
    set_vim_var_string(VV_FNAME_IN, fname_from, -1);
    set_vim_var_string(VV_FNAME_OUT, fname_to, -1);
    ctx = get_option_sctx("charconvert");
    if (ctx != NULL)
	current_sctx = *ctx;

    if (eval_to_bool(p_ccv, &err, NULL, FALSE, TRUE))
	err = TRUE;

    set_vim_var_string(VV_CC_FROM, NULL, -1);
    set_vim_var_string(VV_CC_TO, NULL, -1);
    set_vim_var_string(VV_FNAME_IN, NULL, -1);
    set_vim_var_string(VV_FNAME_OUT, NULL, -1);
    current_sctx = saved_sctx;

    if (err)
	return FAIL;
    return OK;
}

# if defined(FEAT_POSTSCRIPT) || defined(PROTO)
    int
eval_printexpr(char_u *fname, char_u *args)
{
    int		err = FALSE;
    sctx_T	saved_sctx = current_sctx;
    sctx_T	*ctx;

    set_vim_var_string(VV_FNAME_IN, fname, -1);
    set_vim_var_string(VV_CMDARG, args, -1);
    ctx = get_option_sctx("printexpr");
    if (ctx != NULL)
	current_sctx = *ctx;

    if (eval_to_bool(p_pexpr, &err, NULL, FALSE, TRUE))
	err = TRUE;

    set_vim_var_string(VV_FNAME_IN, NULL, -1);
    set_vim_var_string(VV_CMDARG, NULL, -1);
    current_sctx = saved_sctx;

    if (err)
    {
	mch_remove(fname);
	return FAIL;
    }
    return OK;
}
# endif

# if defined(FEAT_DIFF) || defined(PROTO)
    void
eval_diff(
    char_u	*origfile,
    char_u	*newfile,
    char_u	*outfile)
{
    sctx_T	saved_sctx = current_sctx;
    sctx_T	*ctx;
    typval_T	*tv;

    set_vim_var_string(VV_FNAME_IN, origfile, -1);
    set_vim_var_string(VV_FNAME_NEW, newfile, -1);
    set_vim_var_string(VV_FNAME_OUT, outfile, -1);

    ctx = get_option_sctx("diffexpr");
    if (ctx != NULL)
	current_sctx = *ctx;

    
    tv = eval_expr_ext(p_dex, NULL, TRUE);
    free_tv(tv);

    set_vim_var_string(VV_FNAME_IN, NULL, -1);
    set_vim_var_string(VV_FNAME_NEW, NULL, -1);
    set_vim_var_string(VV_FNAME_OUT, NULL, -1);
    current_sctx = saved_sctx;
}

    void
eval_patch(
    char_u	*origfile,
    char_u	*difffile,
    char_u	*outfile)
{
    sctx_T	saved_sctx = current_sctx;
    sctx_T	*ctx;
    typval_T	*tv;

    set_vim_var_string(VV_FNAME_IN, origfile, -1);
    set_vim_var_string(VV_FNAME_DIFF, difffile, -1);
    set_vim_var_string(VV_FNAME_OUT, outfile, -1);

    ctx = get_option_sctx("patchexpr");
    if (ctx != NULL)
	current_sctx = *ctx;

    
    tv = eval_expr_ext(p_pex, NULL, TRUE);
    free_tv(tv);

    set_vim_var_string(VV_FNAME_IN, NULL, -1);
    set_vim_var_string(VV_FNAME_DIFF, NULL, -1);
    set_vim_var_string(VV_FNAME_OUT, NULL, -1);
    current_sctx = saved_sctx;
}
# endif

#if defined(FEAT_SPELL) || defined(PROTO)

    list_T *
eval_spell_expr(char_u *badword, char_u *expr)
{
    typval_T	save_val;
    typval_T	rettv;
    list_T	*list = NULL;
    char_u	*p = skipwhite(expr);
    sctx_T	saved_sctx = current_sctx;
    sctx_T	*ctx;
    int		r;

    
    prepare_vimvar(VV_VAL, &save_val);
    set_vim_var_string(VV_VAL, badword, -1);
    if (p_verbose == 0)
	++emsg_off;
    ctx = get_option_sctx("spellsuggest");
    if (ctx != NULL)
	current_sctx = *ctx;

    r = may_call_simple_func(p, &rettv);
    if (r == NOTDONE)
	r = eval1(&p, &rettv, &EVALARG_EVALUATE);
    if (r == OK)
    {
	if (rettv.v_type != VAR_LIST)
	    clear_tv(&rettv);
	else
	    list = rettv.vval.v_list;
    }

    if (p_verbose == 0)
	--emsg_off;
    clear_tv(get_vim_var_tv(VV_VAL));
    restore_vimvar(VV_VAL, &save_val);
    current_sctx = saved_sctx;

    return list;
}


    int
get_spellword(list_T *list, char_u **pp)
{
    listitem_T	*li;

    li = list->lv_first;
    if (li == NULL)
	return -1;
    *pp = tv_get_string(&li->li_tv);

    li = li->li_next;
    if (li == NULL)
	return -1;
    return (int)tv_get_number(&li->li_tv);
}
#endif


    void
prepare_vimvar(int idx, typval_T *save_tv)
{
    *save_tv = vimvars[idx].vv_tv;
    vimvars[idx].vv_str = NULL;  
    if (vimvars[idx].vv_tv_type == VAR_UNKNOWN)
	hash_add(&vimvarht, vimvars[idx].vv_di.di_key, "prepare vimvar");
}


    void
restore_vimvar(int idx, typval_T *save_tv)
{
    hashitem_T	*hi;

    vimvars[idx].vv_tv = *save_tv;
    if (vimvars[idx].vv_tv_type != VAR_UNKNOWN)
	return;

    hi = hash_find(&vimvarht, vimvars[idx].vv_di.di_key);
    if (HASHITEM_EMPTY(hi))
	internal_error("restore_vimvar()");
    else
	hash_remove(&vimvarht, hi, "restore vimvar");
}


    static void
list_vim_vars(int *first)
{
    list_hashtable_vars(&vimvarht, "v:", FALSE, first);
}


    static void
list_script_vars(int *first)
{
    if (SCRIPT_ID_VALID(current_sctx.sc_sid))
	list_hashtable_vars(&SCRIPT_VARS(current_sctx.sc_sid),
							   "s:", FALSE, first);
}


    int
is_scoped_variable(char_u *name)
{
    return vim_strchr((char_u *)"gwbt", name[0]) != NULL
	&& name[1] == ':'
	&& eval_isnamec(name[2]);
}


    char_u *
eval_one_expr_in_str(char_u *p, garray_T *gap, int evaluate)
{
    char_u	*block_start = skipwhite(p + 1);  
    char_u	*block_end = block_start;
    char_u	*expr_val;

    if (*block_start == NUL)
    {
	semsg(_(e_missing_close_curly_str), p);
	return NULL;
    }
    if (skip_expr(&block_end, NULL) == FAIL)
	return NULL;
    block_end = skipwhite(block_end);
    if (*block_end != '}')
    {
	semsg(_(e_missing_close_curly_str), p);
	return NULL;
    }
    if (evaluate)
    {
	*block_end = NUL;
	expr_val = eval_to_string(block_start, FALSE, FALSE);
	*block_end = '}';
	if (expr_val == NULL)
	    return NULL;
	ga_concat(gap, expr_val);
	vim_free(expr_val);
    }

    return block_end + 1;
}


    static char_u *
eval_all_expr_in_str(char_u *str)
{
    garray_T	ga;
    char_u	*p;

    ga_init2(&ga, 1, 80);
    p = str;

    while (*p != NUL)
    {
	char_u	*lit_start;
	int	escaped_brace = FALSE;

	
	lit_start = p;
	while (*p != '{' && *p != '}' && *p != NUL)
	    ++p;

	if (*p != NUL && *p == p[1])
	{
	    
	    
	    ++p;
	    escaped_brace = TRUE;
	}
	else if (*p == '}')
	{
	    semsg(_(e_stray_closing_curly_str), str);
	    ga_clear(&ga);
	    return NULL;
	}

	
	ga_concat_len(&ga, lit_start, (size_t)(p - lit_start));

	if (*p == NUL)
	    break;

	if (escaped_brace)
	{
	    
	    ++p;
	    continue;
	}

	
	p = eval_one_expr_in_str(p, &ga, TRUE);
	if (p == NULL)
	{
	    ga_clear(&ga);
	    return NULL;
	}
    }
    ga_append(&ga, NUL);

    return ga.ga_data;
}


    list_T *
heredoc_get(exarg_T *eap, char_u *cmd, int script_get, int vim9compile)
{
    char_u	*theline = NULL;
    char_u	*marker;
    list_T	*l;
    char_u	*p;
    char_u	*str;
    int		marker_indent_len = 0;
    int		text_indent_len = 0;
    char_u	*text_indent = NULL;
    char_u	dot[] = ".";
    int		comment_char = in_vim9script() ? '#' : '"';
    int		evalstr = FALSE;
    int		eval_failed = FALSE;
    cctx_T	*cctx = vim9compile ? eap->cookie : NULL;
    int		count = 0;
    int		heredoc_in_string = FALSE;
    char_u	*line_arg = NULL;
    char_u	*nl_ptr = vim_strchr(cmd, '\n');

    if (nl_ptr != NULL)
    {
	heredoc_in_string = TRUE;
	line_arg = nl_ptr + 1;
	*nl_ptr = NUL;
    }
    else if (eap->ea_getline == NULL)
    {
	emsg(_(e_cannot_use_heredoc_here));
	return NULL;
    }

    
    cmd = skipwhite(cmd);

    while (TRUE)
    {
	if (STRNCMP(cmd, "trim", 4) == 0
		&& (cmd[4] == NUL || VIM_ISWHITE(cmd[4])))
	{
	    cmd = skipwhite(cmd + 4);

	    
	    
	    
	    
	    p = *eap->cmdlinep;
	    while (VIM_ISWHITE(*p))
	    {
		p++;
		marker_indent_len++;
	    }
	    text_indent_len = -1;

	    continue;
	}
	if (STRNCMP(cmd, "eval", 4) == 0
		&& (cmd[4] == NUL || VIM_ISWHITE(cmd[4])))
	{
	    cmd = skipwhite(cmd + 4);
	    evalstr = TRUE;
	    continue;
	}
	break;
    }

    
    if (*cmd != NUL && *cmd != comment_char)
    {
	marker = skipwhite(cmd);
	p = skiptowhite(marker);
	if (*skipwhite(p) != NUL && *skipwhite(p) != comment_char)
	{
	    semsg(_(e_trailing_characters_str), p);
	    return NULL;
	}
	*p = NUL;
	if (!script_get && vim_islower(*marker))
	{
	    emsg(_(e_marker_cannot_start_with_lower_case_letter));
	    return NULL;
	}
    }
    else
    {
	
	
	if (script_get)
	    marker = dot;
	else
	{
	    emsg(_(e_missing_marker));
	    return NULL;
	}
    }

    l = list_alloc();
    if (l == NULL)
	return NULL;

    for (;;)
    {
	int	mi = 0;
	int	ti = 0;

	if (heredoc_in_string)
	{
	    char_u	*next_line;

	    
	    

	    if (*line_arg == NUL)
	    {
		semsg(_(e_missing_end_marker_str), marker);
		break;
	    }

	    theline = line_arg;
	    next_line = vim_strchr(theline, '\n');
	    if (next_line == NULL)
		line_arg += STRLEN(line_arg);
	    else
	    {
		*next_line = NUL;
		line_arg = next_line + 1;
	    }
	}
	else
	{
	    vim_free(theline);
	    theline = eap->ea_getline(NUL, eap->cookie, 0, FALSE);
	    if (theline == NULL)
	    {
		semsg(_(e_missing_end_marker_str), marker);
		break;
	    }
	}

	
	
	if (marker_indent_len > 0
		&& STRNCMP(theline, *eap->cmdlinep, marker_indent_len) == 0)
	    mi = marker_indent_len;
	if (STRCMP(marker, theline + mi) == 0)
	    break;

	
	
	if (eval_failed)
	    continue;

	if (text_indent_len == -1 && *theline != NUL)
	{
	    
	    p = theline;
	    text_indent_len = 0;
	    while (VIM_ISWHITE(*p))
	    {
		p++;
		text_indent_len++;
	    }
	    text_indent = vim_strnsave(theline, text_indent_len);
	}
	
	if (text_indent != NULL)
	    for (ti = 0; ti < text_indent_len; ++ti)
		if (theline[ti] != text_indent[ti])
		    break;

	str = theline + ti;
	if (vim9compile)
	{
	    if (compile_all_expr_in_str(str, evalstr, cctx) == FAIL)
	    {
		vim_free(theline);
		vim_free(text_indent);
		return FAIL;
	    }
	    count++;
	}
	else
	{
	    int	    free_str = FALSE;

	    if (evalstr && !eap->skip)
	    {
		str = eval_all_expr_in_str(str);
		if (str == NULL)
		{
		    
		    eval_failed = TRUE;
		    continue;
		}
		free_str = TRUE;
	    }

	    if (list_append_string(l, str, -1) == FAIL)
		break;
	    if (free_str)
		vim_free(str);
	}
    }
    if (heredoc_in_string)
	
	eap->nextcmd = line_arg;
    else
	vim_free(theline);
    vim_free(text_indent);

    if (vim9compile && cctx->ctx_skip != SKIP_YES && !eval_failed)
	generate_NEWLIST(cctx, count, FALSE);

    if (eval_failed)
    {
	
	list_free(l);
	return NULL;
    }
    return l;
}


    void
ex_var(exarg_T *eap)
{
    char_u *p = eap->cmd;
    int	    has_var;

    if (!in_vim9script())
    {
	semsg(_(e_str_cannot_be_used_in_legacy_vim_script), ":var");
	return;
    }
    has_var = checkforcmd_noparen(&p, "var", 3);
    if (current_sctx.sc_sid == 0 && has_var)
    {
	emsg(_(e_cannot_declare_variable_on_command_line));
	return;
    }
    ex_let(eap);
}


    void
ex_let(exarg_T *eap)
{
    char_u	*arg = eap->arg;
    char_u	*expr = NULL;
    typval_T	rettv;
    int		var_count = 0;
    int		semicolon = 0;
    char_u	op[4];
    char_u	*argend;
    int		first = TRUE;
    int		concat;
    int		has_assign;
    int		flags = 0;
    int		vim9script = in_vim9script();

    if (eap->cmdidx == CMD_final && !vim9script)
    {
	
	ex_finally(eap);
	return;
    }
    if (eap->cmdidx == CMD_let && vim9script)
    {
	emsg(_(e_cannot_use_let_in_vim9_script));
	return;
    }

    if (eap->cmdidx == CMD_const)
	flags |= ASSIGN_CONST;
    else if (eap->cmdidx == CMD_final)
	flags |= ASSIGN_FINAL;

    
    if (eap->arg == eap->cmd)
	flags |= ASSIGN_NO_DECL;

    argend = skip_var_list(arg, TRUE, &var_count, &semicolon, FALSE);
    if (argend == NULL)
	return;
    if (argend > arg && argend[-1] == '.')  
	--argend;
    expr = skipwhite(argend);
    concat = expr[0] == '.'
	&& ((expr[1] == '=' && in_old_script(2))
		|| (expr[1] == '.' && expr[2] == '='));
    has_assign =  *expr == '=' || (vim_strchr((char_u *)"+-*/%", *expr) != NULL
							    && expr[1] == '=');
    if (!has_assign && !concat)
    {
	
	if (*arg == '[')
	    emsg(_(e_invalid_argument));
	else if (expr[0] == '.' && expr[1] == '=')
	    emsg(_(e_dot_equal_not_supported_with_script_version_two));
	else if (!ends_excmd2(eap->cmd, arg))
	{
	    if (vim9script)
	    {
		if (!ends_excmd2(eap->cmd, skipwhite(argend)))
		    semsg(_(e_trailing_characters_str), argend);
		else
		    
		    arg = vim9_declare_scriptvar(eap, arg);
	    }
	    else
	    {
		
		arg = list_arg_vars(eap, arg, &first);
	    }
	}
	else if (!eap->skip)
	{
	    
	    list_glob_vars(&first);
	    list_buf_vars(&first);
	    list_win_vars(&first);
	    list_tab_vars(&first);
	    list_script_vars(&first);
	    list_func_vars(&first);
	    list_vim_vars(&first);
	}
	set_nextcmd(eap, arg);
	return;
    }

    if (expr[0] == '=' && expr[1] == '<' && expr[2] == '<')
    {
	list_T	*l = NULL;
	int	cur_lnum = SOURCING_LNUM;

	
	
	if (vim9script && !eap->skip && (!VIM_ISWHITE(expr[-1])
						 || !IS_WHITE_OR_NUL(expr[3])))
	    semsg(_(e_white_space_required_before_and_after_str_at_str),
								  "=<<", expr);
	else
	    l = heredoc_get(eap, expr + 3, FALSE, FALSE);

	if (l != NULL)
	{
	    rettv_list_set(&rettv, l);
	    if (!eap->skip)
	    {
		
		SOURCING_LNUM = cur_lnum;
		op[0] = '=';
		op[1] = NUL;
		(void)ex_let_vars(eap->arg, &rettv, FALSE, semicolon, var_count,
								flags, op);
	    }
	    clear_tv(&rettv);
	}
	return;
    }

    evalarg_T   evalarg;
    int	    len = 1;

    CLEAR_FIELD(rettv);

    int cur_lnum;

    op[0] = '=';
    op[1] = NUL;
    if (*expr != '=')
    {
	if (vim9script && (flags & ASSIGN_NO_DECL) == 0)
	{
	    
	    semsg(_(e_cannot_use_operator_on_new_variable_str), eap->arg);
	}
	else if (vim_strchr((char_u *)"+-*/%.", *expr) != NULL)
	{
	    op[0] = *expr;   
	    ++len;
	    if (expr[0] == '.' && expr[1] == '.') 
	    {
		++expr;
		++len;
	    }
	}
	expr += 2;
    }
    else
	++expr;

    if (vim9script && !eap->skip && (!VIM_ISWHITE(*argend)
					       || !IS_WHITE_OR_NUL(*expr)))
    {
	vim_strncpy(op, expr - len, len);
	semsg(_(e_white_space_required_before_and_after_str_at_str),
							       op, argend);
    }

    if (eap->skip)
	++emsg_skip;
    fill_evalarg_from_eap(&evalarg, eap, eap->skip);
    expr = skipwhite_and_linebreak(expr, &evalarg);
    cur_lnum = SOURCING_LNUM;
    int eval_res = eval0(expr, &rettv, eap, &evalarg);
    if (eap->skip)
	--emsg_skip;
    clear_evalarg(&evalarg, eap);

    
    
    SOURCING_LNUM = cur_lnum;

    if (!eap->skip && eval_res != FAIL)
	(void)ex_let_vars(eap->arg, &rettv, FALSE, semicolon, var_count,
								    flags, op);
    if (eval_res != FAIL)
	clear_tv(&rettv);
}


    int
ex_let_vars(
    char_u	*arg_start,
    typval_T	*tv,
    int		copy,		
    int		semicolon,	
    int		var_count,	
    int		flags,		
    char_u	*op)
{
    char_u	*arg = arg_start;
    list_T	*l;
    int		i;
    int		var_idx = 0;
    listitem_T	*item;
    typval_T	ltv;

    if (tv->v_type == VAR_VOID)
    {
	emsg(_(e_cannot_use_void_value));
	return FAIL;
    }
    if (*arg != '[')
    {
	
	if (ex_let_one(arg, tv, copy, flags, op, op, var_idx) == NULL)
	    return FAIL;
	return OK;
    }

    
    if (tv->v_type != VAR_LIST || (l = tv->vval.v_list) == NULL)
    {
	emsg(_(e_list_required));
	return FAIL;
    }

    i = list_len(l);
    if (semicolon == 0 && var_count < i)
    {
	emsg(_(e_less_targets_than_list_items));
	return FAIL;
    }
    if (var_count - semicolon > i)
    {
	emsg(_(e_more_targets_than_list_items));
	return FAIL;
    }

    CHECK_LIST_MATERIALIZE(l);
    item = l->lv_first;
    while (*arg != ']')
    {
	arg = skipwhite(arg + 1);
	++var_idx;
	arg = ex_let_one(arg, &item->li_tv, TRUE,
			  flags | ASSIGN_UNPACK, (char_u *)",;]", op, var_idx);
	item = item->li_next;
	if (arg == NULL)
	    return FAIL;

	arg = skipwhite(arg);
	if (*arg == ';')
	{
	    
	    
	    l = list_alloc();
	    if (l == NULL)
		return FAIL;
	    while (item != NULL)
	    {
		list_append_tv(l, &item->li_tv);
		item = item->li_next;
	    }

	    ltv.v_type = VAR_LIST;
	    ltv.v_lock = 0;
	    ltv.vval.v_list = l;
	    l->lv_refcount = 1;
	    ++var_idx;

	    arg = ex_let_one(skipwhite(arg + 1), &ltv, FALSE,
			    flags | ASSIGN_UNPACK, (char_u *)"]", op, var_idx);
	    clear_tv(&ltv);
	    if (arg == NULL)
		return FAIL;
	    break;
	}
	else if (*arg != ',' && *arg != ']')
	{
	    internal_error("ex_let_vars()");
	    return FAIL;
	}
    }

    return OK;
}


    char_u *
skip_var_list(
    char_u	*arg,
    int		include_type,
    int		*var_count,
    int		*semicolon,
    int		silent)
{
    char_u	*p, *s;

    if (*arg == '[')
    {
	
	p = arg;
	for (;;)
	{
	    p = skipwhite(p + 1);	
	    s = skip_var_one(p, include_type);
	    if (s == p)
	    {
		if (!silent)
		    semsg(_(e_invalid_argument_str), p);
		return NULL;
	    }
	    ++*var_count;

	    p = skipwhite(s);
	    if (*p == ']')
		break;
	    else if (*p == ';')
	    {
		if (*semicolon == 1)
		{
		    if (!silent)
			emsg(_(e_double_semicolon_in_list_of_variables));
		    return NULL;
		}
		*semicolon = 1;
	    }
	    else if (*p != ',')
	    {
		if (!silent)
		    semsg(_(e_invalid_argument_str), p);
		return NULL;
	    }
	}
	return p + 1;
    }

    return skip_var_one(arg, include_type);
}


    char_u *
skip_var_one(char_u *arg, int include_type)
{
    char_u	*end;
    int		vim9 = in_vim9script();

    if (*arg == '@' && arg[1] != NUL)
	return arg + 2;

    
    if (STRNCMP(arg, "&t_", 3) == 0 && arg[3] != NUL && arg[4] != NUL)
	return arg + 5;

    end = find_name_end(*arg == '$' || *arg == '&' ? arg + 1 : arg,
				   NULL, NULL, FNE_INCL_BR | FNE_CHECK_START);

    
    
    if (vim9 && end == arg + 2 && end[-1] == ':')
	--end;

    if (include_type && vim9)
    {
	if (*skipwhite(end) == ':')
	    end = skip_type(skipwhite(skipwhite(end) + 1), FALSE);
    }
    return end;
}


    void
list_hashtable_vars(
    hashtab_T	*ht,
    char	*prefix,
    int		empty,
    int		*first)
{
    hashitem_T	*hi;
    dictitem_T	*di;
    int		todo;
    char_u	buf[IOSIZE];

    int save_ht_flags = ht->ht_flags;
    ht->ht_flags |= HTFLAGS_FROZEN;

    todo = (int)ht->ht_used;
    for (hi = ht->ht_array; todo > 0 && !got_int; ++hi)
    {
	if (!HASHITEM_EMPTY(hi))
	{
	    --todo;
	    di = HI2DI(hi);

	    
	    vim_strncpy((char_u *)buf, (char_u *)prefix, IOSIZE - 1);
	    vim_strcat((char_u *)buf, di->di_key, IOSIZE);
	    if (message_filtered(buf))
		continue;

	    if (empty || di->di_tv.v_type != VAR_STRING
					   || di->di_tv.vval.v_string != NULL)
		list_one_var(di, prefix, first);
	}
    }

    ht->ht_flags = save_ht_flags;
}


    static void
list_glob_vars(int *first)
{
    list_hashtable_vars(&globvarht, "", TRUE, first);
}


    static void
list_buf_vars(int *first)
{
    list_hashtable_vars(&curbuf->b_vars->dv_hashtab, "b:", TRUE, first);
}


    static void
list_win_vars(int *first)
{
    list_hashtable_vars(&curwin->w_vars->dv_hashtab, "w:", TRUE, first);
}


    static void
list_tab_vars(int *first)
{
    list_hashtable_vars(&curtab->tp_vars->dv_hashtab, "t:", TRUE, first);
}


    static char_u *
list_arg_vars(exarg_T *eap, char_u *arg, int *first)
{
    int		error = FALSE;
    int		len;
    char_u	*name;
    char_u	*name_start;
    char_u	*arg_subsc;
    char_u	*tofree;
    typval_T    tv;

    while (!ends_excmd2(eap->cmd, arg) && !got_int)
    {
	if (error || eap->skip)
	{
	    arg = find_name_end(arg, NULL, NULL, FNE_INCL_BR | FNE_CHECK_START);
	    if (!VIM_ISWHITE(*arg) && !ends_excmd(*arg))
	    {
		emsg_severe = TRUE;
		if (!did_emsg)
		    semsg(_(e_trailing_characters_str), arg);
		break;
	    }
	}
	else
	{
	    
	    name_start = name = arg;
	    len = get_name_len(&arg, &tofree, TRUE, TRUE);
	    if (len <= 0)
	    {
		
		
		if (len < 0 && !aborting())
		{
		    emsg_severe = TRUE;
		    semsg(_(e_invalid_argument_str), arg);
		    break;
		}
		error = TRUE;
	    }
	    else
	    {
		arg = skipwhite(arg);
		if (tofree != NULL)
		    name = tofree;
		if (eval_variable(name, len, 0, &tv, NULL,
						     EVAL_VAR_VERBOSE) == FAIL)
		    error = TRUE;
		else
		{
		    
		    arg_subsc = arg;
		    if (handle_subscript(&arg, name_start, &tv,
					      &EVALARG_EVALUATE, TRUE) == FAIL)
			error = TRUE;
		    else
		    {
			if (arg == arg_subsc && len == 2 && name[1] == ':')
			{
			    switch (*name)
			    {
				case 'g': list_glob_vars(first); break;
				case 'b': list_buf_vars(first); break;
				case 'w': list_win_vars(first); break;
				case 't': list_tab_vars(first); break;
				case 'v': list_vim_vars(first); break;
				case 's': list_script_vars(first); break;
				case 'l': list_func_vars(first); break;
				default:
					  semsg(_(e_cant_list_variables_for_str), name);
			    }
			}
			else
			{
			    char_u	numbuf[NUMBUFLEN];
			    char_u	*tf;
			    int		c;
			    char_u	*s;

			    s = echo_string(&tv, &tf, numbuf, 0);
			    c = *arg;
			    *arg = NUL;
			    list_one_var_a("",
				    arg == arg_subsc ? name : name_start,
				    tv.v_type,
				    s == NULL ? (char_u *)"" : s,
				    first);
			    *arg = c;
			    vim_free(tf);
			}
			clear_tv(&tv);
		    }
		}
	    }

	    vim_free(tofree);
	}

	arg = skipwhite(arg);
    }

    return arg;
}


    static char_u *
ex_let_env(
    char_u	*arg,
    typval_T	*tv,
    int		flags,
    char_u	*endchars,
    char_u	*op)
{
    char_u	*arg_end = NULL;
    char_u	*name;
    int		len;

    if ((flags & (ASSIGN_CONST | ASSIGN_FINAL))
					 && (flags & ASSIGN_FOR_LOOP) == 0)
    {
	emsg(_(e_cannot_lock_environment_variable));
	return NULL;
    }

    
    ++arg;
    name = arg;
    len = get_env_len(&arg);
    if (len == 0)
	semsg(_(e_invalid_argument_str), name - 1);
    else
    {
	if (op != NULL && vim_strchr((char_u *)"+-*/%", *op) != NULL)
	    semsg(_(e_wrong_variable_type_for_str_equal), op);
	else if (endchars != NULL
			      && vim_strchr(endchars, *skipwhite(arg)) == NULL)
	    emsg(_(e_unexpected_characters_in_let));
	else if (!check_secure())
	{
	    char_u	*tofree = NULL;
	    int		c1 = name[len];
	    char_u	*p;

	    name[len] = NUL;
	    p = tv_get_string_chk(tv);
	    if (p != NULL && op != NULL && *op == '.')
	    {
		int	mustfree = FALSE;
		char_u  *s = vim_getenv(name, &mustfree);

		if (s != NULL)
		{
		    p = tofree = concat_str(s, p);
		    if (mustfree)
			vim_free(s);
		}
	    }
	    if (p != NULL)
	    {
		vim_setenv_ext(name, p);
		arg_end = arg;
	    }
	    name[len] = c1;
	    vim_free(tofree);
	}
    }
    return arg_end;
}


    static char_u *
ex_let_option(
    char_u	*arg,
    typval_T	*tv,
    int		flags,
    char_u	*endchars,
    char_u	*op)
{
    char_u	*p;
    int		scope;
    char_u	*arg_end = NULL;

    if ((flags & (ASSIGN_CONST | ASSIGN_FINAL))
					 && (flags & ASSIGN_FOR_LOOP) == 0)
    {
	emsg(_(e_cannot_lock_option));
	return NULL;
    }

    
    p = find_option_end(&arg, &scope);
    if (p == NULL || (endchars != NULL
			       && vim_strchr(endchars, *skipwhite(p)) == NULL))
    {
	emsg(_(e_unexpected_characters_in_let));
	return NULL;
    }

    int		c1;
    int	n = 0;
    getoption_T	opt_type;
    int	numval;
    char_u	*stringval = NULL;
    char_u	*s = NULL;
    int		failed = FALSE;
    int		opt_p_flags;
    char_u	*tofree = NULL;
    char_u	numbuf[NUMBUFLEN];

    c1 = *p;
    *p = NUL;

    opt_type = get_option_value(arg, &numval, &stringval, &opt_p_flags, scope);
    if (opt_type == gov_unknown && arg[0] != 't' && arg[1] != '_')
    {
	semsg(_(e_unknown_option_str_2), arg);
	goto theend;
    }
    if (op != NULL && *op != '='
	&& (((opt_type == gov_bool || opt_type == gov_number) && *op == '.')
	    || (opt_type == gov_string && *op != '.')))
    {
	semsg(_(e_wrong_variable_type_for_str_equal), op);
	goto theend;
    }

    if ((opt_type == gov_bool
		|| opt_type == gov_number
		|| opt_type == gov_hidden_bool
		|| opt_type == gov_hidden_number)
		     && (tv->v_type != VAR_STRING || !in_vim9script()))
    {
	if (opt_type == gov_bool || opt_type == gov_hidden_bool)
	    
	    n = (int)tv_get_bool_chk(tv, &failed);
	else
	    
	    n = (int)tv_get_number_chk(tv, &failed);
	if (failed)
	    goto theend;
    }

    if ((opt_p_flags & P_FUNC) && (tv->v_type == VAR_PARTIAL
						    || tv->v_type == VAR_FUNC))
    {
	
	
	
	s = tv2string(tv, &tofree, numbuf, 0);
	if (s == NULL)
	    goto theend;
    }
    
    
    else if (tv->v_type != VAR_BOOL && tv->v_type != VAR_SPECIAL
		     && (!in_vim9script() || tv->v_type != VAR_NUMBER))
    {
	s = tv_get_string_chk(tv);
	if (s == NULL)
	    goto theend;
    }
    else if (opt_type == gov_string || opt_type == gov_hidden_string)
    {
	emsg(_(e_string_required));
	goto theend;
    }

    if (op != NULL && *op != '=')
    {
	
	if (opt_type == gov_number
				 || (opt_type == gov_bool && !in_vim9script()))
	{
	    switch (*op)
	    {
		case '+': n = numval + n; break;
		case '-': n = numval - n; break;
		case '*': n = numval * n; break;
		case '/': n = (int)num_divide(numval, n, &failed); break;
		case '%': n = (int)num_modulus(numval, n, &failed); break;
	    }
	    s = NULL;
	    if (failed)
		goto theend;
	}
	else if (opt_type == gov_string && stringval != NULL && s != NULL)
	{
	    
	    s = concat_str(stringval, s);
	    vim_free(stringval);
	    stringval = s;
	}
    }

    char *err = set_option_value(arg, n, s, scope);
    arg_end = p;
    if (err != NULL)
	emsg(_(err));

theend:
    *p = c1;
    vim_free(stringval);
    vim_free(tofree);
    return arg_end;
}


    static char_u *
ex_let_register(
    char_u	*arg,
    typval_T	*tv,
    int		flags,
    char_u	*endchars,
    char_u	*op)
{
    char_u	*arg_end = NULL;

    if ((flags & (ASSIGN_CONST | ASSIGN_FINAL))
					 && (flags & ASSIGN_FOR_LOOP) == 0)
    {
	emsg(_(e_cannot_lock_register));
	return NULL;
    }
    ++arg;
    if (op != NULL && vim_strchr((char_u *)"+-*/%", *op) != NULL)
	semsg(_(e_wrong_variable_type_for_str_equal), op);
    else if (endchars != NULL
			  && vim_strchr(endchars, *skipwhite(arg + 1)) == NULL)
	emsg(_(e_unexpected_characters_in_let));
    else
    {
	char_u	*ptofree = NULL;
	char_u	*p;

	p = tv_get_string_chk(tv);
	if (p != NULL && op != NULL && *op == '.')
	{
	    char_u  *s = get_reg_contents(*arg == '@'
						  ? '"' : *arg, GREG_EXPR_SRC);

	    if (s != NULL)
	    {
		p = ptofree = concat_str(s, p);
		vim_free(s);
	    }
	}
	if (p != NULL)
	{
	    write_reg_contents(*arg == '@' ? '"' : *arg, p, -1, FALSE);
	    arg_end = arg + 1;
	}
	vim_free(ptofree);
    }
    return arg_end;
}


    static char_u *
ex_let_one(
    char_u	*arg,		
    typval_T	*tv,		
    int		copy,		
    int		flags,		
    char_u	*endchars,	
    char_u	*op,		
    int		var_idx)	
{
    char_u	*arg_end = NULL;

    if (in_vim9script() && (flags & (ASSIGN_NO_DECL | ASSIGN_DECL)) == 0
			&& (flags & (ASSIGN_CONST | ASSIGN_FINAL)) == 0
				  && vim_strchr((char_u *)"$@&", *arg) != NULL)
    {
	vim9_declare_error(arg);
	return NULL;
    }

    if (check_typval_is_value(tv) == FAIL)
	return NULL;

    if (*arg == '$')
    {
	
	return ex_let_env(arg, tv, flags, endchars, op);
    }
    else if (*arg == '&')
    {
	
	
	
	
	return ex_let_option(arg, tv, flags, endchars, op);
    }
    else if (*arg == '@')
    {
	
	return ex_let_register(arg, tv, flags, endchars, op);
    }
    else if (eval_isnamec1(*arg) || *arg == '{')
    {
	lval_T	lv;
	char_u	*p;
	int	lval_flags = (flags & (ASSIGN_NO_DECL | ASSIGN_DECL))
							     ? GLV_NO_DECL : 0;
	lval_flags |= (flags & ASSIGN_FOR_LOOP) ? GLV_FOR_LOOP : 0;
	if (op != NULL && *op != '=')
	    lval_flags |= GLV_ASSIGN_WITH_OP;

	
	
	
	p = get_lval(arg, tv, &lv, FALSE, FALSE, lval_flags, FNE_CHECK_START);
	if (p != NULL && lv.ll_name != NULL)
	{
	    if (endchars != NULL && vim_strchr(endchars,
					   *skipwhite(lv.ll_name_end)) == NULL)
	    {
		emsg(_(e_unexpected_characters_in_let));
	    }
	    else
	    {
		set_var_lval(&lv, p, tv, copy, flags, op, var_idx);
		arg_end = lv.ll_name_end;
	    }
	}
	clear_lval(&lv);
    }
    else
	semsg(_(e_invalid_argument_str), arg);

    return arg_end;
}


    void
ex_unlet(exarg_T *eap)
{
    ex_unletlock(eap, eap->arg, 0, 0, do_unlet_var, NULL);
}


    void
ex_lockvar(exarg_T *eap)
{
    char_u	*arg = eap->arg;
    int		deep = 2;

    if (eap->forceit)
	deep = -1;
    else if (vim_isdigit(*arg))
    {
	deep = getdigits(&arg);
	arg = skipwhite(arg);
    }

    ex_unletlock(eap, arg, deep, 0, do_lock_var, NULL);
}


    void
ex_unletlock(
    exarg_T	*eap,
    char_u	*argstart,
    int		deep,
    int		glv_flags,
    int		(*callback)(lval_T *, char_u *, exarg_T *, int, void *),
    void	*cookie)
{
    char_u	*arg = argstart;
    char_u	*name_end;
    int		error = FALSE;
    lval_T	lv;

    do
    {
	if (*arg == '$')
	{
	    lv.ll_name = arg;
	    lv.ll_tv = NULL;
	    ++arg;
	    if (get_env_len(&arg) == 0)
	    {
		semsg(_(e_invalid_argument_str), arg - 1);
		return;
	    }
	    if (!error && !eap->skip
			      && callback(&lv, arg, eap, deep, cookie) == FAIL)
		error = TRUE;
	    name_end = arg;
	}
	else
	{
	    
	    name_end = get_lval(arg, NULL, &lv, TRUE, eap->skip || error,
				     glv_flags | GLV_NO_DECL, FNE_CHECK_START);
	    if (lv.ll_name == NULL)
		error = TRUE;	    
	    if (name_end == NULL || (!VIM_ISWHITE(*name_end)
						    && !ends_excmd(*name_end)))
	    {
		if (name_end != NULL)
		{
		    emsg_severe = TRUE;
		    semsg(_(e_trailing_characters_str), name_end);
		}
		if (!(eap->skip || error))
		    clear_lval(&lv);
		break;
	    }

	    if (!error && !eap->skip
			 && callback(&lv, name_end, eap, deep, cookie) == FAIL)
		error = TRUE;

	    if (!eap->skip)
		clear_lval(&lv);
	}

	arg = skipwhite(name_end);
    } while (!ends_excmd2(name_end, arg));

    set_nextcmd(eap, arg);
}

    static int
do_unlet_var(
    lval_T	*lp,
    char_u	*name_end,
    exarg_T	*eap,
    int		deep UNUSED,
    void	*cookie UNUSED)
{
    int		forceit = eap->forceit;
    int		ret = OK;
    int		cc;

    if (lp->ll_tv == NULL)
    {
	cc = *name_end;
	*name_end = NUL;

	
	if (*lp->ll_name == '$')
	    vim_unsetenv_ext(lp->ll_name + 1);
	else if (do_unlet(lp->ll_name, forceit) == FAIL)
	    ret = FAIL;
	*name_end = cc;
    }
    else if ((lp->ll_list != NULL
		 && value_check_lock(lp->ll_list->lv_lock, lp->ll_name, FALSE))
	    || (lp->ll_dict != NULL
		&& value_check_lock(lp->ll_dict->dv_lock, lp->ll_name, FALSE)))
	return FAIL;
    else if (lp->ll_range)
	list_unlet_range(lp->ll_list, lp->ll_li, lp->ll_n1,
						    !lp->ll_empty2, lp->ll_n2);
    else if (lp->ll_list != NULL)
	
	listitem_remove(lp->ll_list, lp->ll_li);
    else
	
	dictitem_remove(lp->ll_dict, lp->ll_di, "unlet");

    return ret;
}


    void
list_unlet_range(
	list_T	    *l,
	listitem_T  *li_first,
	int	    n1_arg,
	int	    has_n2,
	int	    n2)
{
    listitem_T  *li = li_first;
    int		n1 = n1_arg;

    
    li = li_first;
    n1 = n1_arg;
    while (li != NULL && (!has_n2 || n2 >= n1))
    {
	listitem_T *next = li->li_next;

	listitem_remove(l, li);
	li = next;
	++n1;
    }
}

    int
do_unlet(char_u *name, int forceit)
{
    hashtab_T	*ht;
    hashitem_T	*hi;
    char_u	*varname = NULL;  
    dict_T	*d;
    dictitem_T	*di;

    
    if (in_vim9script() && check_vim9_unlet(name) == FAIL)
	return FAIL;

    ht = find_var_ht(name, &varname);

    
    if (ht == get_script_local_ht()
	    && SCRIPT_ID_VALID(current_sctx.sc_sid)
	    && SCRIPT_ITEM(current_sctx.sc_sid)->sn_version
							 == SCRIPT_VERSION_VIM9
	    && check_vim9_unlet(name) == FAIL)
	return FAIL;

    if (ht != NULL && *varname != NUL)
    {
	d = get_current_funccal_dict(ht);
	if (d == NULL)
	{
	    if (ht == &globvarht)
		d = &globvardict;
	    else if (ht == &compat_hashtab)
		d = &vimvardict;
	    else
	    {
		di = find_var_in_ht(ht, *name, (char_u *)"", FALSE);
		d = di == NULL ? NULL : di->di_tv.vval.v_dict;
	    }
	    if (d == NULL)
	    {
		internal_error("do_unlet()");
		return FAIL;
	    }
	}
	hi = hash_find(ht, varname);
	if (HASHITEM_EMPTY(hi))
	    hi = find_hi_in_scoped_ht(name, &ht);
	if (hi != NULL && !HASHITEM_EMPTY(hi))
	{
	    di = HI2DI(hi);
	    if (var_check_fixed(di->di_flags, name, FALSE)
		    || var_check_ro(di->di_flags, name, FALSE)
		    || value_check_lock(d->dv_lock, name, FALSE)
		    || check_hashtab_frozen(ht, "unlet"))
		return FAIL;

	    delete_var(ht, hi);
	    return OK;
	}
    }
    if (forceit)
	return OK;
    semsg(_(e_no_such_variable_str), name);
    return FAIL;
}

    static void
report_lockvar_member(char *msg, lval_T *lp)
{
    int did_alloc = FALSE;
    char_u *vname = (char_u *)"";
    char_u *class_name = lp->ll_class != NULL
				    ? lp->ll_class->class_name : (char_u *)"";
    if (lp->ll_name != NULL)
    {
	if (lp->ll_name_end == NULL)
	    vname = lp->ll_name;
	else
	{
	    vname = vim_strnsave(lp->ll_name, lp->ll_name_end - lp->ll_name);
	    if (vname == NULL)
		return;
	    did_alloc = TRUE;
	}
    }
    semsg(_(msg), vname, class_name);
    if (did_alloc)
	vim_free(vname);
}


    static int
do_lock_var(
    lval_T	*lp,
    char_u	*name_end,
    exarg_T	*eap,
    int		deep,
    void	*cookie UNUSED)
{
    int		lock = eap->cmdidx == CMD_lockvar;
    int		ret = OK;
    int		cc;
    dictitem_T	*di;

#ifdef LOG_LOCKVAR
    ch_log(NULL, "LKVAR: do_lock_var(): name %s, is_root %d", lp->ll_name, lp->ll_is_root);
#endif

    if (lp->ll_tv == NULL)
    {
	cc = *name_end;
	*name_end = NUL;
	if (*lp->ll_name == '$')
	{
	    semsg(_(e_cannot_lock_or_unlock_variable_str), lp->ll_name);
	    ret = FAIL;
	}
	else
	{
	    
	    di = find_var(lp->ll_name, NULL, TRUE);
	    if (di == NULL)
	    {
		if (in_vim9script())
		    semsg(_(e_cannot_find_variable_to_unlock_str),
								  lp->ll_name);
		ret = FAIL;
	    }
	    else
	    {
		if ((di->di_flags & DI_FLAGS_FIX)
			    && di->di_tv.v_type != VAR_DICT
			    && di->di_tv.v_type != VAR_LIST)
		{
		    
		    
		    semsg(_(e_cannot_lock_or_unlock_variable_str), lp->ll_name);
		    ret = FAIL;
		}
		else
		{
		    if (in_vim9script())
		    {
			svar_T  *sv = find_typval_in_script(&di->di_tv,
								     0, FALSE);

			if (sv != NULL && sv->sv_const != 0)
			{
			    semsg(_(e_cannot_change_readonly_variable_str),
								  lp->ll_name);
			    ret = FAIL;
			}
		    }

		    if (ret == OK)
		    {
			if (lock)
			    di->di_flags |= DI_FLAGS_LOCK;
			else
			    di->di_flags &= ~DI_FLAGS_LOCK;
			if (deep != 0)
			    item_lock(&di->di_tv, deep, lock, FALSE);
		    }
		}
	    }
	}
	*name_end = cc;
    }
    else if (deep == 0 && lp->ll_object == NULL && lp->ll_class == NULL)
    {
	
    }
    else if (lp->ll_is_root)
	
	item_lock(lp->ll_tv, deep, lock, FALSE);
    else if (lp->ll_range)
    {
	listitem_T    *li = lp->ll_li;

	
	while (li != NULL && (lp->ll_empty2 || lp->ll_n2 >= lp->ll_n1))
	{
	    item_lock(&li->li_tv, deep, lock, FALSE);
	    li = li->li_next;
	    ++lp->ll_n1;
	}
    }
    else if (lp->ll_list != NULL)
	
	item_lock(&lp->ll_li->li_tv, deep, lock, FALSE);
    else if (lp->ll_object != NULL)  
    {
	
	report_lockvar_member(e_cannot_lock_object_variable_str, lp);
	ret = FAIL;
    }
    else if (lp->ll_class != NULL)
    {
	
	report_lockvar_member(e_cannot_lock_class_variable_str, lp);
	ret = FAIL;
    }
    else
    {
	
	if (lp->ll_di == NULL)
	{
	    emsg(_(e_dictionary_required));
	    ret = FAIL;
	}
	else
	    item_lock(&lp->ll_di->di_tv, deep, lock, FALSE);
    }

    return ret;
}


    void
item_lock(typval_T *tv, int deep, int lock, int check_refcount)
{
    static int	recurse = 0;
    list_T	*l;
    listitem_T	*li;
    dict_T	*d;
    blob_T	*b;
    hashitem_T	*hi;
    int		todo;

#ifdef LOG_LOCKVAR
    ch_log(NULL, "LKVAR: item_lock(): type %s", vartype_name(tv->v_type));
#endif

    if (recurse >= DICT_MAXNEST)
    {
	emsg(_(e_variable_nested_too_deep_for_unlock));
	return;
    }
    if (deep == 0)
	return;
    ++recurse;

    
    if (lock)
	tv->v_lock |= VAR_LOCKED;
    else
	tv->v_lock &= ~VAR_LOCKED;

    switch (tv->v_type)
    {
	case VAR_UNKNOWN:
	case VAR_ANY:
	case VAR_VOID:
	case VAR_NUMBER:
	case VAR_BOOL:
	case VAR_STRING:
	case VAR_FUNC:
	case VAR_PARTIAL:
	case VAR_FLOAT:
	case VAR_SPECIAL:
	case VAR_JOB:
	case VAR_CHANNEL:
	case VAR_INSTR:
	case VAR_CLASS:
	case VAR_OBJECT:
	case VAR_TYPEALIAS:
	    break;

	case VAR_BLOB:
	    if ((b = tv->vval.v_blob) != NULL
				    && !(check_refcount && b->bv_refcount > 1))
	    {
		if (lock)
		    b->bv_lock |= VAR_LOCKED;
		else
		    b->bv_lock &= ~VAR_LOCKED;
	    }
	    break;
	case VAR_LIST:
	    if ((l = tv->vval.v_list) != NULL
				    && !(check_refcount && l->lv_refcount > 1))
	    {
		if (lock)
		    l->lv_lock |= VAR_LOCKED;
		else
		    l->lv_lock &= ~VAR_LOCKED;
		if (deep < 0 || deep > 1)
		{
		    if (l->lv_first == &range_list_item)
			l->lv_lock |= VAR_ITEMS_LOCKED;
		    else
		    {
			
			CHECK_LIST_MATERIALIZE(l);
			FOR_ALL_LIST_ITEMS(l, li) item_lock(&li->li_tv,
					       deep - 1, lock, check_refcount);
		    }
		}
	    }
	    break;
	case VAR_DICT:
	    if ((d = tv->vval.v_dict) != NULL
				    && !(check_refcount && d->dv_refcount > 1))
	    {
		if (lock)
		    d->dv_lock |= VAR_LOCKED;
		else
		    d->dv_lock &= ~VAR_LOCKED;
		if (deep < 0 || deep > 1)
		{
		    
		    todo = (int)d->dv_hashtab.ht_used;
		    FOR_ALL_HASHTAB_ITEMS(&d->dv_hashtab, hi, todo)
		    {
			if (!HASHITEM_EMPTY(hi))
			{
			    --todo;
			    item_lock(&HI2DI(hi)->di_tv, deep - 1, lock,
							       check_refcount);
			}
		    }
		}
	    }
    }
    --recurse;
}

#if (defined(FEAT_MENU) && defined(FEAT_MULTI_LANG)) || defined(PROTO)

    void
del_menutrans_vars(void)
{
    hashitem_T	*hi;
    int		todo;

    hash_lock(&globvarht);
    todo = (int)globvarht.ht_used;
    for (hi = globvarht.ht_array; todo > 0 && !got_int; ++hi)
    {
	if (!HASHITEM_EMPTY(hi))
	{
	    --todo;
	    if (STRNCMP(HI2DI(hi)->di_key, "menutrans_", 10) == 0)
		delete_var(&globvarht, hi);
	}
    }
    hash_unlock(&globvarht);
}
#endif



static char_u	*varnamebuf = NULL;
static int	varnamebuflen = 0;


    char_u *
cat_prefix_varname(int prefix, char_u *name)
{
    int		len;

    len = (int)STRLEN(name) + 3;
    if (len > varnamebuflen)
    {
	vim_free(varnamebuf);
	len += 10;			
	varnamebuf = alloc(len);
	if (varnamebuf == NULL)
	{
	    varnamebuflen = 0;
	    return NULL;
	}
	varnamebuflen = len;
    }
    *varnamebuf = prefix;
    varnamebuf[1] = ':';
    STRCPY(varnamebuf + 2, name);
    return varnamebuf;
}


    char_u *
get_user_var_name(expand_T *xp, int idx)
{
    static long_u	gdone;
    static long_u	bdone;
    static long_u	wdone;
    static long_u	tdone;
    static int		vidx;
    static hashitem_T	*hi;
    hashtab_T		*ht;

    if (idx == 0)
    {
	gdone = bdone = wdone = vidx = 0;
	tdone = 0;
    }

    
    if (gdone < globvarht.ht_used)
    {
	if (gdone++ == 0)
	    hi = globvarht.ht_array;
	else
	    ++hi;
	while (HASHITEM_EMPTY(hi))
	    ++hi;
	if (STRNCMP("g:", xp->xp_pattern, 2) == 0)
	    return cat_prefix_varname('g', hi->hi_key);
	return hi->hi_key;
    }

    
    ht = &prevwin_curwin()->w_buffer->b_vars->dv_hashtab;
    if (bdone < ht->ht_used)
    {
	if (bdone++ == 0)
	    hi = ht->ht_array;
	else
	    ++hi;
	while (HASHITEM_EMPTY(hi))
	    ++hi;
	return cat_prefix_varname('b', hi->hi_key);
    }

    
    ht = &prevwin_curwin()->w_vars->dv_hashtab;
    if (wdone < ht->ht_used)
    {
	if (wdone++ == 0)
	    hi = ht->ht_array;
	else
	    ++hi;
	while (HASHITEM_EMPTY(hi))
	    ++hi;
	return cat_prefix_varname('w', hi->hi_key);
    }

    
    ht = &curtab->tp_vars->dv_hashtab;
    if (tdone < ht->ht_used)
    {
	if (tdone++ == 0)
	    hi = ht->ht_array;
	else
	    ++hi;
	while (HASHITEM_EMPTY(hi))
	    ++hi;
	return cat_prefix_varname('t', hi->hi_key);
    }

    
    if (vidx < VV_LEN)
	return cat_prefix_varname('v', (char_u *)vimvars[vidx++].vv_name);

    VIM_CLEAR(varnamebuf);
    varnamebuflen = 0;
    return NULL;
}

    char *
get_var_special_name(int nr)
{
    switch (nr)
    {
	case VVAL_FALSE: return in_vim9script() ? "false" : "v:false";
	case VVAL_TRUE:  return in_vim9script() ? "true" : "v:true";
	case VVAL_NULL:  return in_vim9script() ? "null" : "v:null";
	case VVAL_NONE:  return "v:none";
    }
    internal_error("get_var_special_name()");
    return "42";
}


    dict_T *
get_globvar_dict(void)
{
    return &globvardict;
}


    hashtab_T *
get_globvar_ht(void)
{
    return &globvarht;
}


    dict_T *
get_vimvar_dict(void)
{
    return &vimvardict;
}


    int
find_vim_var(char_u *name, int *di_flags)
{
    dictitem_T	    *di = find_var_in_ht(&vimvarht, 0, name, TRUE);
    struct vimvar   *vv;

    if (di == NULL)
	return -1;
    *di_flags = di->di_flags;
    vv = (struct vimvar *)((char *)di - offsetof(vimvar_T, vv_di));
    return (int)(vv - vimvars);
}



    void
set_vim_var_type(int idx, vartype_T type)
{
    vimvars[idx].vv_tv_type = type;
}


    void
set_vim_var_nr(int idx, varnumber_T val)
{
    vimvars[idx].vv_nr = val;
}

    char *
get_vim_var_name(int idx)
{
    return vimvars[idx].vv_name;
}


    typval_T *
get_vim_var_tv(int idx)
{
    return &vimvars[idx].vv_tv;
}

    type_T *
get_vim_var_type(int idx, garray_T *type_list)
{
    if (vimvars[idx].vv_type != NULL)
	return vimvars[idx].vv_type;
    return typval2type_vimvar(&vimvars[idx].vv_tv, type_list);
}


    int
set_vim_var_tv(int idx, typval_T *tv)
{
    if (vimvars[idx].vv_tv_type != tv->v_type)
    {
	emsg(_(e_type_mismatch_for_v_variable));
	clear_tv(tv);
	return FAIL;
    }
    
    if (vimvars[idx].vv_flags & VV_RO)
    {
	semsg(_(e_cannot_change_readonly_variable_str), vimvars[idx].vv_name);
	return FAIL;
    }
    if (sandbox && (vimvars[idx].vv_flags & VV_RO_SBX))
    {
	semsg(_(e_cannot_set_variable_in_sandbox_str), vimvars[idx].vv_name);
	return FAIL;
    }
    clear_tv(&vimvars[idx].vv_di.di_tv);
    vimvars[idx].vv_di.di_tv = *tv;
    return OK;
}


    varnumber_T
get_vim_var_nr(int idx)
{
    return vimvars[idx].vv_nr;
}


    char_u *
get_vim_var_str(int idx)
{
    return tv_get_string(&vimvars[idx].vv_tv);
}


    list_T *
get_vim_var_list(int idx)
{
    return vimvars[idx].vv_list;
}


    dict_T *
get_vim_var_dict(int idx)
{
    return vimvars[idx].vv_dict;
}


    void
set_vim_var_char(int c)
{
    char_u	buf[MB_MAXBYTES + 1];

    if (has_mbyte)
	buf[(*mb_char2bytes)(c, buf)] = NUL;
    else
    {
	buf[0] = c;
	buf[1] = NUL;
    }
    set_vim_var_string(VV_CHAR, buf, -1);
}


    void
set_vcount(
    int	count,
    int	count1,
    int		set_prevcount)
{
    if (set_prevcount)
	vimvars[VV_PREVCOUNT].vv_nr = vimvars[VV_COUNT].vv_nr;
    vimvars[VV_COUNT].vv_nr = count;
    vimvars[VV_COUNT1].vv_nr = count1;
}


    void
save_vimvars(vimvars_save_T *vvsave)
{
    vvsave->vv_prevcount = vimvars[VV_PREVCOUNT].vv_nr;
    vvsave->vv_count = vimvars[VV_COUNT].vv_nr;
    vvsave->vv_count1 = vimvars[VV_COUNT1].vv_nr;
}


    void
restore_vimvars(vimvars_save_T *vvsave)
{
    vimvars[VV_PREVCOUNT].vv_nr = vvsave->vv_prevcount;
    vimvars[VV_COUNT].vv_nr = vvsave->vv_count;
    vimvars[VV_COUNT1].vv_nr = vvsave->vv_count1;
}


    void
set_vim_var_string(
    int		idx,
    char_u	*val,
    int		len)	    
{
    clear_tv(&vimvars[idx].vv_di.di_tv);
    vimvars[idx].vv_tv_type = VAR_STRING;
    if (val == NULL)
	vimvars[idx].vv_str = NULL;
    else if (len == -1)
	vimvars[idx].vv_str = vim_strsave(val);
    else
	vimvars[idx].vv_str = vim_strnsave(val, len);
}


    void
set_vim_var_list(int idx, list_T *val)
{
    clear_tv(&vimvars[idx].vv_di.di_tv);
    vimvars[idx].vv_tv_type = VAR_LIST;
    vimvars[idx].vv_list = val;
    if (val != NULL)
	++val->lv_refcount;
}


    void
set_vim_var_dict(int idx, dict_T *val)
{
    clear_tv(&vimvars[idx].vv_di.di_tv);
    vimvars[idx].vv_tv_type = VAR_DICT;
    vimvars[idx].vv_dict = val;
    if (val == NULL)
	return;

    ++val->dv_refcount;
    dict_set_items_ro(val);
}


    void
set_argv_var(char **argv, int argc)
{
    list_T	*l = list_alloc();
    int		i;

    if (l == NULL)
	getout(1);
    l->lv_lock = VAR_FIXED;
    for (i = 0; i < argc; ++i)
    {
	if (list_append_string(l, (char_u *)argv[i], -1) == FAIL)
	    getout(1);
	l->lv_u.mat.lv_last->li_tv.v_lock = VAR_FIXED;
    }
    set_vim_var_list(VV_ARGV, l);
}


    void
reset_reg_var(void)
{
    int regname = 0;

    
    
#ifdef FEAT_CLIPBOARD
    adjust_clip_reg(&regname);
#endif
    set_reg_var(regname);
}


    void
set_reg_var(int c)
{
    char_u	regname;

    if (c == 0 || c == ' ')
	regname = '"';
    else
	regname = c;
    
    if (vimvars[VV_REG].vv_str == NULL || vimvars[VV_REG].vv_str[0] != c)
	set_vim_var_string(VV_REG, &regname, 1);
}


    char_u *
v_exception(char_u *oldval)
{
    if (oldval == NULL)
	return vimvars[VV_EXCEPTION].vv_str;

    vimvars[VV_EXCEPTION].vv_str = oldval;
    return NULL;
}


    char_u *
v_throwpoint(char_u *oldval)
{
    if (oldval == NULL)
	return vimvars[VV_THROWPOINT].vv_str;

    vimvars[VV_THROWPOINT].vv_str = oldval;
    return NULL;
}


    char_u *
set_cmdarg(exarg_T *eap, char_u *oldarg)
{
    char_u	*oldval;
    char_u	*newval;
    unsigned	len;

    oldval = vimvars[VV_CMDARG].vv_str;
    if (eap == NULL)
    {
	vim_free(oldval);
	vimvars[VV_CMDARG].vv_str = oldarg;
	return NULL;
    }

    if (eap->force_bin == FORCE_BIN)
	len = 6;
    else if (eap->force_bin == FORCE_NOBIN)
	len = 8;
    else
	len = 0;

    if (eap->read_edit)
	len += 7;

    if (eap->force_ff != 0)
	len += 10; 
    if (eap->force_enc != 0)
	len += (unsigned)STRLEN(eap->cmd + eap->force_enc) + 7;
    if (eap->bad_char != 0)
	len += 7 + 4;  

    newval = alloc(len + 1);
    if (newval == NULL)
	return NULL;

    if (eap->force_bin == FORCE_BIN)
	sprintf((char *)newval, " ++bin");
    else if (eap->force_bin == FORCE_NOBIN)
	sprintf((char *)newval, " ++nobin");
    else
	*newval = NUL;

    if (eap->read_edit)
	STRCAT(newval, " ++edit");

    if (eap->force_ff != 0)
	sprintf((char *)newval + STRLEN(newval), " ++ff=%s",
						eap->force_ff == 'u' ? "unix"
						: eap->force_ff == 'd' ? "dos"
						: "mac");
    if (eap->force_enc != 0)
	sprintf((char *)newval + STRLEN(newval), " ++enc=%s",
					       eap->cmd + eap->force_enc);
    if (eap->bad_char == BAD_KEEP)
	STRCPY(newval + STRLEN(newval), " ++bad=keep");
    else if (eap->bad_char == BAD_DROP)
	STRCPY(newval + STRLEN(newval), " ++bad=drop");
    else if (eap->bad_char != 0)
	sprintf((char *)newval + STRLEN(newval), " ++bad=%c", eap->bad_char);
    vimvars[VV_CMDARG].vv_str = newval;
    return oldval;
}


    int
eval_variable(
    char_u	*name,
    int		len,		
    scid_T	sid,		
    typval_T	*rettv,		
    dictitem_T	**dip,		
    int		flags)		
{
    int		ret = OK;
    typval_T	*tv = NULL;
    int		found = FALSE;
    hashtab_T	*ht = NULL;
    int		cc = 0;
    type_T	*type = NULL;

    if (len > 0)
    {
	
	cc = name[len];
	name[len] = NUL;
    }

    
    if ((sid == 0) && (tv = lookup_debug_var(name)) == NULL)
    {
	
	dictitem_T	*v = find_var(name, &ht, flags & EVAL_VAR_NOAUTOLOAD);

	if (v != NULL)
	{
	    tv = &v->di_tv;
	    if (dip != NULL)
		*dip = v;
	}
	else
	    ht = NULL;
    }

    if (tv == NULL && (in_vim9script() || STRNCMP(name, "s:", 2) == 0))
    {
	imported_T  *import = NULL;
	char_u	    *p = STRNCMP(name, "s:", 2) == 0 ? name + 2 : name;

	if (sid == 0)
	    import = find_imported(p, 0, TRUE);

	
	if (import != NULL || sid != 0)
	{
	    if ((flags & EVAL_VAR_IMPORT) == 0)
	    {
		if (SCRIPT_ID_VALID(sid))
		{
		    ht = &SCRIPT_VARS(sid);
		    if (ht != NULL)
		    {
			dictitem_T *v = find_var_in_ht(ht, 0, name,
						  flags & EVAL_VAR_NOAUTOLOAD);

			if (v != NULL)
			{
			    tv = &v->di_tv;
			    if (dip != NULL)
				*dip = v;
			}
			else
			    ht = NULL;
		    }
		}
		else
		{
		    if (flags & EVAL_VAR_VERBOSE)
			semsg(_(e_expected_dot_after_name_str), name);
		    ret = FAIL;
		}
	    }
	    else
	    {
		if (rettv != NULL)
		{
		    
		    rettv->v_type = VAR_ANY;
		    rettv->vval.v_number = sid != 0 ? sid : import->imp_sid;
		}
		found = TRUE;
	    }
	}
	else if (in_vim9script() && (flags & EVAL_VAR_NO_FUNC) == 0)
	{
	    int	    has_g_prefix = STRNCMP(name, "g:", 2) == 0;
	    ufunc_T *ufunc = find_func(name, FALSE);

	    
	    
	    
	    if (ufunc != NULL && (has_g_prefix
					    || !func_requires_g_prefix(ufunc)))
	    {
		found = TRUE;
		if (rettv != NULL)
		{
		    rettv->v_type = VAR_FUNC;
		    if (has_g_prefix)
			
			
			rettv->vval.v_string = vim_strsave(name);
		    else
			rettv->vval.v_string = vim_strsave(ufunc->uf_name);
		    if (rettv->vval.v_string != NULL)
			func_ref(ufunc->uf_name);
		}
	    }
	}
    }

    if (!found)
    {
	if (tv == NULL)
	{
	    if (rettv != NULL && (flags & EVAL_VAR_VERBOSE))
		semsg(_(e_undefined_variable_str), name);
	    ret = FAIL;
	}
	else if (rettv != NULL)
	{
	    svar_T  *sv = NULL;
	    int	    was_assigned = FALSE;

	    if (ht != NULL && ht == get_script_local_ht()
		    && tv != &SCRIPT_SV(current_sctx.sc_sid)->sv_var.di_tv)
	    {
		sv = find_typval_in_script(tv, 0, TRUE);
		if (sv != NULL)
		{
		    type = sv->sv_type;
		    was_assigned = sv->sv_flags & SVFLAG_ASSIGNED;
		}
	    }

	    if ((tv->v_type == VAR_TYPEALIAS || tv->v_type == VAR_CLASS)
		    && sid != 0)
	    {
		
		
		sv = find_typval_in_script(tv, sid, TRUE);
		if (sv == NULL)
		{
		    ret = FAIL;
		    goto done;
		}
		if ((sv->sv_flags & SVFLAG_EXPORTED) == 0)
		{
		    semsg(_(e_item_not_exported_in_script_str), name);
		    ret = FAIL;
		    goto done;
		}
	    }

	    
	    
	    
	    if (ht != &globvarht)
	    {
		if (tv->v_type == VAR_DICT && tv->vval.v_dict == NULL
					    && ((type != NULL && !was_assigned)
							  || !in_vim9script()))
		{
		    tv->vval.v_dict = dict_alloc();
		    if (tv->vval.v_dict != NULL)
		    {
			++tv->vval.v_dict->dv_refcount;
			tv->vval.v_dict->dv_type = alloc_type(type);
			if (sv != NULL)
			    sv->sv_flags |= SVFLAG_ASSIGNED;
		    }
		}
		else if (tv->v_type == VAR_LIST && tv->vval.v_list == NULL
					    && ((type != NULL && !was_assigned)
							  || !in_vim9script()))
		{
		    tv->vval.v_list = list_alloc();
		    if (tv->vval.v_list != NULL)
		    {
			++tv->vval.v_list->lv_refcount;
			tv->vval.v_list->lv_type = alloc_type(type);
			if (sv != NULL)
			    sv->sv_flags |= SVFLAG_ASSIGNED;
		    }
		}
		else if (tv->v_type == VAR_BLOB && tv->vval.v_blob == NULL
					    && ((type != NULL && !was_assigned)
							  || !in_vim9script()))
		{
		    tv->vval.v_blob = blob_alloc();
		    if (tv->vval.v_blob != NULL)
		    {
			++tv->vval.v_blob->bv_refcount;
			if (sv != NULL)
			    sv->sv_flags |= SVFLAG_ASSIGNED;
		    }
		}
	    }
	    copy_tv(tv, rettv);
	}
    }

done:
    if (len > 0)
	name[len] = cc;

    return ret;
}


    int
eval_variable_import(
    char_u	*name,
    typval_T	*rettv)
{
    char_u  *s = name;
    while (ASCII_ISALNUM(*s) || *s == '_')
	++s;
    int	    len = (int)(s - name);

    if (eval_variable(name, len, 0, rettv, NULL, EVAL_VAR_IMPORT) == FAIL)
	return FAIL;
    if (rettv->v_type == VAR_ANY && *s == '.')
    {
	char_u *ns = s + 1;
	s = ns;
	while (ASCII_ISALNUM(*s) || *s == '_')
	    ++s;
	int sid = rettv->vval.v_number;
	return eval_variable(ns, (int)(s - ns), sid, rettv, NULL, 0);
    }
    return OK;
}



    void
check_vars(char_u *name, int len)
{
    int		cc;
    char_u	*varname;
    hashtab_T	*ht;

    if (eval_lavars_used == NULL)
	return;

    
    cc = name[len];
    name[len] = NUL;

    ht = find_var_ht(name, &varname);
    if (ht == get_funccal_local_ht() || ht == get_funccal_args_ht())
    {
	if (find_var(name, NULL, TRUE) != NULL)
	    *eval_lavars_used = TRUE;
    }

    name[len] = cc;
}


    dictitem_T *
find_var(char_u *name, hashtab_T **htp, int no_autoload)
{
    char_u	*varname;
    hashtab_T	*ht;
    dictitem_T	*ret = NULL;

    ht = find_var_ht(name, &varname);
    if (htp != NULL)
	*htp = ht;
    if (ht == NULL)
	return NULL;
    ret = find_var_in_ht(ht, *name, varname, no_autoload);
    if (ret != NULL)
	return ret;

    
    ret = find_var_in_scoped_ht(name, no_autoload);
    if (ret != NULL)
	return ret;

    
    if (in_vim9script() && name[0] != NUL && name[1] != ':')
    {
	ht = get_script_local_ht();
	if (ht != NULL)
	{
	    ret = find_var_in_ht(ht, *name, varname, no_autoload);
	    if (ret != NULL)
	    {
		if (htp != NULL)
		    *htp = ht;
		return ret;
	    }
	}
    }

    
    return find_var_autoload_prefix(name, 0, htp, NULL);
}


    dictitem_T *
find_var_autoload_prefix(char_u *name, int sid, hashtab_T **htp,
							    char_u **namep)
{
    hashtab_T	*ht;
    dictitem_T	*ret = NULL;
    
    
    int check_sid = sid > 0 ? sid : current_sctx.sc_sid;
    if (SCRIPT_ID_VALID(check_sid)
		   && (in_vim9script() || (name[0] == 's' && name[1] == ':')))
    {
	scriptitem_T *si = SCRIPT_ITEM(check_sid);

	if (si->sn_autoload_prefix != NULL)
	{
	    char_u *base_name = (name[0] == 's' && name[1] == ':')
							     ? name + 2 : name;
	    char_u *auto_name = concat_str(si->sn_autoload_prefix, base_name);

	    if (auto_name != NULL)
	    {
		int free_auto_name = TRUE;
		ht = &globvarht;
		ret = find_var_in_ht(ht, 'g', auto_name, TRUE);
		if (ret != NULL)
		{
		    if (htp != NULL)
			*htp = ht;
		    if (namep != NULL)
		    {
			free_auto_name = FALSE;
			*namep = auto_name;
		    }
		}
		if (free_auto_name)
		    vim_free(auto_name);
	    }
	}
    }

    return ret;
}


    dictitem_T *
find_var_also_in_script(char_u *name, hashtab_T **htp, int no_autoload)
{
    if (STRNCMP(name, "<SNR>", 5) == 0 && SAFE_isdigit(name[5]))
    {
	char_u	    *p = name + 5;
	int	    sid = getdigits(&p);

	if (SCRIPT_ID_VALID(sid) && *p == '_')
	{
	    hashtab_T	*ht = &SCRIPT_VARS(sid);

	    if (ht != NULL)
	    {
		dictitem_T *di = find_var_in_ht(ht, 0, p + 1, no_autoload);

		if (di != NULL)
		{
		    if (htp != NULL)
			*htp = ht;
		    return di;
		}
	    }
	}
    }

    return find_var(name, htp, no_autoload);
}


    dictitem_T *
find_var_in_ht(
    hashtab_T	*ht,
    int		htname,
    char_u	*varname,
    int		no_autoload)
{
    hashitem_T	*hi;

    if (*varname == NUL)
    {
	
	switch (htname)
	{
	    case 's': return &SCRIPT_SV(current_sctx.sc_sid)->sv_var;
	    case 'g': return &globvars_var;
	    case 'v': return &vimvars_var;
	    case 'b': return &curbuf->b_bufvar;
	    case 'w': return &curwin->w_winvar;
	    case 't': return &curtab->tp_winvar;
	    case 'l': return get_funccal_local_var();
	    case 'a': return get_funccal_args_var();
	}
	return NULL;
    }

    hi = hash_find(ht, varname);
    if (HASHITEM_EMPTY(hi))
    {
	
	
	
	
	if (ht == &globvarht && !no_autoload)
	{
	    
	    
	    if (!script_autoload(varname, FALSE) || aborting())
		return NULL;
	    hi = hash_find(ht, varname);
	}
	if (HASHITEM_EMPTY(hi))
	    return NULL;
    }
    return HI2DI(hi);
}


    hashtab_T *
get_script_local_ht(void)
{
    scid_T sid = current_sctx.sc_sid;

    if (SCRIPT_ID_VALID(sid))
	return &SCRIPT_VARS(sid);
    return NULL;
}


    int
lookup_scriptitem(
	char_u	*name,
	size_t	len,
	int	cmd,
	cctx_T	*dummy UNUSED)
{
    hashtab_T	*ht = get_script_local_ht();
    char_u	buffer[30];
    char_u	*p;
    int		res;
    hashitem_T	*hi;
    int		is_global = FALSE;
    char_u	*fname = name;

    if (ht == NULL)
	return FAIL;
    if (len < sizeof(buffer) - 1)
    {
	
	vim_strncpy(buffer, name, len);
	p = buffer;
    }
    else
    {
	p = vim_strnsave(name, len);
	if (p == NULL)
	    return FAIL;
    }

    hi = hash_find(ht, p);
    res = HASHITEM_EMPTY(hi) ? FAIL : OK;

    
    if (res == FAIL && find_var_autoload_prefix(p, 0, NULL, NULL) != NULL)
	res = OK;

    
    if (res == FAIL && find_imported(p, 0, FALSE) != NULL)
	res = OK;
    if (p != buffer)
	vim_free(p);

    
    
    
    if (res != OK)
    {
	p = skipwhite(name + len);

	if (!cmd || name[len] == '(' || (p[0] == '-' && p[1] == '>'))
	{
	    
	    
	    
	    if (name[0] == 'g' && name[1] == ':')
	    {
		is_global = TRUE;
		fname = name + 2;
	    }
	    if (find_func(fname, is_global) != NULL)
		res = OK;
	}
    }

    return res;
}


    hashtab_T *
find_var_ht(char_u *name, char_u **varname)
{
    hashitem_T	*hi;
    hashtab_T	*ht;

    if (name[0] == NUL)
	return NULL;
    if (name[1] != ':')
    {
	
	if (name[0] == ':' || name[0] == AUTOLOAD_CHAR)
	    return NULL;
	*varname = name;

	
	
	if (in_old_script(3))
	{
	    hi = hash_find(&compat_hashtab, name);
	    if (!HASHITEM_EMPTY(hi))
		return &compat_hashtab;
	}

	ht = get_funccal_local_ht();
	if (ht != NULL)
	    return ht;				

	
	
	if (in_vim9script() && vim_strchr(name, AUTOLOAD_CHAR) == NULL)
	{
	    ht = get_script_local_ht();
	    if (ht != NULL)
		return ht;
	}

	return &globvarht;			
    }
    *varname = name + 2;
    if (*name == 'g')				
	return &globvarht;
    
    if (vim_strchr(name + 2, ':') != NULL
			       || vim_strchr(name + 2, AUTOLOAD_CHAR) != NULL)
	return NULL;
    if (*name == 'b')				
	return &curbuf->b_vars->dv_hashtab;
    if (*name == 'w')				
	return &curwin->w_vars->dv_hashtab;
    if (*name == 't')				
	return &curtab->tp_vars->dv_hashtab;
    if (*name == 'v')				
	return &vimvarht;
    if (get_current_funccal() != NULL
	       && get_current_funccal()->fc_func->uf_def_status
							    == UF_NOT_COMPILED)
    {
	
	if (*name == 'a')			
	    return get_funccal_args_ht();
	if (*name == 'l')			
	    return get_funccal_local_ht();
    }
    if (*name == 's')				
    {
	ht = get_script_local_ht();
	if (ht != NULL)
	    return ht;
    }
    return NULL;
}


    char_u *
get_var_value(char_u *name)
{
    dictitem_T	*v;

    v = find_var(name, NULL, FALSE);
    if (v == NULL)
	return NULL;
    return tv_get_string(&v->di_tv);
}


    void
new_script_vars(scid_T id)
{
    scriptvar_T *sv;

    sv = ALLOC_CLEAR_ONE(scriptvar_T);
    if (sv == NULL)
	return;
    init_var_dict(&sv->sv_dict, &sv->sv_var, VAR_SCOPE);
    SCRIPT_ITEM(id)->sn_vars = sv;
}


    void
init_var_dict(dict_T *dict, dictitem_T *dict_var, int scope)
{
    hash_init(&dict->dv_hashtab);
    dict->dv_lock = 0;
    dict->dv_scope = scope;
    dict->dv_refcount = DO_NOT_FREE_CNT;
    dict->dv_copyID = 0;
    dict_var->di_tv.vval.v_dict = dict;
    dict_var->di_tv.v_type = VAR_DICT;
    dict_var->di_tv.v_lock = VAR_FIXED;
    dict_var->di_flags = DI_FLAGS_RO | DI_FLAGS_FIX;
    dict_var->di_key[0] = NUL;
}


    void
unref_var_dict(dict_T *dict)
{
    
    
    dict->dv_refcount -= DO_NOT_FREE_CNT - 1;
    dict_unref(dict);
}


    void
vars_clear(hashtab_T *ht)
{
    vars_clear_ext(ht, TRUE);
}


    void
vars_clear_ext(hashtab_T *ht, int free_val)
{
    int		todo;
    hashitem_T	*hi;
    dictitem_T	*v;

    hash_lock(ht);
    todo = (int)ht->ht_used;
    FOR_ALL_HASHTAB_ITEMS(ht, hi, todo)
    {
	if (!HASHITEM_EMPTY(hi))
	{
	    --todo;

	    
	    
	    
	    v = HI2DI(hi);
	    if (free_val)
		clear_tv(&v->di_tv);
	    if (v->di_flags & DI_FLAGS_ALLOC)
		vim_free(v);
	}
    }
    hash_clear(ht);
    hash_init(ht);
}


    void
delete_var(hashtab_T *ht, hashitem_T *hi)
{
    dictitem_T	*di = HI2DI(hi);

    if (hash_remove(ht, hi, "delete variable") != OK)
	return;

    clear_tv(&di->di_tv);
    vim_free(di);
}


    static void
list_one_var(dictitem_T *v, char *prefix, int *first)
{
    char_u	*tofree;
    char_u	*s;
    char_u	numbuf[NUMBUFLEN];

    s = echo_string(&v->di_tv, &tofree, numbuf, get_copyID());
    list_one_var_a(prefix, v->di_key, v->di_tv.v_type,
					 s == NULL ? (char_u *)"" : s, first);
    vim_free(tofree);
}

    static void
list_one_var_a(
    char	*prefix,
    char_u	*name,
    int		type,
    char_u	*string,
    int		*first)  
{
    
    msg_start();
    msg_puts(prefix);
    if (name != NULL)	
	msg_puts((char *)name);
    msg_putchar(' ');
    msg_advance(22);
    if (type == VAR_NUMBER)
	msg_putchar('#');
    else if (type == VAR_FUNC || type == VAR_PARTIAL)
	msg_putchar('*');
    else if (type == VAR_LIST)
    {
	msg_putchar('[');
	if (*string == '[')
	    ++string;
    }
    else if (type == VAR_DICT)
    {
	msg_putchar('{');
	if (*string == '{')
	    ++string;
    }
    else
	msg_putchar(' ');

    msg_outtrans(string);

    if (type == VAR_FUNC || type == VAR_PARTIAL)
	msg_puts("()");
    if (*first)
    {
	msg_clr_eos();
	*first = FALSE;
    }
}


    int
before_set_vvar(
    char_u	*varname,
    dictitem_T	*di,
    typval_T	*tv,
    int		copy,
    int		*type_error)
{
    if (di->di_tv.v_type == VAR_STRING)
    {
	VIM_CLEAR(di->di_tv.vval.v_string);
	if (copy || tv->v_type != VAR_STRING)
	{
	    char_u *val = tv_get_string(tv);

	    
	    
	    
	    if (di->di_tv.vval.v_string == NULL)
		di->di_tv.vval.v_string = vim_strsave(val);
	}
	else
	{
	    
	    di->di_tv.vval.v_string = tv->vval.v_string;
	    tv->vval.v_string = NULL;
	}
	return FALSE;
    }
    else if (di->di_tv.v_type == VAR_NUMBER)
    {
	di->di_tv.vval.v_number = tv_get_number(tv);
	if (STRCMP(varname, "searchforward") == 0)
	    set_search_direction(di->di_tv.vval.v_number ? '/' : '?');
#ifdef FEAT_SEARCH_EXTRA
	else if (STRCMP(varname, "hlsearch") == 0)
	{
	    no_hlsearch = !di->di_tv.vval.v_number;
	    redraw_all_later(UPD_SOME_VALID);
	}
#endif
	return FALSE;
    }
    else if (di->di_tv.v_type != tv->v_type)
    {
	*type_error = TRUE;
	return FALSE;
    }
    return TRUE;
}


    void
set_var(
    char_u	*name,
    typval_T	*tv,
    int		copy)	    
{
    set_var_const(name, 0, NULL, tv, copy, ASSIGN_DECL, 0);
}


    int
set_var_const(
    char_u	*name,
    scid_T	sid,
    type_T	*type_arg,
    typval_T	*tv_arg,
    int		copy,	    
    int		flags_arg,  
    int		var_idx)    
{
    typval_T	*tv = tv_arg;
    type_T	*type = type_arg;
    typval_T	bool_tv;
    dictitem_T	*di;
    typval_T	*dest_tv;
    char_u	*varname;
    char_u	*name_tofree = NULL;
    hashtab_T	*ht = NULL;
    int		is_script_local;
    int		vim9script = in_vim9script();
    int		var_in_vim9script;
    int		var_in_autoload = FALSE;
    int		flags = flags_arg;
    int		free_tv_arg = !copy;  
    int		rc = FAIL;

    if (sid != 0)
    {
	varname = NULL;
	if (SCRIPT_ID_VALID(sid))
	{
	    char_u	*auto_name = NULL;
	    if (find_var_autoload_prefix(name, sid, &ht, &auto_name) != NULL)
	    {
		var_in_autoload = TRUE;
		varname = auto_name;
		name_tofree = varname;
	    }
	    else
		ht = &SCRIPT_VARS(sid);
	}
	if (varname == NULL)
	    varname = name;
    }
    else
    {
	scriptitem_T	*si;
	char_u		*auto_name = NULL;

	if (in_vim9script()
	    && SCRIPT_ID_VALID(current_sctx.sc_sid)
	    && (si = SCRIPT_ITEM(current_sctx.sc_sid))
					      ->sn_autoload_prefix != NULL
	    && (is_export
		|| find_var_autoload_prefix(name, 0, NULL, &auto_name)
								    != NULL))
	{
	    
	    
	    var_in_autoload = TRUE;
	    varname = auto_name != NULL ? auto_name
		      : concat_str(si->sn_autoload_prefix, name);
	    if (varname == NULL)
		goto failed;
	    name_tofree = varname;
	    ht = &globvarht;
	}
	else
	    ht = find_var_ht(name, &varname);
    }
    if (ht == NULL || *varname == NUL)
    {
	semsg(_(e_illegal_variable_name_str), name);
	goto failed;
    }
    is_script_local = ht == get_script_local_ht() || sid != 0
							    || var_in_autoload;

    if (vim9script
	    && !is_script_local
	    && (flags & (ASSIGN_NO_DECL | ASSIGN_DECL)) == 0
	    && (flags & (ASSIGN_CONST | ASSIGN_FINAL)) == 0
	    && name[1] == ':')
    {
	vim9_declare_error(name);
	goto failed;
    }
    if ((flags & ASSIGN_FOR_LOOP) && is_scoped_variable(name))
	
	flags &= ~ASSIGN_FINAL;

    var_in_vim9script = is_script_local && current_script_is_vim9();
    if (var_in_vim9script && name[0] == '_' && name[1] == NUL)
    {
	
	if ((flags & ASSIGN_UNPACK) == 0)
	    emsg(_(e_cannot_use_underscore_here));
	goto failed;
    }

    di = find_var_in_ht(ht, 0, varname, TRUE);

    if (di == NULL && var_in_vim9script)
    {
	imported_T  *import = find_imported(varname, 0, FALSE);

	if (import != NULL)
	{
	    
	    if ((flags & ASSIGN_NO_DECL) == 0)
	    {
		semsg(_(e_redefining_imported_item_str), name);
		goto failed;
	    }
	    semsg(_(e_cannot_use_str_itself_it_is_imported), name);
	    goto failed;
	}
	if (!in_vim9script())
	{
	    semsg(_(e_cannot_create_vim9_script_variable_in_function_str),
									 name);
	    goto failed;
	}
    }

    
    if (di == NULL)
	di = find_var_in_scoped_ht(name, TRUE);

    if ((tv->v_type == VAR_FUNC || tv->v_type == VAR_PARTIAL)
				  && var_wrong_func_name(name, di == NULL))
	goto failed;

    if (need_convert_to_bool(type, tv))
    {
	
	
	CLEAR_FIELD(bool_tv);
	bool_tv.v_type = VAR_BOOL;
	bool_tv.vval.v_number = tv2bool(tv) ? VVAL_TRUE : VVAL_FALSE;
	tv = &bool_tv;
    }

    if (di != NULL)
    {
	
	if ((di->di_flags & DI_FLAGS_RELOAD) == 0)
	{
	    if ((flags & (ASSIGN_CONST | ASSIGN_FINAL))
					 && (flags & ASSIGN_FOR_LOOP) == 0)
	    {
		emsg(_(e_cannot_modify_existing_variable));
		goto failed;
	    }

	    if (is_script_local && vim9script
			  && (flags & (ASSIGN_NO_DECL | ASSIGN_DECL)) == 0)
	    {
		semsg(_(e_redefining_script_item_str), name);
		goto failed;
	    }

	    if (check_typval_is_value(&di->di_tv) == FAIL)
		goto failed;

	    
	    
	    int type_inplace_modifiable =
		(di->di_tv.v_type == VAR_LIST || di->di_tv.v_type == VAR_BLOB);

	    if (var_in_vim9script && (flags & ASSIGN_FOR_LOOP) == 0
		    && ((flags & ASSIGN_COMPOUND_OP) == 0
			|| !type_inplace_modifiable))
	    {
		where_T where = WHERE_INIT;
		svar_T  *sv = find_typval_in_script(&di->di_tv, sid, TRUE);

		if (sv != NULL)
		{
		    
		    if (var_idx > 0)
		    {
			where.wt_index = var_idx;
			where.wt_kind = WT_VARIABLE;
		    }
		    if (check_script_var_type(sv, tv, name, where) == FAIL)
			goto failed;
		    if (type == NULL)
			type = sv->sv_type;
		    sv->sv_flags |= SVFLAG_ASSIGNED;
		}
	    }

	    
	    
	    if (((flags & ASSIGN_FOR_LOOP) == 0
			&& ((flags & ASSIGN_COMPOUND_OP) == 0
			    || !type_inplace_modifiable))
				 ? var_check_permission(di, name) == FAIL
				 : var_check_ro(di->di_flags, name, FALSE))
		goto failed;
	}
	else
	{
	    
	    di->di_flags &= ~DI_FLAGS_RELOAD;

	    
	    
	    if (var_in_vim9script || var_in_autoload)
		update_vim9_script_var(FALSE, di,
			var_in_autoload ? name : di->di_key, flags,
			tv, &type, (flags & ASSIGN_NO_MEMBER_TYPE) == 0);
	}

	

	
	
	int type_error = FALSE;
	if (ht == &vimvarht
		&& !before_set_vvar(varname, di, tv, copy, &type_error))
	{
	    if (type_error)
		semsg(_(e_setting_v_str_to_value_with_wrong_type), varname);
	    goto failed;
	}

	clear_tv(&di->di_tv);

	if ((flags & ASSIGN_UPDATE_BLOCK_ID)
				       && SCRIPT_ID_VALID(current_sctx.sc_sid))
	{
	    scriptitem_T *si = SCRIPT_ITEM(current_sctx.sc_sid);

	    update_script_var_block_id(name, si->sn_current_block_id);
	}
    }
    else
    {
	
	if (is_script_local && (flags & (ASSIGN_NO_DECL | ASSIGN_DECL)) == 0
	       && lookup_scriptitem(name, STRLEN(name), FALSE, NULL) == OK)
	{
	    semsg(_(e_redefining_script_item_str), name);
	    goto failed;
	}

	
	if (var_in_vim9script && (flags & ASSIGN_NO_DECL))
	{
	    semsg(_(e_unknown_variable_str), name);
	    goto failed;
	}

	if (check_hashtab_frozen(ht, "add variable"))
	    goto failed;

	
	if (ht == &vimvarht || ht == get_funccal_args_ht())
	{
	    semsg(_(e_illegal_variable_name_str), name);
	    goto failed;
	}

	
	
	
	if (!valid_varname(varname, -1, !vim9script
			|| STRNCMP(name, "g:", 2) == 0 || var_in_autoload))
	    goto failed;

	di = alloc(offsetof(dictitem_T, di_key) + STRLEN(varname) + 1);
	if (di == NULL)
	    goto failed;
	STRCPY(di->di_key, varname);
	if (hash_add(ht, DI2HIKEY(di), "add variable") == FAIL)
	{
	    vim_free(di);
	    goto failed;
	}
	di->di_flags = DI_FLAGS_ALLOC;
	if (flags & (ASSIGN_CONST | ASSIGN_FINAL))
	    di->di_flags |= DI_FLAGS_LOCK;

	
	
	if (var_in_vim9script || var_in_autoload)
	    update_vim9_script_var(TRUE, di,
		    var_in_autoload ? name : di->di_key, flags,
			  tv, &type, (flags & ASSIGN_NO_MEMBER_TYPE) == 0);
    }

    dest_tv = &di->di_tv;
    if (copy || tv->v_type == VAR_NUMBER || tv->v_type == VAR_FLOAT)
	copy_tv(tv, dest_tv);
    else
    {
	*dest_tv = *tv;
	dest_tv->v_lock = 0;
	init_tv(tv);
    }
    free_tv_arg = FALSE;

    if (vim9script && type != NULL)
	set_tv_type(dest_tv, type);

    
    
    if (flags & ASSIGN_CONST)
	
	
	
	item_lock(dest_tv, DICT_MAXNEST, TRUE, TRUE);

    rc = OK;

failed:
    vim_free(name_tofree);
    if (free_tv_arg)
	clear_tv(tv_arg);

    return rc;
}


    int
var_check_permission(dictitem_T *di, char_u *name)
{
    if (var_check_ro(di->di_flags, name, FALSE)
		    || value_check_lock(di->di_tv.v_lock, name, FALSE)
		    || var_check_lock(di->di_flags, name, FALSE))
	return FAIL;
    return OK;
}


    int
var_check_ro(int flags, char_u *name, int use_gettext)
{
    if (flags & DI_FLAGS_RO)
    {
	if (name == NULL)
	    emsg(_(e_cannot_change_readonly_variable));
	else
	    semsg(_(e_cannot_change_readonly_variable_str),
				       use_gettext ? (char_u *)_(name) : name);
	return TRUE;
    }
    if ((flags & DI_FLAGS_RO_SBX) && sandbox)
    {
	if (name == NULL)
	    emsg(_(e_cannot_set_variable_in_sandbox));
	else
	    semsg(_(e_cannot_set_variable_in_sandbox_str),
				       use_gettext ? (char_u *)_(name) : name);
	return TRUE;
    }
    return FALSE;
}


    int
var_check_lock(int flags, char_u *name, int use_gettext)
{
    if (flags & DI_FLAGS_LOCK)
    {
	semsg(_(e_variable_is_locked_str),
				       use_gettext ? (char_u *)_(name) : name);
	return TRUE;
    }
    return FALSE;
}


    int
var_check_fixed(int flags, char_u *name, int use_gettext)
{
    if (flags & DI_FLAGS_FIX)
    {
	if (name == NULL)
	    emsg(_(e_cannot_delete_variable));
	else
	    semsg(_(e_cannot_delete_variable_str),
				      use_gettext ? (char_u *)_(name) : name);
	return TRUE;
    }
    return FALSE;
}


    int
var_wrong_func_name(
    char_u *name,    
    int    new_var)  
{
    
    
    
    if (!((vim_strchr((char_u *)"wbt", name[0]) != NULL
		    || (!in_vim9script() && name[0] == 's')) && name[1] == ':')
	    && !ASCII_ISUPPER((name[0] != NUL && name[1] == ':')
						     ? name[2] : name[0])
	    && vim_strchr(name, '#') == NULL)
    {
	semsg(_(e_funcref_variable_name_must_start_with_capital_str), name);
	return TRUE;
    }
    
    
    
    if (new_var && function_exists(name, FALSE))
    {
	semsg(_(e_variable_name_conflicts_with_existing_function_str),
								    name);
	return TRUE;
    }
    return FALSE;
}


    int
value_check_lock(int lock, char_u *name, int use_gettext)
{
    if (lock & VAR_LOCKED)
    {
	if (name == NULL)
	    emsg(_(e_value_is_locked));
	else
	    semsg(_(e_value_is_locked_str),
				       use_gettext ? (char_u *)_(name) : name);
	return TRUE;
    }
    if (lock & VAR_FIXED)
    {
	if (name == NULL)
	    emsg(_(e_cannot_change_value));
	else
	    semsg(_(e_cannot_change_value_of_str),
				       use_gettext ? (char_u *)_(name) : name);
	return TRUE;
    }
    return FALSE;
}


    int
valid_varname(char_u *varname, int len, int autoload)
{
    char_u *p;

    for (p = varname; len < 0 ? *p != NUL : p < varname + len; ++p)
	if (!eval_isnamec1(*p) && (p == varname || !VIM_ISDIGIT(*p))
					 && !(autoload && *p == AUTOLOAD_CHAR))
	{
	    semsg(_(e_illegal_variable_name_str), varname);
	    return FALSE;
	}
    return TRUE;
}


    static void
get_var_from(
    char_u	*varname,
    typval_T	*rettv,
    typval_T	*deftv,	    
    int		htname,	    
    tabpage_T	*tp,	    
    win_T	*win,
    buf_T	*buf)	    
{
    dictitem_T	*v;
    int		done = FALSE;
    switchwin_T	switchwin;
    int		need_switch_win;
    int		do_change_curbuf = buf != NULL && htname == 'b';

    ++emsg_off;

    rettv->v_type = VAR_STRING;
    rettv->vval.v_string = NULL;

    if (varname != NULL && tp != NULL && win != NULL
	    && (htname != 'b' || buf != NULL))
    {
	
	
	
	
	
	need_switch_win = !(tp == curtab && win == curwin) && !do_change_curbuf;
	if (!need_switch_win || switch_win(&switchwin, win, tp, TRUE) == OK)
	{
	    
	    if (*varname == '&' && htname != 't')
	    {
		buf_T	*save_curbuf = curbuf;

		
		if (do_change_curbuf)
		    curbuf = buf;

		if (varname[1] == NUL)
		{
		    
		    dict_T	*opts = get_winbuf_options(htname == 'b');

		    if (opts != NULL)
		    {
			rettv_dict_set(rettv, opts);
			done = TRUE;
		    }
		}
		else if (eval_option(&varname, rettv, TRUE) == OK)
		    
		    done = TRUE;

		curbuf = save_curbuf;
	    }
	    else if (*varname == NUL)
	    {
		
		if (htname == 'b')
		    v = &buf->b_bufvar;
		else if (htname == 'w')
		    v = &win->w_winvar;
		else
		    v = &tp->tp_winvar;
		copy_tv(&v->di_tv, rettv);
		done = TRUE;
	    }
	    else
	    {
		hashtab_T	*ht;

		if (htname == 'b')
		    ht = &buf->b_vars->dv_hashtab;
		else if (htname == 'w')
		    ht = &win->w_vars->dv_hashtab;
		else
		    ht = &tp->tp_vars->dv_hashtab;

		
		v = find_var_in_ht(ht, htname, varname, FALSE);
		if (v != NULL)
		{
		    copy_tv(&v->di_tv, rettv);
		    done = TRUE;
		}
	    }
	}

	if (need_switch_win)
	    
	    restore_win(&switchwin, TRUE);
    }

    if (!done && deftv->v_type != VAR_UNKNOWN)
	
	copy_tv(deftv, rettv);

    --emsg_off;
}


    static void
getwinvar(
    typval_T	*argvars,
    typval_T	*rettv,
    int		off)	    
{
    char_u	*varname;
    tabpage_T	*tp;
    win_T	*win;

    if (off == 1)
	tp = find_tabpage((int)tv_get_number_chk(&argvars[0], NULL));
    else
	tp = curtab;
    win = find_win_by_nr(&argvars[off], tp);
    varname = tv_get_string_chk(&argvars[off + 1]);

    get_var_from(varname, rettv, &argvars[off + 2], 'w', tp, win, NULL);
}


    static void
set_option_from_tv(char_u *varname, typval_T *varp)
{
    int	numval = 0;
    char_u	*strval;
    char_u	nbuf[NUMBUFLEN];
    int		error = FALSE;

    int		opt_idx = findoption(varname);
    if (opt_idx < 0)
    {
	semsg(_(e_unknown_option_str_2), varname);
	return;
    }
    int		opt_p_flags = get_option_flags(opt_idx);

    if (varp->v_type == VAR_BOOL)
    {
	if (opt_p_flags & P_STRING)
	{
	    emsg(_(e_string_required));
	    return;
	}
	numval = (int)varp->vval.v_number;
	strval = (char_u *)"0";  
    }
    else
    {
	if ((opt_p_flags & (P_NUM|P_BOOL))
		&& (!in_vim9script() || varp->v_type != VAR_STRING))
	    numval = (int)tv_get_number_chk(varp, &error);
	if (!error)
	    strval = tv_get_string_buf_chk(varp, nbuf);
    }
    if (!error && strval != NULL)
	set_option_value_give_err(varname, numval, strval, OPT_LOCAL);
}


    static void
setwinvar(typval_T *argvars, int off)
{
    win_T	*win;
    switchwin_T	switchwin;
    int		need_switch_win;
    char_u	*varname, *winvarname;
    typval_T	*varp;
    tabpage_T	*tp = NULL;

    if (check_secure())
	return;

    if (off == 1)
	tp = find_tabpage((int)tv_get_number_chk(&argvars[0], NULL));
    else
	tp = curtab;
    win = find_win_by_nr(&argvars[off], tp);
    varname = tv_get_string_chk(&argvars[off + 1]);
    varp = &argvars[off + 2];

    if (win == NULL || varname == NULL)
	return;

    need_switch_win = !(tp == curtab && win == curwin);
    if (!need_switch_win
	    || switch_win(&switchwin, win, tp, TRUE) == OK)
    {
	if (*varname == '&')
	    set_option_from_tv(varname + 1, varp);
	else
	{
	    winvarname = alloc(STRLEN(varname) + 3);
	    if (winvarname != NULL)
	    {
		STRCPY(winvarname, "w:");
		STRCPY(winvarname + 2, varname);
		set_var(winvarname, varp, TRUE);
		vim_free(winvarname);
	    }
	}
    }
    if (need_switch_win)
	restore_win(&switchwin, TRUE);
}


    void
reset_v_option_vars(void)
{
    set_vim_var_string(VV_OPTION_NEW,  NULL, -1);
    set_vim_var_string(VV_OPTION_OLD,  NULL, -1);
    set_vim_var_string(VV_OPTION_OLDLOCAL, NULL, -1);
    set_vim_var_string(VV_OPTION_OLDGLOBAL, NULL, -1);
    set_vim_var_string(VV_OPTION_TYPE, NULL, -1);
    set_vim_var_string(VV_OPTION_COMMAND, NULL, -1);
}


    void
assert_error(garray_T *gap)
{
    struct vimvar   *vp = &vimvars[VV_ERRORS];

    if (vp->vv_tv_type != VAR_LIST || vimvars[VV_ERRORS].vv_list == NULL)
	
	set_vim_var_list(VV_ERRORS, list_alloc());
    list_append_string(vimvars[VV_ERRORS].vv_list, gap->ga_data, gap->ga_len);
}

    int
var_exists(char_u *var)
{
    char_u	*arg = var;
    char_u	*name;
    char_u	*tofree;
    typval_T    tv;
    int		len = 0;
    int		n = FALSE;

    
    name = var;
    len = get_name_len(&arg, &tofree, TRUE, FALSE);
    if (len > 0)
    {
	if (tofree != NULL)
	    name = tofree;
	n = (eval_variable(name, len, 0, &tv, NULL,
				 EVAL_VAR_NOAUTOLOAD + EVAL_VAR_IMPORT) == OK);
	if (n)
	{
	    
	    arg = skipwhite(arg);
	    n = (handle_subscript(&arg, name, &tv, &EVALARG_EVALUATE,
								 FALSE) == OK);
	    if (n)
		clear_tv(&tv);
	}
    }
    if (*arg != NUL)
	n = FALSE;

    vim_free(tofree);
    return n;
}

static lval_T	*redir_lval = NULL;
#define EVALCMD_BUSY (redir_lval == (lval_T *)&redir_lval)
static garray_T redir_ga;	
static char_u	*redir_endp = NULL;
static char_u	*redir_varname = NULL;

    int
alloc_redir_lval(void)
{
    redir_lval = ALLOC_CLEAR_ONE(lval_T);
    if (redir_lval == NULL)
	return FAIL;
    return OK;
}

    void
clear_redir_lval(void)
{
    VIM_CLEAR(redir_lval);
}

    void
init_redir_ga(void)
{
    ga_init2(&redir_ga, sizeof(char), 500);
}


    int
var_redir_start(char_u *name, int append)
{
    int		called_emsg_before;
    typval_T	tv;

    
    if (!eval_isnamec1(*name))
    {
	emsg(_(e_invalid_argument));
	return FAIL;
    }

    
    redir_varname = vim_strsave(name);
    if (redir_varname == NULL)
	return FAIL;

    if (alloc_redir_lval() == FAIL)
    {
	var_redir_stop();
	return FAIL;
    }

    
    init_redir_ga();

    
    redir_endp = get_lval(redir_varname, NULL, redir_lval, FALSE, FALSE, 0,
							     FNE_CHECK_START);
    if (redir_endp == NULL || redir_lval->ll_name == NULL || *redir_endp != NUL)
    {
	clear_lval(redir_lval);
	if (redir_endp != NULL && *redir_endp != NUL)
	    
	    semsg(_(e_trailing_characters_str), redir_endp);
	else
	    semsg(_(e_invalid_argument_str), name);
	redir_endp = NULL;  
	var_redir_stop();
	return FAIL;
    }

    
    
    called_emsg_before = called_emsg;
    tv.v_type = VAR_STRING;
    tv.vval.v_string = (char_u *)"";
    if (append)
	set_var_lval(redir_lval, redir_endp, &tv, TRUE,
					     ASSIGN_NO_DECL, (char_u *)".", 0);
    else
	set_var_lval(redir_lval, redir_endp, &tv, TRUE,
					     ASSIGN_NO_DECL, (char_u *)"=", 0);
    clear_lval(redir_lval);
    if (called_emsg > called_emsg_before)
    {
	redir_endp = NULL;  
	var_redir_stop();
	return FAIL;
    }

    return OK;
}


    void
var_redir_str(char_u *value, int value_len)
{
    int		len;

    if (redir_lval == NULL)
	return;

    if (value_len == -1)
	len = (int)STRLEN(value);	
    else
	len = value_len;		

    if (ga_grow(&redir_ga, len) == OK)
    {
	mch_memmove((char *)redir_ga.ga_data + redir_ga.ga_len, value, len);
	redir_ga.ga_len += len;
    }
    else
	var_redir_stop();
}


    void
var_redir_stop(void)
{
    typval_T	tv;

    if (EVALCMD_BUSY)
    {
	redir_lval = NULL;
	return;
    }

    if (redir_lval != NULL)
    {
	
	if (redir_endp != NULL)
	{
	    ga_append(&redir_ga, NUL);  
	    tv.v_type = VAR_STRING;
	    tv.vval.v_string = redir_ga.ga_data;
	    
	    
	    redir_endp = get_lval(redir_varname, NULL, redir_lval,
					FALSE, FALSE, 0, FNE_CHECK_START);
	    if (redir_endp != NULL && redir_lval->ll_name != NULL)
		set_var_lval(redir_lval, redir_endp, &tv, FALSE, 0,
							     (char_u *)".", 0);
	    clear_lval(redir_lval);
	}

	
	VIM_CLEAR(redir_ga.ga_data);

	VIM_CLEAR(redir_lval);
    }
    VIM_CLEAR(redir_varname);
}


    char_u *
get_clear_redir_ga(void)
{
    char_u *res;

    ga_append(&redir_ga, NUL);  
    res = redir_ga.ga_data;
    redir_ga.ga_data = NULL;
    return res;
}


    void
f_gettabvar(typval_T *argvars, typval_T *rettv)
{
    char_u	*varname;
    tabpage_T	*tp;
    win_T	*win = NULL;

    if (in_vim9script()
	    && (check_for_number_arg(argvars, 0) == FAIL
		|| check_for_string_arg(argvars, 1) == FAIL))
	return;

    varname = tv_get_string_chk(&argvars[1]);
    tp = find_tabpage((int)tv_get_number_chk(&argvars[0], NULL));
    if (tp != NULL)
	win = tp == curtab || tp->tp_firstwin == NULL ? firstwin
		: tp->tp_firstwin;

    get_var_from(varname, rettv, &argvars[2], 't', tp, win, NULL);
}


    void
f_gettabwinvar(typval_T *argvars, typval_T *rettv)
{
    if (in_vim9script()
	    && (check_for_number_arg(argvars, 0) == FAIL
		|| check_for_number_arg(argvars, 1) == FAIL
		|| check_for_string_arg(argvars, 2) == FAIL))
	return;

    getwinvar(argvars, rettv, 1);
}


    void
f_getwinvar(typval_T *argvars, typval_T *rettv)
{
    if (in_vim9script()
	    && (check_for_number_arg(argvars, 0) == FAIL
		|| check_for_string_arg(argvars, 1) == FAIL))
	return;

    getwinvar(argvars, rettv, 0);
}


    void
f_getbufvar(typval_T *argvars, typval_T *rettv)
{
    char_u	*varname;
    buf_T	*buf;

    if (in_vim9script()
	    && (check_for_buffer_arg(argvars, 0) == FAIL
		|| check_for_string_arg(argvars, 1) == FAIL))
	return;

    varname = tv_get_string_chk(&argvars[1]);
    buf = tv_get_buf_from_arg(&argvars[0]);

    get_var_from(varname, rettv, &argvars[2], 'b', curtab, curwin, buf);
}


    void
f_settabvar(typval_T *argvars, typval_T *rettv UNUSED)
{
    tabpage_T	*save_curtab;
    tabpage_T	*tp;
    tabpage_T	*save_lu_tp;
    char_u	*varname, *tabvarname;
    typval_T	*varp;

    if (check_secure())
	return;

    if (in_vim9script()
	    && (check_for_number_arg(argvars, 0) == FAIL
		|| check_for_string_arg(argvars, 1) == FAIL))
	return;

    tp = find_tabpage((int)tv_get_number_chk(&argvars[0], NULL));
    varname = tv_get_string_chk(&argvars[1]);
    varp = &argvars[2];

    if (varname == NULL || tp == NULL)
	return;

    save_curtab = curtab;
    save_lu_tp = lastused_tabpage;
    goto_tabpage_tp(tp, FALSE, FALSE);

    tabvarname = alloc(STRLEN(varname) + 3);
    if (tabvarname != NULL)
    {
	STRCPY(tabvarname, "t:");
	STRCPY(tabvarname + 2, varname);
	set_var(tabvarname, varp, TRUE);
	vim_free(tabvarname);
    }

    
    if (valid_tabpage(save_curtab))
    {
	goto_tabpage_tp(save_curtab, FALSE, FALSE);
	if (valid_tabpage(save_lu_tp))
	    lastused_tabpage = save_lu_tp;
    }
}


    void
f_settabwinvar(typval_T *argvars, typval_T *rettv UNUSED)
{
    if (in_vim9script()
	    && (check_for_number_arg(argvars, 0) == FAIL
		|| check_for_number_arg(argvars, 1) == FAIL
		|| check_for_string_arg(argvars, 2) == FAIL))
	return;

    setwinvar(argvars, 1);
}


    void
f_setwinvar(typval_T *argvars, typval_T *rettv UNUSED)
{
    if (in_vim9script()
	    && (check_for_number_arg(argvars, 0) == FAIL
		|| check_for_string_arg(argvars, 1) == FAIL))
	return;

    setwinvar(argvars, 0);
}


    void
f_setbufvar(typval_T *argvars, typval_T *rettv UNUSED)
{
    buf_T	*buf;
    char_u	*varname, *bufvarname;
    typval_T	*varp;

    if (check_secure())
	return;

    if (in_vim9script()
	    && (check_for_buffer_arg(argvars, 0) == FAIL
		|| check_for_string_arg(argvars, 1) == FAIL))
	return;

    varname = tv_get_string_chk(&argvars[1]);
    buf = tv_get_buf_from_arg(&argvars[0]);
    varp = &argvars[2];

    if (buf == NULL || varname == NULL)
	return;

    if (*varname == '&')
    {
	aco_save_T	aco;
	
	
	
	linenr_T	old_topline = curwin->w_topline;

	
	aucmd_prepbuf(&aco, buf);
	if (curbuf == buf)
	{
	    
	    set_option_from_tv(varname + 1, varp);

	    
	    aucmd_restbuf(&aco);
	}
	curwin->w_topline = old_topline;
    }
    else
    {
	bufvarname = alloc(STRLEN(varname) + 3);
	if (bufvarname != NULL)
	{
	    buf_T *save_curbuf = curbuf;

	    curbuf = buf;
	    STRCPY(bufvarname, "b:");
	    STRCPY(bufvarname + 2, varname);
	    set_var(bufvarname, varp, TRUE);
	    vim_free(bufvarname);
	    curbuf = save_curbuf;
	}
    }
}


    callback_T
get_callback(typval_T *arg)
{
    callback_T  res;
    int		r = OK;

    CLEAR_FIELD(res);
    if (arg->v_type == VAR_PARTIAL && arg->vval.v_partial != NULL)
    {
	res.cb_partial = arg->vval.v_partial;
	++res.cb_partial->pt_refcount;
	res.cb_name = partial_name(res.cb_partial);
    }
    else
    {
	if (arg->v_type == VAR_STRING && arg->vval.v_string != NULL
					       && SAFE_isdigit(*arg->vval.v_string))
	    r = FAIL;
	else if (arg->v_type == VAR_FUNC || arg->v_type == VAR_STRING)
	{
	    res.cb_name = arg->vval.v_string;
	    if (arg->v_type == VAR_STRING)
	    {
		char_u *name = get_scriptlocal_funcname(arg->vval.v_string);
		if (name != NULL)
		{
		    res.cb_name = name;
		    res.cb_free_name = TRUE;
		}
	    }
	    func_ref(res.cb_name);
	}
	else if (arg->v_type == VAR_NUMBER && arg->vval.v_number == 0)
	    res.cb_name = (char_u *)"";
	else
	    r = FAIL;

	if (r == FAIL)
	{
	    emsg(_(e_invalid_callback_argument));
	    res.cb_name = NULL;
	}
    }
    return res;
}


    void
put_callback(callback_T *cb, typval_T *tv)
{
    if (cb->cb_partial != NULL)
    {
	tv->v_type = VAR_PARTIAL;
	tv->vval.v_partial = cb->cb_partial;
	++tv->vval.v_partial->pt_refcount;
    }
    else
    {
	tv->v_type = VAR_FUNC;
	tv->vval.v_string = vim_strsave(cb->cb_name);
	func_ref(cb->cb_name);
    }
}


    void
set_callback(callback_T *dest, callback_T *src)
{
    if (src->cb_partial == NULL)
    {
	
	dest->cb_name = vim_strsave(src->cb_name);
	dest->cb_free_name = TRUE;
    }
    else
    {
	
	dest->cb_name = src->cb_name;
	dest->cb_free_name = FALSE;
    }
    dest->cb_partial = src->cb_partial;
}


    void
copy_callback(callback_T *dest, callback_T *src)
{
    dest->cb_partial = src->cb_partial;
    if (dest->cb_partial != NULL)
    {
	dest->cb_name = src->cb_name;
	dest->cb_free_name = FALSE;
	++dest->cb_partial->pt_refcount;
    }
    else
    {
	dest->cb_name = vim_strsave(src->cb_name);
	dest->cb_free_name = TRUE;
	func_ref(src->cb_name);
    }
}


    void
expand_autload_callback(callback_T *cb)
{
    char_u	*name;
    char_u	*p;
    imported_T	*import;

    if (!in_vim9script() || cb->cb_name == NULL
	    || (!cb->cb_free_name
	       && (cb->cb_partial == NULL || cb->cb_partial->pt_name == NULL)))
	return;
    if (cb->cb_partial != NULL)
	name = cb->cb_partial->pt_name;
    else
	name = cb->cb_name;
    p = vim_strchr(name, '.');
    if (p == NULL)
	return;

    import = find_imported(name, p - name, FALSE);
    if (import == NULL || !SCRIPT_ID_VALID(import->imp_sid))
	return;

    scriptitem_T *si = SCRIPT_ITEM(import->imp_sid);
    if (si->sn_autoload_prefix == NULL)
	return;

    char_u *newname = concat_str(si->sn_autoload_prefix, p + 1);
    if (newname == NULL)
	return;

    if (cb->cb_partial != NULL)
    {
	if (cb->cb_name == cb->cb_partial->pt_name)
	    cb->cb_name = newname;
	vim_free(cb->cb_partial->pt_name);
	cb->cb_partial->pt_name = newname;
    }
    else
    {
	vim_free(cb->cb_name);
	cb->cb_name = newname;
    }
}


    void
free_callback(callback_T *callback)
{
    if (callback->cb_partial != NULL)
    {
	partial_unref(callback->cb_partial);
	callback->cb_partial = NULL;
    }
    else if (callback->cb_name != NULL)
	func_unref(callback->cb_name);
    if (callback->cb_free_name)
    {
	vim_free(callback->cb_name);
	callback->cb_free_name = FALSE;
    }
    callback->cb_name = NULL;
}

#endif 
