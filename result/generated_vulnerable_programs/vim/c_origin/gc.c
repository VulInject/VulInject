



#include "vim.h"

#if defined(FEAT_EVAL) || defined(PROTO)


static int current_copyID = 0;

static int free_unref_items(int copyID);


    int
get_copyID(void)
{
    current_copyID += COPYID_INC;
    return current_copyID;
}




    int
garbage_collect(int testing)
{
    int		copyID;
    int		abort = FALSE;
    buf_T	*buf;
    win_T	*wp;
    int		did_free = FALSE;
    tabpage_T	*tp;

    if (!testing)
    {
	
	want_garbage_collect = FALSE;
	may_garbage_collect = FALSE;
	garbage_collect_at_exit = FALSE;
    }

    
    if (exestack.ga_maxlen - exestack.ga_len > 500)
    {
	size_t	new_len;
	char_u	*pp;
	int	n;

	
	n = exestack.ga_len / 2;
	if (n < exestack.ga_growsize)
	    n = exestack.ga_growsize;

	
	if (exestack.ga_len + n < exestack.ga_maxlen)
	{
	    new_len = (size_t)exestack.ga_itemsize * (exestack.ga_len + n);
	    pp = vim_realloc(exestack.ga_data, new_len);
	    if (pp == NULL)
		return FAIL;
	    exestack.ga_maxlen = exestack.ga_len + n;
	    exestack.ga_data = pp;
	}
    }

    
    
    copyID = get_copyID();

    

    
    
    
    abort = abort || set_ref_in_previous_funccal(copyID);

    
    abort = abort || garbage_collect_scriptvars(copyID);

    
    FOR_ALL_BUFFERS(buf)
	abort = abort || set_ref_in_item(&buf->b_bufvar.di_tv, copyID,
								  NULL, NULL);

    
    FOR_ALL_TAB_WINDOWS(tp, wp)
	abort = abort || set_ref_in_item(&wp->w_winvar.di_tv, copyID,
								  NULL, NULL);
    
    for (int i = 0; i < AUCMD_WIN_COUNT; ++i)
	if (aucmd_win[i].auc_win != NULL)
	    abort = abort || set_ref_in_item(
		    &aucmd_win[i].auc_win->w_winvar.di_tv, copyID, NULL, NULL);
#ifdef FEAT_PROP_POPUP
    FOR_ALL_POPUPWINS(wp)
	abort = abort || set_ref_in_item(&wp->w_winvar.di_tv, copyID,
								  NULL, NULL);
    FOR_ALL_TABPAGES(tp)
	FOR_ALL_POPUPWINS_IN_TAB(tp, wp)
		abort = abort || set_ref_in_item(&wp->w_winvar.di_tv, copyID,
								  NULL, NULL);
#endif

    
    FOR_ALL_TABPAGES(tp)
	abort = abort || set_ref_in_item(&tp->tp_winvar.di_tv, copyID,
								  NULL, NULL);
    
    abort = abort || garbage_collect_globvars(copyID);

    
    abort = abort || set_ref_in_call_stack(copyID);

    
    abort = abort || set_ref_in_functions(copyID);

    
    abort = abort || set_ref_in_func_args(copyID);

    
    abort = abort || set_ref_in_funcstacks(copyID);

    
    abort = abort || set_ref_in_loopvars(copyID);

    
    abort = abort || garbage_collect_vimvars(copyID);

    
    abort = abort || set_ref_in_buffers(copyID);

    
    abort = abort || set_ref_in_insexpand_funcs(copyID);

    
    abort = abort || set_ref_in_opfunc(copyID);

    
    abort = abort || set_ref_in_tagfunc(copyID);

    
    abort = abort || set_ref_in_im_funcs(copyID);

#ifdef FEAT_LUA
    abort = abort || set_ref_in_lua(copyID);
#endif

#ifdef FEAT_PYTHON
    abort = abort || set_ref_in_python(copyID);
#endif

#ifdef FEAT_PYTHON3
    abort = abort || set_ref_in_python3(copyID);
#endif

#ifdef FEAT_JOB_CHANNEL
    abort = abort || set_ref_in_channel(copyID);
    abort = abort || set_ref_in_job(copyID);
#endif
#ifdef FEAT_NETBEANS_INTG
    abort = abort || set_ref_in_nb_channel(copyID);
#endif

#ifdef FEAT_TIMERS
    abort = abort || set_ref_in_timer(copyID);
#endif

#ifdef FEAT_QUICKFIX
    abort = abort || set_ref_in_quickfix(copyID);
#endif

#ifdef FEAT_TERMINAL
    abort = abort || set_ref_in_term(copyID);
#endif

#ifdef FEAT_PROP_POPUP
    abort = abort || set_ref_in_popups(copyID);
#endif

    abort = abort || set_ref_in_classes(copyID);

    if (!abort)
    {
	
	did_free = free_unref_items(copyID);

	
	free_unref_funccal(copyID, testing);
    }
    else if (p_verbose > 0)
    {
	verb_msg(_("Not enough memory to set references, garbage collection aborted!"));
    }

    return did_free;
}


    static int
free_unref_items(int copyID)
{
    int		did_free = FALSE;

    
    
    
    in_free_unref_items = TRUE;

    

    
    did_free |= dict_free_nonref(copyID);

    
    did_free |= list_free_nonref(copyID);

    
    did_free |= object_free_nonref(copyID);

    
    did_free |= class_free_nonref(copyID);

#ifdef FEAT_JOB_CHANNEL
    
    
    
    did_free |= free_unused_jobs_contents(copyID, COPYID_MASK);

    
    did_free |= free_unused_channels_contents(copyID, COPYID_MASK);
#endif

    
    object_free_items(copyID);
    dict_free_items(copyID);
    list_free_items(copyID);

#ifdef FEAT_JOB_CHANNEL
    
    
    
    free_unused_jobs(copyID, COPYID_MASK);

    
    free_unused_channels(copyID, COPYID_MASK);
#endif

    in_free_unref_items = FALSE;

    return did_free;
}


    int
set_ref_in_ht(hashtab_T *ht, int copyID, list_stack_T **list_stack)
{
    int		todo;
    int		abort = FALSE;
    hashitem_T	*hi;
    hashtab_T	*cur_ht;
    ht_stack_T	*ht_stack = NULL;
    ht_stack_T	*tempitem;

    cur_ht = ht;
    for (;;)
    {
	if (!abort)
	{
	    
	    
	    
	    todo = (int)cur_ht->ht_used;
	    FOR_ALL_HASHTAB_ITEMS(cur_ht, hi, todo)
		if (!HASHITEM_EMPTY(hi))
		{
		    --todo;
		    abort = abort || set_ref_in_item(&HI2DI(hi)->di_tv, copyID,
						       &ht_stack, list_stack);
		}
	}

	if (ht_stack == NULL)
	    break;

	
	cur_ht = ht_stack->ht;
	tempitem = ht_stack;
	ht_stack = ht_stack->prev;
	free(tempitem);
    }

    return abort;
}

#if defined(FEAT_LUA) || defined(FEAT_PYTHON) || defined(FEAT_PYTHON3) \
							|| defined(PROTO)

    int
set_ref_in_dict(dict_T *d, int copyID)
{
    if (d != NULL && d->dv_copyID != copyID)
    {
	d->dv_copyID = copyID;
	return set_ref_in_ht(&d->dv_hashtab, copyID, NULL);
    }
    return FALSE;
}
#endif


    int
set_ref_in_list(list_T *ll, int copyID)
{
    if (ll != NULL && ll->lv_copyID != copyID)
    {
	ll->lv_copyID = copyID;
	return set_ref_in_list_items(ll, copyID, NULL);
    }
    return FALSE;
}


    int
set_ref_in_list_items(list_T *l, int copyID, ht_stack_T **ht_stack)
{
    listitem_T	 *li;
    int		 abort = FALSE;
    list_T	 *cur_l;
    list_stack_T *list_stack = NULL;
    list_stack_T *tempitem;

    cur_l = l;
    for (;;)
    {
	if (!abort && cur_l->lv_first != &range_list_item)
	    
	    
	    
	    for (li = cur_l->lv_first; !abort && li != NULL; li = li->li_next)
		abort = abort || set_ref_in_item(&li->li_tv, copyID,
						       ht_stack, &list_stack);
	if (list_stack == NULL)
	    break;

	
	cur_l = list_stack->list;
	tempitem = list_stack;
	list_stack = list_stack->prev;
	free(tempitem);
    }

    return abort;
}


    int
set_ref_in_callback(callback_T *cb, int copyID)
{
    typval_T tv;

    if (cb->cb_name == NULL || *cb->cb_name == NUL || cb->cb_partial == NULL)
	return FALSE;

    tv.v_type = VAR_PARTIAL;
    tv.vval.v_partial = cb->cb_partial;
    return set_ref_in_item(&tv, copyID, NULL, NULL);
}


    static int
set_ref_in_item_dict(
    dict_T		*dd,
    int			copyID,
    ht_stack_T		**ht_stack,
    list_stack_T	**list_stack)
{
    if (dd == NULL || dd->dv_copyID == copyID)
	return FALSE;

    
    dd->dv_copyID = copyID;
    if (ht_stack == NULL)
	return set_ref_in_ht(&dd->dv_hashtab, copyID, list_stack);

    ht_stack_T *newitem = ALLOC_ONE(ht_stack_T);
    if (newitem == NULL)
	return TRUE;

    newitem->ht = &dd->dv_hashtab;
    newitem->prev = *ht_stack;
    *ht_stack = newitem;

    return FALSE;
}


    static int
set_ref_in_item_list(
    list_T		*ll,
    int			copyID,
    ht_stack_T		**ht_stack,
    list_stack_T	**list_stack)
{
    if (ll == NULL || ll->lv_copyID == copyID)
	return FALSE;

    
    ll->lv_copyID = copyID;
    if (list_stack == NULL)
	return set_ref_in_list_items(ll, copyID, ht_stack);

    list_stack_T *newitem = ALLOC_ONE(list_stack_T);
    if (newitem == NULL)
	return TRUE;

    newitem->list = ll;
    newitem->prev = *list_stack;
    *list_stack = newitem;

    return FALSE;
}


    static int
set_ref_in_item_partial(
    partial_T		*pt,
    int			copyID,
    ht_stack_T		**ht_stack,
    list_stack_T	**list_stack)
{
    if (pt == NULL || pt->pt_copyID == copyID)
	return FALSE;

    
    pt->pt_copyID = copyID;

    int abort = set_ref_in_func(pt->pt_name, pt->pt_func, copyID);

    if (pt->pt_dict != NULL)
    {
	typval_T dtv;

	dtv.v_type = VAR_DICT;
	dtv.vval.v_dict = pt->pt_dict;
	set_ref_in_item(&dtv, copyID, ht_stack, list_stack);
    }

    if (pt->pt_obj != NULL)
    {
	typval_T objtv;

	objtv.v_type = VAR_OBJECT;
	objtv.vval.v_object = pt->pt_obj;
	set_ref_in_item(&objtv, copyID, ht_stack, list_stack);
    }

    for (int i = 0; i < pt->pt_argc; ++i)
	abort = abort || set_ref_in_item(&pt->pt_argv[i], copyID,
		ht_stack, list_stack);
    
    

    return abort;
}

#ifdef FEAT_JOB_CHANNEL

    static int
set_ref_in_item_job(
    job_T		*job,
    int			copyID,
    ht_stack_T		**ht_stack,
    list_stack_T	**list_stack)
{
    typval_T    dtv;

    if (job == NULL || job->jv_copyID == copyID)
	return FALSE;

    job->jv_copyID = copyID;
    if (job->jv_channel != NULL)
    {
	dtv.v_type = VAR_CHANNEL;
	dtv.vval.v_channel = job->jv_channel;
	set_ref_in_item(&dtv, copyID, ht_stack, list_stack);
    }
    if (job->jv_exit_cb.cb_partial != NULL)
    {
	dtv.v_type = VAR_PARTIAL;
	dtv.vval.v_partial = job->jv_exit_cb.cb_partial;
	set_ref_in_item(&dtv, copyID, ht_stack, list_stack);
    }

    return FALSE;
}


    static int
set_ref_in_item_channel(
    channel_T		*ch,
    int			copyID,
    ht_stack_T		**ht_stack,
    list_stack_T	**list_stack)
{
    typval_T    dtv;

    if (ch == NULL || ch->ch_copyID == copyID)
	return FALSE;

    ch->ch_copyID = copyID;
    for (ch_part_T part = PART_SOCK; part < PART_COUNT; ++part)
    {
	for (jsonq_T *jq = ch->ch_part[part].ch_json_head.jq_next;
		jq != NULL; jq = jq->jq_next)
	    set_ref_in_item(jq->jq_value, copyID, ht_stack, list_stack);
	for (cbq_T *cq = ch->ch_part[part].ch_cb_head.cq_next; cq != NULL;
		cq = cq->cq_next)
	    if (cq->cq_callback.cb_partial != NULL)
	    {
		dtv.v_type = VAR_PARTIAL;
		dtv.vval.v_partial = cq->cq_callback.cb_partial;
		set_ref_in_item(&dtv, copyID, ht_stack, list_stack);
	    }
	if (ch->ch_part[part].ch_callback.cb_partial != NULL)
	{
	    dtv.v_type = VAR_PARTIAL;
	    dtv.vval.v_partial = ch->ch_part[part].ch_callback.cb_partial;
	    set_ref_in_item(&dtv, copyID, ht_stack, list_stack);
	}
    }
    if (ch->ch_callback.cb_partial != NULL)
    {
	dtv.v_type = VAR_PARTIAL;
	dtv.vval.v_partial = ch->ch_callback.cb_partial;
	set_ref_in_item(&dtv, copyID, ht_stack, list_stack);
    }
    if (ch->ch_close_cb.cb_partial != NULL)
    {
	dtv.v_type = VAR_PARTIAL;
	dtv.vval.v_partial = ch->ch_close_cb.cb_partial;
	set_ref_in_item(&dtv, copyID, ht_stack, list_stack);
    }

    return FALSE;
}
#endif


    int
set_ref_in_item_class(
    class_T		*cl,
    int			copyID,
    ht_stack_T		**ht_stack,
    list_stack_T	**list_stack)
{
    int abort = FALSE;

    if (cl == NULL || cl->class_copyID == copyID)
	return FALSE;

    cl->class_copyID = copyID;
    if (cl->class_members_tv != NULL)
    {
	
	
	for (int i = 0; !abort && i < cl->class_class_member_count; ++i)
	    abort = abort || set_ref_in_item(
		    &cl->class_members_tv[i],
		    copyID, ht_stack, list_stack);
    }

    for (int i = 0; !abort && i < cl->class_class_function_count; ++i)
	abort = abort || set_ref_in_func(NULL,
		cl->class_class_functions[i], copyID);

    for (int i = 0; !abort && i < cl->class_obj_method_count; ++i)
	abort = abort || set_ref_in_func(NULL,
		cl->class_obj_methods[i], copyID);

    return abort;
}


    static int
set_ref_in_item_object(
    object_T		*obj,
    int			copyID,
    ht_stack_T		**ht_stack,
    list_stack_T	**list_stack)
{
    int abort = FALSE;

    if (obj == NULL || obj->obj_copyID == copyID)
	return FALSE;

    obj->obj_copyID = copyID;

    
    typval_T *mtv = (typval_T *)(obj + 1);
    for (int i = 0; !abort
	    && i < obj->obj_class->class_obj_member_count; ++i)
	abort = abort || set_ref_in_item(mtv + i, copyID,
		ht_stack, list_stack);

    return abort;
}


    int
set_ref_in_item(
    typval_T	    *tv,
    int		    copyID,
    ht_stack_T	    **ht_stack,
    list_stack_T    **list_stack)
{
    int		abort = FALSE;

    switch (tv->v_type)
    {
	case VAR_DICT:
	    return set_ref_in_item_dict(tv->vval.v_dict, copyID,
							 ht_stack, list_stack);

	case VAR_LIST:
	    return set_ref_in_item_list(tv->vval.v_list, copyID,
							 ht_stack, list_stack);

	case VAR_FUNC:
	{
	    abort = set_ref_in_func(tv->vval.v_string, NULL, copyID);
	    break;
	}

	case VAR_PARTIAL:
	    return set_ref_in_item_partial(tv->vval.v_partial, copyID,
							ht_stack, list_stack);

	case VAR_JOB:
#ifdef FEAT_JOB_CHANNEL
	    return set_ref_in_item_job(tv->vval.v_job, copyID,
							 ht_stack, list_stack);
#else
	    break;
#endif

	case VAR_CHANNEL:
#ifdef FEAT_JOB_CHANNEL
	    return set_ref_in_item_channel(tv->vval.v_channel, copyID,
							 ht_stack, list_stack);
#else
	    break;
#endif

	case VAR_CLASS:
	    return set_ref_in_item_class(tv->vval.v_class, copyID,
							 ht_stack, list_stack);

	case VAR_OBJECT:
	    return set_ref_in_item_object(tv->vval.v_object, copyID,
							 ht_stack, list_stack);

	case VAR_UNKNOWN:
	case VAR_ANY:
	case VAR_VOID:
	case VAR_BOOL:
	case VAR_SPECIAL:
	case VAR_NUMBER:
	case VAR_FLOAT:
	case VAR_STRING:
	case VAR_BLOB:
	case VAR_TYPEALIAS:
	case VAR_INSTR:
	    
	    break;
    }

    return abort;
}

#endif
