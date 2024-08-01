



#include "vim.h"

static void shift_block(oparg_T *oap, int amount);
static void	mb_adjust_opend(oparg_T *oap);
static int	do_addsub(int op_type, pos_T *pos, int length, linenr_T Prenum1);
static void	pbyte(pos_T lp, int c);
#define PBYTE(lp, c) pbyte(lp, c)



#define OPF_LINES  1	
#define OPF_CHANGE 2	


static char opchars[][3] =
{
    {NUL, NUL, 0},			
    {'d', NUL, OPF_CHANGE},		
    {'y', NUL, 0},			
    {'c', NUL, OPF_CHANGE},		
    {'<', NUL, OPF_LINES | OPF_CHANGE},	
    {'>', NUL, OPF_LINES | OPF_CHANGE},	
    {'!', NUL, OPF_LINES | OPF_CHANGE},	
    {'g', '~', OPF_CHANGE},		
    {'=', NUL, OPF_LINES | OPF_CHANGE},	
    {'g', 'q', OPF_LINES | OPF_CHANGE},	
    {':', NUL, OPF_LINES},		
    {'g', 'U', OPF_CHANGE},		
    {'g', 'u', OPF_CHANGE},		
    {'J', NUL, OPF_LINES | OPF_CHANGE},	
    {'g', 'J', OPF_LINES | OPF_CHANGE},	
    {'g', '?', OPF_CHANGE},		
    {'r', NUL, OPF_CHANGE},		
    {'I', NUL, OPF_CHANGE},		
    {'A', NUL, OPF_CHANGE},		
    {'z', 'f', OPF_LINES},		
    {'z', 'o', OPF_LINES},		
    {'z', 'O', OPF_LINES},		
    {'z', 'c', OPF_LINES},		
    {'z', 'C', OPF_LINES},		
    {'z', 'd', OPF_LINES},		
    {'z', 'D', OPF_LINES},		
    {'g', 'w', OPF_LINES | OPF_CHANGE},	
    {'g', '@', OPF_CHANGE},		
    {Ctrl_A, NUL, OPF_CHANGE},		
    {Ctrl_X, NUL, OPF_CHANGE},		
};


    int
get_op_type(int char1, int char2)
{
    int		i;

    if (char1 == 'r')		
	return OP_REPLACE;
    if (char1 == '~')		
	return OP_TILDE;
    if (char1 == 'g' && char2 == Ctrl_A)	
	return OP_NR_ADD;
    if (char1 == 'g' && char2 == Ctrl_X)	
	return OP_NR_SUB;
    if (char1 == 'z' && char2 == 'y')	
	return OP_YANK;
    for (i = 0; ; ++i)
    {
	if (opchars[i][0] == char1 && opchars[i][1] == char2)
	    break;
	if (i == (int)ARRAY_LENGTH(opchars) - 1)
	{
	    internal_error("get_op_type()");
	    break;
	}
    }
    return i;
}


    static int
op_on_lines(int op)
{
    return opchars[op][2] & OPF_LINES;
}

#if defined(FEAT_JOB_CHANNEL) || defined(PROTO)

    int
op_is_change(int op)
{
    return opchars[op][2] & OPF_CHANGE;
}
#endif


    int
get_op_char(int optype)
{
    return opchars[optype][0];
}


    int
get_extra_op_char(int optype)
{
    return opchars[optype][1];
}


    void
op_shift(oparg_T *oap, int curs_top, int amount)
{
    int	    i;
    int		    first_char;
    int		    block_col = 0;

    if (u_save((linenr_T)(oap->start.lnum - 1),
				       (linenr_T)(oap->end.lnum + 1)) == FAIL)
	return;

    if (oap->block_mode)
	block_col = curwin->w_cursor.col;

    for (i = oap->line_count; --i >= 0; )
    {
	first_char = *ml_get_curline();
	if (first_char == NUL)				
	    curwin->w_cursor.col = 0;
	else if (oap->block_mode)
	    shift_block(oap, amount);
	else
	    
	    
	    if (first_char != '#' || !preprocs_left())
		shift_line(oap->op_type == OP_LSHIFT, p_sr, amount, FALSE);
	++curwin->w_cursor.lnum;
    }

    changed_lines(oap->start.lnum, 0, oap->end.lnum + 1, 0L);
    if (oap->block_mode)
    {
	curwin->w_cursor.lnum = oap->start.lnum;
	curwin->w_cursor.col = block_col;
    }
    else if (curs_top)	    
    {
	curwin->w_cursor.lnum = oap->start.lnum;
	beginline(BL_SOL | BL_FIX);   
    }
    else
	--curwin->w_cursor.lnum;	

#ifdef FEAT_FOLDING
    
    foldOpenCursor();
#endif


    if (oap->line_count > p_report)
    {
	char	    *op;
	char	    *msg_line_single;
	char	    *msg_line_plural;

	if (oap->op_type == OP_RSHIFT)
	    op = ">";
	else
	    op = "<";
	msg_line_single = NGETTEXT("%ld line %sed %d time",
					     "%ld line %sed %d times", amount);
	msg_line_plural = NGETTEXT("%ld lines %sed %d time",
					    "%ld lines %sed %d times", amount);
	vim_snprintf((char *)IObuff, IOSIZE,
		NGETTEXT(msg_line_single, msg_line_plural, oap->line_count),
		oap->line_count, op, amount);
	msg_attr_keep((char *)IObuff, 0, TRUE);
    }

    if ((cmdmod.cmod_flags & CMOD_LOCKMARKS) == 0)
    {
	
	curbuf->b_op_start = oap->start;
	curbuf->b_op_end.lnum = oap->end.lnum;
	curbuf->b_op_end.col = ml_get_len(oap->end.lnum);
	if (curbuf->b_op_end.col > 0)
	    --curbuf->b_op_end.col;
    }
}


    void
shift_line(
    int	left,
    int	round,
    int	amount,
    int call_changed_bytes)	
{
    vimlong_T	count;
    int		i, j;
    int		sw_val = trim_to_int(get_sw_value_indent(curbuf, left));

    if (sw_val == 0)
	sw_val = 1;		

    count = get_indent();	

    if (round)			
    {
	i = trim_to_int(count) / sw_val;	
	j = trim_to_int(count) % sw_val;	
	if (j && left)		
	    --amount;
	if (left)
	{
	    i -= amount;
	    if (i < 0)
		i = 0;
	}
	else
	    i += amount;
	count = (vimlong_T)i * (vimlong_T)sw_val;
    }
    else		
    {
	if (left)
	{
	    count -= (vimlong_T)sw_val * (vimlong_T)amount;
	    if (count < 0)
		count = 0;
	}
	else
	    count += (vimlong_T)sw_val * (vimlong_T)amount;
    }

    
    if (State & VREPLACE_FLAG)
	change_indent(INDENT_SET, trim_to_int(count), FALSE, NUL, call_changed_bytes);
    else
	(void)set_indent(trim_to_int(count), call_changed_bytes ? SIN_CHANGED : 0);
}


    static void
shift_block(oparg_T *oap, int amount)
{
    int			left = (oap->op_type == OP_LSHIFT);
    int			oldstate = State;
    int			total;
    char_u		*newp, *oldp;
    size_t		newlen, oldlen;
    int			oldcol = curwin->w_cursor.col;
    int			sw_val = (int)get_sw_value_indent(curbuf, left);
    int			ts_val = (int)curbuf->b_p_ts;
    struct block_def	bd;
    int			incr;
    colnr_T		ws_vcol;
    int			added;
    size_t		new_line_len;	
					
#ifdef FEAT_RIGHTLEFT
    int			old_p_ri = p_ri;

    p_ri = 0;			
#endif

    State = MODE_INSERT;	
    block_prep(oap, &bd, curwin->w_cursor.lnum, TRUE);
    if (bd.is_short)
	return;

    
    total = (int)((unsigned)amount * (unsigned)sw_val);
    if ((total / sw_val) != amount)
	return; 

    oldp = ml_get_curline();
    oldlen = ml_get_curline_len();

    if (!left)
    {
	int		tabs = 0, spaces = 0;
	chartabsize_T	cts;

	
	total += bd.pre_whitesp; 
	ws_vcol = bd.start_vcol - bd.pre_whitesp;
	if (bd.startspaces)
	{
	    if (has_mbyte)
	    {
		if ((*mb_ptr2len)(bd.textstart) == 1)
		    ++bd.textstart;
		else
		{
		    ws_vcol = 0;
		    bd.startspaces = 0;
		}
	    }
	    else
		++bd.textstart;
	}

	
	init_chartabsize_arg(&cts, curwin, curwin->w_cursor.lnum,
				   bd.start_vcol, bd.textstart, bd.textstart);
	for ( ; VIM_ISWHITE(*cts.cts_ptr); )
	{
	    incr = lbr_chartabsize_adv(&cts);
	    total += incr;
	    cts.cts_vcol += incr;
	}
	bd.textstart = cts.cts_ptr;
	bd.start_vcol = cts.cts_vcol;
	clear_chartabsize_arg(&cts);

	
	
#ifdef FEAT_VARTABS
	if (!curbuf->b_p_et)
	    tabstop_fromto(ws_vcol, ws_vcol + total,
				ts_val, curbuf->b_p_vts_array, &tabs, &spaces);
	else
	    spaces = total;
#else
	if (!curbuf->b_p_et)
	    tabs = ((ws_vcol % ts_val) + total) / ts_val; 
	if (tabs > 0)
	    spaces = ((ws_vcol % ts_val) + total) % ts_val; 
	else
	    spaces = total;
#endif
	
	bd.textcol -= bd.pre_whitesp_c - (bd.startspaces != 0);

	new_line_len = bd.textcol + tabs + spaces + (oldlen - (bd.textstart - oldp));
	newp = alloc(new_line_len + 1);
	if (newp == NULL)
	    return;
	mch_memmove(newp, oldp, (size_t)bd.textcol);
	newlen = bd.textcol;
	vim_memset(newp + newlen, TAB, (size_t)tabs);
	newlen += tabs;
	vim_memset(newp + newlen, ' ', (size_t)spaces);
	STRCPY(newp + newlen + spaces, bd.textstart);
    }
    else 
    {
	colnr_T	    destination_col;	
					
	char_u	    *verbatim_copy_end;	
					
	colnr_T	    verbatim_copy_width;
					
	size_t	    fill;		
	size_t	    block_space_width;
	size_t	    shift_amount;
	char_u	    *non_white = bd.textstart;
	colnr_T	    non_white_col;
	size_t	    fixedlen;		
					
	chartabsize_T cts;

	

	
	
	
	if (bd.startspaces)
	    MB_PTR_ADV(non_white);

	
	non_white_col = bd.start_vcol;

	init_chartabsize_arg(&cts, curwin, curwin->w_cursor.lnum,
				   non_white_col, bd.textstart, non_white);
	while (VIM_ISWHITE(*cts.cts_ptr))
	{
	    incr = lbr_chartabsize_adv(&cts);
	    cts.cts_vcol += incr;
	}
	non_white_col = cts.cts_vcol;
	non_white = cts.cts_ptr;
	clear_chartabsize_arg(&cts);

	block_space_width = non_white_col - oap->start_vcol;
	
	shift_amount = (block_space_width < (size_t)total
					 ? block_space_width : (size_t)total);

	
	destination_col = (colnr_T)(non_white_col - shift_amount);

	
	
	verbatim_copy_end = bd.textstart;
	verbatim_copy_width = bd.start_vcol;

	
	
	
	if (bd.startspaces)
	    verbatim_copy_width -= bd.start_char_vcols;
	init_chartabsize_arg(&cts, curwin, 0, verbatim_copy_width,
					     bd.textstart, verbatim_copy_end);
	while (cts.cts_vcol < destination_col)
	{
	    incr = lbr_chartabsize(&cts);
	    if (cts.cts_vcol + incr > destination_col)
		break;
	    cts.cts_vcol += incr;
	    MB_PTR_ADV(cts.cts_ptr);
	}
	verbatim_copy_width = cts.cts_vcol;
	verbatim_copy_end = cts.cts_ptr;
	clear_chartabsize_arg(&cts);

	
	
	
	fill = destination_col - verbatim_copy_width;

	
	
	
	
	fixedlen = verbatim_copy_end - oldp;
	new_line_len = fixedlen + fill + (oldlen - (non_white - oldp));

	newp = alloc(new_line_len + 1);
	if (newp == NULL)
	    return;
	mch_memmove(newp, oldp, fixedlen);
	newlen = fixedlen;
	vim_memset(newp + newlen, ' ', (size_t)fill);
	STRCPY(newp + newlen + fill, non_white);
    }
    
    ml_replace(curwin->w_cursor.lnum, newp, FALSE);

    
    
    
    if (new_line_len >= oldlen)
	added = (int)(new_line_len - oldlen);
    else
	added = 0 - (int)(oldlen - new_line_len);
    inserted_bytes(curwin->w_cursor.lnum, bd.textcol, added);
    State = oldstate;
    curwin->w_cursor.col = oldcol;
#ifdef FEAT_RIGHTLEFT
    p_ri = old_p_ri;
#endif
}


    static void
block_insert(
    oparg_T		*oap,
    char_u		*s,
    size_t		slen,
    int			b_insert,
    struct block_def	*bdp)
{
    int		ts_val;
    int		count = 0;	
    int		spaces = 0;	
    colnr_T	offset;		
    colnr_T	startcol;	
    char_u	*newp, *oldp;	
    linenr_T	lnum;		
    int		oldstate = State;

    State = MODE_INSERT;	

    for (lnum = oap->start.lnum + 1; lnum <= oap->end.lnum; lnum++)
    {
	block_prep(oap, bdp, lnum, TRUE);
	if (bdp->is_short && b_insert)
	    continue;	

	oldp = ml_get(lnum);

	if (b_insert)
	{
	    ts_val = bdp->start_char_vcols;
	    spaces = bdp->startspaces;
	    if (spaces != 0)
		count = ts_val - 1; 
	    offset = bdp->textcol;
	}
	else 
	{
	    ts_val = bdp->end_char_vcols;
	    if (!bdp->is_short) 
	    {
		spaces = (bdp->endspaces ? ts_val - bdp->endspaces : 0);
		if (spaces != 0)
		    count = ts_val - 1; 
		offset = bdp->textcol + bdp->textlen - (spaces != 0);
	    }
	    else 
	    {
		
		if (!bdp->is_MAX)
		    spaces = (oap->end_vcol - bdp->end_vcol) + 1;
		count = spaces;
		offset = bdp->textcol + bdp->textlen;
	    }
	}

	if (has_mbyte && spaces > 0)
	    
	    offset -= (*mb_head_off)(oldp, oldp + offset);

	if (spaces < 0)  
	    spaces = 0;

	
	newp = alloc(ml_get_len(lnum) + spaces + slen
		    + (spaces > 0 && !bdp->is_short ? ts_val - spaces : 0)
								  + count + 1);
	if (newp == NULL)
	    continue;

	
	mch_memmove(newp, oldp, (size_t)offset);
	oldp += offset;

	
	vim_memset(newp + offset, ' ', (size_t)spaces);
	startcol = offset + spaces;

	
	mch_memmove(newp + startcol, s, slen);
	offset += (int)slen;

	if (spaces > 0 && !bdp->is_short)
	{
	    if (*oldp == TAB)
	    {
		
		vim_memset(newp + offset + spaces, ' ',
						    (size_t)(ts_val - spaces));
		
		oldp++;
		
		count++;
	    }
	    else
		
		count = spaces;
	}

	if (spaces > 0)
	    offset += count;
	STRCPY(newp + offset, oldp);

	ml_replace(lnum, newp, FALSE);

	if (b_insert)
	    
	    inserted_bytes(lnum, startcol, (int)slen);

	if (lnum == oap->end.lnum)
	{
	    
	    
	    curbuf->b_op_end.lnum = oap->end.lnum;
	    curbuf->b_op_end.col = offset;
	}
    } 

    changed_lines(oap->start.lnum + 1, 0, oap->end.lnum + 1, 0L);

    State = oldstate;
}


    int
op_delete(oparg_T *oap)
{
    int			n;
    linenr_T		lnum;
    char_u		*ptr;
    char_u		*newp, *oldp;
    struct block_def	bd;
    linenr_T		old_lcount = curbuf->b_ml.ml_line_count;
    int			did_yank = FALSE;

    if (curbuf->b_ml.ml_flags & ML_EMPTY)	    
	return OK;

    
    if (oap->empty)
	return u_save_cursor();

    if (!curbuf->b_p_ma)
    {
	emsg(_(e_cannot_make_changes_modifiable_is_off));
	return FAIL;
    }

    if (VIsual_select && oap->is_VIsual)
	
	oap->regname = VIsual_select_reg;

#ifdef FEAT_CLIPBOARD
    adjust_clip_reg(&oap->regname);
#endif

    if (has_mbyte)
	mb_adjust_opend(oap);

    
    if (       oap->motion_type == MCHAR
	    && !oap->is_VIsual
	    && !oap->block_mode
	    && oap->line_count > 1
	    && oap->motion_force == NUL
	    && (vim_strchr(p_cpo, CPO_WORD) != NULL)
	    && oap->op_type == OP_DELETE)
    {
	ptr = ml_get(oap->end.lnum) + oap->end.col;
	if (*ptr != NUL)
	    ptr += oap->inclusive;
	ptr = skipwhite(ptr);
	if (*ptr == NUL && inindent(0))
	    oap->motion_type = MLINE;
    }

    
    if (       oap->motion_type == MCHAR
	    && oap->line_count == 1
	    && oap->op_type == OP_DELETE
	    && *ml_get(oap->start.lnum) == NUL)
    {
	
	if (virtual_op)
	    
	    
	    goto setmarks;
	if (vim_strchr(p_cpo, CPO_EMPTYREGION) != NULL)
	    beep_flush();
	return OK;
    }

    
    if (oap->regname != '_')
    {
	if (oap->regname != 0)
	{
	    
	    if (!valid_yank_reg(oap->regname, TRUE))
	    {
		beep_flush();
		return OK;
	    }
	    get_yank_register(oap->regname, TRUE); 
	    if (op_yank(oap, TRUE, FALSE) == OK)   
		did_yank = TRUE;
	}
	else
	    reset_y_append(); 

	
	if (oap->motion_type == MLINE || oap->line_count > 1
							   || oap->use_reg_one)
	{
	    shift_delete_registers();
	    if (op_yank(oap, TRUE, FALSE) == OK)
		did_yank = TRUE;
	}

	
	
	if ((
#ifdef FEAT_CLIPBOARD
	    ((clip_unnamed & CLIP_UNNAMED) && oap->regname == '*') ||
	    ((clip_unnamed & CLIP_UNNAMED_PLUS) && oap->regname == '+') ||
#endif
	    oap->regname == 0) && oap->motion_type != MLINE
						      && oap->line_count == 1)
	{
	    oap->regname = '-';
	    get_yank_register(oap->regname, TRUE);
	    if (op_yank(oap, TRUE, FALSE) == OK)
		did_yank = TRUE;
	    oap->regname = 0;
	}

	
	if (!did_yank)
	{
	    int msg_silent_save = msg_silent;

	    msg_silent = 0;	
	    n = ask_yesno((char_u *)_("cannot yank; delete anyway"), TRUE);
	    msg_silent = msg_silent_save;
	    if (n != 'y')
	    {
		emsg(_(e_command_aborted));
		return FAIL;
	    }
	}

#if defined(FEAT_EVAL)
	if (did_yank && has_textyankpost())
	    yank_do_autocmd(oap, get_y_current());
#endif
    }

    
    if (oap->block_mode)
    {
	if (u_save((linenr_T)(oap->start.lnum - 1),
			       (linenr_T)(oap->end.lnum + 1)) == FAIL)
	    return FAIL;

	for (lnum = curwin->w_cursor.lnum; lnum <= oap->end.lnum; ++lnum)
	{
	    block_prep(oap, &bd, lnum, TRUE);
	    if (bd.textlen == 0)	
		continue;

	    
	    if (lnum == curwin->w_cursor.lnum)
	    {
		curwin->w_cursor.col = bd.textcol + bd.startspaces;
		curwin->w_cursor.coladd = 0;
	    }

	    
	    
	    
	    n = bd.textlen - bd.startspaces - bd.endspaces;
	    oldp = ml_get(lnum);
	    newp = alloc(ml_get_len(lnum) + 1 - n);
	    if (newp == NULL)
		continue;
	    
	    mch_memmove(newp, oldp, (size_t)bd.textcol);
	    
	    vim_memset(newp + bd.textcol, ' ',
				     (size_t)(bd.startspaces + bd.endspaces));
	    
	    STRCPY(newp + bd.textcol + bd.startspaces + bd.endspaces,
				    oldp + bd.textcol + bd.textlen);
	    
	    ml_replace(lnum, newp, FALSE);

#ifdef FEAT_PROP_POPUP
	    if (curbuf->b_has_textprop && n != 0)
		adjust_prop_columns(lnum, bd.textcol, -n, 0);
#endif
	}

	check_cursor_col();
	changed_lines(curwin->w_cursor.lnum, curwin->w_cursor.col,
						       oap->end.lnum + 1, 0L);
	oap->line_count = 0;	    
    }
    else if (oap->motion_type == MLINE)
    {
	if (oap->op_type == OP_CHANGE)
	{
	    
	    
	    
	    if (oap->line_count > 1)
	    {
		lnum = curwin->w_cursor.lnum;
		++curwin->w_cursor.lnum;
		del_lines((int)(oap->line_count - 1), TRUE);
		curwin->w_cursor.lnum = lnum;
	    }
	    if (u_save_cursor() == FAIL)
		return FAIL;
	    if (curbuf->b_p_ai)		    
	    {
		beginline(BL_WHITE);	    
		did_ai = TRUE;		    
		ai_col = curwin->w_cursor.col;
	    }
	    else
		beginline(0);		    
	    truncate_line(FALSE);   
				    
	    if (oap->line_count > 1)
		u_clearline();	    
	}
	else
	{
	    del_lines(oap->line_count, TRUE);
	    beginline(BL_WHITE | BL_FIX);
	    u_clearline();	
	}
    }
    else
    {
	if (virtual_op)
	{
	    int		endcol = 0;

	    
	    if (gchar_pos(&oap->start) == '\t')
	    {
		if (u_save_cursor() == FAIL)	
		    return FAIL;
		if (oap->line_count == 1)
		    endcol = getviscol2(oap->end.col, oap->end.coladd);
		coladvance_force(getviscol2(oap->start.col, oap->start.coladd));
		oap->start = curwin->w_cursor;
		if (oap->line_count == 1)
		{
		    coladvance(endcol);
		    oap->end.col = curwin->w_cursor.col;
		    oap->end.coladd = curwin->w_cursor.coladd;
		    curwin->w_cursor = oap->start;
		}
	    }

	    
	    if (gchar_pos(&oap->end) == '\t'
				     && (int)oap->end.coladd < oap->inclusive)
	    {
		
		if (u_save((linenr_T)(oap->end.lnum - 1),
				       (linenr_T)(oap->end.lnum + 1)) == FAIL)
		    return FAIL;
		curwin->w_cursor = oap->end;
		coladvance_force(getviscol2(oap->end.col, oap->end.coladd));
		oap->end = curwin->w_cursor;
		curwin->w_cursor = oap->start;
	    }
	    if (has_mbyte)
		mb_adjust_opend(oap);
	}

	if (oap->line_count == 1)	
	{
	    if (u_save_cursor() == FAIL)	
		return FAIL;

	    
	    if (       vim_strchr(p_cpo, CPO_DOLLAR) != NULL
		    && oap->op_type == OP_CHANGE
		    && oap->end.lnum == curwin->w_cursor.lnum
		    && !oap->is_VIsual)
		display_dollar(oap->end.col - !oap->inclusive);

	    n = oap->end.col - oap->start.col + 1 - !oap->inclusive;

	    if (virtual_op)
	    {
		
		
		int		len = ml_get_curline_len();

		if (oap->end.coladd != 0
			&& (int)oap->end.col >= len - 1
			&& !(oap->start.coladd && (int)oap->end.col >= len - 1))
		    n++;
		
		if (n == 0 && oap->start.coladd != oap->end.coladd)
		    n = 1;

		
		if (gchar_cursor() != NUL)
		    curwin->w_cursor.coladd = 0;
	    }
	    (void)del_bytes((int)n, !virtual_op,
			    oap->op_type == OP_DELETE && !oap->is_VIsual);
	}
	else				
	{
	    pos_T   curpos;

	    
	    if (u_save((linenr_T)(curwin->w_cursor.lnum - 1),
		 (linenr_T)(curwin->w_cursor.lnum + oap->line_count)) == FAIL)
		return FAIL;

	    truncate_line(TRUE);	

	    curpos = curwin->w_cursor;	
	    ++curwin->w_cursor.lnum;
	    del_lines((int)(oap->line_count - 2), FALSE);

	    
	    n = (oap->end.col + 1 - !oap->inclusive);
	    curwin->w_cursor.col = 0;
	    (void)del_bytes((int)n, !virtual_op,
			    oap->op_type == OP_DELETE && !oap->is_VIsual);
	    curwin->w_cursor = curpos;	
	    (void)do_join(2, FALSE, FALSE, FALSE, FALSE);
	}
	if (oap->op_type == OP_DELETE)
	    auto_format(FALSE, TRUE);
    }

    msgmore(curbuf->b_ml.ml_line_count - old_lcount);

setmarks:
    if ((cmdmod.cmod_flags & CMOD_LOCKMARKS) == 0)
    {
	if (oap->block_mode)
	{
	    curbuf->b_op_end.lnum = oap->end.lnum;
	    curbuf->b_op_end.col = oap->start.col;
	}
	else
	    curbuf->b_op_end = oap->start;
	curbuf->b_op_start = oap->start;
    }

    return OK;
}


    static void
mb_adjust_opend(oparg_T *oap)
{
    char_u	*line;
    char_u	*ptr;

    if (!oap->inclusive)
	return;

    line = ml_get(oap->end.lnum);
    ptr = line + oap->end.col;
    if (*ptr != NUL)
    {
	ptr -= (*mb_head_off)(line, ptr);
	ptr += (*mb_ptr2len)(ptr) - 1;
	oap->end.col = ptr - line;
    }
}


    static void
replace_character(int c)
{
    int n = State;

    State = MODE_REPLACE;
    ins_char(c);
    State = n;
    
    dec_cursor();
}


    int
op_replace(oparg_T *oap, int c)
{
    int			n, numc;
    int			num_chars;
    char_u		*newp, *oldp;
    size_t		newlen, oldlen;
    struct block_def	bd;
    char_u		*after_p = NULL;
    int			had_ctrl_v_cr = FALSE;

    if ((curbuf->b_ml.ml_flags & ML_EMPTY ) || oap->empty)
	return OK;	    

    if (c == REPLACE_CR_NCHAR)
    {
	had_ctrl_v_cr = TRUE;
	c = CAR;
    }
    else if (c == REPLACE_NL_NCHAR)
    {
	had_ctrl_v_cr = TRUE;
	c = NL;
    }

    if (has_mbyte)
	mb_adjust_opend(oap);

    if (u_save((linenr_T)(oap->start.lnum - 1),
				       (linenr_T)(oap->end.lnum + 1)) == FAIL)
	return FAIL;

    
    if (oap->block_mode)
    {
	bd.is_MAX = (curwin->w_curswant == MAXCOL);
	for ( ; curwin->w_cursor.lnum <= oap->end.lnum; ++curwin->w_cursor.lnum)
	{
	    curwin->w_cursor.col = 0;  
	    block_prep(oap, &bd, curwin->w_cursor.lnum, TRUE);
	    if (bd.textlen == 0 && (!virtual_op || bd.is_MAX))
		continue;	    

	    
	    
	    
	    
	    
	    if (virtual_op && bd.is_short && *bd.textstart == NUL)
	    {
		pos_T vpos;

		vpos.lnum = curwin->w_cursor.lnum;
		getvpos(&vpos, oap->start_vcol);
		bd.startspaces += vpos.coladd;
		n = bd.startspaces;
	    }
	    else
		
		n = (bd.startspaces ? bd.start_char_vcols - 1 : 0);

	    
	    n += (bd.endspaces
		    && !bd.is_oneChar
		    && bd.end_char_vcols > 0) ? bd.end_char_vcols - 1 : 0;
	    
	    numc = oap->end_vcol - oap->start_vcol + 1;
	    if (bd.is_short && (!virtual_op || bd.is_MAX))
		numc -= (oap->end_vcol - bd.end_vcol) + 1;

	    
	    
	    if ((*mb_char2cells)(c) > 1)
	    {
		if ((numc & 1) && !bd.is_short)
		{
		    ++bd.endspaces;
		    ++n;
		}
		numc = numc / 2;
	    }

	    
	    num_chars = numc;
	    numc *= (*mb_char2len)(c);
	    
	    n += numc - bd.textlen;

	    oldp = ml_get_curline();
	    oldlen = ml_get_curline_len();
	    newp = alloc(oldlen + 1 + n);
	    if (newp == NULL)
		continue;
	    vim_memset(newp, NUL, (size_t)(oldlen + 1 + n));
	    
	    mch_memmove(newp, oldp, (size_t)bd.textcol);
	    newlen = bd.textcol;
	    
	    vim_memset(newp + newlen, ' ', (size_t)bd.startspaces);
	    newlen += bd.startspaces;
	    
	    
	    
	    if (had_ctrl_v_cr || (c != '\r' && c != '\n'))
	    {
		if (has_mbyte)
		{
		    while (--num_chars >= 0)
			newlen += (*mb_char2bytes)(c, newp + newlen);
		}
		else
		{
		    vim_memset(newp + newlen, c, (size_t)numc);
		    newlen += numc;
		}
		if (!bd.is_short)
		{
		    
		    vim_memset(newp + newlen, ' ', (size_t)bd.endspaces);
		    
		    STRCPY(newp + newlen + bd.endspaces,
				oldp + bd.textcol + bd.textlen);
		}
	    }
	    else
	    {
		
		after_p = alloc(oldlen + 1 + n - newlen);
		if (after_p != NULL)
		    STRCPY(after_p, oldp + bd.textcol + bd.textlen);
	    }

	    
	    ml_replace(curwin->w_cursor.lnum, newp, FALSE);
	    if (after_p != NULL)
	    {
		ml_append(curwin->w_cursor.lnum++, after_p, 0, FALSE);
		appended_lines_mark(curwin->w_cursor.lnum, 1L);
		oap->end.lnum++;
		vim_free(after_p);
	    }
	}
    }
    else
    {
	
	if (oap->motion_type == MLINE)
	{
	    oap->start.col = 0;
	    curwin->w_cursor.col = 0;
	    oap->end.col = ml_get_len(oap->end.lnum);
	    if (oap->end.col)
		--oap->end.col;
	}
	else if (!oap->inclusive)
	    dec(&(oap->end));

	while (LTOREQ_POS(curwin->w_cursor, oap->end))
	{
	    int done = FALSE;

	    n = gchar_cursor();
	    if (n != NUL)
	    {
		int new_byte_len = (*mb_char2len)(c);
		int old_byte_len = mb_ptr2len(ml_get_cursor());

		if (new_byte_len > 1 || old_byte_len > 1)
		{
		    
		    
		    if (curwin->w_cursor.lnum == oap->end.lnum)
			oap->end.col += new_byte_len - old_byte_len;
		    replace_character(c);
		    done = TRUE;
		}
		else
		{
		    if (n == TAB)
		    {
			int end_vcol = 0;

			if (curwin->w_cursor.lnum == oap->end.lnum)
			{
			    
			    
			    end_vcol = getviscol2(oap->end.col,
							     oap->end.coladd);
			}
			coladvance_force(getviscol());
			if (curwin->w_cursor.lnum == oap->end.lnum)
			    getvpos(&oap->end, end_vcol);
		    }
		    
		    if (gchar_cursor() != NUL)
		    {
			PBYTE(curwin->w_cursor, c);
			done = TRUE;
		    }
		}
	    }
	    if (!done && virtual_op && curwin->w_cursor.lnum == oap->end.lnum)
	    {
		int virtcols = oap->end.coladd;

		if (curwin->w_cursor.lnum == oap->start.lnum
			&& oap->start.col == oap->end.col && oap->start.coladd)
		    virtcols -= oap->start.coladd;

		
		
		
		coladvance_force(getviscol2(oap->end.col, oap->end.coladd) + 1);
		curwin->w_cursor.col -= (virtcols + 1);
		for (; virtcols >= 0; virtcols--)
		{
		    if ((*mb_char2len)(c) > 1)
		       replace_character(c);
		    else
			PBYTE(curwin->w_cursor, c);
		    if (inc(&curwin->w_cursor) == -1)
			break;
		}
	    }

	    
	    if (inc_cursor() == -1)
		break;
	}
    }

    curwin->w_cursor = oap->start;
    check_cursor();
    changed_lines(oap->start.lnum, oap->start.col, oap->end.lnum + 1, 0L);

    if ((cmdmod.cmod_flags & CMOD_LOCKMARKS) == 0)
    {
	
	curbuf->b_op_start = oap->start;
	curbuf->b_op_end = oap->end;
    }

    return OK;
}

static int swapchars(int op_type, pos_T *pos, int length);


    static void
op_tilde(oparg_T *oap)
{
    pos_T		pos;
    struct block_def	bd;
    int			did_change = FALSE;

    if (u_save((linenr_T)(oap->start.lnum - 1),
				       (linenr_T)(oap->end.lnum + 1)) == FAIL)
	return;

    pos = oap->start;
    if (oap->block_mode)		    
    {
	for (; pos.lnum <= oap->end.lnum; ++pos.lnum)
	{
	    int one_change;

	    block_prep(oap, &bd, pos.lnum, FALSE);
	    pos.col = bd.textcol;
	    one_change = swapchars(oap->op_type, &pos, bd.textlen);
	    did_change |= one_change;

#ifdef FEAT_NETBEANS_INTG
	    if (netbeans_active() && one_change)
	    {
		char_u *ptr;

		netbeans_removed(curbuf, pos.lnum, bd.textcol,
							    (int)bd.textlen);
		
		ptr = ml_get_buf(curbuf, pos.lnum, FALSE);
		netbeans_inserted(curbuf, pos.lnum, bd.textcol,
						&ptr[bd.textcol], bd.textlen);
	    }
#endif
	}
	if (did_change)
	    changed_lines(oap->start.lnum, 0, oap->end.lnum + 1, 0L);
    }
    else				    
    {
	if (oap->motion_type == MLINE)
	{
	    oap->start.col = 0;
	    pos.col = 0;
	    oap->end.col = ml_get_len(oap->end.lnum);
	    if (oap->end.col)
		--oap->end.col;
	}
	else if (!oap->inclusive)
	    dec(&(oap->end));

	if (pos.lnum == oap->end.lnum)
	    did_change = swapchars(oap->op_type, &pos,
						  oap->end.col - pos.col + 1);
	else
	    for (;;)
	    {
		did_change |= swapchars(oap->op_type, &pos,
			pos.lnum == oap->end.lnum ? oap->end.col + 1
						  : ml_get_pos_len(&pos));
		if (LTOREQ_POS(oap->end, pos) || inc(&pos) == -1)
		    break;
	    }
	if (did_change)
	{
	    changed_lines(oap->start.lnum, oap->start.col, oap->end.lnum + 1,
									  0L);
#ifdef FEAT_NETBEANS_INTG
	    if (netbeans_active())
	    {
		char_u *ptr;
		int count;

		pos = oap->start;
		while (pos.lnum < oap->end.lnum)
		{
		    ptr = ml_get_buf(curbuf, pos.lnum, FALSE);
		    count = ml_get_buf_len(curbuf, pos.lnum) - pos.col;
		    netbeans_removed(curbuf, pos.lnum, pos.col, (int)count);
		    
		    ptr = ml_get_buf(curbuf, pos.lnum, FALSE);
		    netbeans_inserted(curbuf, pos.lnum, pos.col,
							&ptr[pos.col], count);
		    pos.col = 0;
		    pos.lnum++;
		}
		count = oap->end.col - pos.col + 1;
		netbeans_removed(curbuf, pos.lnum, pos.col, (int)count);
		
		ptr = ml_get_buf(curbuf, pos.lnum, FALSE);
		netbeans_inserted(curbuf, pos.lnum, pos.col,
							&ptr[pos.col], count);
	    }
#endif
	}
    }

    if (!did_change && oap->is_VIsual)
	
	redraw_curbuf_later(UPD_INVERTED);

    if ((cmdmod.cmod_flags & CMOD_LOCKMARKS) == 0)
    {
	
	curbuf->b_op_start = oap->start;
	curbuf->b_op_end = oap->end;
    }

    if (oap->line_count > p_report)
	smsg(NGETTEXT("%ld line changed", "%ld lines changed",
					    oap->line_count), oap->line_count);
}


    static int
swapchars(int op_type, pos_T *pos, int length)
{
    int todo;
    int	did_change = 0;

    for (todo = length; todo > 0; --todo)
    {
	if (has_mbyte)
	{
	    int len = (*mb_ptr2len)(ml_get_pos(pos));

	    
	    if (len > 0)
		todo -= len - 1;
	}
	did_change |= swapchar(op_type, pos);
	if (inc(pos) == -1)    
	    break;
    }
    return did_change;
}


    int
swapchar(int op_type, pos_T *pos)
{
    int	    c;
    int	    nc;

    c = gchar_pos(pos);

    
    if (c >= 0x80 && op_type == OP_ROT13)
	return FALSE;

    
    if ((op_type == OP_UPPER || op_type == OP_NOP || op_type == OP_TILDE)
	    && c == 0xdf
	    && (enc_latin1like || STRCMP(p_enc, "iso-8859-2") == 0))
    {
	pos_T   sp = curwin->w_cursor;

	
	curwin->w_cursor = *pos;
	del_char(FALSE);
	ins_char(0x1E9E);
	curwin->w_cursor = sp;
	return TRUE;
    }

    if (enc_dbcs != 0 && c >= 0x100)	
	return FALSE;
    nc = c;
    if (MB_ISLOWER(c))
    {
	if (op_type == OP_ROT13)
	    nc = ROT13(c, 'a');
	else if (op_type != OP_LOWER)
	    nc = MB_TOUPPER(c);
    }
    else if (MB_ISUPPER(c))
    {
	if (op_type == OP_ROT13)
	    nc = ROT13(c, 'A');
	else if (op_type != OP_UPPER)
	    nc = MB_TOLOWER(c);
    }
    if (nc != c)
    {
	if (enc_utf8 && (c >= 0x80 || nc >= 0x80))
	{
	    pos_T   sp = curwin->w_cursor;

	    curwin->w_cursor = *pos;
	    
	    del_bytes(utf_ptr2len(ml_get_cursor()), FALSE, FALSE);
	    ins_char(nc);
	    curwin->w_cursor = sp;
	}
	else
	    PBYTE(*pos, nc);
	return TRUE;
    }
    return FALSE;
}


    void
op_insert(oparg_T *oap, int count1)
{
    int		pre_textlen = 0;
    colnr_T		ind_pre_col = 0, ind_post_col;
    int			ind_pre_vcol = 0, ind_post_vcol = 0;
    struct block_def	bd;
    int			i;
    pos_T		t1;
    pos_T		start_insert;

    
    bd.is_MAX = (curwin->w_curswant == MAXCOL);

    
    curwin->w_cursor.lnum = oap->start.lnum;
    update_screen(UPD_INVERTED);

    if (oap->block_mode)
    {
	
	
	
	
	
	
	
	if (curwin->w_cursor.coladd > 0)
	{
	    int		old_ve_flags = curwin->w_ve_flags;

	    if (u_save_cursor() == FAIL)
		return;

	    curwin->w_ve_flags = VE_ALL;
	    coladvance_force(oap->op_type == OP_APPEND
					   ? oap->end_vcol + 1 : getviscol());
	    if (oap->op_type == OP_APPEND)
		--curwin->w_cursor.col;
	    curwin->w_ve_flags = old_ve_flags;
	}
	
	block_prep(oap, &bd, oap->start.lnum, TRUE);
	
	ind_pre_col = (colnr_T)getwhitecols_curline();
	ind_pre_vcol = get_indent();
	pre_textlen = ml_get_len(oap->start.lnum) - bd.textcol;
	if (oap->op_type == OP_APPEND)
	    pre_textlen -= bd.textlen;
    }

    if (oap->op_type == OP_APPEND)
    {
	if (oap->block_mode && curwin->w_cursor.coladd == 0)
	{
	    
	    curwin->w_set_curswant = TRUE;
	    while (*ml_get_cursor() != NUL
		    && (curwin->w_cursor.col < bd.textcol + bd.textlen))
		++curwin->w_cursor.col;
	    if (bd.is_short && !bd.is_MAX)
	    {
		
		
		if (u_save_cursor() == FAIL)
		    return;
		for (i = 0; i < bd.endspaces; ++i)
		    ins_char(' ');
		bd.textlen += bd.endspaces;
	    }
	}
	else
	{
	    curwin->w_cursor = oap->end;
	    check_cursor_col();

	    
	    if (!LINEEMPTY(curwin->w_cursor.lnum)
		    && oap->start_vcol != oap->end_vcol)
		inc_cursor();
	}
    }

    t1 = oap->start;
    start_insert = curwin->w_cursor;
    (void)edit(NUL, FALSE, (linenr_T)count1);

    
    
    
    if (t1.lnum == curbuf->b_op_start_orig.lnum
	    && LT_POS(curbuf->b_op_start_orig, t1))
	oap->start = curbuf->b_op_start_orig;

    
    
    
    if (curwin->w_cursor.lnum != oap->start.lnum || got_int)
	return;

    if (oap->block_mode)
    {
	int			ins_len;
	char_u			*firstline, *ins_text;
	struct block_def	bd2;
	int			did_indent = FALSE;
	size_t			len;
	size_t			add;
	
	int			offset = 0;

	
	
	ind_post_col = (colnr_T)getwhitecols_curline();
	if (curbuf->b_op_start.col > ind_pre_col && ind_post_col > ind_pre_col)
	{
	    bd.textcol += ind_post_col - ind_pre_col;
	    ind_post_vcol = get_indent();
	    bd.start_vcol += ind_post_vcol - ind_pre_vcol;
	    did_indent = TRUE;
	}

	
	
	
	if (oap->start.lnum == curbuf->b_op_start_orig.lnum
						  && !bd.is_MAX && !did_indent)
	{
	    int t = getviscol2(curbuf->b_op_start_orig.col,
					       curbuf->b_op_start_orig.coladd);

	    if (oap->op_type == OP_INSERT
		    && oap->start.col + oap->start.coladd
			    != curbuf->b_op_start_orig.col
					      + curbuf->b_op_start_orig.coladd)
	    {
		oap->start.col = curbuf->b_op_start_orig.col;
		pre_textlen -= t - oap->start_vcol;
		oap->start_vcol = t;
	    }
	    else if (oap->op_type == OP_APPEND
		    && oap->start.col + oap->start.coladd
			    >= curbuf->b_op_start_orig.col
					      + curbuf->b_op_start_orig.coladd)
	    {
		oap->start.col = curbuf->b_op_start_orig.col;
		
		pre_textlen += bd.textlen;
		pre_textlen -= t - oap->start_vcol;
		oap->start_vcol = t;
		oap->op_type = OP_INSERT;
	    }
	}

	
	
	
	
	
	
	if (did_indent && bd.textcol - ind_post_col > 0)
	{
	    oap->start.col += ind_post_col - ind_pre_col;
	    oap->start_vcol += ind_post_vcol - ind_pre_vcol;
	    oap->end.col += ind_post_col - ind_pre_col;
	    oap->end_vcol += ind_post_vcol - ind_pre_vcol;
	}
	block_prep(oap, &bd2, oap->start.lnum, TRUE);
	if (did_indent && bd.textcol - ind_post_col > 0)
	{
	    
	    oap->start.col -= ind_post_col - ind_pre_col;
	    oap->start_vcol -= ind_post_vcol - ind_pre_vcol;
	    oap->end.col -= ind_post_col - ind_pre_col;
	    oap->end_vcol -= ind_post_vcol - ind_pre_vcol;
	}
	if (!bd.is_MAX || bd2.textlen < bd.textlen)
	{
	    if (oap->op_type == OP_APPEND)
	    {
		pre_textlen += bd2.textlen - bd.textlen;
		if (bd2.endspaces)
		    --bd2.textlen;
	    }
	    bd.textcol = bd2.textcol;
	    bd.textlen = bd2.textlen;
	}

	
	firstline = ml_get(oap->start.lnum);
	len = ml_get_len(oap->start.lnum);
	add = bd.textcol;
	if (oap->op_type == OP_APPEND)
	{
	    add += bd.textlen;
	    
	    if (bd.is_MAX
		&& (start_insert.lnum == Insstart.lnum
					   && start_insert.col > Insstart.col))
	    {
		offset = (start_insert.col - Insstart.col);
		add -= offset;
		if (oap->end_vcol > offset)
		    oap->end_vcol -= (offset + 1);
		else
		    
		    return;
	    }
	}
	if (add > len)
	    add = len;  
	firstline += add;
	len -= add;
	if (pre_textlen >= 0 && (ins_len = (int)len - pre_textlen - offset) > 0)
	{
	    ins_text = vim_strnsave(firstline, ins_len);
	    if (ins_text != NULL)
	    {
		
		if (u_save(oap->start.lnum,
					 (linenr_T)(oap->end.lnum + 1)) == OK)
		    block_insert(oap, ins_text, ins_len, (oap->op_type == OP_INSERT),
									 &bd);

		curwin->w_cursor.col = oap->start.col;
		check_cursor();
		vim_free(ins_text);
	    }
	}
    }
}


    int
op_change(oparg_T *oap)
{
    colnr_T		l;
    int			retval;
    linenr_T		linenr;
    int		pre_textlen = 0;
    int		pre_indent = 0;
    char_u		*firstline;
    char_u		*ins_text, *newp, *oldp;
    struct block_def	bd;

    l = oap->start.col;
    if (oap->motion_type == MLINE)
    {
	l = 0;
	can_si = may_do_si();	
    }

    
    
    if (curbuf->b_ml.ml_flags & ML_EMPTY)
    {
	if (u_save_cursor() == FAIL)
	    return FALSE;
    }
    else if (op_delete(oap) == FAIL)
	return FALSE;

    if ((l > curwin->w_cursor.col) && !LINEEMPTY(curwin->w_cursor.lnum)
							 && !virtual_op)
	inc_cursor();

    
    
    if (oap->block_mode)
    {
	
	if (virtual_op && (curwin->w_cursor.coladd > 0
						    || gchar_cursor() == NUL))
	    coladvance_force(getviscol());
	firstline = ml_get(oap->start.lnum);
	pre_textlen = ml_get_len(oap->start.lnum);
	pre_indent = (int)getwhitecols(firstline);
	bd.textcol = curwin->w_cursor.col;
    }

    if (oap->motion_type == MLINE)
	fix_indent();

    
    int save_finish_op = finish_op;
    finish_op = FALSE;

    retval = edit(NUL, FALSE, (linenr_T)1);

    finish_op = save_finish_op;

    
    if (oap->block_mode && oap->start.lnum != oap->end.lnum && !got_int)
    {
	int	ins_len;

	
	
	firstline = ml_get(oap->start.lnum);
	if (bd.textcol > (colnr_T)pre_indent)
	{
	    int new_indent = (int)getwhitecols(firstline);

	    pre_textlen += new_indent - pre_indent;
	    bd.textcol += new_indent - pre_indent;
	}

	ins_len = (int)ml_get_len(oap->start.lnum) - pre_textlen;
	if (ins_len > 0)
	{
	    
	    
	    if ((ins_text = alloc(ins_len + 1)) != NULL)
	    {
		vim_strncpy(ins_text, firstline + bd.textcol, ins_len);
		for (linenr = oap->start.lnum + 1; linenr <= oap->end.lnum;
								     linenr++)
		{
		    block_prep(oap, &bd, linenr, TRUE);
		    if (!bd.is_short || virtual_op)
		    {
			pos_T vpos;
			size_t newlen;

			
			
			if (bd.is_short)
			{
			    vpos.lnum = linenr;
			    (void)getvpos(&vpos, oap->start_vcol);
			}
			else
			    vpos.coladd = 0;
			oldp = ml_get(linenr);
			newp = alloc(ml_get_len(linenr) + vpos.coladd + ins_len + 1);
			if (newp == NULL)
			    continue;
			
			mch_memmove(newp, oldp, (size_t)bd.textcol);
			newlen = bd.textcol;
			vim_memset(newp + newlen, ' ', (size_t)vpos.coladd);
			newlen += vpos.coladd;
			mch_memmove(newp + newlen, ins_text, ins_len);
			STRCPY(newp + newlen + ins_len, oldp + bd.textcol);
			ml_replace(linenr, newp, FALSE);
#ifdef FEAT_PROP_POPUP
			
			if (curbuf->b_has_textprop)
			    adjust_prop_columns(linenr, bd.textcol,
						     vpos.coladd + (int)ins_len, 0);
#endif
		    }
		}
		check_cursor();

		changed_lines(oap->start.lnum + 1, 0, oap->end.lnum + 1, 0L);
	    }
	    vim_free(ins_text);
	}
    }
    auto_format(FALSE, TRUE);

    return retval;
}


    void
adjust_cursor_eol(void)
{
    unsigned int cur_ve_flags = get_ve_flags();

    int adj_cursor = (curwin->w_cursor.col > 0
				&& gchar_cursor() == NUL
				&& (cur_ve_flags & VE_ONEMORE) == 0
				&& !(restart_edit || (State & MODE_INSERT)));
    if (!adj_cursor)
	return;

    
    dec_cursor();

    if (cur_ve_flags == VE_ALL)
    {
	colnr_T	    scol, ecol;

	
	getvcol(curwin, &curwin->w_cursor, &scol, NULL, &ecol);
	curwin->w_cursor.coladd = ecol - scol + 1;
    }
}


    char_u *
skip_comment(
    char_u   *line,
    int      process,
    int	     include_space,
    int      *is_comment)
{
    char_u *comment_flags = NULL;
    int    lead_len;
    int    leader_offset = get_last_leader_offset(line, &comment_flags);

    *is_comment = FALSE;
    if (leader_offset != -1)
    {
	
	
	while (*comment_flags)
	{
	    if (*comment_flags == COM_END
		    || *comment_flags == ':')
		break;
	    ++comment_flags;
	}
	if (*comment_flags != COM_END)
	    *is_comment = TRUE;
    }

    if (process == FALSE)
	return line;

    lead_len = get_leader_len(line, &comment_flags, FALSE, include_space);

    if (lead_len == 0)
	return line;

    
    
    
    
    while (*comment_flags)
    {
	if (*comment_flags == COM_END
		|| *comment_flags == ':')
	    break;
	++comment_flags;
    }

    
    
    
    if (*comment_flags == ':' || *comment_flags == NUL)
	line += lead_len;

    return line;
}


    int
do_join(
    int    count,
    int	    insert_space,
    int	    save_undo,
    int	    use_formatoptions UNUSED,
    int	    setmark)
{
    char_u	*curr = NULL;
    char_u      *curr_start = NULL;
    char_u	*cend;
    char_u	*newp;
    size_t	newp_len;
    char_u	*spaces;	
    int		endcurr1 = NUL;
    int		endcurr2 = NUL;
    int		currsize = 0;	
    int		sumsize = 0;	
    linenr_T	t;
    colnr_T	col = 0;
    int		ret = OK;
    int		*comments = NULL;
    int		remove_comments = (use_formatoptions == TRUE)
				  && has_format_option(FO_REMOVE_COMS);
    int		prev_was_comment;
#ifdef FEAT_PROP_POPUP
    int		propcount = 0;	
    int		props_remaining;
#endif

    if (save_undo && u_save((linenr_T)(curwin->w_cursor.lnum - 1),
			    (linenr_T)(curwin->w_cursor.lnum + count)) == FAIL)
	return FAIL;

    
    
    
    spaces = lalloc_clear(count, TRUE);
    if (spaces == NULL)
	return FAIL;
    if (remove_comments)
    {
	comments = lalloc_clear(count * sizeof(int), TRUE);
	if (comments == NULL)
	{
	    vim_free(spaces);
	    return FAIL;
	}
    }

    
    for (t = 0; t < count; ++t)
    {
	curr = curr_start = ml_get((linenr_T)(curwin->w_cursor.lnum + t));
#ifdef FEAT_PROP_POPUP
	propcount += count_props((linenr_T) (curwin->w_cursor.lnum + t),
							t > 0, t + 1 == count);
#endif
	if (t == 0 && setmark && (cmdmod.cmod_flags & CMOD_LOCKMARKS) == 0)
	{
	    
	    curwin->w_buffer->b_op_start.lnum = curwin->w_cursor.lnum;
	    curwin->w_buffer->b_op_start.col  = (colnr_T)STRLEN(curr);
	}
	if (remove_comments)
	{
	    
	    
	    if (t > 0 && prev_was_comment)
	    {

		char_u *new_curr = skip_comment(curr, TRUE, insert_space,
							   &prev_was_comment);
		comments[t] = (int)(new_curr - curr);
		curr = new_curr;
	    }
	    else
		curr = skip_comment(curr, FALSE, insert_space,
							   &prev_was_comment);
	}

	if (insert_space && t > 0)
	{
	    curr = skipwhite(curr);
	    if (*curr != NUL && *curr != ')'
		    && sumsize != 0 && endcurr1 != TAB
		    && (!has_format_option(FO_MBYTE_JOIN)
			|| (mb_ptr2char(curr) < 0x100 && endcurr1 < 0x100))
		    && (!has_format_option(FO_MBYTE_JOIN2)
			|| (mb_ptr2char(curr) < 0x100
			    && !(enc_utf8 && utf_eat_space(endcurr1)))
			|| (endcurr1 < 0x100
			    && !(enc_utf8 && utf_eat_space(mb_ptr2char(curr)))))
	       )
	    {
		
		if (endcurr1 == ' ')
		    endcurr1 = endcurr2;
		else
		    ++spaces[t];
		
		if (       p_js
			&& (endcurr1 == '.'
			    || (vim_strchr(p_cpo, CPO_JOINSP) == NULL
				&& (endcurr1 == '?' || endcurr1 == '!'))))
		    ++spaces[t];
	    }
	}
	currsize = (int)STRLEN(curr);
	sumsize += currsize + spaces[t];
	endcurr1 = endcurr2 = NUL;
	if (insert_space && currsize > 0)
	{
	    if (has_mbyte)
	    {
		cend = curr + currsize;
		MB_PTR_BACK(curr, cend);
		endcurr1 = (*mb_ptr2char)(cend);
		if (cend > curr)
		{
		    MB_PTR_BACK(curr, cend);
		    endcurr2 = (*mb_ptr2char)(cend);
		}
	    }
	    else
	    {
		endcurr1 = *(curr + currsize - 1);
		if (currsize > 1)
		    endcurr2 = *(curr + currsize - 2);
	    }
	}
	line_breakcheck();
	if (got_int)
	{
	    ret = FAIL;
	    goto theend;
	}
    }

    
    col = sumsize - currsize - spaces[count - 1];

    
    newp_len = sumsize + 1;
#ifdef FEAT_PROP_POPUP
    newp_len += propcount * sizeof(textprop_T);
#endif
    newp = alloc(newp_len);
    if (newp == NULL)
    {
	ret = FAIL;
	goto theend;
    }
    cend = newp + sumsize;
    *cend = 0;

    
#ifdef FEAT_PROP_POPUP
    props_remaining = propcount;
#endif
    for (t = count - 1; ; --t)
    {
	int spaces_removed;

	cend -= currsize;
	mch_memmove(cend, curr, (size_t)currsize);

	if (spaces[t] > 0)
	{
	    cend -= spaces[t];
	    vim_memset(cend, ' ', (size_t)(spaces[t]));
	}

	
	
	spaces_removed = (curr - curr_start) - spaces[t];

	mark_col_adjust(curwin->w_cursor.lnum + t, (colnr_T)0, -t,
			 (int)(cend - newp - spaces_removed), spaces_removed);
#ifdef FEAT_PROP_POPUP
	prepend_joined_props(newp + sumsize + 1, propcount, &props_remaining,
		curwin->w_cursor.lnum + t, t == count - 1,
		(int)(cend - newp), spaces_removed);
#endif
	if (t == 0)
	    break;
	curr = curr_start = ml_get((linenr_T)(curwin->w_cursor.lnum + t - 1));
	if (remove_comments)
	    curr += comments[t - 1];
	if (insert_space && t > 1)
	    curr = skipwhite(curr);
	currsize = (int)STRLEN(curr);
    }

    ml_replace_len(curwin->w_cursor.lnum, newp, (colnr_T)newp_len, TRUE, FALSE);

    if (setmark && (cmdmod.cmod_flags & CMOD_LOCKMARKS) == 0)
    {
	
	curwin->w_buffer->b_op_end.lnum = curwin->w_cursor.lnum;
	curwin->w_buffer->b_op_end.col  = (colnr_T)sumsize;
    }

    
    
    changed_lines(curwin->w_cursor.lnum, currsize,
					       curwin->w_cursor.lnum + 1, 0L);
    
    t = curwin->w_cursor.lnum;
    ++curwin->w_cursor.lnum;
    del_lines(count - 1, FALSE);
    curwin->w_cursor.lnum = t;

    
    curwin->w_cursor.col =
		    (vim_strchr(p_cpo, CPO_JOINCOL) != NULL ? currsize : col);
    check_cursor_col();

    curwin->w_cursor.coladd = 0;
    curwin->w_set_curswant = TRUE;

theend:
    vim_free(spaces);
    if (remove_comments)
	vim_free(comments);
    return ret;
}

#ifdef FEAT_LINEBREAK

    static int
reset_lbr(void)
{
    if (!curwin->w_p_lbr)
	return FALSE;
    
    curwin->w_p_lbr = FALSE;
    curwin->w_valid &= ~(VALID_WROW|VALID_WCOL|VALID_VIRTCOL);
    return TRUE;
}


    static void
restore_lbr(int lbr_saved)
{
    if (curwin->w_p_lbr || !lbr_saved)
	return;

    
    curwin->w_p_lbr = TRUE;
    curwin->w_valid &= ~(VALID_WROW|VALID_WCOL|VALID_VIRTCOL);
}
#endif


    void
block_prep(
    oparg_T		*oap,
    struct block_def	*bdp,
    linenr_T		lnum,
    int			is_del)
{
    int		incr = 0;
    char_u	*pend;
    char_u	*pstart;
    char_u	*line;
    char_u	*prev_pstart;
    char_u	*prev_pend;
    chartabsize_T cts;
#ifdef FEAT_LINEBREAK
		
    int		lbr_saved = reset_lbr();
#endif

    bdp->startspaces = 0;
    bdp->endspaces = 0;
    bdp->textlen = 0;
    bdp->start_vcol = 0;
    bdp->end_vcol = 0;
    bdp->is_short = FALSE;
    bdp->is_oneChar = FALSE;
    bdp->pre_whitesp = 0;
    bdp->pre_whitesp_c = 0;
    bdp->end_char_vcols = 0;
    bdp->start_char_vcols = 0;

    line = ml_get(lnum);
    prev_pstart = line;
    init_chartabsize_arg(&cts, curwin, lnum, bdp->start_vcol, line, line);
    while (cts.cts_vcol < oap->start_vcol && *cts.cts_ptr != NUL)
    {
	
	incr = lbr_chartabsize(&cts);
	cts.cts_vcol += incr;
	if (VIM_ISWHITE(*cts.cts_ptr))
	{
	    bdp->pre_whitesp += incr;
	    bdp->pre_whitesp_c++;
	}
	else
	{
	    bdp->pre_whitesp = 0;
	    bdp->pre_whitesp_c = 0;
	}
	prev_pstart = cts.cts_ptr;
	MB_PTR_ADV(cts.cts_ptr);
    }
    bdp->start_vcol = cts.cts_vcol;
    pstart = cts.cts_ptr;
    clear_chartabsize_arg(&cts);

    bdp->start_char_vcols = incr;
    if (bdp->start_vcol < oap->start_vcol)	
    {
	bdp->end_vcol = bdp->start_vcol;
	bdp->is_short = TRUE;
	if (!is_del || oap->op_type == OP_APPEND)
	    bdp->endspaces = oap->end_vcol - oap->start_vcol + 1;
    }
    else
    {
	
	
	bdp->startspaces = bdp->start_vcol - oap->start_vcol;
	if (is_del && bdp->startspaces)
	    bdp->startspaces = bdp->start_char_vcols - bdp->startspaces;
	pend = pstart;
	bdp->end_vcol = bdp->start_vcol;
	if (bdp->end_vcol > oap->end_vcol)	
	{
	    bdp->is_oneChar = TRUE;
	    if (oap->op_type == OP_INSERT)
		bdp->endspaces = bdp->start_char_vcols - bdp->startspaces;
	    else if (oap->op_type == OP_APPEND)
	    {
		bdp->startspaces += oap->end_vcol - oap->start_vcol + 1;
		bdp->endspaces = bdp->start_char_vcols - bdp->startspaces;
	    }
	    else
	    {
		bdp->startspaces = oap->end_vcol - oap->start_vcol + 1;
		if (is_del && oap->op_type != OP_LSHIFT)
		{
		    
		    
		    
		    bdp->startspaces = bdp->start_char_vcols
					- (bdp->start_vcol - oap->start_vcol);
		    bdp->endspaces = bdp->end_vcol - oap->end_vcol - 1;
		}
	    }
	}
	else
	{
	    init_chartabsize_arg(&cts, curwin, lnum, bdp->end_vcol,
								  line, pend);
	    prev_pend = pend;
	    while (cts.cts_vcol <= oap->end_vcol && *cts.cts_ptr != NUL)
	    {
		
		prev_pend = cts.cts_ptr;
		incr = lbr_chartabsize_adv(&cts);
		cts.cts_vcol += incr;
	    }
	    bdp->end_vcol = cts.cts_vcol;
	    pend = cts.cts_ptr;
	    clear_chartabsize_arg(&cts);

	    if (bdp->end_vcol <= oap->end_vcol
		    && (!is_del
			|| oap->op_type == OP_APPEND
			|| oap->op_type == OP_REPLACE)) 
	    {
		bdp->is_short = TRUE;
		
		
		
		
		if (oap->op_type == OP_APPEND || virtual_op)
		    bdp->endspaces = oap->end_vcol - bdp->end_vcol
							     + oap->inclusive;
		else
		    bdp->endspaces = 0; 
	    }
	    else if (bdp->end_vcol > oap->end_vcol)
	    {
		bdp->endspaces = bdp->end_vcol - oap->end_vcol - 1;
		if (!is_del && bdp->endspaces)
		{
		    bdp->endspaces = incr - bdp->endspaces;
		    if (pend != pstart)
			pend = prev_pend;
		}
	    }
	}
	bdp->end_char_vcols = incr;
	if (is_del && bdp->startspaces)
	    pstart = prev_pstart;
	bdp->textlen = (int)(pend - pstart);
    }
    bdp->textcol = (colnr_T) (pstart - line);
    bdp->textstart = pstart;
#ifdef FEAT_LINEBREAK
    restore_lbr(lbr_saved);
#endif
}


    void
charwise_block_prep(
    pos_T		start,
    pos_T		end,
    struct block_def	*bdp,
    linenr_T		lnum,
    int			inclusive)
{
    colnr_T startcol = 0, endcol = MAXCOL;
    colnr_T cs, ce;
    char_u *p;

    p = ml_get(lnum);
    bdp->startspaces = 0;
    bdp->endspaces = 0;
    bdp->is_oneChar = FALSE;
    bdp->start_char_vcols = 0;

    if (lnum == start.lnum)
    {
	startcol = start.col;
	if (virtual_op)
	{
	    getvcol(curwin, &start, &cs, NULL, &ce);
	    if (ce != cs && start.coladd > 0)
	    {
		
		
		bdp->start_char_vcols = ce - cs + 1;
		bdp->startspaces = bdp->start_char_vcols - start.coladd;
		if (bdp->startspaces < 0)
		    bdp->startspaces = 0;
		startcol++;
	    }
	}
    }

    if (lnum == end.lnum)
    {
	endcol = end.col;
	if (virtual_op)
	{
	    getvcol(curwin, &end, &cs, NULL, &ce);
	    if (p[endcol] == NUL || (cs + end.coladd < ce
			
			
			
			&& (*mb_head_off)(p, p + endcol) == 0))
	    {
		if (start.lnum == end.lnum && start.col == end.col)
		{
		    
		    bdp->is_oneChar = TRUE;
		    bdp->startspaces = end.coladd - start.coladd + inclusive;
		    endcol = startcol;
		}
		else
		{
		    bdp->endspaces = end.coladd + inclusive;
		    endcol -= inclusive;
		}
	    }
	}
    }
    if (endcol == MAXCOL)
	endcol = ml_get_len(lnum);
    if (startcol > endcol || bdp->is_oneChar)
	bdp->textlen = 0;
    else
	bdp->textlen = endcol - startcol + inclusive;
    bdp->textcol = startcol;
    bdp->textstart = p + startcol;
}


    void
op_addsub(
    oparg_T	*oap,
    linenr_T	Prenum1,	    
    int		g_cmd)		    
{
    pos_T		pos;
    struct block_def	bd;
    int			change_cnt = 0;
    linenr_T		amount = Prenum1;

    
    
    
#ifdef FEAT_FOLDING
    disable_fold_update++;
#endif

    if (!VIsual_active)
    {
	pos = curwin->w_cursor;
	if (u_save_cursor() == FAIL)
	{
#ifdef FEAT_FOLDING
	    disable_fold_update--;
#endif
	    return;
	}
	change_cnt = do_addsub(oap->op_type, &pos, 0, amount);
#ifdef FEAT_FOLDING
	disable_fold_update--;
#endif
	if (change_cnt)
	    changed_lines(pos.lnum, 0, pos.lnum + 1, 0L);
    }
    else
    {
	int	one_change;
	int	length;
	pos_T	startpos;

	if (u_save((linenr_T)(oap->start.lnum - 1),
					(linenr_T)(oap->end.lnum + 1)) == FAIL)
	{
#ifdef FEAT_FOLDING
	    disable_fold_update--;
#endif
	    return;
	}

	pos = oap->start;
	for (; pos.lnum <= oap->end.lnum; ++pos.lnum)
	{
	    if (oap->block_mode)		    
	    {
		block_prep(oap, &bd, pos.lnum, FALSE);
		pos.col = bd.textcol;
		length = bd.textlen;
	    }
	    else if (oap->motion_type == MLINE)
	    {
		curwin->w_cursor.col = 0;
		pos.col = 0;
		length = ml_get_len(pos.lnum);
	    }
	    else 
	    {
		if (pos.lnum == oap->start.lnum && !oap->inclusive)
		    dec(&(oap->end));
		length = ml_get_len(pos.lnum);
		pos.col = 0;
		if (pos.lnum == oap->start.lnum)
		{
		    pos.col += oap->start.col;
		    length -= oap->start.col;
		}
		if (pos.lnum == oap->end.lnum)
		{
		    length = ml_get_len(oap->end.lnum);
		    if (oap->end.col >= length)
			oap->end.col = length - 1;
		    length = oap->end.col - pos.col + 1;
		}
	    }
	    one_change = do_addsub(oap->op_type, &pos, length, amount);
	    if (one_change)
	    {
		
		if (change_cnt == 0)
		    startpos = curbuf->b_op_start;
		++change_cnt;
	    }

#ifdef FEAT_NETBEANS_INTG
	    if (netbeans_active() && one_change)
	    {
		char_u *ptr;

		netbeans_removed(curbuf, pos.lnum, pos.col, (int)length);
		ptr = ml_get_buf(curbuf, pos.lnum, FALSE);
		netbeans_inserted(curbuf, pos.lnum, pos.col,
						&ptr[pos.col], length);
	    }
#endif
	    if (g_cmd && one_change)
		amount += Prenum1;
	}

#ifdef FEAT_FOLDING
	disable_fold_update--;
#endif
	if (change_cnt)
	    changed_lines(oap->start.lnum, 0, oap->end.lnum + 1, 0L);

	if (!change_cnt && oap->is_VIsual)
	    
	    redraw_curbuf_later(UPD_INVERTED);

	
	
	if (change_cnt > 0 && (cmdmod.cmod_flags & CMOD_LOCKMARKS) == 0)
	    curbuf->b_op_start = startpos;

	if (change_cnt > p_report)
	    smsg(NGETTEXT("%d line changed", "%d lines changed",
						      change_cnt), change_cnt);
    }
}


    static int
do_addsub(
    int		op_type,
    pos_T	*pos,
    int		length,
    linenr_T	Prenum1)
{
    int		col;
    char_u	*buf1;
    char_u	buf2[NUMBUFLEN];
    int		pre;		
    static int	hexupper = FALSE;	
    uvarnumber_T	n;
    uvarnumber_T	oldn;
    char_u	*ptr;
    int		linelen;
    int		c;
    int		todel;
    int		do_hex;
    int		do_oct;
    int		do_bin;
    int		do_alpha;
    int		do_unsigned;
    int		do_blank;
    int		blank_unsigned = FALSE;	
    int		firstdigit;
    int		subtract;
    int		negative = FALSE;
    int		was_positive = TRUE;
    int		visual = VIsual_active;
    int		did_change = FALSE;
    pos_T	save_cursor = curwin->w_cursor;
    int		maxlen = 0;
    pos_T	startpos;
    pos_T	endpos;
    colnr_T	save_coladd = 0;

    do_hex = (vim_strchr(curbuf->b_p_nf, 'x') != NULL);	
    do_oct = (vim_strchr(curbuf->b_p_nf, 'o') != NULL);	
    do_bin = (vim_strchr(curbuf->b_p_nf, 'b') != NULL);	
    do_alpha = (vim_strchr(curbuf->b_p_nf, 'p') != NULL);	
    do_unsigned = (vim_strchr(curbuf->b_p_nf, 'u') != NULL);	
    do_blank = (vim_strchr(curbuf->b_p_nf, 'k') != NULL);	

    if (virtual_active())
    {
	save_coladd = pos->coladd;
	pos->coladd = 0;
    }

    curwin->w_cursor = *pos;
    ptr = ml_get(pos->lnum);
    linelen = ml_get_len(pos->lnum);
    col = pos->col;

    if (col + !!save_coladd >= linelen)
	goto theend;

    
    if (!VIsual_active)
    {
	if (do_bin)
	    while (col > 0 && vim_isbdigit(ptr[col]))
	    {
		--col;
		if (has_mbyte)
		    col -= (*mb_head_off)(ptr, ptr + col);
	    }

	if (do_hex)
	    while (col > 0 && vim_isxdigit(ptr[col]))
	    {
		--col;
		if (has_mbyte)
		    col -= (*mb_head_off)(ptr, ptr + col);
	    }

	if (       do_bin
		&& do_hex
		&& ! ((col > 0
		    && (ptr[col] == 'X'
			|| ptr[col] == 'x')
		    && ptr[col - 1] == '0'
		    && (!has_mbyte ||
			!(*mb_head_off)(ptr, ptr + col - 1))
		    && vim_isxdigit(ptr[col + 1]))))
	{

	    

	    col = pos->col;

	    while (col > 0 && vim_isdigit(ptr[col]))
	    {
		col--;
		if (has_mbyte)
		    col -= (*mb_head_off)(ptr, ptr + col);
	    }
	}

	if ((       do_hex
		&& col > 0
		&& (ptr[col] == 'X'
		    || ptr[col] == 'x')
		&& ptr[col - 1] == '0'
		&& (!has_mbyte ||
		    !(*mb_head_off)(ptr, ptr + col - 1))
		&& vim_isxdigit(ptr[col + 1])) ||
	    (       do_bin
		&& col > 0
		&& (ptr[col] == 'B'
		    || ptr[col] == 'b')
		&& ptr[col - 1] == '0'
		&& (!has_mbyte ||
		    !(*mb_head_off)(ptr, ptr + col - 1))
		&& vim_isbdigit(ptr[col + 1])))
	{
	    
	    --col;
	    if (has_mbyte)
		col -= (*mb_head_off)(ptr, ptr + col);
	}
	else
	{
	    
	    col = pos->col;

	    while (ptr[col] != NUL
		    && !vim_isdigit(ptr[col])
		    && !(do_alpha && ASCII_ISALPHA(ptr[col])))
		col += mb_ptr2len(ptr + col);

	    while (col > 0
		    && vim_isdigit(ptr[col - 1])
		    && !(do_alpha && ASCII_ISALPHA(ptr[col])))
	    {
		--col;
		if (has_mbyte)
		    col -= (*mb_head_off)(ptr, ptr + col);
	    }
	}
    }

    if (visual)
    {
	while (ptr[col] != NUL && length > 0
		&& !vim_isdigit(ptr[col])
		&& !(do_alpha && ASCII_ISALPHA(ptr[col])))
	{
	    int mb_len = mb_ptr2len(ptr + col);

	    col += mb_len;
	    length -= mb_len;
	}

	if (length == 0)
	    goto theend;

	if (col > pos->col && ptr[col - 1] == '-'
		&& (!has_mbyte || !(*mb_head_off)(ptr, ptr + col - 1))
		&& !do_unsigned)
	{
	    if (do_blank && col >= 2 && !VIM_ISWHITE(ptr[col - 2]))
		blank_unsigned = TRUE;
	    else
	    {
		negative = TRUE;
		was_positive = FALSE;
	    }
	}
    }

    
    firstdigit = ptr[col];
    if (!VIM_ISDIGIT(firstdigit) && !(do_alpha && ASCII_ISALPHA(firstdigit)))
    {
	beep_flush();
	goto theend;
    }

    if (do_alpha && ASCII_ISALPHA(firstdigit))
    {
	
	if (op_type == OP_NR_SUB)
	{
	    if (CharOrd(firstdigit) < Prenum1)
	    {
		if (SAFE_isupper(firstdigit))
		    firstdigit = 'A';
		else
		    firstdigit = 'a';
	    }
	    else
		firstdigit -= Prenum1;
	}
	else
	{
	    if (26 - CharOrd(firstdigit) - 1 < Prenum1)
	    {
		if (SAFE_isupper(firstdigit))
		    firstdigit = 'Z';
		else
		    firstdigit = 'z';
	    }
	    else
		firstdigit += Prenum1;
	}
	curwin->w_cursor.col = col;
	if (!did_change)
	    startpos = curwin->w_cursor;
	did_change = TRUE;
	(void)del_char(FALSE);
	ins_char(firstdigit);
	endpos = curwin->w_cursor;
	curwin->w_cursor.col = col;
    }
    else
    {
	pos_T	save_pos;
	int	i;

	if (col > 0 && ptr[col - 1] == '-'
		&& (!has_mbyte ||
		    !(*mb_head_off)(ptr, ptr + col - 1))
		&& !visual
		&& !do_unsigned)
	{
	    if (do_blank && col >= 2 && !VIM_ISWHITE(ptr[col - 2]))
		blank_unsigned = TRUE;
	    else
	    {
		
		--col;
		negative = TRUE;
	    }
	}

	
	if (visual && VIsual_mode != 'V')
	    maxlen = (curbuf->b_visual.vi_curswant == MAXCOL
		    ? linelen - col : length);

	int overflow = FALSE;
	vim_str2nr(ptr + col, &pre, &length,
		0 + (do_bin ? STR2NR_BIN : 0)
		    + (do_oct ? STR2NR_OCT : 0)
		    + (do_hex ? STR2NR_HEX : 0),
		NULL, &n, maxlen, FALSE, &overflow);

	
	if (pre && negative)
	{
	    ++col;
	    --length;
	    negative = FALSE;
	}
	
	subtract = FALSE;
	if (op_type == OP_NR_SUB)
	    subtract ^= TRUE;
	if (negative)
	    subtract ^= TRUE;

	oldn = n;
	if (!overflow)  
	{
	    if (subtract)
		n -= (uvarnumber_T)Prenum1;
	    else
		n += (uvarnumber_T)Prenum1;
	}

	
	if (!pre)
	{
	    if (subtract)
	    {
		if (n > oldn)
		{
		    n = 1 + (n ^ (uvarnumber_T)-1);
		    negative ^= TRUE;
		}
	    }
	    else
	    {
		
		if (n < oldn)
		{
		    n = (n ^ (uvarnumber_T)-1);
		    negative ^= TRUE;
		}
	    }
	    if (n == 0)
		negative = FALSE;
	}

	if ((do_unsigned || blank_unsigned) && negative)
	{
	    if (subtract)
		
		n = (uvarnumber_T)0;
	    else
		
		n = (uvarnumber_T)(-1);
	    negative = FALSE;
	}

	if (visual && !was_positive && !negative && col > 0)
	{
	    
	    col--;
	    length++;
	}

	
	curwin->w_cursor.col = col;
	if (!did_change)
	    startpos = curwin->w_cursor;
	did_change = TRUE;
	todel = length;
	c = gchar_cursor();
	
	if (c == '-')
	    --length;

	save_pos = curwin->w_cursor;
	for (i = 0; i < todel; ++i)
	{
	    if (c < 0x100 && SAFE_isalpha(c))
	    {
		if (SAFE_isupper(c))
		    hexupper = TRUE;
		else
		    hexupper = FALSE;
	    }
	    inc_cursor();
	    c = gchar_cursor();
	}
	curwin->w_cursor = save_pos;

	
	buf1 = alloc(length + NUMBUFLEN);
	if (buf1 == NULL)
	    goto theend;
	ptr = buf1;
	if (negative && (!visual || was_positive))
	    *ptr++ = '-';
	if (pre)
	{
	    *ptr++ = '0';
	    --length;
	}
	if (pre == 'b' || pre == 'B' ||
	    pre == 'x' || pre == 'X')
	{
	    *ptr++ = pre;
	    --length;
	}

	
	if (pre == 'b' || pre == 'B')
	{
	    int bit = 0;
	    int bits = sizeof(uvarnumber_T) * 8;

	    
	    for (bit = bits; bit > 0; bit--)
		if ((n >> (bit - 1)) & 0x1) break;

	    for (i = 0; bit > 0 && i < (NUMBUFLEN - 1); bit--)
		buf2[i++] = ((n >> (bit - 1)) & 0x1) ? '1' : '0';

	    buf2[i] = '\0';
	}
	else if (pre == 0)
	    vim_snprintf((char *)buf2, NUMBUFLEN, "%llu", n);
	else if (pre == '0')
	    vim_snprintf((char *)buf2, NUMBUFLEN, "%llo", n);
	else if (pre && hexupper)
	    vim_snprintf((char *)buf2, NUMBUFLEN, "%llX", n);
	else
	    vim_snprintf((char *)buf2, NUMBUFLEN, "%llx", n);
	length -= (int)STRLEN(buf2);

	
	if (firstdigit == '0' && !(do_oct && pre == 0))
	    while (length-- > 0)
		*ptr++ = '0';
	*ptr = NUL;

	STRCAT(buf1, buf2);

	
	
	
	save_pos = curwin->w_cursor;
	if (todel > 0)
	    inc_cursor();
	ins_str(buf1);		
	vim_free(buf1);

	
	if (todel > 0)
	{
	    int bytes_after = ml_get_curline_len() - curwin->w_cursor.col;

	    
	    curwin->w_cursor = save_pos;
	    (void)del_char(FALSE);
	    curwin->w_cursor.col = ml_get_curline_len() - bytes_after;
	    --todel;
	}
	while (todel-- > 0)
	    (void)del_char(FALSE);

	endpos = curwin->w_cursor;
	if (did_change && curwin->w_cursor.col)
	    --curwin->w_cursor.col;
    }

    if (did_change && (cmdmod.cmod_flags & CMOD_LOCKMARKS) == 0)
    {
	
	curbuf->b_op_start = startpos;
	curbuf->b_op_end = endpos;
	if (curbuf->b_op_end.col > 0)
	    --curbuf->b_op_end.col;
    }

theend:
    if (visual)
	curwin->w_cursor = save_cursor;
    else if (did_change)
	curwin->w_set_curswant = TRUE;
    else if (virtual_active())
	curwin->w_cursor.coladd = save_coladd;

    return did_change;
}

    void
clear_oparg(oparg_T *oap)
{
    CLEAR_POINTER(oap);
}


    static varnumber_T
line_count_info(
    char_u	*line,
    varnumber_T	*wc,
    varnumber_T	*cc,
    varnumber_T	limit,
    int		eol_size)
{
    varnumber_T	i;
    varnumber_T	words = 0;
    varnumber_T	chars = 0;
    int		is_word = 0;

    for (i = 0; i < limit && line[i] != NUL; )
    {
	if (is_word)
	{
	    if (vim_isspace(line[i]))
	    {
		words++;
		is_word = 0;
	    }
	}
	else if (!vim_isspace(line[i]))
	    is_word = 1;
	++chars;
	i += (*mb_ptr2len)(line + i);
    }

    if (is_word)
	words++;
    *wc += words;

    
    if (i < limit && line[i] == NUL)
    {
	i += eol_size;
	chars += eol_size;
    }
    *cc += chars;
    return i;
}


    void
cursor_pos_info(dict_T *dict)
{
    char_u	*p;
    char_u	buf1[50];
    char_u	buf2[40];
    linenr_T	lnum;
    varnumber_T	byte_count = 0;
    varnumber_T	bom_count  = 0;
    varnumber_T	byte_count_cursor = 0;
    varnumber_T	char_count = 0;
    varnumber_T	char_count_cursor = 0;
    varnumber_T	word_count = 0;
    varnumber_T	word_count_cursor = 0;
    int		eol_size;
    varnumber_T	last_check = 100000L;
    int	line_count_selected = 0;
    pos_T	min_pos, max_pos;
    oparg_T	oparg;
    struct block_def	bd;

    
    if (curbuf->b_ml.ml_flags & ML_EMPTY)
    {
	if (dict == NULL)
	{
	    msg(_(no_lines_msg));
	    return;
	}
    }
    else
    {
	if (get_fileformat(curbuf) == EOL_DOS)
	    eol_size = 2;
	else
	    eol_size = 1;

	if (VIsual_active)
	{
	    if (LT_POS(VIsual, curwin->w_cursor))
	    {
		min_pos = VIsual;
		max_pos = curwin->w_cursor;
	    }
	    else
	    {
		min_pos = curwin->w_cursor;
		max_pos = VIsual;
	    }
	    if (*p_sel == 'e' && max_pos.col > 0)
		--max_pos.col;

	    if (VIsual_mode == Ctrl_V)
	    {
#ifdef FEAT_LINEBREAK
		char_u * saved_sbr = p_sbr;
		char_u * saved_w_sbr = curwin->w_p_sbr;

		
		p_sbr = empty_option;
		curwin->w_p_sbr = empty_option;
#endif
		oparg.is_VIsual = 1;
		oparg.block_mode = TRUE;
		oparg.op_type = OP_NOP;
		getvcols(curwin, &min_pos, &max_pos,
					  &oparg.start_vcol, &oparg.end_vcol);
#ifdef FEAT_LINEBREAK
		p_sbr = saved_sbr;
		curwin->w_p_sbr = saved_w_sbr;
#endif
		if (curwin->w_curswant == MAXCOL)
		    oparg.end_vcol = MAXCOL;
		
		if (oparg.end_vcol < oparg.start_vcol)
		{
		    oparg.end_vcol += oparg.start_vcol;
		    oparg.start_vcol = oparg.end_vcol - oparg.start_vcol;
		    oparg.end_vcol -= oparg.start_vcol;
		}
	    }
	    line_count_selected = max_pos.lnum - min_pos.lnum + 1;
	}

	for (lnum = 1; lnum <= curbuf->b_ml.ml_line_count; ++lnum)
	{
	    
	    if (byte_count > last_check)
	    {
		ui_breakcheck();
		if (got_int)
		    return;
		last_check = byte_count + 100000L;
	    }

	    
	    if (VIsual_active
		    && lnum >= min_pos.lnum && lnum <= max_pos.lnum)
	    {
		char_u	    *s = NULL;
		int	    len = 0L;

		switch (VIsual_mode)
		{
		    case Ctrl_V:
			virtual_op = virtual_active();
			block_prep(&oparg, &bd, lnum, 0);
			virtual_op = MAYBE;
			s = bd.textstart;
			len = (int)bd.textlen;
			break;
		    case 'V':
			s = ml_get(lnum);
			len = MAXCOL;
			break;
		    case 'v':
			{
			    colnr_T start_col = (lnum == min_pos.lnum)
							   ? min_pos.col : 0;
			    colnr_T end_col = (lnum == max_pos.lnum)
				      ? max_pos.col - start_col + 1 : MAXCOL;

			    s = ml_get(lnum) + start_col;
			    len = end_col;
			}
			break;
		}
		if (s != NULL)
		{
		    byte_count_cursor += line_count_info(s, &word_count_cursor,
					   &char_count_cursor, len, eol_size);
		    if (lnum == curbuf->b_ml.ml_line_count
			    && !curbuf->b_p_eol
			    && (curbuf->b_p_bin || !curbuf->b_p_fixeol)
			    && (int)STRLEN(s) < len)
			byte_count_cursor -= eol_size;
		}
	    }
	    else
	    {
		
		if (lnum == curwin->w_cursor.lnum)
		{
		    word_count_cursor += word_count;
		    char_count_cursor += char_count;
		    byte_count_cursor = byte_count +
			line_count_info(ml_get(lnum),
				&word_count_cursor, &char_count_cursor,
				(varnumber_T)(curwin->w_cursor.col + 1),
				eol_size);
		}
	    }
	    
	    byte_count += line_count_info(ml_get(lnum), &word_count,
					 &char_count, (varnumber_T)MAXCOL,
					 eol_size);
	}

	
	if (!curbuf->b_p_eol && (curbuf->b_p_bin || !curbuf->b_p_fixeol))
	    byte_count -= eol_size;

	if (dict == NULL)
	{
	    if (VIsual_active)
	    {
		if (VIsual_mode == Ctrl_V && curwin->w_curswant < MAXCOL)
		{
		    getvcols(curwin, &min_pos, &max_pos, &min_pos.col,
								    &max_pos.col);
		    vim_snprintf((char *)buf1, sizeof(buf1), _("%ld Cols; "),
			    (int)(oparg.end_vcol - oparg.start_vcol + 1));
		}
		else
		    buf1[0] = NUL;

		if (char_count_cursor == byte_count_cursor
						    && char_count == byte_count)
		    vim_snprintf((char *)IObuff, IOSIZE,
			    _("Selected %s%ld of %ld Lines; %lld of %lld Words; %lld of %lld Bytes"),
			    buf1, line_count_selected,
			    (int)curbuf->b_ml.ml_line_count,
			    word_count_cursor,
			    word_count,
			    byte_count_cursor,
			    byte_count);
		else
		    vim_snprintf((char *)IObuff, IOSIZE,
			    _("Selected %s%ld of %ld Lines; %lld of %lld Words; %lld of %lld Chars; %lld of %lld Bytes"),
			    buf1, line_count_selected,
			    (int)curbuf->b_ml.ml_line_count,
			    word_count_cursor,
			    word_count,
			    char_count_cursor,
			    char_count,
			    byte_count_cursor,
			    byte_count);
	    }
	    else
	    {
		p = ml_get_curline();
		validate_virtcol();
		col_print(buf1, sizeof(buf1), (int)curwin->w_cursor.col + 1,
			(int)curwin->w_virtcol + 1);
		col_print(buf2, sizeof(buf2), ml_get_curline_len(),
							   linetabsize_str(p));

		if (char_count_cursor == byte_count_cursor
			&& char_count == byte_count)
		    vim_snprintf((char *)IObuff, IOSIZE,
			_("Col %s of %s; Line %ld of %ld; Word %lld of %lld; Byte %lld of %lld"),
			(char *)buf1, (char *)buf2,
			(int)curwin->w_cursor.lnum,
			(int)curbuf->b_ml.ml_line_count,
			word_count_cursor, word_count,
			byte_count_cursor, byte_count);
		else
		    vim_snprintf((char *)IObuff, IOSIZE,
			_("Col %s of %s; Line %ld of %ld; Word %lld of %lld; Char %lld of %lld; Byte %lld of %lld"),
			(char *)buf1, (char *)buf2,
			(int)curwin->w_cursor.lnum,
			(int)curbuf->b_ml.ml_line_count,
			word_count_cursor, word_count,
			char_count_cursor, char_count,
			byte_count_cursor, byte_count);
	    }
	}

	bom_count = bomb_size();
	if (dict == NULL && bom_count > 0)
	{
	    size_t len = STRLEN(IObuff);

	    vim_snprintf((char *)IObuff + len, IOSIZE - len,
				 _("(+%lld for BOM)"), bom_count);
	}
	if (dict == NULL)
	{
	    
	    p = p_shm;
	    p_shm = (char_u *)"";
	    msg((char *)IObuff);
	    p_shm = p;
	}
    }
#if defined(FEAT_EVAL)
    if (dict != NULL)
    {
	dict_add_number(dict, "words", word_count);
	dict_add_number(dict, "chars", char_count);
	dict_add_number(dict, "bytes", byte_count + bom_count);
	dict_add_number(dict, VIsual_active ? "visual_bytes" : "cursor_bytes",
		byte_count_cursor);
	dict_add_number(dict, VIsual_active ? "visual_chars" : "cursor_chars",
		char_count_cursor);
	dict_add_number(dict, VIsual_active ? "visual_words" : "cursor_words",
		word_count_cursor);
    }
#endif
}


    static void
op_colon(oparg_T *oap)
{
    stuffcharReadbuff(':');
    if (oap->is_VIsual)
	stuffReadbuff((char_u *)"'<,'>");
    else
    {
	
	if (oap->start.lnum == curwin->w_cursor.lnum)
	    stuffcharReadbuff('.');
	else
	    stuffnumReadbuff((int)oap->start.lnum);

#ifdef FEAT_FOLDING
	
	
	linenr_T endOfStartFold = oap->start.lnum;
	(void)hasFolding(oap->start.lnum, NULL, &endOfStartFold);
#endif
	if (oap->end.lnum != oap->start.lnum
#ifdef FEAT_FOLDING
		&& oap->end.lnum != endOfStartFold
#endif
	   )
	{
	    
	    stuffcharReadbuff(',');
	    if (oap->end.lnum == curwin->w_cursor.lnum)
		stuffcharReadbuff('.');
	    else if (oap->end.lnum == curbuf->b_ml.ml_line_count)
		stuffcharReadbuff('$');
	    else if (oap->start.lnum == curwin->w_cursor.lnum
#ifdef FEAT_FOLDING
		    
		    
		    && !hasFolding(oap->end.lnum, NULL, NULL)
#endif
		    )
	    {
		stuffReadbuff((char_u *)".+");
		stuffnumReadbuff((int)oap->line_count - 1);
	    }
	    else
		stuffnumReadbuff((int)oap->end.lnum);
	}
    }
    if (oap->op_type != OP_COLON)
	stuffReadbuff((char_u *)"!");
    if (oap->op_type == OP_INDENT)
    {
	if (*get_equalprg() == NUL)
	    stuffReadbuff((char_u *)"indent");
	else
	    stuffReadbuff(get_equalprg());
	stuffReadbuff((char_u *)"\n");
    }
    else if (oap->op_type == OP_FORMAT)
    {
	if (*curbuf->b_p_fp != NUL)
	    stuffReadbuff(curbuf->b_p_fp);
	else if (*p_fp != NUL)
	    stuffReadbuff(p_fp);
	else
	    stuffReadbuff((char_u *)"fmt");
	stuffReadbuff((char_u *)"\n']");
    }

    
}


static callback_T opfunc_cb;


    char *
did_set_operatorfunc(optset_T *args UNUSED)
{
    if (option_set_callback_func(p_opfunc, &opfunc_cb) == FAIL)
	return e_invalid_argument;

    return NULL;
}

#if defined(EXITFREE) || defined(PROTO)
    void
free_operatorfunc_option(void)
{
# ifdef FEAT_EVAL
    free_callback(&opfunc_cb);
# endif
}
#endif

#if defined(FEAT_EVAL) || defined(PROTO)

    int
set_ref_in_opfunc(int copyID UNUSED)
{
    int abort = FALSE;

    abort = set_ref_in_callback(&opfunc_cb, copyID);

    return abort;
}
#endif


    static void
op_function(oparg_T *oap UNUSED)
{
#ifdef FEAT_EVAL
    typval_T	argv[2];
    pos_T	orig_start = curbuf->b_op_start;
    pos_T	orig_end = curbuf->b_op_end;
    typval_T	rettv;

    if (*p_opfunc == NUL)
	emsg(_(e_operatorfunc_is_empty));
    else
    {
	
	curbuf->b_op_start = oap->start;
	curbuf->b_op_end = oap->end;
	if (oap->motion_type != MLINE && !oap->inclusive)
	    
	    decl(&curbuf->b_op_end);

	argv[0].v_type = VAR_STRING;
	if (oap->block_mode)
	    argv[0].vval.v_string = (char_u *)"block";
	else if (oap->motion_type == MLINE)
	    argv[0].vval.v_string = (char_u *)"line";
	else
	    argv[0].vval.v_string = (char_u *)"char";
	argv[1].v_type = VAR_UNKNOWN;

	
	
	int save_virtual_op = virtual_op;
	virtual_op = MAYBE;

	
	int save_finish_op = finish_op;
	finish_op = FALSE;

	if (call_callback(&opfunc_cb, 0, &rettv, 1, argv) != FAIL)
	    clear_tv(&rettv);

	virtual_op = save_virtual_op;
	finish_op = save_finish_op;
	if (cmdmod.cmod_flags & CMOD_LOCKMARKS)
	{
	    curbuf->b_op_start = orig_start;
	    curbuf->b_op_end = orig_end;
	}
    }
#else
    emsg(_(e_eval_feature_not_available));
#endif
}


    static void
get_op_vcol(
    oparg_T	*oap,
    colnr_T	redo_VIsual_vcol,
    int		initial)    
{
    colnr_T	    start, end;

    if (VIsual_mode != Ctrl_V
	    || (!initial && oap->end.col < curwin->w_width))
	return;

    oap->block_mode = TRUE;

    
    if (has_mbyte)
	mb_adjustpos(curwin->w_buffer, &oap->end);

    getvvcol(curwin, &(oap->start), &oap->start_vcol, NULL, &oap->end_vcol);

    if (!redo_VIsual_busy)
    {
	getvvcol(curwin, &(oap->end), &start, NULL, &end);

	if (start < oap->start_vcol)
	    oap->start_vcol = start;
	if (end > oap->end_vcol)
	{
	    if (initial && *p_sel == 'e' && start >= 1
				    && start - 1 >= oap->end_vcol)
		oap->end_vcol = start - 1;
	    else
		oap->end_vcol = end;
	}
    }

    
    if (curwin->w_curswant == MAXCOL)
    {
	curwin->w_cursor.col = MAXCOL;
	oap->end_vcol = 0;
	for (curwin->w_cursor.lnum = oap->start.lnum;
		curwin->w_cursor.lnum <= oap->end.lnum;
					++curwin->w_cursor.lnum)
	{
	    getvvcol(curwin, &curwin->w_cursor, NULL, NULL, &end);
	    if (end > oap->end_vcol)
		oap->end_vcol = end;
	}
    }
    else if (redo_VIsual_busy)
	oap->end_vcol = oap->start_vcol + redo_VIsual_vcol - 1;
    
    
    
    
    
    curwin->w_cursor.lnum = oap->end.lnum;
    coladvance(oap->end_vcol);
    oap->end = curwin->w_cursor;

    curwin->w_cursor = oap->start;
    coladvance(oap->start_vcol);
    oap->start = curwin->w_cursor;
}


typedef struct {
    int		rv_mode;	
    linenr_T	rv_line_count;	
    colnr_T	rv_vcol;	
    int	rv_count;	
    int		rv_arg;		
} redo_VIsual_T;

    static int
is_ex_cmdchar(cmdarg_T *cap)
{
    return cap->cmdchar == ':'
	|| cap->cmdchar == K_COMMAND
	|| cap->cmdchar == K_SCRIPT_COMMAND;
}


    void
do_pending_operator(cmdarg_T *cap, int old_col, int gui_yank)
{
    oparg_T	*oap = cap->oap;
    pos_T	old_cursor;
    int		empty_region_error;
    int		restart_edit_save;
#ifdef FEAT_LINEBREAK
    int		lbr_saved = curwin->w_p_lbr;
#endif

    
    static redo_VIsual_T   redo_VIsual = {NUL, 0, 0, 0,0};

    int		    include_line_break = FALSE;

#if defined(FEAT_CLIPBOARD)
    
    
    
    
    
    if ((clip_star.available || clip_plus.available)
	    && oap->op_type != OP_NOP
	    && !gui_yank
	    && VIsual_active
	    && !redo_VIsual_busy
	    && oap->regname == 0)
	clip_auto_select();
#endif
    old_cursor = curwin->w_cursor;

    
    if ((finish_op || VIsual_active) && oap->op_type != OP_NOP)
    {
	
	
	int	redo_yank = vim_strchr(p_cpo, CPO_YANK) != NULL && !gui_yank;

#ifdef FEAT_LINEBREAK
	
	(void)reset_lbr();
#endif
	oap->is_VIsual = VIsual_active;
	if (oap->motion_force == 'V')
	    oap->motion_type = MLINE;
	else if (oap->motion_force == 'v')
	{
	    
	    
	    if (oap->motion_type == MLINE)
		oap->inclusive = FALSE;
	    
	    else if (oap->motion_type == MCHAR)
		oap->inclusive = !oap->inclusive;
	    oap->motion_type = MCHAR;
	}
	else if (oap->motion_force == Ctrl_V)
	{
	    
	    if (!VIsual_active)
	    {
		VIsual_active = TRUE;
		VIsual = oap->start;
	    }
	    VIsual_mode = Ctrl_V;
	    VIsual_select = FALSE;
	    VIsual_reselect = FALSE;
	}

	
	
	if ((redo_yank || oap->op_type != OP_YANK)
		&& ((!VIsual_active || oap->motion_force)
		    
		    || (VIsual_active
			    && is_ex_cmdchar(cap) && oap->op_type != OP_COLON))
		&& cap->cmdchar != 'D'
#ifdef FEAT_FOLDING
		&& oap->op_type != OP_FOLD
		&& oap->op_type != OP_FOLDOPEN
		&& oap->op_type != OP_FOLDOPENREC
		&& oap->op_type != OP_FOLDCLOSE
		&& oap->op_type != OP_FOLDCLOSEREC
		&& oap->op_type != OP_FOLDDEL
		&& oap->op_type != OP_FOLDDELREC
#endif
		)
	{
	    prep_redo(oap->regname, cap->count0,
		    get_op_char(oap->op_type), get_extra_op_char(oap->op_type),
		    oap->motion_force, cap->cmdchar, cap->nchar);
	    if (cap->cmdchar == '/' || cap->cmdchar == '?') 
	    {
		
		
		if (vim_strchr(p_cpo, CPO_REDO) == NULL)
		    AppendToRedobuffLit(cap->searchbuf, -1);
		AppendToRedobuff(NL_STR);
	    }
	    else if (is_ex_cmdchar(cap))
	    {
		
		
		
		if (repeat_cmdline == NULL)
		    ResetRedobuff();
		else
		{
		    if (cap->cmdchar == ':')
			AppendToRedobuffLit(repeat_cmdline, -1);
		    else
			AppendToRedobuffSpec(repeat_cmdline);
		    AppendToRedobuff(NL_STR);
		    VIM_CLEAR(repeat_cmdline);
		}
	    }
	}

	if (redo_VIsual_busy)
	{
	    
	    
	    oap->start = curwin->w_cursor;
	    curwin->w_cursor.lnum += redo_VIsual.rv_line_count - 1;
	    if (curwin->w_cursor.lnum > curbuf->b_ml.ml_line_count)
		curwin->w_cursor.lnum = curbuf->b_ml.ml_line_count;
	    VIsual_mode = redo_VIsual.rv_mode;
	    if (redo_VIsual.rv_vcol == MAXCOL || VIsual_mode == 'v')
	    {
		if (VIsual_mode == 'v')
		{
		    if (redo_VIsual.rv_line_count <= 1)
		    {
			validate_virtcol();
			curwin->w_curswant =
				     curwin->w_virtcol + redo_VIsual.rv_vcol - 1;
		    }
		    else
			curwin->w_curswant = redo_VIsual.rv_vcol;
		}
		else
		{
		    curwin->w_curswant = MAXCOL;
		}
		coladvance(curwin->w_curswant);
	    }
	    cap->count0 = redo_VIsual.rv_count;
	    if (redo_VIsual.rv_count != 0)
		cap->count1 = redo_VIsual.rv_count;
	    else
		cap->count1 = 1;
	}
	else if (VIsual_active)
	{
	    if (!gui_yank)
	    {
		
		curbuf->b_visual.vi_start = VIsual;
		curbuf->b_visual.vi_end = curwin->w_cursor;
		curbuf->b_visual.vi_mode = VIsual_mode;
		restore_visual_mode();
		curbuf->b_visual.vi_curswant = curwin->w_curswant;
#ifdef FEAT_EVAL
		curbuf->b_visual_mode_eval = VIsual_mode;
#endif
	    }

	    
	    
	    
	    if (VIsual_select && VIsual_mode == 'V'
					    && cap->oap->op_type != OP_DELETE)
	    {
		if (LT_POS(VIsual, curwin->w_cursor))
		{
		    VIsual.col = 0;
		    curwin->w_cursor.col = ml_get_len(curwin->w_cursor.lnum);
		}
		else
		{
		    curwin->w_cursor.col = 0;
		    VIsual.col = ml_get_len(VIsual.lnum);
		}
		VIsual_mode = 'v';
	    }
	    
	    
	    else if (VIsual_mode == 'v')
		include_line_break = unadjust_for_sel();

	    oap->start = VIsual;
	    if (VIsual_mode == 'V')
	    {
		oap->start.col = 0;
		oap->start.coladd = 0;
	    }
	}

	
	
	if (LT_POS(oap->start, curwin->w_cursor))
	{
#ifdef FEAT_FOLDING
	    
	    if (!VIsual_active)
	    {
		if (hasFolding(oap->start.lnum, &oap->start.lnum, NULL))
		    oap->start.col = 0;
		if ((curwin->w_cursor.col > 0 || oap->inclusive
						  || oap->motion_type == MLINE)
			&& hasFolding(curwin->w_cursor.lnum, NULL,
						      &curwin->w_cursor.lnum))
		    curwin->w_cursor.col = ml_get_curline_len();
	    }
#endif
	    oap->end = curwin->w_cursor;
	    curwin->w_cursor = oap->start;

	    
	    
	    
	    curwin->w_valid &= ~VALID_VIRTCOL;
	}
	else
	{
#ifdef FEAT_FOLDING
	    
	    if (!VIsual_active && oap->motion_type == MLINE)
	    {
		if (hasFolding(curwin->w_cursor.lnum, &curwin->w_cursor.lnum,
									NULL))
		    curwin->w_cursor.col = 0;
		if (hasFolding(oap->start.lnum, NULL, &oap->start.lnum))
		    oap->start.col = ml_get_len(oap->start.lnum);
	    }
#endif
	    oap->end = oap->start;
	    oap->start = curwin->w_cursor;
	}

	
	check_pos(curwin->w_buffer, &oap->end);
	oap->line_count = oap->end.lnum - oap->start.lnum + 1;

	
	virtual_op = virtual_active();

	if (VIsual_active || redo_VIsual_busy)
	{
	    get_op_vcol(oap, redo_VIsual.rv_vcol, TRUE);

	    if (!redo_VIsual_busy && !gui_yank)
	    {
		
		
		resel_VIsual_mode = VIsual_mode;
		if (curwin->w_curswant == MAXCOL)
		    resel_VIsual_vcol = MAXCOL;
		else
		{
		    if (VIsual_mode != Ctrl_V)
			getvvcol(curwin, &(oap->end),
						  NULL, NULL, &oap->end_vcol);
		    if (VIsual_mode == Ctrl_V || oap->line_count <= 1)
		    {
			if (VIsual_mode != Ctrl_V)
			    getvvcol(curwin, &(oap->start),
						&oap->start_vcol, NULL, NULL);
			resel_VIsual_vcol = oap->end_vcol - oap->start_vcol + 1;
		    }
		    else
			resel_VIsual_vcol = oap->end_vcol;
		}
		resel_VIsual_line_count = oap->line_count;
	    }

	    
	    if ((redo_yank || oap->op_type != OP_YANK)
		    && oap->op_type != OP_COLON
#ifdef FEAT_FOLDING
		    && oap->op_type != OP_FOLD
		    && oap->op_type != OP_FOLDOPEN
		    && oap->op_type != OP_FOLDOPENREC
		    && oap->op_type != OP_FOLDCLOSE
		    && oap->op_type != OP_FOLDCLOSEREC
		    && oap->op_type != OP_FOLDDEL
		    && oap->op_type != OP_FOLDDELREC
#endif
		    && oap->motion_force == NUL
		    )
	    {
		
		
		if (cap->cmdchar == 'g' && (cap->nchar == 'n'
							|| cap->nchar == 'N'))
		    prep_redo(oap->regname, cap->count0,
			    get_op_char(oap->op_type),
			    get_extra_op_char(oap->op_type),
			    oap->motion_force, cap->cmdchar, cap->nchar);
		else if (!is_ex_cmdchar(cap))
		{
		    int opchar = get_op_char(oap->op_type);
		    int extra_opchar = get_extra_op_char(oap->op_type);
		    int nchar = oap->op_type == OP_REPLACE ? cap->nchar : NUL;

		    
		    if (nchar == REPLACE_CR_NCHAR)
			nchar = CAR;
		    else if (nchar == REPLACE_NL_NCHAR)
			nchar = NL;

		    if (opchar == 'g' && extra_opchar == '@')
			
			prep_redo_num2(oap->regname, 0L, NUL, 'v',
				     cap->count0, opchar, extra_opchar, nchar);
		    else
			prep_redo(oap->regname, 0L, NUL, 'v',
						  opchar, extra_opchar, nchar);
		}
		if (!redo_VIsual_busy)
		{
		    redo_VIsual.rv_mode = resel_VIsual_mode;
		    redo_VIsual.rv_vcol = resel_VIsual_vcol;
		    redo_VIsual.rv_line_count = resel_VIsual_line_count;
		    redo_VIsual.rv_count = cap->count0;
		    redo_VIsual.rv_arg = cap->arg;
		}
	    }

	    
	    
	    
	    if (oap->motion_force == NUL || oap->motion_type == MLINE)
		oap->inclusive = TRUE;
	    if (VIsual_mode == 'V')
		oap->motion_type = MLINE;
	    else
	    {
		oap->motion_type = MCHAR;
		if (VIsual_mode != Ctrl_V && *ml_get_pos(&(oap->end)) == NUL
			&& (include_line_break || !virtual_op))
		{
		    oap->inclusive = FALSE;
		    
		    
		    if (*p_sel != 'o'
			    && !op_on_lines(oap->op_type)
			    && oap->end.lnum < curbuf->b_ml.ml_line_count)
		    {
			++oap->end.lnum;
			oap->end.col = 0;
			oap->end.coladd = 0;
			++oap->line_count;
		    }
		}
	    }

	    redo_VIsual_busy = FALSE;

	    
	    
	    
	    
	    
	    if (!gui_yank)
	    {
		VIsual_active = FALSE;
		setmouse();
		mouse_dragging = 0;
		may_clear_cmdline();
		if ((oap->op_type == OP_YANK
			    || oap->op_type == OP_COLON
			    || oap->op_type == OP_FUNCTION
			    || oap->op_type == OP_FILTER)
			&& oap->motion_force == NUL)
		{
#ifdef FEAT_LINEBREAK
		    
		    restore_lbr(lbr_saved);
#endif
		    redraw_curbuf_later(UPD_INVERTED);
		}
	    }
	}

	
	if (has_mbyte && oap->inclusive)
	{
	    int		l;

	    l = (*mb_ptr2len)(ml_get_pos(&oap->end));
	    if (l > 1)
		oap->end.col += l - 1;
	}
	curwin->w_set_curswant = TRUE;

	
	
	oap->empty = (oap->motion_type == MCHAR
		    && (!oap->inclusive
			|| (oap->op_type == OP_YANK
			    && gchar_pos(&oap->end) == NUL))
		    && EQUAL_POS(oap->start, oap->end)
		    && !(virtual_op && oap->start.coladd != oap->end.coladd));
	
	
	empty_region_error = (oap->empty
				&& vim_strchr(p_cpo, CPO_EMPTYREGION) != NULL);

	
	
	if (oap->is_VIsual && (oap->empty || !curbuf->b_p_ma
#ifdef FEAT_FOLDING
		    || oap->op_type == OP_FOLD
#endif
		    ))
	{
#ifdef FEAT_LINEBREAK
	    restore_lbr(lbr_saved);
#endif
	    redraw_curbuf_later(UPD_INVERTED);
	}

	
	
	
	
	
	if (	   oap->motion_type == MCHAR
		&& oap->inclusive == FALSE
		&& !(cap->retval & CA_NO_ADJ_OP_END)
		&& oap->end.col == 0
		&& (!oap->is_VIsual || *p_sel == 'o')
		&& !oap->block_mode
		&& oap->line_count > 1)
	{
	    oap->end_adjusted = TRUE;	    
	    --oap->line_count;
	    --oap->end.lnum;
	    if (inindent(0))
		oap->motion_type = MLINE;
	    else
	    {
		oap->end.col = ml_get_len(oap->end.lnum);
		if (oap->end.col)
		{
		    --oap->end.col;
		    oap->inclusive = TRUE;
		}
	    }
	}
	else
	    oap->end_adjusted = FALSE;

	switch (oap->op_type)
	{
	case OP_LSHIFT:
	case OP_RSHIFT:
	    op_shift(oap, TRUE, oap->is_VIsual ? (int)cap->count1 : 1);
	    auto_format(FALSE, TRUE);
	    break;

	case OP_JOIN_NS:
	case OP_JOIN:
	    if (oap->line_count < 2)
		oap->line_count = 2;
	    if (curwin->w_cursor.lnum + oap->line_count - 1 >
						   curbuf->b_ml.ml_line_count)
		beep_flush();
	    else
	    {
		(void)do_join(oap->line_count, oap->op_type == OP_JOIN,
							    TRUE, TRUE, TRUE);
		auto_format(FALSE, TRUE);
	    }
	    break;

	case OP_DELETE:
	    VIsual_reselect = FALSE;	    
	    if (empty_region_error)
	    {
		vim_beep(BO_OPER);
		CancelRedo();
	    }
	    else
	    {
		(void)op_delete(oap);
		
		if (oap->motion_type == MLINE && has_format_option(FO_AUTO)
						      && u_save_cursor() == OK)
		    auto_format(FALSE, TRUE);
	    }
	    break;

	case OP_YANK:
	    if (empty_region_error)
	    {
		if (!gui_yank)
		{
		    vim_beep(BO_OPER);
		    CancelRedo();
		}
	    }
	    else
	    {
#ifdef FEAT_LINEBREAK
		restore_lbr(lbr_saved);
#endif
		oap->excl_tr_ws = cap->cmdchar == 'z';
		(void)op_yank(oap, FALSE, !gui_yank);
	    }
	    check_cursor_col();
	    break;

	case OP_CHANGE:
	    VIsual_reselect = FALSE;	    
	    if (empty_region_error)
	    {
		vim_beep(BO_OPER);
		CancelRedo();
	    }
	    else
	    {
		
		
		
		
		if (p_im || !KeyTyped)
		    restart_edit_save = restart_edit;
		else
		    restart_edit_save = 0;
		restart_edit = 0;
#ifdef FEAT_LINEBREAK
		
		
		restore_lbr(lbr_saved);
#endif
		
		curbuf->b_last_changedtick_i = CHANGEDTICK(curbuf);

		if (op_change(oap))	
		    cap->retval |= CA_COMMAND_BUSY;
		if (restart_edit == 0)
		    restart_edit = restart_edit_save;
	    }
	    break;

	case OP_FILTER:
	    if (vim_strchr(p_cpo, CPO_FILTER) != NULL)
		AppendToRedobuff((char_u *)"!\r");  
	    else
		bangredo = TRUE;    
	    

	case OP_INDENT:
	case OP_COLON:

	    
	    if (oap->op_type == OP_INDENT && *get_equalprg() == NUL)
	    {
		if (curbuf->b_p_lisp)
		{
#ifdef FEAT_EVAL
		    if (use_indentexpr_for_lisp())
			op_reindent(oap, get_expr_indent);
		    else
#endif
			op_reindent(oap, get_lisp_indent);
		    break;
		}
		op_reindent(oap,
#ifdef FEAT_EVAL
			*curbuf->b_p_inde != NUL ? get_expr_indent :
#endif
			    get_c_indent);
		break;
	    }

	    op_colon(oap);
	    break;

	case OP_TILDE:
	case OP_UPPER:
	case OP_LOWER:
	case OP_ROT13:
	    if (empty_region_error)
	    {
		vim_beep(BO_OPER);
		CancelRedo();
	    }
	    else
		op_tilde(oap);
	    check_cursor_col();
	    break;

	case OP_FORMAT:
#if defined(FEAT_EVAL)
	    if (*curbuf->b_p_fex != NUL)
		op_formatexpr(oap);	
	    else
#endif
	    {
		if (*p_fp != NUL || *curbuf->b_p_fp != NUL)
		    op_colon(oap);		
		else
		    op_format(oap, FALSE);	
	    }
	    break;
	case OP_FORMAT2:
	    op_format(oap, TRUE);	
	    break;

	case OP_FUNCTION:
	    {
		redo_VIsual_T   save_redo_VIsual = redo_VIsual;

#ifdef FEAT_LINEBREAK
		
		
		restore_lbr(lbr_saved);
#endif
		
		op_function(oap);

		
		
		redo_VIsual = save_redo_VIsual;
		break;
	    }

	case OP_INSERT:
	case OP_APPEND:
	    VIsual_reselect = FALSE;	
	    if (empty_region_error)
	    {
		vim_beep(BO_OPER);
		CancelRedo();
	    }
	    else
	    {
		
		
		
		restart_edit_save = restart_edit;
		restart_edit = 0;
#ifdef FEAT_LINEBREAK
		
		
		restore_lbr(lbr_saved);
#endif
		
		curbuf->b_last_changedtick_i = CHANGEDTICK(curbuf);

		op_insert(oap, cap->count1);
#ifdef FEAT_LINEBREAK
		
		(void)reset_lbr();
#endif

		
		
		auto_format(FALSE, TRUE);

		if (restart_edit == 0)
		    restart_edit = restart_edit_save;
		else
		    cap->retval |= CA_COMMAND_BUSY;
	    }
	    break;

	case OP_REPLACE:
	    VIsual_reselect = FALSE;	
	    if (empty_region_error)
	    {
		vim_beep(BO_OPER);
		CancelRedo();
	    }
	    else
	    {
#ifdef FEAT_LINEBREAK
		
		
		restore_lbr(lbr_saved);
#endif
		op_replace(oap, cap->nchar);
	    }
	    break;

#ifdef FEAT_FOLDING
	case OP_FOLD:
	    VIsual_reselect = FALSE;	
	    foldCreate(oap->start.lnum, oap->end.lnum);
	    break;

	case OP_FOLDOPEN:
	case OP_FOLDOPENREC:
	case OP_FOLDCLOSE:
	case OP_FOLDCLOSEREC:
	    VIsual_reselect = FALSE;	
	    opFoldRange(oap->start.lnum, oap->end.lnum,
		    oap->op_type == OP_FOLDOPEN
					    || oap->op_type == OP_FOLDOPENREC,
		    oap->op_type == OP_FOLDOPENREC
					  || oap->op_type == OP_FOLDCLOSEREC,
					  oap->is_VIsual);
	    break;

	case OP_FOLDDEL:
	case OP_FOLDDELREC:
	    VIsual_reselect = FALSE;	
	    deleteFold(oap->start.lnum, oap->end.lnum,
			       oap->op_type == OP_FOLDDELREC, oap->is_VIsual);
	    break;
#endif
	case OP_NR_ADD:
	case OP_NR_SUB:
	    if (empty_region_error)
	    {
		vim_beep(BO_OPER);
		CancelRedo();
	    }
	    else
	    {
		VIsual_active = TRUE;
#ifdef FEAT_LINEBREAK
		restore_lbr(lbr_saved);
#endif
		op_addsub(oap, cap->count1, redo_VIsual.rv_arg);
		VIsual_active = FALSE;
	    }
	    check_cursor_col();
	    break;
	default:
	    clearopbeep(oap);
	}
	virtual_op = MAYBE;
	if (!gui_yank)
	{
	    
	    if (!p_sol && oap->motion_type == MLINE && !oap->end_adjusted
		    && (oap->op_type == OP_LSHIFT || oap->op_type == OP_RSHIFT
						|| oap->op_type == OP_DELETE))
	    {
#ifdef FEAT_LINEBREAK
		(void)reset_lbr();
#endif
		coladvance(curwin->w_curswant = old_col);
	    }
	}
	else
	{
	    curwin->w_cursor = old_cursor;
	}
	oap->block_mode = FALSE;
	clearop(oap);
	motion_force = NUL;
    }
#ifdef FEAT_LINEBREAK
    restore_lbr(lbr_saved);
#endif
}




    static void
pbyte(pos_T lp, int c)
{
    char_u *p = ml_get_buf(curbuf, lp.lnum, TRUE);
    int	len = curbuf->b_ml.ml_line_len;

    
    if (lp.col >= len)
	lp.col = (len > 1 ? len - 2 : 0);
    *(p + lp.col) = c;
}
