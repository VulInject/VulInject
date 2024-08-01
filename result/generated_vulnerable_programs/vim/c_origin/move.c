


#include "vim.h"

static void redraw_for_cursorline(win_T *wp);
static int scrolljump_value(void);
static int check_top_offset(void);
static void curs_rows(win_T *wp);

typedef struct
{
    linenr_T	    lnum;	
#ifdef FEAT_DIFF
    int		    fill;	
#endif
    int		    height;	
} lineoff_T;

static void topline_back(lineoff_T *lp);
static void botline_forw(lineoff_T *lp);


    int
adjust_plines_for_skipcol(win_T *wp)
{
    if (wp->w_skipcol == 0)
	return 0;

    int width = wp->w_width - win_col_off(wp);
    int w2 = width + win_col_off2(wp);
    if (wp->w_skipcol >= width && w2 > 0)
	return (wp->w_skipcol - width) / w2 + 1;

    return 0;
}


    static int
plines_correct_topline(win_T *wp, linenr_T lnum, int limit_winheight)
{
    int n;
#ifdef FEAT_DIFF
    if (lnum == wp->w_topline)
	n = plines_win_nofill(wp, lnum, FALSE) + wp->w_topfill;
    else
#endif
	n = plines_win(wp, lnum, FALSE);
    if (lnum == wp->w_topline)
	n -= adjust_plines_for_skipcol(wp);
    if (limit_winheight && n > wp->w_height)
	n = wp->w_height;
    return n;
}


    static void
comp_botline(win_T *wp)
{
    int		n;
    linenr_T	lnum;
    int		done;
#ifdef FEAT_FOLDING
    linenr_T    last;
    int		folded;
#endif

    
    check_cursor_moved(wp);
    if (wp->w_valid & VALID_CROW)
    {
	lnum = wp->w_cursor.lnum;
	done = wp->w_cline_row;
    }
    else
    {
	lnum = wp->w_topline;
	done = 0;
    }

    for ( ; lnum <= wp->w_buffer->b_ml.ml_line_count; ++lnum)
    {
#ifdef FEAT_FOLDING
	last = lnum;
	folded = FALSE;
	if (hasFoldingWin(wp, lnum, NULL, &last, TRUE, NULL))
	{
	    n = 1;
	    folded = TRUE;
	}
	else
#endif
	{
	    n = plines_correct_topline(wp, lnum, TRUE);
	}
	if (
#ifdef FEAT_FOLDING
		lnum <= wp->w_cursor.lnum && last >= wp->w_cursor.lnum
#else
		lnum == wp->w_cursor.lnum
#endif
	   )
	{
	    wp->w_cline_row = done;
	    wp->w_cline_height = n;
#ifdef FEAT_FOLDING
	    wp->w_cline_folded = folded;
#endif
	    redraw_for_cursorline(wp);
	    wp->w_valid |= (VALID_CROW|VALID_CHEIGHT);
	}
	if (done + n > wp->w_height)
	    break;
	done += n;
#ifdef FEAT_FOLDING
	lnum = last;
#endif
    }

    
    wp->w_botline = lnum;
    wp->w_valid |= VALID_BOTLINE|VALID_BOTLINE_AP;

    set_empty_rows(wp, done);
}


    static void
redraw_for_cursorline(win_T *wp)
{
    if ((wp->w_p_rnu
#ifdef FEAT_SYN_HL
		|| wp->w_p_cul
#endif
		)
	    && (wp->w_valid & VALID_CROW) == 0
	    && !pum_visible())
    {
	
	redraw_win_later(wp, UPD_VALID);
    }
}

#ifdef FEAT_SYN_HL

    static void
redraw_for_cursorcolumn(win_T *wp)
{
    if ((wp->w_valid & VALID_VIRTCOL) == 0 && !pum_visible())
    {
	
	if (wp->w_p_cuc)
	    redraw_win_later(wp, UPD_SOME_VALID);
	
	
	else if (wp->w_p_cul && (wp->w_p_culopt_flags & CULOPT_SCRLINE))
	    redraw_win_later(wp, UPD_VALID);
    }
}
#endif


     int
sms_marker_overlap(win_T *wp, int extra2)
{
    if (extra2 == -1)
	extra2 = win_col_off(wp) - win_col_off2(wp);
#if defined(FEAT_LINEBREAK)
    
    
    if (*get_showbreak_value(wp) != NUL)
	return 0;
#endif
    
    if (wp->w_p_list && wp->w_lcs_chars.prec)
	return 1;

    return extra2 > 3 ? 0 : 3 - extra2;
}


    static int
skipcol_from_plines(win_T *wp, int plines_off)
{
    int width1 = wp->w_width - win_col_off(wp);

    int skipcol = 0;
    if (plines_off > 0)
	skipcol += width1;
    if (plines_off > 1)
	skipcol += (width1 + win_col_off2(wp)) * (plines_off - 1);
    return skipcol;
}


    static void
reset_skipcol(void)
{
    if (curwin->w_skipcol == 0)
	return;

    curwin->w_skipcol = 0;

    
    
    
    redraw_later(UPD_SOME_VALID);
}


    void
update_topline_redraw(void)
{
    update_topline();
    if (must_redraw)
	update_screen(0);
}


    void
update_topline(void)
{
    int	line_count;
    int		halfheight;
    int		n;
#ifdef FEAT_FOLDING
    linenr_T	lnum;
#endif
    int		check_topline = FALSE;
    int		check_botline = FALSE;
    int	*so_ptr = curwin->w_p_so >= 0 ? &curwin->w_p_so : &p_so;
    int		save_so = *so_ptr;

    
    if (skip_update_topline)
	return;

    
    
    if (!screen_valid(TRUE) || curwin->w_height == 0)
    {
	check_cursor_lnum();
	curwin->w_topline = curwin->w_cursor.lnum;
	curwin->w_botline = curwin->w_topline;
	curwin->w_scbind_pos = 1;
	return;
    }

    check_cursor_moved(curwin);
    if (curwin->w_valid & VALID_TOPLINE)
	return;

    
    if (mouse_dragging > 0)
	*so_ptr = mouse_dragging - 1;

    linenr_T old_topline = curwin->w_topline;
#ifdef FEAT_DIFF
    int old_topfill = curwin->w_topfill;
#endif

    
    if (BUFEMPTY())		
    {
	if (curwin->w_topline != 1)
	    redraw_later(UPD_NOT_VALID);
	curwin->w_topline = 1;
	curwin->w_botline = 2;
	curwin->w_skipcol = 0;
	curwin->w_valid |= VALID_BOTLINE|VALID_BOTLINE_AP;
	curwin->w_scbind_pos = 1;
    }

    
    else
    {
	if (curwin->w_topline > 1 || curwin->w_skipcol > 0)
	{
	    
	    
	    
	    if (curwin->w_cursor.lnum < curwin->w_topline)
		check_topline = TRUE;
	    else if (check_top_offset())
		check_topline = TRUE;
	    else if (curwin->w_skipcol > 0
				 && curwin->w_cursor.lnum == curwin->w_topline)
	    {
		colnr_T vcol;
		int overlap;

		
		
		getvvcol(curwin, &curwin->w_cursor, &vcol, NULL, NULL);
		overlap = sms_marker_overlap(curwin, -1);
		if (curwin->w_skipcol + overlap > vcol)
		    check_topline = TRUE;
	    }
	}
#ifdef FEAT_DIFF
	    
	if (!check_topline && curwin->w_topfill > diff_check_fill(curwin,
							   curwin->w_topline))
	    check_topline = TRUE;
#endif

	if (check_topline)
	{
	    halfheight = curwin->w_height / 2 - 1;
	    if (halfheight < 2)
		halfheight = 2;

#ifdef FEAT_FOLDING
	    if (hasAnyFolding(curwin))
	    {
		
		
		
		n = 0;
		for (lnum = curwin->w_cursor.lnum;
				    lnum < curwin->w_topline + *so_ptr; ++lnum)
		{
		    ++n;
		    
		    if (lnum >= curbuf->b_ml.ml_line_count || n >= halfheight)
			break;
		    (void)hasFolding(lnum, NULL, &lnum);
		}
	    }
	    else
#endif
		n = curwin->w_topline + *so_ptr - curwin->w_cursor.lnum;

	    
	    
	    
	    if (n >= halfheight)
		scroll_cursor_halfway(FALSE, FALSE);
	    else
	    {
		scroll_cursor_top(scrolljump_value(), FALSE);
		check_botline = TRUE;
	    }
	}

	else
	{
#ifdef FEAT_FOLDING
	    
	    (void)hasFolding(curwin->w_topline, &curwin->w_topline, NULL);
#endif
	    check_botline = TRUE;
	}
    }

    
    if (check_botline)
    {
	if (!(curwin->w_valid & VALID_BOTLINE_AP))
	    validate_botline();

	if (curwin->w_botline <= curbuf->b_ml.ml_line_count)
	{
	    if (curwin->w_cursor.lnum < curwin->w_botline)
	    {
	      if (((int)curwin->w_cursor.lnum
					   >= (int)curwin->w_botline - *so_ptr
#ifdef FEAT_FOLDING
			|| hasAnyFolding(curwin)
#endif
			))
	      {
		lineoff_T	loff;

		
		
		
		n = curwin->w_empty_rows;
		loff.lnum = curwin->w_cursor.lnum;
#ifdef FEAT_FOLDING
		
		(void)hasFolding(loff.lnum, NULL, &loff.lnum);
#endif
#ifdef FEAT_DIFF
		loff.fill = 0;
		n += curwin->w_filler_rows;
#endif
		loff.height = 0;
		while (loff.lnum < curwin->w_botline
#ifdef FEAT_DIFF
			&& (loff.lnum + 1 < curwin->w_botline || loff.fill == 0)
#endif
			)
		{
		    n += loff.height;
		    if (n >= *so_ptr)
			break;
		    botline_forw(&loff);
		}
		if (n >= *so_ptr)
		    
		    check_botline = FALSE;
	      }
	      else
		  
		  check_botline = FALSE;
	    }
	    if (check_botline)
	    {
#ifdef FEAT_FOLDING
		if (hasAnyFolding(curwin))
		{
		    
		    
		    
		    line_count = 0;
		    for (lnum = curwin->w_cursor.lnum;
				   lnum >= curwin->w_botline - *so_ptr; --lnum)
		    {
			++line_count;
			
			if (lnum <= 0 || line_count > curwin->w_height + 1)
			    break;
			(void)hasFolding(lnum, &lnum, NULL);
		    }
		}
		else
#endif
		    line_count = curwin->w_cursor.lnum - curwin->w_botline
								 + 1 + *so_ptr;
		if (line_count <= curwin->w_height + 1)
		    scroll_cursor_bot(scrolljump_value(), FALSE);
		else
		    scroll_cursor_halfway(FALSE, FALSE);
	    }
	}
    }
    curwin->w_valid |= VALID_TOPLINE;

    
    if (curwin->w_topline != old_topline
#ifdef FEAT_DIFF
	    || curwin->w_topfill != old_topfill
#endif
	    )
    {
	dollar_vcol = -1;
	redraw_later(UPD_VALID);

	
	if (!curwin->w_p_sms)
	    reset_skipcol();
	else if (curwin->w_skipcol != 0)
	    redraw_later(UPD_SOME_VALID);

	
	if (curwin->w_cursor.lnum == curwin->w_topline)
	    validate_cursor();
    }

    *so_ptr = save_so;
}


    static int
scrolljump_value(void)
{
    if (p_sj >= 0)
	return (int)p_sj;
    return (curwin->w_height * -p_sj) / 100;
}


    static int
check_top_offset(void)
{
    lineoff_T	loff;
    int		n;
    int	so = get_scrolloff_value();

    if (curwin->w_cursor.lnum < curwin->w_topline + so
#ifdef FEAT_FOLDING
		    || hasAnyFolding(curwin)
#endif
	    )
    {
	loff.lnum = curwin->w_cursor.lnum;
#ifdef FEAT_DIFF
	loff.fill = 0;
	n = curwin->w_topfill;	    
#else
	n = 0;
#endif
	
	while (n < so)
	{
	    topline_back(&loff);
	    
	    if (loff.lnum < curwin->w_topline
#ifdef FEAT_DIFF
		    || (loff.lnum == curwin->w_topline && loff.fill > 0)
#endif
		    )
		break;
	    n += loff.height;
	}
	if (n < so)
	    return TRUE;
    }
    return FALSE;
}


    void
update_curswant_force(void)
{
    validate_virtcol();
    curwin->w_curswant = curwin->w_virtcol
#ifdef FEAT_PROP_POPUP
	- curwin->w_virtcol_first_char
#endif
	;
    curwin->w_set_curswant = FALSE;
}


    void
update_curswant(void)
{
    if (curwin->w_set_curswant)
	update_curswant_force();
}


    void
check_cursor_moved(win_T *wp)
{
    if (wp->w_cursor.lnum != wp->w_valid_cursor.lnum)
    {
	wp->w_valid &= ~(VALID_WROW|VALID_WCOL|VALID_VIRTCOL
				      |VALID_CHEIGHT|VALID_CROW|VALID_TOPLINE
				      |VALID_BOTLINE|VALID_BOTLINE_AP);
	wp->w_valid_cursor = wp->w_cursor;
	wp->w_valid_leftcol = wp->w_leftcol;
	wp->w_valid_skipcol = wp->w_skipcol;
    }
    else if (wp->w_skipcol != wp->w_valid_skipcol)
    {
	wp->w_valid &= ~(VALID_WROW|VALID_WCOL|VALID_VIRTCOL
				      |VALID_CHEIGHT|VALID_CROW
				      |VALID_BOTLINE|VALID_BOTLINE_AP);
	wp->w_valid_cursor = wp->w_cursor;
	wp->w_valid_leftcol = wp->w_leftcol;
	wp->w_valid_skipcol = wp->w_skipcol;
    }
    else if (wp->w_cursor.col != wp->w_valid_cursor.col
	     || wp->w_leftcol != wp->w_valid_leftcol
	     || wp->w_cursor.coladd != wp->w_valid_cursor.coladd)
    {
	wp->w_valid &= ~(VALID_WROW|VALID_WCOL|VALID_VIRTCOL);
	wp->w_valid_cursor.col = wp->w_cursor.col;
	wp->w_valid_leftcol = wp->w_leftcol;
	wp->w_valid_cursor.coladd = wp->w_cursor.coladd;
    }
}


    void
changed_window_setting(void)
{
    changed_window_setting_win(curwin);
}

    void
changed_window_setting_win(win_T *wp)
{
    wp->w_lines_valid = 0;
    changed_line_abv_curs_win(wp);
    wp->w_valid &= ~(VALID_BOTLINE|VALID_BOTLINE_AP|VALID_TOPLINE);
    redraw_win_later(wp, UPD_NOT_VALID);
}

#if defined(FEAT_PROP_POPUP) || defined(PROTO)

    void
changed_window_setting_buf(buf_T *buf)
{
    tabpage_T	*tp;
    win_T	*wp;

    FOR_ALL_TAB_WINDOWS(tp, wp)
	if (wp->w_buffer == buf)
	    changed_window_setting_win(wp);
}
#endif


    void
changed_window_setting_all(void)
{
    tabpage_T	*tp;
    win_T	*wp;

    FOR_ALL_TAB_WINDOWS(tp, wp)
	changed_window_setting_win(wp);
}


    void
set_topline(win_T *wp, linenr_T lnum)
{
#ifdef FEAT_DIFF
    linenr_T prev_topline = wp->w_topline;
#endif

#ifdef FEAT_FOLDING
    
    (void)hasFoldingWin(wp, lnum, &lnum, NULL, TRUE, NULL);
#endif
    
    wp->w_botline += lnum - wp->w_topline;
    if (wp->w_botline > wp->w_buffer->b_ml.ml_line_count + 1)
	wp->w_botline = wp->w_buffer->b_ml.ml_line_count + 1;
    wp->w_topline = lnum;
    wp->w_topline_was_set = TRUE;
#ifdef FEAT_DIFF
    if (lnum != prev_topline)
	
	wp->w_topfill = 0;
#endif
    wp->w_valid &= ~(VALID_WROW|VALID_CROW|VALID_BOTLINE|VALID_TOPLINE);
    
    redraw_later(UPD_VALID);
}


    void
changed_cline_bef_curs(void)
{
    curwin->w_valid &= ~(VALID_WROW|VALID_WCOL|VALID_VIRTCOL|VALID_CROW
						|VALID_CHEIGHT|VALID_TOPLINE);
}

    void
changed_cline_bef_curs_win(win_T *wp)
{
    wp->w_valid &= ~(VALID_WROW|VALID_WCOL|VALID_VIRTCOL|VALID_CROW
						|VALID_CHEIGHT|VALID_TOPLINE);
}


    void
changed_line_abv_curs(void)
{
    curwin->w_valid &= ~(VALID_WROW|VALID_WCOL|VALID_VIRTCOL|VALID_CROW
						|VALID_CHEIGHT|VALID_TOPLINE);
}

    void
changed_line_abv_curs_win(win_T *wp)
{
    wp->w_valid &= ~(VALID_WROW|VALID_WCOL|VALID_VIRTCOL|VALID_CROW
						|VALID_CHEIGHT|VALID_TOPLINE);
}

#if defined(FEAT_PROP_POPUP) || defined(PROTO)

    void
changed_line_display_buf(buf_T *buf)
{
    win_T *wp;

    FOR_ALL_WINDOWS(wp)
	if (wp->w_buffer == buf)
	    wp->w_valid &= ~(VALID_WROW|VALID_WCOL|VALID_VIRTCOL
				|VALID_CROW|VALID_CHEIGHT
				|VALID_TOPLINE|VALID_BOTLINE|VALID_BOTLINE_AP);
}
#endif


    void
validate_botline(void)
{
    validate_botline_win(curwin);
}


    void
validate_botline_win(win_T *wp)
{
    if (!(wp->w_valid & VALID_BOTLINE))
	comp_botline(wp);
}


    void
invalidate_botline(void)
{
    curwin->w_valid &= ~(VALID_BOTLINE|VALID_BOTLINE_AP);
}

    void
invalidate_botline_win(win_T *wp)
{
    wp->w_valid &= ~(VALID_BOTLINE|VALID_BOTLINE_AP);
}

    void
approximate_botline_win(
    win_T	*wp)
{
    wp->w_valid &= ~VALID_BOTLINE;
}


    int
cursor_valid(void)
{
    check_cursor_moved(curwin);
    return ((curwin->w_valid & (VALID_WROW|VALID_WCOL)) ==
						      (VALID_WROW|VALID_WCOL));
}


    void
validate_cursor(void)
{
    check_cursor_lnum();
    check_cursor_moved(curwin);
    if ((curwin->w_valid & (VALID_WCOL|VALID_WROW)) != (VALID_WCOL|VALID_WROW))
	curs_columns(TRUE);
}

#if defined(FEAT_GUI) || defined(PROTO)

    void
validate_cline_row(void)
{
    
    update_topline();
    check_cursor_moved(curwin);
    if (!(curwin->w_valid & VALID_CROW))
	curs_rows(curwin);
}
#endif


    static void
curs_rows(win_T *wp)
{
    linenr_T	lnum;
    int		i;
    int		all_invalid;
    int		valid;
#ifdef FEAT_FOLDING
    int	fold_count;
#endif

    
    all_invalid = (!redrawing()
			|| wp->w_lines_valid == 0
			|| wp->w_lines[0].wl_lnum > wp->w_topline);
    i = 0;
    wp->w_cline_row = 0;
    for (lnum = wp->w_topline; lnum < wp->w_cursor.lnum; ++i)
    {
	valid = FALSE;
	if (!all_invalid && i < wp->w_lines_valid)
	{
	    if (wp->w_lines[i].wl_lnum < lnum || !wp->w_lines[i].wl_valid)
		continue;		
	    if (wp->w_lines[i].wl_lnum == lnum)
	    {
#ifdef FEAT_FOLDING
		
		
		if (!wp->w_buffer->b_mod_set
			|| wp->w_lines[i].wl_lastlnum < wp->w_cursor.lnum
			|| wp->w_buffer->b_mod_top
					     > wp->w_lines[i].wl_lastlnum + 1)
#endif
		valid = TRUE;
	    }
	    else if (wp->w_lines[i].wl_lnum > lnum)
		--i;			
	}
	if (valid
	       && (lnum != wp->w_topline || (wp->w_skipcol == 0
#ifdef FEAT_DIFF
					    && !wp->w_p_diff
#endif
	       )))
	{
#ifdef FEAT_FOLDING
	    lnum = wp->w_lines[i].wl_lastlnum + 1;
	    
	    if (lnum > wp->w_cursor.lnum)
		break;
#else
	    ++lnum;
#endif
	    wp->w_cline_row += wp->w_lines[i].wl_size;
	}
	else
	{
#ifdef FEAT_FOLDING
	    fold_count = foldedCount(wp, lnum, NULL);
	    if (fold_count)
	    {
		lnum += fold_count;
		if (lnum > wp->w_cursor.lnum)
		    break;
		++wp->w_cline_row;
	    }
	    else
#endif
	    {
		wp->w_cline_row += plines_correct_topline(wp, lnum, TRUE);
		++lnum;
	    }
	}
    }

    check_cursor_moved(wp);
    if (!(wp->w_valid & VALID_CHEIGHT))
    {
	if (all_invalid
		|| i == wp->w_lines_valid
		|| (i < wp->w_lines_valid
		    && (!wp->w_lines[i].wl_valid
			|| wp->w_lines[i].wl_lnum != wp->w_cursor.lnum)))
	{
#ifdef FEAT_DIFF
	    if (wp->w_cursor.lnum == wp->w_topline)
		wp->w_cline_height = plines_win_nofill(wp, wp->w_cursor.lnum,
							TRUE) + wp->w_topfill;
	    else
#endif
		wp->w_cline_height = plines_win(wp, wp->w_cursor.lnum, TRUE);
#ifdef FEAT_FOLDING
	    wp->w_cline_folded = hasFoldingWin(wp, wp->w_cursor.lnum,
						      NULL, NULL, TRUE, NULL);
#endif
	}
	else if (i > wp->w_lines_valid)
	{
	    
	    wp->w_cline_height = 0;
#ifdef FEAT_FOLDING
	    wp->w_cline_folded = hasFoldingWin(wp, wp->w_cursor.lnum,
						      NULL, NULL, TRUE, NULL);
#endif
	}
	else
	{
	    wp->w_cline_height = wp->w_lines[i].wl_size;
#ifdef FEAT_FOLDING
	    wp->w_cline_folded = wp->w_lines[i].wl_folded;
#endif
	}
    }

    redraw_for_cursorline(curwin);
    wp->w_valid |= VALID_CROW|VALID_CHEIGHT;
}


    void
validate_virtcol(void)
{
    validate_virtcol_win(curwin);
}


    void
validate_virtcol_win(win_T *wp)
{
    check_cursor_moved(wp);

    if (wp->w_valid & VALID_VIRTCOL)
	return;

#ifdef FEAT_PROP_POPUP
    wp->w_virtcol_first_char = 0;
#endif
    getvvcol(wp, &wp->w_cursor, NULL, &(wp->w_virtcol), NULL);
#ifdef FEAT_SYN_HL
    redraw_for_cursorcolumn(wp);
#endif
    wp->w_valid |= VALID_VIRTCOL;
}


    void
validate_cheight(void)
{
    check_cursor_moved(curwin);

    if (curwin->w_valid & VALID_CHEIGHT)
	return;

#ifdef FEAT_DIFF
    if (curwin->w_cursor.lnum == curwin->w_topline)
	curwin->w_cline_height = plines_nofill(curwin->w_cursor.lnum)
	    + curwin->w_topfill;
    else
#endif
	curwin->w_cline_height = plines(curwin->w_cursor.lnum);
#ifdef FEAT_FOLDING
    curwin->w_cline_folded = hasFolding(curwin->w_cursor.lnum, NULL, NULL);
#endif
    curwin->w_valid |= VALID_CHEIGHT;
}


    void
validate_cursor_col(void)
{
    colnr_T off;
    colnr_T col;
    int     width;

    validate_virtcol();

    if (curwin->w_valid & VALID_WCOL)
	return;

    col = curwin->w_virtcol;
    off = curwin_col_off();
    col += off;
    width = curwin->w_width - off + curwin_col_off2();

    
    if (curwin->w_p_wrap
	    && col >= (colnr_T)curwin->w_width
	    && width > 0)
	
	col -= ((col - curwin->w_width) / width + 1) * width;
    if (col > (int)curwin->w_leftcol)
	col -= curwin->w_leftcol;
    else
	col = 0;
    curwin->w_wcol = col;

    curwin->w_valid |= VALID_WCOL;
#ifdef FEAT_PROP_POPUP
    curwin->w_flags &= ~WFLAG_WCOL_OFF_ADDED;
#endif
}


    int
win_col_off(win_T *wp)
{
    return (((wp->w_p_nu || wp->w_p_rnu) ? number_width(wp) + 1 : 0)
	    + (wp != cmdwin_win ? 0 : 1)
#ifdef FEAT_FOLDING
	    + wp->w_p_fdc
#endif
#ifdef FEAT_SIGNS
	    + (signcolumn_on(wp) ? 2 : 0)
#endif
	   );
}

    int
curwin_col_off(void)
{
    return win_col_off(curwin);
}


    int
win_col_off2(win_T *wp)
{
    if ((wp->w_p_nu || wp->w_p_rnu) && vim_strchr(p_cpo, CPO_NUMCOL) != NULL)
	return number_width(wp) + 1;
    return 0;
}

    int
curwin_col_off2(void)
{
    return win_col_off2(curwin);
}


    void
curs_columns(
    int		may_scroll)	
{
    int		diff;
    int		extra;		
    int		off_left, off_right;
    int		n;
    int		p_lines;
    int		width1;		
    int		width2 = 0;	
    int		new_leftcol;
    colnr_T	startcol;
    colnr_T	endcol;
    colnr_T	prev_skipcol;
    int	so = get_scrolloff_value();
    int	siso = get_sidescrolloff_value();
    int		did_sub_skipcol = FALSE;

    
    update_topline();

    
    if (!(curwin->w_valid & VALID_CROW))
	curs_rows(curwin);

#ifdef FEAT_PROP_POPUP
    
    curwin->w_virtcol_first_char = 0;
#endif

    
#ifdef FEAT_FOLDING
    if (curwin->w_cline_folded)
	
	startcol = curwin->w_virtcol = endcol = curwin->w_leftcol;
    else
#endif
	getvvcol(curwin, &curwin->w_cursor,
				&startcol, &(curwin->w_virtcol), &endcol);

    
    if (startcol > dollar_vcol)
	dollar_vcol = -1;

    extra = curwin_col_off();
    curwin->w_wcol = curwin->w_virtcol + extra;
    endcol += extra;

    
    curwin->w_wrow = curwin->w_cline_row;

    width1 = curwin->w_width - extra;
    if (width1 <= 0)
    {
	
	
	curwin->w_wcol = curwin->w_width - 1;
	if (curwin->w_p_wrap)
	    curwin->w_wrow = curwin->w_height - 1;
	else
	    curwin->w_wrow = curwin->w_height - 1 - curwin->w_empty_rows;
    }
    else if (curwin->w_p_wrap && curwin->w_width != 0)
    {
	width2 = width1 + curwin_col_off2();

	
	if (curwin->w_cursor.lnum == curwin->w_topline
		&& curwin->w_skipcol > 0
		&& curwin->w_wcol >= curwin->w_skipcol)
	{
	    
	    
	    
	    if (curwin->w_skipcol <= width1)
		curwin->w_wcol -= width2;
	    else
		curwin->w_wcol -= width2
			       * (((curwin->w_skipcol - width1) / width2) + 1);

	    did_sub_skipcol = TRUE;
	}

	
	if (curwin->w_wcol >= curwin->w_width)
	{
	    
	    n = (curwin->w_wcol - curwin->w_width) / width2 + 1;
	    curwin->w_wcol -= n * width2;
	    curwin->w_wrow += n;
	}
    }

    
    
    
    else if (may_scroll
#ifdef FEAT_FOLDING
	    && !curwin->w_cline_folded
#endif
	    )
    {
#ifdef FEAT_PROP_POPUP
	if (curwin->w_virtcol_first_char > 0)
	{
	    int cols = (curwin->w_width - extra);
	    int rows = cols > 0 ? curwin->w_virtcol_first_char / cols : 1;

	    
	    curwin->w_wrow += rows;
	    curwin->w_wcol -= rows * cols;
	    endcol -= rows * cols;
	    curwin->w_cline_height = rows + 1;
	}
#endif
	
	off_left = (int)startcol - (int)curwin->w_leftcol - siso;
	off_right = (int)endcol - (int)(curwin->w_leftcol + curwin->w_width
								- siso) + 1;
	if (off_left < 0 || off_right > 0)
	{
	    if (off_left < 0)
		diff = -off_left;
	    else
		diff = off_right;

	    
	    
	    if (p_ss == 0 || diff >= width1 / 2 || off_right >= off_left)
		new_leftcol = curwin->w_wcol - extra - width1 / 2;
	    else
	    {
		if (diff < p_ss)
		    diff = p_ss;
		if (off_left < 0)
		    new_leftcol = curwin->w_leftcol - diff;
		else
		    new_leftcol = curwin->w_leftcol + diff;
	    }
	    if (new_leftcol < 0)
		new_leftcol = 0;
	    if (new_leftcol != (int)curwin->w_leftcol)
	    {
		curwin->w_leftcol = new_leftcol;
		
		redraw_later(UPD_NOT_VALID);
	    }
	}
	curwin->w_wcol -= curwin->w_leftcol;
    }
    else if (curwin->w_wcol > (int)curwin->w_leftcol)
	curwin->w_wcol -= curwin->w_leftcol;
    else
	curwin->w_wcol = 0;

#ifdef FEAT_DIFF
    
    
    if (curwin->w_cursor.lnum == curwin->w_topline)
	curwin->w_wrow += curwin->w_topfill;
    else
	curwin->w_wrow += diff_check_fill(curwin, curwin->w_cursor.lnum);
#endif

    prev_skipcol = curwin->w_skipcol;

    p_lines = 0;

    if ((curwin->w_wrow >= curwin->w_height
		|| ((prev_skipcol > 0
			|| curwin->w_wrow + so >= curwin->w_height)
		    && (p_lines =
#ifdef FEAT_DIFF
			plines_win_nofill
#else
			plines_win
#endif
			(curwin, curwin->w_cursor.lnum, FALSE))
						    - 1 >= curwin->w_height))
	    && curwin->w_height != 0
	    && curwin->w_cursor.lnum == curwin->w_topline
	    && width2 > 0
	    && curwin->w_width != 0)
    {
	
	
	
	
	
	
	extra = 0;
	if (curwin->w_skipcol + so * width2 > curwin->w_virtcol)
	    extra = 1;
	
	
	if (p_lines == 0)
	    p_lines = plines_win(curwin, curwin->w_cursor.lnum, FALSE);
	--p_lines;
	if (p_lines > curwin->w_wrow + so)
	    n = curwin->w_wrow + so;
	else
	    n = p_lines;
	if ((colnr_T)n >= curwin->w_height + curwin->w_skipcol / width2 - so)
	    extra += 2;

	if (extra == 3 || curwin->w_height <= so * 2)
	{
	    
	    n = curwin->w_virtcol / width2;
	    if (n > curwin->w_height / 2)
		n -= curwin->w_height / 2;
	    else
		n = 0;
	    
	    if (n > p_lines - curwin->w_height + 1)
		n = p_lines - curwin->w_height + 1;
	    if (n > 0)
		curwin->w_skipcol = width1 + (n - 1) * width2;
	    else
		curwin->w_skipcol = 0;
	}
	else if (extra == 1)
	{
	    
	    extra = (curwin->w_skipcol + so * width2 - curwin->w_virtcol
				     + width2 - 1) / width2;
	    if (extra > 0)
	    {
		if ((colnr_T)(extra * width2) > curwin->w_skipcol)
		    extra = curwin->w_skipcol / width2;
		curwin->w_skipcol -= extra * width2;
	    }
	}
	else if (extra == 2)
	{
	    
	    endcol = (n - curwin->w_height + 1) * width2;
	    while (endcol > curwin->w_virtcol)
		endcol -= width2;
	    if (endcol > curwin->w_skipcol)
		curwin->w_skipcol = endcol;
	}

	
	if (did_sub_skipcol)
	    curwin->w_wrow -= (curwin->w_skipcol - prev_skipcol) / width2;
	else
	    curwin->w_wrow -= curwin->w_skipcol / width2;

	if (curwin->w_wrow >= curwin->w_height)
	{
	    
	    extra = curwin->w_wrow - curwin->w_height + 1;
	    curwin->w_skipcol += extra * width2;
	    curwin->w_wrow -= extra;
	}

	extra = ((int)prev_skipcol - (int)curwin->w_skipcol) / width2;
	if (extra > 0)
	    win_ins_lines(curwin, 0, extra, FALSE, FALSE);
	else if (extra < 0)
	    win_del_lines(curwin, 0, -extra, FALSE, FALSE, 0);
    }
    else if (!curwin->w_p_sms)
	curwin->w_skipcol = 0;
    if (prev_skipcol != curwin->w_skipcol)
	redraw_later(UPD_SOME_VALID);

#ifdef FEAT_SYN_HL
    redraw_for_cursorcolumn(curwin);
#endif
#if defined(FEAT_PROP_POPUP) && defined(FEAT_TERMINAL)
    if (popup_is_popup(curwin) && curbuf->b_term != NULL)
    {
	curwin->w_wrow += popup_top_extra(curwin);
	curwin->w_wcol += popup_left_extra(curwin);
	curwin->w_flags |= WFLAG_WCOL_OFF_ADDED + WFLAG_WROW_OFF_ADDED;
    }
    else
	curwin->w_flags &= ~(WFLAG_WCOL_OFF_ADDED + WFLAG_WROW_OFF_ADDED);
#endif

    
    
    curwin->w_valid_leftcol = curwin->w_leftcol;
    curwin->w_valid_skipcol = curwin->w_skipcol;

    curwin->w_valid |= VALID_WCOL|VALID_WROW|VALID_VIRTCOL;
}

#if (defined(FEAT_EVAL) || defined(FEAT_PROP_POPUP)) || defined(PROTO)

    void
textpos2screenpos(
	win_T	*wp,
	pos_T	*pos,
	int	*rowp,	
	int	*scolp,	
	int	*ccolp,	
	int	*ecolp)	
{
    colnr_T	scol = 0, ccol = 0, ecol = 0;
    int		row = 0;
    colnr_T	coloff = 0;

    if (pos->lnum >= wp->w_topline && pos->lnum <= wp->w_botline)
    {
	colnr_T	    col;
	int	    width;
	linenr_T    lnum = pos->lnum;
#ifdef FEAT_FOLDING
	int	    is_folded;

	is_folded = hasFoldingWin(wp, lnum, &lnum, NULL, TRUE, NULL);
#endif
	row = plines_m_win(wp, wp->w_topline, lnum - 1, INT_MAX);
	
	
	row -= adjust_plines_for_skipcol(wp);

#ifdef FEAT_DIFF
	
	row += lnum == wp->w_topline ? wp->w_topfill
				     : diff_check_fill(wp, lnum);
#endif

	colnr_T	off = win_col_off(wp);
#ifdef FEAT_FOLDING
	if (is_folded)
	{
	    row += W_WINROW(wp) + 1;
	    coloff = wp->w_wincol + 1 + off;
	}
	else
#endif
	{
	    getvcol(wp, pos, &scol, &ccol, &ecol);

	    
	    col = scol;
	    col += off;
	    width = wp->w_width - off + win_col_off2(wp);

	    
	    if (wp->w_p_wrap
		    && col >= (colnr_T)wp->w_width
		    && width > 0)
	    {
		
		int rowoff = ((col - wp->w_width) / width + 1);
		col -= rowoff * width;
		row += rowoff;
	    }
	    col -= wp->w_leftcol;
	    if (col >= wp->w_width)
		col = -1;
	    if (col >= 0 && row >= 0 && row < wp->w_height)
	    {
		coloff = col - scol + wp->w_wincol + 1;
		row += W_WINROW(wp) + 1;
	    }
	    else
		
		row = scol = ccol = ecol = 0;
	}
    }
    *rowp = row;
    *scolp = scol + coloff;
    *ccolp = ccol + coloff;
    *ecolp = ecol + coloff;
}
#endif

#if defined(FEAT_EVAL) || defined(PROTO)

    void
f_screenpos(typval_T *argvars UNUSED, typval_T *rettv)
{
    dict_T	*dict;
    win_T	*wp;
    pos_T	pos;
    int		row = 0;
    int		scol = 0, ccol = 0, ecol = 0;

    if (rettv_dict_alloc(rettv) == FAIL)
	return;
    dict = rettv->vval.v_dict;

    if (in_vim9script()
	    && (check_for_number_arg(argvars, 0) == FAIL
		|| check_for_number_arg(argvars, 1) == FAIL
		|| check_for_number_arg(argvars, 2) == FAIL))
	return;

    wp = find_win_by_nr_or_id(&argvars[0]);
    if (wp == NULL)
	return;

    pos.lnum = tv_get_number(&argvars[1]);
    if (pos.lnum > wp->w_buffer->b_ml.ml_line_count)
    {
	semsg(_(e_invalid_line_number_nr), pos.lnum);
	return;
    }
    pos.col = tv_get_number(&argvars[2]) - 1;
    if (pos.col < 0)
	pos.col = 0;
    pos.coladd = 0;
    textpos2screenpos(wp, &pos, &row, &scol, &ccol, &ecol);

    dict_add_number(dict, "row", row);
    dict_add_number(dict, "col", scol);
    dict_add_number(dict, "curscol", ccol);
    dict_add_number(dict, "endcol", ecol);
}


    static int
virtcol2col(win_T *wp, linenr_T lnum, int vcol)
{
    int		offset = vcol2col(wp, lnum, vcol - 1, NULL);
    char_u	*line = ml_get_buf(wp->w_buffer, lnum, FALSE);
    char_u	*p = line + offset;

    if (*p == NUL)
    {
	if (p == line)  
	    return 0;
	
	MB_PTR_BACK(line, p);
    }
    return (int)(p - line + 1);
}


    void
f_virtcol2col(typval_T *argvars UNUSED, typval_T *rettv)
{
    win_T	*wp;
    linenr_T	lnum;
    int		screencol;
    int		error = FALSE;

    rettv->vval.v_number = -1;

    if (check_for_number_arg(argvars, 0) == FAIL
	    || check_for_number_arg(argvars, 1) == FAIL
	    || check_for_number_arg(argvars, 2) == FAIL)
	return;

    wp = find_win_by_nr_or_id(&argvars[0]);
    if (wp == NULL)
	return;

    lnum = tv_get_number_chk(&argvars[1], &error);
    if (error || lnum < 0 || lnum > wp->w_buffer->b_ml.ml_line_count)
	return;

    screencol = tv_get_number_chk(&argvars[2], &error);
    if (error || screencol < 0)
	return;

    rettv->vval.v_number = virtcol2col(wp, lnum, screencol);
}
#endif


static void cursor_correct_sms(void)
{
    if (!curwin->w_p_sms ||!curwin->w_p_wrap
	|| curwin->w_cursor.lnum != curwin->w_topline)
	return;

    int    so = get_scrolloff_value();
    int	    width1 = curwin->w_width - curwin_col_off();
    int	    width2 = width1 + curwin_col_off2();
    int	    so_cols = so == 0 ? 0 : width1 + (so - 1) * width2;
    int	    space_cols = (curwin->w_height - 1) * width2;
    int	    overlap, top, bot;
    int	    size = so == 0 ? 0 : win_linetabsize(curwin, curwin->w_topline,
				    ml_get(curwin->w_topline), (colnr_T)MAXCOL);

    if (curwin->w_topline == 1 && curwin->w_skipcol == 0)
	so_cols = 0;               
    else if (so_cols > space_cols / 2)
	so_cols = space_cols / 2;  

    
    while (so_cols > size && so_cols - width2 >= width1 && width1 > 0)
	so_cols -= width2;
    if (so_cols >= width1 && so_cols > size)
	so_cols -= width1;

    
    overlap = (curwin->w_skipcol == 0 || so_cols != 0) ? 0
					    : sms_marker_overlap(curwin, -1);
    top = curwin->w_skipcol + overlap + so_cols;
    bot = curwin->w_skipcol + width1 + (curwin->w_height - 1) * width2
								    - so_cols;
    validate_virtcol();
    colnr_T col = curwin->w_virtcol;

    if (col < top)
    {
	if (col < width1)
	    col += width1;
	while (width2 > 0 && col < top)
	    col += width2;
    }
    else
	while (width2 > 0 && col >= bot)
	    col -= width2;

    if (col != curwin->w_virtcol)
    {
	curwin->w_curswant = col;
	coladvance(curwin->w_curswant);
	
	
	curwin->w_valid &=
	    ~(VALID_WROW|VALID_WCOL|VALID_CHEIGHT|VALID_CROW|VALID_VIRTCOL);
    }
}


    void
scroll_redraw(int up, int count)
{
    linenr_T	prev_topline = curwin->w_topline;
    int		prev_skipcol = curwin->w_skipcol;
#ifdef FEAT_DIFF
    int		prev_topfill = curwin->w_topfill;
#endif
    linenr_T	prev_lnum = curwin->w_cursor.lnum;

    if (up)
	scrollup(count, TRUE);
    else
	scrolldown(count, TRUE);
    if (get_scrolloff_value() > 0)
    {
	
	
	cursor_correct();
	check_cursor_moved(curwin);
	curwin->w_valid |= VALID_TOPLINE;

	
	
	
	while (curwin->w_topline == prev_topline
		&& curwin->w_skipcol == prev_skipcol
#ifdef FEAT_DIFF
		&& curwin->w_topfill == prev_topfill
#endif
		)
	{
	    if (up)
	    {
		if (curwin->w_cursor.lnum > prev_lnum
			|| cursor_down(1L, FALSE) == FAIL)
		    break;
	    }
	    else
	    {
		if (curwin->w_cursor.lnum < prev_lnum
			|| prev_topline == 1L
			|| cursor_up(1L, FALSE) == FAIL)
		    break;
	    }
	    
	    
	    check_cursor_moved(curwin);
	    curwin->w_valid |= VALID_TOPLINE;
	}
    }

    cursor_correct_sms();
    if (curwin->w_cursor.lnum != prev_lnum)
	coladvance(curwin->w_curswant);
    redraw_later(UPD_VALID);
}


    void
scrolldown(
    int	line_count,
    int		byfold UNUSED)	
{
    int	done = 0;	
    int		wrow;
    int		moved = FALSE;
    int		do_sms = curwin->w_p_wrap && curwin->w_p_sms;
    int		width1 = 0;
    int		width2 = 0;

    if (do_sms)
    {
	width1 = curwin->w_width - curwin_col_off();
	width2 = width1 + curwin_col_off2();
    }

#ifdef FEAT_FOLDING
    linenr_T	first;

    
    (void)hasFolding(curwin->w_topline, &curwin->w_topline, NULL);
#endif
    validate_cursor();		
    for (int todo = line_count; todo > 0; --todo)
    {
#ifdef FEAT_DIFF
	if (curwin->w_topfill < diff_check(curwin, curwin->w_topline)
		&& curwin->w_topfill < curwin->w_height - 1)
	{
	    ++curwin->w_topfill;
	    ++done;
	}
	else
#endif
	{
	    
	    if (curwin->w_topline == 1
				   && (!do_sms || curwin->w_skipcol < width1))
		break;
	    if (do_sms && curwin->w_skipcol >= width1)
	    {
		
		if (curwin->w_skipcol >= width1 + width2)
		    curwin->w_skipcol -= width2;
		else
		    curwin->w_skipcol -= width1;
		redraw_later(UPD_NOT_VALID);
		++done;
	    }
	    else
	    {
		
		--curwin->w_topline;
		curwin->w_skipcol = 0;
#ifdef FEAT_DIFF
		curwin->w_topfill = 0;
#endif
#ifdef FEAT_FOLDING
		
		if (hasFolding(curwin->w_topline, &first, NULL))
		{
		    ++done;
		    if (!byfold)
			todo -= curwin->w_topline - first - 1;
		    curwin->w_botline -= curwin->w_topline - first;
		    curwin->w_topline = first;
		}
		else
#endif
		if (do_sms)
		{
		    int size = win_linetabsize(curwin, curwin->w_topline,
				   ml_get(curwin->w_topline), (colnr_T)MAXCOL);
		    if (size > width1)
		    {
			curwin->w_skipcol = width1;
			size -= width1;
			redraw_later(UPD_NOT_VALID);
		    }
		    while (size > width2)
		    {
			curwin->w_skipcol += width2;
			size -= width2;
		    }
		    ++done;
		}
		else
		    done += PLINES_NOFILL(curwin->w_topline);
	    }
	}
	--curwin->w_botline;		
	invalidate_botline();
    }
    curwin->w_wrow += done;		
    curwin->w_cline_row += done;	

#ifdef FEAT_DIFF
    if (curwin->w_cursor.lnum == curwin->w_topline)
	curwin->w_cline_row = 0;
    check_topfill(curwin, TRUE);
#endif

    
    wrow = curwin->w_wrow;
    if (curwin->w_p_wrap && curwin->w_width != 0)
    {
	validate_virtcol();
	validate_cheight();
	wrow += curwin->w_cline_height - 1 -
	    curwin->w_virtcol / curwin->w_width;
    }
    while (wrow >= curwin->w_height && curwin->w_cursor.lnum > 1)
    {
#ifdef FEAT_FOLDING
	if (hasFolding(curwin->w_cursor.lnum, &first, NULL))
	{
	    --wrow;
	    if (first == 1)
		curwin->w_cursor.lnum = 1;
	    else
		curwin->w_cursor.lnum = first - 1;
	}
	else
#endif
	    wrow -= plines(curwin->w_cursor.lnum--);
	curwin->w_valid &=
	      ~(VALID_WROW|VALID_WCOL|VALID_CHEIGHT|VALID_CROW|VALID_VIRTCOL);
	moved = TRUE;
    }
    if (moved)
    {
#ifdef FEAT_FOLDING
	
	foldAdjustCursor();
#endif
	coladvance(curwin->w_curswant);
    }
    if (curwin->w_cursor.lnum < curwin->w_topline)
	curwin->w_cursor.lnum = curwin->w_topline;
}


    void
scrollup(
    int	line_count,
    int		byfold UNUSED)	
{
    int		do_sms = curwin->w_p_wrap && curwin->w_p_sms;

    if (do_sms
# ifdef FEAT_FOLDING
	    || (byfold && hasAnyFolding(curwin))
# endif
# ifdef FEAT_DIFF
	    || (curwin->w_p_diff && !curwin->w_p_wrap)
# endif
       )
    {
	int	    width1 = curwin->w_width - curwin_col_off();
	int	    width2 = width1 + curwin_col_off2();
	int	    size = 0;
	colnr_T	    prev_skipcol = curwin->w_skipcol;

	if (do_sms)
	    size = linetabsize(curwin, curwin->w_topline);

	
	
	
	
	for (int todo = line_count; todo > 0; --todo)
	{
# ifdef FEAT_DIFF
	    if (curwin->w_topfill > 0)
		--curwin->w_topfill;
	    else
# endif
	    {
		linenr_T lnum = curwin->w_topline;

# ifdef FEAT_FOLDING
		if (byfold)
		    
		    (void)hasFolding(lnum, NULL, &lnum);
# endif
		if (lnum == curwin->w_topline && do_sms)
		{
		    
		    
		    int add = curwin->w_skipcol > 0 ? width2 : width1;
		    curwin->w_skipcol += add;
		    if (curwin->w_skipcol >= size)
		    {
			if (lnum == curbuf->b_ml.ml_line_count)
			{
			    
			    curwin->w_skipcol -= add;
			    break;
			}
			++lnum;
		    }
		}
		else
		{
		    if (lnum >= curbuf->b_ml.ml_line_count)
			break;
		    ++lnum;
		}

		if (lnum > curwin->w_topline)
		{
		    
		    curwin->w_botline += lnum - curwin->w_topline;
		    curwin->w_topline = lnum;
# ifdef FEAT_DIFF
		    curwin->w_topfill = diff_check_fill(curwin, lnum);
# endif
		    curwin->w_skipcol = 0;
		    if (todo > 1 && do_sms)
			size = linetabsize(curwin, curwin->w_topline);
		}
	    }
	}

	if (prev_skipcol > 0 || curwin->w_skipcol > 0)
	    
	    
	    redraw_later(UPD_NOT_VALID);
    }
    else
    {
	curwin->w_topline += line_count;
	curwin->w_botline += line_count;	
    }

    if (curwin->w_topline > curbuf->b_ml.ml_line_count)
	curwin->w_topline = curbuf->b_ml.ml_line_count;
    if (curwin->w_botline > curbuf->b_ml.ml_line_count + 1)
	curwin->w_botline = curbuf->b_ml.ml_line_count + 1;

#ifdef FEAT_DIFF
    check_topfill(curwin, FALSE);
#endif

#ifdef FEAT_FOLDING
    if (hasAnyFolding(curwin))
	
	(void)hasFolding(curwin->w_topline, &curwin->w_topline, NULL);
#endif

    curwin->w_valid &= ~(VALID_WROW|VALID_CROW|VALID_BOTLINE);
    if (curwin->w_cursor.lnum < curwin->w_topline)
    {
	curwin->w_cursor.lnum = curwin->w_topline;
	curwin->w_valid &=
	      ~(VALID_WROW|VALID_WCOL|VALID_CHEIGHT|VALID_CROW|VALID_VIRTCOL);
	coladvance(curwin->w_curswant);
    }
}


    void
adjust_skipcol(void)
{
    if (!curwin->w_p_wrap
	    || !curwin->w_p_sms
	    || curwin->w_cursor.lnum != curwin->w_topline)
	return;

    int	    width1 = curwin->w_width - curwin_col_off();
    if (width1 <= 0)
	return;  

    int	    width2 = width1 + curwin_col_off2();
    int    so = get_scrolloff_value();
    int	    scrolloff_cols = so == 0 ? 0 : width1 + (so - 1) * width2;
    int	    scrolled = FALSE;
    int	    row = 0;
    int	    overlap, col;

    validate_cheight();
    if (curwin->w_cline_height == curwin->w_height
	    
	    
	    && plines_win(curwin, curwin->w_cursor.lnum, FALSE)
							   <= curwin->w_height)
    {
	
	reset_skipcol();
	return;
    }

    validate_virtcol();
    overlap = sms_marker_overlap(curwin, -1);
    while (curwin->w_skipcol > 0
	    && curwin->w_virtcol < curwin->w_skipcol + overlap + scrolloff_cols)
    {
	
	if (curwin->w_skipcol >= width1 + width2)
	    curwin->w_skipcol -= width2;
	else
	    curwin->w_skipcol -= width1;
	scrolled = TRUE;
    }
    if (scrolled)
    {
	validate_virtcol();
	redraw_later(UPD_NOT_VALID);
	return;  
    }

    col = curwin->w_virtcol + scrolloff_cols;

    
    if (scrolloff_cols > 0)
    {
	int size = win_linetabsize(curwin, curwin->w_topline,
				    ml_get(curwin->w_topline), (colnr_T)MAXCOL);
	size = width1 + width2 * ((size - width1 + width2 - 1) / width2);
	while (col > size)
	    col -= width2;
    }
    col -= curwin->w_skipcol;

    if (col >= width1)
    {
	col -= width1;
	++row;
    }
    if (col > width2)
    {
	row += col / width2;
	
	
	col = col % width2;
    }
    if (row >= curwin->w_height)
    {
	if (curwin->w_skipcol == 0)
	{
	    curwin->w_skipcol += width1;
	    --row;
	}
	if (row >= curwin->w_height)
	    curwin->w_skipcol += (row - curwin->w_height) * width2;
	redraw_later(UPD_NOT_VALID);
    }
}

#ifdef FEAT_DIFF

    void
check_topfill(
    win_T	*wp,
    int		down)	
{
    int		n;

    if (wp->w_topfill <= 0)
	return;

    n = plines_win_nofill(wp, wp->w_topline, TRUE);
    if (wp->w_topfill + n > wp->w_height)
    {
	if (down && wp->w_topline > 1)
	{
	    --wp->w_topline;
	    wp->w_topfill = 0;
	}
	else
	{
	    wp->w_topfill = wp->w_height - n;
	    if (wp->w_topfill < 0)
		wp->w_topfill = 0;
	}
    }
}
#endif


    void
scrolldown_clamp(void)
{
    int		end_row;
#ifdef FEAT_DIFF
    int		can_fill = (curwin->w_topfill
				< diff_check_fill(curwin, curwin->w_topline));
#endif

    if (curwin->w_topline <= 1
#ifdef FEAT_DIFF
	    && !can_fill
#endif
	    )
	return;

    validate_cursor();	    

    
    end_row = curwin->w_wrow;
#ifdef FEAT_DIFF
    if (can_fill)
	++end_row;
    else
	end_row += plines_nofill(curwin->w_topline - 1);
#else
    end_row += plines(curwin->w_topline - 1);
#endif
    if (curwin->w_p_wrap && curwin->w_width != 0)
    {
	validate_cheight();
	validate_virtcol();
	end_row += curwin->w_cline_height - 1 -
	    curwin->w_virtcol / curwin->w_width;
    }
    if (end_row < curwin->w_height - get_scrolloff_value())
    {
#ifdef FEAT_DIFF
	if (can_fill)
	{
	    ++curwin->w_topfill;
	    check_topfill(curwin, TRUE);
	}
	else
	{
	    --curwin->w_topline;
	    curwin->w_topfill = 0;
	}
#else
	--curwin->w_topline;
#endif
#ifdef FEAT_FOLDING
	(void)hasFolding(curwin->w_topline, &curwin->w_topline, NULL);
#endif
	--curwin->w_botline;	    
	curwin->w_valid &= ~(VALID_WROW|VALID_CROW|VALID_BOTLINE);
    }
}


    void
scrollup_clamp(void)
{
    int	    start_row;

    if (curwin->w_topline == curbuf->b_ml.ml_line_count
#ifdef FEAT_DIFF
	    && curwin->w_topfill == 0
#endif
	    )
	return;

    validate_cursor();	    

    
#ifdef FEAT_DIFF
    start_row = curwin->w_wrow - plines_nofill(curwin->w_topline)
							  - curwin->w_topfill;
#else
    start_row = curwin->w_wrow - plines(curwin->w_topline);
#endif
    if (curwin->w_p_wrap && curwin->w_width != 0)
    {
	validate_virtcol();
	start_row -= curwin->w_virtcol / curwin->w_width;
    }
    if (start_row >= get_scrolloff_value())
    {
#ifdef FEAT_DIFF
	if (curwin->w_topfill > 0)
	    --curwin->w_topfill;
	else
#endif
	{
#ifdef FEAT_FOLDING
	    (void)hasFolding(curwin->w_topline, NULL, &curwin->w_topline);
#endif
	    ++curwin->w_topline;
	}
	++curwin->w_botline;		
	curwin->w_valid &= ~(VALID_WROW|VALID_CROW|VALID_BOTLINE);
    }
}


    static void
topline_back_winheight(
    lineoff_T	*lp,
    int		winheight)	
{
#ifdef FEAT_DIFF
    if (lp->fill < diff_check_fill(curwin, lp->lnum))
    {
	
	++lp->fill;
	lp->height = 1;
    }
    else
#endif
    {
	--lp->lnum;
#ifdef FEAT_DIFF
	lp->fill = 0;
#endif
	if (lp->lnum < 1)
	    lp->height = MAXCOL;
	else
#ifdef FEAT_FOLDING
	    if (hasFolding(lp->lnum, &lp->lnum, NULL))
	    
	    lp->height = 1;
	else
#endif
	    lp->height = PLINES_WIN_NOFILL(curwin, lp->lnum, winheight);
    }
}

    static void
topline_back(lineoff_T *lp)
{
    topline_back_winheight(lp, TRUE);
}



    static void
botline_forw(lineoff_T *lp)
{
#ifdef FEAT_DIFF
    if (lp->fill < diff_check_fill(curwin, lp->lnum + 1))
    {
	
	++lp->fill;
	lp->height = 1;
    }
    else
#endif
    {
	++lp->lnum;
#ifdef FEAT_DIFF
	lp->fill = 0;
#endif
	if (lp->lnum > curbuf->b_ml.ml_line_count)
	    lp->height = MAXCOL;
	else
#ifdef FEAT_FOLDING
	    if (hasFolding(lp->lnum, NULL, &lp->lnum))
	    
	    lp->height = 1;
	else
#endif
	    lp->height = PLINES_NOFILL(lp->lnum);
    }
}


    void
scroll_cursor_top(int min_scroll, int always)
{
    int		scrolled = 0;
    int		extra = 0;
    int		used;
    int		i;
    linenr_T	top;		
    linenr_T	bot;		
    linenr_T	old_topline = curwin->w_topline;
    int		old_skipcol = curwin->w_skipcol;
#ifdef FEAT_DIFF
    linenr_T	old_topfill = curwin->w_topfill;
#endif
    linenr_T	new_topline;
    int		off = get_scrolloff_value();

    if (mouse_dragging > 0)
	off = mouse_dragging - 1;

    
    validate_cheight();
    used = curwin->w_cline_height; 
    if (curwin->w_cursor.lnum < curwin->w_topline)
	scrolled = used;

#ifdef FEAT_FOLDING
    if (hasFolding(curwin->w_cursor.lnum, &top, &bot))
    {
	--top;
	++bot;
    }
    else
#endif
    {
	top = curwin->w_cursor.lnum - 1;
	bot = curwin->w_cursor.lnum + 1;
    }
    new_topline = top + 1;

#ifdef FEAT_DIFF
    
    
    
    extra += diff_check_fill(curwin, curwin->w_cursor.lnum);
#endif

    
    while (top > 0)
    {
#ifdef FEAT_FOLDING
	if (hasFolding(top, &top, NULL))
	    
	    i = 1;
	else
#endif
	    i = PLINES_NOFILL(top);
	if (top < curwin->w_topline)
	    scrolled += i;

	
	if ((new_topline >= curwin->w_topline || scrolled > min_scroll)
		&& extra >= off)
	    break;

	used += i;
	if (extra + i <= off && bot < curbuf->b_ml.ml_line_count)
	{
#ifdef FEAT_FOLDING
	    if (hasFolding(bot, NULL, &bot))
		
		++used;
	    else
#endif
		used += plines(bot);
	}
	if (used > curwin->w_height)
	    break;

	extra += i;
	new_topline = top;
	--top;
	++bot;
    }

    
    if (used > curwin->w_height)
	scroll_cursor_halfway(FALSE, FALSE);
    else
    {
	
	if (new_topline < curwin->w_topline || always)
	    curwin->w_topline = new_topline;
	if (curwin->w_topline > curwin->w_cursor.lnum)
	    curwin->w_topline = curwin->w_cursor.lnum;
#ifdef FEAT_DIFF
	curwin->w_topfill = diff_check_fill(curwin, curwin->w_topline);
	if (curwin->w_topfill > 0 && extra > off)
	{
	    curwin->w_topfill -= extra - off;
	    if (curwin->w_topfill < 0)
		curwin->w_topfill = 0;
	}
	check_topfill(curwin, FALSE);
#endif
	if (curwin->w_topline != old_topline)
	    reset_skipcol();
	else if (curwin->w_topline == curwin->w_cursor.lnum)
	{
	    validate_virtcol();
	    if (curwin->w_skipcol >= curwin->w_virtcol)
		
		
		reset_skipcol();
	}
	if (curwin->w_topline != old_topline
		|| curwin->w_skipcol != old_skipcol
#ifdef FEAT_DIFF
		|| curwin->w_topfill != old_topfill
#endif
		)
	    curwin->w_valid &=
		      ~(VALID_WROW|VALID_CROW|VALID_BOTLINE|VALID_BOTLINE_AP);
	curwin->w_valid |= VALID_TOPLINE;
    }
}


    void
set_empty_rows(win_T *wp, int used)
{
#ifdef FEAT_DIFF
    wp->w_filler_rows = 0;
#endif
    if (used == 0)
	wp->w_empty_rows = 0;	
    else
    {
	wp->w_empty_rows = wp->w_height - used;
#ifdef FEAT_DIFF
	if (wp->w_botline <= wp->w_buffer->b_ml.ml_line_count)
	{
	    wp->w_filler_rows = diff_check_fill(wp, wp->w_botline);
	    if (wp->w_empty_rows > wp->w_filler_rows)
		wp->w_empty_rows -= wp->w_filler_rows;
	    else
	    {
		wp->w_filler_rows = wp->w_empty_rows;
		wp->w_empty_rows = 0;
	    }
	}
#endif
    }
}


    void
scroll_cursor_bot(int min_scroll, int set_topbot)
{
    int		used;
    int		scrolled = 0;
    int		extra = 0;
    int		i;
    linenr_T	line_count;
    linenr_T	old_topline = curwin->w_topline;
    int		old_skipcol = curwin->w_skipcol;
    lineoff_T	loff;
    lineoff_T	boff;
#ifdef FEAT_DIFF
    int		old_topfill = curwin->w_topfill;
    int		fill_below_window;
#endif
    linenr_T	old_botline = curwin->w_botline;
    linenr_T	old_valid = curwin->w_valid;
    int		old_empty_rows = curwin->w_empty_rows;
    linenr_T	cln;		    
    int	so = get_scrolloff_value();
    int		do_sms = curwin->w_p_wrap && curwin->w_p_sms;

    cln = curwin->w_cursor.lnum;
    if (set_topbot)
    {
	used = 0;
	curwin->w_botline = cln + 1;
	loff.lnum = cln + 1;
#ifdef FEAT_DIFF
	loff.fill = 0;
#endif
	while (TRUE)
	{
	    topline_back_winheight(&loff, FALSE);
	    if (loff.height == MAXCOL)
		break;
	    if (used + loff.height > curwin->w_height)
	    {
		if (do_sms)
		{
		    
		    
		    
		    if (used < curwin->w_height)
		    {
			int plines_offset = used + loff.height
							    - curwin->w_height;
			used = curwin->w_height;
#ifdef FEAT_DIFF
			curwin->w_topfill = loff.fill;
#endif
			curwin->w_topline = loff.lnum;
			curwin->w_skipcol = skipcol_from_plines(
							curwin, plines_offset);
		    }
		}
		break;
	    }
#ifdef FEAT_DIFF
	    curwin->w_topfill = loff.fill;
#endif
	    curwin->w_topline = loff.lnum;
	    used += loff.height;
	}

	set_empty_rows(curwin, used);
	curwin->w_valid |= VALID_BOTLINE|VALID_BOTLINE_AP;
	if (curwin->w_topline != old_topline
#ifdef FEAT_DIFF
		|| curwin->w_topfill != old_topfill
#endif
		|| curwin->w_skipcol != old_skipcol
		|| curwin->w_skipcol != 0)
	{
	    curwin->w_valid &= ~(VALID_WROW|VALID_CROW);
	    if (curwin->w_skipcol != old_skipcol)
		redraw_later(UPD_NOT_VALID);
	    else
		reset_skipcol();
	}
    }
    else
	validate_botline();

    
#ifdef FEAT_DIFF
    used = plines_nofill(cln);
#else
    validate_cheight();
    used = curwin->w_cline_height;
#endif

    
    
    
    if (cln >= curwin->w_botline)
    {
	scrolled = used;
	if (cln == curwin->w_botline)
	    scrolled -= curwin->w_empty_rows;
	if (do_sms)
	{
	    
	    
	    
	    
	    
	    int top_plines =
#ifdef FEAT_DIFF
			    plines_win_nofill
#else
			    plines_win
#endif
					(curwin, curwin->w_topline, FALSE);
	    int width1 = curwin->w_width - curwin_col_off();

	    if (width1 > 0)
	    {
		int width2 = width1 + curwin_col_off2();
		int skip_lines = 0;

		
		if (curwin->w_skipcol > width1)
		    skip_lines += (curwin->w_skipcol - width1) / width2 + 1;
		else if (curwin->w_skipcol > 0)
		    skip_lines = 1;

		top_plines -= skip_lines;
		if (top_plines > curwin->w_height)
		{
		    scrolled += (top_plines - curwin->w_height);
		}
	    }
	}
    }

    
#ifdef FEAT_FOLDING
    if (!hasFolding(curwin->w_cursor.lnum, &loff.lnum, &boff.lnum))
#endif
    {
	loff.lnum = cln;
	boff.lnum = cln;
    }
#ifdef FEAT_DIFF
    loff.fill = 0;
    boff.fill = 0;
    fill_below_window = diff_check_fill(curwin, curwin->w_botline)
						      - curwin->w_filler_rows;
#endif

    while (loff.lnum > 1)
    {
	
	
	if ((((scrolled <= 0 || scrolled >= min_scroll)
		    && extra >= (mouse_dragging > 0 ? mouse_dragging - 1 : so))
		    || boff.lnum + 1 > curbuf->b_ml.ml_line_count)
		&& loff.lnum <= curwin->w_botline
#ifdef FEAT_DIFF
		&& (loff.lnum < curwin->w_botline
		    || loff.fill >= fill_below_window)
#endif
		)
	    break;

	
	topline_back(&loff);
	if (loff.height == MAXCOL)
	    used = MAXCOL;
	else
	    used += loff.height;
	if (used > curwin->w_height)
	    break;
	if (loff.lnum >= curwin->w_botline
#ifdef FEAT_DIFF
		&& (loff.lnum > curwin->w_botline
		    || loff.fill <= fill_below_window)
#endif
		)
	{
	    
	    scrolled += loff.height;
	    if (loff.lnum == curwin->w_botline
#ifdef FEAT_DIFF
			    && loff.fill == 0
#endif
		    )
		scrolled -= curwin->w_empty_rows;
	}

	if (boff.lnum < curbuf->b_ml.ml_line_count)
	{
	    
	    botline_forw(&boff);
	    used += boff.height;
	    if (used > curwin->w_height)
		break;
	    if (extra < ( mouse_dragging > 0 ? mouse_dragging - 1 : so)
		    || scrolled < min_scroll)
	    {
		extra += boff.height;
		if (boff.lnum >= curwin->w_botline
#ifdef FEAT_DIFF
			|| (boff.lnum + 1 == curwin->w_botline
			    && boff.fill > curwin->w_filler_rows)
#endif
		   )
		{
		    
		    scrolled += boff.height;
		    if (boff.lnum == curwin->w_botline
#ifdef FEAT_DIFF
			    && boff.fill == 0
#endif
			    )
			scrolled -= curwin->w_empty_rows;
		}
	    }
	}
    }

    
    if (scrolled <= 0)
	line_count = 0;
    
    else if (used > curwin->w_height)
	line_count = used;
    
    else
    {
	line_count = 0;
#ifdef FEAT_DIFF
	boff.fill = curwin->w_topfill;
#endif
	boff.lnum = curwin->w_topline - 1;
	for (i = 0; i < scrolled && boff.lnum < curwin->w_botline; )
	{
	    botline_forw(&boff);
	    i += boff.height;
	    ++line_count;
	}
	if (i < scrolled)	
	    line_count = 9999;
    }

    
    if (line_count >= curwin->w_height && line_count > min_scroll)
	scroll_cursor_halfway(FALSE, TRUE);
    else if (line_count > 0)
    {
	if (do_sms)
	    scrollup(scrolled, TRUE);  
	else
	    scrollup(line_count, TRUE);
    }

    
    if (curwin->w_topline == old_topline
	    && curwin->w_skipcol == old_skipcol
	    && set_topbot)
    {
	curwin->w_botline = old_botline;
	curwin->w_empty_rows = old_empty_rows;
	curwin->w_valid = old_valid;
    }
    curwin->w_valid |= VALID_TOPLINE;

    
    if (set_topbot)
	cursor_correct_sms();
}


    void
scroll_cursor_halfway(int atend, int prefer_above)
{
    int		above = 0;
    linenr_T	topline;
    colnr_T	skipcol = 0;
#ifdef FEAT_DIFF
    int		topfill = 0;
#endif
    int		below = 0;
    int		used;
    lineoff_T	loff;
    lineoff_T	boff;
#ifdef FEAT_DIFF
    linenr_T	old_topline = curwin->w_topline;
#endif

#ifdef FEAT_PROP_POPUP
    
    may_update_popup_position();
#endif
    loff.lnum = boff.lnum = curwin->w_cursor.lnum;
#ifdef FEAT_FOLDING
    (void)hasFolding(loff.lnum, &loff.lnum, &boff.lnum);
#endif
#ifdef FEAT_DIFF
    used = plines_nofill(loff.lnum);
    loff.fill = 0;
    boff.fill = 0;
#else
    used = plines(loff.lnum);
#endif
    topline = loff.lnum;

    int want_height;
    int do_sms = curwin->w_p_wrap && curwin->w_p_sms;
    if (do_sms)
    {
	
	if (atend)
	{
	    want_height = (curwin->w_height - used) / 2;
	    used = 0;
	}
	else
	    want_height = curwin->w_height;
    }

    while (topline > 1)
    {
	
	
	if (do_sms)
	{
	    topline_back_winheight(&loff, FALSE);
	    if (loff.height == MAXCOL)
		break;
	    used += loff.height;
	    if (!atend && boff.lnum < curbuf->b_ml.ml_line_count)
	    {
		botline_forw(&boff);
		used += boff.height;
	    }
	    if (used > want_height)
	    {
		if (used - loff.height < want_height)
		{
		    topline = loff.lnum;
#ifdef FEAT_DIFF
		    topfill = loff.fill;
#endif
		    skipcol = skipcol_from_plines(curwin, used - want_height);
		}
		break;
	    }
	    topline = loff.lnum;
#ifdef FEAT_DIFF
	    topfill = loff.fill;
#endif
	    continue;
	}

	
	
	
	

	
	
	int done = FALSE;
	for (int round = 1; round <= 2; ++round)
	{
	    if (prefer_above ? (round == 2 && below < above)
			     : (round == 1 && below <= above))
	    {
		
		if (boff.lnum < curbuf->b_ml.ml_line_count)
		{
		    botline_forw(&boff);
		    used += boff.height;
		    if (used > curwin->w_height)
		    {
			done = TRUE;
			break;
		    }
		    below += boff.height;
		}
		else
		{
		    ++below;	    
		    if (atend)
			++used;
		}
	    }

	    if (prefer_above ? (round == 1 && below >= above)
			     : (round == 1 && below > above))
	    {
		
		topline_back(&loff);
		if (loff.height == MAXCOL)
		    used = MAXCOL;
		else
		    used += loff.height;
		if (used > curwin->w_height)
		{
		    done = TRUE;
		    break;
		}
		above += loff.height;
		topline = loff.lnum;
#ifdef FEAT_DIFF
		topfill = loff.fill;
#endif
	    }
	}
	if (done)
	    break;
    }

#ifdef FEAT_FOLDING
    if (!hasFolding(topline, &curwin->w_topline, NULL))
#endif
    {
	if (curwin->w_topline != topline
		|| skipcol != 0
		|| curwin->w_skipcol != 0)
	{
	    curwin->w_topline = topline;
	    if (skipcol != 0)
	    {
		curwin->w_skipcol = skipcol;
		redraw_later(UPD_NOT_VALID);
	    }
	    else if (do_sms)
		reset_skipcol();
	}
    }
#ifdef FEAT_DIFF
    curwin->w_topfill = topfill;
    if (old_topline > curwin->w_topline + curwin->w_height)
	curwin->w_botfill = FALSE;
    check_topfill(curwin, FALSE);
#endif
    curwin->w_valid &= ~(VALID_WROW|VALID_CROW|VALID_BOTLINE|VALID_BOTLINE_AP);
    curwin->w_valid |= VALID_TOPLINE;
}


    void
cursor_correct(void)
{
    int		above = 0;	    
    linenr_T	topline;
    int		below = 0;	    
    linenr_T	botline;
    int		above_wanted, below_wanted;
    linenr_T	cln;		    
    int		max_off;
    int	so = get_scrolloff_value();

    
    above_wanted = so;
    below_wanted = so;
    if (mouse_dragging > 0)
    {
	above_wanted = mouse_dragging - 1;
	below_wanted = mouse_dragging - 1;
    }
    if (curwin->w_topline == 1)
    {
	above_wanted = 0;
	max_off = curwin->w_height / 2;
	if (below_wanted > max_off)
	    below_wanted = max_off;
    }
    validate_botline();
    if (curwin->w_botline == curbuf->b_ml.ml_line_count + 1
	    && mouse_dragging == 0)
    {
	below_wanted = 0;
	max_off = (curwin->w_height - 1) / 2;
	if (above_wanted > max_off)
	    above_wanted = max_off;
    }

    
    cln = curwin->w_cursor.lnum;
    if (cln >= curwin->w_topline + above_wanted
	    && cln < curwin->w_botline - below_wanted
#ifdef FEAT_FOLDING
	    && !hasAnyFolding(curwin)
#endif
	    )
	return;

    if (curwin->w_p_sms && !curwin->w_p_wrap)
    {
	
	if (curwin->w_cline_height == curwin->w_height)
	{
	    
	    reset_skipcol();
	    return;
	}
	
	
    }

    
    topline = curwin->w_topline;
    botline = curwin->w_botline - 1;
#ifdef FEAT_DIFF
    
    above = curwin->w_topfill;
    below = curwin->w_filler_rows;
#endif
    while ((above < above_wanted || below < below_wanted) && topline < botline)
    {
	if (below < below_wanted && (below <= above || above >= above_wanted))
	{
#ifdef FEAT_FOLDING
	    if (hasFolding(botline, &botline, NULL))
		++below;
	    else
#endif
		below += plines(botline);
	    --botline;
	}
	if (above < above_wanted && (above < below || below >= below_wanted))
	{
#ifdef FEAT_FOLDING
	    if (hasFolding(topline, NULL, &topline))
		++above;
	    else
#endif
		above += PLINES_NOFILL(topline);
#ifdef FEAT_DIFF
	    
	    if (topline < botline)
		above += diff_check_fill(curwin, topline + 1);
#endif
	    ++topline;
	}
    }
    if (topline == botline || botline == 0)
	curwin->w_cursor.lnum = topline;
    else if (topline > botline)
	curwin->w_cursor.lnum = botline;
    else
    {
	if (cln < topline && curwin->w_topline > 1)
	{
	    curwin->w_cursor.lnum = topline;
	    curwin->w_valid &=
			    ~(VALID_WROW|VALID_WCOL|VALID_CHEIGHT|VALID_CROW);
	}
	if (cln > botline && curwin->w_botline <= curbuf->b_ml.ml_line_count)
	{
	    curwin->w_cursor.lnum = botline;
	    curwin->w_valid &=
			    ~(VALID_WROW|VALID_WCOL|VALID_CHEIGHT|VALID_CROW);
	}
    }
    curwin->w_valid |= VALID_TOPLINE;
}


static int get_scroll_overlap(int dir)
{
    lineoff_T loff;
    int	    min_height = curwin->w_height - 2;

    validate_botline();
    if ((dir == BACKWARD && curwin->w_topline == 1)
	|| (dir == FORWARD && curwin->w_botline > curbuf->b_ml.ml_line_count))
	return min_height + 2;  

    loff.lnum = dir == FORWARD ? curwin->w_botline : curwin->w_topline - 1;
#ifdef FEAT_DIFF
    loff.fill = diff_check_fill(curwin, loff.lnum + (dir == BACKWARD))
		- (dir == FORWARD ? curwin->w_filler_rows : curwin->w_topfill);
    loff.height = loff.fill > 0 ? 1 : plines_nofill(loff.lnum);
#else
    loff.height = plines(loff.lnum);
#endif

    int h1 = loff.height;
    if (h1 > min_height)
	return min_height + 2;  
    if (dir == FORWARD)
	topline_back(&loff);
    else
	botline_forw(&loff);

    int h2 = loff.height;
    if (h2 == MAXCOL || h2 + h1 > min_height)
	return min_height + 2;  
    if (dir == FORWARD)
	topline_back(&loff);
    else
	botline_forw(&loff);

    int h3 = loff.height;
    if (h3 == MAXCOL || h3 + h2 > min_height)
	return min_height + 2;  
    if (dir == FORWARD)
	topline_back(&loff);
    else
	botline_forw(&loff);

    int h4 = loff.height;
    if (h4 == MAXCOL || h4 + h3 + h2 > min_height || h3 + h2 + h1 > min_height)
	return min_height + 1;  
    else
	return min_height;      
}


static int scroll_with_sms(int dir, int count, int *curscount)
{
    int		prev_sms = curwin->w_p_sms;
    colnr_T	prev_skipcol = curwin->w_skipcol;
    linenr_T	prev_topline = curwin->w_topline;
#ifdef FEAT_DIFF
    int		prev_topfill = curwin->w_topfill;
#endif

    curwin->w_p_sms = TRUE;
    scroll_redraw(dir == FORWARD, count);

    
    
    if (!prev_sms && curwin->w_skipcol > 0)
    {
	int fixdir = dir;
	
	
	if (labs(curwin->w_topline - prev_topline) > (dir == BACKWARD))
	    fixdir = dir * -1;
	while (curwin->w_skipcol > 0
	    && curwin->w_topline < curbuf->b_ml.ml_line_count)
	{
	    scroll_redraw(fixdir == FORWARD, 1);
	    *curscount += (fixdir == dir ? 1 : -1);
	}
    }
    curwin->w_p_sms = prev_sms;

    return curwin->w_topline == prev_topline
#ifdef FEAT_DIFF
	&& curwin->w_topfill == prev_topfill
#endif
	&& curwin->w_skipcol == prev_skipcol;
}


    int
pagescroll(int dir, int count, int half)
{
    int		nochange = TRUE;
    int		buflen = curbuf->b_ml.ml_line_count;
    colnr_T	prev_col = curwin->w_cursor.col;
    colnr_T	prev_curswant = curwin->w_curswant;
    linenr_T	prev_lnum = curwin->w_cursor.lnum;
    oparg_T	oa = { 0 };
    cmdarg_T	ca = { 0 };
    ca.oap = &oa;

    if (half)
    {
	
	if (count)
	    curwin->w_p_scr = MIN(curwin->w_height, count);
	count = MIN(curwin->w_height, curwin->w_p_scr);

	int curscount = count;
	
	if (dir == FORWARD
		    && (curwin->w_topline + curwin->w_height + count > buflen
#ifdef FEAT_FOLDING
							|| hasAnyFolding(curwin)
#endif
	   ))
	{
	    int n = plines_correct_topline(curwin, curwin->w_topline, FALSE);
	    if (n - count < curwin->w_height && curwin->w_topline < buflen)
		n += plines_m_win(curwin, curwin->w_topline + 1, buflen,
						    curwin->w_height + count);
	    if (n < curwin->w_height + count)
		count = n - curwin->w_height;
	}

	
	if (count > 0)
	{
	    nochange = scroll_with_sms(dir, count, &curscount);
	    curwin->w_cursor.lnum = prev_lnum;
	    curwin->w_cursor.col = prev_col;
	    curwin->w_curswant = prev_curswant;
	}

	
	if (curwin->w_p_wrap)
	    nv_screengo(&oa, dir, curscount);
	else if (dir == FORWARD)
	    cursor_down_inner(curwin, curscount);
	else
	    cursor_up_inner(curwin, curscount);
    }
    else
    {
	
	count *= ((ONE_WINDOW && p_window > 0 && p_window < Rows - 1) ?
				MAX(1, p_window - 2) : get_scroll_overlap(dir));
	nochange = scroll_with_sms(dir, count, &count);

	if (!nochange)
	{
	    
	    validate_botline();
	    curwin->w_cursor.lnum = (dir == FORWARD ? curwin->w_topline
						    : curwin->w_botline - 1);
	}
    }

    if (get_scrolloff_value() > 0)
	cursor_correct();
#ifdef FEAT_FOLDING
    
    foldAdjustCursor();
#endif
    nochange = nochange
	&& prev_col == curwin->w_cursor.col
	&& prev_lnum == curwin->w_cursor.lnum;

    
    if (nochange)
	beep_flush();
    else if (!curwin->w_p_sms)
	beginline(BL_SOL | BL_FIX);
    else if (p_sol)
	nv_g_home_m_cmd(&ca);

    return nochange;
}

    void
do_check_cursorbind(void)
{
    static win_T	*prev_curwin = NULL;
    static pos_T	prev_cursor = {0, 0, 0};

    if (curwin == prev_curwin && EQUAL_POS(curwin->w_cursor, prev_cursor))
	return;
    prev_curwin = curwin;
    prev_cursor = curwin->w_cursor;

    linenr_T	line = curwin->w_cursor.lnum;
    colnr_T	col = curwin->w_cursor.col;
    colnr_T	coladd = curwin->w_cursor.coladd;
    colnr_T	curswant = curwin->w_curswant;
    int		set_curswant = curwin->w_set_curswant;
    win_T	*old_curwin = curwin;
    buf_T	*old_curbuf = curbuf;
    int		old_VIsual_select = VIsual_select;
    int		old_VIsual_active = VIsual_active;

    
    VIsual_select = VIsual_active = 0;
    FOR_ALL_WINDOWS(curwin)
    {
	curbuf = curwin->w_buffer;
	
	if (curwin != old_curwin && curwin->w_p_crb)
	{
# ifdef FEAT_DIFF
	    if (curwin->w_p_diff)
		curwin->w_cursor.lnum =
				 diff_get_corresponding_line(old_curbuf, line);
	    else
# endif
		curwin->w_cursor.lnum = line;
	    curwin->w_cursor.col = col;
	    curwin->w_cursor.coladd = coladd;
	    curwin->w_curswant = curswant;
	    curwin->w_set_curswant = set_curswant;

	    
	    
	    int restart_edit_save = restart_edit;
	    restart_edit = 'a';
	    check_cursor();

	    
	    
	    if (!curwin->w_p_scb)
		validate_cursor();

	    restart_edit = restart_edit_save;
	    
	    if (has_mbyte)
		mb_adjust_cursor();
	    redraw_later(UPD_VALID);

	    
	    if (!curwin->w_p_scb)
		update_topline();
	    curwin->w_redr_status = TRUE;
	}
    }

    
    VIsual_select = old_VIsual_select;
    VIsual_active = old_VIsual_active;
    curwin = old_curwin;
    curbuf = old_curbuf;
}
