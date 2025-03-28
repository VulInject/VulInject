



#include "vim.h"


static int mouse_hor_step = 6;
static int mouse_vert_step = 3;

    void
mouse_set_vert_scroll_step(int step)
{
    mouse_vert_step = step;
}

    void
mouse_set_hor_scroll_step(int step)
{
    mouse_hor_step = step;
}

#ifdef CHECK_DOUBLE_CLICK

    static int
time_diff_ms(struct timeval *t1, struct timeval *t2)
{
    
    
    
    
    return (t2->tv_sec - t1->tv_sec) * 1000
	 + (t2->tv_usec - t1->tv_usec) / 1000;
}
#endif


    static int
get_mouse_class(char_u *p)
{
    int		c;

    if (has_mbyte && MB_BYTE2LEN(p[0]) > 1)
	return mb_get_class(p);

    c = *p;
    if (c == ' ' || c == '\t')
	return 0;

    if (vim_iswordc(c))
	return 2;

    
    
    
    
    if (c != NUL && vim_strchr((char_u *)"-+*/%<>&|^!=", c) != NULL)
	return 1;
    return c;
}


    static void
find_start_of_word(pos_T *pos)
{
    char_u	*line;
    int		cclass;
    int		col;

    line = ml_get(pos->lnum);
    cclass = get_mouse_class(line + pos->col);

    while (pos->col > 0)
    {
	col = pos->col - 1;
	col -= (*mb_head_off)(line, line + col);
	if (get_mouse_class(line + col) != cclass)
	    break;
	pos->col = col;
    }
}


    static void
find_end_of_word(pos_T *pos)
{
    char_u	*line;
    int		cclass;
    int		col;

    line = ml_get(pos->lnum);
    if (*p_sel == 'e' && pos->col > 0)
    {
	--pos->col;
	pos->col -= (*mb_head_off)(line, line + pos->col);
    }
    cclass = get_mouse_class(line + pos->col);
    while (line[pos->col] != NUL)
    {
	col = pos->col + (*mb_ptr2len)(line + pos->col);
	if (get_mouse_class(line + col) != cclass)
	{
	    if (*p_sel == 'e')
		pos->col = col;
	    break;
	}
	pos->col = col;
    }
}

#if defined(FEAT_GUI_MOTIF) || defined(FEAT_GUI_GTK) \
	    || defined(FEAT_GUI_MSWIN) \
	    || defined(FEAT_GUI_PHOTON) \
	    || defined(FEAT_TERM_POPUP_MENU)
# define USE_POPUP_SETPOS
# define NEED_VCOL2COL


    static int
get_fpos_of_mouse(pos_T *mpos)
{
    win_T	*wp;
    int		row = mouse_row;
    int		col = mouse_col;

    if (row < 0 || col < 0)		
	return IN_UNKNOWN;

    
    wp = mouse_find_win(&row, &col, FAIL_POPUP);
    if (wp == NULL)
	return IN_UNKNOWN;
    
    if (row >= wp->w_height)	
	return IN_STATUS_LINE;
    if (col >= wp->w_width)	
	return IN_SEP_LINE;

    if (wp != curwin)
	return IN_UNKNOWN;

    
    if (mouse_comp_pos(curwin, &row, &col, &mpos->lnum, NULL))
	return IN_STATUS_LINE; 

    mpos->col = vcol2col(wp, mpos->lnum, col, &mpos->coladd);
    return IN_BUFFER;
}
#endif


    int
do_mouse(
    oparg_T	*oap,		
    int		c,		
    int		dir,		
    int	count,
    int		fixindent)	
{
    static int	do_always = FALSE;	
    static int	got_click = FALSE;	

    int		which_button;	
    int		is_click = FALSE; 
    int		is_drag = FALSE;  
    int		jump_flags = 0;	
    pos_T	start_visual;
    int		moved;		
    int		in_status_line;	
    static int	in_tab_line = FALSE; 
    int		in_sep_line;	
    int		c1, c2;
#if defined(FEAT_FOLDING)
    pos_T	save_cursor;
#endif
    win_T	*old_curwin = curwin;
    static pos_T orig_cursor;
    colnr_T	leftcol, rightcol;
    pos_T	end_visual;
    int		diff;
    int		old_active = VIsual_active;
    int		old_mode = VIsual_mode;
    int		regname;

#if defined(FEAT_FOLDING)
    save_cursor = curwin->w_cursor;
#endif

    
    
    
    
    
    if (do_always)
	do_always = FALSE;
    else
#ifdef FEAT_GUI
	if (!gui.in_use)
#endif
	{
	    if (VIsual_active)
	    {
		if (!mouse_has(MOUSE_VISUAL))
		    return FALSE;
	    }
	    else if (State == MODE_NORMAL && !mouse_has(MOUSE_NORMAL))
		return FALSE;
	}

    for (;;)
    {
	which_button = get_mouse_button(KEY2TERMCAP1(c), &is_click, &is_drag);
	if (is_drag)
	{
	    
	    
	    
	    
	    
	    if (!KeyStuffed && vpeekc() != NUL)
	    {
		int nc;
		int save_mouse_row = mouse_row;
		int save_mouse_col = mouse_col;

		
		
		nc = safe_vgetc();
		if (c == nc)
		    continue;
		vungetc(nc);
		mouse_row = save_mouse_row;
		mouse_col = save_mouse_col;
	    }
	}
	break;
    }

    if (c == K_MOUSEMOVE)
    {
	
#ifdef FEAT_BEVAL_TERM
	ui_may_remove_balloon();
	if (p_bevalterm)
	{
	    profile_setlimit(p_bdlay, &bevalexpr_due);
	    bevalexpr_due_set = TRUE;
	}
#endif
#ifdef FEAT_PROP_POPUP
	popup_handle_mouse_moved();
#endif
	return FALSE;
    }

#ifdef FEAT_MOUSESHAPE
    
    
    if (!is_drag && drag_status_line)
    {
	drag_status_line = FALSE;
	update_mouseshape(SHAPE_IDX_STATUS);
    }
    if (!is_drag && drag_sep_line)
    {
	drag_sep_line = FALSE;
	update_mouseshape(SHAPE_IDX_VSEP);
    }
#endif

    
    if (is_click)
	got_click = TRUE;
    else
    {
	if (!got_click)			
	    return FALSE;
	if (!is_drag)			
	{
	    got_click = FALSE;
	    if (in_tab_line)
	    {
		in_tab_line = FALSE;
		return FALSE;
	    }
	}
    }

    
    if (is_click && (mod_mask & MOD_MASK_CTRL) && which_button == MOUSE_RIGHT)
    {
	if (State & MODE_INSERT)
	    stuffcharReadbuff(Ctrl_O);
	if (count > 1)
	    stuffnumReadbuff(count);
	stuffcharReadbuff(Ctrl_T);
	got_click = FALSE;		
	return FALSE;
    }

    
    if ((mod_mask & MOD_MASK_CTRL) && which_button != MOUSE_LEFT)
	return FALSE;

    
    
    
    if ((mod_mask & (MOD_MASK_SHIFT | MOD_MASK_CTRL | MOD_MASK_ALT
							     | MOD_MASK_META))
	    && (!is_click
		|| (mod_mask & MOD_MASK_MULTI_CLICK)
		|| which_button == MOUSE_MIDDLE)
	    && !((mod_mask & (MOD_MASK_SHIFT|MOD_MASK_ALT))
		&& mouse_model_popup()
		&& which_button == MOUSE_LEFT)
	    && !((mod_mask & MOD_MASK_ALT)
		&& !mouse_model_popup()
		&& which_button == MOUSE_RIGHT)
	    )
	return FALSE;

    
    
    
    if (!is_click && which_button == MOUSE_MIDDLE)
	return FALSE;

    if (oap != NULL)
	regname = oap->regname;
    else
	regname = 0;

    
    if (which_button == MOUSE_MIDDLE)
    {
	if (State == MODE_NORMAL)
	{
	    
	    
	    if (oap != NULL && oap->op_type != OP_NOP)
	    {
		clearopbeep(oap);
		return FALSE;
	    }

	    
	    
	    
	    if (VIsual_active)
	    {
		if (VIsual_select)
		{
		    stuffcharReadbuff(Ctrl_G);
		    stuffReadbuff((char_u *)"\"+p");
		}
		else
		{
		    stuffcharReadbuff('y');
		    stuffcharReadbuff(K_MIDDLEMOUSE);
		}
		do_always = TRUE;	
		return FALSE;
	    }
	    
	}

	else if ((State & MODE_INSERT) == 0)
	    return FALSE;

	
	
	
	
	
	if ((State & MODE_INSERT) || !mouse_has(MOUSE_NORMAL))
	{
	    if (regname == '.')
		insert_reg(regname, TRUE);
	    else
	    {
#ifdef FEAT_CLIPBOARD
		if (clip_star.available && regname == 0)
		    regname = '*';
#endif
		if ((State & REPLACE_FLAG) && !yank_register_mline(regname))
		    insert_reg(regname, TRUE);
		else
		{
		    do_put(regname, NULL, BACKWARD, 1L,
						      fixindent | PUT_CURSEND);

		    
		    AppendCharToRedobuff(Ctrl_R);
		    AppendCharToRedobuff(fixindent ? Ctrl_P : Ctrl_O);
		    AppendCharToRedobuff(regname == 0 ? '"' : regname);
		}
	    }
	    return FALSE;
	}
    }

    
    if (!is_click)
	jump_flags |= MOUSE_FOCUS | MOUSE_DID_MOVE;

    start_visual.lnum = 0;

    if (TabPageIdxs != NULL)  
    {
	
	if (mouse_row == 0 && firstwin->w_winrow > 0)
	{
	    if (is_drag)
	    {
		if (in_tab_line)
		{
		    c1 = TabPageIdxs[mouse_col];
		    tabpage_move(c1 <= 0 ? 9999 : c1 < tabpage_index(curtab)
								? c1 - 1 : c1);
		}
		return FALSE;
	    }

	    
	    if (is_click && cmdwin_type == 0 && mouse_col < Columns)
	    {
		in_tab_line = TRUE;
		c1 = TabPageIdxs[mouse_col];
		if (c1 >= 0)
		{
		    if ((mod_mask & MOD_MASK_MULTI_CLICK) == MOD_MASK_2CLICK)
		    {
			
			end_visual_mode_keep_button();
			tabpage_new();
			tabpage_move(c1 == 0 ? 9999 : c1 - 1);
		    }
		    else
		    {
			
			
			goto_tabpage(c1);

			
			if (curwin != old_curwin)
			    end_visual_mode_keep_button();
		    }
		}
		else
		{
		    tabpage_T	*tp;

		    
		    if (c1 == -999)
			tp = curtab;
		    else
			tp = find_tabpage(-c1);
		    if (tp == curtab)
		    {
			if (first_tabpage->tp_next != NULL)
			    tabpage_close(FALSE);
		    }
		    else if (tp != NULL)
			tabpage_close_other(tp, FALSE);
		}
	    }
	    return TRUE;
	}
	else if (is_drag && in_tab_line)
	{
	    c1 = TabPageIdxs[mouse_col];
	    tabpage_move(c1 <= 0 ? 9999 : c1 - 1);
	    return FALSE;
	}
    }

    
    
    
    
    if (mouse_model_popup())
    {
	if (which_button == MOUSE_RIGHT
			    && !(mod_mask & (MOD_MASK_SHIFT | MOD_MASK_CTRL)))
	{
#ifdef USE_POPUP_SETPOS
# ifdef FEAT_GUI
	    if (gui.in_use)
	    {
#  if defined(FEAT_GUI_MOTIF) || defined(FEAT_GUI_GTK) \
			  || defined(FEAT_GUI_PHOTON)
		if (!is_click)
		    
		    
		    return FALSE;
#  endif
#  if defined(FEAT_GUI_MSWIN) || defined(FEAT_GUI_HAIKU)
		if (is_click || is_drag)
		    
		    
		    return FALSE;
#  endif
	    }
# endif
# if defined(FEAT_GUI) && defined(FEAT_TERM_POPUP_MENU)
	    else
# endif
# if defined(FEAT_TERM_POPUP_MENU)
	    if (!is_click)
		
		
		return FALSE;
# endif

	    jump_flags = 0;
	    if (STRCMP(p_mousem, "popup_setpos") == 0)
	    {
		
		
		if (VIsual_active)
		{
		    pos_T    m_pos;

		    
		    
		    
		    if (mouse_row < curwin->w_winrow
			 || mouse_row
				  > (curwin->w_winrow + curwin->w_height))
			jump_flags = MOUSE_MAY_STOP_VIS;
		    else if (get_fpos_of_mouse(&m_pos) != IN_BUFFER)
			jump_flags = MOUSE_MAY_STOP_VIS;
		    else
		    {
			if (VIsual_mode == 'V')
			{
			    if ((curwin->w_cursor.lnum <= VIsual.lnum
				    && (m_pos.lnum < curwin->w_cursor.lnum
					|| VIsual.lnum < m_pos.lnum))
				|| (VIsual.lnum < curwin->w_cursor.lnum
				    && (m_pos.lnum < VIsual.lnum
					|| curwin->w_cursor.lnum < m_pos.lnum)))
			    {
				jump_flags = MOUSE_MAY_STOP_VIS;
			    }
			}
			else if ((LTOREQ_POS(curwin->w_cursor, VIsual)
				    && (LT_POS(m_pos, curwin->w_cursor)
					|| LT_POS(VIsual, m_pos)))
				|| (LT_POS(VIsual, curwin->w_cursor)
				    && (LT_POS(m_pos, VIsual)
				      || LT_POS(curwin->w_cursor, m_pos))))
			{
			    jump_flags = MOUSE_MAY_STOP_VIS;
			}
			else if (VIsual_mode == Ctrl_V)
			{
			    getvcols(curwin, &curwin->w_cursor, &VIsual,
						     &leftcol, &rightcol);
			    getvcol(curwin, &m_pos, NULL, &m_pos.col, NULL);
			    if (m_pos.col < leftcol || m_pos.col > rightcol)
				jump_flags = MOUSE_MAY_STOP_VIS;
			}
		    }
		}
		else
		    jump_flags = MOUSE_MAY_STOP_VIS;
	    }
	    if (jump_flags)
	    {
		jump_flags = jump_to_mouse(jump_flags, NULL, which_button);
		update_curbuf(VIsual_active ? UPD_INVERTED : UPD_VALID);
		setcursor();
		out_flush();    
	    }
# ifdef FEAT_MENU
	    show_popupmenu();
	    got_click = FALSE;	
# endif
	    return (jump_flags & CURSOR_MOVED) != 0;
#else
	    return FALSE;
#endif
	}
	if (which_button == MOUSE_LEFT
				&& (mod_mask & (MOD_MASK_SHIFT|MOD_MASK_ALT)))
	{
	    which_button = MOUSE_RIGHT;
	    mod_mask &= ~MOD_MASK_SHIFT;
	}
    }

    if ((State & (MODE_NORMAL | MODE_INSERT))
			    && !(mod_mask & (MOD_MASK_SHIFT | MOD_MASK_CTRL)))
    {
	if (which_button == MOUSE_LEFT)
	{
	    if (is_click)
	    {
		
		
		if (VIsual_active)
		    jump_flags |= MOUSE_MAY_STOP_VIS;
	    }
	    else if (mouse_has(MOUSE_VISUAL))
		jump_flags |= MOUSE_MAY_VIS;
	}
	else if (which_button == MOUSE_RIGHT)
	{
	    if (is_click && VIsual_active)
	    {
		
		
		if (LT_POS(curwin->w_cursor, VIsual))
		{
		    start_visual = curwin->w_cursor;
		    end_visual = VIsual;
		}
		else
		{
		    start_visual = VIsual;
		    end_visual = curwin->w_cursor;
		}
	    }
	    jump_flags |= MOUSE_FOCUS;
	    if (mouse_has(MOUSE_VISUAL))
		jump_flags |= MOUSE_MAY_VIS;
	}
    }

    
    
    if (!is_drag && oap != NULL && oap->op_type != OP_NOP)
    {
	got_click = FALSE;
	oap->motion_type = MCHAR;
    }

    
    if (!is_click && !is_drag)
	jump_flags |= MOUSE_RELEASED;

    
    jump_flags = jump_to_mouse(jump_flags,
			oap == NULL ? NULL : &(oap->inclusive), which_button);

#ifdef FEAT_MENU
    
    if (jump_flags & MOUSE_WINBAR)
	return FALSE;
#endif
    moved = (jump_flags & CURSOR_MOVED);
    in_status_line = (jump_flags & IN_STATUS_LINE);
    in_sep_line = (jump_flags & IN_SEP_LINE);

#ifdef FEAT_NETBEANS_INTG
    if (isNetbeansBuffer(curbuf)
			    && !(jump_flags & (IN_STATUS_LINE | IN_SEP_LINE)))
    {
	int key = KEY2TERMCAP1(c);

	if (key == (int)KE_LEFTRELEASE || key == (int)KE_MIDDLERELEASE
					       || key == (int)KE_RIGHTRELEASE)
	    netbeans_button_release(which_button);
    }
#endif

    
    
    if (curwin != old_curwin && oap != NULL && oap->op_type != OP_NOP)
	clearop(oap);

#ifdef FEAT_FOLDING
    if (mod_mask == 0
	    && !is_drag
	    && (jump_flags & (MOUSE_FOLD_CLOSE | MOUSE_FOLD_OPEN))
	    && which_button == MOUSE_LEFT)
    {
	
	if (jump_flags & MOUSE_FOLD_OPEN)
	    openFold(curwin->w_cursor.lnum, 1L);
	else
	    closeFold(curwin->w_cursor.lnum, 1L);
	
	if (curwin == old_curwin)
	    curwin->w_cursor = save_cursor;
    }
#endif

#if defined(FEAT_CLIPBOARD)
    if ((jump_flags & IN_OTHER_WIN) && !VIsual_active && clip_star.available)
    {
	clip_modeless(which_button, is_click, is_drag);
	return FALSE;
    }
#endif

    
    
    if (VIsual_active && is_drag && get_scrolloff_value())
    {
	
	if (mouse_row == 0)
	    mouse_dragging = 2;
	else
	    mouse_dragging = 1;
    }

    
    if (is_drag && mouse_row < 0 && !in_status_line)
    {
	scroll_redraw(FALSE, 1L);
	mouse_row = 0;
    }

    if (start_visual.lnum)		
    {
       
       if (mod_mask & MOD_MASK_ALT)
	   VIsual_mode = Ctrl_V;

	
	
	if (VIsual_mode == Ctrl_V)
	{
	    getvcols(curwin, &start_visual, &end_visual, &leftcol, &rightcol);
	    if (curwin->w_curswant > (leftcol + rightcol) / 2)
		end_visual.col = leftcol;
	    else
		end_visual.col = rightcol;
	    if (curwin->w_cursor.lnum >=
				    (start_visual.lnum + end_visual.lnum) / 2)
		end_visual.lnum = start_visual.lnum;

	    
	    start_visual = curwin->w_cursor;	    
	    curwin->w_cursor = end_visual;
	    coladvance(end_visual.col);
	    VIsual = curwin->w_cursor;
	    curwin->w_cursor = start_visual;	    
	}
	else
	{
	    
	    
	    
	    if (LT_POS(curwin->w_cursor, start_visual))
		VIsual = end_visual;
	    else if (LT_POS(end_visual, curwin->w_cursor))
		VIsual = start_visual;
	    else
	    {
		
		if (end_visual.lnum == start_visual.lnum)
		{
		    if (curwin->w_cursor.col - start_visual.col >
				    end_visual.col - curwin->w_cursor.col)
			VIsual = start_visual;
		    else
			VIsual = end_visual;
		}

		
		else
		{
		    diff = (curwin->w_cursor.lnum - start_visual.lnum) -
				(end_visual.lnum - curwin->w_cursor.lnum);

		    if (diff > 0)		
			VIsual = start_visual;
		    else if (diff < 0)	
			VIsual = end_visual;
		    else			
		    {
			if (curwin->w_cursor.col <
					(start_visual.col + end_visual.col) / 2)
			    VIsual = end_visual;
			else
			    VIsual = start_visual;
		    }
		}
	    }
	}
    }
    
    else if ((State & MODE_INSERT) && VIsual_active)
	stuffcharReadbuff(Ctrl_O);

    
    if (which_button == MOUSE_MIDDLE)
    {
#ifdef FEAT_CLIPBOARD
	if (clip_star.available && regname == 0)
	    regname = '*';
#endif
	if (yank_register_mline(regname))
	{
	    if (mouse_past_bottom)
		dir = FORWARD;
	}
	else if (mouse_past_eol)
	    dir = FORWARD;

	if (fixindent)
	{
	    c1 = (dir == BACKWARD) ? '[' : ']';
	    c2 = 'p';
	}
	else
	{
	    c1 = (dir == FORWARD) ? 'p' : 'P';
	    c2 = NUL;
	}
	prep_redo(regname, count, NUL, c1, NUL, c2, NUL);

	
	
	if (restart_edit != 0)
	    where_paste_started = curwin->w_cursor;
	do_put(regname, NULL, dir, count, fixindent | PUT_CURSEND);
    }

#if defined(FEAT_QUICKFIX)
    
    
    else if (((mod_mask & MOD_MASK_CTRL)
		|| (mod_mask & MOD_MASK_MULTI_CLICK) == MOD_MASK_2CLICK)
	    && bt_quickfix(curbuf))
    {
	if (curwin->w_llist_ref == NULL)	
	    do_cmdline_cmd((char_u *)".cc");
	else					
	    do_cmdline_cmd((char_u *)".ll");
	got_click = FALSE;		
    }
#endif

    
    
    else if ((mod_mask & MOD_MASK_CTRL) || (curbuf->b_help
		     && (mod_mask & MOD_MASK_MULTI_CLICK) == MOD_MASK_2CLICK))
    {
	if (State & MODE_INSERT)
	    stuffcharReadbuff(Ctrl_O);
	stuffcharReadbuff(Ctrl_RSB);
	got_click = FALSE;		
    }

    
    
    else if ((mod_mask & MOD_MASK_SHIFT))
    {
	if ((State & MODE_INSERT) || (VIsual_active && VIsual_select))
	    stuffcharReadbuff(Ctrl_O);
	if (which_button == MOUSE_LEFT)
	    stuffcharReadbuff('*');
	else	
	    stuffcharReadbuff('#');
    }

    
    else if (in_status_line)
    {
#ifdef FEAT_MOUSESHAPE
	if ((is_drag || is_click) && !drag_status_line)
	{
	    drag_status_line = TRUE;
	    update_mouseshape(-1);
	}
#endif
    }
    else if (in_sep_line)
    {
#ifdef FEAT_MOUSESHAPE
	if ((is_drag || is_click) && !drag_sep_line)
	{
	    drag_sep_line = TRUE;
	    update_mouseshape(-1);
	}
#endif
    }
    else if ((mod_mask & MOD_MASK_MULTI_CLICK)
				       && (State & (MODE_NORMAL | MODE_INSERT))
	     && mouse_has(MOUSE_VISUAL))
    {
	if (is_click || !VIsual_active)
	{
	    if (VIsual_active)
		orig_cursor = VIsual;
	    else
	    {
		check_visual_highlight();
		VIsual = curwin->w_cursor;
		orig_cursor = VIsual;
		VIsual_active = TRUE;
		VIsual_reselect = TRUE;
		
		may_start_select('o');
		setmouse();
	    }
	    if ((mod_mask & MOD_MASK_MULTI_CLICK) == MOD_MASK_2CLICK)
	    {
		
		if (mod_mask & MOD_MASK_ALT)
		    VIsual_mode = Ctrl_V;
		else
		    VIsual_mode = 'v';
	    }
	    else if ((mod_mask & MOD_MASK_MULTI_CLICK) == MOD_MASK_3CLICK)
		VIsual_mode = 'V';
	    else if ((mod_mask & MOD_MASK_MULTI_CLICK) == MOD_MASK_4CLICK)
		VIsual_mode = Ctrl_V;
#ifdef FEAT_CLIPBOARD
	    
	    
	    clip_star.vmode = NUL;
#endif
	}
	
	if ((mod_mask & MOD_MASK_MULTI_CLICK) == MOD_MASK_2CLICK)
	{
	    pos_T	*pos = NULL;
	    int		gc;

	    if (is_click)
	    {
		
		
		
		end_visual = curwin->w_cursor;
		while (gc = gchar_pos(&end_visual), VIM_ISWHITE(gc))
		    inc(&end_visual);
		if (oap != NULL)
		    oap->motion_type = MCHAR;
		if (oap != NULL
			&& VIsual_mode == 'v'
			&& !vim_iswordc(gchar_pos(&end_visual))
			&& EQUAL_POS(curwin->w_cursor, VIsual)
			&& (pos = findmatch(oap, NUL)) != NULL)
		{
		    curwin->w_cursor = *pos;
		    if (oap->motion_type == MLINE)
			VIsual_mode = 'V';
		    else if (*p_sel == 'e')
		    {
			if (LT_POS(curwin->w_cursor, VIsual))
			    ++VIsual.col;
			else
			    ++curwin->w_cursor.col;
		    }
		}
	    }

	    if (pos == NULL && (is_click || is_drag))
	    {
		
		
		if (LT_POS(curwin->w_cursor, orig_cursor))
		{
		    find_start_of_word(&curwin->w_cursor);
		    find_end_of_word(&VIsual);
		}
		else
		{
		    find_start_of_word(&VIsual);
		    if (*p_sel == 'e' && *ml_get_cursor() != NUL)
			curwin->w_cursor.col +=
					 (*mb_ptr2len)(ml_get_cursor());
		    find_end_of_word(&curwin->w_cursor);
		}
	    }
	    curwin->w_set_curswant = TRUE;
	}
	if (is_click)
	    redraw_curbuf_later(UPD_INVERTED);	
    }
    else if (VIsual_active && !old_active)
    {
	if (mod_mask & MOD_MASK_ALT)
	    VIsual_mode = Ctrl_V;
	else
	    VIsual_mode = 'v';
    }

    
    if ((!VIsual_active && old_active && mode_displayed)
	    || (VIsual_active && p_smd && msg_silent == 0
				 && (!old_active || VIsual_mode != old_mode)))
	redraw_cmdline = TRUE;

    return moved;
}

    void
ins_mouse(int c)
{
    pos_T	tpos;
    win_T	*old_curwin = curwin;

#ifdef FEAT_GUI
    
    if (!gui.in_use)
#endif
	if (!mouse_has(MOUSE_INSERT))
	    return;

    undisplay_dollar();
    tpos = curwin->w_cursor;
    if (do_mouse(NULL, c, BACKWARD, 1L, 0))
    {
	win_T	*new_curwin = curwin;

	if (curwin != old_curwin && win_valid(old_curwin))
	{
	    
	    
	    curwin = old_curwin;
	    curbuf = curwin->w_buffer;
#ifdef FEAT_JOB_CHANNEL
	    if (bt_prompt(curbuf))
		
		curbuf->b_prompt_insert = 'A';
#endif
	}
	start_arrow(curwin == old_curwin ? &tpos : NULL);
	if (curwin != new_curwin && win_valid(new_curwin))
	{
	    curwin = new_curwin;
	    curbuf = curwin->w_buffer;
	}
	set_can_cindent(TRUE);
    }

    
    redraw_statuslines();
}


    static void
do_mousescroll(cmdarg_T *cap)
{
    int shift_or_ctrl = mod_mask & (MOD_MASK_SHIFT | MOD_MASK_CTRL);

#ifdef FEAT_TERMINAL
    if (term_use_loop())
	
	
	send_keys_to_term(curbuf->b_term, cap->cmdchar, mod_mask, FALSE);
    else
#endif
    if (cap->arg == MSCR_UP || cap->arg == MSCR_DOWN)
    {
	
	if (!(State & MODE_INSERT) && (mouse_vert_step < 0 || shift_or_ctrl))
	{
	    
	    pagescroll(cap->arg == MSCR_UP ? FORWARD : BACKWARD, 1L, FALSE);
	}
	else
	{
	    if (mouse_vert_step < 0 || shift_or_ctrl)
	    {
		
		cap->count1 = (int)(curwin->w_botline - curwin->w_topline);
	    }
	    
	    else if (curwin->w_height < mouse_vert_step * 2)
	    {
		cap->count1 = curwin->w_height / 2;
		if (cap->count1 == 0)
		    cap->count1 = 1;
	    }
	    else
	    {
		cap->count1 = mouse_vert_step;
	    }
	    cap->count0 = cap->count1;
	    nv_scroll_line(cap);
	}

#ifdef FEAT_PROP_POPUP
	if (WIN_IS_POPUP(curwin))
	    popup_set_firstline(curwin);
#endif
    }
    else
    {
	
	int step = (mouse_hor_step < 0 || shift_or_ctrl)
					    ? curwin->w_width : mouse_hor_step;
	int leftcol = curwin->w_leftcol
				     + (cap->arg == MSCR_RIGHT ? -step : step);
	if (leftcol < 0)
	    leftcol = 0;
	do_mousescroll_horiz((long_u)leftcol);
    }
    may_trigger_win_scrolled_resized();
}


    void
ins_mousescroll(int dir)
{
    cmdarg_T	cap;
    oparg_T	oa;
    CLEAR_FIELD(cap);
    clear_oparg(&oa);
    cap.oap = &oa;
    cap.arg = dir;

    switch (dir)
    {
	case MSCR_UP:
	    cap.cmdchar = K_MOUSEUP;
	    break;
	case MSCR_DOWN:
	    cap.cmdchar = K_MOUSEDOWN;
	    break;
	case MSCR_LEFT:
	    cap.cmdchar = K_MOUSELEFT;
	    break;
	case MSCR_RIGHT:
	    cap.cmdchar = K_MOUSERIGHT;
	    break;
	default:
	    siemsg("Invalid ins_mousescroll() argument: %d", dir);
    }

    win_T *old_curwin = curwin;
    if (mouse_row >= 0 && mouse_col >= 0)
    {
	
	
	int row = mouse_row;
	int col = mouse_col;
	curwin = mouse_find_win(&row, &col, FIND_POPUP);
	if (curwin == NULL)
	{
	    curwin = old_curwin;
	    return;
	}
	curbuf = curwin->w_buffer;
    }

    if (curwin == old_curwin)
    {
	
	if (pum_visible())
	    return;

	undisplay_dollar();
    }

    linenr_T	orig_topline = curwin->w_topline;
    colnr_T	orig_leftcol = curwin->w_leftcol;
    pos_T	orig_cursor = curwin->w_cursor;

    
    do_mousescroll(&cap);

    int did_scroll = (orig_topline != curwin->w_topline
		   || orig_leftcol != curwin->w_leftcol);

    curwin->w_redr_status = TRUE;
    curwin = old_curwin;
    curbuf = curwin->w_buffer;

    
    
    if (did_scroll && pum_visible())
    {
	
	
	redraw_all_later(UPD_NOT_VALID);
	ins_compl_show_pum();
    }

    if (!EQUAL_POS(curwin->w_cursor, orig_cursor))
    {
	start_arrow(&orig_cursor);
	set_can_cindent(TRUE);
    }
}


    int
is_mouse_key(int c)
{
    return c == K_LEFTMOUSE
	|| c == K_LEFTMOUSE_NM
	|| c == K_LEFTDRAG
	|| c == K_LEFTRELEASE
	|| c == K_LEFTRELEASE_NM
	|| c == K_MOUSEMOVE
	|| c == K_MIDDLEMOUSE
	|| c == K_MIDDLEDRAG
	|| c == K_MIDDLERELEASE
	|| c == K_RIGHTMOUSE
	|| c == K_RIGHTDRAG
	|| c == K_RIGHTRELEASE
	|| c == K_MOUSEDOWN
	|| c == K_MOUSEUP
	|| c == K_MOUSELEFT
	|| c == K_MOUSERIGHT
	|| c == K_X1MOUSE
	|| c == K_X1DRAG
	|| c == K_X1RELEASE
	|| c == K_X2MOUSE
	|| c == K_X2DRAG
	|| c == K_X2RELEASE;
}

static struct mousetable
{
    int	    pseudo_code;	
    int	    button;		
    int	    is_click;		
    int	    is_drag;		
} mouse_table[] =
{
    {(int)KE_LEFTMOUSE,		MOUSE_LEFT,	TRUE,	FALSE},
#ifdef FEAT_GUI
    {(int)KE_LEFTMOUSE_NM,	MOUSE_LEFT,	TRUE,	FALSE},
#endif
    {(int)KE_LEFTDRAG,		MOUSE_LEFT,	FALSE,	TRUE},
    {(int)KE_LEFTRELEASE,	MOUSE_LEFT,	FALSE,	FALSE},
#ifdef FEAT_GUI
    {(int)KE_LEFTRELEASE_NM,	MOUSE_LEFT,	FALSE,	FALSE},
#endif
    {(int)KE_MIDDLEMOUSE,	MOUSE_MIDDLE,	TRUE,	FALSE},
    {(int)KE_MIDDLEDRAG,	MOUSE_MIDDLE,	FALSE,	TRUE},
    {(int)KE_MIDDLERELEASE,	MOUSE_MIDDLE,	FALSE,	FALSE},
    {(int)KE_RIGHTMOUSE,	MOUSE_RIGHT,	TRUE,	FALSE},
    {(int)KE_RIGHTDRAG,		MOUSE_RIGHT,	FALSE,	TRUE},
    {(int)KE_RIGHTRELEASE,	MOUSE_RIGHT,	FALSE,	FALSE},
    {(int)KE_X1MOUSE,		MOUSE_X1,	TRUE,	FALSE},
    {(int)KE_X1DRAG,		MOUSE_X1,	FALSE,	TRUE},
    {(int)KE_X1RELEASE,		MOUSE_X1,	FALSE,	FALSE},
    {(int)KE_X2MOUSE,		MOUSE_X2,	TRUE,	FALSE},
    {(int)KE_X2DRAG,		MOUSE_X2,	FALSE,	TRUE},
    {(int)KE_X2RELEASE,		MOUSE_X2,	FALSE,	FALSE},
    
    {(int)KE_MOUSEMOVE,		MOUSE_RELEASE,	FALSE,	TRUE},
    
    {(int)KE_IGNORE,		MOUSE_RELEASE,	FALSE,	FALSE},
    {0,				0,		0,	0},
};


    int
get_mouse_button(int code, int *is_click, int *is_drag)
{
    int	    i;

    for (i = 0; mouse_table[i].pseudo_code; i++)
	if (code == mouse_table[i].pseudo_code)
	{
	    *is_click = mouse_table[i].is_click;
	    *is_drag = mouse_table[i].is_drag;
	    return mouse_table[i].button;
	}
    return 0;	    
}


    int
get_pseudo_mouse_code(
    int	    button,	
    int	    is_click,
    int	    is_drag)
{
    int	    i;

    for (i = 0; mouse_table[i].pseudo_code; i++)
	if (button == mouse_table[i].button
	    && is_click == mouse_table[i].is_click
	    && is_drag == mouse_table[i].is_drag)
	{
#ifdef FEAT_GUI
	    
	    
	    
	    if (mouse_col < 0 || mouse_col > MOUSE_COLOFF)
	    {
		if (mouse_col < 0)
		    mouse_col = 0;
		else
		    mouse_col -= MOUSE_COLOFF;
		if (mouse_table[i].pseudo_code == (int)KE_LEFTMOUSE)
		    return (int)KE_LEFTMOUSE_NM;
		if (mouse_table[i].pseudo_code == (int)KE_LEFTRELEASE)
		    return (int)KE_LEFTRELEASE_NM;
	    }
#endif
	    return mouse_table[i].pseudo_code;
	}
    return (int)KE_IGNORE;	    
}

# define HMT_NORMAL	1
# define HMT_NETTERM	2
# define HMT_DEC	4
# define HMT_JSBTERM	8
# define HMT_PTERM	16
# define HMT_URXVT	32
# define HMT_GPM	64
# define HMT_SGR	128
# define HMT_SGR_REL	256
static int has_mouse_termcode = 0;

    void
set_mouse_termcode(
    int		n,	
    char_u	*s)
{
    char_u	name[2];

    name[0] = n;
    name[1] = KE_FILLER;
    add_termcode(name, s, FALSE);
#ifdef FEAT_MOUSE_JSB
    if (n == KS_JSBTERM_MOUSE)
	has_mouse_termcode |= HMT_JSBTERM;
    else
#endif
#ifdef FEAT_MOUSE_NET
    if (n == KS_NETTERM_MOUSE)
	has_mouse_termcode |= HMT_NETTERM;
    else
#endif
#ifdef FEAT_MOUSE_DEC
    if (n == KS_DEC_MOUSE)
	has_mouse_termcode |= HMT_DEC;
    else
#endif
#ifdef FEAT_MOUSE_PTERM
    if (n == KS_PTERM_MOUSE)
	has_mouse_termcode |= HMT_PTERM;
    else
#endif
#ifdef FEAT_MOUSE_URXVT
    if (n == KS_URXVT_MOUSE)
	has_mouse_termcode |= HMT_URXVT;
    else
#endif
#ifdef FEAT_MOUSE_GPM
    if (n == KS_GPM_MOUSE)
	has_mouse_termcode |= HMT_GPM;
    else
#endif
    if (n == KS_SGR_MOUSE)
	has_mouse_termcode |= HMT_SGR;
    else if (n == KS_SGR_MOUSE_RELEASE)
	has_mouse_termcode |= HMT_SGR_REL;
    else
	has_mouse_termcode |= HMT_NORMAL;
}

#if defined(UNIX) || defined(VMS) || defined(PROTO)
    void
del_mouse_termcode(
    int		n)	
{
    char_u	name[2];

    name[0] = n;
    name[1] = KE_FILLER;
    del_termcode(name);
# ifdef FEAT_MOUSE_JSB
    if (n == KS_JSBTERM_MOUSE)
	has_mouse_termcode &= ~HMT_JSBTERM;
    else
# endif
# ifdef FEAT_MOUSE_NET
    if (n == KS_NETTERM_MOUSE)
	has_mouse_termcode &= ~HMT_NETTERM;
    else
# endif
# ifdef FEAT_MOUSE_DEC
    if (n == KS_DEC_MOUSE)
	has_mouse_termcode &= ~HMT_DEC;
    else
# endif
# ifdef FEAT_MOUSE_PTERM
    if (n == KS_PTERM_MOUSE)
	has_mouse_termcode &= ~HMT_PTERM;
    else
# endif
# ifdef FEAT_MOUSE_URXVT
    if (n == KS_URXVT_MOUSE)
	has_mouse_termcode &= ~HMT_URXVT;
    else
# endif
# ifdef FEAT_MOUSE_GPM
    if (n == KS_GPM_MOUSE)
	has_mouse_termcode &= ~HMT_GPM;
    else
# endif
    if (n == KS_SGR_MOUSE)
	has_mouse_termcode &= ~HMT_SGR;
    else if (n == KS_SGR_MOUSE_RELEASE)
	has_mouse_termcode &= ~HMT_SGR_REL;
    else
	has_mouse_termcode &= ~HMT_NORMAL;
}
#endif


    void
setmouse(void)
{
    int	    checkfor;

#ifdef FEAT_MOUSESHAPE
    update_mouseshape(-1);
#endif

    
#ifdef FEAT_GUI
    
    if (gui.in_use)
	return;
#endif
    
    if (*p_mouse == NUL || has_mouse_termcode == 0)
	return;

    
    if (cur_tmode != TMODE_RAW)
    {
	mch_setmouse(FALSE);
	return;
    }

    if (VIsual_active)
	checkfor = MOUSE_VISUAL;
    else if (State == MODE_HITRETURN || State == MODE_ASKMORE
						     || State == MODE_SETWSIZE)
	checkfor = MOUSE_RETURN;
    else if (State & MODE_INSERT)
	checkfor = MOUSE_INSERT;
    else if (State & MODE_CMDLINE)
	checkfor = MOUSE_COMMAND;
    else if (State == MODE_CONFIRM || State == MODE_EXTERNCMD)
	checkfor = ' '; 
    else
	checkfor = MOUSE_NORMAL;    

    if (mouse_has(checkfor))
	mch_setmouse(TRUE);
    else
	mch_setmouse(FALSE);
}


    int
mouse_has(int c)
{
    char_u	*p;

    for (p = p_mouse; *p; ++p)
	switch (*p)
	{
	    case 'a': if (vim_strchr((char_u *)MOUSE_A, c) != NULL)
			  return TRUE;
		      break;
	    case MOUSE_HELP: if (c != MOUSE_RETURN && curbuf->b_help)
				 return TRUE;
			     break;
	    default: if (c == *p) return TRUE; break;
	}
    return FALSE;
}


    int
mouse_model_popup(void)
{
    return (p_mousem[0] == 'p');
}

static win_T *dragwin = NULL;	


    void
reset_dragwin(void)
{
    dragwin = NULL;
}


    int
jump_to_mouse(
    int		flags,
    int		*inclusive,	
    int		which_button)	
{
    static int	on_status_line = 0;	
    static int	on_sep_line = 0;	
#ifdef FEAT_MENU
    static int  in_winbar = FALSE;
#endif
#ifdef FEAT_PROP_POPUP
    static int   in_popup_win = FALSE;
    static win_T *click_in_popup_win = NULL;
#endif
    static int	prev_row = -1;
    static int	prev_col = -1;
    static int	did_drag = FALSE;	

    win_T	*wp, *old_curwin;
    pos_T	old_cursor;
    int		count;
    int		first;
    int		row = mouse_row;
    int		col = mouse_col;
    colnr_T	col_from_screen = -1;
#ifdef FEAT_FOLDING
    int		mouse_char = ' ';
#endif

    mouse_past_bottom = FALSE;
    mouse_past_eol = FALSE;

    if (flags & MOUSE_RELEASED)
    {
	
	
	if (dragwin != NULL && !did_drag)
	    flags &= ~(MOUSE_FOCUS | MOUSE_DID_MOVE);
	dragwin = NULL;
	did_drag = FALSE;
#ifdef FEAT_PROP_POPUP
	if (click_in_popup_win != NULL && popup_dragwin == NULL)
	    popup_close_for_mouse_click(click_in_popup_win);

	popup_dragwin = NULL;
	click_in_popup_win = NULL;
#endif
    }

    if ((flags & MOUSE_DID_MOVE)
	    && prev_row == mouse_row
	    && prev_col == mouse_col)
    {
retnomove:
	
	
	if (on_status_line)
	    return IN_STATUS_LINE;
	if (on_sep_line)
	    return IN_SEP_LINE;
#ifdef FEAT_MENU
	if (in_winbar)
	{
	    
	    
	    if ((mod_mask & MOD_MASK_MULTI_CLICK) && !(flags & MOUSE_RELEASED))
	    {
		wp = mouse_find_win(&row, &col, FAIL_POPUP);
		if (wp == NULL)
		    return IN_UNKNOWN;
		winbar_click(wp, col);
	    }
	    return IN_OTHER_WIN | MOUSE_WINBAR;
	}
#endif
	if (flags & MOUSE_MAY_STOP_VIS)
	{
	    end_visual_mode_keep_button();
	    redraw_curbuf_later(UPD_INVERTED);	
	}
#if defined(FEAT_CLIPBOARD)
	
	if (cmdwin_type != 0 && row < cmdwin_win->w_winrow)
	    return IN_OTHER_WIN;
#endif
#ifdef FEAT_PROP_POPUP
	
	if (in_popup_win)
	{
	    click_in_popup_win = NULL;  
	    if (popup_dragwin != NULL)
	    {
		
		popup_drag(popup_dragwin);
		return IN_UNKNOWN;
	    }
	    return IN_OTHER_WIN;
	}
#endif
	return IN_BUFFER;
    }

    prev_row = mouse_row;
    prev_col = mouse_col;

    if (flags & MOUSE_SETPOS)
	goto retnomove;				

    old_curwin = curwin;
    old_cursor = curwin->w_cursor;

    if (!(flags & MOUSE_FOCUS))
    {
	if (row < 0 || col < 0)			
	    return IN_UNKNOWN;

	
	
	wp = mouse_find_win(&row, &col, FIND_POPUP);
	if (wp == NULL)
	    return IN_UNKNOWN;
	dragwin = NULL;

#ifdef FEAT_PROP_POPUP
	
	
	if (WIN_IS_POPUP(wp))
	{
	    on_sep_line = 0;
	    on_status_line = 0;
	    in_popup_win = TRUE;
	    if (which_button == MOUSE_LEFT && popup_close_if_on_X(wp, row, col))
	    {
		return IN_UNKNOWN;
	    }
	    else if (((wp->w_popup_flags & (POPF_DRAG | POPF_RESIZE))
					      && popup_on_border(wp, row, col))
				       || (wp->w_popup_flags & POPF_DRAGALL))
	    {
		popup_dragwin = wp;
		popup_start_drag(wp, row, col);
		return IN_UNKNOWN;
	    }
	    
	    
	    else if (wp->w_popup_close == POPCLOSE_CLICK
		    && which_button == MOUSE_LEFT)
	    {
		click_in_popup_win = wp;
	    }
	    else if (which_button == MOUSE_LEFT)
		
		popup_handle_scrollbar_click(wp, row, col);
# ifdef FEAT_CLIPBOARD
	    return IN_OTHER_WIN;
# else
	    return IN_UNKNOWN;
# endif
	}
	in_popup_win = FALSE;
	popup_dragwin = NULL;
#endif
#ifdef FEAT_MENU
	if (row == -1)
	{
	    
	    
	    winbar_click(wp, col);
	    in_winbar = TRUE;
	    return IN_OTHER_WIN | MOUSE_WINBAR;
	}
	in_winbar = FALSE;
#endif

	
	if (row >= wp->w_height)		
	{
	    on_status_line = row - wp->w_height + 1;
	    dragwin = wp;
	}
	else
	    on_status_line = 0;
	if (col >= wp->w_width)		
	{
	    on_sep_line = col - wp->w_width + 1;
	    dragwin = wp;
	}
	else
	    on_sep_line = 0;

	
	
	if (on_status_line && on_sep_line)
	{
	    if (stl_connected(wp))
		on_sep_line = 0;
	    else
		on_status_line = 0;
	}

	
	
	if (VIsual_active
		&& (wp->w_buffer != curwin->w_buffer
		    || (!on_status_line && !on_sep_line
#ifdef FEAT_FOLDING
			&& (
# ifdef FEAT_RIGHTLEFT
			    wp->w_p_rl ? col < wp->w_width - wp->w_p_fdc :
# endif
			    col >= wp->w_p_fdc + (wp != cmdwin_win ? 0 : 1)
			    )
#endif
			&& (flags & MOUSE_MAY_STOP_VIS))))
	{
	    end_visual_mode_keep_button();
	    redraw_curbuf_later(UPD_INVERTED);	
	}
	if (cmdwin_type != 0 && wp != cmdwin_win)
	{
	    
	    
	    on_sep_line = 0;
#ifdef FEAT_CLIPBOARD
	    if (on_status_line)
		return IN_STATUS_LINE;
	    return IN_OTHER_WIN;
#else
	    row = 0;
	    col += wp->w_wincol;
	    wp = cmdwin_win;
#endif
	}
#if defined(FEAT_PROP_POPUP) && defined(FEAT_TERMINAL)
	if (popup_is_popup(curwin) && curbuf->b_term != NULL)
	    
	    return IN_OTHER_WIN;
#endif
	
	
	
	if (dragwin == NULL || (flags & MOUSE_RELEASED))
	    win_enter(wp, TRUE);		

	if (curwin != old_curwin)
	{
#ifdef CHECK_DOUBLE_CLICK
	    
	    set_mouse_topline(curwin);
#endif
#ifdef FEAT_TERMINAL
	    
	    term_win_entered();
#endif
	}
	if (on_status_line)			
	{
	    
	    if (curwin == old_curwin)
		return IN_STATUS_LINE;
	    else
		return IN_STATUS_LINE | CURSOR_MOVED;
	}
	if (on_sep_line)			
	{
	    
	    if (curwin == old_curwin)
		return IN_SEP_LINE;
	    else
		return IN_SEP_LINE | CURSOR_MOVED;
	}

	curwin->w_cursor.lnum = curwin->w_topline;
#ifdef FEAT_GUI
	
	gui_prev_topline = curwin->w_topline;
# ifdef FEAT_DIFF
	gui_prev_topfill = curwin->w_topfill;
# endif
#endif
    }
    else if (on_status_line && which_button == MOUSE_LEFT)
    {
	if (dragwin != NULL)
	{
	    
	    count = row - W_WINROW(dragwin) - dragwin->w_height + 1
							     - on_status_line;
	    win_drag_status_line(dragwin, count);
	    did_drag |= count;
	}
	return IN_STATUS_LINE;			
    }
    else if (on_sep_line && which_button == MOUSE_LEFT)
    {
	if (dragwin != NULL)
	{
	    
	    count = col - dragwin->w_wincol - dragwin->w_width + 1
								- on_sep_line;
	    win_drag_vsep_line(dragwin, count);
	    did_drag |= count;
	}
	return IN_SEP_LINE;			
    }
#ifdef FEAT_MENU
    else if (in_winbar)
    {
	
	return IN_OTHER_WIN | MOUSE_WINBAR;
    }
#endif
    else 
    {
	
	if (flags & MOUSE_MAY_STOP_VIS)
	{
	    end_visual_mode_keep_button();
	    redraw_curbuf_later(UPD_INVERTED);	
	}

#if defined(FEAT_CLIPBOARD)
	
	if (cmdwin_type != 0 && row < cmdwin_win->w_winrow)
	    return IN_OTHER_WIN;
#endif
#ifdef FEAT_PROP_POPUP
	if (in_popup_win)
	{
	    if (popup_dragwin != NULL)
	    {
		
		popup_drag(popup_dragwin);
		return IN_UNKNOWN;
	    }
	    
	    click_in_popup_win = NULL;
	    return IN_OTHER_WIN;
	}
#endif

	row -= W_WINROW(curwin);
	col -= curwin->w_wincol;

	
	
	if (row < 0)
	{
	    count = 0;
	    for (first = TRUE; curwin->w_topline > 1; )
	    {
#ifdef FEAT_DIFF
		if (curwin->w_topfill < diff_check(curwin, curwin->w_topline))
		    ++count;
		else
#endif
		    count += plines(curwin->w_topline - 1);
		if (!first && count > -row)
		    break;
		first = FALSE;
#ifdef FEAT_FOLDING
		(void)hasFolding(curwin->w_topline, &curwin->w_topline, NULL);
#endif
#ifdef FEAT_DIFF
		if (curwin->w_topfill < diff_check(curwin, curwin->w_topline))
		    ++curwin->w_topfill;
		else
#endif
		{
		    --curwin->w_topline;
#ifdef FEAT_DIFF
		    curwin->w_topfill = 0;
#endif
		}
	    }
#ifdef FEAT_DIFF
	    check_topfill(curwin, FALSE);
#endif
	    curwin->w_valid &=
		      ~(VALID_WROW|VALID_CROW|VALID_BOTLINE|VALID_BOTLINE_AP);
	    redraw_later(UPD_VALID);
	    row = 0;
	}
	else if (row >= curwin->w_height)
	{
	    count = 0;
	    for (first = TRUE; curwin->w_topline < curbuf->b_ml.ml_line_count; )
	    {
#ifdef FEAT_DIFF
		if (curwin->w_topfill > 0)
		    ++count;
		else
#endif
		    count += plines(curwin->w_topline);
		if (!first && count > row - curwin->w_height + 1)
		    break;
		first = FALSE;
#ifdef FEAT_FOLDING
		if (hasFolding(curwin->w_topline, NULL, &curwin->w_topline)
			&& curwin->w_topline == curbuf->b_ml.ml_line_count)
		    break;
#endif
#ifdef FEAT_DIFF
		if (curwin->w_topfill > 0)
		    --curwin->w_topfill;
		else
#endif
		{
		    ++curwin->w_topline;
#ifdef FEAT_DIFF
		    curwin->w_topfill =
				   diff_check_fill(curwin, curwin->w_topline);
#endif
		}
	    }
#ifdef FEAT_DIFF
	    check_topfill(curwin, FALSE);
#endif
	    redraw_later(UPD_VALID);
	    curwin->w_valid &=
		      ~(VALID_WROW|VALID_CROW|VALID_BOTLINE|VALID_BOTLINE_AP);
	    row = curwin->w_height - 1;
	}
	else if (row == 0)
	{
	    
	    
	    
	    if (mouse_dragging > 0
		    && curwin->w_cursor.lnum
				       == curwin->w_buffer->b_ml.ml_line_count
		    && curwin->w_cursor.lnum == curwin->w_topline)
		curwin->w_valid &= ~(VALID_TOPLINE);
	}
    }

    if (prev_row >= W_WINROW(curwin)
	&& prev_row < W_WINROW(curwin) + curwin->w_height
	&& prev_col >= curwin->w_wincol && prev_col < W_ENDCOL(curwin)
						       && ScreenLines != NULL)
    {
	int off = LineOffset[prev_row] + prev_col;

	
	
	
	if (curwin->w_redr_type <= UPD_VALID_NO_UPDATE)
	    col_from_screen = ScreenCols[off];
#ifdef FEAT_FOLDING
	
	
	mouse_char = ScreenLines[off];
#endif
    }

#ifdef FEAT_FOLDING
    
    if (
# ifdef FEAT_RIGHTLEFT
	    curwin->w_p_rl ? col < curwin->w_width - curwin->w_p_fdc :
# endif
	    col >= curwin->w_p_fdc + (cmdwin_win != curwin ? 0 : 1)
       )
	mouse_char = ' ';
#endif

    
    if (mouse_comp_pos(curwin, &row, &col, &curwin->w_cursor.lnum, NULL))
	mouse_past_bottom = TRUE;

    
    if ((flags & MOUSE_MAY_VIS) && !VIsual_active)
    {
	check_visual_highlight();
	VIsual = old_cursor;
	VIsual_active = TRUE;
	VIsual_reselect = TRUE;
	
	may_start_select('o');
	setmouse();
	if (p_smd && msg_silent == 0)
	    redraw_cmdline = TRUE;	
    }

    if (col_from_screen >= 0)
    {
	
	
	col = col_from_screen;
    }

    curwin->w_curswant = col;
    curwin->w_set_curswant = FALSE;	
    if (coladvance(col) == FAIL)	
    {
	if (inclusive != NULL)
	    *inclusive = TRUE;
	mouse_past_eol = TRUE;
    }
    else if (inclusive != NULL)
	*inclusive = FALSE;

    count = IN_BUFFER;
    if (curwin != old_curwin || curwin->w_cursor.lnum != old_cursor.lnum
	    || curwin->w_cursor.col != old_cursor.col)
	count |= CURSOR_MOVED;		

#ifdef FEAT_FOLDING
    if (mouse_char == curwin->w_fill_chars.foldclosed)
	count |= MOUSE_FOLD_OPEN;
    else if (mouse_char != ' ')
	count |= MOUSE_FOLD_CLOSE;
#endif

    return count;
}


    int
do_mousescroll_horiz(long_u leftcol)
{
    if (curwin->w_p_wrap)
	return FALSE;  

    if (curwin->w_leftcol == (colnr_T)leftcol)
	return FALSE;  

    
    
    if (
#ifdef FEAT_GUI
	    (!gui.in_use || vim_strchr(p_go, GO_HORSCROLL) == NULL) &&
#endif
		    !virtual_active()
	    && (int)leftcol > scroll_line_len(curwin->w_cursor.lnum))
    {
	curwin->w_cursor.lnum = ui_find_longest_lnum();
	curwin->w_cursor.col = 0;
    }

    return set_leftcol((colnr_T)leftcol);
}


    void
nv_mousescroll(cmdarg_T *cap)
{
    win_T   *old_curwin = curwin;

    if (mouse_row >= 0 && mouse_col >= 0)
    {
	
	
	int row = mouse_row;
	int col = mouse_col;
	curwin = mouse_find_win(&row, &col, FIND_POPUP);
	if (curwin == NULL)
	{
	    curwin = old_curwin;
	    return;
	}

#ifdef FEAT_PROP_POPUP
	if (WIN_IS_POPUP(curwin) && !curwin->w_has_scrollbar)
	{
	    
	    curwin = old_curwin;
	    return;
	}
#endif
	curbuf = curwin->w_buffer;
    }

    
    do_mousescroll(cap);

    curwin->w_redr_status = TRUE;
    curwin = old_curwin;
    curbuf = curwin->w_buffer;
}


    void
nv_mouse(cmdarg_T *cap)
{
    (void)do_mouse(cap->oap, cap->cmdchar, BACKWARD, cap->count1, 0);
}

static int	held_button = MOUSE_RELEASE;

    void
reset_held_button(void)
{
    held_button = MOUSE_RELEASE;
}


    int
check_termcode_mouse(
    char_u	*tp,
    int		*slen,
    char_u	*key_name,
    char_u	*modifiers_start,
    int		idx,
    int		*modifiers)
{
    int		j;
    char_u	*p;
#if !defined(UNIX) || defined(FEAT_MOUSE_XTERM) || defined(FEAT_GUI) \
    || defined(FEAT_MOUSE_GPM) || defined(FEAT_SYSMOUSE)
    char_u	bytes[6];
    int		num_bytes;
#endif
    int		mouse_code = 0;	    
    int		is_click, is_drag;
    int		is_release, release_is_ambiguous;
    int		wheel_code = 0;
    int		current_button;
    static int	orig_num_clicks = 1;
    static int	orig_mouse_code = 0x0;
#ifdef CHECK_DOUBLE_CLICK
    static int	orig_mouse_col = 0;
    static int	orig_mouse_row = 0;
    static struct timeval  orig_mouse_time = {0, 0};
    
    struct timeval  mouse_time;		
    int	timediff;		
#endif

    is_click = is_drag = is_release = release_is_ambiguous = FALSE;

#if !defined(UNIX) || defined(FEAT_MOUSE_XTERM) || defined(FEAT_GUI) \
    || defined(FEAT_MOUSE_GPM) || defined(FEAT_SYSMOUSE)
    if (key_name[0] == KS_MOUSE
# ifdef FEAT_MOUSE_GPM
	    || key_name[0] == KS_GPM_MOUSE
# endif
       )
    {
	
	for (;;)
	{
	    
	    
# if defined(FEAT_GUI) || defined(MSWIN)
	    if (TRUE
#  if defined(FEAT_GUI) && !defined(MSWIN)
		&& gui.in_use
#  endif
		)
	    {
		num_bytes = get_bytes_from_buf(tp + *slen, bytes, 5);
		if (num_bytes == -1)	
		    return -1;
		mouse_code = bytes[0];
		mouse_col = 128 * (bytes[1] - ' ' - 1)
		    + bytes[2] - ' ' - 1;
		mouse_row = 128 * (bytes[3] - ' ' - 1)
		    + bytes[4] - ' ' - 1;
	    }
	    else
# endif
	    {
		num_bytes = get_bytes_from_buf(tp + *slen, bytes, 3);
		if (num_bytes == -1)	
		    return -1;
		mouse_code = bytes[0];
		mouse_col = bytes[1] - ' ' - 1;
		mouse_row = bytes[2] - ' ' - 1;
	    }
	    *slen += num_bytes;

	    
	    
	    
# ifdef FEAT_GUI
	    if (gui.in_use)
		j = 3;
	    else
# endif
		j = get_termcode_len(idx);
	    if (STRNCMP(tp, tp + *slen, (size_t)j) == 0
		    && tp[*slen + j] == mouse_code
		    && tp[*slen + j + 1] != NUL
		    && tp[*slen + j + 2] != NUL
# ifdef FEAT_GUI
		    && (!gui.in_use
			|| (tp[*slen + j + 3] != NUL
			    && tp[*slen + j + 4] != NUL))
# endif
	       )
		*slen += j;
	    else
		break;
	}
    }

    if (key_name[0] == KS_URXVT_MOUSE
	    || key_name[0] == KS_SGR_MOUSE
	    || key_name[0] == KS_SGR_MOUSE_RELEASE)
    {
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	p = modifiers_start;
	if (p == NULL)
	    return -1;

	mouse_code = getdigits(&p);
	if (*p++ != ';')
	    return -1;

	
	if (key_name[0] == KS_SGR_MOUSE
		|| key_name[0] == KS_SGR_MOUSE_RELEASE)
	    mouse_code += 32;

	mouse_col = getdigits(&p) - 1;
	if (*p++ != ';')
	    return -1;

	mouse_row = getdigits(&p) - 1;

	
	
	*modifiers = 0;
    }

    if (key_name[0] == KS_SGR_MOUSE
	    || key_name[0] == KS_SGR_MOUSE_RELEASE)
    {
	if (key_name[0] == KS_SGR_MOUSE_RELEASE)
	{
	    is_release = TRUE;
	    
	    mouse_code |= MOUSE_RELEASE;
	}
    }
    else
    {
	release_is_ambiguous = TRUE;
	if ((mouse_code & MOUSE_RELEASE) == MOUSE_RELEASE)
	    is_release = TRUE;
    }

    if (key_name[0] == KS_MOUSE
# ifdef FEAT_MOUSE_GPM
	    || key_name[0] == KS_GPM_MOUSE
# endif
# ifdef FEAT_MOUSE_URXVT
	    || key_name[0] == KS_URXVT_MOUSE
# endif
	    || key_name[0] == KS_SGR_MOUSE
	    || key_name[0] == KS_SGR_MOUSE_RELEASE)
    {
# if !defined(MSWIN)
	
	if (mouse_code >= MOUSEWHEEL_LOW
#  ifdef FEAT_GUI
		&& !gui.in_use
#  endif
#  ifdef FEAT_MOUSE_GPM
		&& key_name[0] != KS_GPM_MOUSE
#  endif
	   )
	{
#  if defined(UNIX)
	    if (use_xterm_mouse() > 1 && mouse_code >= 0x80)
		
		mouse_code = MOUSE_DRAG;
	    else
#  endif
		
		
		wheel_code = mouse_code;
	}
#  ifdef FEAT_MOUSE_XTERM
	else if (held_button == MOUSE_RELEASE
#   ifdef FEAT_GUI
		&& !gui.in_use
#   endif
		&& (mouse_code == 0x23 || mouse_code == 0x24
		    || mouse_code == 0x40 || mouse_code == 0x41))
	{
	    
	    
	    wheel_code = mouse_code - (mouse_code >= 0x40 ? 0x40 : 0x23)
							      + MOUSEWHEEL_LOW;
	}
#  endif

#  if defined(UNIX)
	else if (use_xterm_mouse() > 1)
	{
	    if (mouse_code & MOUSE_DRAG_XTERM)
		mouse_code |= MOUSE_DRAG;
	}
#  endif
#  ifdef FEAT_XCLIPBOARD
	else if (!(mouse_code & MOUSE_DRAG & ~MOUSE_CLICK_MASK))
	{
	    if (is_release)
		stop_xterm_trace();
	    else
		start_xterm_trace(mouse_code);
	}
#  endif
# endif
    }
#endif 
#ifdef FEAT_MOUSE_NET
    if (key_name[0] == KS_NETTERM_MOUSE)
    {
	int mc, mr;

	
	
	
	p = tp + *slen;
	mr = getdigits(&p);
	if (*p++ != ',')
	    return -1;
	mc = getdigits(&p);
	if (*p++ != '\r')
	    return -1;

	mouse_col = mc - 1;
	mouse_row = mr - 1;
	mouse_code = MOUSE_LEFT;
	*slen += (int)(p - (tp + *slen));
    }
#endif	
#ifdef FEAT_MOUSE_JSB
    if (key_name[0] == KS_JSBTERM_MOUSE)
    {
	int mult, val, iter, button, status;

	
	p = tp + *slen;
	button = mouse_code = 0;
	switch (*p++)
	{
	    case 'L': button = 1; break;
	    case '-': break;
	    case 'x': break; 
	    default:  return -1; 
	}
	switch (*p++)
	{
	    case 'M': button |= 2; break;
	    case '-': break;
	    case 'x': break; 
	    default:  return -1; 
	}
	switch (*p++)
	{
	    case 'R': button |= 4; break;
	    case '-': break;
	    case 'x': break; 
	    default:  return -1; 
	}
	status = *p++;
	for (val = 0, mult = 100, iter = 0; iter < 3; iter++,
		mult /= 10, p++)
	    if (*p >= '0' && *p <= '9')
		val += (*p - '0') * mult;
	    else
		return -1;
	mouse_col = val;
	for (val = 0, mult = 100, iter = 0; iter < 3; iter++,
		mult /= 10, p++)
	    if (*p >= '0' && *p <= '9')
		val += (*p - '0') * mult;
	    else
		return -1;
	mouse_row = val;
	switch (*p++)
	{
	    case 's': button |= 8; break;  
	    case '-': break;  
	    case 'x': break;  
	    default:  return -1; 
	}
	switch (*p++)
	{
	    case 'c': button |= 16; break;  
	    case '-': break;  
	    case 'x': break;  
	    default:  return -1; 
	}
	if (*p++ != '\033')
	    return -1;
	if (*p++ != '\\')
	    return -1;
	switch (status)
	{
	    case 'D': 
	    case 'S': 
		if (button & 1) mouse_code |= MOUSE_LEFT;
		if (button & 2) mouse_code |= MOUSE_MIDDLE;
		if (button & 4) mouse_code |= MOUSE_RIGHT;
		if (button & 8) mouse_code |= MOUSE_SHIFT;
		if (button & 16) mouse_code |= MOUSE_CTRL;
		break;
	    case 'm': 
		if (button & 1) mouse_code |= MOUSE_LEFT;
		if (button & 2) mouse_code |= MOUSE_MIDDLE;
		if (button & 4) mouse_code |= MOUSE_RIGHT;
		if (button & 8) mouse_code |= MOUSE_SHIFT;
		if (button & 16) mouse_code |= MOUSE_CTRL;
		if ((button & 7) != 0)
		{
		    held_button = mouse_code;
		    mouse_code |= MOUSE_DRAG;
		}
		is_drag = TRUE;
		showmode();
		break;
	    case 'd': 
		if (button & 1) mouse_code |= MOUSE_LEFT;
		if (button & 2) mouse_code |= MOUSE_MIDDLE;
		if (button & 4) mouse_code |= MOUSE_RIGHT;
		if (button & 8) mouse_code |= MOUSE_SHIFT;
		if (button & 16) mouse_code |= MOUSE_CTRL;
		break;
	    case 'u': 
		is_release = TRUE;
		if (button & 1)
		    mouse_code |= MOUSE_LEFT;
		if (button & 2)
		    mouse_code |= MOUSE_MIDDLE;
		if (button & 4)
		    mouse_code |= MOUSE_RIGHT;
		if (button & 8)
		    mouse_code |= MOUSE_SHIFT;
		if (button & 16)
		    mouse_code |= MOUSE_CTRL;
		break;
	    default: return -1; 
	}

	*slen += (p - (tp + *slen));
    }
#endif 
#ifdef FEAT_MOUSE_DEC
    if (key_name[0] == KS_DEC_MOUSE)
    {
	
	int Pe, Pb, Pr, Pc;

	p = tp + *slen;

	
	Pe = getdigits(&p);
	if (*p++ != ';')
	    return -1;

	
	Pb = getdigits(&p);
	if (*p++ != ';')
	    return -1;

	
	Pr = getdigits(&p);
	if (*p++ != ';')
	    return -1;

	
	Pc = getdigits(&p);

	
	if (*p == ';')
	{
	    p++;
	    (void)getdigits(&p);
	}
	if (*p++ != '&')
	    return -1;
	if (*p++ != 'w')
	    return -1;

	mouse_code = 0;
	switch (Pe)
	{
	    case  0: return -1; 
	    case  1: 
		     
		     Pb &= 7;   
		     if (Pb & 4)
			 mouse_code  = MOUSE_LEFT;
		     if (Pb & 2)
			 mouse_code  = MOUSE_MIDDLE;
		     if (Pb & 1)
			 mouse_code  = MOUSE_RIGHT;
		     if (Pb)
		     {
			 held_button = mouse_code;
			 mouse_code |= MOUSE_DRAG;
			 WantQueryMouse = TRUE;
		     }
		     is_drag = TRUE;
		     showmode();
		     break;
	    case  2: mouse_code = MOUSE_LEFT;
		     WantQueryMouse = TRUE;
		     break;
	    case  3: mouse_code = MOUSE_LEFT;
		     is_release = TRUE;
		     break;
	    case  4: mouse_code = MOUSE_MIDDLE;
		     WantQueryMouse = TRUE;
		     break;
	    case  5: mouse_code = MOUSE_MIDDLE;
		     is_release = TRUE;
		     break;
	    case  6: mouse_code = MOUSE_RIGHT;
		     WantQueryMouse = TRUE;
		     break;
	    case  7: mouse_code = MOUSE_RIGHT;
		     is_release = TRUE;
		     break;
	    case  8: return -1; 
	    case  9: return -1; 
	    case 10: return -1; 
	    default: return -1; 
	}

	mouse_col = Pc - 1;
	mouse_row = Pr - 1;

	*slen += (int)(p - (tp + *slen));
    }
#endif 
#ifdef FEAT_MOUSE_PTERM
    if (key_name[0] == KS_PTERM_MOUSE)
    {
	int button, num_clicks, action;

	p = tp + *slen;

	action = getdigits(&p);
	if (*p++ != ';')
	    return -1;

	mouse_row = getdigits(&p);
	if (*p++ != ';')
	    return -1;
	mouse_col = getdigits(&p);
	if (*p++ != ';')
	    return -1;

	button = getdigits(&p);
	mouse_code = 0;

	switch (button)
	{
	    case 4: mouse_code = MOUSE_LEFT; break;
	    case 1: mouse_code = MOUSE_RIGHT; break;
	    case 2: mouse_code = MOUSE_MIDDLE; break;
	    default: return -1;
	}

	switch (action)
	{
	    case 31: 
		if (*p++ != ';')
		    return -1;

		num_clicks = getdigits(&p); 
		break;

	    case 32: 
		is_release = TRUE;
		break;

	    case 33: 
		held_button = mouse_code;
		mouse_code |= MOUSE_DRAG;
		break;

	    default:
		return -1;
	}

	if (*p++ != 't')
	    return -1;

	*slen += (p - (tp + *slen));
    }
#endif 

    
    current_button = (mouse_code & MOUSE_CLICK_MASK);
    if (is_release)
	current_button |= MOUSE_RELEASE;

    if (current_button == MOUSE_RELEASE
#ifdef FEAT_MOUSE_XTERM
	    && wheel_code == 0
#endif
       )
    {
	
	if ((mouse_code & MOUSE_DRAG) == MOUSE_DRAG)
	    is_drag = TRUE;
	current_button = held_button;
    }
    else
    {
      if (wheel_code == 0)
      {
#ifdef CHECK_DOUBLE_CLICK
# ifdef FEAT_MOUSE_GPM
	
#  ifdef FEAT_GUI
	if (key_name[0] != KS_GPM_MOUSE && !gui.in_use)
#  else
	    if (key_name[0] != KS_GPM_MOUSE)
#  endif
# else
#  ifdef FEAT_GUI
		if (!gui.in_use)
#  endif
# endif
		{
		    
		    gettimeofday(&mouse_time, NULL);
		    if (orig_mouse_time.tv_sec == 0)
		    {
			
			timediff = p_mouset;
		    }
		    else
			timediff = time_diff_ms(&orig_mouse_time, &mouse_time);
		    orig_mouse_time = mouse_time;
		    if (mouse_code == orig_mouse_code
			    && timediff < p_mouset
			    && orig_num_clicks != 4
			    && orig_mouse_col == mouse_col
			    && orig_mouse_row == mouse_row
			    && (is_mouse_topline(curwin)
				
				
				|| (mouse_row == 0 && firstwin->w_winrow > 0))
		       )
			++orig_num_clicks;
		    else
			orig_num_clicks = 1;
		    orig_mouse_col = mouse_col;
		    orig_mouse_row = mouse_row;
		    set_mouse_topline(curwin);
		}
# if defined(FEAT_GUI) || defined(FEAT_MOUSE_GPM)
		else
		    orig_num_clicks = NUM_MOUSE_CLICKS(mouse_code);
# endif
#else
	orig_num_clicks = NUM_MOUSE_CLICKS(mouse_code);
#endif
	is_click = TRUE;
      }
      orig_mouse_code = mouse_code;
    }
    if (!is_drag)
	held_button = mouse_code & MOUSE_CLICK_MASK;

    
    if (orig_mouse_code & MOUSE_SHIFT)
	*modifiers |= MOD_MASK_SHIFT;
    if (orig_mouse_code & MOUSE_CTRL)
	*modifiers |= MOD_MASK_CTRL;
    if (orig_mouse_code & MOUSE_ALT)
	*modifiers |= MOD_MASK_ALT;
    if (orig_num_clicks == 2)
	*modifiers |= MOD_MASK_2CLICK;
    else if (orig_num_clicks == 3)
	*modifiers |= MOD_MASK_3CLICK;
    else if (orig_num_clicks == 4)
	*modifiers |= MOD_MASK_4CLICK;

    
    
    key_name[0] = KS_EXTRA;
    if (wheel_code != 0 && (!is_release || release_is_ambiguous))
    {
	if (wheel_code & MOUSE_CTRL)
	    *modifiers |= MOD_MASK_CTRL;
	if (wheel_code & MOUSE_ALT)
	    *modifiers |= MOD_MASK_ALT;

	if (wheel_code & 1 && wheel_code & 2)
	    key_name[1] = (int)KE_MOUSELEFT;
	else if (wheel_code & 2)
	    key_name[1] = (int)KE_MOUSERIGHT;
	else if (wheel_code & 1)
	    key_name[1] = (int)KE_MOUSEUP;
	else
	    key_name[1] = (int)KE_MOUSEDOWN;

	held_button = MOUSE_RELEASE;
    }
    else
	key_name[1] = get_pseudo_mouse_code(current_button, is_click, is_drag);


    
    
    if (mouse_col >= Columns)
	mouse_col = Columns - 1;
    if (mouse_row >= Rows)
	mouse_row = Rows - 1;

    return 0;
}




    int
mouse_comp_pos(
    win_T	*win,
    int		*rowp,
    int		*colp,
    linenr_T	*lnump,
    int		*plines_cache)
{
    int		col = *colp;
    int		row = *rowp;
    linenr_T	lnum;
    int		retval = FALSE;
    int		off;
    int		count;

#ifdef FEAT_RIGHTLEFT
    if (win->w_p_rl)
	col = win->w_width - 1 - col;
#endif

    lnum = win->w_topline;

    while (row > 0)
    {
	int cache_idx = lnum - win->w_topline;

	
	
	if (plines_cache != NULL && cache_idx < Rows
						&& plines_cache[cache_idx] > 0)
	    count = plines_cache[cache_idx];
	else
	{
#ifdef FEAT_DIFF
	    
	    if (win->w_p_diff
# ifdef FEAT_FOLDING
		    && !hasFoldingWin(win, lnum, NULL, NULL, TRUE, NULL)
# endif
		    )
	    {
		if (lnum == win->w_topline)
		    row -= win->w_topfill;
		else
		    row -= diff_check_fill(win, lnum);
		count = plines_win_nofill(win, lnum, FALSE);
	    }
	    else
#endif
		count = plines_win(win, lnum, FALSE);
	    if (plines_cache != NULL && cache_idx < Rows)
		plines_cache[cache_idx] = count;
	}

	if (win->w_skipcol > 0 && lnum == win->w_topline)
	{
	    int width1 = win->w_width - win_col_off(win);

	    if (width1 > 0)
	    {
		int skip_lines = 0;

		
		
		if (win->w_skipcol > width1)
		    skip_lines = (win->w_skipcol - width1)
					    / (width1 + win_col_off2(win)) + 1;
		else if (win->w_skipcol > 0)
		    skip_lines = 1;

		count -= skip_lines;
	    }
	}

	if (count > row)
	    break;	
#ifdef FEAT_FOLDING
	(void)hasFoldingWin(win, lnum, NULL, &lnum, TRUE, NULL);
#endif
	if (lnum == win->w_buffer->b_ml.ml_line_count)
	{
	    retval = TRUE;
	    break;		
	}
	row -= count;
	++lnum;
    }

    if (!retval)
    {
	
	off = win_col_off(win) - win_col_off2(win);
	if (col < off)
	    col = off;
	col += row * (win->w_width - off);

	
	if (lnum == win->w_topline)
	    col += win->w_skipcol;
    }

    if (!win->w_p_wrap)
	col += win->w_leftcol;

    
    col -= win_col_off(win);
    if (col <= 0)
    {
#ifdef FEAT_NETBEANS_INTG
	
	if (*colp < win_col_off(win))
	    netbeans_gutter_click(lnum);
#endif
	col = 0;
    }

    *colp = col;
    *rowp = row;
    *lnump = lnum;
    return retval;
}


    win_T *
mouse_find_win(int *rowp, int *colp, mouse_find_T popup UNUSED)
{
    frame_T	*fp;
    win_T	*wp;

#ifdef FEAT_PROP_POPUP
    win_T	*pwp = NULL;

    if (popup != IGNORE_POPUP)
    {
	popup_reset_handled(POPUP_HANDLED_1);
	while ((wp = find_next_popup(TRUE, POPUP_HANDLED_1)) != NULL)
	{
	    if (*rowp >= wp->w_winrow && *rowp < wp->w_winrow + popup_height(wp)
		    && *colp >= wp->w_wincol
				    && *colp < wp->w_wincol + popup_width(wp))
		pwp = wp;
	}
	if (pwp != NULL)
	{
	    if (popup == FAIL_POPUP)
		return NULL;
	    *rowp -= pwp->w_winrow;
	    *colp -= pwp->w_wincol;
	    return pwp;
	}
    }
#endif

    fp = topframe;
    *rowp -= firstwin->w_winrow;
    for (;;)
    {
	if (fp->fr_layout == FR_LEAF)
	    break;
	if (fp->fr_layout == FR_ROW)
	{
	    for (fp = fp->fr_child; fp->fr_next != NULL; fp = fp->fr_next)
	    {
		if (*colp < fp->fr_width)
		    break;
		*colp -= fp->fr_width;
	    }
	}
	else    
	{
	    for (fp = fp->fr_child; fp->fr_next != NULL; fp = fp->fr_next)
	    {
		if (*rowp < fp->fr_height)
		    break;
		*rowp -= fp->fr_height;
	    }
	}
    }
    
    
    FOR_ALL_WINDOWS(wp)
	if (wp == fp->fr_win)
	{
#ifdef FEAT_MENU
	    *rowp -= wp->w_winbar_height;
#endif
	    return wp;
	}
    return NULL;
}

#if defined(NEED_VCOL2COL) || defined(FEAT_BEVAL) || defined(FEAT_PROP_POPUP) \
	|| defined(FEAT_EVAL) || defined(PROTO)

    int
vcol2col(win_T *wp, linenr_T lnum, int vcol, colnr_T *coladdp)
{
    char_u	    *line;
    chartabsize_T   cts;

    
    line = ml_get_buf(wp->w_buffer, lnum, FALSE);
    init_chartabsize_arg(&cts, wp, lnum, 0, line, line);
    while (cts.cts_vcol < vcol && *cts.cts_ptr != NUL)
    {
	int size = win_lbr_chartabsize(&cts, NULL);
	if (cts.cts_vcol + size > vcol)
	    break;
	cts.cts_vcol += size;
	MB_PTR_ADV(cts.cts_ptr);
    }
    clear_chartabsize_arg(&cts);

    if (coladdp != NULL)
	*coladdp = vcol - cts.cts_vcol;
    return (int)(cts.cts_ptr - line);
}
#endif

#if defined(FEAT_EVAL) || defined(PROTO)

    void
f_getmousepos(typval_T *argvars UNUSED, typval_T *rettv)
{
    dict_T	*d;
    win_T	*wp;
    int		row = mouse_row;
    int		col = mouse_col;
    varnumber_T winid = 0;
    varnumber_T winrow = 0;
    varnumber_T wincol = 0;
    linenr_T	lnum = 0;
    varnumber_T column = 0;
    colnr_T	coladd = 0;

    if (rettv_dict_alloc(rettv) == FAIL)
	return;
    d = rettv->vval.v_dict;

    dict_add_number(d, "screenrow", (varnumber_T)mouse_row + 1);
    dict_add_number(d, "screencol", (varnumber_T)mouse_col + 1);

    wp = mouse_find_win(&row, &col, FIND_POPUP);
    if (wp != NULL)
    {
	int	top_off = 0;
	int	left_off = 0;
	int	height = wp->w_height + wp->w_status_height;

# ifdef FEAT_PROP_POPUP
	if (WIN_IS_POPUP(wp))
	{
	    top_off = popup_top_extra(wp);
	    left_off = popup_left_extra(wp);
	    height = popup_height(wp);
	}
# endif
	if (row < height)
	{
	    winid = wp->w_id;
	    winrow = row + 1;
	    wincol = col + 1;
	    row -= top_off;
	    col -= left_off;
	    if (row >= 0 && row < wp->w_height && col >= 0 && col < wp->w_width)
	    {
		(void)mouse_comp_pos(wp, &row, &col, &lnum, NULL);
		col = vcol2col(wp, lnum, col, &coladd);
		column = col + 1;
	    }
	}
    }
    dict_add_number(d, "winid", winid);
    dict_add_number(d, "winrow", winrow);
    dict_add_number(d, "wincol", wincol);
    dict_add_number(d, "line", (varnumber_T)lnum);
    dict_add_number(d, "column", column);
    dict_add_number(d, "coladd", coladd);
}
#endif
