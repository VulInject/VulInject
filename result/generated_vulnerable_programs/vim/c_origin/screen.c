



#include "vim.h"


static int	screen_attr = 0;

static void screen_char_2(unsigned off, int row, int col);
static int screenclear2(int doclear);
static void lineclear(unsigned off, int width, int attr);
static void lineinvalid(unsigned off, int width);
static int win_do_lines(win_T *wp, int row, int line_count, int mayclear, int del, int clear_attr);
static void win_rest_invalid(win_T *wp);
static void msg_pos_mode(void);
static void recording_mode(int attr);


static int screen_char_attr = 0;

#if defined(FEAT_CONCEAL) || defined(PROTO)

    int
conceal_cursor_line(win_T *wp)
{
    int		c;

    if (*wp->w_p_cocu == NUL)
	return FALSE;
    if (get_real_state() & MODE_VISUAL)
	c = 'v';
    else if (State & MODE_INSERT)
	c = 'i';
    else if (State & MODE_NORMAL)
	c = 'n';
    else if (State & MODE_CMDLINE)
	c = 'c';
    else
	return FALSE;
    return vim_strchr(wp->w_p_cocu, c) != NULL;
}


    void
conceal_check_cursor_line(int was_concealed)
{
    if (curwin->w_p_cole <= 0 || conceal_cursor_line(curwin) == was_concealed)
	return;

    int wcol = curwin->w_wcol;

    need_cursor_line_redraw = TRUE;
    
    
    curs_columns(TRUE);

    
    
    if (!was_concealed)
	curwin->w_wcol = wcol;
}
#endif


    int
get_wcr_attr(win_T *wp)
{
    int wcr_attr = 0;

    if (*wp->w_p_wcr != NUL)
	wcr_attr = syn_name2attr(wp->w_p_wcr);
#ifdef FEAT_PROP_POPUP
    else if (WIN_IS_POPUP(wp))
    {
	if (wp->w_popup_flags & POPF_INFO)
	    wcr_attr = HL_ATTR(HLF_PSI);    
	else
	    wcr_attr = HL_ATTR(HLF_PNI);    
    }
#endif
    return wcr_attr;
}


    static int
screen_fill_end(
	win_T *wp,
	int	c1,
	int	c2,
	int	off,
	int	width,
	int	row,
	int	endrow,
	int	attr)
{
    int	    nn = off + width;

    if (nn > wp->w_width)
	nn = wp->w_width;
#ifdef FEAT_RIGHTLEFT
    if (wp->w_p_rl)
    {
	screen_fill(W_WINROW(wp) + row, W_WINROW(wp) + endrow,
		W_ENDCOL(wp) - nn, (int)W_ENDCOL(wp) - off,
		c1, c2, attr);
    }
    else
#endif
	screen_fill(W_WINROW(wp) + row, W_WINROW(wp) + endrow,
		wp->w_wincol + off, (int)wp->w_wincol + nn,
		c1, c2, attr);
    return nn;
}


    void
win_draw_end(
    win_T	*wp,
    int		c1,
    int		c2,
    int		draw_margin,
    int		row,
    int		endrow,
    hlf_T	hl)
{
    int		n = 0;
    int		attr = HL_ATTR(hl);
    int		wcr_attr = get_wcr_attr(wp);

    attr = hl_combine_attr(wcr_attr, attr);

    if (draw_margin)
    {
#ifdef FEAT_FOLDING
	int	fdc = compute_foldcolumn(wp, 0);

	if (fdc > 0)
	    
	    n = screen_fill_end(wp, ' ', ' ', n, fdc,
		      row, endrow, hl_combine_attr(wcr_attr, HL_ATTR(HLF_FC)));
#endif
#ifdef FEAT_SIGNS
	if (signcolumn_on(wp))
	    
	    n = screen_fill_end(wp, ' ', ' ', n, 2,
		      row, endrow, hl_combine_attr(wcr_attr, HL_ATTR(HLF_SC)));
#endif
	if ((wp->w_p_nu || wp->w_p_rnu)
				  && vim_strchr(p_cpo, CPO_NUMCOL) == NULL)
	    
	    n = screen_fill_end(wp, ' ', ' ', n, number_width(wp) + 1,
		       row, endrow, hl_combine_attr(wcr_attr, HL_ATTR(HLF_N)));
    }

#ifdef FEAT_RIGHTLEFT
    if (wp->w_p_rl)
    {
	screen_fill(W_WINROW(wp) + row, W_WINROW(wp) + endrow,
		wp->w_wincol, W_ENDCOL(wp) - 1 - n,
		c2, c2, attr);
	screen_fill(W_WINROW(wp) + row, W_WINROW(wp) + endrow,
		W_ENDCOL(wp) - 1 - n, W_ENDCOL(wp) - n,
		c1, c2, attr);
    }
    else
#endif
    {
	screen_fill(W_WINROW(wp) + row, W_WINROW(wp) + endrow,
		wp->w_wincol + n, (int)W_ENDCOL(wp),
		c1, c2, attr);
    }

    set_empty_rows(wp, row);
}

#if defined(FEAT_FOLDING) || defined(PROTO)

    int
compute_foldcolumn(win_T *wp, int col)
{
    int fdc = wp->w_p_fdc;
    int wmw = wp == curwin && p_wmw == 0 ? 1 : p_wmw;
    int wwidth = wp->w_width;

    if (fdc > wwidth - (col + wmw))
	fdc = wwidth - (col + wmw);
    return fdc;
}


    size_t
fill_foldcolumn(
    char_u	*p,
    win_T	*wp,
    int		closed,		
    linenr_T	lnum)		
{
    int		i = 0;
    int		level;
    int		first_level;
    int		empty;
    int		fdc = compute_foldcolumn(wp, 0);
    size_t	byte_counter = 0;
    int		symbol = 0;
    int		len = 0;

    
    vim_memset(p, ' ', MAX_MCO * fdc + 1);

    level = win_foldinfo.fi_level;
    empty = (fdc == 1) ? 0 : 1;

    
    
    first_level = level - fdc - closed + 1 + empty;
    if (first_level < 1)
	first_level = 1;

    for (i = 0; i < MIN(fdc, level); i++)
    {
	if (win_foldinfo.fi_lnum == lnum
		&& first_level + i >= win_foldinfo.fi_low_level)
	    symbol = wp->w_fill_chars.foldopen;
	else if (first_level == 1)
	    symbol = wp->w_fill_chars.foldsep;
	else if (first_level + i <= 9)
	    symbol = '0' + first_level + i;
	else
	    symbol = '>';

	len = utf_char2bytes(symbol, &p[byte_counter]);
	byte_counter += len;
	if (first_level + i >= level)
	{
	    i++;
	    break;
	}
    }

    if (closed)
    {
	if (symbol != 0)
	{
	    
	    byte_counter -= len;
	    if (len > 1)
		
		vim_memset(p + byte_counter, ' ', len);
	}
	symbol = wp->w_fill_chars.foldclosed;
	len = utf_char2bytes(symbol, &p[byte_counter]);
	byte_counter += len;
    }

    return MAX(byte_counter + (fdc - i), (size_t)fdc);
}
#endif 


    static int
comp_char_differs(int off_from, int off_to)
{
    int	    i;

    for (i = 0; i < Screen_mco; ++i)
    {
	if (ScreenLinesC[i][off_from] != ScreenLinesC[i][off_to])
	    return TRUE;
	if (ScreenLinesC[i][off_from] == 0)
	    break;
    }
    return FALSE;
}


    static int
char_needs_redraw(int off_from, int off_to, int cols)
{
    if (cols > 0
	    && ((ScreenLines[off_from] != ScreenLines[off_to]
		    || ScreenAttrs[off_from] != ScreenAttrs[off_to])
		|| (enc_dbcs != 0
		    && MB_BYTE2LEN(ScreenLines[off_from]) > 1
		    && (enc_dbcs == DBCS_JPNU && ScreenLines[off_from] == 0x8e
			? ScreenLines2[off_from] != ScreenLines2[off_to]
			: (cols > 1 && ScreenLines[off_from + 1]
						 != ScreenLines[off_to + 1])))
		|| (enc_utf8
		    && (ScreenLinesUC[off_from] != ScreenLinesUC[off_to]
			|| (ScreenLinesUC[off_from] != 0
			    && comp_char_differs(off_from, off_to))
			|| ((*mb_off2cells)(off_from, off_from + cols) > 1
			    && ScreenLines[off_from + 1]
						!= ScreenLines[off_to + 1])))))
	return TRUE;
    return FALSE;
}

#if defined(FEAT_TERMINAL) || defined(PROTO)

    int
screen_get_current_line_off(void)
{
    return (int)(current_ScreenLine - ScreenLines);
}
#endif

#ifdef FEAT_PROP_POPUP

    static int
blocked_by_popup(int row, int col)
{
    int off;

    if (!popup_visible)
	return FALSE;
    off = row * screen_Columns + col;
    return popup_mask[off] > screen_zindex || popup_transparent[off];
}
#endif


    void
reset_screen_attr(void)
{
#ifdef FEAT_GUI
    if (gui.in_use)
	
	
	screen_attr = HL_ALL + 1;
    else
#endif
	
	screen_attr = HL_BOLD | HL_UNDERLINE | HL_INVERSE | HL_STRIKETHROUGH;
}


    static int
skip_for_popup(int row, int col)
{
    
    if (pum_under_menu(row, col, TRUE)
#ifdef FEAT_PROP_POPUP
	    && screen_zindex <= POPUPMENU_ZINDEX
#endif
	    )
	return TRUE;
#ifdef FEAT_PROP_POPUP
    if (blocked_by_popup(row, col))
	return TRUE;
#endif
    return FALSE;
}


    void
screen_line(
	win_T	*wp,
	int	row,
	int	coloff,
	int	endcol,
	int	clear_width,
	colnr_T	last_vcol,
	int	flags UNUSED)
{
    unsigned	    off_from;
    unsigned	    off_to;
    unsigned	    max_off_from;
    unsigned	    max_off_to;
    int		    col = 0;
    int		    hl;
    int		    force = FALSE;	
    int		    redraw_this		
#ifdef FEAT_GUI
				= TRUE	
#endif
				;
    int		    redraw_next;	
#ifdef FEAT_GUI_MSWIN
    int		    changed_this;	
    int		    changed_next;	
#endif
    int		    clear_next = FALSE;
    int		    char_cells;		
					

    
    if (row >= Rows)
	row = Rows - 1;
    if (endcol > Columns)
	endcol = Columns;

# ifdef FEAT_CLIPBOARD
    clip_may_clear_selection(row, row);
# endif

    off_from = (unsigned)(current_ScreenLine - ScreenLines);
    off_to = LineOffset[row] + coloff;
    max_off_from = off_from + screen_Columns;
    max_off_to = LineOffset[row] + screen_Columns;

#ifdef FEAT_RIGHTLEFT
    if (flags & SLF_RIGHTLEFT)
    {
	
	if (clear_width > 0)
	{
	    int clear_start = col;

	    while (col <= endcol && ScreenLines[off_to] == ' '
		    && ScreenAttrs[off_to] == 0
				  && (!enc_utf8 || ScreenLinesUC[off_to] == 0))
	    {
		++off_to;
		++col;
	    }
	    if (col <= endcol)
		screen_fill(row, row + 1, col + coloff,
					    endcol + coloff + 1, ' ', ' ', 0);

	    for (int i = endcol; i >= clear_start; i--)
		ScreenCols[off_to + (i - col)] =
		    (flags & SLF_INC_VCOL) ? ++last_vcol : last_vcol;
	}
	col = endcol + 1;
	off_to = LineOffset[row] + col + coloff;
	off_from += col;
	endcol = (clear_width > 0 ? clear_width : -clear_width);
    }
#endif 

#ifdef FEAT_PROP_POPUP
    
    
    
    if (coloff > 0 && enc_utf8
		   && ScreenLines[off_to] == 0
		   && ScreenLinesUC[off_to - 1] != 0
		   && (*mb_char2cells)(ScreenLinesUC[off_to - 1]) > 1)
    {
	ScreenLines[off_to - 1] = ' ';
	ScreenLinesUC[off_to - 1] = 0;
	screen_char(off_to - 1, row, col + coloff - 1);
    }
#endif

    redraw_next = char_needs_redraw(off_from, off_to, endcol - col);
#ifdef FEAT_GUI_MSWIN
    changed_next = redraw_next;
#endif

    while (col < endcol)
    {
	if (has_mbyte && (col + 1 < endcol))
	    char_cells = (*mb_off2cells)(off_from, max_off_from);
	else
	    char_cells = 1;

	redraw_this = redraw_next;
	redraw_next = force || char_needs_redraw(off_from + char_cells,
			      off_to + char_cells, endcol - col - char_cells);

#ifdef FEAT_GUI
# ifdef FEAT_GUI_MSWIN
	changed_this = changed_next;
	changed_next = redraw_next;
# endif
	
	
	
	
	
	
	if (redraw_next && gui.in_use)
	{
# ifndef FEAT_GUI_MSWIN
	    hl = ScreenAttrs[off_to + char_cells];
	    if (hl > HL_ALL)
		hl = syn_attr2attr(hl);
	    if (hl & HL_BOLD)
# endif
		redraw_this = TRUE;
	}
#endif
	
	if (redraw_this && skip_for_popup(row, col + coloff))
	    redraw_this = FALSE;

	if (redraw_this)
	{
	    
	    if (       p_wiv
		    && !force
#ifdef FEAT_GUI
		    && !gui.in_use
#endif
		    && ScreenAttrs[off_to] != 0
		    && ScreenAttrs[off_from] != ScreenAttrs[off_to])
	    {
		
		windgoto(row, col + coloff);
		out_str(T_CE);		
		screen_start();		
		force = TRUE;		
		redraw_next = TRUE;	

		
		if (col + coloff > 0 && ScreenAttrs[off_to - 1] != 0)
		{
		    screen_attr = ScreenAttrs[off_to - 1];
		    term_windgoto(row, col + coloff);
		    screen_stop_highlight();
		}
		else
		    screen_attr = 0;	    
	    }
	    if (enc_dbcs != 0)
	    {
		
		
		
		
		if (char_cells == 1
			&& col + 1 < endcol
			&& (*mb_off2cells)(off_to, max_off_to) > 1)
		{
		    
		    
		    ScreenLines[off_to + 1] = 0;
		    redraw_next = TRUE;
		}
		else if (char_cells == 2
			&& col + 2 < endcol
			&& (*mb_off2cells)(off_to, max_off_to) == 1
			&& (*mb_off2cells)(off_to + 1, max_off_to) > 1)
		{
		    
		    
		    
		    ScreenLines[off_to + 2] = 0;
		    redraw_next = TRUE;
		}

		if (enc_dbcs == DBCS_JPNU)
		    ScreenLines2[off_to] = ScreenLines2[off_from];
	    }
	    
	    
	    
	    
	    
	    if (has_mbyte && col + char_cells == endcol
		    && ((char_cells == 1
			    && (*mb_off2cells)(off_to, max_off_to) > 1)
			|| (char_cells == 2
			    && (*mb_off2cells)(off_to, max_off_to) == 1
			    && (*mb_off2cells)(off_to + 1, max_off_to) > 1)))
		clear_next = TRUE;

	    ScreenLines[off_to] = ScreenLines[off_from];
	    if (enc_utf8)
	    {
		ScreenLinesUC[off_to] = ScreenLinesUC[off_from];
		if (ScreenLinesUC[off_from] != 0)
		{
		    int	    i;

		    for (i = 0; i < Screen_mco; ++i)
			ScreenLinesC[i][off_to] = ScreenLinesC[i][off_from];
		}
	    }
	    if (char_cells == 2)
		ScreenLines[off_to + 1] = ScreenLines[off_from + 1];

#if defined(FEAT_GUI) || defined(UNIX)
	    
	    
	    
	    
	    if (
# ifdef FEAT_GUI
		    gui.in_use
# endif
# if defined(FEAT_GUI) && defined(UNIX)
		    ||
# endif
# ifdef UNIX
		    term_is_xterm
# endif
		    )
	    {
		hl = ScreenAttrs[off_to];
		if (hl > HL_ALL)
		    hl = syn_attr2attr(hl);
		if (hl & HL_BOLD)
		    redraw_next = TRUE;
	    }
#endif
#ifdef FEAT_GUI_MSWIN
	    
	    
	    if (gui.in_use && changed_this)
		redraw_next = TRUE;
#endif
	    ScreenAttrs[off_to] = ScreenAttrs[off_from];

	    
	    
	    if (char_cells == 2)
		ScreenAttrs[off_to + 1] = ScreenAttrs[off_from];

	    if (enc_dbcs != 0 && char_cells == 2)
		screen_char_2(off_to, row, col + coloff);
	    else
		screen_char(off_to, row, col + coloff);
	}
	else if (  p_wiv
#ifdef FEAT_GUI
		&& !gui.in_use
#endif
		&& col + coloff > 0)
	{
	    if (ScreenAttrs[off_to] == ScreenAttrs[off_to - 1])
	    {
		
		screen_attr = 0;
	    }
	    else if (screen_attr != 0)
		screen_stop_highlight();
	}

	ScreenCols[off_to] = ScreenCols[off_from];
	if (char_cells == 2)
	    ScreenCols[off_to + 1] = ScreenCols[off_from + 1];

	off_to += char_cells;
	off_from += char_cells;
	col += char_cells;
    }

    if (clear_next && !skip_for_popup(row, col + coloff))
    {
	
	
	ScreenLines[off_to] = ' ';
	if (enc_utf8)
	    ScreenLinesUC[off_to] = 0;
	screen_char(off_to, row, col + coloff);
    }

    if (clear_width > 0
#ifdef FEAT_RIGHTLEFT
		    && !(flags & SLF_RIGHTLEFT)
#endif
				   )
    {
#ifdef FEAT_GUI
	int startCol = col;
#endif

	
	while (col < clear_width && ScreenLines[off_to] == ' '
						  && ScreenAttrs[off_to] == 0
				  && (!enc_utf8 || ScreenLinesUC[off_to] == 0))
	{
	    ScreenCols[off_to] =
			      (flags & SLF_INC_VCOL) ? ++last_vcol : last_vcol;
	    ++off_to;
	    ++col;
	}
	if (col < clear_width)
	{
#ifdef FEAT_GUI
	    
	    if (gui.in_use && (col > startCol || !redraw_this))
	    {
		hl = ScreenAttrs[off_to];
		if (hl > HL_ALL || (hl & HL_BOLD))
		{
		    int prev_cells = 1;

		    if (enc_utf8)
			
			
			prev_cells = ScreenLines[off_to - 1] == 0 ? 2 : 1;
		    else if (enc_dbcs != 0)
		    {
			
			
			unsigned off = LineOffset[row];
			unsigned max_off = LineOffset[row] + screen_Columns;

			while (off < off_to)
			{
			    prev_cells = (*mb_off2cells)(off, max_off);
			    off += prev_cells;
			}
		    }

		    if (!skip_for_popup(row, col + coloff - prev_cells))
		    {
			if (enc_dbcs != 0 && prev_cells > 1)
			    screen_char_2(off_to - prev_cells, row,
						   col + coloff - prev_cells);
			else
			    screen_char(off_to - prev_cells, row,
						   col + coloff - prev_cells);
		    }
		}
	    }
#endif
	    screen_fill(row, row + 1, col + coloff, clear_width + coloff,
								 ' ', ' ', 0);
	    while (col < clear_width)
	    {
		ScreenCols[off_to++]
			    = (flags & SLF_INC_VCOL) ? ++last_vcol : last_vcol;
		++col;
	    }
	}
    }

    if (clear_width > 0
#ifdef FEAT_PROP_POPUP
	    && !(flags & SLF_POPUP)  
#endif
	    )
    {
	
	
	if (coloff + col < Columns)
	{
	    if (!skip_for_popup(row, col + coloff))
	    {
		int c;

		c = fillchar_vsep(&hl, wp);
		if (ScreenLines[off_to] != (schar_T)c
			|| (enc_utf8 && (int)ScreenLinesUC[off_to]
							!= (c >= 0x80 ? c : 0))
			|| ScreenAttrs[off_to] != hl)
		{
		    ScreenLines[off_to] = c;
		    ScreenAttrs[off_to] = hl;
		    if (enc_utf8)
		    {
			if (c >= 0x80)
			{
			    ScreenLinesUC[off_to] = c;
			    ScreenLinesC[0][off_to] = 0;
			}
			else
			    ScreenLinesUC[off_to] = 0;
		    }
		    screen_char(off_to, row, col + coloff);
		}
	    }
	}
	else
	    LineWraps[row] = FALSE;
    }
}

#if defined(FEAT_RIGHTLEFT) || defined(PROTO)

    void
rl_mirror(char_u *str)
{
    char_u	*p1, *p2;
    int		t;

    for (p1 = str, p2 = str + STRLEN(str) - 1; p1 < p2; ++p1, --p2)
    {
	t = *p1;
	*p1 = *p2;
	*p2 = t;
    }
}
#endif


    void
draw_vsep_win(win_T *wp, int row)
{
    int		hl;
    int		c;

    if (!wp->w_vsep_width)
	return;

    
    c = fillchar_vsep(&hl, wp);
    screen_fill(W_WINROW(wp) + row, W_WINROW(wp) + wp->w_height,
	    W_ENDCOL(wp), W_ENDCOL(wp) + 1,
	    c, ' ', hl);
}


    int
stl_connected(win_T *wp)
{
    frame_T	*fr;

    fr = wp->w_frame;
    while (fr->fr_parent != NULL)
    {
	if (fr->fr_parent->fr_layout == FR_COL)
	{
	    if (fr->fr_next != NULL)
		break;
	}
	else
	{
	    if (fr->fr_next != NULL)
		return TRUE;
	}
	fr = fr->fr_parent;
    }
    return FALSE;
}



    int
get_keymap_str(
    win_T	*wp,
    char_u	*fmt,	    
    char_u	*buf,	    
    int		len)	    
{
    char_u	*p;

    if (wp->w_buffer->b_p_iminsert != B_IMODE_LMAP)
	return FALSE;

#ifdef FEAT_EVAL
    buf_T	*old_curbuf = curbuf;
    win_T	*old_curwin = curwin;
    char_u	*s;

    curbuf = wp->w_buffer;
    curwin = wp;
    STRCPY(buf, "b:keymap_name");	
    ++emsg_skip;
    s = p = eval_to_string(buf, FALSE, FALSE);
    --emsg_skip;
    curbuf = old_curbuf;
    curwin = old_curwin;
    if (p == NULL || *p == NUL)
#endif
    {
#ifdef FEAT_KEYMAP
	if (wp->w_buffer->b_kmap_state & KEYMAP_LOADED)
	    p = wp->w_buffer->b_p_keymap;
	else
#endif
	    p = (char_u *)"lang";
    }
    if (vim_snprintf((char *)buf, len, (char *)fmt, p) > len - 1)
	buf[0] = NUL;
#ifdef FEAT_EVAL
    vim_free(s);
#endif
    return buf[0] != NUL;
}

#if defined(FEAT_STL_OPT) || defined(PROTO)

    void
win_redr_custom(
    win_T	*wp,
    int		draw_ruler)	
{
    static int	entered = FALSE;
    int		attr;
    int		curattr;
    int		row;
    int		col = 0;
    int		maxwidth;
    int		width;
    int		n;
    int		len;
    int		fillchar;
    char_u	buf[MAXPATHL];
    char_u	*stl;
    char_u	*p;
    char_u	*opt_name;
    int		opt_scope = 0;
    stl_hlrec_T *hltab;
    stl_hlrec_T *tabtab;
    win_T	*ewp;
    int		p_crb_save;

    
    
    
    if (entered)
	return;
    entered = TRUE;

    
    if (wp == NULL)
    {
	
	stl = p_tal;
	row = 0;
	fillchar = ' ';
	attr = HL_ATTR(HLF_TPF);
	maxwidth = Columns;
	opt_name = (char_u *)"tabline";
    }
    else
    {
	row = statusline_row(wp);
	fillchar = fillchar_status(&attr, wp);
	int in_status_line = wp->w_status_height != 0;
	maxwidth = in_status_line ? wp->w_width : Columns;

	if (draw_ruler)
	{
	    stl = p_ruf;
	    opt_name = (char_u *)"rulerformat";
	    
	    if (*stl == '%')
	    {
		if (*++stl == '-')
		    stl++;
		if (atoi((char *)stl))
		    while (VIM_ISDIGIT(*stl))
			stl++;
		if (*stl++ != '(')
		    stl = p_ruf;
	    }
	    col = ru_col - (Columns - maxwidth);
	    if (col < (maxwidth + 1) / 2)
		col = (maxwidth + 1) / 2;
	    maxwidth -= col;
	    if (!in_status_line)
	    {
		row = Rows - 1;
		--maxwidth;	
		fillchar = ' ';
		attr = 0;
	    }
	}
	else
	{
	    opt_name = (char_u *)"statusline";
	    if (*wp->w_p_stl != NUL)
	    {
		stl = wp->w_p_stl;
		opt_scope = OPT_LOCAL;
	    }
	    else
		stl = p_stl;
	}

	if (in_status_line)
	    col += wp->w_wincol;
    }

    if (maxwidth <= 0)
	goto theend;

    
    
    ewp = wp == NULL ? curwin : wp;
    p_crb_save = ewp->w_p_crb;
    ewp->w_p_crb = FALSE;

    
    
    stl = vim_strsave(stl);
    width = build_stl_str_hl(ewp, buf, sizeof(buf),
				stl, opt_name, opt_scope,
				fillchar, maxwidth, &hltab, &tabtab);
    vim_free(stl);
    ewp->w_p_crb = p_crb_save;

    
    p = transstr(buf);
    if (p != NULL)
    {
	vim_strncpy(buf, p, sizeof(buf) - 1);
	vim_free(p);
    }

    
    len = (int)STRLEN(buf);
    while (width < maxwidth && len < (int)sizeof(buf) - 1)
    {
	len += (*mb_char2bytes)(fillchar, buf + len);
	++width;
    }
    buf[len] = NUL;

    
    curattr = attr;
    p = buf;
    for (n = 0; hltab[n].start != NULL; n++)
    {
	len = (int)(hltab[n].start - p);
	screen_puts_len(p, len, row, col, curattr);
	col += vim_strnsize(p, len);
	p = hltab[n].start;

	if (hltab[n].userhl == 0)
	    curattr = attr;
	else if (hltab[n].userhl < 0)
	    curattr = syn_id2attr(-hltab[n].userhl);
#ifdef FEAT_TERMINAL
	else if (wp != NULL && wp != curwin && bt_terminal(wp->w_buffer)
						   && wp->w_status_height != 0)
	    curattr = highlight_stltermnc[hltab[n].userhl - 1];
	else if (wp != NULL && bt_terminal(wp->w_buffer)
						   && wp->w_status_height != 0)
	    curattr = highlight_stlterm[hltab[n].userhl - 1];
#endif
	else if (wp != NULL && wp != curwin && wp->w_status_height != 0)
	    curattr = highlight_stlnc[hltab[n].userhl - 1];
	else
	    curattr = highlight_user[hltab[n].userhl - 1];
    }
    screen_puts(p, row, col, curattr);

    if (wp == NULL)
    {
	
	col = 0;
	len = 0;
	p = buf;
	fillchar = 0;
	for (n = 0; tabtab[n].start != NULL; n++)
	{
	    len += vim_strnsize(p, (int)(tabtab[n].start - p));
	    while (col < len)
		TabPageIdxs[col++] = fillchar;
	    p = tabtab[n].start;
	    fillchar = tabtab[n].userhl;
	}
	while (col < Columns)
	    TabPageIdxs[col++] = fillchar;
    }

theend:
    entered = FALSE;
}

#endif 


    void
screen_putchar(int c, int row, int col, int attr)
{
    char_u	buf[MB_MAXBYTES + 1];

    if (has_mbyte)
	buf[(*mb_char2bytes)(c, buf)] = NUL;
    else
    {
	buf[0] = c;
	buf[1] = NUL;
    }
    screen_puts(buf, row, col, attr);
}


    void
screen_getbytes(int row, int col, char_u *bytes, int *attrp)
{
    unsigned off;

    
    if (ScreenLines == NULL || row >= screen_Rows || col >= screen_Columns)
	return;

    off = LineOffset[row] + col;
    if (attrp != NULL)
	*attrp = ScreenAttrs[off];
    bytes[0] = ScreenLines[off];
    bytes[1] = NUL;

    if (enc_utf8 && ScreenLinesUC[off] != 0)
	bytes[utfc_char2bytes(off, bytes)] = NUL;
    else if (enc_dbcs == DBCS_JPNU && ScreenLines[off] == 0x8e)
    {
	bytes[0] = ScreenLines[off];
	bytes[1] = ScreenLines2[off];
	bytes[2] = NUL;
    }
    else if (enc_dbcs && MB_BYTE2LEN(bytes[0]) > 1)
    {
	bytes[1] = ScreenLines[off + 1];
	bytes[2] = NUL;
    }
}


    static int
screen_comp_differs(int off, int *u8cc)
{
    int	    i;

    for (i = 0; i < Screen_mco; ++i)
    {
	if (ScreenLinesC[i][off] != (u8char_T)u8cc[i])
	    return TRUE;
	if (u8cc[i] == 0)
	    break;
    }
    return FALSE;
}


    void
screen_puts(
    char_u	*text,
    int		row,
    int		col,
    int		attr)
{
    screen_puts_len(text, -1, row, col, attr);
}


    void
screen_puts_len(
    char_u	*text,
    int		textlen,
    int		row,
    int		col,
    int		attr_arg)
{
    int		attr = attr_arg;
    unsigned	off;
    char_u	*ptr = text;
    int		len = textlen;
    int		c;
    unsigned	max_off;
    int		mbyte_blen = 1;
    int		mbyte_cells = 1;
    int		u8c = 0;
    int		u8cc[MAX_MCO];
    int		clear_next_cell = FALSE;
#ifdef FEAT_ARABIC
    int		prev_c = 0;		
    int		pc, nc, nc1;
    int		pcc[MAX_MCO];
#endif
    int		force_redraw_this;
    int		force_redraw_next = FALSE;
    int		need_redraw;

    
    
    if (ScreenLines == NULL
	    || row >= screen_Rows || row < 0
	    || col >= screen_Columns || col < 0)
	return;
    off = LineOffset[row] + col;

    
    
    if (has_mbyte && col > 0 && col < screen_Columns
#ifdef FEAT_GUI
	    && !gui.in_use
#endif
	    && mb_fix_col(col, row) != col)
    {
	if (!skip_for_popup(row, col - 1))
	{
	    ScreenLines[off - 1] = ' ';
	    ScreenAttrs[off - 1] = 0;
	    if (enc_utf8)
	    {
		ScreenLinesUC[off - 1] = 0;
		ScreenLinesC[0][off - 1] = 0;
	    }
	    
	    screen_char(off - 1, row, col - 1);
	}
	
	force_redraw_next = TRUE;
    }

    max_off = LineOffset[row] + screen_Columns;
    while (col < screen_Columns
	    && (len < 0 || (int)(ptr - text) < len)
	    && *ptr != NUL)
    {
	c = *ptr;
	
	if (has_mbyte)
	{
	    mbyte_blen = enc_utf8 && len > 0
			     ? utfc_ptr2len_len(ptr, (int)((text + len) - ptr))
			     : (*mb_ptr2len)(ptr);
	    if (enc_dbcs == DBCS_JPNU && c == 0x8e)
		mbyte_cells = 1;
	    else if (enc_dbcs != 0)
		mbyte_cells = mbyte_blen;
	    else	
	    {
		u8c = len >= 0
		      ? utfc_ptr2char_len(ptr, u8cc, (int)((text + len) - ptr))
		      : utfc_ptr2char(ptr, u8cc);
		mbyte_cells = utf_char2cells(u8c);
#ifdef FEAT_ARABIC
		if (p_arshape && !p_tbidi && ARABIC_CHAR(u8c))
		{
		    
		    if (len >= 0 && (int)(ptr - text) + mbyte_blen >= len)
		    {
			
			nc = NUL;
			nc1 = NUL;
		    }
		    else
		    {
			nc = len >= 0
				 ? utfc_ptr2char_len(ptr + mbyte_blen, pcc,
					(int)((text + len) - ptr - mbyte_blen))
				 : utfc_ptr2char(ptr + mbyte_blen, pcc);
			nc1 = pcc[0];
		    }
		    pc = prev_c;
		    prev_c = u8c;
		    u8c = arabic_shape(u8c, &c, &u8cc[0], nc, nc1, pc);
		}
		else
		    prev_c = u8c;
#endif
		if (col + mbyte_cells > screen_Columns)
		{
		    
		    
		    c = '>';
		    mbyte_cells = 1;
		}
	    }
	}

	force_redraw_this = force_redraw_next;
	force_redraw_next = FALSE;

	need_redraw = ScreenLines[off] != c
		|| (mbyte_cells == 2
		    && ScreenLines[off + 1] != (enc_dbcs ? ptr[1] : 0))
		|| (enc_dbcs == DBCS_JPNU
		    && c == 0x8e
		    && ScreenLines2[off] != ptr[1])
		|| (enc_utf8
		    && (ScreenLinesUC[off] !=
				(u8char_T)(c < 0x80 && u8cc[0] == 0 ? 0 : u8c)
			|| (ScreenLinesUC[off] != 0
					  && screen_comp_differs(off, u8cc))))
		|| ScreenAttrs[off] != attr
		|| exmode_active;

	if ((need_redraw || force_redraw_this) && !skip_for_popup(row, col))
	{
#if defined(FEAT_GUI) || defined(UNIX)
	    
	    
	    
	    
	    if (need_redraw && ScreenLines[off] != ' ' && (
# ifdef FEAT_GUI
		    gui.in_use
# endif
# if defined(FEAT_GUI) && defined(UNIX)
		    ||
# endif
# ifdef UNIX
		    term_is_xterm
# endif
		    ))
	    {
		int	n = ScreenAttrs[off];

		if (n > HL_ALL)
		    n = syn_attr2attr(n);
		if (n & HL_BOLD)
		    force_redraw_next = TRUE;
	    }
#endif
	    
	    
	    
	    
	    
	    if (clear_next_cell)
		clear_next_cell = FALSE;
	    else if (has_mbyte
		    && (len < 0 ? ptr[mbyte_blen] == NUL
					     : ptr + mbyte_blen >= text + len)
		    && ((mbyte_cells == 1 && (*mb_off2cells)(off, max_off) > 1)
			|| (mbyte_cells == 2
			    && (*mb_off2cells)(off, max_off) == 1
			    && (*mb_off2cells)(off + 1, max_off) > 1)))
		clear_next_cell = TRUE;

	    
	    
	    if (enc_dbcs
		    && ((mbyte_cells == 1 && (*mb_off2cells)(off, max_off) > 1)
			|| (mbyte_cells == 2
			    && (*mb_off2cells)(off, max_off) == 1
			    && (*mb_off2cells)(off + 1, max_off) > 1)))
		ScreenLines[off + mbyte_blen] = 0;
	    ScreenLines[off] = c;
	    ScreenAttrs[off] = attr;
	    ScreenCols[off] = -1;
	    if (enc_utf8)
	    {
		if (c < 0x80 && u8cc[0] == 0)
		    ScreenLinesUC[off] = 0;
		else
		{
		    int	    i;

		    ScreenLinesUC[off] = u8c;
		    for (i = 0; i < Screen_mco; ++i)
		    {
			ScreenLinesC[i][off] = u8cc[i];
			if (u8cc[i] == 0)
			    break;
		    }
		}
		if (mbyte_cells == 2)
		{
		    ScreenLines[off + 1] = 0;
		    ScreenAttrs[off + 1] = attr;
		    ScreenCols[off + 1] = -1;
		}
		screen_char(off, row, col);
	    }
	    else if (mbyte_cells == 2)
	    {
		ScreenLines[off + 1] = ptr[1];
		ScreenAttrs[off + 1] = attr;
		ScreenCols[off + 1] = -1;
		screen_char_2(off, row, col);
	    }
	    else if (enc_dbcs == DBCS_JPNU && c == 0x8e)
	    {
		ScreenLines2[off] = ptr[1];
		screen_char(off, row, col);
	    }
	    else
		screen_char(off, row, col);
	}
	if (has_mbyte)
	{
	    off += mbyte_cells;
	    col += mbyte_cells;
	    ptr += mbyte_blen;
	    if (clear_next_cell)
	    {
		
		
		ptr = (char_u *)" ";
		len = -1;
		attr = ScreenAttrs[off];
	    }
	}
	else
	{
	    ++off;
	    ++col;
	    ++ptr;
	}
    }

    
    
    if (force_redraw_next && col < screen_Columns && !skip_for_popup(row, col))
    {
	if (enc_dbcs != 0 && dbcs_off2cells(off, max_off) > 1)
	    screen_char_2(off, row, col);
	else
	    screen_char(off, row, col);
    }
}

#if defined(FEAT_SEARCH_EXTRA) || defined(PROTO)

    void
start_search_hl(void)
{
    if (!p_hls || no_hlsearch)
	return;

    end_search_hl();  
    last_pat_prog(&screen_search_hl.rm);
    screen_search_hl.attr = HL_ATTR(HLF_L);
}


    void
end_search_hl(void)
{
    if (screen_search_hl.rm.regprog == NULL)
	return;

    vim_regfree(screen_search_hl.rm.regprog);
    screen_search_hl.rm.regprog = NULL;
}
#endif

      static void
screen_start_highlight(int attr)
{
    attrentry_T *aep = NULL;

    screen_attr = attr;
    if (!full_screen
#ifdef MSWIN
	    || !termcap_active
#endif
       )
	return;

#ifdef FEAT_GUI
    if (gui.in_use)
    {
	char	buf[20];

	
	sprintf(buf, "\033|%dh", attr);
	OUT_STR(buf);
	return;
    }
#endif

    if (attr > HL_ALL)				
    {
	if (IS_CTERM)
	    aep = syn_cterm_attr2entry(attr);
	else
	    aep = syn_term_attr2entry(attr);
	if (aep == NULL)	    
	    attr = 0;
	else
	    attr = aep->ae_attr;
    }
#if defined(FEAT_VTP) && defined(FEAT_TERMGUICOLORS)
    if (use_vtp())
    {
	guicolor_T  defguifg, defguibg;
	int	    defctermfg, defctermbg;

	
	
	get_default_console_color(&defctermfg, &defctermbg, &defguifg,
		&defguibg);

	if (p_tgc)
	{
	    if (aep == NULL || COLOR_INVALID(aep->ae_u.cterm.fg_rgb))
		term_fg_rgb_color(defguifg);
	    if (aep == NULL || COLOR_INVALID(aep->ae_u.cterm.bg_rgb))
		term_bg_rgb_color(defguibg);
	}
	else if (t_colors >= 256)
	{
	    if (aep == NULL || aep->ae_u.cterm.fg_color == 0)
		term_fg_color(defctermfg);
	    if (aep == NULL || aep->ae_u.cterm.bg_color == 0)
		term_bg_color(defctermbg);
	}
    }
#endif
    if ((attr & HL_BOLD) && *T_MD != NUL)	
	out_str(T_MD);
    else if (aep != NULL && cterm_normal_fg_bold && (
#ifdef FEAT_TERMGUICOLORS
		p_tgc && aep->ae_u.cterm.fg_rgb != CTERMCOLOR
		? aep->ae_u.cterm.fg_rgb != INVALCOLOR
		:
#endif
		t_colors > 1 && aep->ae_u.cterm.fg_color))
	
	
	out_str(T_ME);
    if ((attr & HL_STANDOUT) && *T_SO != NUL)	
	out_str(T_SO);
    if ((attr & HL_UNDERCURL) && *T_UCS != NUL) 
	out_str(T_UCS);
    if ((attr & HL_UNDERDOUBLE) && *T_USS != NUL) 
	out_str(T_USS);
    if ((attr & HL_UNDERDOTTED) && *T_DS != NUL) 
	out_str(T_DS);
    if ((attr & HL_UNDERDASHED) && *T_CDS != NUL) 
	out_str(T_CDS);
    if (((attr & HL_UNDERLINE)	    
		|| ((attr & HL_UNDERCURL) && *T_UCS == NUL)
		|| ((attr & HL_UNDERDOUBLE) && *T_USS == NUL)
		|| ((attr & HL_UNDERDOTTED) && *T_DS == NUL)
		|| ((attr & HL_UNDERDASHED) && *T_CDS == NUL))
	    && *T_US != NUL)
	out_str(T_US);
    if ((attr & HL_ITALIC) && *T_CZH != NUL)	
	out_str(T_CZH);
    if ((attr & HL_INVERSE) && *T_MR != NUL)	
	out_str(T_MR);
    if ((attr & HL_STRIKETHROUGH) && *T_STS != NUL)	
	out_str(T_STS);

    
    if (aep != NULL)
    {
	if (aep->ae_u.cterm.font > 0 && aep->ae_u.cterm.font < 12)
		term_font(aep->ae_u.cterm.font);
#ifdef FEAT_TERMGUICOLORS
	
	
	
	if (p_tgc && aep->ae_u.cterm.fg_rgb != CTERMCOLOR)
	{
	    if (aep->ae_u.cterm.fg_rgb != INVALCOLOR)
		term_fg_rgb_color(aep->ae_u.cterm.fg_rgb);
	}
	else
#endif
	    if (t_colors > 1)
	    {
		if (aep->ae_u.cterm.fg_color)
		    term_fg_color(aep->ae_u.cterm.fg_color - 1);
	    }
#ifdef FEAT_TERMGUICOLORS
	if (p_tgc && aep->ae_u.cterm.bg_rgb != CTERMCOLOR)
	{
	    if (aep->ae_u.cterm.bg_rgb != INVALCOLOR)
		term_bg_rgb_color(aep->ae_u.cterm.bg_rgb);
	}
	else
#endif
	    if (t_colors > 1)
	    {
		if (aep->ae_u.cterm.bg_color)
		    term_bg_color(aep->ae_u.cterm.bg_color - 1);
	    }
#ifdef FEAT_TERMGUICOLORS
	if (p_tgc && aep->ae_u.cterm.ul_rgb != CTERMCOLOR)
	{
	    if (aep->ae_u.cterm.ul_rgb != INVALCOLOR)
		term_ul_rgb_color(aep->ae_u.cterm.ul_rgb);
	}
	else
#endif
	    if (t_colors > 1)
	    {
		if (aep->ae_u.cterm.ul_color)
		    term_ul_color(aep->ae_u.cterm.ul_color - 1);
	    }

	if (!IS_CTERM)
	{
	    if (aep->ae_u.term.start != NULL)
		out_str(aep->ae_u.term.start);
	}
    }
}

      void
screen_stop_highlight(void)
{
    int	    do_ME = FALSE;	    
#if defined(FEAT_VTP) && defined(FEAT_TERMGUICOLORS)
    int	    do_ME_fg = FALSE, do_ME_bg = FALSE;
#endif

    if (screen_attr != 0
#ifdef MSWIN
			&& termcap_active
#endif
					   )
    {
#ifdef FEAT_GUI
	if (gui.in_use)
	{
	    char	buf[20];

	    
	    sprintf(buf, "\033|%dH", screen_attr);
	    OUT_STR(buf);
	}
	else
#endif
	{
	    int is_under;

	    if (screen_attr > HL_ALL)			
	    {
		attrentry_T *aep;

		if (IS_CTERM)
		{
		    
		    aep = syn_cterm_attr2entry(screen_attr);
		    if (aep != NULL && ((
#ifdef FEAT_TERMGUICOLORS
			    p_tgc && aep->ae_u.cterm.fg_rgb != CTERMCOLOR
				? aep->ae_u.cterm.fg_rgb != INVALCOLOR
# ifdef FEAT_VTP
				    ? !(do_ME_fg = TRUE) : (do_ME_fg = FALSE)
# endif
				:
#endif
				aep->ae_u.cterm.fg_color) || (
#ifdef FEAT_TERMGUICOLORS
			    p_tgc && aep->ae_u.cterm.bg_rgb != CTERMCOLOR
				? aep->ae_u.cterm.bg_rgb != INVALCOLOR
# ifdef FEAT_VTP
				    ? !(do_ME_bg = TRUE) : (do_ME_bg = FALSE)
# endif
				:
#endif
				aep->ae_u.cterm.bg_color)))
			do_ME = TRUE;
#if defined(FEAT_VTP) && defined(FEAT_TERMGUICOLORS)
		    if (use_vtp())
		    {
			if (do_ME_fg && do_ME_bg)
			    do_ME = TRUE;

			
			
			if (!do_ME && do_ME_fg)
			    out_str((char_u *)"\033|39m"); 
			if (!do_ME && do_ME_bg)
			    out_str((char_u *)"\033|49m"); 
		    }
		    else
		    {
			
			if (!do_ME)
			    do_ME = do_ME_fg | do_ME_bg;
		    }
#endif
		}
		else
		{
		    aep = syn_term_attr2entry(screen_attr);
		    if (aep != NULL && aep->ae_u.term.stop != NULL)
		    {
			if (STRCMP(aep->ae_u.term.stop, T_ME) == 0)
			    do_ME = TRUE;
			else
			    out_str(aep->ae_u.term.stop);
		    }
		}
		if (aep == NULL)	    
		    screen_attr = 0;
		else
		    screen_attr = aep->ae_attr;
	    }

	    
	    if (screen_attr & HL_STANDOUT)
	    {
		if (STRCMP(T_SE, T_ME) == 0)
		    do_ME = TRUE;
		else
		    out_str(T_SE);
	    }
	    is_under = (screen_attr & (HL_UNDERCURL
			  | HL_UNDERDOUBLE | HL_UNDERDOTTED | HL_UNDERDASHED));
	    if (is_under && *T_UCE != NUL)
	    {
		if (STRCMP(T_UCE, T_ME) == 0)
		    do_ME = TRUE;
		else
		    out_str(T_UCE);
	    }
	    if ((screen_attr & HL_UNDERLINE) || (is_under && *T_UCE == NUL))
	    {
		if (STRCMP(T_UE, T_ME) == 0)
		    do_ME = TRUE;
		else
		    out_str(T_UE);
	    }
	    if (screen_attr & HL_ITALIC)
	    {
		if (STRCMP(T_CZR, T_ME) == 0)
		    do_ME = TRUE;
		else
		    out_str(T_CZR);
	    }
	    if (screen_attr & HL_STRIKETHROUGH)
	    {
		if (STRCMP(T_STE, T_ME) == 0)
		    do_ME = TRUE;
		else
		    out_str(T_STE);
	    }
	    if (do_ME || (screen_attr & (HL_BOLD | HL_INVERSE)))
		out_str(T_ME);

#ifdef FEAT_TERMGUICOLORS
	    if (p_tgc)
	    {
		if (cterm_normal_fg_gui_color != INVALCOLOR)
		    term_fg_rgb_color(cterm_normal_fg_gui_color);
		if (cterm_normal_bg_gui_color != INVALCOLOR)
		    term_bg_rgb_color(cterm_normal_bg_gui_color);
		if (cterm_normal_ul_gui_color != INVALCOLOR)
		    term_ul_rgb_color(cterm_normal_ul_gui_color);
	    }
	    else
#endif
	    {
		if (t_colors > 1)
		{
		    
		    if (cterm_normal_fg_color != 0)
			term_fg_color(cterm_normal_fg_color - 1);
		    if (cterm_normal_bg_color != 0)
			term_bg_color(cterm_normal_bg_color - 1);
		    if (cterm_normal_ul_color != 0)
			term_ul_color(cterm_normal_ul_color - 1);
		    if (cterm_normal_fg_bold)
			out_str(T_MD);
		}
	    }
	}
    }
    screen_attr = 0;
}


    void
reset_cterm_colors(void)
{
    if (!IS_CTERM)
	return;

    
#ifdef FEAT_TERMGUICOLORS
    if (p_tgc ? (cterm_normal_fg_gui_color != INVALCOLOR
		|| cterm_normal_bg_gui_color != INVALCOLOR)
	    : (cterm_normal_fg_color > 0 || cterm_normal_bg_color > 0))
#else
	if (cterm_normal_fg_color > 0 || cterm_normal_bg_color > 0)
#endif
	{
	    out_str(T_OP);
	    screen_attr = -1;
	}
    if (cterm_normal_fg_bold)
    {
	out_str(T_ME);
	screen_attr = -1;
    }
}


    void
screen_char(unsigned off, int row, int col)
{
    int		attr;

    
    
    if (row >= screen_Rows || col >= screen_Columns)
	return;

    
    
    
    if (*T_XN == NUL
	    && row == screen_Rows - 1 && col == screen_Columns - 1
#ifdef FEAT_RIGHTLEFT
	    
	    && !cmdmsg_rl
#endif
       )
    {
	ScreenAttrs[off] = (sattr_T)-1;
	ScreenCols[off] = -1;
	return;
    }

    
    if (screen_char_attr != 0)
	attr = screen_char_attr;
    else
	attr = ScreenAttrs[off];
    if (screen_attr != attr)
	screen_stop_highlight();

    windgoto(row, col);

    if (screen_attr != attr)
	screen_start_highlight(attr);

    if (enc_utf8 && ScreenLinesUC[off] != 0)
    {
	char_u	    buf[MB_MAXBYTES + 1];

	if (
#ifdef FEAT_GUI
	    !gui.in_use &&
#endif
	    get_cellwidth(ScreenLinesUC[off]) > 1
	    )
	{
	    
	    
	    
	    out_str((char_u *)"  ");
	    term_windgoto(row, col);
	    screen_cur_col = 9999;
	}
	else if (utf_ambiguous_width(ScreenLinesUC[off]))
	{
	    if (*p_ambw == 'd'
#ifdef FEAT_GUI
		    && !gui.in_use
#endif
		    )
	    {
		
		
		out_str((char_u *)"  ");
		term_windgoto(row, col);
	    }
	    
	    
	    screen_cur_col = 9999;
	}
	else if (utf_char2cells(ScreenLinesUC[off]) > 1)
	    ++screen_cur_col;

	
	buf[utfc_char2bytes(off, buf)] = NUL;
	out_str(buf);
    }
    else
    {
	out_flush_check();
	out_char(ScreenLines[off]);
	
	if (enc_dbcs == DBCS_JPNU && ScreenLines[off] == 0x8e)
	    out_char(ScreenLines2[off]);
    }

    screen_cur_col++;
}


    static void
screen_char_2(unsigned off, int row, int col)
{
    
    if (off + 1 >= (unsigned)(screen_Rows * screen_Columns))
	return;

    
    
    if (row == screen_Rows - 1 && col >= screen_Columns - 2)
    {
	ScreenAttrs[off] = (sattr_T)-1;
	ScreenCols[off] = -1;
	return;
    }

    
    
    screen_char(off, row, col);
    out_char(ScreenLines[off + 1]);
    ++screen_cur_col;
}


    void
screen_draw_rectangle(
    int		row,
    int		col,
    int		height,
    int		width,
    int		invert)
{
    int		r, c;
    int		off;
    int		max_off;

    
    if (ScreenLines == NULL)
	return;

    if (invert)
	screen_char_attr = HL_INVERSE;
    for (r = row; r < row + height; ++r)
    {
	off = LineOffset[r];
	max_off = off + screen_Columns;
	for (c = col; c < col + width; ++c)
	{
	    if (enc_dbcs != 0 && dbcs_off2cells(off + c, max_off) > 1)
	    {
		if (!skip_for_popup(r, c))
		    screen_char_2(off + c, r, c);
		++c;
	    }
	    else
	    {
		if (!skip_for_popup(r, c))
		    screen_char(off + c, r, c);
		if (utf_off2cells(off + c, max_off) > 1)
		    ++c;
	    }
	}
    }
    screen_char_attr = 0;
}


    static void
redraw_block(int row, int end, win_T *wp)
{
    int		col;
    int		width;

# ifdef FEAT_CLIPBOARD
    clip_may_clear_selection(row, end - 1);
# endif

    if (wp == NULL)
    {
	col = 0;
	width = Columns;
    }
    else
    {
	col = wp->w_wincol;
	width = wp->w_width;
    }
    screen_draw_rectangle(row, col, end - row, width, FALSE);
}

    void
space_to_screenline(int off, int attr)
{
    ScreenLines[off] = ' ';
    ScreenAttrs[off] = attr;
    ScreenCols[off] = -1;
    if (enc_utf8)
	ScreenLinesUC[off] = 0;
}


    void
screen_fill(
	int	start_row,
	int	end_row,
	int	start_col,
	int	end_col,
	int	c1,
	int	c2,
	int	attr)
{
    int	    row;
    int	    col;
    int	    off;
    int	    end_off;
    int	    did_delete;
    int	    c;
    int	    norm_term;
#if defined(FEAT_GUI) || defined(UNIX)
    int	    force_next = FALSE;
#endif

    if (end_row > screen_Rows)		
	end_row = screen_Rows;
    if (end_col > screen_Columns)	
	end_col = screen_Columns;
    if (ScreenLines == NULL
	    || start_row >= end_row
	    || start_col >= end_col)	
	return;

    
    norm_term = (
#ifdef FEAT_GUI
	    !gui.in_use &&
#endif
	    !IS_CTERM);
    for (row = start_row; row < end_row; ++row)
    {
	if (has_mbyte
#ifdef FEAT_GUI
		&& !gui.in_use
#endif
	   )
	{
	    
	    
	    
	    
	    if (start_col > 0 && mb_fix_col(start_col, row) != start_col)
		screen_puts_len((char_u *)" ", 1, row, start_col - 1, 0);
	    if (end_col < screen_Columns && mb_fix_col(end_col, row) != end_col)
		screen_puts_len((char_u *)" ", 1, row, end_col, 0);
	}
	
	did_delete = FALSE;
	if (c2 == ' '
		&& end_col == Columns
		&& can_clear(T_CE)
		&& (attr == 0
		    || (norm_term
			&& attr <= HL_ALL
			&& ((attr & ~(HL_BOLD | HL_ITALIC)) == 0))))
	{
	    
	    col = start_col;
	    if (c1 != ' ')			
		++col;

	    off = LineOffset[row] + col;
	    end_off = LineOffset[row] + end_col;

	    
	    if (enc_utf8)
		while (off < end_off && ScreenLines[off] == ' '
			  && ScreenAttrs[off] == 0 && ScreenLinesUC[off] == 0)
		    ++off;
	    else
		while (off < end_off && ScreenLines[off] == ' '
						     && ScreenAttrs[off] == 0)
		    ++off;
	    if (off < end_off)		
	    {
		col = off - LineOffset[row];
		screen_stop_highlight();
		term_windgoto(row, col);
		out_str(T_CE);
		screen_start();		
		col = end_col - col;
		while (col--)		
		{
		    space_to_screenline(off, 0);
		    ++off;
		}
	    }
	    did_delete = TRUE;		
	}

	off = LineOffset[row] + start_col;
	c = c1;
	for (col = start_col; col < end_col; ++col)
	{
	    if ((ScreenLines[off] != c
		    || (enc_utf8 && (int)ScreenLinesUC[off]
						       != (c >= 0x80 ? c : 0))
		    || ScreenAttrs[off] != attr
		    || must_redraw == UPD_CLEAR  
#if defined(FEAT_GUI) || defined(UNIX)
		    || force_next
#endif
		    )
		    
		    && !skip_for_popup(row, col))
	    {
#if defined(FEAT_GUI) || defined(UNIX)
		
		
		
		
		if (
# ifdef FEAT_GUI
			gui.in_use
# endif
# if defined(FEAT_GUI) && defined(UNIX)
			||
# endif
# ifdef UNIX
			term_is_xterm
# endif
		   )
		{
		    if (ScreenLines[off] != ' '
			    && (ScreenAttrs[off] > HL_ALL
				|| ScreenAttrs[off] & HL_BOLD))
			force_next = TRUE;
		    else
			force_next = FALSE;
		}
#endif 
		ScreenLines[off] = c;
		if (enc_utf8)
		{
		    if (c >= 0x80)
		    {
			ScreenLinesUC[off] = c;
			ScreenLinesC[0][off] = 0;
		    }
		    else
			ScreenLinesUC[off] = 0;
		}
		ScreenAttrs[off] = attr;
		if (!did_delete || c != ' ')
		    screen_char(off, row, col);
	    }
	    ScreenCols[off] = -1;
	    ++off;
	    if (col == start_col)
	    {
		if (did_delete)
		    break;
		c = c2;
	    }
	}
	if (end_col == Columns)
	    LineWraps[row] = FALSE;
	if (row == Rows - 1)		
	{
	    redraw_cmdline = TRUE;
	    if (start_col == 0 && end_col == Columns
		    && c1 == ' ' && c2 == ' ' && attr == 0)
		clear_cmdline = FALSE;	
	    if (start_col == 0)
		mode_displayed = FALSE; 
	}
    }
}


    void
check_for_delay(int check_msg_scroll)
{
    if ((emsg_on_display || (check_msg_scroll && msg_scroll))
	    && !did_wait_return
	    && emsg_silent == 0
	    && !in_assert_fails)
    {
	out_flush();
	ui_delay(1006L, TRUE);
	emsg_on_display = FALSE;
	if (check_msg_scroll)
	    msg_scroll = FALSE;
    }
}


    static void
clear_TabPageIdxs(void)
{
    int		scol;

    for (scol = 0; scol < Columns; ++scol)
	TabPageIdxs[scol] = 0;
}


    int
screen_valid(int doclear)
{
    screenalloc(doclear);	   
    return (ScreenLines != NULL);
}


    void
screenalloc(int doclear)
{
    int		    new_row, old_row;
#ifdef FEAT_GUI
    int		    old_Rows;
#endif
    win_T	    *wp;
    int		    outofmem = FALSE;
    int		    len;
    schar_T	    *new_ScreenLines;
    u8char_T	    *new_ScreenLinesUC = NULL;
    u8char_T	    *new_ScreenLinesC[MAX_MCO];
    schar_T	    *new_ScreenLines2 = NULL;
    sattr_T	    *new_ScreenAttrs;
    colnr_T	    *new_ScreenCols;
    unsigned	    *new_LineOffset;
    char_u	    *new_LineWraps;
    short	    *new_TabPageIdxs;
#ifdef FEAT_PROP_POPUP
    short	    *new_popup_mask;
    short	    *new_popup_mask_next;
    char	    *new_popup_transparent;
#endif
    tabpage_T	    *tp;
    static int	    entered = FALSE;		
    static int	    done_outofmem_msg = FALSE;	
    int		    retry_count = 0;
    int		    found_null;

retry:
    
    if ((ScreenLines != NULL
		&& Rows == screen_Rows
		&& Columns == screen_Columns
		&& enc_utf8 == (ScreenLinesUC != NULL)
		&& (enc_dbcs == DBCS_JPNU) == (ScreenLines2 != NULL)
		&& p_mco == Screen_mco)
	    || Rows == 0
	    || Columns == 0
	    || (!full_screen && ScreenLines == NULL))
	return;

    
    if (entered)
	return;
    entered = TRUE;

    
    ++RedrawingDisabled;

    win_new_shellsize();    

#ifdef FEAT_GUI_HAIKU
    vim_lock_screen();  
#endif

    comp_col();		

    
    FOR_ALL_TAB_WINDOWS(tp, wp)
	win_free_lsize(wp);
    for (int i = 0; i < AUCMD_WIN_COUNT; ++i)
	if (aucmd_win[i].auc_win != NULL)
	    win_free_lsize(aucmd_win[i].auc_win);
#ifdef FEAT_PROP_POPUP
    
    FOR_ALL_POPUPWINS(wp)
	win_free_lsize(wp);
    
    FOR_ALL_TABPAGES(tp)
	FOR_ALL_POPUPWINS_IN_TAB(tp, wp)
	    win_free_lsize(wp);
#endif

    new_ScreenLines = LALLOC_MULT(schar_T, (Rows + 1) * Columns);
    vim_memset(new_ScreenLinesC, 0, sizeof(u8char_T *) * MAX_MCO);
    if (enc_utf8)
    {
	new_ScreenLinesUC = LALLOC_MULT(u8char_T, (Rows + 1) * Columns);
	for (int i = 0; i < p_mco; ++i)
	    new_ScreenLinesC[i] = LALLOC_CLEAR_MULT(u8char_T,
							 (Rows + 1) * Columns);
    }
    if (enc_dbcs == DBCS_JPNU)
	new_ScreenLines2 = LALLOC_MULT(schar_T, (Rows + 1) * Columns);
    new_ScreenAttrs = LALLOC_MULT(sattr_T, (Rows + 1) * Columns);
    
    
    new_ScreenCols = LALLOC_CLEAR_MULT(colnr_T, (Rows + 1) * Columns);
    new_LineOffset = LALLOC_MULT(unsigned, Rows);
    new_LineWraps = LALLOC_MULT(char_u, Rows);
    new_TabPageIdxs = LALLOC_MULT(short, Columns);
#ifdef FEAT_PROP_POPUP
    new_popup_mask = LALLOC_MULT(short, Rows * Columns);
    new_popup_mask_next = LALLOC_MULT(short, Rows * Columns);
    new_popup_transparent = LALLOC_MULT(char, Rows * Columns);
#endif

    FOR_ALL_TAB_WINDOWS(tp, wp)
    {
	if (win_alloc_lines(wp) == FAIL)
	{
	    outofmem = TRUE;
	    goto give_up;
	}
    }
    for (int i = 0; i < AUCMD_WIN_COUNT; ++i)
	if (aucmd_win[i].auc_win != NULL
		&& aucmd_win[i].auc_win->w_lines == NULL
		&& win_alloc_lines(aucmd_win[i].auc_win) == FAIL)
	{
	    outofmem = TRUE;
	    break;
	}
#ifdef FEAT_PROP_POPUP
    
    FOR_ALL_POPUPWINS(wp)
	if (win_alloc_lines(wp) == FAIL)
	{
	    outofmem = TRUE;
	    goto give_up;
	}
    
    FOR_ALL_TABPAGES(tp)
	FOR_ALL_POPUPWINS_IN_TAB(tp, wp)
	    if (win_alloc_lines(wp) == FAIL)
	    {
		outofmem = TRUE;
		goto give_up;
	    }
#endif

give_up:
    found_null = FALSE;
    for (int i = 0; i < p_mco; ++i)
	if (new_ScreenLinesC[i] == NULL)
	{
	    found_null = TRUE;
	    break;
	}
    if (new_ScreenLines == NULL
	    || (enc_utf8 && (new_ScreenLinesUC == NULL || found_null))
	    || (enc_dbcs == DBCS_JPNU && new_ScreenLines2 == NULL)
	    || new_ScreenAttrs == NULL
	    || new_ScreenCols == NULL
	    || new_LineOffset == NULL
	    || new_LineWraps == NULL
	    || new_TabPageIdxs == NULL
#ifdef FEAT_PROP_POPUP
	    || new_popup_mask == NULL
	    || new_popup_mask_next == NULL
	    || new_popup_transparent == NULL
#endif
	    || outofmem)
    {
	if (ScreenLines != NULL || !done_outofmem_msg)
	{
	    
	    do_outofmem_msg((long_u)((Rows + 1) * Columns));

	    
	    
	    done_outofmem_msg = TRUE;
	}
	VIM_CLEAR(new_ScreenLines);
	VIM_CLEAR(new_ScreenLinesUC);
	for (int i = 0; i < p_mco; ++i)
	    VIM_CLEAR(new_ScreenLinesC[i]);
	VIM_CLEAR(new_ScreenLines2);
	VIM_CLEAR(new_ScreenAttrs);
	VIM_CLEAR(new_ScreenCols);
	VIM_CLEAR(new_LineOffset);
	VIM_CLEAR(new_LineWraps);
	VIM_CLEAR(new_TabPageIdxs);
#ifdef FEAT_PROP_POPUP
	VIM_CLEAR(new_popup_mask);
	VIM_CLEAR(new_popup_mask_next);
	VIM_CLEAR(new_popup_transparent);
#endif
    }
    else
    {
	done_outofmem_msg = FALSE;

	for (new_row = 0; new_row < Rows; ++new_row)
	{
	    new_LineOffset[new_row] = new_row * Columns;
	    new_LineWraps[new_row] = FALSE;

	    (void)vim_memset(new_ScreenLines + new_row * Columns,
				  ' ', (size_t)Columns * sizeof(schar_T));
	    if (enc_utf8)
	    {
		(void)vim_memset(new_ScreenLinesUC + new_row * Columns,
				   0, (size_t)Columns * sizeof(u8char_T));
		for (int i = 0; i < p_mco; ++i)
		    (void)vim_memset(new_ScreenLinesC[i]
						      + new_row * Columns,
				   0, (size_t)Columns * sizeof(u8char_T));
	    }
	    if (enc_dbcs == DBCS_JPNU)
		(void)vim_memset(new_ScreenLines2 + new_row * Columns,
				   0, (size_t)Columns * sizeof(schar_T));
	    (void)vim_memset(new_ScreenAttrs + new_row * Columns,
				    0, (size_t)Columns * sizeof(sattr_T));
	    (void)vim_memset(new_ScreenCols + new_row * Columns,
				    0, (size_t)Columns * sizeof(colnr_T));

	    
	    if (!doclear)
	    {
		old_row = new_row + (screen_Rows - Rows);
		if (old_row >= 0 && ScreenLines != NULL)
		{
		    if (screen_Columns < Columns)
			len = screen_Columns;
		    else
			len = Columns;
		    
		    
		    if (!(enc_utf8 && ScreenLinesUC == NULL)
						       && p_mco == Screen_mco)
			mch_memmove(new_ScreenLines + new_LineOffset[new_row],
				ScreenLines + LineOffset[old_row],
				(size_t)len * sizeof(schar_T));
		    if (enc_utf8 && ScreenLinesUC != NULL
						       && p_mco == Screen_mco)
		    {
			mch_memmove(new_ScreenLinesUC + new_LineOffset[new_row],
				ScreenLinesUC + LineOffset[old_row],
				(size_t)len * sizeof(u8char_T));
			for (int i = 0; i < p_mco; ++i)
			    mch_memmove(new_ScreenLinesC[i]
						    + new_LineOffset[new_row],
				ScreenLinesC[i] + LineOffset[old_row],
				(size_t)len * sizeof(u8char_T));
		    }
		    if (enc_dbcs == DBCS_JPNU && ScreenLines2 != NULL)
			mch_memmove(new_ScreenLines2 + new_LineOffset[new_row],
				ScreenLines2 + LineOffset[old_row],
				(size_t)len * sizeof(schar_T));
		    mch_memmove(new_ScreenAttrs + new_LineOffset[new_row],
			    ScreenAttrs + LineOffset[old_row],
			    (size_t)len * sizeof(sattr_T));
		    mch_memmove(new_ScreenCols + new_LineOffset[new_row],
			    ScreenAttrs + LineOffset[old_row],
			    (size_t)len * sizeof(colnr_T));
		}
	    }
	}
	
	current_ScreenLine = new_ScreenLines + Rows * Columns;

#ifdef FEAT_PROP_POPUP
	vim_memset(new_popup_mask, 0, Rows * Columns * sizeof(short));
	vim_memset(new_popup_transparent, 0, Rows * Columns * sizeof(char));
#endif
    }

    free_screenlines();

    
    ScreenLines = new_ScreenLines;
    ScreenLinesUC = new_ScreenLinesUC;
    for (int i = 0; i < p_mco; ++i)
	ScreenLinesC[i] = new_ScreenLinesC[i];
    Screen_mco = p_mco;
    ScreenLines2 = new_ScreenLines2;
    ScreenAttrs = new_ScreenAttrs;
    ScreenCols = new_ScreenCols;
    LineOffset = new_LineOffset;
    LineWraps = new_LineWraps;
    TabPageIdxs = new_TabPageIdxs;
#ifdef FEAT_PROP_POPUP
    popup_mask = new_popup_mask;
    popup_mask_next = new_popup_mask_next;
    popup_transparent = new_popup_transparent;
    popup_mask_refresh = TRUE;
#endif

    
    
#ifdef FEAT_GUI
    old_Rows = screen_Rows;
#endif
    screen_Rows = Rows;
    screen_Columns = Columns;

    set_must_redraw(UPD_CLEAR);	
    if (doclear)
	screenclear2(TRUE);
#ifdef FEAT_GUI
    else if (gui.in_use
	    && !gui.starting
	    && ScreenLines != NULL
	    && old_Rows != Rows)
    {
	gui_redraw_block(0, 0, (int)Rows - 1, (int)Columns - 1, 0);

	
	
	if (msg_row >= Rows)		
	    msg_row = Rows - 1;		
	else if (Rows > old_Rows)	
	    msg_row += Rows - old_Rows; 
	if (msg_col >= Columns)		
	    msg_col = Columns - 1;	
    }
#endif
    clear_TabPageIdxs();

#ifdef FEAT_GUI_HAIKU
    vim_unlock_screen();
#endif

    entered = FALSE;
    if (RedrawingDisabled > 0)
	--RedrawingDisabled;

    
    if (starting == 0 && ++retry_count <= 3)
    {
	apply_autocmds(EVENT_VIMRESIZED, NULL, NULL, FALSE, curbuf);
	
	
	goto retry;
    }
}

    void
free_screenlines(void)
{
    int		i;

    VIM_CLEAR(ScreenLinesUC);
    for (i = 0; i < Screen_mco; ++i)
	VIM_CLEAR(ScreenLinesC[i]);
    VIM_CLEAR(ScreenLines2);
    VIM_CLEAR(ScreenLines);
    VIM_CLEAR(ScreenAttrs);
    VIM_CLEAR(ScreenCols);
    VIM_CLEAR(LineOffset);
    VIM_CLEAR(LineWraps);
    VIM_CLEAR(TabPageIdxs);
#ifdef FEAT_PROP_POPUP
    VIM_CLEAR(popup_mask);
    VIM_CLEAR(popup_mask_next);
    VIM_CLEAR(popup_transparent);
#endif
}


    int
screenclear(void)
{
    check_for_delay(FALSE);
    screenalloc(FALSE);		    
    return screenclear2(TRUE);	    
}


    void
redraw_as_cleared(void)
{
    screenclear2(FALSE);
}

    static int
screenclear2(int doclear)
{
    int	    i;
    int	    did_clear = FALSE;

    if (starting == NO_SCREEN || ScreenLines == NULL
#ifdef FEAT_GUI
	    || (gui.in_use && gui.starting)
#endif
	    )
	return FALSE;

#ifdef FEAT_GUI
    if (!gui.in_use)
#endif
	screen_attr = -1;	
    screen_stop_highlight();	

#ifdef FEAT_CLIPBOARD
    
    clip_scroll_selection(9999);
#endif

    
    for (i = 0; i < Rows; ++i)
    {
	lineclear(LineOffset[i], (int)Columns, 0);
	LineWraps[i] = FALSE;
    }

    if (doclear && can_clear(T_CL))
    {
	out_str(T_CL);		
	did_clear = TRUE;
	clear_cmdline = FALSE;
	mode_displayed = FALSE;
    }
    else
    {
	
	for (i = 0; i < Rows; ++i)
	    lineinvalid(LineOffset[i], (int)Columns);
	clear_cmdline = TRUE;
    }

    screen_cleared = TRUE;	

    win_rest_invalid(firstwin);	
    redraw_cmdline = TRUE;
    redraw_tabline = TRUE;
    if (must_redraw == UPD_CLEAR)	
	must_redraw = UPD_NOT_VALID;
    msg_scrolled = 0;		
    compute_cmdrow();
#ifdef FEAT_PROP_POPUP
    popup_redraw_all();		
#endif
    msg_row = cmdline_row;	
    msg_col = 0;
    screen_start();		
    msg_didany = FALSE;
    msg_didout = FALSE;

    return did_clear;
}


    static void
lineclear(unsigned off, int width, int attr)
{
    (void)vim_memset(ScreenLines + off, ' ', (size_t)width * sizeof(schar_T));
    if (enc_utf8)
	(void)vim_memset(ScreenLinesUC + off, 0,
					  (size_t)width * sizeof(u8char_T));
    (void)vim_memset(ScreenAttrs + off, attr, (size_t)width * sizeof(sattr_T));
    (void)vim_memset(ScreenCols + off, -1, (size_t)width * sizeof(colnr_T));
}


    static void
lineinvalid(unsigned off, int width)
{
    (void)vim_memset(ScreenAttrs + off, -1, (size_t)width * sizeof(sattr_T));
    (void)vim_memset(ScreenCols + off, -1, (size_t)width * sizeof(colnr_T));
}


    void
line_was_clobbered(int screen_lnum)
{
    lineinvalid(LineOffset[screen_lnum], (int)Columns);
}


    static void
linecopy(int to, int from, win_T *wp)
{
    unsigned	off_to = LineOffset[to] + wp->w_wincol;
    unsigned	off_from = LineOffset[from] + wp->w_wincol;

    mch_memmove(ScreenLines + off_to, ScreenLines + off_from,
	    wp->w_width * sizeof(schar_T));
    if (enc_utf8)
    {
	int	i;

	mch_memmove(ScreenLinesUC + off_to, ScreenLinesUC + off_from,
		wp->w_width * sizeof(u8char_T));
	for (i = 0; i < p_mco; ++i)
	    mch_memmove(ScreenLinesC[i] + off_to, ScreenLinesC[i] + off_from,
		    wp->w_width * sizeof(u8char_T));
    }
    if (enc_dbcs == DBCS_JPNU)
	mch_memmove(ScreenLines2 + off_to, ScreenLines2 + off_from,
		wp->w_width * sizeof(schar_T));
    mch_memmove(ScreenAttrs + off_to, ScreenAttrs + off_from,
	    wp->w_width * sizeof(sattr_T));
    mch_memmove(ScreenCols + off_to, ScreenCols + off_from,
	    wp->w_width * sizeof(colnr_T));
}


    int
can_clear(char_u *p)
{
    return (*p != NUL && (t_colors <= 1
#ifdef FEAT_GUI
		|| gui.in_use
#endif
#ifdef FEAT_TERMGUICOLORS
		|| (p_tgc && cterm_normal_bg_gui_color == INVALCOLOR)
		|| (!p_tgc && cterm_normal_bg_color == 0)
#else
		|| cterm_normal_bg_color == 0
#endif
		|| *T_UT != NUL)
#ifdef FEAT_PROP_POPUP
	    && !(p == T_CE && popup_visible)
#endif
	    );
}


    void
screen_start(void)
{
    screen_cur_row = screen_cur_col = 9999;
}


    void
windgoto(int row, int col)
{
    sattr_T	    *p;
    int		    i;
    int		    plan;
    int		    cost;
    int		    wouldbe_col;
    int		    noinvcurs;
    char_u	    *bs;
    int		    goto_cost;
    int		    attr;

#define GOTO_COST   7	
#define HIGHL_COST  5	

#define PLAN_LE	    1
#define PLAN_CR	    2
#define PLAN_NL	    3
#define PLAN_WRITE  4
    
    if (ScreenLines == NULL)
	return;
    if (col == screen_cur_col && row == screen_cur_row)
	return;

    
    if (row < 0)	
	row = 0;
    if (row >= screen_Rows)
	row = screen_Rows - 1;
    if (col >= screen_Columns)
	col = screen_Columns - 1;

    
    if (screen_attr && *T_MS == NUL)
	noinvcurs = HIGHL_COST;
    else
	noinvcurs = 0;
    goto_cost = GOTO_COST + noinvcurs;

    
    if (row >= screen_cur_row && screen_cur_col < Columns)
    {
	
	bs = NULL;			    
	attr = screen_attr;
	if (row == screen_cur_row && col < screen_cur_col)
	{
	    
	    if (*T_LE)
		bs = T_LE;		    
	    else
		bs = T_BC;		    
	    if (*bs)
		cost = (screen_cur_col - col) * (int)STRLEN(bs);
	    else
		cost = 999;
	    if (col + 1 < cost)	    
	    {
		plan = PLAN_CR;
		wouldbe_col = 0;
		cost = 1;		    
	    }
	    else
	    {
		plan = PLAN_LE;
		wouldbe_col = col;
	    }
	    if (noinvcurs)		    
	    {
		cost += noinvcurs;
		attr = 0;
	    }
	}

	
	else if (row > screen_cur_row)
	{
	    plan = PLAN_NL;
	    wouldbe_col = 0;
	    cost = (row - screen_cur_row) * 2;  
	    if (noinvcurs)		    
	    {
		cost += noinvcurs;
		attr = 0;
	    }
	}

	
	else
	{
	    plan = PLAN_WRITE;
	    wouldbe_col = screen_cur_col;
	    cost = 0;
	}

	
	i = col - wouldbe_col;
	if (i > 0)
	    cost += i;
	if (cost < goto_cost && i > 0)
	{
	    
	    p = ScreenAttrs + LineOffset[row] + wouldbe_col;
	    while (i && *p++ == attr)
		--i;
	    if (i != 0)
	    {
		
		if (*--p == 0)
		{
		    cost += noinvcurs;
		    while (i && *p++ == 0)
			--i;
		}
		if (i != 0)
		    cost = 999;	
	    }
	    if (enc_utf8)
	    {
		
		for (i = wouldbe_col; i < col; ++i)
		    if (ScreenLinesUC[LineOffset[row] + i] != 0)
		    {
			cost = 999;
			break;
		    }
	    }
	}

	
	if (cost < goto_cost)
	{
	    if (plan == PLAN_LE)
	    {
		if (noinvcurs)
		    screen_stop_highlight();
		while (screen_cur_col > col)
		{
		    out_str(bs);
		    --screen_cur_col;
		}
	    }
	    else if (plan == PLAN_CR)
	    {
		if (noinvcurs)
		    screen_stop_highlight();
		out_char('\r');
		screen_cur_col = 0;
	    }
	    else if (plan == PLAN_NL)
	    {
		if (noinvcurs)
		    screen_stop_highlight();
		while (screen_cur_row < row)
		{
		    out_char('\n');
		    ++screen_cur_row;
		}
		screen_cur_col = 0;
	    }

	    i = col - screen_cur_col;
	    if (i > 0)
	    {
		
		if (T_ND[0] != NUL && T_ND[1] == NUL)
		{
		    while (i-- > 0)
			out_char(*T_ND);
		}
		else
		{
		    int	off;

		    off = LineOffset[row] + screen_cur_col;
		    while (i-- > 0)
		    {
			if (ScreenAttrs[off] != screen_attr)
			    screen_stop_highlight();
			out_flush_check();
			out_char(ScreenLines[off]);
			if (enc_dbcs == DBCS_JPNU
				&& ScreenLines[off] == 0x8e)
			    out_char(ScreenLines2[off]);
			++off;
		    }
		}
	    }
	}
    }
    else
	cost = 999;

    if (cost >= goto_cost)
    {
	if (noinvcurs)
	    screen_stop_highlight();
	if (row == screen_cur_row && (col > screen_cur_col)
		&& *T_CRI != NUL)
	    term_cursor_right(col - screen_cur_col);
	else
	    term_windgoto(row, col);
    }
    screen_cur_row = row;
    screen_cur_col = col;
}


    void
setcursor(void)
{
    setcursor_mayforce(FALSE);
}


    void
setcursor_mayforce(int force)
{
    if (force || redrawing())
    {
	validate_cursor();
	windgoto(W_WINROW(curwin) + curwin->w_wrow,
		curwin->w_wincol + (
#ifdef FEAT_RIGHTLEFT
		
		
		curwin->w_p_rl ? ((int)curwin->w_width - curwin->w_wcol
		    - ((has_mbyte
			   && (*mb_ptr2cells)(ml_get_cursor()) == 2
			   && vim_isprintc(gchar_cursor())) ? 2 : 1)) :
#endif
							    curwin->w_wcol));
    }
}



    int
win_ins_lines(
    win_T	*wp,
    int		row,
    int		line_count,
    int		invalid,
    int		mayclear)
{
    int		did_delete;
    int		nextrow;
    int		lastrow;
    int		retval;

    if (invalid)
	wp->w_lines_valid = 0;

    
    if (wp->w_height < 5)
	return FAIL;

    
    if (pum_visible())
	return FAIL;

    if (line_count > wp->w_height - row)
	line_count = wp->w_height - row;

    retval = win_do_lines(wp, row, line_count, mayclear, FALSE, 0);
    if (retval != MAYBE)
	return retval;

    
    did_delete = FALSE;
    if (wp->w_next != NULL || wp->w_status_height)
    {
	if (screen_del_lines(0, W_WINROW(wp) + wp->w_height - line_count,
				  line_count, (int)Rows, FALSE, 0, NULL) == OK)
	    did_delete = TRUE;
	else if (wp->w_next)
	    return FAIL;
    }
    
    if (!did_delete)
    {
	wp->w_redr_status = TRUE;
	redraw_cmdline = TRUE;
	nextrow = W_WINROW(wp) + wp->w_height + wp->w_status_height;
	lastrow = nextrow + line_count;
	if (lastrow > Rows)
	    lastrow = Rows;
	screen_fill(nextrow - line_count, lastrow - line_count,
		  wp->w_wincol, (int)W_ENDCOL(wp),
		  ' ', ' ', 0);
    }

    if (screen_ins_lines(0, W_WINROW(wp) + row, line_count, (int)Rows, 0, NULL)
								      == FAIL)
    {
	
	if (did_delete)
	{
	    wp->w_redr_status = TRUE;
	    win_rest_invalid(W_NEXT(wp));
	}
	return FAIL;
    }

    return OK;
}


    int
win_del_lines(
    win_T	*wp,
    int		row,
    int		line_count,
    int		invalid,
    int		mayclear,
    int		clear_attr)	    
{
    int		retval;

    if (invalid)
	wp->w_lines_valid = 0;

    if (line_count > wp->w_height - row)
	line_count = wp->w_height - row;

    retval = win_do_lines(wp, row, line_count, mayclear, TRUE, clear_attr);
    if (retval != MAYBE)
	return retval;

    if (screen_del_lines(0, W_WINROW(wp) + row, line_count,
				   (int)Rows, FALSE, clear_attr, NULL) == FAIL)
	return FAIL;

    
    if (wp->w_next || wp->w_status_height || cmdline_row < Rows - 1)
    {
	if (screen_ins_lines(0, W_WINROW(wp) + wp->w_height - line_count,
			      line_count, (int)Rows, clear_attr, NULL) == FAIL)
	{
	    wp->w_redr_status = TRUE;
	    win_rest_invalid(wp->w_next);
	}
    }
    
    else
	redraw_cmdline = TRUE;
    return OK;
}


    static int
win_do_lines(
    win_T	*wp,
    int		row,
    int		line_count,
    int		mayclear,
    int		del,
    int		clear_attr)
{
    int		retval;

    if (!redrawing() || line_count <= 0)
	return FAIL;

    
    
    if (no_win_do_lines_ins && !del)
	return FAIL;

    
    if (mayclear && Rows - line_count < 5 && wp->w_width == Columns)
    {
	if (!no_win_do_lines_ins)
	    screenclear();	    
	return FAIL;
    }

#ifdef FEAT_PROP_POPUP
    
    if (popup_visible)
	return FAIL;
#endif

    
    if (row + line_count >= wp->w_height)
    {
	screen_fill(W_WINROW(wp) + row, W_WINROW(wp) + wp->w_height,
		wp->w_wincol, (int)W_ENDCOL(wp),
		' ', ' ', 0);
	return OK;
    }

    
    if (!no_win_do_lines_ins)
	clear_cmdline = TRUE;

    
    if (scroll_region || wp->w_width != Columns)
    {
	if (scroll_region && (wp->w_width == Columns || *T_CSV != NUL))
	    scroll_region_set(wp, row);
	if (del)
	    retval = screen_del_lines(W_WINROW(wp) + row, 0, line_count,
				    wp->w_height - row, FALSE, clear_attr, wp);
	else
	    retval = screen_ins_lines(W_WINROW(wp) + row, 0, line_count,
					   wp->w_height - row, clear_attr, wp);
	if (scroll_region && (wp->w_width == Columns || *T_CSV != NUL))
	    scroll_region_reset();
	return retval;
    }

    if (wp->w_next != NULL && p_tf) 
	return FAIL;

    return MAYBE;
}


    static void
win_rest_invalid(win_T *wp)
{
    while (wp != NULL)
    {
	redraw_win_later(wp, UPD_NOT_VALID);
	wp->w_redr_status = TRUE;
	wp = wp->w_next;
    }
    redraw_cmdline = TRUE;
}




#define USE_T_CAL   1
#define USE_T_CDL   2
#define USE_T_AL    3
#define USE_T_CE    4
#define USE_T_DL    5
#define USE_T_SR    6
#define USE_NL	    7
#define USE_T_CD    8
#define USE_REDRAW  9


    int
screen_ins_lines(
    int		off,
    int		row,
    int		line_count,
    int		end,
    int		clear_attr,
    win_T	*wp)	    
{
    int		i;
    int		j;
    unsigned	temp;
    int		cursor_row;
    int		cursor_col = 0;
    int		type;
    int		result_empty;
    int		can_ce = can_clear(T_CE);

    
     if (!screen_valid(TRUE)
	     || line_count <= 0 || line_count > p_ttyscroll
	     || end > Rows
#ifdef FEAT_CLIPBOARD
	     || (clip_star.state != SELECT_CLEARED
						 && redrawing_for_callback > 0)
#endif
#ifdef FEAT_PROP_POPUP
	     || popup_visible
#endif
	     )
	return FAIL;

    
    result_empty = (row + line_count >= end);
    if (wp != NULL && wp->w_width != Columns && *T_CSV == NUL)
    {
	
	
	
	
	if (line_count > 3)
	    return FAIL;
	type = USE_REDRAW;
    }
    else if (can_clear(T_CD) && result_empty)
	type = USE_T_CD;
    else if (*T_CAL != NUL && (line_count > 1 || *T_AL == NUL))
	type = USE_T_CAL;
    else if (*T_CDL != NUL && result_empty && (line_count > 1 || !can_ce))
	type = USE_T_CDL;
    else if (*T_AL != NUL)
	type = USE_T_AL;
    else if (can_ce && result_empty)
	type = USE_T_CE;
    else if (*T_DL != NUL && result_empty)
	type = USE_T_DL;
    else if (*T_SR != NUL && row == 0 && (*T_DA == NUL || can_ce))
	type = USE_T_SR;
    else
	return FAIL;

    
    if (type == USE_T_CD || type == USE_T_CDL ||
					 type == USE_T_CE || type == USE_T_DL)
	return screen_del_lines(off, row, line_count, end, FALSE, 0, wp);

    
    if (*T_DB)
	screen_del_lines(off, end - line_count, line_count, end, FALSE, 0, wp);

#ifdef FEAT_CLIPBOARD
    
    
    if (off + row > 0 || (wp != NULL && wp->w_width != Columns))
	clip_clear_selection(&clip_star);
    else
	clip_scroll_selection(-line_count);
#endif

#ifdef FEAT_GUI_HAIKU
    vim_lock_screen();
#endif

#ifdef FEAT_GUI
    
    
    gui_dont_update_cursor(row + off <= gui.cursor_row);
#endif

    if (wp != NULL && wp->w_wincol != 0 && *T_CSV != NUL && *T_CCS == NUL)
	cursor_col = wp->w_wincol;

    if (*T_CCS != NUL)	   
	cursor_row = row;
    else
	cursor_row = row + off;

    
    row += off;
    end += off;
    for (i = 0; i < line_count; ++i)
    {
	if (wp != NULL && wp->w_width != Columns)
	{
	    
	    j = end - 1 - i;
	    while ((j -= line_count) >= row)
		linecopy(j + line_count, j, wp);
	    j += line_count;
	    if (can_clear((char_u *)" "))
		lineclear(LineOffset[j] + wp->w_wincol, wp->w_width,
								   clear_attr);
	    else
		lineinvalid(LineOffset[j] + wp->w_wincol, wp->w_width);
	    LineWraps[j] = FALSE;
	}
	else
	{
	    j = end - 1 - i;
	    temp = LineOffset[j];
	    while ((j -= line_count) >= row)
	    {
		LineOffset[j + line_count] = LineOffset[j];
		LineWraps[j + line_count] = LineWraps[j];
	    }
	    LineOffset[j + line_count] = temp;
	    LineWraps[j + line_count] = FALSE;
	    if (can_clear((char_u *)" "))
		lineclear(temp, (int)Columns, clear_attr);
	    else
		lineinvalid(temp, (int)Columns);
	}
    }

#ifdef FEAT_GUI_HAIKU
    vim_unlock_screen();
#endif

    screen_stop_highlight();
    windgoto(cursor_row, cursor_col);
    if (clear_attr != 0)
	screen_start_highlight(clear_attr);

    
    if (type == USE_REDRAW)
	redraw_block(row, end, wp);
    else if (type == USE_T_CAL)
    {
	term_append_lines(line_count);
	screen_start();		
    }
    else
    {
	for (i = 0; i < line_count; i++)
	{
	    if (type == USE_T_AL)
	    {
		if (i && cursor_row != 0)
		    windgoto(cursor_row, cursor_col);
		out_str(T_AL);
	    }
	    else  
		out_str(T_SR);
	    screen_start();	    
	}
    }

    
    if (type == USE_T_SR && *T_DA)
    {
	for (i = 0; i < line_count; ++i)
	{
	    windgoto(off + i, cursor_col);
	    out_str(T_CE);
	    screen_start();	    
	}
    }

#ifdef FEAT_GUI
    gui_can_update_cursor();
    if (gui.in_use)
	out_flush();	
#endif
    return OK;
}


    int
screen_del_lines(
    int		off,
    int		row,
    int		line_count,
    int		end,
    int		force,		
    int		clear_attr,	
    win_T	*wp)		
{
    int		j;
    int		i;
    unsigned	temp;
    int		cursor_row;
    int		cursor_col = 0;
    int		cursor_end;
    int		result_empty;	
    int		can_delete;	
    int		type;

    
    if (!screen_valid(TRUE)
	    || line_count <= 0
	    || (!force && line_count > p_ttyscroll)
	    || end > Rows
#ifdef FEAT_CLIPBOARD
	    || (clip_star.state != SELECT_CLEARED && redrawing_for_callback > 0)
#endif
       )
	return FAIL;

    
    result_empty = row + line_count >= end;

    
    can_delete = (*T_DB == NUL || can_clear(T_CE));

    
    if (wp != NULL && wp->w_width != Columns && *T_CSV == NUL)
    {
	
	
	
	
	if (line_count > 3)
	    return FAIL;
	type = USE_REDRAW;
    }
    else if (can_clear(T_CD) && result_empty)
	type = USE_T_CD;
    else if (row == 0 && (
#ifndef AMIGA
	
	
			    line_count == 1 ||
#endif
						*T_CDL == NUL))
	type = USE_NL;
    else if (*T_CDL != NUL && line_count > 1 && can_delete)
	type = USE_T_CDL;
    else if (can_clear(T_CE) && result_empty
	    && (wp == NULL || wp->w_width == Columns))
	type = USE_T_CE;
    else if (*T_DL != NUL && can_delete)
	type = USE_T_DL;
    else if (*T_CDL != NUL && can_delete)
	type = USE_T_CDL;
    else
	return FAIL;

#ifdef FEAT_CLIPBOARD
    
    
    if (off + row > 0 || (wp != NULL && wp->w_width != Columns))
	clip_clear_selection(&clip_star);
    else
	clip_scroll_selection(line_count);
#endif

#ifdef FEAT_GUI_HAIKU
    vim_lock_screen();
#endif

#ifdef FEAT_GUI
    
    
    gui_dont_update_cursor(gui.cursor_row >= row + off
						&& gui.cursor_row < end + off);
#endif

    if (wp != NULL && wp->w_wincol != 0 && *T_CSV != NUL && *T_CCS == NUL)
	cursor_col = wp->w_wincol;

    if (*T_CCS != NUL)	    
    {
	cursor_row = row;
	cursor_end = end;
    }
    else
    {
	cursor_row = row + off;
	cursor_end = end + off;
    }

    
    row += off;
    end += off;
    for (i = 0; i < line_count; ++i)
    {
	if (wp != NULL && wp->w_width != Columns)
	{
	    
	    j = row + i;
	    while ((j += line_count) <= end - 1)
		linecopy(j - line_count, j, wp);
	    j -= line_count;
	    if (can_clear((char_u *)" "))
		lineclear(LineOffset[j] + wp->w_wincol, wp->w_width,
								   clear_attr);
	    else
		lineinvalid(LineOffset[j] + wp->w_wincol, wp->w_width);
	    LineWraps[j] = FALSE;
	}
	else
	{
	    
	    j = row + i;
	    temp = LineOffset[j];
	    while ((j += line_count) <= end - 1)
	    {
		LineOffset[j - line_count] = LineOffset[j];
		LineWraps[j - line_count] = LineWraps[j];
	    }
	    LineOffset[j - line_count] = temp;
	    LineWraps[j - line_count] = FALSE;
	    if (can_clear((char_u *)" "))
		lineclear(temp, (int)Columns, clear_attr);
	    else
		lineinvalid(temp, (int)Columns);
	}
    }

#ifdef FEAT_GUI_HAIKU
    vim_unlock_screen();
#endif

    if (screen_attr != clear_attr)
	screen_stop_highlight();
    if (clear_attr != 0)
	screen_start_highlight(clear_attr);

    
    if (type == USE_REDRAW)
	redraw_block(row, end, wp);
    else if (type == USE_T_CD)	
    {
	windgoto(cursor_row, cursor_col);
	out_str(T_CD);
	screen_start();			
    }
    else if (type == USE_T_CDL)
    {
	windgoto(cursor_row, cursor_col);
	term_delete_lines(line_count);
	screen_start();			
    }
    
    else if (type == USE_NL)
    {
	windgoto(cursor_end - 1, cursor_col);
	for (i = line_count; --i >= 0; )
	    out_char('\n');		
    }
    else
    {
	for (i = line_count; --i >= 0; )
	{
	    if (type == USE_T_DL)
	    {
		windgoto(cursor_row, cursor_col);
		out_str(T_DL);		
	    }
	    else 
	    {
		windgoto(cursor_row + i, cursor_col);
		out_str(T_CE);		
	    }
	    screen_start();		
	}
    }

    
    if (*T_DB && (type == USE_T_DL || type == USE_T_CDL))
    {
	for (i = line_count; i > 0; --i)
	{
	    windgoto(cursor_end - i, cursor_col);
	    out_str(T_CE);		
	    screen_start();		
	}
    }

#ifdef FEAT_GUI
    gui_can_update_cursor();
    if (gui.in_use)
	out_flush();	
#endif

    return OK;
}


    int
skip_showmode(void)
{
    
    
    if (global_busy
	    || msg_silent != 0
	    || !redrawing()
	    || (char_avail() && !KeyTyped))
    {
	redraw_mode = TRUE;		
	return TRUE;
    }
    return FALSE;
}


    int
showmode(void)
{
    int		need_clear;
    int		length = 0;
    int		do_mode;
    int		attr;
    int		nwr_save;
    int		sub_attr;

    do_mode = p_smd && msg_silent == 0
	    && ((State & MODE_INSERT)
		|| restart_edit != NUL
		|| VIsual_active);
    if (do_mode || reg_recording != 0)
    {
	if (skip_showmode())
	    return 0;		

	nwr_save = need_wait_return;

	
	check_for_delay(FALSE);

	
	need_clear = clear_cmdline;
	if (clear_cmdline && cmdline_row < Rows - 1)
	    msg_clr_cmdline();			

	
	msg_pos_mode();
	cursor_off();
	attr = HL_ATTR(HLF_CM);			
	if (do_mode)
	{
	    msg_puts_attr("--", attr);
#if defined(FEAT_XIM)
	    if (
# ifdef FEAT_GUI_GTK
		    preedit_get_status()
# else
		    im_get_status()
# endif
	       )
# ifdef FEAT_GUI_GTK 
		msg_puts_attr(" IM", attr);
# else
		msg_puts_attr(" XIM", attr);
# endif
#endif
	    
	    if (edit_submode != NULL && !shortmess(SHM_COMPLETIONMENU))
	    {
		
		
		length = (Rows - msg_row) * Columns - 3;
		if (edit_submode_extra != NULL)
		    length -= vim_strsize(edit_submode_extra);
		if (length > 0)
		{
		    if (edit_submode_pre != NULL)
			length -= vim_strsize(edit_submode_pre);
		    if (length - vim_strsize(edit_submode) > 0)
		    {
			if (edit_submode_pre != NULL)
			    msg_puts_attr((char *)edit_submode_pre, attr);
			msg_puts_attr((char *)edit_submode, attr);
		    }
		    if (edit_submode_extra != NULL)
		    {
			msg_puts_attr(" ", attr);  
			if ((int)edit_submode_highl < (int)HLF_COUNT)
			    sub_attr = HL_ATTR(edit_submode_highl);
			else
			    sub_attr = attr;
			msg_puts_attr((char *)edit_submode_extra, sub_attr);
		    }
		}
	    }
	    else
	    {
		if (State & VREPLACE_FLAG)
		    msg_puts_attr(_(" VREPLACE"), attr);
		else if (State & REPLACE_FLAG)
		    msg_puts_attr(_(" REPLACE"), attr);
		else if (State & MODE_INSERT)
		{
#ifdef FEAT_RIGHTLEFT
		    if (p_ri)
			msg_puts_attr(_(" REVERSE"), attr);
#endif
		    msg_puts_attr(_(" INSERT"), attr);
		}
		else if (restart_edit == 'I' || restart_edit == 'i' ||
			restart_edit == 'a' || restart_edit == 'A')
		    msg_puts_attr(_(" (insert)"), attr);
		else if (restart_edit == 'R')
		    msg_puts_attr(_(" (replace)"), attr);
		else if (restart_edit == 'V')
		    msg_puts_attr(_(" (vreplace)"), attr);
#ifdef FEAT_RIGHTLEFT
		if (p_hkmap)
		    msg_puts_attr(_(" Hebrew"), attr);
#endif
#ifdef FEAT_KEYMAP
		if (State & MODE_LANGMAP)
		{
# ifdef FEAT_ARABIC
		    if (curwin->w_p_arab)
			msg_puts_attr(_(" Arabic"), attr);
		    else
# endif
			if (get_keymap_str(curwin, (char_u *)" (%s)",
							   NameBuff, MAXPATHL))
			    msg_puts_attr((char *)NameBuff, attr);
		}
#endif
		if ((State & MODE_INSERT) && p_paste)
		    msg_puts_attr(_(" (paste)"), attr);

		if (VIsual_active)
		{
		    char *p;

		    
		    
		    switch ((VIsual_select ? 4 : 0)
			    + (VIsual_mode == Ctrl_V) * 2
			    + (VIsual_mode == 'V'))
		    {
			case 0:	p = N_(" VISUAL"); break;
			case 1: p = N_(" VISUAL LINE"); break;
			case 2: p = N_(" VISUAL BLOCK"); break;
			case 4: p = N_(" SELECT"); break;
			case 5: p = N_(" SELECT LINE"); break;
			default: p = N_(" SELECT BLOCK"); break;
		    }
		    msg_puts_attr(_(p), attr);
		}
		msg_puts_attr(" --", attr);
	    }

	    need_clear = TRUE;
	}
	if (reg_recording != 0
		&& edit_submode == NULL)    
	{
	    recording_mode(attr);
	    need_clear = TRUE;
	}

	mode_displayed = TRUE;
	if (need_clear || clear_cmdline || redraw_mode)
	    msg_clr_eos();
	msg_didout = FALSE;		
	length = msg_col;
	msg_col = 0;
	need_wait_return = nwr_save;	
    }
    else if (clear_cmdline && msg_silent == 0)
	
	msg_clr_cmdline();
    else if (redraw_mode)
    {
	msg_pos_mode();
	msg_clr_eos();
    }

    
    if (VIsual_active)
	clear_showcmd();

    
    
    if (redrawing() && lastwin->w_status_height == 0)
	win_redr_ruler(lastwin, TRUE, FALSE);

    redraw_cmdline = FALSE;
    redraw_mode = FALSE;
    clear_cmdline = FALSE;

    return length;
}


    static void
msg_pos_mode(void)
{
    msg_col = 0;
    msg_row = Rows - 1;
}


    void
unshowmode(int force)
{
    
    if (!redrawing() || (!force && char_avail() && !KeyTyped))
	redraw_cmdline = TRUE;		
    else
	clearmode();
}


    void
clearmode(void)
{
    int save_msg_row = msg_row;
    int save_msg_col = msg_col;

    msg_pos_mode();
    if (reg_recording != 0)
	recording_mode(HL_ATTR(HLF_CM));
    msg_clr_eos();

    msg_col = save_msg_col;
    msg_row = save_msg_row;
}

    static void
recording_mode(int attr)
{
    msg_puts_attr(_("recording"), attr);
    if (shortmess(SHM_RECORDING))
	return;

    char s[4];

    sprintf(s, " @%c", reg_recording);
    msg_puts_attr(s, attr);
}


    void
draw_tabline(void)
{
    int		tabcount = 0;
    tabpage_T	*tp;
    int		tabwidth;
    int		col = 0;
    int		scol = 0;
    int		attr;
    win_T	*wp;
    win_T	*cwp;
    int		wincount;
    int		modified;
    int		c;
    int		len;
    int		attr_sel = HL_ATTR(HLF_TPS);
    int		attr_nosel = HL_ATTR(HLF_TP);
    int		attr_fill = HL_ATTR(HLF_TPF);
    char_u	*p;
    int		room;
    int		use_sep_chars = (t_colors < 8
#ifdef FEAT_GUI
					    && !gui.in_use
#endif
#ifdef FEAT_TERMGUICOLORS
					    && !p_tgc
#endif
					    );

    if (ScreenLines == NULL)
	return;
    redraw_tabline = FALSE;

#ifdef FEAT_GUI_TABLINE
    
    if (gui_use_tabline())
    {
	gui_update_tabline();
	return;
    }
#endif

    if (tabline_height() < 1)
	return;

#if defined(FEAT_STL_OPT)
    clear_TabPageIdxs();

    
    if (*p_tal != NUL)
	win_redr_custom(NULL, FALSE);
    else
#endif
    {
	FOR_ALL_TABPAGES(tp)
	    ++tabcount;

	tabwidth = (Columns - 1 + tabcount / 2) / tabcount;
	if (tabwidth < 6)
	    tabwidth = 6;

	attr = attr_nosel;
	tabcount = 0;
	for (tp = first_tabpage; tp != NULL && col < Columns - 4;
							     tp = tp->tp_next)
	{
	    scol = col;

	    if (tp->tp_topframe == topframe)
		attr = attr_sel;
	    if (use_sep_chars && col > 0)
		screen_putchar('|', 0, col++, attr);

	    if (tp->tp_topframe != topframe)
		attr = attr_nosel;

	    screen_putchar(' ', 0, col++, attr);

	    if (tp == curtab)
	    {
		cwp = curwin;
		wp = firstwin;
	    }
	    else
	    {
		cwp = tp->tp_curwin;
		wp = tp->tp_firstwin;
	    }

	    modified = FALSE;
	    for (wincount = 0; wp != NULL; wp = wp->w_next, ++wincount)
		if (bufIsChanged(wp->w_buffer))
		    modified = TRUE;
	    if (modified || wincount > 1)
	    {
		if (wincount > 1)
		{
		    vim_snprintf((char *)NameBuff, MAXPATHL, "%d", wincount);
		    len = (int)STRLEN(NameBuff);
		    if (col + len >= Columns - 3)
			break;
		    screen_puts_len(NameBuff, len, 0, col,
#if defined(FEAT_SYN_HL)
					 hl_combine_attr(attr, HL_ATTR(HLF_T))
#else
					 attr
#endif
					       );
		    col += len;
		}
		if (modified)
		    screen_puts_len((char_u *)"+", 1, 0, col++, attr);
		screen_putchar(' ', 0, col++, attr);
	    }

	    room = scol - col + tabwidth - 1;
	    if (room > 0)
	    {
		
		get_trans_bufname(cwp->w_buffer);
		shorten_dir(NameBuff);
		len = vim_strsize(NameBuff);
		p = NameBuff;
		if (has_mbyte)
		    while (len > room)
		    {
			len -= ptr2cells(p);
			MB_PTR_ADV(p);
		    }
		else if (len > room)
		{
		    p += len - room;
		    len = room;
		}
		if (len > Columns - col - 1)
		    len = Columns - col - 1;

		screen_puts_len(p, (int)STRLEN(p), 0, col, attr);
		col += len;
	    }
	    screen_putchar(' ', 0, col++, attr);

	    
	    
	    ++tabcount;
	    while (scol < col)
		TabPageIdxs[scol++] = tabcount;
	}

	if (use_sep_chars)
	    c = '_';
	else
	    c = ' ';
	screen_fill(0, 1, col, (int)Columns, c, c, attr_fill);

	
	if (p_sc && *p_sloc == 't')
	{
	    int	width = MIN(10, (int)Columns - col - (tabcount > 1) * 3);

	    if (width > 0)
		screen_puts_len(showcmd_buf, width, 0, (int)Columns
			    - width - (tabcount > 1) * 2, attr_nosel);
	}

	
	if (tabcount > 1)
	{
	    screen_putchar('X', 0, (int)Columns - 1, attr_nosel);
	    TabPageIdxs[Columns - 1] = -999;
	}
    }

    
    
    redraw_tabline = FALSE;
}


    void
get_trans_bufname(buf_T *buf)
{
    if (buf_spname(buf) != NULL)
	vim_strncpy(NameBuff, buf_spname(buf), MAXPATHL - 1);
    else
	home_replace(buf, buf->b_fname, NameBuff, MAXPATHL, TRUE);
    trans_characters(NameBuff, MAXPATHL);
}


    int
fillchar_status(int *attr, win_T *wp)
{
    int fill;

#ifdef FEAT_TERMINAL
    if (bt_terminal(wp->w_buffer))
    {
	if (wp == curwin)
	{
	    *attr = HL_ATTR(HLF_ST);
	    fill = wp->w_fill_chars.stl;
	}
	else
	{
	    *attr = HL_ATTR(HLF_STNC);
	    fill = wp->w_fill_chars.stlnc;
	}
    }
    else
#endif
    if (wp == curwin)
    {
	*attr = HL_ATTR(HLF_S);
	fill = wp->w_fill_chars.stl;
    }
    else
    {
	*attr = HL_ATTR(HLF_SNC);
	fill = wp->w_fill_chars.stlnc;
    }
    return fill;
}


    int
fillchar_vsep(int *attr, win_T *wp)
{
    *attr = HL_ATTR(HLF_C);
    if (*attr == 0 && wp->w_fill_chars.vert == ' ')
	return '|';
    else
	return wp->w_fill_chars.vert;
}


    int
redrawing(void)
{
#ifdef FEAT_EVAL
    if (disable_redraw_for_testing)
	return 0;
    else
#endif
	return ((RedrawingDisabled == 0
#ifdef FEAT_EVAL
		    || ignore_redraw_flag_for_testing
#endif
		) && !(p_lz && char_avail() && !KeyTyped && !do_redraw));
}


    int
messaging(void)
{
    return (!(p_lz && char_avail() && !KeyTyped));
}



#define COL_RULER 17	    

    void
comp_col(void)
{
    int last_has_status = last_stl_height(FALSE) > 0;

    sc_col = 0;
    ru_col = 0;
    if (p_ru)
    {
#ifdef FEAT_STL_OPT
	ru_col = (ru_wid ? ru_wid : COL_RULER) + 1;
#else
	ru_col = COL_RULER + 1;
#endif
	
	if (!last_has_status)
	    sc_col = ru_col;
    }
    if (p_sc && *p_sloc == 'l')
    {
	sc_col += SHOWCMD_COLS;
	if (!p_ru || last_has_status)	    
	    ++sc_col;
    }
    sc_col = Columns - sc_col;
    ru_col = Columns - ru_col;
    if (sc_col <= 0)		
	sc_col = 1;
    if (ru_col <= 0)
	ru_col = 1;
#ifdef FEAT_EVAL
    set_vim_var_nr(VV_ECHOSPACE, sc_col - 1);
#endif
}

#if defined(FEAT_LINEBREAK) || defined(PROTO)

    int
number_width(win_T *wp)
{
    int		n;
    linenr_T	lnum;

    if (wp->w_p_rnu && !wp->w_p_nu)
	
	lnum = wp->w_height;
    else
	
	lnum = wp->w_buffer->b_ml.ml_line_count;

    if (lnum == wp->w_nrwidth_line_count && wp->w_nuw_cached == wp->w_p_nuw)
	return wp->w_nrwidth_width;
    wp->w_nrwidth_line_count = lnum;

    n = 0;
    do
    {
	lnum /= 10;
	++n;
    } while (lnum > 0);

    
    if (n < wp->w_p_nuw - 1)
	n = wp->w_p_nuw - 1;

# ifdef FEAT_SIGNS
    
    
    if (n < 2 && get_first_valid_sign(wp) != NULL
	    && (*wp->w_p_scl == 'n' && *(wp->w_p_scl + 1) == 'u'))
	n = 2;
# endif

    wp->w_nrwidth_width = n;
    wp->w_nuw_cached = wp->w_p_nuw;
    return n;
}
#endif

#if defined(FEAT_EVAL) || defined(PROTO)

    int
screen_screencol(void)
{
    return screen_cur_col;
}


    int
screen_screenrow(void)
{
    return screen_cur_row;
}
#endif


    static int
get_encoded_char_adv(char_u **p)
{
    char_u *s = *p;

    if (s[0] == '\\' && (s[1] == 'x' || s[1] == 'u' || s[1] == 'U'))
    {
	varnumber_T num = 0;
	int	    bytes;
	int	    n;

	for (bytes = s[1] == 'x' ? 1 : s[1] == 'u' ? 2 : 4; bytes > 0; --bytes)
	{
	    *p += 2;
	    n = hexhex2nr(*p);
	    if (n < 0)
		return 0;
	    num = num * 256 + n;
	}
	*p += 2;
	return num;
    }
    return mb_ptr2char_adv(p);
}

struct charstab
{
    int	    *cp;
    char    *name;
};
static fill_chars_T fill_chars;
static struct charstab filltab[] =
{
    {&fill_chars.stl,		"stl"},
    {&fill_chars.stlnc,		"stlnc"},
    {&fill_chars.vert,		"vert"},
    {&fill_chars.fold,		"fold"},
    {&fill_chars.foldopen,	"foldopen"},
    {&fill_chars.foldclosed,	"foldclose"},
    {&fill_chars.foldsep,	"foldsep"},
    {&fill_chars.diff,		"diff"},
    {&fill_chars.eob,		"eob"},
    {&fill_chars.lastline,	"lastline"},
};
static lcs_chars_T lcs_chars;
static struct charstab lcstab[] =
{
    {&lcs_chars.eol,		"eol"},
    {&lcs_chars.ext,		"extends"},
    {&lcs_chars.nbsp,		"nbsp"},
    {&lcs_chars.prec,		"precedes"},
    {&lcs_chars.space,		"space"},
    {&lcs_chars.tab2,		"tab"},
    {&lcs_chars.trail,		"trail"},
    {&lcs_chars.lead,		"lead"},
#ifdef FEAT_CONCEAL
    {&lcs_chars.conceal,	"conceal"},
#else
    {NULL,			"conceal"},
#endif
    {NULL,			"multispace"},
    {NULL,			"leadmultispace"},
};

    static char *
field_value_err(char *errbuf, size_t errbuflen, char *fmt, char *field)
{
    if (errbuf == NULL)
	return "";
    vim_snprintf(errbuf, errbuflen, _(fmt), field);
    return errbuf;
}


    static char *
set_chars_option(win_T *wp, char_u *value, int is_listchars, int apply,
						char *errbuf, size_t errbuflen)
{
    int	    round, i, len, entries;
    char_u  *p, *s;
    int	    c1 = 0, c2 = 0, c3 = 0;
    char_u  *last_multispace = NULL;  
    char_u  *last_lmultispace = NULL; 
    int	    multispace_len = 0;	      
    int	    lead_multispace_len = 0;  

    struct charstab *tab;

    if (is_listchars)
    {
	tab = lcstab;
	CLEAR_FIELD(lcs_chars);
	entries = ARRAY_LENGTH(lcstab);
	if (wp->w_p_lcs[0] == NUL)
	    value = p_lcs;  
    }
    else
    {
	tab = filltab;
	entries = ARRAY_LENGTH(filltab);
	if (wp->w_p_fcs[0] == NUL)
	    value = p_fcs;  
    }

    
    for (round = 0; round <= (apply ? 1 : 0); ++round)
    {
	if (round > 0)
	{
	    
	    if (is_listchars)
	    {
		for (i = 0; i < entries; ++i)
		    if (tab[i].cp != NULL)
			*(tab[i].cp) = NUL;
		lcs_chars.tab1 = NUL;
		lcs_chars.tab3 = NUL;

		if (multispace_len > 0)
		{
		    lcs_chars.multispace = ALLOC_MULT(int, multispace_len + 1);
		    if (lcs_chars.multispace != NULL)
			lcs_chars.multispace[multispace_len] = NUL;
		}
		else
		    lcs_chars.multispace = NULL;

		if (lead_multispace_len > 0)
		{
		    lcs_chars.leadmultispace =
				      ALLOC_MULT(int, lead_multispace_len + 1);
		    lcs_chars.leadmultispace[lead_multispace_len] = NUL;
		}
		else
		    lcs_chars.leadmultispace = NULL;
	    }
	    else
	    {
		fill_chars.stl = ' ';
		fill_chars.stlnc = ' ';
		fill_chars.vert = ' ';
		fill_chars.fold = '-';
		fill_chars.foldopen = '-';
		fill_chars.foldclosed = '+';
		fill_chars.foldsep = '|';
		fill_chars.diff = '-';
		fill_chars.eob = '~';
		fill_chars.lastline = '@';
	    }
	}
	p = value;
	while (*p)
	{
	    for (i = 0; i < entries; ++i)
	    {
		len = (int)STRLEN(tab[i].name);
		if (!(STRNCMP(p, tab[i].name, len) == 0 && p[len] == ':'))
		    continue;

		if (is_listchars && strcmp(tab[i].name, "multispace") == 0)
		{
		    s = p + len + 1;
		    if (round == 0)
		    {
			
			last_multispace = p;
			multispace_len = 0;
			while (*s != NUL && *s != ',')
			{
			    c1 = get_encoded_char_adv(&s);
			    if (char2cells(c1) > 1)
				return field_value_err(errbuf, errbuflen,
					 e_wrong_character_width_for_field_str,
					 tab[i].name);
			    ++multispace_len;
			}
			if (multispace_len == 0)
			    
			    return field_value_err(errbuf, errbuflen,
				    e_wrong_number_of_characters_for_field_str,
				    tab[i].name);
			p = s;
		    }
		    else
		    {
			int multispace_pos = 0;

			while (*s != NUL && *s != ',')
			{
			    c1 = get_encoded_char_adv(&s);
			    if (p == last_multispace)
				lcs_chars.multispace[multispace_pos++] = c1;
			}
			p = s;
		    }
		    break;
		}

		if (is_listchars && strcmp(tab[i].name, "leadmultispace") == 0)
		{
		    s = p + len + 1;
		    if (round == 0)
		    {
			
			
			last_lmultispace = p;
			lead_multispace_len = 0;
			while (*s != NUL && *s != ',')
			{
			    c1 = get_encoded_char_adv(&s);
			    if (char2cells(c1) > 1)
				return field_value_err(errbuf, errbuflen,
					 e_wrong_character_width_for_field_str,
					 tab[i].name);
			    ++lead_multispace_len;
			}
			if (lead_multispace_len == 0)
			    
			    return field_value_err(errbuf, errbuflen,
				    e_wrong_number_of_characters_for_field_str,
				    tab[i].name);
			p = s;
		    }
		    else
		    {
			int multispace_pos = 0;

			while (*s != NUL && *s != ',')
			{
			    c1 = get_encoded_char_adv(&s);
			    if (p == last_lmultispace)
				lcs_chars.leadmultispace[multispace_pos++] = c1;
			}
			p = s;
		    }
		    break;
		}

		c2 = c3 = 0;
		s = p + len + 1;
		if (*s == NUL)
		    return field_value_err(errbuf, errbuflen,
				    e_wrong_number_of_characters_for_field_str,
				    tab[i].name);
		c1 = get_encoded_char_adv(&s);
		if (char2cells(c1) > 1)
		    return field_value_err(errbuf, errbuflen,
					 e_wrong_character_width_for_field_str,
					 tab[i].name);
		if (tab[i].cp == &lcs_chars.tab2)
		{
		    if (*s == NUL)
			return field_value_err(errbuf, errbuflen,
				    e_wrong_number_of_characters_for_field_str,
				    tab[i].name);
		    c2 = get_encoded_char_adv(&s);
		    if (char2cells(c2) > 1)
			return field_value_err(errbuf, errbuflen,
					 e_wrong_character_width_for_field_str,
					 tab[i].name);
		    if (!(*s == ',' || *s == NUL))
		    {
			c3 = get_encoded_char_adv(&s);
			if (char2cells(c3) > 1)
			    return field_value_err(errbuf, errbuflen,
					 e_wrong_character_width_for_field_str,
					 tab[i].name);
		    }
		}

		if (*s == ',' || *s == NUL)
		{
		    if (round > 0)
		    {
			if (tab[i].cp == &lcs_chars.tab2)
			{
			    lcs_chars.tab1 = c1;
			    lcs_chars.tab2 = c2;
			    lcs_chars.tab3 = c3;
			}
			else if (tab[i].cp != NULL)
			    *(tab[i].cp) = c1;

		    }
		    p = s;
		    break;
		}
		else
		    return field_value_err(errbuf, errbuflen,
				    e_wrong_number_of_characters_for_field_str,
				    tab[i].name);
	    }

	    if (i == entries)
		return e_invalid_argument;

	    if (*p == ',')
		++p;
	}
    }

    if (apply)
    {
	if (is_listchars)
	{
	    vim_free(wp->w_lcs_chars.multispace);
	    vim_free(wp->w_lcs_chars.leadmultispace);
	    wp->w_lcs_chars = lcs_chars;
	}
	else
	{
	    wp->w_fill_chars = fill_chars;
	}
    }

    return NULL;	
}


    char *
set_fillchars_option(win_T *wp, char_u *val, int apply, char *errbuf,
							      size_t errbuflen)
{
    return set_chars_option(wp, val, FALSE, apply, errbuf, errbuflen);
}


    char *
set_listchars_option(win_T *wp, char_u *val, int apply, char *errbuf,
							      size_t errbuflen)
{
    return set_chars_option(wp, val, TRUE, apply, errbuf, errbuflen);
}


    char_u *
get_fillchars_name(expand_T *xp UNUSED, int idx)
{
    if (idx >= (int)(sizeof(filltab) / sizeof(filltab[0])))
	return NULL;

    return (char_u*)filltab[idx].name;
}


    char_u *
get_listchars_name(expand_T *xp UNUSED, int idx)
{
    if (idx >= (int)(sizeof(lcstab) / sizeof(lcstab[0])))
	return NULL;

    return (char_u*)lcstab[idx].name;
}


    char *
check_chars_options(void)
{
    tabpage_T   *tp;
    win_T	    *wp;

    if (set_listchars_option(curwin, p_lcs, FALSE, NULL, 0) != NULL)
	return e_conflicts_with_value_of_listchars;
    if (set_fillchars_option(curwin, p_fcs, FALSE, NULL, 0) != NULL)
	return e_conflicts_with_value_of_fillchars;
    FOR_ALL_TAB_WINDOWS(tp, wp)
    {
	if (set_listchars_option(wp, wp->w_p_lcs, FALSE, NULL, 0) != NULL)
	    return e_conflicts_with_value_of_listchars;
	if (set_fillchars_option(wp, wp->w_p_fcs, FALSE, NULL, 0) != NULL)
	    return e_conflicts_with_value_of_fillchars;
    }
    return NULL;
}
