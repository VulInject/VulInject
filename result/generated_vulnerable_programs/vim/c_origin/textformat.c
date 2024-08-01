



#include "vim.h"

static int	did_add_space = FALSE;	
					

#define WHITECHAR(cc) (VIM_ISWHITE(cc) && (!enc_utf8 || !utf_iscomposing(utf_ptr2char(ml_get_cursor() + 1))))


    int
has_format_option(int x)
{
    if (p_paste)
	return FALSE;
    return (vim_strchr(curbuf->b_p_fo, x) != NULL);
}


    void
internal_format(
    int		textwidth,
    int		second_indent,
    int		flags,
    int		format_only,
    int		c) 
{
    int		cc;
    int		skip_pos;
    int		save_char = NUL;
    int		haveto_redraw = FALSE;
    int		fo_ins_blank = has_format_option(FO_INS_BLANK);
    int		fo_multibyte = has_format_option(FO_MBYTE_BREAK);
    int		fo_rigor_tw  = has_format_option(FO_RIGOROUS_TW);
    int		fo_white_par = has_format_option(FO_WHITE_PAR);
    int		first_line = TRUE;
    colnr_T	leader_len;
    int		no_leader = FALSE;
    int		do_comments = (flags & INSCHAR_DO_COM);
    int		safe_tw = trim_to_int(8 * (vimlong_T)textwidth);
#ifdef FEAT_LINEBREAK
    int		has_lbr = curwin->w_p_lbr;
    int		has_bri = curwin->w_p_bri;

    
    curwin->w_p_lbr = FALSE;
    curwin->w_p_bri = FALSE;
#endif

    
    
    if (!curbuf->b_p_ai && !(State & VREPLACE_FLAG))
    {
	cc = gchar_cursor();
	if (VIM_ISWHITE(cc))
	{
	    save_char = cc;
	    pchar_cursor('x');
	}
    }

    
    while (!got_int)
    {
	int	startcol;		
	int	wantcol;		
	int	foundcol;		
	int	end_foundcol = 0;	
	colnr_T	len;
	colnr_T	virtcol;
	int	orig_col = 0;
	char_u	*saved_text = NULL;
	colnr_T	col;
	colnr_T	end_col;
	int	wcc;			
	int	did_do_comment = FALSE;
	int	first_pass;

	
	
	
	if (curwin->w_cursor.col < safe_tw)
	{
	    virtcol = get_nolist_virtcol()
		+ char2cells(c != NUL ? c : gchar_cursor());
	    if (virtcol <= (colnr_T)textwidth)
		break;
	}

	if (no_leader)
	    do_comments = FALSE;
	else if (!(flags & INSCHAR_FORMAT)
				       && has_format_option(FO_WRAP_COMS))
	    do_comments = TRUE;

	
	if (do_comments)
	{
	    char_u *line = ml_get_curline();

	    leader_len = get_leader_len(line, NULL, FALSE, TRUE);
	    if (leader_len == 0 && curbuf->b_p_cin)
	    {
		int		comment_start;

		
		comment_start = check_linecomment(line);
		if (comment_start != MAXCOL)
		{
		    leader_len = get_leader_len(
				      line + comment_start, NULL, FALSE, TRUE);
		    if (leader_len != 0)
			leader_len += comment_start;
		}
	    }
	}
	else
	    leader_len = 0;

	
	
	
	
	if (leader_len == 0)
	    no_leader = TRUE;
	if (!(flags & INSCHAR_FORMAT)
		&& leader_len == 0
		&& !has_format_option(FO_WRAP))

	    break;
	if ((startcol = curwin->w_cursor.col) == 0)
	    break;

	
	coladvance((colnr_T)textwidth);
	wantcol = curwin->w_cursor.col;

	
	
	
	
	
	curwin->w_cursor.col = startcol < safe_tw ? startcol : safe_tw;

	foundcol = 0;
	skip_pos = 0;
	first_pass = TRUE;

	
	
	while ((!fo_ins_blank && !has_format_option(FO_INS_VI))
		    || (flags & INSCHAR_FORMAT)
		    || curwin->w_cursor.lnum != Insstart.lnum
		    || curwin->w_cursor.col >= Insstart.col)
	{
	    if (first_pass && c != NUL)
	    {
		cc = c;
		first_pass = FALSE;
	    }
	    else
		cc = gchar_cursor();
	    if (WHITECHAR(cc))
	    {
		
		end_col = curwin->w_cursor.col;

		
		wcc = 0;
		while (curwin->w_cursor.col > 0 && WHITECHAR(cc))
		{
		    dec_cursor();
		    cc = gchar_cursor();

		    
		    
		    if (wcc < 2)
			wcc++;
		}
		if (curwin->w_cursor.col == 0 && WHITECHAR(cc))
		    break;		

		
		
		if (has_format_option(FO_PERIOD_ABBR) && cc == '.' && wcc < 2)
		    continue;

		
		if (curwin->w_cursor.col < leader_len)
		    break;
		if (has_format_option(FO_ONE_LETTER))
		{
		    
		    if (curwin->w_cursor.col == 0)
			break;	
		    
		    if (curwin->w_cursor.col <= leader_len)
			break;
		    col = curwin->w_cursor.col;
		    dec_cursor();
		    cc = gchar_cursor();

		    if (WHITECHAR(cc))
			continue;	
		    curwin->w_cursor.col = col;
		}

		inc_cursor();

		end_foundcol = end_col + 1;
		foundcol = curwin->w_cursor.col;
		if (curwin->w_cursor.col <= (colnr_T)wantcol)
		    break;
	    }
	    else if ((cc >= 0x100 || !utf_allow_break_before(cc))
							       && fo_multibyte)
	    {
		int ncc;
		int allow_break;

		
		if (curwin->w_cursor.col != startcol)
		{
		    
		    if (curwin->w_cursor.col < leader_len)
			break;
		    col = curwin->w_cursor.col;
		    inc_cursor();
		    ncc = gchar_cursor();

		    allow_break =
			(enc_utf8 && utf_allow_break(cc, ncc))
			|| enc_dbcs;

		    
		    if (curwin->w_cursor.col != skip_pos && allow_break)
		    {
			foundcol = curwin->w_cursor.col;
			end_foundcol = foundcol;
			if (curwin->w_cursor.col <= (colnr_T)wantcol)
			    break;
		    }
		    curwin->w_cursor.col = col;
		}

		if (curwin->w_cursor.col == 0)
		    break;

		ncc = cc;
		col = curwin->w_cursor.col;

		dec_cursor();
		cc = gchar_cursor();

		if (WHITECHAR(cc))
		    continue;		
		
		if (curwin->w_cursor.col < leader_len)
		    break;

		curwin->w_cursor.col = col;
		skip_pos = curwin->w_cursor.col;

		allow_break =
		    (enc_utf8 && utf_allow_break(cc, ncc))
		    || enc_dbcs;

		
		if (allow_break)
		{
		    foundcol = curwin->w_cursor.col;
		    end_foundcol = foundcol;
		}
		if (curwin->w_cursor.col <= (colnr_T)wantcol)
		{
		    int ncc_allow_break =
			 (enc_utf8 && utf_allow_break_before(ncc)) || enc_dbcs;

		    if (allow_break)
			break;
		    if (!ncc_allow_break && !fo_rigor_tw)
		    {
			
			if (curwin->w_cursor.col == startcol)
			{
			    
			    
			    end_foundcol = foundcol = 0;
			    break;
			}

			
			
			col = curwin->w_cursor.col;

			inc_cursor();
			cc  = ncc;
			ncc = gchar_cursor();
			
			ncc = (ncc != NUL) ? ncc : c;

			allow_break =
				(enc_utf8 && utf_allow_break(cc, ncc))
				|| enc_dbcs;

			if (allow_break)
			{
			    
			    end_foundcol = foundcol =
				      ncc == NUL? 0 : curwin->w_cursor.col;
			    break;
			}
			curwin->w_cursor.col = col;
		    }
		}
	    }
	    if (curwin->w_cursor.col == 0)
		break;
	    dec_cursor();
	}

	if (foundcol == 0)		
	{
	    curwin->w_cursor.col = startcol;
	    break;
	}

	
	undisplay_dollar();

	
	
	
	if (State & VREPLACE_FLAG)
	    orig_col = startcol;	
	else
	    replace_offset = startcol - end_foundcol;

	
	
	curwin->w_cursor.col = foundcol;
	while ((cc = gchar_cursor(), WHITECHAR(cc))
		    && (!fo_white_par || curwin->w_cursor.col < startcol))
	    inc_cursor();
	startcol -= curwin->w_cursor.col;
	if (startcol < 0)
	    startcol = 0;

	if (State & VREPLACE_FLAG)
	{
	    
	    
	    saved_text = vim_strsave(ml_get_cursor());
	    curwin->w_cursor.col = orig_col;
	    if (saved_text == NULL)
		break;	
	    saved_text[startcol] = NUL;

	    
	    if (!fo_white_par)
		backspace_until_column(foundcol);
	}
	else
	{
	    
	    if (!fo_white_par)
		curwin->w_cursor.col = foundcol;
	}

	
	
	open_line(FORWARD, OPENLINE_DELSPACES + OPENLINE_MARKFIX
		+ (fo_white_par ? OPENLINE_KEEPTRAIL : 0)
		+ (do_comments ? OPENLINE_DO_COM : 0)
		+ OPENLINE_FORMAT
		+ ((flags & INSCHAR_COM_LIST) ? OPENLINE_COM_LIST : 0)
		, ((flags & INSCHAR_COM_LIST) ? second_indent : old_indent),
		&did_do_comment);
	if (!(flags & INSCHAR_COM_LIST))
	    old_indent = 0;

	
	
	if (did_do_comment)
	    no_leader = FALSE;

	replace_offset = 0;
	if (first_line)
	{
	    if (!(flags & INSCHAR_COM_LIST))
	    {
		
		
		
		
		
		if (second_indent < 0 && has_format_option(FO_Q_NUMBER))
		    second_indent =
				 get_number_indent(curwin->w_cursor.lnum - 1);
		if (second_indent >= 0)
		{
		    if (State & VREPLACE_FLAG)
			change_indent(INDENT_SET, second_indent,
							    FALSE, NUL, TRUE);
		    else
			if (leader_len > 0 && second_indent - leader_len > 0)
		    {
			int i;
			int padding = second_indent - leader_len;

			
			
			
			
			
			
			for (i = 0; i < padding; i++)
			    ins_str((char_u *)" ");
		    }
		    else
		    {
			(void)set_indent(second_indent, SIN_CHANGED);
		    }
		}
	    }
	    first_line = FALSE;
	}

	if (State & VREPLACE_FLAG)
	{
	    
	    
	    ins_bytes(saved_text);
	    vim_free(saved_text);
	}
	else
	{
	    
	    
	    curwin->w_cursor.col += startcol;
	    len = ml_get_curline_len();
	    if (curwin->w_cursor.col > len)
		curwin->w_cursor.col = len;
	}

	haveto_redraw = TRUE;
	set_can_cindent(TRUE);
	
	did_ai = FALSE;
	did_si = FALSE;
	can_si = FALSE;
	can_si_back = FALSE;
	line_breakcheck();
    }

    if (save_char != NUL)		
	pchar_cursor(save_char);

#ifdef FEAT_LINEBREAK
    curwin->w_p_lbr = has_lbr;
    curwin->w_p_bri = has_bri;
#endif
    if (!format_only && haveto_redraw)
    {
	update_topline();
	redraw_curbuf_later(UPD_VALID);
    }
}


    static int
fmt_check_par(
    linenr_T	lnum,
    int		*leader_len,
    char_u	**leader_flags,
    int		do_comments)
{
    char_u	*flags = NULL;	    
    char_u	*ptr;

    ptr = ml_get(lnum);
    if (do_comments)
	*leader_len = get_leader_len(ptr, leader_flags, FALSE, TRUE);
    else
	*leader_len = 0;

    if (*leader_len > 0)
    {
	
	flags = *leader_flags;
	while (*flags && *flags != ':' && *flags != COM_END)
	    ++flags;
    }

    return (*skipwhite(ptr + *leader_len) == NUL
	    || (*leader_len > 0 && *flags == COM_END)
	    || startPS(lnum, NUL, FALSE));
}


    static int
ends_in_white(linenr_T lnum)
{
    char_u	*s = ml_get(lnum);
    size_t	l;

    if (*s == NUL)
	return FALSE;
    l = ml_get_len(lnum) - 1;
    return VIM_ISWHITE(s[l]);
}


    static int
same_leader(
    linenr_T lnum,
    int	    leader1_len,
    char_u  *leader1_flags,
    int	    leader2_len,
    char_u  *leader2_flags)
{
    int	    idx1 = 0, idx2 = 0;
    char_u  *p;
    char_u  *line1;
    char_u  *line2;

    if (leader1_len == 0)
	return (leader2_len == 0);

    
    
    
    
    
    if (leader1_flags != NULL)
    {
	for (p = leader1_flags; *p && *p != ':'; ++p)
	{
	    if (*p == COM_FIRST)
		return (leader2_len == 0);
	    if (*p == COM_END)
		return FALSE;
	    if (*p == COM_START)
	    {
		int line_len = ml_get_len(lnum);
		if (line_len <= leader1_len)
		    return FALSE;
		if (leader2_flags == NULL || leader2_len == 0)
		    return FALSE;
		for (p = leader2_flags; *p && *p != ':'; ++p)
		    if (*p == COM_MIDDLE)
			return TRUE;
		return FALSE;
	    }
	}
    }

    
    
    line1 = vim_strsave(ml_get(lnum));
    if (line1 != NULL)
    {
	for (idx1 = 0; VIM_ISWHITE(line1[idx1]); ++idx1)
	    ;
	line2 = ml_get(lnum + 1);
	for (idx2 = 0; idx2 < leader2_len; ++idx2)
	{
	    if (!VIM_ISWHITE(line2[idx2]))
	    {
		if (line1[idx1++] != line2[idx2])
		    break;
	    }
	    else
		while (VIM_ISWHITE(line1[idx1]))
		    ++idx1;
	}
	vim_free(line1);
    }
    return (idx2 == leader2_len && idx1 == leader1_len);
}


    static int
paragraph_start(linenr_T lnum)
{
    char_u	*p;
    int		leader_len = 0;		
    char_u	*leader_flags = NULL;	
    int		next_leader_len;	
    char_u	*next_leader_flags;	
    int		do_comments;		

    if (lnum <= 1)
	return TRUE;		

    p = ml_get(lnum - 1);
    if (*p == NUL)
	return TRUE;		

    do_comments = has_format_option(FO_Q_COMS);
    if (fmt_check_par(lnum - 1, &leader_len, &leader_flags, do_comments))
	return TRUE;		

    if (fmt_check_par(lnum, &next_leader_len, &next_leader_flags, do_comments))
	return TRUE;		

    if (has_format_option(FO_WHITE_PAR) && !ends_in_white(lnum - 1))
	return TRUE;		

    if (has_format_option(FO_Q_NUMBER) && (get_number_indent(lnum) > 0))
	return TRUE;		

    if (!same_leader(lnum - 1, leader_len, leader_flags,
					  next_leader_len, next_leader_flags))
	return TRUE;		

    return FALSE;
}


    void
auto_format(
    int		trailblank,	
    int		prev_line)	
{
    pos_T	pos;
    colnr_T	len;
    char_u	*old;
    char_u	*new, *pnew;
    int		wasatend;
    int		cc;

    if (!has_format_option(FO_AUTO))
	return;

    pos = curwin->w_cursor;
    old = ml_get_curline();

    
    check_auto_format(FALSE);

    
    
    
    
    
    wasatend = (pos.col == ml_get_curline_len());
    if (*old != NUL && !trailblank && wasatend)
    {
	dec_cursor();
	cc = gchar_cursor();
	if (!WHITECHAR(cc) && curwin->w_cursor.col > 0
					  && has_format_option(FO_ONE_LETTER))
	    dec_cursor();
	cc = gchar_cursor();
	if (WHITECHAR(cc))
	{
	    curwin->w_cursor = pos;
	    return;
	}
	curwin->w_cursor = pos;
    }

    
    
    if (has_format_option(FO_WRAP_COMS) && !has_format_option(FO_WRAP)
				&& get_leader_len(old, NULL, FALSE, TRUE) == 0)
	return;

    
    
    
    if (prev_line && !paragraph_start(curwin->w_cursor.lnum))
    {
	--curwin->w_cursor.lnum;
	if (u_save_cursor() == FAIL)
	    return;
    }

    
    
    saved_cursor = pos;
    format_lines((linenr_T)-1, FALSE);
    curwin->w_cursor = saved_cursor;
    saved_cursor.lnum = 0;

    if (curwin->w_cursor.lnum > curbuf->b_ml.ml_line_count)
    {
	
	curwin->w_cursor.lnum = curbuf->b_ml.ml_line_count;
	coladvance((colnr_T)MAXCOL);
    }
    else
	check_cursor_col();

    
    
    
    
    if (!wasatend && has_format_option(FO_WHITE_PAR))
    {
	new = ml_get_curline();
	len = ml_get_curline_len();
	if (curwin->w_cursor.col == len)
	{
	    pnew = vim_strnsave(new, len + 2);
	    pnew[len] = ' ';
	    pnew[len + 1] = NUL;
	    ml_replace(curwin->w_cursor.lnum, pnew, FALSE);
	    
	    did_add_space = TRUE;
	}
	else
	    
	    check_auto_format(FALSE);
    }

    check_cursor();
}


    void
check_auto_format(
    int		end_insert)	    
{
    int		c = ' ';
    int		cc;

    if (!did_add_space)
	return;

    cc = gchar_cursor();
    if (!WHITECHAR(cc))
	
	did_add_space = FALSE;
    else
    {
	if (!end_insert)
	{
	    inc_cursor();
	    c = gchar_cursor();
	    dec_cursor();
	}
	if (c != NUL)
	{
	    
	    del_char(FALSE);
	    did_add_space = FALSE;
	}
    }
}


    int
comp_textwidth(
    int		ff)	
{
    int		textwidth;

    textwidth = curbuf->b_p_tw;
    if (textwidth == 0 && curbuf->b_p_wm)
    {
	
	
	textwidth = curwin->w_width - curbuf->b_p_wm;
	if (curbuf == cmdwin_buf)
	    textwidth -= 1;
#ifdef FEAT_FOLDING
	textwidth -= curwin->w_p_fdc;
#endif
#ifdef FEAT_SIGNS
	if (signcolumn_on(curwin))
	    textwidth -= 1;
#endif
	if (curwin->w_p_nu || curwin->w_p_rnu)
	    textwidth -= 8;
    }
    if (textwidth < 0)
	textwidth = 0;
    if (ff && textwidth == 0)
    {
	textwidth = curwin->w_width - 1;
	if (textwidth > 79)
	    textwidth = 79;
    }
    return textwidth;
}


    void
op_format(
    oparg_T	*oap,
    int		keep_cursor)		
{
    int	old_line_count = curbuf->b_ml.ml_line_count;

    
    
    curwin->w_cursor = oap->cursor_start;

    if (u_save((linenr_T)(oap->start.lnum - 1),
				       (linenr_T)(oap->end.lnum + 1)) == FAIL)
	return;
    curwin->w_cursor = oap->start;

    if (oap->is_VIsual)
	
	redraw_curbuf_later(UPD_INVERTED);

    if ((cmdmod.cmod_flags & CMOD_LOCKMARKS) == 0)
	
	curbuf->b_op_start = oap->start;

    
    
    if (keep_cursor)
	saved_cursor = oap->cursor_start;

    format_lines(oap->line_count, keep_cursor);

    
    
    
    if (oap->end_adjusted && curwin->w_cursor.lnum < curbuf->b_ml.ml_line_count)
	++curwin->w_cursor.lnum;
    beginline(BL_WHITE | BL_FIX);
    old_line_count = curbuf->b_ml.ml_line_count - old_line_count;
    msgmore(old_line_count);

    if ((cmdmod.cmod_flags & CMOD_LOCKMARKS) == 0)
	
	curbuf->b_op_end = curwin->w_cursor;

    if (keep_cursor)
    {
	curwin->w_cursor = saved_cursor;
	saved_cursor.lnum = 0;

	
	check_cursor();
    }

    if (oap->is_VIsual)
    {
	win_T	*wp;

	FOR_ALL_WINDOWS(wp)
	{
	    if (wp->w_old_cursor_lnum != 0)
	    {
		
		
		if (wp->w_old_cursor_lnum > wp->w_old_visual_lnum)
		    wp->w_old_cursor_lnum += old_line_count;
		else
		    wp->w_old_visual_lnum += old_line_count;
	    }
	}
    }
}

#if defined(FEAT_EVAL) || defined(PROTO)

    void
op_formatexpr(oparg_T *oap)
{
    if (oap->is_VIsual)
	
	redraw_curbuf_later(UPD_INVERTED);

    if (fex_format(oap->start.lnum, oap->line_count, NUL) != 0)
	
	
	op_format(oap, FALSE);
}

    int
fex_format(
    linenr_T	lnum,
    int	count,
    int		c)	
{
    int		use_sandbox = was_set_insecurely((char_u *)"formatexpr",
								   OPT_LOCAL);
    int		r;
    char_u	*fex;
    sctx_T	save_sctx = current_sctx;

    
    
    set_vim_var_nr(VV_LNUM, lnum);
    set_vim_var_nr(VV_COUNT, count);
    set_vim_var_char(c);

    
    fex = vim_strsave(curbuf->b_p_fex);
    if (fex == NULL)
	return 0;
    current_sctx = curbuf->b_p_script_ctx[BV_FEX];

    
    if (use_sandbox)
	++sandbox;
    r = (int)eval_to_number(fex, TRUE);
    if (use_sandbox)
	--sandbox;

    set_vim_var_string(VV_CHAR, NULL, -1);
    vim_free(fex);
    current_sctx = save_sctx;

    return r;
}
#endif


    void
format_lines(
    linenr_T	line_count,
    int		avoid_fex)		
{
    int		max_len;
    int		is_not_par;		
    int		next_is_not_par;	
    int		is_end_par;		
    int		prev_is_end_par = FALSE;
    int		next_is_start_par = FALSE;
    int		leader_len = 0;		
    int		next_leader_len;	
    char_u	*leader_flags = NULL;	
    char_u	*next_leader_flags = NULL; 
    int		do_comments;		
    int		do_comments_list = 0;	
    int		advance = TRUE;
    int		second_indent = -1;	
					
    int		do_second_indent;
    int		do_number_indent;
    int		do_trail_white;
    int		first_par_line = TRUE;
    int		smd_save;
    int	count;
    int		need_set_indent = TRUE;	
    linenr_T	first_line = curwin->w_cursor.lnum;
    int		force_format = FALSE;
    int		old_State = State;

    
    max_len = comp_textwidth(TRUE) * 3;

    
    do_comments = has_format_option(FO_Q_COMS);
    do_second_indent = has_format_option(FO_Q_SECOND);
    do_number_indent = has_format_option(FO_Q_NUMBER);
    do_trail_white = has_format_option(FO_WHITE_PAR);

    
    if (curwin->w_cursor.lnum > 1)
	is_not_par = fmt_check_par(curwin->w_cursor.lnum - 1
				, &leader_len, &leader_flags, do_comments);
    else
	is_not_par = TRUE;
    next_is_not_par = fmt_check_par(curwin->w_cursor.lnum
			  , &next_leader_len, &next_leader_flags, do_comments);
    is_end_par = (is_not_par || next_is_not_par);
    if (!is_end_par && do_trail_white)
	is_end_par = !ends_in_white(curwin->w_cursor.lnum - 1);

    curwin->w_cursor.lnum--;
    for (count = line_count; count != 0 && !got_int; --count)
    {
	
	if (advance)
	{
	    curwin->w_cursor.lnum++;
	    prev_is_end_par = is_end_par;
	    is_not_par = next_is_not_par;
	    leader_len = next_leader_len;
	    leader_flags = next_leader_flags;
	}

	
	if (count == 1 || curwin->w_cursor.lnum == curbuf->b_ml.ml_line_count)
	{
	    next_is_not_par = TRUE;
	    next_leader_len = 0;
	    next_leader_flags = NULL;
	}
	else
	{
	    next_is_not_par = fmt_check_par(curwin->w_cursor.lnum + 1
			  , &next_leader_len, &next_leader_flags, do_comments);
	    if (do_number_indent)
		next_is_start_par =
			   (get_number_indent(curwin->w_cursor.lnum + 1) > 0);
	}
	advance = TRUE;
	is_end_par = (is_not_par || next_is_not_par || next_is_start_par);
	if (!is_end_par && do_trail_white)
	    is_end_par = !ends_in_white(curwin->w_cursor.lnum);

	
	if (is_not_par)
	{
	    if (line_count < 0)
		break;
	}
	else
	{
	    
	    
	    if (first_par_line
		    && (do_second_indent || do_number_indent)
		    && prev_is_end_par
		    && curwin->w_cursor.lnum < curbuf->b_ml.ml_line_count)
	    {
		if (do_second_indent && !LINEEMPTY(curwin->w_cursor.lnum + 1))
		{
		    if (leader_len == 0 && next_leader_len == 0)
		    {
			
			second_indent =
				   get_indent_lnum(curwin->w_cursor.lnum + 1);
		    }
		    else
		    {
			second_indent = next_leader_len;
			do_comments_list = 1;
		    }
		}
		else if (do_number_indent)
		{
		    if (leader_len == 0 && next_leader_len == 0)
		    {
			
			second_indent =
				     get_number_indent(curwin->w_cursor.lnum);
		    }
		    else
		    {
			
			second_indent =
				     get_number_indent(curwin->w_cursor.lnum);
			do_comments_list = 1;
		    }
		}
	    }

	    
	    if (curwin->w_cursor.lnum >= curbuf->b_ml.ml_line_count
		    || !same_leader(curwin->w_cursor.lnum,
					leader_len, leader_flags,
					   next_leader_len, next_leader_flags))
	    {
		
		
		
		if (next_leader_flags == NULL
			|| STRNCMP(next_leader_flags, "://", 3) != 0
			|| check_linecomment(ml_get_curline()) == MAXCOL)
		is_end_par = TRUE;
	    }

	    
	    
	    if (is_end_par || force_format)
	    {
		if (need_set_indent)
		{
		    int		indent = 0; 

		    
		    
		    
		    
		    if (curwin->w_cursor.lnum == first_line)
			indent = get_indent();
		    else if (curbuf->b_p_lisp)
			indent = get_lisp_indent();
		    else
		    {
			if (cindent_on())
			{
			    indent =
# ifdef FEAT_EVAL
				 *curbuf->b_p_inde != NUL ? get_expr_indent() :
# endif
				 get_c_indent();
			}
			else
			    indent = get_indent();
		    }
		    (void)set_indent(indent, SIN_CHANGED);
		}

		
		State = MODE_NORMAL;	
		coladvance((colnr_T)MAXCOL);
		while (curwin->w_cursor.col && vim_isspace(gchar_cursor()))
		    dec_cursor();

		
		State = MODE_INSERT;	
		smd_save = p_smd;
		p_smd = FALSE;
		insertchar(NUL, INSCHAR_FORMAT
			+ (do_comments ? INSCHAR_DO_COM : 0)
			+ (do_comments && do_comments_list
						       ? INSCHAR_COM_LIST : 0)
			+ (avoid_fex ? INSCHAR_NO_FEX : 0), second_indent);
		State = old_State;
		p_smd = smd_save;
		second_indent = -1;
		
		need_set_indent = is_end_par;
		if (is_end_par)
		{
		    
		    
		    if (line_count < 0)
			break;
		    first_par_line = TRUE;
		}
		force_format = FALSE;
	    }

	    
	    
	    if (!is_end_par)
	    {
		advance = FALSE;
		curwin->w_cursor.lnum++;
		curwin->w_cursor.col = 0;
		if (line_count < 0 && u_save_cursor() == FAIL)
		    break;
		if (next_leader_len > 0)
		{
		    (void)del_bytes((int)next_leader_len, FALSE, FALSE);
		    mark_col_adjust(curwin->w_cursor.lnum, (colnr_T)0, 0L,
						    (int)-next_leader_len, 0);
		}
		else if (second_indent > 0)  
		{
		    int indent = getwhitecols_curline();

		    if (indent > 0)
		    {
			(void)del_bytes(indent, FALSE, FALSE);
			mark_col_adjust(curwin->w_cursor.lnum,
					     (colnr_T)0, 0L, (int)-indent, 0);
		    }
		}
		curwin->w_cursor.lnum--;
		if (do_join(2, TRUE, FALSE, FALSE, FALSE) == FAIL)
		{
		    beep_flush();
		    break;
		}
		first_par_line = FALSE;
		
		if (ml_get_curline_len() > max_len)
		    force_format = TRUE;
		else
		    force_format = FALSE;
	    }
	}
	line_breakcheck();
    }
}
