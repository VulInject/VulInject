



#include "vim.h"

#if defined(FEAT_EVAL) || defined(PROTO)

static char	*get_end_emsg(cstack_T *cstack);




#if 0

# define THROW_ON_ERROR		(!eval_to_number("$VIMNOERRTHROW"))
# define THROW_ON_INTERRUPT	(!eval_to_number("$VIMNOINTTHROW"))
# define THROW_TEST
#else

# define THROW_ON_ERROR		TRUE
# define THROW_ON_ERROR_TRUE
# define THROW_ON_INTERRUPT	TRUE
# define THROW_ON_INTERRUPT_TRUE
#endif


static int cause_abort = FALSE;


    int
aborting(void)
{
    return (did_emsg && force_abort) || got_int || did_throw;
}


    void
update_force_abort(void)
{
    if (cause_abort)
	force_abort = TRUE;
}


    int
should_abort(int retcode)
{
    return ((retcode == FAIL && trylevel != 0 && !emsg_silent) || aborting());
}


    int
aborted_in_try(void)
{
    
    
    return force_abort;
}


    int
cause_errthrow(
    char_u	*mesg,
    int		severe,
    int		*ignore)
{
    msglist_T	*elem;
    msglist_T	**plist;

    
    if (suppress_errthrow)
	return FALSE;

    
    if (!did_emsg)
    {
	cause_abort = force_abort;
	force_abort = FALSE;
    }

    
    if (((trylevel == 0 && !cause_abort) || emsg_silent) && !did_throw)
	return FALSE;

    
    if (mesg == (char_u *)_(e_interrupted))
    {
	*ignore = TRUE;
	return TRUE;
    }

    
    cause_abort = TRUE;

    
    if (did_throw)
    {
	
	
	
	if (current_exception->type == ET_INTERRUPT)
	    got_int = FALSE;
	discard_current_exception();
    }

#ifdef THROW_TEST
    if (!THROW_ON_ERROR)
    {
	
	return FALSE;
    }
    else
#endif
    {
	
	if (msg_list != NULL)
	{
	    plist = msg_list;
	    while (*plist != NULL)
		plist = &(*plist)->next;

	    elem = ALLOC_CLEAR_ONE(msglist_T);
	    if (elem == NULL)
	    {
		suppress_errthrow = TRUE;
		emsg(_(e_out_of_memory));
	    }
	    else
	    {
		elem->msg = (char *)vim_strsave(mesg);
		if (elem->msg == NULL)
		{
		    vim_free(elem);
		    suppress_errthrow = TRUE;
		    emsg(_(e_out_of_memory));
		}
		else
		{
		    elem->next = NULL;
		    elem->throw_msg = NULL;
		    *plist = elem;
		    if (plist == msg_list || severe)
		    {
			char	    *tmsg;

			
			tmsg = elem->msg;
			if (STRNCMP(tmsg, "Vim E", 5) == 0
				&& VIM_ISDIGIT(tmsg[5])
				&& VIM_ISDIGIT(tmsg[6])
				&& VIM_ISDIGIT(tmsg[7])
				&& tmsg[8] == ':'
				&& tmsg[9] == ' ')
			    (*msg_list)->throw_msg = &tmsg[4];
			else
			    (*msg_list)->throw_msg = tmsg;
		    }

		    
		    
		    elem->sfile = estack_sfile(ESTACK_NONE);
		    elem->slnum = SOURCING_LNUM;
		    elem->msg_compiling = estack_compiling;
		}
	    }
	}
	return TRUE;
    }
}


    static void
free_msglist(msglist_T *l)
{
    msglist_T  *messages, *next;

    messages = l;
    while (messages != NULL)
    {
	next = messages->next;
	vim_free(messages->msg);
	vim_free(messages->sfile);
	vim_free(messages);
	messages = next;
    }
}


    void
free_global_msglist(void)
{
    free_msglist(*msg_list);
    *msg_list = NULL;
}


    void
do_errthrow(cstack_T *cstack, char_u *cmdname)
{
    
    if (cause_abort)
    {
	cause_abort = FALSE;
	force_abort = TRUE;
    }

    
    
    if (msg_list == NULL || *msg_list == NULL)
	return;

    if (throw_exception(*msg_list, ET_ERROR, cmdname) == FAIL)
	free_msglist(*msg_list);
    else
    {
	if (cstack != NULL)
	    do_throw(cstack);
	else
	    need_rethrow = TRUE;
    }
    *msg_list = NULL;
}


    int
do_intthrow(cstack_T *cstack)
{
    
    if (!got_int || (trylevel == 0 && !did_throw))
	return FALSE;

#ifdef THROW_TEST	
    if (!THROW_ON_INTERRUPT)
    {
	
	if (did_throw)
	    discard_current_exception();
    }
    else
#endif
    {
	
	if (did_throw)
	{
	    if (current_exception->type == ET_INTERRUPT)
		return FALSE;

	    
	    discard_current_exception();
	}
	if (throw_exception("Vim:Interrupt", ET_INTERRUPT, NULL) != FAIL)
	    do_throw(cstack);
    }

    return TRUE;
}


    char *
get_exception_string(
    void	*value,
    except_type_T type,
    char_u	*cmdname,
    int		*should_free)
{
    char	*ret;
    char	*mesg;
    int		cmdlen;
    char	*p, *val;

    if (type == ET_ERROR)
    {
	*should_free = TRUE;
	mesg = ((msglist_T *)value)->throw_msg;
	if (cmdname != NULL && *cmdname != NUL)
	{
	    cmdlen = (int)STRLEN(cmdname);
	    ret = (char *)vim_strnsave((char_u *)"Vim(",
						4 + cmdlen + 2 + STRLEN(mesg));
	    if (ret == NULL)
		return ret;
	    STRCPY(&ret[4], cmdname);
	    STRCPY(&ret[4 + cmdlen], "):");
	    val = ret + 4 + cmdlen + 2;
	}
	else
	{
	    ret = (char *)vim_strnsave((char_u *)"Vim:", 4 + STRLEN(mesg));
	    if (ret == NULL)
		return ret;
	    val = ret + 4;
	}

	
	
	
	for (p = mesg; ; p++)
	{
	    if (*p == NUL
		    || (*p == 'E'
			&& VIM_ISDIGIT(p[1])
			&& (p[2] == ':'
			    || (VIM_ISDIGIT(p[2])
				&& (p[3] == ':'
				    || (VIM_ISDIGIT(p[3])
					&& p[4] == ':'))))))
	    {
		if (*p == NUL || p == mesg)
		    STRCAT(val, mesg);  
		else
		{
		    
		    if (mesg[0] != '"' || p-2 < &mesg[1] ||
			    p[-2] != '"' || p[-1] != ' ')
			
			continue;

		    STRCAT(val, p);
		    p[-2] = NUL;
		    sprintf((char *)(val + STRLEN(p)), " (%s)", &mesg[1]);
		    p[-2] = '"';
		}
		break;
	    }
	}
    }
    else
    {
	*should_free = FALSE;
	ret = value;
    }

    return ret;
}



    int
throw_exception(void *value, except_type_T type, char_u *cmdname)
{
    except_T	*excp;
    int		should_free;

    
    if (type == ET_USER)
    {
	if (STRNCMP((char_u *)value, "Vim", 3) == 0
		&& (((char_u *)value)[3] == NUL || ((char_u *)value)[3] == ':'
		    || ((char_u *)value)[3] == '('))
	{
	    emsg(_(e_cannot_throw_exceptions_with_vim_prefix));
	    goto fail;
	}
    }

    excp = ALLOC_ONE(except_T);
    if (excp == NULL)
	goto nomem;

    if (type == ET_ERROR)
	
	
	excp->messages = (msglist_T *)value;

    excp->value = get_exception_string(value, type, cmdname, &should_free);
    if (excp->value == NULL && should_free)
	goto nomem;

    excp->type = type;
    if (type == ET_ERROR && ((msglist_T *)value)->sfile != NULL)
    {
	msglist_T *entry = (msglist_T *)value;

	excp->throw_name = entry->sfile;
	entry->sfile = NULL;
	excp->throw_lnum = entry->slnum;
    }
    else
    {
	excp->throw_name = estack_sfile(ESTACK_NONE);
	if (excp->throw_name == NULL)
	    excp->throw_name = vim_strsave((char_u *)"");
	if (excp->throw_name == NULL)
	{
	    if (should_free)
		vim_free(excp->value);
	    goto nomem;
	}
	excp->throw_lnum = SOURCING_LNUM;
    }

    if (p_verbose >= 13 || debug_break_level > 0)
    {
	int	save_msg_silent = msg_silent;

	if (debug_break_level > 0)
	    msg_silent = FALSE;		
	else
	    verbose_enter();
	++no_wait_return;
	if (debug_break_level > 0 || *p_vfile == NUL)
	    msg_scroll = TRUE;	    

	smsg(_("Exception thrown: %s"), excp->value);
	msg_puts("\n");   

	if (debug_break_level > 0 || *p_vfile == NUL)
	    cmdline_row = msg_row;
	--no_wait_return;
	if (debug_break_level > 0)
	    msg_silent = save_msg_silent;
	else
	    verbose_leave();
    }

    current_exception = excp;
    return OK;

nomem:
    vim_free(excp);
    suppress_errthrow = TRUE;
    emsg(_(e_out_of_memory));
fail:
    current_exception = NULL;
    return FAIL;
}


    static void
discard_exception(except_T *excp, int was_finished)
{
    char_u		*saved_IObuff;

    if (current_exception == excp)
	current_exception = NULL;
    if (excp == NULL)
    {
	internal_error("discard_exception()");
	return;
    }

    if (p_verbose >= 13 || debug_break_level > 0)
    {
	int	save_msg_silent = msg_silent;

	saved_IObuff = vim_strsave(IObuff);
	if (debug_break_level > 0)
	    msg_silent = FALSE;		
	else
	    verbose_enter();
	++no_wait_return;
	if (debug_break_level > 0 || *p_vfile == NUL)
	    msg_scroll = TRUE;	    
	smsg(was_finished
		    ? _("Exception finished: %s")
		    : _("Exception discarded: %s"),
		excp->value);
	msg_puts("\n");   
	if (debug_break_level > 0 || *p_vfile == NUL)
	    cmdline_row = msg_row;
	--no_wait_return;
	if (debug_break_level > 0)
	    msg_silent = save_msg_silent;
	else
	    verbose_leave();
	STRCPY(IObuff, saved_IObuff);
	vim_free(saved_IObuff);
    }
    if (excp->type != ET_INTERRUPT)
	vim_free(excp->value);
    if (excp->type == ET_ERROR)
	free_msglist(excp->messages);
    vim_free(excp->throw_name);
    vim_free(excp);
}


    void
discard_current_exception(void)
{
    if (current_exception != NULL)
	discard_exception(current_exception, FALSE);
    did_throw = FALSE;
    need_rethrow = FALSE;
}


    void
catch_exception(except_T *excp)
{
    excp->caught = caught_stack;
    caught_stack = excp;
    set_vim_var_string(VV_EXCEPTION, (char_u *)excp->value, -1);
    if (*excp->throw_name != NUL)
    {
	if (excp->throw_lnum != 0)
	    vim_snprintf((char *)IObuff, IOSIZE, _("%s, line %ld"),
				    excp->throw_name, (int)excp->throw_lnum);
	else
	    vim_snprintf((char *)IObuff, IOSIZE, "%s", excp->throw_name);
	set_vim_var_string(VV_THROWPOINT, IObuff, -1);
    }
    else
	
	set_vim_var_string(VV_THROWPOINT, NULL, -1);

    if (p_verbose >= 13 || debug_break_level > 0)
    {
	int	save_msg_silent = msg_silent;

	if (debug_break_level > 0)
	    msg_silent = FALSE;		
	else
	    verbose_enter();
	++no_wait_return;
	if (debug_break_level > 0 || *p_vfile == NUL)
	    msg_scroll = TRUE;	    

	smsg(_("Exception caught: %s"), excp->value);
	msg_puts("\n");   

	if (debug_break_level > 0 || *p_vfile == NUL)
	    cmdline_row = msg_row;
	--no_wait_return;
	if (debug_break_level > 0)
	    msg_silent = save_msg_silent;
	else
	    verbose_leave();
    }
}


    static void
finish_exception(except_T *excp)
{
    if (excp != caught_stack)
	internal_error("finish_exception()");
    caught_stack = caught_stack->caught;
    if (caught_stack != NULL)
    {
	set_vim_var_string(VV_EXCEPTION, (char_u *)caught_stack->value, -1);
	if (*caught_stack->throw_name != NUL)
	{
	    if (caught_stack->throw_lnum != 0)
		vim_snprintf((char *)IObuff, IOSIZE,
			_("%s, line %ld"), caught_stack->throw_name,
			(int)caught_stack->throw_lnum);
	    else
		vim_snprintf((char *)IObuff, IOSIZE, "%s",
						    caught_stack->throw_name);
	    set_vim_var_string(VV_THROWPOINT, IObuff, -1);
	}
	else
	    
	    
	    set_vim_var_string(VV_THROWPOINT, NULL, -1);
    }
    else
    {
	set_vim_var_string(VV_EXCEPTION, NULL, -1);
	set_vim_var_string(VV_THROWPOINT, NULL, -1);
    }

    
    discard_exception(excp, TRUE);
}


    void
exception_state_save(exception_state_T *estate)
{
    estate->estate_current_exception = current_exception;
    estate->estate_did_throw = did_throw;
    estate->estate_need_rethrow = need_rethrow;
    estate->estate_trylevel = trylevel;
    estate->estate_did_emsg = did_emsg;
}


    void
exception_state_restore(exception_state_T *estate)
{
    
    if (did_throw)
	handle_did_throw();
    current_exception = estate->estate_current_exception;
    did_throw = estate->estate_did_throw;
    need_rethrow = estate->estate_need_rethrow;
    trylevel = estate->estate_trylevel;
    did_emsg = estate->estate_did_emsg;
}


    void
exception_state_clear(void)
{
    current_exception = NULL;
    did_throw = FALSE;
    need_rethrow = FALSE;
    trylevel = 0;
    did_emsg = 0;
}


#define RP_MAKE		0
#define RP_RESUME	1
#define RP_DISCARD	2


    static void
report_pending(int action, int pending, void *value)
{
    char	*mesg;
    char	*s;
    int		save_msg_silent;


    switch (action)
    {
	case RP_MAKE:
	    mesg = _("%s made pending");
	    break;
	case RP_RESUME:
	    mesg = _("%s resumed");
	    break;
	
	default:
	    mesg = _("%s discarded");
	    break;
    }

    switch (pending)
    {
	case CSTP_NONE:
	    return;

	case CSTP_CONTINUE:
	    s = ":continue";
	    break;
	case CSTP_BREAK:
	    s = ":break";
	    break;
	case CSTP_FINISH:
	    s = ":finish";
	    break;
	case CSTP_RETURN:
	    
	    s = (char *)get_return_cmd(value);
	    break;

	default:
	    if (pending & CSTP_THROW)
	    {
		vim_snprintf((char *)IObuff, IOSIZE, mesg, _("Exception"));
		mesg = (char *)vim_strnsave(IObuff, STRLEN(IObuff) + 4);
		STRCAT(mesg, ": %s");
		s = (char *)((except_T *)value)->value;
	    }
	    else if ((pending & CSTP_ERROR) && (pending & CSTP_INTERRUPT))
		s = _("Error and interrupt");
	    else if (pending & CSTP_ERROR)
		s = _("Error");
	    else 
		s = _("Interrupt");
    }

    save_msg_silent = msg_silent;
    if (debug_break_level > 0)
	msg_silent = FALSE;	
    ++no_wait_return;
    msg_scroll = TRUE;		
    smsg(mesg, s);
    msg_puts("\n");   
    cmdline_row = msg_row;
    --no_wait_return;
    if (debug_break_level > 0)
	msg_silent = save_msg_silent;

    if (pending == CSTP_RETURN)
	vim_free(s);
    else if (pending & CSTP_THROW)
	vim_free(mesg);
}


    void
report_make_pending(int pending, void *value)
{
    if (p_verbose >= 14 || debug_break_level > 0)
    {
	if (debug_break_level <= 0)
	    verbose_enter();
	report_pending(RP_MAKE, pending, value);
	if (debug_break_level <= 0)
	    verbose_leave();
    }
}


    static void
report_resume_pending(int pending, void *value)
{
    if (p_verbose >= 14 || debug_break_level > 0)
    {
	if (debug_break_level <= 0)
	    verbose_enter();
	report_pending(RP_RESUME, pending, value);
	if (debug_break_level <= 0)
	    verbose_leave();
    }
}


    static void
report_discard_pending(int pending, void *value)
{
    if (p_verbose >= 14 || debug_break_level > 0)
    {
	if (debug_break_level <= 0)
	    verbose_enter();
	report_pending(RP_DISCARD, pending, value);
	if (debug_break_level <= 0)
	    verbose_leave();
    }
}


    int
cmd_is_name_only(char_u *arg)
{
    char_u  *p = arg;
    char_u  *alias = NULL;
    int	    name_only = FALSE;

    if (*p == '@')
    {
	++p;
	if (*p != NUL)
	    ++p;
    }
    else if (*p == '\'' || *p == '"')
    {
	int	    r;

	if (*p == '"')
	    r = eval_string(&p, NULL, FALSE, FALSE);
	else
	    r = eval_lit_string(&p, NULL, FALSE, FALSE);
	if (r == FAIL)
	    return FALSE;
    }
    else
    {
	if (*p == '&')
	{
	    ++p;
	    if (STRNCMP("l:", p, 2) == 0 || STRNCMP("g:", p, 2) == 0)
		p += 2;
	}
	else if (*p == '$')
	    ++p;
	(void)get_name_len(&p, &alias, FALSE, FALSE);
    }
    name_only = ends_excmd2(arg, skipwhite(p));
    vim_free(alias);
    return name_only;
}


    void
ex_eval(exarg_T *eap)
{
    typval_T	tv;
    evalarg_T	evalarg;
    int		name_only = FALSE;
    int	lnum = SOURCING_LNUM;

    if (in_vim9script())
	name_only = cmd_is_name_only(eap->arg);

    fill_evalarg_from_eap(&evalarg, eap, eap->skip);

    if (eval0(eap->arg, &tv, eap, &evalarg) == OK)
    {
	clear_tv(&tv);
	if (in_vim9script() && name_only
		&& (evalarg.eval_tofree == NULL
		    || ends_excmd2(evalarg.eval_tofree,
					      skipwhite(evalarg.eval_tofree))))
	{
	    SOURCING_LNUM = lnum;
	    semsg(_(e_expression_without_effect_str), eap->arg);
	}
    }

    clear_evalarg(&evalarg, eap);
}


    static void
enter_block(cstack_T *cstack)
{
    ++cstack->cs_idx;
    if (in_vim9script() && current_sctx.sc_sid > 0)
    {
	scriptitem_T *si = SCRIPT_ITEM(current_sctx.sc_sid);

	cstack->cs_script_var_len[cstack->cs_idx] = si->sn_var_vals.ga_len;
	cstack->cs_block_id[cstack->cs_idx] = ++si->sn_last_block_id;
	si->sn_current_block_id = si->sn_last_block_id;
    }
    else
    {
	
	
	cstack->cs_script_var_len[cstack->cs_idx] = 0;
	cstack->cs_block_id[cstack->cs_idx] = 0;
    }
}

    static void
leave_block(cstack_T *cstack)
{
    if (in_vim9script() && SCRIPT_ID_VALID(current_sctx.sc_sid))
    {
	scriptitem_T	*si = SCRIPT_ITEM(current_sctx.sc_sid);
	int		i;
	int		func_defined =
			       cstack->cs_flags[cstack->cs_idx] & CSF_FUNC_DEF;

	for (i = cstack->cs_script_var_len[cstack->cs_idx];
					       i < si->sn_var_vals.ga_len; ++i)
	{
	    svar_T	*sv = ((svar_T *)si->sn_var_vals.ga_data) + i;

	    
	    
	    
	    if (sv->sv_name != NULL)
		
		
		
		hide_script_var(si, i, func_defined);
	}

	if (cstack->cs_idx == 0)
	    si->sn_current_block_id = 0;
	else
	    si->sn_current_block_id = cstack->cs_block_id[cstack->cs_idx - 1];
    }
    --cstack->cs_idx;
}


    void
ex_if(exarg_T *eap)
{
    int		error;
    int		skip;
    int		result;
    cstack_T	*cstack = eap->cstack;

    if (cstack->cs_idx == CSTACK_LEN - 1)
	eap->errmsg = _(e_if_nesting_too_deep);
    else
    {
	enter_block(cstack);
	cstack->cs_flags[cstack->cs_idx] = 0;

	
	skip = did_emsg || got_int || did_throw || (cstack->cs_idx > 0
		&& !(cstack->cs_flags[cstack->cs_idx - 1] & CSF_ACTIVE));

	result = eval_to_bool(eap->arg, &error, eap, skip, FALSE);

	if (!skip && !error)
	{
	    if (result)
		cstack->cs_flags[cstack->cs_idx] = CSF_ACTIVE | CSF_TRUE;
	}
	else
	    
	    cstack->cs_flags[cstack->cs_idx] = CSF_TRUE;
    }
}


    void
ex_endif(exarg_T *eap)
{
    cstack_T	*cstack = eap->cstack;

    if (cmdmod_error(FALSE))
	return;
    did_endif = TRUE;
    if (cstack->cs_idx < 0
	    || (cstack->cs_flags[cstack->cs_idx]
				& (CSF_WHILE | CSF_FOR | CSF_TRY | CSF_BLOCK)))
	eap->errmsg = _(e_endif_without_if);
    else
    {
	
	if (!(cstack->cs_flags[cstack->cs_idx] & CSF_TRUE)
						    && dbg_check_skipped(eap))
	    (void)do_intthrow(cstack);

	leave_block(cstack);
    }
}


    void
ex_else(exarg_T *eap)
{
    int		error;
    int		skip;
    int		result;
    cstack_T	*cstack = eap->cstack;

    
    skip = did_emsg || got_int || did_throw || (cstack->cs_idx > 0
	    && !(cstack->cs_flags[cstack->cs_idx - 1] & CSF_ACTIVE));

    if (cstack->cs_idx < 0
	    || (cstack->cs_flags[cstack->cs_idx]
				& (CSF_WHILE | CSF_FOR | CSF_TRY | CSF_BLOCK)))
    {
	if (eap->cmdidx == CMD_else)
	{
	    eap->errmsg = _(e_else_without_if);
	    return;
	}
	eap->errmsg = _(e_elseif_without_if);
	skip = TRUE;
    }
    else if (cstack->cs_flags[cstack->cs_idx] & CSF_ELSE)
    {
	if (eap->cmdidx == CMD_else)
	{
	    eap->errmsg = _(e_multiple_else);
	    return;
	}
	eap->errmsg = _(e_elseif_after_else);
	skip = TRUE;
    }

    if (cstack->cs_idx >= 0)
    {
	
	
	leave_block(cstack);
	enter_block(cstack);
    }

    
    if (skip || cstack->cs_flags[cstack->cs_idx] & CSF_TRUE)
    {
	if (eap->errmsg == NULL)
	    cstack->cs_flags[cstack->cs_idx] = CSF_TRUE;
	skip = TRUE;	
    }
    else
	cstack->cs_flags[cstack->cs_idx] = CSF_ACTIVE;

    
    if (!skip && dbg_check_skipped(eap) && got_int)
    {
	(void)do_intthrow(cstack);
	skip = TRUE;
    }

    if (eap->cmdidx == CMD_elseif)
    {
	
	
	
	if (skip && *eap->arg != '"' && ends_excmd(*eap->arg))
	    semsg(_(e_invalid_expression_str), eap->arg);
	else
	    result = eval_to_bool(eap->arg, &error, eap, skip, FALSE);

	
	
	
	
	
	if (!skip && !error)
	{
	    if (result)
		cstack->cs_flags[cstack->cs_idx] = CSF_ACTIVE | CSF_TRUE;
	    else
		cstack->cs_flags[cstack->cs_idx] = 0;
	}
	else if (eap->errmsg == NULL)
	    
	    cstack->cs_flags[cstack->cs_idx] = CSF_TRUE;
    }
    else
	cstack->cs_flags[cstack->cs_idx] |= CSF_ELSE;
}


    void
ex_while(exarg_T *eap)
{
    int		error;
    int		skip;
    int		result;
    cstack_T	*cstack = eap->cstack;
    int		prev_cs_flags = 0;

    if (cstack->cs_idx == CSTACK_LEN - 1)
	eap->errmsg = _(e_while_for_nesting_too_deep);
    else
    {
	
	if ((cstack->cs_lflags & CSL_HAD_LOOP) == 0)
	{
	    enter_block(cstack);
	    ++cstack->cs_looplevel;
	    cstack->cs_line[cstack->cs_idx] = -1;
	}
	else
	{
	    if (in_vim9script() && SCRIPT_ID_VALID(current_sctx.sc_sid))
	    {
		scriptitem_T	*si = SCRIPT_ITEM(current_sctx.sc_sid);
		int		i;
		int		first;
		int		func_defined = cstack->cs_flags[cstack->cs_idx]
								& CSF_FUNC_DEF;

		
		
		
		
		
		first = cstack->cs_script_var_len[cstack->cs_idx];
		if (eap->cmdidx == CMD_for)
		{
		    forinfo_T	*fi = cstack->cs_forinfo[cstack->cs_idx];

		    first += fi == NULL || fi->fi_varcount == 0
							 ? 1 : fi->fi_varcount;
		}
		for (i = si->sn_var_vals.ga_len - 1; i >= first; --i)
		{
		    svar_T	*sv = ((svar_T *)si->sn_var_vals.ga_data) + i;

		    
		    
		    
		    if (sv->sv_name != NULL)
			
			
			hide_script_var(si, i, func_defined);
		}

		
		
		
		cstack->cs_block_id[cstack->cs_idx] = ++si->sn_last_block_id;
		si->sn_current_block_id = si->sn_last_block_id;
	    }
	}
	prev_cs_flags = cstack->cs_flags[cstack->cs_idx];
	cstack->cs_flags[cstack->cs_idx] =
			       eap->cmdidx == CMD_while ? CSF_WHILE : CSF_FOR;

	
	skip = did_emsg || got_int || did_throw || (cstack->cs_idx > 0
		&& !(cstack->cs_flags[cstack->cs_idx - 1] & CSF_ACTIVE));
	if (eap->cmdidx == CMD_while)
	{
	    
	    result = eval_to_bool(eap->arg, &error, eap, skip, FALSE);
	}
	else
	{
	    forinfo_T	*fi;
	    evalarg_T	evalarg;

	    
	    fill_evalarg_from_eap(&evalarg, eap, skip);
	    if ((cstack->cs_lflags & CSL_HAD_LOOP) != 0)
	    {
		
		
		fi = cstack->cs_forinfo[cstack->cs_idx];
		error = FALSE;

		
		skip_for_lines(fi, &evalarg);
	    }
	    else
	    {
		int save_lnum = SOURCING_LNUM;

		
		fi = eval_for_line(eap->arg, &error, eap, &evalarg);
		cstack->cs_forinfo[cstack->cs_idx] = fi;

		
		SOURCING_LNUM = save_lnum;
	    }

	    
	    if (!error && fi != NULL && !skip)
		result = next_for_item(fi, eap->arg);
	    else
		result = FALSE;
	    if (fi != NULL)
		
		
		fi->fi_cs_flags |= prev_cs_flags;

	    if (!result)
	    {
		
		
		if (fi != NULL && (fi->fi_cs_flags & CSF_FUNC_DEF))
		    cstack->cs_flags[cstack->cs_idx] |= CSF_FUNC_DEF;

		free_for_info(fi);
		cstack->cs_forinfo[cstack->cs_idx] = NULL;
	    }
	    clear_evalarg(&evalarg, eap);
	}

	
	if (!skip && !error && result)
	{
	    cstack->cs_flags[cstack->cs_idx] |= (CSF_ACTIVE | CSF_TRUE);
	    cstack->cs_lflags ^= CSL_HAD_LOOP;
	}
	else
	{
	    cstack->cs_lflags &= ~CSL_HAD_LOOP;
	    
	    
	    
	    
	    if (!skip && !error)
		cstack->cs_flags[cstack->cs_idx] |= CSF_TRUE;
	}
    }
}


    void
ex_continue(exarg_T *eap)
{
    int		idx;
    cstack_T	*cstack = eap->cstack;

    if (cstack->cs_looplevel <= 0 || cstack->cs_idx < 0)
	eap->errmsg = _(e_continue_without_while_or_for);
    else
    {
	
	
	
	
	idx = cleanup_conditionals(cstack, CSF_WHILE | CSF_FOR, FALSE);
	if (idx >= 0 && (cstack->cs_flags[idx] & (CSF_WHILE | CSF_FOR)))
	{
	    rewind_conditionals(cstack, idx, CSF_TRY, &cstack->cs_trylevel);

	    
	    cstack->cs_lflags |= CSL_HAD_CONT;	
	}
	else
	{
	    
	    
	    cstack->cs_pending[idx] = CSTP_CONTINUE;
	    report_make_pending(CSTP_CONTINUE, NULL);
	}
    }
}


    void
ex_break(exarg_T *eap)
{
    int		idx;
    cstack_T	*cstack = eap->cstack;

    if (cstack->cs_looplevel <= 0 || cstack->cs_idx < 0)
	eap->errmsg = _(e_break_without_while_or_for);
    else
    {
	
	
	
	
	idx = cleanup_conditionals(cstack, CSF_WHILE | CSF_FOR, TRUE);
	if (idx >= 0 && !(cstack->cs_flags[idx] & (CSF_WHILE | CSF_FOR)))
	{
	    cstack->cs_pending[idx] = CSTP_BREAK;
	    report_make_pending(CSTP_BREAK, NULL);
	}
    }
}


    void
ex_endwhile(exarg_T *eap)
{
    cstack_T	*cstack = eap->cstack;
    int		idx;
    char	*err;
    int		csf;
    int		fl;

    if (cmdmod_error(TRUE))
	return;

    if (eap->cmdidx == CMD_endwhile)
    {
	err = e_endwhile_without_while;
	csf = CSF_WHILE;
    }
    else
    {
	err = e_endfor_without_for;
	csf = CSF_FOR;
    }

    if (cstack->cs_looplevel <= 0 || cstack->cs_idx < 0)
	eap->errmsg = _(err);
    else
    {
	fl = cstack->cs_flags[cstack->cs_idx];
	if (!(fl & csf))
	{
	    
	    
	    if (fl & CSF_WHILE)
		eap->errmsg = _(e_using_endfor_with_while);
	    else if (fl & CSF_FOR)
		eap->errmsg = _(e_using_endwhile_with_for);
	}
	if (!(fl & (CSF_WHILE | CSF_FOR)))
	{
	    if (!(fl & CSF_TRY))
		eap->errmsg = _(e_missing_endif);
	    else if (fl & CSF_FINALLY)
		eap->errmsg = _(e_missing_endtry);
	    
	    for (idx = cstack->cs_idx; idx > 0; --idx)
	    {
		fl =  cstack->cs_flags[idx];
		if ((fl & CSF_TRY) && !(fl & CSF_FINALLY))
		{
		    
		    
		    eap->errmsg = _(err);
		    return;
		}
		if (fl & csf)
		    break;
	    }
	    
	    (void)cleanup_conditionals(cstack, CSF_WHILE | CSF_FOR, FALSE);
	    rewind_conditionals(cstack, idx, CSF_TRY, &cstack->cs_trylevel);
	}

	
	else if (cstack->cs_flags[cstack->cs_idx] & CSF_TRUE
		&& !(cstack->cs_flags[cstack->cs_idx] & CSF_ACTIVE)
		&& dbg_check_skipped(eap))
	    (void)do_intthrow(cstack);

	
	
	cstack->cs_lflags |= CSL_HAD_ENDLOOP;
    }
}


    void
ex_block(exarg_T *eap)
{
    cstack_T	*cstack = eap->cstack;

    if (cstack->cs_idx == CSTACK_LEN - 1)
	eap->errmsg = _(e_block_nesting_too_deep);
    else
    {
	enter_block(cstack);
	cstack->cs_flags[cstack->cs_idx] = CSF_BLOCK | CSF_ACTIVE | CSF_TRUE;
    }
}


    void
ex_endblock(exarg_T *eap)
{
    cstack_T	*cstack = eap->cstack;

    if (cstack->cs_idx < 0
	    || (cstack->cs_flags[cstack->cs_idx] & CSF_BLOCK) == 0)
	eap->errmsg = _(e_endblock_without_block);
    else
	leave_block(cstack);
}

    int
inside_block(exarg_T *eap)
{
    cstack_T	*cstack = eap->cstack;
    int		i;

    for (i = 0; i <= cstack->cs_idx; ++i)
	if (cstack->cs_flags[cstack->cs_idx] & CSF_BLOCK)
	    return TRUE;
    return FALSE;
}


    void
ex_throw(exarg_T *eap)
{
    char_u	*arg = eap->arg;
    char_u	*value;

    if (*arg != NUL && *arg != '|' && *arg != '\n')
	value = eval_to_string_skip(arg, eap, eap->skip);
    else
    {
	emsg(_(e_argument_required));
	value = NULL;
    }

    
    
    if (!eap->skip && value != NULL)
    {
	if (throw_exception(value, ET_USER, NULL) == FAIL)
	    vim_free(value);
	else
	    do_throw(eap->cstack);
    }
}


    void
do_throw(cstack_T *cstack)
{
    int		idx;
    int		inactivate_try = FALSE;

    
#ifndef THROW_ON_ERROR_TRUE
    if (did_emsg && !THROW_ON_ERROR)
    {
	inactivate_try = TRUE;
	did_emsg = FALSE;
    }
#endif
#ifndef THROW_ON_INTERRUPT_TRUE
    if (got_int && !THROW_ON_INTERRUPT)
    {
	inactivate_try = TRUE;
	got_int = FALSE;
    }
#endif
    idx = cleanup_conditionals(cstack, 0, inactivate_try);
    if (idx >= 0)
    {
	
	if (!(cstack->cs_flags[idx] & CSF_CAUGHT))
	{
	    if (cstack->cs_flags[idx] & CSF_ACTIVE)
		cstack->cs_flags[idx] |= CSF_THROWN;
	    else
		
		
		
		cstack->cs_flags[idx] &= ~CSF_THROWN;
	}
	cstack->cs_flags[idx] &= ~CSF_ACTIVE;
	cstack->cs_exception[idx] = current_exception;
    }
#if 0
    
    
    else
    {
	
	if (getline_equal(eap->getline, eap->cookie, get_func_line))
	    current_funccal->returned = TRUE;
	elseif (eap->get_func_line == getsourceline)
	    ((struct source_cookie *)eap->cookie)->finished = TRUE;
    }
#endif

    did_throw = TRUE;
}


    void
ex_try(exarg_T *eap)
{
    int		skip;
    cstack_T	*cstack = eap->cstack;

    if (cmdmod_error(FALSE))
	return;

    if (cstack->cs_idx == CSTACK_LEN - 1)
	eap->errmsg = _(e_try_nesting_too_deep);
    else
    {
	enter_block(cstack);
	++cstack->cs_trylevel;
	cstack->cs_flags[cstack->cs_idx] = CSF_TRY;
	cstack->cs_pending[cstack->cs_idx] = CSTP_NONE;

	
	skip = did_emsg || got_int || did_throw || (cstack->cs_idx > 0
		&& !(cstack->cs_flags[cstack->cs_idx - 1] & CSF_ACTIVE));

	if (!skip)
	{
	    
	    
	    
	    cstack->cs_flags[cstack->cs_idx] |= CSF_ACTIVE | CSF_TRUE;

	    
	    if (emsg_silent)
	    {
		eslist_T	*elem;

		elem = ALLOC_ONE(struct eslist_elem);
		if (elem == NULL)
		    emsg(_(e_out_of_memory));
		else
		{
		    elem->saved_emsg_silent = emsg_silent;
		    elem->next = cstack->cs_emsg_silent_list;
		    cstack->cs_emsg_silent_list = elem;
		    cstack->cs_flags[cstack->cs_idx] |= CSF_SILENT;
		    emsg_silent = 0;
		}
	    }
	}

    }
}


    void
ex_catch(exarg_T *eap)
{
    int		idx = 0;
    int		give_up = FALSE;
    int		skip = FALSE;
    int		caught = FALSE;
    char_u	*end;
    int		save_char = 0;
    char_u	*save_cpo;
    regmatch_T	regmatch;
    int		prev_got_int;
    cstack_T	*cstack = eap->cstack;
    char_u	*pat;

    if (cmdmod_error(FALSE))
	return;

    if (cstack->cs_trylevel <= 0 || cstack->cs_idx < 0)
    {
	eap->errmsg = _(e_catch_without_try);
	give_up = TRUE;
    }
    else
    {
	if (!(cstack->cs_flags[cstack->cs_idx] & CSF_TRY))
	{
	    
	    
	    eap->errmsg = get_end_emsg(cstack);
	    skip = TRUE;
	}
	for (idx = cstack->cs_idx; idx > 0; --idx)
	    if (cstack->cs_flags[idx] & CSF_TRY)
		break;
	if (cstack->cs_flags[idx] & CSF_TRY)
	    cstack->cs_flags[idx] |= CSF_CATCH;
	if (cstack->cs_flags[idx] & CSF_FINALLY)
	{
	    
	    
	    eap->errmsg = _(e_catch_after_finally);
	    give_up = TRUE;
	}
	else
	    rewind_conditionals(cstack, idx, CSF_WHILE | CSF_FOR,
						       &cstack->cs_looplevel);
    }

    if (ends_excmd2(eap->cmd, eap->arg))   
    {
	pat = (char_u *)".*";
	end = NULL;
	eap->nextcmd = find_nextcmd(eap->arg);
    }
    else
    {
	pat = eap->arg + 1;
	end = skip_regexp_err(pat, *eap->arg, TRUE);
	if (end == NULL)
	    give_up = TRUE;
    }

    if (!give_up)
    {
	
	if (!did_throw || !(cstack->cs_flags[idx] & CSF_TRUE))
	    skip = TRUE;

	
	if (!skip && (cstack->cs_flags[idx] & CSF_THROWN)
		&& !(cstack->cs_flags[idx] & CSF_CAUGHT))
	{
	    if (end != NULL && *end != NUL
				      && !ends_excmd2(end, skipwhite(end + 1)))
	    {
		semsg(_(e_trailing_characters_str), end);
		return;
	    }

	    
	    
	    
	    
	    
	    
	    
	    if (!dbg_check_skipped(eap) || !do_intthrow(cstack))
	    {
		
		
		if (end != NULL)
		{
		    save_char = *end;
		    *end = NUL;
		}
		save_cpo  = p_cpo;
		p_cpo = empty_option;
		
		
		++emsg_off;
		regmatch.regprog = vim_regcomp(pat, RE_MAGIC + RE_STRING);
		--emsg_off;
		regmatch.rm_ic = FALSE;
		if (end != NULL)
		    *end = save_char;
		p_cpo = save_cpo;
		if (regmatch.regprog == NULL)
		    semsg(_(e_invalid_argument_str), pat);
		else
		{
		    
		    prev_got_int = got_int;
		    got_int = FALSE;
		    caught = vim_regexec_nl(&regmatch,
			       (char_u *)current_exception->value, (colnr_T)0);
		    got_int |= prev_got_int;
		    vim_regfree(regmatch.regprog);
		}
	    }
	}

	if (caught)
	{
	    
	    
	    cstack->cs_flags[idx] |= CSF_ACTIVE | CSF_CAUGHT;
	    did_emsg = got_int = did_throw = FALSE;
	    catch_exception((except_T *)cstack->cs_exception[idx]);

	    if (cstack->cs_idx >= 0
			       && (cstack->cs_flags[cstack->cs_idx] & CSF_TRY))
	    {
		
		
		leave_block(cstack);
		enter_block(cstack);
	    }

	    
	    
	    
	    
	    
	    if (cstack->cs_exception[cstack->cs_idx] != current_exception)
		internal_error("ex_catch()");
	}
	else
	{
	    
	    cleanup_conditionals(cstack, CSF_TRY, TRUE);
	}
    }

    if (end != NULL)
	eap->nextcmd = find_nextcmd(end);
}


    void
ex_finally(exarg_T *eap)
{
    int		idx;
    int		skip = FALSE;
    int		pending = CSTP_NONE;
    cstack_T	*cstack = eap->cstack;

    if (cmdmod_error(FALSE))
	return;

    for (idx = cstack->cs_idx; idx >= 0; --idx)
	if (cstack->cs_flags[idx] & CSF_TRY)
	    break;
    if (cstack->cs_trylevel <= 0 || idx < 0)
    {
	eap->errmsg = _(e_finally_without_try);
	return;
    }

    if (!(cstack->cs_flags[cstack->cs_idx] & CSF_TRY))
    {
	eap->errmsg = get_end_emsg(cstack);
	
	
	
	pending = CSTP_ERROR;
    }

    if (cstack->cs_flags[idx] & CSF_FINALLY)
    {
	
	eap->errmsg = _(e_multiple_finally);
	return;
    }
    rewind_conditionals(cstack, idx, CSF_WHILE | CSF_FOR,
						   &cstack->cs_looplevel);

    
    skip = !(cstack->cs_flags[cstack->cs_idx] & CSF_TRUE);

    if (!skip)
    {
	
	
	
	if (dbg_check_skipped(eap))
	{
	    
	    
	    
	    
	    (void)do_intthrow(cstack);
	}

	
	cleanup_conditionals(cstack, CSF_TRY, FALSE);

	if (cstack->cs_idx >= 0
			   && (cstack->cs_flags[cstack->cs_idx] & CSF_TRY))
	{
	    
	    
	    leave_block(cstack);
	    enter_block(cstack);
	}

	
	if (pending == CSTP_ERROR || did_emsg || got_int || did_throw)
	{
	    if (cstack->cs_pending[cstack->cs_idx] == CSTP_RETURN)
	    {
		report_discard_pending(CSTP_RETURN,
				       cstack->cs_rettv[cstack->cs_idx]);
		discard_pending_return(cstack->cs_rettv[cstack->cs_idx]);
	    }
	    if (pending == CSTP_ERROR && !did_emsg)
		pending |= (THROW_ON_ERROR) ? CSTP_THROW : 0;
	    else
		pending |= did_throw ? CSTP_THROW : 0;
	    pending |= did_emsg  ? CSTP_ERROR     : 0;
	    pending |= got_int   ? CSTP_INTERRUPT : 0;
	    cstack->cs_pending[cstack->cs_idx] = pending;

	    
	    
	    
	    
	    
	    
	    
	    if (did_throw && cstack->cs_exception[cstack->cs_idx]
						     != current_exception)
		internal_error("ex_finally()");
	}

	
	cstack->cs_lflags |= CSL_HAD_FINA;
    }
}


    void
ex_endtry(exarg_T *eap)
{
    int		idx;
    int		skip;
    int		rethrow = FALSE;
    int		pending = CSTP_NONE;
    void	*rettv = NULL;
    cstack_T	*cstack = eap->cstack;

    if (cmdmod_error(FALSE))
	return;

    for (idx = cstack->cs_idx; idx >= 0; --idx)
	if (cstack->cs_flags[idx] & CSF_TRY)
	    break;
    if (cstack->cs_trylevel <= 0 || idx < 0)
    {
	eap->errmsg = _(e_endtry_without_try);
	return;
    }

    
    skip = did_emsg || got_int || did_throw
			     || !(cstack->cs_flags[cstack->cs_idx] & CSF_TRUE);

    if (!(cstack->cs_flags[cstack->cs_idx] & CSF_TRY))
    {
	eap->errmsg = get_end_emsg(cstack);

	
	rewind_conditionals(cstack, idx, CSF_WHILE | CSF_FOR,
							&cstack->cs_looplevel);
	skip = TRUE;

	
	if (did_throw)
	    discard_current_exception();

	
	did_emsg = FALSE;
    }
    else
    {
	idx = cstack->cs_idx;

	
	if (!skip && in_vim9script()
		     && (cstack->cs_flags[idx] & (CSF_CATCH|CSF_FINALLY)) == 0)
	{
	    
	    
	    eap->errmsg = _(e_missing_catch_or_finally);
	}

	
	if (did_throw && (cstack->cs_flags[idx] & CSF_TRUE)
		&& !(cstack->cs_flags[idx] & CSF_FINALLY))
	    rethrow = TRUE;
    }

    
    
    
    
    
    
    
    if ((rethrow || (!skip && !(cstack->cs_flags[idx] & CSF_FINALLY)
		    && !cstack->cs_pending[idx]))
	    && dbg_check_skipped(eap))
    {
	
	
	
	if (got_int)
	{
	    skip = TRUE;
	    (void)do_intthrow(cstack);
	    
	    
	    rethrow = FALSE;
	    if (did_throw && !(cstack->cs_flags[idx] & CSF_FINALLY))
		rethrow = TRUE;
	}
    }

    
    if (!skip)
    {
	pending = cstack->cs_pending[idx];
	cstack->cs_pending[idx] = CSTP_NONE;
	if (pending == CSTP_RETURN)
	    rettv = cstack->cs_rettv[idx];
	else if (pending & CSTP_THROW)
	    current_exception = cstack->cs_exception[idx];
    }

    
    (void)cleanup_conditionals(cstack, CSF_TRY | CSF_SILENT, TRUE);

    if (cstack->cs_idx >= 0 && (cstack->cs_flags[cstack->cs_idx] & CSF_TRY))
	leave_block(cstack);
    --cstack->cs_trylevel;

    if (!skip)
    {
	report_resume_pending(pending,
		    (pending == CSTP_RETURN) ? rettv :
		    (pending & CSTP_THROW) ? (void *)current_exception : NULL);
	switch (pending)
	{
	    case CSTP_NONE:
		break;

	    
	    
	    
	    
	    
	    
	    
	    case CSTP_CONTINUE:
		ex_continue(eap);
		break;
	    case CSTP_BREAK:
		ex_break(eap);
		break;
	    case CSTP_RETURN:
		do_return(eap, FALSE, FALSE, rettv);
		break;
	    case CSTP_FINISH:
		do_finish(eap, FALSE);
		break;

	    
	    
	    
	    
	    
	    
	    default:
		if (pending & CSTP_ERROR)
		    did_emsg = TRUE;
		if (pending & CSTP_INTERRUPT)
		    got_int = TRUE;
		if (pending & CSTP_THROW)
		    rethrow = TRUE;
		break;
	}
    }

    if (rethrow)
	
	do_throw(cstack);
}




    void
enter_cleanup(cleanup_T *csp)
{
    int		pending = CSTP_NONE;

    
    if (did_emsg || got_int || did_throw || need_rethrow)
    {
	csp->pending = (did_emsg     ? CSTP_ERROR     : 0)
		     | (got_int      ? CSTP_INTERRUPT : 0)
		     | (did_throw    ? CSTP_THROW     : 0)
		     | (need_rethrow ? CSTP_THROW     : 0);

	
	
	
	
	
	
	if (did_throw || need_rethrow)
	{
	    csp->exception = current_exception;
	    current_exception = NULL;
	}
	else
	{
	    csp->exception = NULL;
	    if (did_emsg)
	    {
		force_abort |= cause_abort;
		cause_abort = FALSE;
	    }
	}
	did_emsg = got_int = did_throw = need_rethrow = FALSE;

	
	report_make_pending(pending, csp->exception);
    }
    else
    {
	csp->pending = CSTP_NONE;
	csp->exception = NULL;
    }
}


    void
leave_cleanup(cleanup_T *csp)
{
    int		pending = csp->pending;

    if (pending == CSTP_NONE)	
	return;

    
    
    
    
    if (aborting() || need_rethrow)
    {
	if (pending & CSTP_THROW)
	    
	    discard_exception(csp->exception, FALSE);
	else
	    report_discard_pending(pending, NULL);

	
	
	if (msg_list != NULL)
	    free_global_msglist();
    }

    
    else
    {
	
	if (pending & CSTP_THROW)
	    current_exception = csp->exception;

	
	else if (pending & CSTP_ERROR)
	{
	    cause_abort = force_abort;
	    force_abort = FALSE;
	}

	
	if (pending & CSTP_ERROR)
	    did_emsg = TRUE;
	if (pending & CSTP_INTERRUPT)
	    got_int = TRUE;
	if (pending & CSTP_THROW)
	    need_rethrow = TRUE;    

	
	report_resume_pending(pending,
		   (pending & CSTP_THROW) ? (void *)current_exception : NULL);
    }
}



    int
cleanup_conditionals(
    cstack_T   *cstack,
    int		searched_cond,
    int		inclusive)
{
    int		idx;
    int		stop = FALSE;

    for (idx = cstack->cs_idx; idx >= 0; --idx)
    {
	if (cstack->cs_flags[idx] & CSF_TRY)
	{
	    
	    if (did_emsg || got_int || (cstack->cs_flags[idx] & CSF_FINALLY))
	    {
		switch (cstack->cs_pending[idx])
		{
		    case CSTP_NONE:
			break;

		    case CSTP_CONTINUE:
		    case CSTP_BREAK:
		    case CSTP_FINISH:
			report_discard_pending(cstack->cs_pending[idx], NULL);
			cstack->cs_pending[idx] = CSTP_NONE;
			break;

		    case CSTP_RETURN:
			report_discard_pending(CSTP_RETURN,
						      cstack->cs_rettv[idx]);
			discard_pending_return(cstack->cs_rettv[idx]);
			cstack->cs_pending[idx] = CSTP_NONE;
			break;

		    default:
			if (cstack->cs_flags[idx] & CSF_FINALLY)
			{
			    if ((cstack->cs_pending[idx] & CSTP_THROW)
				    && cstack->cs_exception[idx] != NULL)
			    {
				
				
				
				discard_exception(
					(except_T *)cstack->cs_exception[idx],
					FALSE);
			    }
			    else
				report_discard_pending(cstack->cs_pending[idx],
					NULL);
			    cstack->cs_pending[idx] = CSTP_NONE;
			}
			break;
		}
	    }

	    
	    if (!(cstack->cs_flags[idx] & CSF_FINALLY))
	    {
		if ((cstack->cs_flags[idx] & CSF_ACTIVE)
			&& (cstack->cs_flags[idx] & CSF_CAUGHT)
			&& !(cstack->cs_flags[idx] & CSF_FINISHED))
		{
		    finish_exception((except_T *)cstack->cs_exception[idx]);
		    cstack->cs_flags[idx] |= CSF_FINISHED;
		}
		
		
		
		
		if (cstack->cs_flags[idx] & CSF_TRUE)
		{
		    if (searched_cond == 0 && !inclusive)
			break;
		    stop = TRUE;
		}
	    }
	}

	
	
	
	
	if (cstack->cs_flags[idx] & searched_cond)
	{
	    if (!inclusive)
		break;
	    stop = TRUE;
	}
	cstack->cs_flags[idx] &= ~CSF_ACTIVE;
	if (stop && searched_cond != (CSF_TRY | CSF_SILENT))
	    break;

	
	if ((cstack->cs_flags[idx] & CSF_TRY)
		&& (cstack->cs_flags[idx] & CSF_SILENT))
	{
	    eslist_T	*elem;

	    elem = cstack->cs_emsg_silent_list;
	    cstack->cs_emsg_silent_list = elem->next;
	    emsg_silent = elem->saved_emsg_silent;
	    vim_free(elem);
	    cstack->cs_flags[idx] &= ~CSF_SILENT;
	}
	if (stop)
	    break;
    }
    return idx;
}


   static char *
get_end_emsg(cstack_T *cstack)
{
    if (cstack->cs_flags[cstack->cs_idx] & CSF_WHILE)
	return _(e_missing_endwhile);
    if (cstack->cs_flags[cstack->cs_idx] & CSF_FOR)
	return _(e_missing_endfor);
    return _(e_missing_endif);
}



    void
rewind_conditionals(
    cstack_T   *cstack,
    int		idx,
    int		cond_type,
    int		*cond_level)
{
    while (cstack->cs_idx > idx)
    {
	if (cstack->cs_flags[cstack->cs_idx] & cond_type)
	    --*cond_level;
	if (cstack->cs_flags[cstack->cs_idx] & CSF_FOR)
	    free_for_info(cstack->cs_forinfo[cstack->cs_idx]);
	leave_block(cstack);
    }
}


    void
ex_endfunction(exarg_T *eap)
{
    if (eap->cmdidx == CMD_enddef)
	semsg(_(e_str_not_inside_function), ":enddef");
    else
	semsg(_(e_str_not_inside_function), ":endfunction");
}


    int
has_loop_cmd(char_u *p)
{
    int		len;

    
    for (;;)
    {
	while (*p == ' ' || *p == '\t' || *p == ':')
	    ++p;
	len = modifier_len(p);
	if (len == 0)
	    break;
	p += len;
    }
    if ((p[0] == 'w' && p[1] == 'h')
	    || (p[0] == 'f' && p[1] == 'o' && p[2] == 'r'))
	return TRUE;
    return FALSE;
}

#endif 
