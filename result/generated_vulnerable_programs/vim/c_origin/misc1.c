



#include "vim.h"
#include "version.h"

#if defined(__HAIKU__)
# include <storage/FindDirectory.h>
#endif

#if defined(MSWIN)
# include <lm.h>
#endif

#define URL_SLASH	1		
#define URL_BACKSLASH	2		


static garray_T	ga_users;


    int
get_leader_len(
    char_u	*line,
    char_u	**flags,
    int		backward,
    int		include_space)
{
    int		i, j;
    int		result;
    int		got_com = FALSE;
    int		found_one;
    char_u	part_buf[COM_MAX_LEN];	
    char_u	*string;		
    char_u	*list;
    int		middle_match_len = 0;
    char_u	*prev_list;
    char_u	*saved_flags = NULL;

    result = i = 0;
    while (VIM_ISWHITE(line[i]))    
	++i;

    
    while (line[i] != NUL)
    {
	
	found_one = FALSE;
	for (list = curbuf->b_p_com; *list; )
	{
	    
	    
	    if (!got_com && flags != NULL)
		*flags = list;	    
	    prev_list = list;
	    (void)copy_option_part(&list, part_buf, COM_MAX_LEN, ",");
	    string = vim_strchr(part_buf, ':');
	    if (string == NULL)	    
		continue;
	    *string++ = NUL;	    

	    
	    
	    if (middle_match_len != 0
		    && vim_strchr(part_buf, COM_MIDDLE) == NULL
		    && vim_strchr(part_buf, COM_END) == NULL)
		break;

	    
	    
	    if (got_com && vim_strchr(part_buf, COM_NEST) == NULL)
		continue;

	    
	    if (backward && vim_strchr(part_buf, COM_NOBACK) != NULL)
		continue;

	    
	    
	    
	    
	    if (VIM_ISWHITE(string[0]))
	    {
		if (i == 0 || !VIM_ISWHITE(line[i - 1]))
		    continue;  
		while (VIM_ISWHITE(string[0]))
		    ++string;
	    }
	    for (j = 0; string[j] != NUL && string[j] == line[i + j]; ++j)
		;
	    if (string[j] != NUL)
		continue;  

	    
	    
	    if (vim_strchr(part_buf, COM_BLANK) != NULL
			   && !VIM_ISWHITE(line[i + j]) && line[i + j] != NUL)
		continue;

	    
	    
	    
	    
	    
	    if (vim_strchr(part_buf, COM_MIDDLE) != NULL)
	    {
		if (middle_match_len == 0)
		{
		    middle_match_len = j;
		    saved_flags = prev_list;
		}
		continue;
	    }
	    if (middle_match_len != 0 && j > middle_match_len)
		
		
		middle_match_len = 0;

	    if (middle_match_len == 0)
		i += j;
	    found_one = TRUE;
	    break;
	}

	if (middle_match_len != 0)
	{
	    
	    
	    if (!got_com && flags != NULL)
		*flags = saved_flags;
	    i += middle_match_len;
	    found_one = TRUE;
	}

	
	if (!found_one)
	    break;

	result = i;

	
	while (VIM_ISWHITE(line[i]))
	    ++i;

	if (include_space)
	    result = i;

	
	got_com = TRUE;
	if (vim_strchr(part_buf, COM_NEST) == NULL)
	    break;
    }
    return result;
}


    int
get_last_leader_offset(char_u *line, char_u **flags)
{
    int		result = -1;
    int		i, j;
    int		lower_check_bound = 0;
    char_u	*string;
    char_u	*com_leader;
    char_u	*com_flags;
    char_u	*list;
    int		found_one;
    char_u	part_buf[COM_MAX_LEN];	

    
    i = (int)STRLEN(line);
    while (--i >= lower_check_bound)
    {
	
	found_one = FALSE;
	for (list = curbuf->b_p_com; *list; )
	{
	    char_u *flags_save = list;

	    
	    (void)copy_option_part(&list, part_buf, COM_MAX_LEN, ",");
	    string = vim_strchr(part_buf, ':');
	    if (string == NULL)	
				
		continue;
	    *string++ = NUL;	
	    com_leader = string;

	    
	    if (VIM_ISWHITE(string[0]))
	    {
		if (i == 0 || !VIM_ISWHITE(line[i - 1]))
		    continue;
		while (VIM_ISWHITE(*string))
		    ++string;
	    }
	    for (j = 0; string[j] != NUL && string[j] == line[i + j]; ++j)
		;
	    if (string[j] != NUL)
		continue;

	    
	    if (vim_strchr(part_buf, COM_BLANK) != NULL
		    && !VIM_ISWHITE(line[i + j]) && line[i + j] != NUL)
		continue;

	    if (vim_strchr(part_buf, COM_MIDDLE) != NULL)
	    {
		
		
		
		
		
		for (j = 0; VIM_ISWHITE(line[j]) && j <= i; j++)
		    ;
		if (j < i)
		    continue;
	    }

	    
	    found_one = TRUE;

	    if (flags)
		*flags = flags_save;
	    com_flags = flags_save;

	    break;
	}

	if (found_one)
	{
	    char_u  part_buf2[COM_MAX_LEN];	
	    int     len1, len2, off;

	    result = i;
	    
	    if (vim_strchr(part_buf, COM_NEST) != NULL)
		continue;

	    lower_check_bound = i;

	    
	    
	    
	    

	    while (VIM_ISWHITE(*com_leader))
		++com_leader;
	    len1 = (int)STRLEN(com_leader);

	    for (list = curbuf->b_p_com; *list; )
	    {
		char_u *flags_save = list;

		(void)copy_option_part(&list, part_buf2, COM_MAX_LEN, ",");
		if (flags_save == com_flags)
		    continue;
		string = vim_strchr(part_buf2, ':');
		++string;
		while (VIM_ISWHITE(*string))
		    ++string;
		len2 = (int)STRLEN(string);
		if (len2 == 0)
		    continue;

		
		
		for (off = (len2 > i ? i : len2); off > 0 && off + len1 > len2;)
		{
		    --off;
		    if (!STRNCMP(string + off, com_leader, len2 - off))
		    {
			if (i - off < lower_check_bound)
			    lower_check_bound = i - off;
		    }
		}
	    }
	}
    }
    return result;
}


    int
plines(linenr_T lnum)
{
    return plines_win(curwin, lnum, TRUE);
}

    int
plines_win(
    win_T	*wp,
    linenr_T	lnum,
    int		limit_winheight)	
{
#if defined(FEAT_DIFF) || defined(PROTO)
    
    
    return plines_win_nofill(wp, lnum, limit_winheight)
						   + diff_check_fill(wp, lnum);
}


    int
plines_nofill(linenr_T lnum)
{
    return plines_win_nofill(curwin, lnum, TRUE);
}

    int
plines_win_nofill(
    win_T	*wp,
    linenr_T	lnum,
    int		limit_winheight)	
{
#endif
    int		lines;

    if (wp->w_width == 0)
	return 1;

#ifdef FEAT_FOLDING
    
    
    if (lineFolded(wp, lnum) == TRUE)
	return 1;
#endif

    if (!wp->w_p_wrap)
	lines = 1
#ifdef FEAT_PROP_POPUP
	    
	    + prop_count_above_below(wp->w_buffer, lnum)
#endif
	;
    else
	lines = plines_win_nofold(wp, lnum);

    if (limit_winheight && lines > wp->w_height)
	return wp->w_height;
    return lines;
}


    int
plines_win_nofold(win_T *wp, linenr_T lnum)
{
    char_u	*s;
    int	col;
    int		width;
    chartabsize_T cts;

    s = ml_get_buf(wp->w_buffer, lnum, FALSE);
    init_chartabsize_arg(&cts, wp, lnum, 0, s, s);
    if (*s == NUL
#ifdef FEAT_PROP_POPUP
	    && !cts.cts_has_prop_with_text
#endif
	    )
	return 1; 
    win_linetabsize_cts(&cts, (colnr_T)MAXCOL);
    clear_chartabsize_arg(&cts);
    col = (int)cts.cts_vcol;

    
    
    if (wp->w_p_list && wp->w_lcs_chars.eol != NUL)
	col += 1;

    
    width = wp->w_width - win_col_off(wp);
    if (width <= 0)
	return 32000;
    if (col <= width)
	return 1;
    col -= width;
    width += win_col_off2(wp);
    return (col + (width - 1)) / width + 1;
}


    int
plines_win_col(win_T *wp, linenr_T lnum, int column)
{
    int	col;
    int		lines = 0;
    int		width;
    char_u	*line;
    chartabsize_T cts;

#ifdef FEAT_DIFF
    
    
    lines = diff_check_fill(wp, lnum);
#endif

    if (!wp->w_p_wrap)
	return lines + 1;

    if (wp->w_width == 0)
	return lines + 1;

    line = ml_get_buf(wp->w_buffer, lnum, FALSE);

    init_chartabsize_arg(&cts, wp, lnum, 0, line, line);
    while (*cts.cts_ptr != NUL && --column >= 0)
    {
	cts.cts_vcol += win_lbr_chartabsize(&cts, NULL);
	MB_PTR_ADV(cts.cts_ptr);
    }

    
    col = cts.cts_vcol;
    if (*cts.cts_ptr == TAB && (State & MODE_NORMAL)
				    && (!wp->w_p_list || wp->w_lcs_chars.tab1))
	col += win_lbr_chartabsize(&cts, NULL) - 1;
    clear_chartabsize_arg(&cts);

    
    width = wp->w_width - win_col_off(wp);
    if (width <= 0)
	return 9999;

    lines += 1;
    if (col > width)
	lines += (col - width) / (width + win_col_off2(wp)) + 1;
    return lines;
}


    int
plines_m_win(win_T *wp, linenr_T first, linenr_T last, int max)
{
    int		count = 0;

    while (first <= last && count < max)
    {
#ifdef FEAT_FOLDING
	int	x;

	
	
	x = foldedCount(wp, first, NULL);
	if (x > 0)
	{
	    ++count;	    
	    first += x;
	}
	else
#endif
	{
#ifdef FEAT_DIFF
	    if (first == wp->w_topline)
		count += plines_win_nofill(wp, first, FALSE) + wp->w_topfill;
	    else
#endif
		count += plines_win(wp, first, FALSE);
	    ++first;
	}
    }
#ifdef FEAT_DIFF
    if (first == wp->w_buffer->b_ml.ml_line_count + 1)
	count += diff_check_fill(wp, first);
#endif
    return MIN(max, count);
}

    int
gchar_pos(pos_T *pos)
{
    char_u	*ptr;

    
    if (pos->col == MAXCOL)
	return NUL;
    ptr = ml_get_pos(pos);
    if (has_mbyte)
	return (*mb_ptr2char)(ptr);
    return (int)*ptr;
}

    int
gchar_cursor(void)
{
    if (has_mbyte)
	return (*mb_ptr2char)(ml_get_cursor());
    return (int)*ml_get_cursor();
}


    void
pchar_cursor(int c)
{
    *(ml_get_buf(curbuf, curwin->w_cursor.lnum, TRUE)
						  + curwin->w_cursor.col) = c;
}


    char_u *
skip_to_option_part(char_u *p)
{
    if (*p == ',')
	++p;
    while (*p == ' ')
	++p;
    return p;
}


    void
check_status(buf_T *buf)
{
    win_T	*wp;

    FOR_ALL_WINDOWS(wp)
	if (wp->w_buffer == buf && wp->w_status_height)
	{
	    wp->w_redr_status = TRUE;
	    set_must_redraw(UPD_VALID);
	}
}


    int
ask_yesno(char_u *str, int direct)
{
    int	    r = ' ';
    int	    save_State = State;

    if (exiting)		
	settmode(TMODE_RAW);
    ++no_wait_return;
#ifdef USE_ON_FLY_SCROLL
    dont_scroll = TRUE;		
#endif
    State = MODE_CONFIRM;	
    setmouse();			
    ++no_mapping;
    ++allow_keys;		

    while (r != 'y' && r != 'n')
    {
	
	smsg_attr(HL_ATTR(HLF_R), "%s (y/n)?", str);
	if (direct)
	    r = get_keystroke();
	else
	    r = plain_vgetc();
	if (r == Ctrl_C || r == ESC)
	    r = 'n';
	msg_putchar(r);	    
	out_flush();
    }
    --no_wait_return;
    State = save_State;
    setmouse();
    --no_mapping;
    --allow_keys;

    return r;
}

#if defined(FEAT_EVAL) || defined(PROTO)


    void
get_mode(char_u *buf)
{
    int		i = 0;

    if (time_for_testing == 93784)
    {
	
	buf[i++] = 'x';
	buf[i++] = '!';
    }
#ifdef FEAT_TERMINAL
    else if (term_use_loop())
    {
	if (State & MODE_CMDLINE)
	    buf[i++] = 'c';
	buf[i++] = 't';
    }
#endif
    else if (VIsual_active)
    {
	if (VIsual_select)
	    buf[i++] = VIsual_mode + 's' - 'v';
	else
	{
	    buf[i++] = VIsual_mode;
	    if (restart_VIsual_select)
		buf[i++] = 's';
	}
    }
    else if (State == MODE_HITRETURN || State == MODE_ASKMORE
						      || State == MODE_SETWSIZE
		|| State == MODE_CONFIRM)
    {
	buf[i++] = 'r';
	if (State == MODE_ASKMORE)
	    buf[i++] = 'm';
	else if (State == MODE_CONFIRM)
	    buf[i++] = '?';
    }
    else if (State == MODE_EXTERNCMD)
	buf[i++] = '!';
    else if (State & MODE_INSERT)
    {
	if (State & VREPLACE_FLAG)
	{
	    buf[i++] = 'R';
	    buf[i++] = 'v';
	}
	else
	{
	    if (State & REPLACE_FLAG)
		buf[i++] = 'R';
	    else
		buf[i++] = 'i';
	}

	if (ins_compl_active())
	    buf[i++] = 'c';
	else if (ctrl_x_mode_not_defined_yet())
	    buf[i++] = 'x';
    }
    else if ((State & MODE_CMDLINE) || exmode_active)
    {
	buf[i++] = 'c';
	if (exmode_active == EXMODE_VIM)
	    buf[i++] = 'v';
	else if (exmode_active == EXMODE_NORMAL)
	    buf[i++] = 'e';
	if ((State & MODE_CMDLINE) && cmdline_overstrike())
	    buf[i++] = 'r';
    }
    else
    {
	buf[i++] = 'n';
	if (finish_op)
	{
	    buf[i++] = 'o';
	    
	    
	    buf[i++] = motion_force;
	}
	else if (restart_edit == 'I' || restart_edit == 'R'
							|| restart_edit == 'V')
	{
	    buf[i++] = 'i';
	    buf[i++] = restart_edit;
	}
#ifdef FEAT_TERMINAL
	else if (term_in_normal_mode())
	    buf[i++] = 't';
#endif
    }

    buf[i] = NUL;
}


    void
f_mode(typval_T *argvars, typval_T *rettv)
{
    char_u	buf[MODE_MAX_LENGTH];

    if (in_vim9script() && check_for_opt_bool_arg(argvars, 0) == FAIL)
	return;

    get_mode(buf);

    
    
    if (!non_zero_arg(&argvars[0]))
	buf[1] = NUL;

    rettv->vval.v_string = vim_strsave(buf);
    rettv->v_type = VAR_STRING;
}

    static void
may_add_state_char(garray_T *gap, char_u *include, int c)
{
    if (include == NULL || vim_strchr(include, c) != NULL)
	ga_append(gap, c);
}


    void
f_state(typval_T *argvars, typval_T *rettv)
{
    garray_T	ga;
    char_u	*include = NULL;
    int		i;

    if (in_vim9script() && check_for_opt_string_arg(argvars, 0) == FAIL)
	return;

    ga_init2(&ga, 1, 20);
    if (argvars[0].v_type != VAR_UNKNOWN)
	include = tv_get_string(&argvars[0]);

    if (!(stuff_empty() && typebuf.tb_len == 0 && scriptin[curscript] == NULL))
	may_add_state_char(&ga, include, 'm');
    if (op_pending())
	may_add_state_char(&ga, include, 'o');
    if (autocmd_busy)
	may_add_state_char(&ga, include, 'x');
    if (ins_compl_active())
	may_add_state_char(&ga, include, 'a');

# ifdef FEAT_JOB_CHANNEL
    if (channel_in_blocking_wait())
	may_add_state_char(&ga, include, 'w');
# endif
    if (!get_was_safe_state())
	may_add_state_char(&ga, include, 'S');
    for (i = 0; i < get_callback_depth() && i < 3; ++i)
	may_add_state_char(&ga, include, 'c');
    if (msg_scrolled > 0)
	may_add_state_char(&ga, include, 's');

    rettv->v_type = VAR_STRING;
    rettv->vval.v_string = ga.ga_data;
}

#endif 


    int
get_keystroke(void)
{
    char_u	*buf = NULL;
    int		buflen = 150;
    int		maxlen;
    int		len = 0;
    int		n;
    int		save_mapped_ctrl_c = mapped_ctrl_c;
    int		waited = 0;

    mapped_ctrl_c = FALSE;	
    for (;;)
    {
	cursor_on();
	out_flush();

	
	
	
	maxlen = (buflen - 6 - len) / 3;
	if (buf == NULL)
	    buf = alloc(buflen);
	else if (maxlen < 10)
	{
	    char_u  *t_buf = buf;

	    
	    
	    buflen += 100;
	    buf = vim_realloc(buf, buflen);
	    if (buf == NULL)
		vim_free(t_buf);
	    maxlen = (buflen - 6 - len) / 3;
	}
	if (buf == NULL)
	{
	    do_outofmem_msg((long_u)buflen);
	    return ESC;  
	}

	
	
	n = ui_inchar(buf + len, maxlen, len == 0 ? -1L : 100L, 0);
	if (n > 0)
	{
	    
	    n = fix_input_buffer(buf + len, n);
	    len += n;
	    waited = 0;
	}
	else if (len > 0)
	    ++waited;	    

	
	if ((n = check_termcode(1, buf, buflen, &len)) < 0
	       && (!p_ttimeout || waited * 100L < (p_ttm < 0 ? p_tm : p_ttm)))
	    continue;

	if (n == KEYLEN_REMOVED)  
	{
	    if (must_redraw != 0 && !need_wait_return && (State
			& (MODE_CMDLINE | MODE_HITRETURN | MODE_ASKMORE)) == 0)
	    {
		
		update_screen(0);
		setcursor(); 
	    }
	    continue;
	}
	if (n > 0)		
	    len = n;
	if (len == 0)		
	    continue;

	
	n = buf[0];
	if (n == K_SPECIAL)
	{
	    n = TO_SPECIAL(buf[1], buf[2]);
	    if (buf[1] == KS_MODIFIER
		    || n == K_IGNORE
		    || (is_mouse_key(n) && n != K_LEFTMOUSE)
#ifdef FEAT_GUI
		    || n == K_VER_SCROLLBAR
		    || n == K_HOR_SCROLLBAR
#endif
	       )
	    {
		if (buf[1] == KS_MODIFIER)
		    mod_mask = buf[2];
		len -= 3;
		if (len > 0)
		    mch_memmove(buf, buf + 3, (size_t)len);
		continue;
	    }
	    break;
	}
	if (has_mbyte)
	{
	    if (MB_BYTE2LEN(n) > len)
		continue;	
	    buf[len >= buflen ? buflen - 1 : len] = NUL;
	    n = (*mb_ptr2char)(buf);
	}
#ifdef UNIX
	if (n == intr_char)
	    n = ESC;
#endif
	break;
    }
    vim_free(buf);

    mapped_ctrl_c = save_mapped_ctrl_c;
    return n;
}


    int
get_number(
    int	    colon,			
    int	    *mouse_used)
{
    int	n = 0;
    int	c;
    int typed = 0;

    if (mouse_used != NULL)
	*mouse_used = FALSE;

    
    
    if (msg_silent != 0)
	return 0;

#ifdef USE_ON_FLY_SCROLL
    dont_scroll = TRUE;		
#endif
    ++no_mapping;
    ++allow_keys;		
    for (;;)
    {
	windgoto(msg_row, msg_col);
	c = safe_vgetc();
	if (VIM_ISDIGIT(c))
	{
	    if (vim_append_digit_int(&n, c - '0') == FAIL)
		return 0;
	    msg_putchar(c);
	    ++typed;
	}
	else if (c == K_DEL || c == K_KDEL || c == K_BS || c == Ctrl_H)
	{
	    if (typed > 0)
	    {
		msg_puts("\b \b");
		--typed;
	    }
	    n /= 10;
	}
	else if (mouse_used != NULL && c == K_LEFTMOUSE)
	{
	    *mouse_used = TRUE;
	    n = mouse_row + 1;
	    break;
	}
	else if (n == 0 && c == ':' && colon)
	{
	    stuffcharReadbuff(':');
	    if (!exmode_active)
		cmdline_row = msg_row;
	    skip_redraw = TRUE;	    
	    do_redraw = FALSE;
	    break;
	}
	else if (c == Ctrl_C || c == ESC || c == 'q')
	{
	    n = 0;
	    break;
	}
	else if (c == CAR || c == NL )
	    break;
    }
    --no_mapping;
    --allow_keys;
    return n;
}


    int
prompt_for_number(int *mouse_used)
{
    int		i;
    int		save_cmdline_row;
    int		save_State;

    
    if (mouse_used != NULL)
	msg_puts(_("Type number and <Enter> or click with the mouse (q or empty cancels): "));
    else
	msg_puts(_("Type number and <Enter> (q or empty cancels): "));

    
    
    
    save_cmdline_row = cmdline_row;
    cmdline_row = 0;
    save_State = State;
    State = MODE_CMDLINE;
    
    setmouse();

    i = get_number(TRUE, mouse_used);
    if (KeyTyped)
    {
	
	if (msg_row > 0)
	    cmdline_row = msg_row - 1;
	need_wait_return = FALSE;
	msg_didany = FALSE;
	msg_didout = FALSE;
    }
    else
	cmdline_row = save_cmdline_row;
    State = save_State;
    
    setmouse();

    return i;
}

    void
msgmore(int n)
{
    int pn;

    if (global_busy	    
	    || !messaging())  
	return;

    
    
    
    if (keep_msg != NULL && !keep_msg_more)
	return;

    if (n > 0)
	pn = n;
    else
	pn = -n;

    if (pn > p_report)
    {
	if (n > 0)
	    vim_snprintf(msg_buf, MSG_BUF_LEN,
		    NGETTEXT("%ld more line", "%ld more lines", pn), pn);
	else
	    vim_snprintf(msg_buf, MSG_BUF_LEN,
		    NGETTEXT("%ld line less", "%ld fewer lines", pn), pn);
	if (got_int)
	    vim_strcat((char_u *)msg_buf, (char_u *)_(" (Interrupted)"),
								  MSG_BUF_LEN);
	if (msg(msg_buf))
	{
	    set_keep_msg((char_u *)msg_buf, 0);
	    keep_msg_more = TRUE;
	}
    }
}


    void
beep_flush(void)
{
    if (emsg_silent == 0)
    {
	flush_buffers(FLUSH_MINIMAL);
	vim_beep(BO_ERROR);
    }
}


    void
vim_beep(unsigned val)
{
#ifdef FEAT_EVAL
    called_vim_beep = TRUE;
#endif

    if (emsg_silent != 0 || in_assert_fails)
	return;

    if (!((bo_flags & val) || (bo_flags & BO_ALL)))
    {
#ifdef ELAPSED_FUNC
	static int		did_init = FALSE;
	static elapsed_T	start_tv;

	
	
	if (!did_init || ELAPSED_FUNC(start_tv) > 500)
	{
	    did_init = TRUE;
	    ELAPSED_INIT(start_tv);
#endif
	    if (p_vb
#ifdef FEAT_GUI
		    
		    
		    && !(gui.in_use && gui.starting)
#endif
	       )
	    {
		out_str_cf(T_VB);
#ifdef FEAT_VTP
		
		if (has_vtp_working() != 0
# ifdef FEAT_TERMGUICOLORS
			&& (p_tgc || (!p_tgc && t_colors >= 256))
# endif
		   )
		{
		    redraw_later(UPD_CLEAR);
		    update_screen(0);
		    redrawcmd();
		}
#endif
	    }
	    else
		out_char(BELL);
#ifdef ELAPSED_FUNC
	}
#endif
    }

    
    
    
    if (vim_strchr(p_debug, 'e') != NULL)
    {
	msg_source(HL_ATTR(HLF_W));
	msg_attr(_("Beep!"), HL_ATTR(HLF_W));
    }
}


    void
init_homedir(void)
{
    char_u  *var;

    
    VIM_CLEAR(homedir);

#ifdef VMS
    var = mch_getenv((char_u *)"SYS$LOGIN");
#else
    var = mch_getenv((char_u *)"HOME");
#endif

#ifdef MSWIN
    
    if (var == NULL || *var == NUL)
    {
	char_u *homedrive, *homepath;

	homedrive = mch_getenv((char_u *)"HOMEDRIVE");
	homepath = mch_getenv((char_u *)"HOMEPATH");
	if (homepath == NULL || *homepath == NUL)
	    homepath = (char_u *)"\\";
	if (homedrive != NULL
			   && STRLEN(homedrive) + STRLEN(homepath) < MAXPATHL)
	{
	    sprintf((char *)NameBuff, "%s%s", homedrive, homepath);
	    if (NameBuff[0] != NUL)
		var = NameBuff;
	}
    }

    if (var == NULL)
	var = mch_getenv((char_u *)"USERPROFILE");

    
    if (var != NULL && *var == '%')
    {
	char_u	*p;
	char_u	*exp;

	p = vim_strchr(var + 1, '%');
	if (p != NULL)
	{
	    vim_strncpy(NameBuff, var + 1, p - (var + 1));
	    exp = mch_getenv(NameBuff);
	    if (exp != NULL && *exp != NUL
					&& STRLEN(exp) + STRLEN(p) < MAXPATHL)
	    {
		vim_snprintf((char *)NameBuff, MAXPATHL, "%s%s", exp, p + 1);
		var = NameBuff;
	    }
	}
    }

    if (var != NULL && *var == NUL)	
	var = NULL;

    if (enc_utf8 && var != NULL)
    {
	int	len;
	char_u  *pp = NULL;

	
	
	acp_to_enc(var, (int)STRLEN(var), &pp, &len);
	if (pp != NULL)
	{
	    homedir = pp;
	    return;
	}
    }

    
    if (var == NULL)
	var = (char_u *)"C:/";
#endif

    if (var != NULL)
    {
#ifdef UNIX
	
	if (mch_dirname(NameBuff, MAXPATHL) == OK
					  && mch_chdir((char *)NameBuff) == 0)
	{
	    if (!mch_chdir((char *)var) && mch_dirname(IObuff, IOSIZE) == OK)
		var = IObuff;
	    if (mch_chdir((char *)NameBuff) != 0)
		emsg(_(e_cannot_go_back_to_previous_directory));
	}
#endif
	homedir = vim_strsave(var);
    }
}

#if defined(EXITFREE) || defined(PROTO)
    void
free_homedir(void)
{
    vim_free(homedir);
}

    void
free_users(void)
{
    ga_clear_strings(&ga_users);
}
#endif

#if defined(MSWIN) || defined(PROTO)

    void
init_vimdir(void)
{
    int	    mustfree;
    char_u  *p;

    mch_get_exe_name();

    mustfree = FALSE;
    didset_vim = FALSE;
    p = vim_getenv((char_u *)"VIM", &mustfree);
    if (mustfree)
	vim_free(p);

    mustfree = FALSE;
    didset_vimruntime = FALSE;
    p = vim_getenv((char_u *)"VIMRUNTIME", &mustfree);
    if (mustfree)
	vim_free(p);
}
#endif


    char_u *
expand_env_save(char_u *src)
{
    return expand_env_save_opt(src, FALSE);
}


    char_u *
expand_env_save_opt(char_u *src, int one)
{
    char_u	*p;

    p = alloc(MAXPATHL);
    if (p != NULL)
	expand_env_esc(src, p, MAXPATHL, FALSE, one, NULL);
    return p;
}


    void
expand_env(
    char_u	*src,		
    char_u	*dst,		
    int		dstlen)		
{
    expand_env_esc(src, dst, dstlen, FALSE, FALSE, NULL);
}

    void
expand_env_esc(
    char_u	*srcp,		
    char_u	*dst,		
    int		dstlen,		
    int		esc,		
    int		one,		
    char_u	*startstr)	
{
    char_u	*src;
    char_u	*tail;
    int		c;
    char_u	*var;
    int		copy_char;
    int		mustfree;	
    int		at_start = TRUE; 
    int		startstr_len = 0;

    if (startstr != NULL)
	startstr_len = (int)STRLEN(startstr);

    src = skipwhite(srcp);
    --dstlen;		    
    while (*src && dstlen > 0)
    {
#ifdef FEAT_EVAL
	
	if (src[0] == '`' && src[1] == '=')
	{
	    size_t len;

	    var = src;
	    src += 2;
	    (void)skip_expr(&src, NULL);
	    if (*src == '`')
		++src;
	    len = src - var;
	    if (len > (size_t)dstlen)
		len = dstlen;
	    vim_strncpy(dst, var, len);
	    dst += len;
	    dstlen -= (int)len;
	    continue;
	}
#endif
	copy_char = TRUE;
	if ((*src == '$'
#ifdef VMS
		    && at_start
#endif
	   )
#if defined(MSWIN)
		|| *src == '%'
#endif
		|| (*src == '~' && at_start))
	{
	    mustfree = FALSE;

	    
	    if (*src != '~')				
	    {
		tail = src + 1;
		var = dst;
		c = dstlen - 1;

#ifdef UNIX
		
		if (*tail == '{' && !vim_isIDc('{'))
		{
		    tail++;	
		    while (c-- > 0 && *tail && *tail != '}')
			*var++ = *tail++;
		}
		else
#endif
		{
		    while (c-- > 0 && *tail != NUL && ((vim_isIDc(*tail))
#if defined(MSWIN)
			    || (*src == '%' && *tail != '%')
#endif
			    ))
			*var++ = *tail++;
		}

#if defined(MSWIN) || defined(UNIX)
# ifdef UNIX
		if (src[1] == '{' && *tail != '}')
# else
		if (*src == '%' && *tail != '%')
# endif
		    var = NULL;
		else
		{
# ifdef UNIX
		    if (src[1] == '{')
# else
		    if (*src == '%')
#endif
			++tail;
#endif
		    *var = NUL;
		    var = vim_getenv(dst, &mustfree);
#if defined(MSWIN) || defined(UNIX)
		}
#endif
	    }
							
	    else if (  src[1] == NUL
		    || vim_ispathsep(src[1])
		    || vim_strchr((char_u *)" ,\t\n", src[1]) != NULL)
	    {
		var = homedir;
		tail = src + 1;
	    }
	    else					
	    {
#if defined(UNIX) || (defined(VMS) && defined(USER_HOME))
		
		tail = src;
		var = dst;
		c = dstlen - 1;
		while (	   c-- > 0
			&& *tail
			&& vim_isfilec(*tail)
			&& !vim_ispathsep(*tail))
		    *var++ = *tail++;
		*var = NUL;
# ifdef UNIX
		
#  if defined(HAVE_GETPWNAM) && defined(HAVE_PWD_H)
		{
		    
		    
		    struct passwd *pw = (*dst == NUL)
					? NULL : getpwnam((char *)dst + 1);

		    var = (pw == NULL) ? NULL : (char_u *)pw->pw_dir;
		}
		if (var == NULL)
#  endif
		{
		    expand_T	xpc;

		    ExpandInit(&xpc);
		    xpc.xp_context = EXPAND_FILES;
		    var = ExpandOne(&xpc, dst, NULL,
				WILD_ADD_SLASH|WILD_SILENT, WILD_EXPAND_FREE);
		    mustfree = TRUE;
		}

# else	
		
		{
		    char_u	test[MAXPATHL], paths[MAXPATHL];
		    char_u	*path, *next_path, *ptr;
		    stat_T	st;

		    STRCPY(paths, USER_HOME);
		    next_path = paths;
		    while (*next_path)
		    {
			for (path = next_path; *next_path && *next_path != ',';
				next_path++);
			if (*next_path)
			    *next_path++ = NUL;
			STRCPY(test, path);
			STRCAT(test, "/");
			STRCAT(test, dst + 1);
			if (mch_stat(test, &st) == 0)
			{
			    var = alloc(STRLEN(test) + 1);
			    STRCPY(var, test);
			    mustfree = TRUE;
			    break;
			}
		    }
		}
# endif 
#else
		
		var = NULL;
		tail = (char_u *)"";	
#endif 
	    }

#ifdef BACKSLASH_IN_FILENAME
	    
	    
	    if (p_ssl && var != NULL && vim_strchr(var, '\\') != NULL)
	    {
		char_u	*p = vim_strsave(var);

		if (p != NULL)
		{
		    if (mustfree)
			vim_free(var);
		    var = p;
		    mustfree = TRUE;
		    forward_slash(var);
		}
	    }
#endif

	    
	    
	    if (esc && var != NULL && vim_strpbrk(var, (char_u *)" \t") != NULL)
	    {
		char_u	*p = vim_strsave_escaped(var, (char_u *)" \t");

		if (p != NULL)
		{
		    if (mustfree)
			vim_free(var);
		    var = p;
		    mustfree = TRUE;
		}
	    }

	    if (var != NULL && *var != NUL
		    && (STRLEN(var) + STRLEN(tail) + 1 < (unsigned)dstlen))
	    {
		STRCPY(dst, var);
		dstlen -= (int)STRLEN(var);
		c = (int)STRLEN(var);
		
		
		if (after_pathsep(dst, dst + c)
#if defined(BACKSLASH_IN_FILENAME) || defined(AMIGA)
			&& dst[c - 1] != ':'
#endif
			&& vim_ispathsep(*tail))
		    ++tail;
		dst += c;
		src = tail;
		copy_char = FALSE;
	    }
	    if (mustfree)
		vim_free(var);
	}

	if (copy_char)	    
	{
	    
	    at_start = FALSE;
	    if (src[0] == '\\' && src[1] != NUL)
	    {
		*dst++ = *src++;
		--dstlen;
	    }
	    else if ((src[0] == ' ' || src[0] == ',') && !one)
		at_start = TRUE;
	    if (dstlen > 0)
	    {
		*dst++ = *src++;
		--dstlen;

		if (startstr != NULL && src - startstr_len >= srcp
			&& STRNCMP(src - startstr_len, startstr,
							    startstr_len) == 0)
		    at_start = TRUE;
	    }
	}

    }
    *dst = NUL;
}


    static char_u *
remove_tail(char_u *p, char_u *pend, char_u *name)
{
    int		len = (int)STRLEN(name) + 1;
    char_u	*newend = pend - len;

    if (newend >= p
	    && fnamencmp(newend, name, len - 1) == 0
	    && (newend == p || after_pathsep(p, newend)))
	return newend;
    return pend;
}


    static char_u *
vim_version_dir(char_u *vimdir)
{
    char_u	*p;

    if (vimdir == NULL || *vimdir == NUL)
	return NULL;
    p = concat_fnames(vimdir, (char_u *)VIM_VERSION_NODOT, TRUE);
    if (p != NULL && mch_isdir(p))
	return p;
    vim_free(p);
    p = concat_fnames(vimdir, (char_u *)RUNTIME_DIRNAME, TRUE);
    if (p != NULL && mch_isdir(p))
    {
	char_u *fname = concat_fnames(p, (char_u *)"defaults.vim", TRUE);

	
	
	
	if (fname != NULL)
	{
	    int exists = file_is_readable(fname);

	    vim_free(fname);
	    if (exists)
		return p;
	}
    }
    vim_free(p);
    return NULL;
}


    char_u *
vim_getenv(char_u *name, int *mustfree)
{
    char_u	*p = NULL;
    char_u	*pend;
    int		vimruntime;
#ifdef MSWIN
    WCHAR	*wn, *wp;

    
    if (STRCMP(name, "HOME") == 0)
	return homedir;

    
    wn = enc_to_utf16(name, NULL);
    if (wn == NULL)
	return NULL;

    wp = _wgetenv(wn);
    vim_free(wn);

    if (wp != NULL && *wp == NUL)   
	wp = NULL;

    if (wp != NULL)
    {
	p = utf16_to_enc(wp, NULL);
	if (p == NULL)
	    return NULL;

	*mustfree = TRUE;
	return p;
    }
#else
    p = mch_getenv(name);
    if (p != NULL && *p == NUL)	    
	p = NULL;

    if (p != NULL)
	return p;

# ifdef __HAIKU__
    
    if (STRCMP(name, "BE_USER_SETTINGS") == 0)
    {
	static char userSettingsPath[MAXPATHL];

	if (find_directory(B_USER_SETTINGS_DIRECTORY, 0, false,
					   userSettingsPath, MAXPATHL) == B_OK)
	    return (char_u *)userSettingsPath;
	else
	    return NULL;
    }
# endif
#endif

    
    vimruntime = (STRCMP(name, "VIMRUNTIME") == 0);
    if (!vimruntime && STRCMP(name, "VIM") != 0)
	return NULL;

    
    if (vimruntime
#ifdef HAVE_PATHDEF
	    && *default_vimruntime_dir == NUL
#endif
       )
    {
#ifdef MSWIN
	
	wp = _wgetenv(L"VIM");
	if (wp != NULL && *wp == NUL)	    
	    wp = NULL;
	if (wp != NULL)
	{
	    char_u *q = utf16_to_enc(wp, NULL);
	    if (q != NULL)
	    {
		p = vim_version_dir(q);
		*mustfree = TRUE;
		if (p == NULL)
		    p = q;
	    }
	}
#else
	p = mch_getenv((char_u *)"VIM");
	if (p != NULL && *p == NUL)	    
	    p = NULL;
	if (p != NULL)
	{
	    p = vim_version_dir(p);
	    if (p != NULL)
		*mustfree = TRUE;
	    else
		p = mch_getenv((char_u *)"VIM");
	}
#endif
    }

    
    if (p == NULL)
    {
	if (p_hf != NULL && vim_strchr(p_hf, '$') == NULL)
	    p = p_hf;
#ifdef USE_EXE_NAME
	
	else
	    p = exe_name;
#endif
	if (p != NULL)
	{
	    
	    pend = gettail(p);

	    
	    if (p == p_hf)
		pend = remove_tail(p, pend, (char_u *)"doc");

#ifdef USE_EXE_NAME
# ifdef MACOS_X
	    
	    if (p == exe_name)
	    {
		char_u	*pend1;
		char_u	*pnew;

		pend1 = remove_tail(p, pend, (char_u *)"MacOS");
		if (pend1 != pend)
		{
		    pnew = alloc(pend1 - p + 15);
		    if (pnew != NULL)
		    {
			STRNCPY(pnew, p, (pend1 - p));
			STRCPY(pnew + (pend1 - p), "Resources/vim");
			p = pnew;
			pend = p + STRLEN(p);
		    }
		}
	    }
# endif
	    
	    if (p == exe_name)
		pend = remove_tail(p, pend, (char_u *)"src");
#endif

	    
	    if (!vimruntime)
	    {
		pend = remove_tail(p, pend, (char_u *)RUNTIME_DIRNAME);
		pend = remove_tail(p, pend, (char_u *)VIM_VERSION_NODOT);
	    }

	    
	    if (pend > p && after_pathsep(p, pend))
		--pend;

#ifdef MACOS_X
	    if (p == exe_name || p == p_hf)
#endif
		
		p = vim_strnsave(p, pend - p);

	    if (p != NULL && !mch_isdir(p))
		VIM_CLEAR(p);
	    else
	    {
#ifdef USE_EXE_NAME
		
		if (vimruntime && (pend = vim_version_dir(p)) != NULL)
		{
		    vim_free(p);
		    p = pend;
		}
#endif
		*mustfree = TRUE;
	    }
	}
    }

#ifdef HAVE_PATHDEF
    
    
    if (p == NULL)
    {
	
	if (vimruntime && *default_vimruntime_dir != NUL)
	{
	    p = default_vimruntime_dir;
	    *mustfree = FALSE;
	}
	else if (*default_vim_dir != NUL)
	{
	    if (vimruntime && (p = vim_version_dir(default_vim_dir)) != NULL)
		*mustfree = TRUE;
	    else
	    {
		p = default_vim_dir;
		*mustfree = FALSE;
	    }
	}
    }
#endif

    
    if (p != NULL)
    {
	if (vimruntime)
	{
	    vim_setenv((char_u *)"VIMRUNTIME", p);
	    didset_vimruntime = TRUE;
	}
	else
	{
	    vim_setenv((char_u *)"VIM", p);
	    didset_vim = TRUE;
	}
    }
    return p;
}

    void
vim_unsetenv(char_u *var)
{
#ifdef HAVE_UNSETENV
    unsetenv((char *)var);
#else
    vim_setenv(var, (char_u *)"");
#endif
}


    void
vim_unsetenv_ext(char_u *var)
{
    vim_unsetenv(var);

    
    if (STRICMP(var, "VIM") == 0)
	didset_vim = FALSE;
    else if (STRICMP(var, "VIMRUNTIME") == 0)
	didset_vimruntime = FALSE;
}

#if defined(FEAT_EVAL) || defined(PROTO)

    void
vim_setenv_ext(char_u *name, char_u *val)
{
    vim_setenv(name, val);
    if (STRICMP(name, "HOME") == 0)
	init_homedir();
    else if (didset_vim && STRICMP(name, "VIM") == 0)
	didset_vim = FALSE;
    else if (didset_vimruntime && STRICMP(name, "VIMRUNTIME") == 0)
	didset_vimruntime = FALSE;
}
#endif


    void
vim_setenv(char_u *name, char_u *val)
{
#ifdef HAVE_SETENV
    mch_setenv((char *)name, (char *)val, 1);
#else
    char_u	*envbuf;

    
    envbuf = alloc(STRLEN(name) + STRLEN(val) + 2);
    if (envbuf != NULL)
    {
	sprintf((char *)envbuf, "%s=%s", name, val);
	putenv((char *)envbuf);
    }
#endif
#ifdef FEAT_GETTEXT
    
    if (*val != NUL && STRICMP(name, "VIMRUNTIME") == 0)
    {
	char_u	*buf = concat_str(val, (char_u *)"/lang");

	if (buf != NULL)
	{
	    bindtextdomain(VIMPACKAGE, (char *)buf);
	    vim_free(buf);
	}
    }
#endif
}


    char_u *
get_env_name(
    expand_T	*xp UNUSED,
    int		idx)
{
#if defined(AMIGA)
    
    return NULL;
#else
# ifndef __WIN32__
    
    extern char		**environ;
# endif
    char_u		*str;
    int			n;

    str = (char_u *)environ[idx];
    if (str == NULL)
	return NULL;

    for (n = 0; n < EXPAND_BUF_LEN - 1; ++n)
    {
	if (str[n] == '=' || str[n] == NUL)
	    break;
	xp->xp_buf[n] = str[n];
    }
    xp->xp_buf[n] = NUL;
    return xp->xp_buf;
#endif
}


    static void
add_user(char_u *user, int need_copy)
{
    char_u	*user_copy = (user != NULL && need_copy)
						    ? vim_strsave(user) : user;

    if (user_copy == NULL || *user_copy == NUL || ga_grow(&ga_users, 1) == FAIL)
    {
	if (need_copy)
	    vim_free(user_copy);
	return;
    }
    ((char_u **)(ga_users.ga_data))[ga_users.ga_len++] = user_copy;
}


    static void
init_users(void)
{
    static int	lazy_init_done = FALSE;

    if (lazy_init_done)
	return;

    lazy_init_done = TRUE;
    ga_init2(&ga_users, sizeof(char_u *), 20);

# if defined(HAVE_GETPWENT) && defined(HAVE_PWD_H)
    {
	struct passwd*	pw;

	setpwent();
	while ((pw = getpwent()) != NULL)
	    add_user((char_u *)pw->pw_name, TRUE);
	endpwent();
    }
# elif defined(MSWIN)
    {
	DWORD		nusers = 0, ntotal = 0, i;
	PUSER_INFO_0	uinfo;

	if (NetUserEnum(NULL, 0, 0, (LPBYTE *) &uinfo, MAX_PREFERRED_LENGTH,
				       &nusers, &ntotal, NULL) == NERR_Success)
	{
	    for (i = 0; i < nusers; i++)
		add_user(utf16_to_enc(uinfo[i].usri0_name, NULL), FALSE);

	    NetApiBufferFree(uinfo);
	}
    }
# endif
# if defined(HAVE_GETPWNAM)
    {
	char_u	*user_env = mch_getenv((char_u *)"USER");

	
	
	
	
	

	if (user_env != NULL && *user_env != NUL)
	{
	    int	i;

	    for (i = 0; i < ga_users.ga_len; i++)
	    {
		char_u	*local_user = ((char_u **)ga_users.ga_data)[i];

		if (STRCMP(local_user, user_env) == 0)
		    break;
	    }

	    if (i == ga_users.ga_len)
	    {
		struct passwd	*pw = getpwnam((char *)user_env);

		if (pw != NULL)
		    add_user((char_u *)pw->pw_name, TRUE);
	    }
	}
    }
# endif
}


    char_u*
get_users(expand_T *xp UNUSED, int idx)
{
    init_users();
    if (idx < ga_users.ga_len)
	return ((char_u **)ga_users.ga_data)[idx];
    return NULL;
}


    int
match_user(char_u *name)
{
    int i;
    int n = (int)STRLEN(name);
    int result = 0;

    init_users();
    for (i = 0; i < ga_users.ga_len; i++)
    {
	if (STRCMP(((char_u **)ga_users.ga_data)[i], name) == 0)
	    return 2; 
	if (STRNCMP(((char_u **)ga_users.ga_data)[i], name, n) == 0)
	    result = 1; 
    }
    return result;
}

    static void
prepare_to_exit(void)
{
#if defined(SIGHUP) && defined(SIG_IGN)
    
    
    
    mch_signal(SIGHUP, SIG_IGN);
#endif

#ifdef FEAT_GUI
    if (gui.in_use)
    {
	gui.dying = TRUE;
	out_trash();	
    }
    else
#endif
    {
	windgoto((int)Rows - 1, 0);

	
	settmode(TMODE_COOK);
	stoptermcap();
	out_flush();
    }
}


    void
preserve_exit(void)
{
    buf_T	*buf;

    prepare_to_exit();

    
    
    really_exiting = TRUE;

    out_str(IObuff);
    screen_start();		    
    out_flush();

    ml_close_notmod();		    

    FOR_ALL_BUFFERS(buf)
    {
	if (buf->b_ml.ml_mfp != NULL && buf->b_ml.ml_mfp->mf_fname != NULL)
	{
	    OUT_STR("Vim: preserving files...\r\n");
	    screen_start();	    
	    out_flush();
	    ml_sync_all(FALSE, FALSE);	
	    break;
	}
    }

    ml_close_all(FALSE);	    

    OUT_STR("Vim: Finished.\r\n");

    getout(1);
}



#ifndef BREAKCHECK_SKIP
# define BREAKCHECK_SKIP 1000
#endif

static int	breakcheck_count = 0;

    void
line_breakcheck(void)
{
    if (++breakcheck_count >= BREAKCHECK_SKIP)
    {
	breakcheck_count = 0;
	ui_breakcheck();
    }
}


    void
fast_breakcheck(void)
{
    if (++breakcheck_count >= BREAKCHECK_SKIP * 10)
    {
	breakcheck_count = 0;
	ui_breakcheck();
    }
}

# if defined(FEAT_SPELL) || defined(PROTO)

    void
veryfast_breakcheck(void)
{
    if (++breakcheck_count >= BREAKCHECK_SKIP * 100)
    {
	breakcheck_count = 0;
	ui_breakcheck();
    }
}
#endif

#if defined(VIM_BACKTICK) || defined(FEAT_EVAL) \
	|| (defined(HAVE_LOCALE_H) || defined(X_LOCALE)) \
	|| defined(PROTO)

#ifndef SEEK_SET
# define SEEK_SET 0
#endif
#ifndef SEEK_END
# define SEEK_END 2
#endif


    char_u *
get_cmd_output(
    char_u	*cmd,
    char_u	*infile,	
    int		flags,		
    int		*ret_len)
{
    char_u	*tempname;
    char_u	*command;
    char_u	*buffer = NULL;
    int		len;
    int		i = 0;
    FILE	*fd;

    if (check_restricted() || check_secure())
	return NULL;

    
    if ((tempname = vim_tempname('o', FALSE)) == NULL)
    {
	emsg(_(e_cant_get_temp_file_name));
	return NULL;
    }

    
    command = make_filter_cmd(cmd, infile, tempname);
    if (command == NULL)
	goto done;

    
    ++no_check_timestamps;
    call_shell(command, SHELL_DOOUT | SHELL_EXPAND | flags);
    --no_check_timestamps;

    vim_free(command);

    
# ifdef VMS
    
    fd = mch_fopen((char *)tempname, "r");
# else
    fd = mch_fopen((char *)tempname, READBIN);
# endif

    
    if (fd == NULL
	    || fseek(fd, 0L, SEEK_END) == -1
	    || (len = ftell(fd)) == -1		
	    || fseek(fd, 0L, SEEK_SET) == -1)	
    {
	semsg(_(e_cannot_read_from_str_2), tempname);
	if (fd != NULL)
	    fclose(fd);
	goto done;
    }

    buffer = alloc(len + 1);
    if (buffer != NULL)
	i = (int)fread((char *)buffer, (size_t)1, (size_t)len, fd);
    fclose(fd);
    mch_remove(tempname);
    if (buffer == NULL)
	goto done;
#ifdef VMS
    len = i;	
#endif
    if (i != len)
    {
	semsg(_(e_cant_read_file_str), tempname);
	VIM_CLEAR(buffer);
    }
    else if (ret_len == NULL)
    {
	
	for (i = 0; i < len; ++i)
	    if (buffer[i] == NUL)
		buffer[i] = 1;

	buffer[len] = NUL;	
    }
    else
	*ret_len = len;

done:
    vim_free(tempname);
    return buffer;
}

# if defined(FEAT_EVAL) || defined(PROTO)

    static void
get_cmd_output_as_rettv(
    typval_T	*argvars,
    typval_T	*rettv,
    int		retlist)
{
    char_u	*res = NULL;
    char_u	*p;
    char_u	*infile = NULL;
    int		err = FALSE;
    FILE	*fd;
    list_T	*list = NULL;
    int		flags = SHELL_SILENT;

    rettv->v_type = VAR_STRING;
    rettv->vval.v_string = NULL;
    if (check_restricted() || check_secure())
	goto errret;

    if (in_vim9script()
	    && (check_for_string_arg(argvars, 0) == FAIL
		|| check_for_opt_string_or_number_or_list_arg(argvars, 1)
								      == FAIL))
	return;

    if (argvars[1].v_type != VAR_UNKNOWN)
    {
	
	if ((infile = vim_tempname('i', TRUE)) == NULL)
	{
	    emsg(_(e_cant_get_temp_file_name));
	    goto errret;
	}

	fd = mch_fopen((char *)infile, WRITEBIN);
	if (fd == NULL)
	{
	    semsg(_(e_cant_open_file_str), infile);
	    goto errret;
	}
	if (argvars[1].v_type == VAR_NUMBER)
	{
	    linenr_T	lnum;
	    buf_T	*buf;

	    buf = buflist_findnr(argvars[1].vval.v_number);
	    if (buf == NULL)
	    {
		semsg(_(e_buffer_nr_does_not_exist), argvars[1].vval.v_number);
		fclose(fd);
		goto errret;
	    }

	    for (lnum = 1; lnum <= buf->b_ml.ml_line_count; lnum++)
	    {
		for (p = ml_get_buf(buf, lnum, FALSE); *p != NUL; ++p)
		    if (putc(*p == '\n' ? NUL : *p, fd) == EOF)
		    {
			err = TRUE;
			break;
		    }
		if (putc(NL, fd) == EOF)
		{
		    err = TRUE;
		    break;
		}
	    }
	}
	else if (argvars[1].v_type == VAR_LIST)
	{
	    if (write_list(fd, argvars[1].vval.v_list, TRUE) == FAIL)
		err = TRUE;
	}
	else
	{
	    size_t	len;
	    char_u	buf[NUMBUFLEN];

	    p = tv_get_string_buf_chk(&argvars[1], buf);
	    if (p == NULL)
	    {
		fclose(fd);
		goto errret;		
	    }
	    len = STRLEN(p);
	    if (len > 0 && fwrite(p, len, 1, fd) != 1)
		err = TRUE;
	}
	if (fclose(fd) != 0)
	    err = TRUE;
	if (err)
	{
	    emsg(_(e_error_writing_temp_file));
	    goto errret;
	}
    }

    
    
    if (!msg_silent)
	flags += SHELL_COOKED;

    if (retlist)
    {
	int		len;
	listitem_T	*li;
	char_u		*s = NULL;
	char_u		*start;
	char_u		*end;
	int		i;

	res = get_cmd_output(tv_get_string(&argvars[0]), infile, flags, &len);
	if (res == NULL)
	    goto errret;

	list = list_alloc();
	if (list == NULL)
	    goto errret;

	for (i = 0; i < len; ++i)
	{
	    start = res + i;
	    while (i < len && res[i] != NL)
		++i;
	    end = res + i;

	    s = alloc(end - start + 1);
	    if (s == NULL)
		goto errret;

	    for (p = s; start < end; ++p, ++start)
		*p = *start == NUL ? NL : *start;
	    *p = NUL;

	    li = listitem_alloc();
	    if (li == NULL)
	    {
		vim_free(s);
		goto errret;
	    }
	    li->li_tv.v_type = VAR_STRING;
	    li->li_tv.v_lock = 0;
	    li->li_tv.vval.v_string = s;
	    list_append(list, li);
	}

	rettv_list_set(rettv, list);
	list = NULL;
    }
    else
    {
	res = get_cmd_output(tv_get_string(&argvars[0]), infile, flags, NULL);
#ifdef USE_CRNL
	
	if (res != NULL)
	{
	    char_u	*s, *d;

	    d = res;
	    for (s = res; *s; ++s)
	    {
		if (s[0] == CAR && s[1] == NL)
		    ++s;
		*d++ = *s;
	    }
	    *d = NUL;
	}
#endif
	rettv->vval.v_string = res;
	res = NULL;
    }

errret:
    if (infile != NULL)
    {
	mch_remove(infile);
	vim_free(infile);
    }
    if (res != NULL)
	vim_free(res);
    if (list != NULL)
	list_free(list);
}


    void
f_system(typval_T *argvars, typval_T *rettv)
{
    get_cmd_output_as_rettv(argvars, rettv, FALSE);
}


    void
f_systemlist(typval_T *argvars, typval_T *rettv)
{
    get_cmd_output_as_rettv(argvars, rettv, TRUE);
}
# endif 

#endif


    int
goto_im(void)
{
    return (p_im && stuff_empty() && typebuf_typed());
}


    char_u *
get_isolated_shell_name(void)
{
    char_u *p;

#ifdef MSWIN
    p = gettail(p_sh);
    p = vim_strnsave(p, skiptowhite(p) - p);
#else
    p = skiptowhite(p_sh);
    if (*p == NUL)
    {
	
	p = vim_strsave(gettail(p_sh));
    }
    else
    {
	char_u  *p1, *p2;

	
	p1 = p_sh;
	for (p2 = p_sh; p2 < p; MB_PTR_ADV(p2))
	    if (vim_ispathsep(*p2))
		p1 = p2 + 1;
	p = vim_strnsave(p1, p - p1);
    }
#endif
    return p;
}


    int
path_is_url(char_u *p)
{
    if (STRNCMP(p, "://", (size_t)3) == 0)
	return URL_SLASH;
    else if (STRNCMP(p, ":\\\\", (size_t)3) == 0)
	return URL_BACKSLASH;
    return 0;
}


    int
path_with_url(char_u *fname)
{
    char_u *p;

    
    
    

    
    if (!ASCII_ISALPHA(*fname))
	return 0;

    
    for (p = fname + 1; (ASCII_ISALPHA(*p) || (*p == '-')); ++p)
	;

    
    if (p[-1] == '-')
	return 0;

    
    return path_is_url(p);
}

#if defined(FEAT_EVAL) || defined(PROTO)

    dict_T *
get_v_event(save_v_event_T *sve)
{
    dict_T	*v_event = get_vim_var_dict(VV_EVENT);

    if (v_event->dv_hashtab.ht_used > 0)
    {
	
	sve->sve_did_save = TRUE;
	sve->sve_hashtab = v_event->dv_hashtab;
	hash_init(&v_event->dv_hashtab);
    }
    else
	sve->sve_did_save = FALSE;
    return v_event;
}

    void
restore_v_event(dict_T *v_event, save_v_event_T *sve)
{
    dict_free_contents(v_event);
    if (sve->sve_did_save)
	v_event->dv_hashtab = sve->sve_hashtab;
    else
	hash_init(&v_event->dv_hashtab);
}
#endif


    void
may_trigger_modechanged(void)
{
#ifdef FEAT_EVAL
    dict_T	    *v_event;
    save_v_event_T  save_v_event;
    char_u	    curr_mode[MODE_MAX_LENGTH];
    char_u	    pattern_buf[2 * MODE_MAX_LENGTH];

    
    
    if (!has_modechanged() || got_int)
	return;

    get_mode(curr_mode);
    if (STRCMP(curr_mode, last_mode) == 0)
	return;

    v_event = get_v_event(&save_v_event);
    (void)dict_add_string(v_event, "new_mode", curr_mode);
    (void)dict_add_string(v_event, "old_mode", last_mode);
    dict_set_items_ro(v_event);

    
    vim_snprintf((char *)pattern_buf, sizeof(pattern_buf), "%s:%s", last_mode,
	    curr_mode);

    apply_autocmds(EVENT_MODECHANGED, pattern_buf, NULL, FALSE, curbuf);
    STRCPY(last_mode, curr_mode);

    restore_v_event(v_event, &save_v_event);
#endif
}


    int
vim_append_digit_int(int *value, int digit)
{
    int x = *value;
    if (x > ((INT_MAX - digit) / 10))
	return FAIL;
    *value = x * 10 + digit;
    return OK;
}


    int
vim_append_digit_long(int *value, int digit)
{
    int x = *value;
    if (x > ((LONG_MAX - (int)digit) / 10))
	return FAIL;
    *value = x * 10 + (int)digit;
    return OK;
}


    int
trim_to_int(vimlong_T x)
{
    return x > INT_MAX ? INT_MAX : x < INT_MIN ? INT_MIN : x;
}

