

#include "vim.h"

#if defined(FEAT_BEVAL) || defined(FEAT_PROP_POPUP) || defined(PROTO)

    int
find_word_under_cursor(
	int	    mouserow,
	int	    mousecol,
	int	    getword,
	int	    flags,	
	win_T	    **winp,	
	linenr_T    *lnump,	
	char_u	    **textp,
	int	    *colp,	
	int	    *startcolp) 
{
    int		row = mouserow;
    int		col = mousecol;
    int		scol;
    win_T	*wp;
    char_u	*lbuf;
    linenr_T	lnum;

    *textp = NULL;
    wp = mouse_find_win(&row, &col, FAIL_POPUP);
    if (wp == NULL || row < 0 || row >= wp->w_height || col >= wp->w_width)
	return FAIL;

    
    
    if (mouse_comp_pos(wp, &row, &col, &lnum, NULL))
	return FAIL;		

    
    lbuf = ml_get_buf(wp->w_buffer, lnum, FALSE);
    if (col > win_linetabsize(wp, lnum, lbuf, (colnr_T)MAXCOL))
	return FAIL;		

    
    if (getword)
    {
	
	
	int		len;
	pos_T	*spos = NULL, *epos = NULL;

	if (VIsual_active)
	{
	    if (LT_POS(VIsual, curwin->w_cursor))
	    {
		spos = &VIsual;
		epos = &curwin->w_cursor;
	    }
	    else
	    {
		spos = &curwin->w_cursor;
		epos = &VIsual;
	    }
	}

	col = vcol2col(wp, lnum, col, NULL);
	scol = col;

	if (VIsual_active
		&& wp->w_buffer == curwin->w_buffer
		&& (lnum == spos->lnum
		    ? col >= (int)spos->col
		    : lnum > spos->lnum)
		&& (lnum == epos->lnum
		    ? col <= (int)epos->col
		    : lnum < epos->lnum))
	{
	    
	    
	    
	    if (spos->lnum != epos->lnum || spos->col == epos->col)
		return FAIL;

	    lbuf = ml_get_buf(curwin->w_buffer, VIsual.lnum, FALSE);
	    len = epos->col - spos->col;
	    if (*p_sel != 'e')
		len += mb_ptr2len(lbuf + epos->col);
	    lbuf = vim_strnsave(lbuf + spos->col, len);
	    lnum = spos->lnum;
	    col = spos->col;
	    scol = col;
	}
	else
	{
	    
	    ++emsg_off;
	    len = find_ident_at_pos(wp, lnum, (colnr_T)col,
		    &lbuf, &scol, flags);
	    --emsg_off;
	    if (len == 0)
		return FAIL;
	    lbuf = vim_strnsave(lbuf, len);
	}
    }
    else
	scol = col;

    if (winp != NULL)
	*winp = wp;
    if (lnump != NULL)
	*lnump = lnum;
    *textp = lbuf;
    if (colp != NULL)
	*colp = col;
    if (startcolp != NULL)
	*startcolp = scol;

    return OK;
}
#endif

#if defined(FEAT_BEVAL) || defined(PROTO)


    int
get_beval_info(
	BalloonEval	*beval,
	int		getword,
	win_T		**winp,
	linenr_T	*lnump,
	char_u		**textp,
	int		*colp)
{
    int		row = mouse_row;
    int		col = mouse_col;

# ifdef FEAT_BEVAL_GUI
    if (gui.in_use)
    {
	row = Y_2_ROW(beval->y);
	col = X_2_COL(beval->x);
    }
# endif
    if (find_word_under_cursor(row, col, getword,
		FIND_IDENT + FIND_STRING + FIND_EVAL,
		winp, lnump, textp, colp, NULL) == OK)
    {
# ifdef FEAT_VARTABS
	vim_free(beval->vts);
	beval->vts = tabstop_copy((*winp)->w_buffer->b_p_vts_array);
	if ((*winp)->w_buffer->b_p_vts_array != NULL && beval->vts == NULL)
	{
	    if (getword)
		vim_free(*textp);
	    return FAIL;
	}
# endif
	beval->ts = (*winp)->w_buffer->b_p_ts;
	return OK;
    }

    return FAIL;
}


    void
post_balloon(BalloonEval *beval UNUSED, char_u *mesg, list_T *list UNUSED)
{
# ifdef FEAT_BEVAL_TERM
#  ifdef FEAT_GUI
    if (!gui.in_use)
#  endif
	ui_post_balloon(mesg, list);
# endif
# ifdef FEAT_BEVAL_GUI
    if (gui.in_use)
	
	gui_mch_post_balloon(beval, mesg);
# endif
}


    int
can_use_beval(void)
{
    return (0
#ifdef FEAT_BEVAL_GUI
		|| (gui.in_use && p_beval)
#endif
#ifdef FEAT_BEVAL_TERM
		|| (
# ifdef FEAT_GUI
		    !gui.in_use &&
# endif
		    p_bevalterm)
#endif
	     ) && msg_scrolled == 0;
}

# ifdef FEAT_EVAL

    static void
bexpr_eval(
	BalloonEval	*beval,
	char_u		*bexpr,
	win_T		*wp,
	linenr_T	lnum,
	int		col,
	char_u		*text)
{
    win_T	*cw;
    int	winnr = 0;
    buf_T	*save_curbuf;
    int		use_sandbox;
    static char_u  *result = NULL;
    size_t	len;

    sctx_T	save_sctx = current_sctx;

    
    for (cw = firstwin; cw != wp; cw = cw->w_next)
	++winnr;

    set_vim_var_nr(VV_BEVAL_BUFNR, (int)wp->w_buffer->b_fnum);
    set_vim_var_nr(VV_BEVAL_WINNR, winnr);
    set_vim_var_nr(VV_BEVAL_WINID, wp->w_id);
    set_vim_var_nr(VV_BEVAL_LNUM, (int)lnum);
    set_vim_var_nr(VV_BEVAL_COL, (int)(col + 1));
    set_vim_var_string(VV_BEVAL_TEXT, text, -1);
    vim_free(text);

    
    save_curbuf = curbuf;
    curbuf = wp->w_buffer;
    use_sandbox = was_set_insecurely((char_u *)"balloonexpr",
				    *curbuf->b_p_bexpr == NUL ? 0 : OPT_LOCAL);
    curbuf = save_curbuf;
    if (use_sandbox)
	++sandbox;
    ++textlock;

    if (bexpr == p_bexpr)
    {
	sctx_T *sp = get_option_sctx("balloonexpr");

	if (sp != NULL)
	    current_sctx = *sp;
    }
    else
	current_sctx = curbuf->b_p_script_ctx[BV_BEXPR];

    vim_free(result);
    result = eval_to_string(bexpr, TRUE, TRUE);

    
    
    
    if (result != NULL)
    {
	len = STRLEN(result);
	if (len > 0 && result[len - 1] == NL)
	    result[len - 1] = NUL;
    }

    if (use_sandbox)
	--sandbox;
    --textlock;
    current_sctx = save_sctx;

    set_vim_var_string(VV_BEVAL_TEXT, NULL, -1);
    if (result != NULL && result[0] != NUL)
	post_balloon(beval, result, NULL);

    
    
    if (must_redraw)
	redraw_after_callback(FALSE, FALSE);
}
# endif


    void
general_beval_cb(BalloonEval *beval, int state UNUSED)
{
#ifdef FEAT_EVAL
    win_T	*wp;
    int		col;
    linenr_T	lnum;
    char_u	*text;
    char_u	*bexpr;
#endif
    static int	recursive = FALSE;

    
    
    if (!can_use_beval() || beval == NULL)
	return;

    
    
    if (recursive)
	return;
    recursive = TRUE;

#ifdef FEAT_EVAL
    if (get_beval_info(beval, TRUE, &wp, &lnum, &text, &col) == OK)
    {
	bexpr = (*wp->w_buffer->b_p_bexpr == NUL) ? p_bexpr
						    : wp->w_buffer->b_p_bexpr;
	if (*bexpr != NUL)
	{
	    bexpr_eval(beval, bexpr, wp, lnum, col, text);
	    recursive = FALSE;
	    return;
	}
    }
#endif
#ifdef FEAT_NETBEANS_INTG
    if (bevalServers & BEVAL_NETBEANS)
	netbeans_beval_cb(beval, state);
#endif

    recursive = FALSE;
}

#endif
