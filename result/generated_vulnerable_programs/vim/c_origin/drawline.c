



#include "vim.h"

#ifdef FEAT_SYN_HL

    static int
advance_color_col(int vcol, int **color_cols)
{
    while (**color_cols >= 0 && vcol > **color_cols)
	++*color_cols;
    return (**color_cols >= 0);
}
#endif

#ifdef FEAT_SYN_HL

    static void
margin_columns_win(win_T *wp, int *left_col, int *right_col)
{
    
    static int saved_w_virtcol;
    static win_T *prev_wp;
    static int prev_left_col;
    static int prev_right_col;
    static int prev_col_off;

    int cur_col_off = win_col_off(wp);
    int	width1;
    int	width2;

    if (saved_w_virtcol == wp->w_virtcol
	    && prev_wp == wp && prev_col_off == cur_col_off)
    {
	*right_col = prev_right_col;
	*left_col = prev_left_col;
	return;
    }

    width1 = wp->w_width - cur_col_off;
    width2 = width1 + win_col_off2(wp);

    *left_col = 0;
    *right_col = width1;

    if (wp->w_virtcol >= (colnr_T)width1)
	*right_col = width1 + ((wp->w_virtcol - width1) / width2 + 1) * width2;
    if (wp->w_virtcol >= (colnr_T)width1 && width2 > 0)
	*left_col = (wp->w_virtcol - width1) / width2 * width2 + width1;

    
    prev_left_col = *left_col;
    prev_right_col = *right_col;
    prev_wp = wp;
    saved_w_virtcol = wp->w_virtcol;
    prev_col_off = cur_col_off;
}
#endif

#if defined(FEAT_SIGNS) || defined(FEAT_QUICKFIX) \
	|| defined(FEAT_SYN_HL) || defined(FEAT_DIFF)

# define LINE_ATTR
#endif


typedef struct {
    int		draw_state;	

    linenr_T	lnum;		

    int		startrow;	
    int		row;		
    int		screen_row;	

    int	vcol;		
    int		col;		
#ifdef FEAT_CONCEAL
    int		boguscols;	
				
    int		vcol_off_co;	
#endif
    int		vcol_off_tp;	
#ifdef FEAT_SYN_HL
    int		draw_color_col;	
    int		*color_cols;	
#endif
    int		eol_hl_off;	

    unsigned	off;		

    int		win_attr;	
				
    int		wcr_attr;	
#ifdef FEAT_SYN_HL
    int		cul_attr;	
#endif
#ifdef LINE_ATTR
    int		line_attr;	
#endif

    int		screen_line_flags;  

    int		fromcol;	
    int		tocol;		

#ifdef FEAT_LINEBREAK
    int	vcol_sbr;	    
    int		need_showbreak;	    
    int		dont_use_showbreak; 
#endif
#ifdef FEAT_PROP_POPUP
    int		text_prop_above_count;
#endif

    
    int		cul_screenline;

    int		char_attr;	

    int		n_extra;	
    char_u	*p_extra;	
				
    char_u	*p_extra_free;  
    int		extra_attr;	
				
    int		n_attr_skip;    
    int		c_extra;	
    int		c_final;	
    int		extra_for_textprop; 
    int		start_extra_for_textprop; 

    
    int		saved_n_extra;
    char_u	*saved_p_extra;
    char_u	*saved_p_extra_free;
    int		saved_extra_attr;
    int		saved_n_attr_skip;
    int		saved_extra_for_textprop;
    int		saved_c_extra;
    int		saved_c_final;
    int		saved_char_attr;

    char_u	extra[NUMBUFLEN + MB_MAXBYTES];
				
				

#ifdef FEAT_DIFF
    hlf_T	diff_hlf;	
#endif
    int		filler_lines;	
    int		filler_todo;	
#ifdef FEAT_SIGNS
    sign_attrs_T sattr;
#endif
#ifdef FEAT_LINEBREAK
     
     
    int		need_lbr;
#endif
} winlinevars_T;


#define WL_START	0		
#define WL_CMDLINE	(WL_START + 1)	
#ifdef FEAT_FOLDING
# define WL_FOLD	(WL_CMDLINE + 1)	
#else
# define WL_FOLD	WL_CMDLINE
#endif
#ifdef FEAT_SIGNS
# define WL_SIGN	(WL_FOLD + 1)	
#else
# define WL_SIGN	WL_FOLD		
#endif
#define WL_NR		(WL_SIGN + 1)	
#ifdef FEAT_LINEBREAK
# define WL_BRI		(WL_NR + 1)	
#else
# define WL_BRI		WL_NR
#endif
#if defined(FEAT_LINEBREAK) || defined(FEAT_DIFF)
# define WL_SBR		(WL_BRI + 1)	
#else
# define WL_SBR		WL_BRI
#endif
#define WL_LINE		(WL_SBR + 1)	

#if defined(FEAT_SIGNS) || defined(FEAT_FOLDING)

    static int
use_cursor_line_highlight(win_T *wp, linenr_T lnum)
{
    return wp->w_p_cul
	    && lnum == wp->w_cursor.lnum
	    && (wp->w_p_culopt_flags & CULOPT_NBR);
}
#endif


#ifdef FEAT_FOLDING

    static void
handle_foldcolumn(win_T *wp, winlinevars_T *wlv)
{
    int fdc = compute_foldcolumn(wp, 0);

    if (fdc <= 0)
	return;

    
    vim_free(wlv->p_extra_free);
    wlv->p_extra_free = alloc(MAX_MCO * fdc + 1);
    if (wlv->p_extra_free == NULL)
	return;

    wlv->n_extra = (int)fill_foldcolumn(wlv->p_extra_free,
							 wp, FALSE, wlv->lnum);
    wlv->p_extra_free[wlv->n_extra] = NUL;
    wlv->p_extra = wlv->p_extra_free;
    wlv->c_extra = NUL;
    wlv->c_final = NUL;
    if (use_cursor_line_highlight(wp, wlv->lnum))
	wlv->char_attr = hl_combine_attr(wlv->wcr_attr, HL_ATTR(HLF_CLF));
    else
	wlv->char_attr = hl_combine_attr(wlv->wcr_attr, HL_ATTR(HLF_FC));
}
#endif

#ifdef FEAT_SIGNS

    static void
get_sign_display_info(
	int		nrcol,
	win_T		*wp,
	winlinevars_T	*wlv)
{
    int	text_sign;
# ifdef FEAT_SIGN_ICONS
    int	icon_sign;
# endif

    
    wlv->c_extra = ' ';
    wlv->c_final = NUL;
    if (nrcol)
	wlv->n_extra = number_width(wp) + 1;
    else
    {
	if (use_cursor_line_highlight(wp, wlv->lnum))
	    wlv->char_attr = hl_combine_attr(wlv->wcr_attr, HL_ATTR(HLF_CLS));
	else
	    wlv->char_attr = hl_combine_attr(wlv->wcr_attr, HL_ATTR(HLF_SC));
	wlv->n_extra = 2;
    }

    if (wlv->row == wlv->startrow
#ifdef FEAT_DIFF
	    + wlv->filler_lines && wlv->filler_todo <= 0
#endif
       )
    {
	text_sign = (wlv->sattr.sat_text != NULL) ? wlv->sattr.sat_typenr : 0;
# ifdef FEAT_SIGN_ICONS
	icon_sign = (wlv->sattr.sat_icon != NULL) ? wlv->sattr.sat_typenr : 0;
	if (gui.in_use && icon_sign != 0)
	{
	    
	    if (nrcol)
	    {
		wlv->c_extra = NUL;
		wlv->n_extra = vim_snprintf((char *)wlv->extra, sizeof(wlv->extra),
						"%-*c ", number_width(wp), SIGN_BYTE);
		wlv->p_extra = wlv->extra;
	    }
	    else
		wlv->c_extra = SIGN_BYTE;
#  ifdef FEAT_NETBEANS_INTG
	    if (netbeans_active() && (buf_signcount(wp->w_buffer, wlv->lnum)
									  > 1))
	    {
		if (nrcol)
		{
		    wlv->c_extra = NUL;
		    wlv->n_extra = vim_snprintf((char *)wlv->extra, sizeof(wlv->extra),
						"%-*c ", number_width(wp), MULTISIGN_BYTE);
		    wlv->p_extra = wlv->extra;
		}
		else
		    wlv->c_extra = MULTISIGN_BYTE;
	    }
#  endif
	    wlv->c_final = NUL;
	    wlv->char_attr = icon_sign;
	}
	else
# endif
	    if (text_sign != 0)
	    {
		wlv->p_extra = wlv->sattr.sat_text;
		if (wlv->p_extra != NULL)
		{
		    if (nrcol)
		    {
			int width = number_width(wp) - 2;

			vim_memset(wlv->extra, ' ', width);
			wlv->n_extra = width;
			wlv->n_extra += vim_snprintf((char *)wlv->extra + width,
				  sizeof(wlv->extra) - width, "%s ", wlv->p_extra);
			wlv->p_extra = wlv->extra;
		    }
		    else
			wlv->n_extra = (int)STRLEN(wlv->p_extra);

		    wlv->c_extra = NUL;
		    wlv->c_final = NUL;
		}

		if (use_cursor_line_highlight(wp, wlv->lnum)
						  && wlv->sattr.sat_culhl > 0)
		    wlv->char_attr = wlv->sattr.sat_culhl;
		else
		    wlv->char_attr = wlv->sattr.sat_texthl;
	    }
    }
}
#endif


    static void
handle_lnum_col(
	win_T		*wp,
	winlinevars_T	*wlv,
	int		sign_present UNUSED,
	int		num_attr UNUSED)
{
    int has_cpo_n = vim_strchr(p_cpo, CPO_NUMCOL) != NULL;
    int lnum_row = wlv->startrow + wlv->filler_lines
#ifdef FEAT_PROP_POPUP
		      + wlv->text_prop_above_count
#endif
		      ;

    if ((wp->w_p_nu || wp->w_p_rnu)
	     && (wlv->row <= lnum_row || !has_cpo_n)
	     
	     
	     && !((has_cpo_n
#ifdef FEAT_LINEBREAK
		     && !wp->w_p_bri
#endif
		  ) && wp->w_skipcol > 0 && wlv->lnum == wp->w_topline))
    {
#ifdef FEAT_SIGNS
	
	
	
	if ((*wp->w_p_scl == 'n' && *(wp->w_p_scl + 1) == 'u') && sign_present)
	    get_sign_display_info(TRUE, wp, wlv);
	else
#endif
	{
	  
	  
	  
	  if (wlv->row == lnum_row
		    && (wp->w_skipcol == 0 || wlv->row > 0
					       || (wp->w_p_nu && wp->w_p_rnu)))
	  {
	      int num;
	      char *fmt = "%*ld ";

	      if (wp->w_p_nu && !wp->w_p_rnu)
		  
		  num = (int)wlv->lnum;
	      else
	      {
		  
		  num = labs((int)get_cursor_rel_lnum(wp, wlv->lnum));
		  if (num == 0 && wp->w_p_nu && wp->w_p_rnu)
		  {
		      
		      num = wlv->lnum;
		      fmt = "%-*ld ";
		  }
	      }

	      vim_snprintf((char *)wlv->extra, sizeof(wlv->extra), fmt, number_width(wp), num);
	      if (wp->w_skipcol > 0 && wlv->startrow == 0)
		  for (wlv->p_extra = wlv->extra; *wlv->p_extra == ' ';
			  ++wlv->p_extra)
		      *wlv->p_extra = '-';
#ifdef FEAT_RIGHTLEFT
	      if (wp->w_p_rl)		    
	      {
		  char_u    *p1, *p2;
		  int	    t;

		  
		  p2 = skipwhite(wlv->extra);
		  p2 = skiptowhite(p2) - 1;
		  for (p1 = skipwhite(wlv->extra); p1 < p2; ++p1, --p2)
		  {
		      t = *p1;
		      *p1 = *p2;
		      *p2 = t;
		  }
	      }
#endif
	      wlv->p_extra = wlv->extra;
	      wlv->c_extra = NUL;
	      wlv->c_final = NUL;
	  }
	  else
	  {
	      wlv->c_extra = ' ';
	      wlv->c_final = NUL;
	  }
	  wlv->n_extra = number_width(wp) + 1;
	  wlv->char_attr = hl_combine_attr(wlv->wcr_attr, HL_ATTR(HLF_N));
#ifdef FEAT_SYN_HL
	  
	  
	  
	  
	  
	  
	  if (wp->w_p_cul
		  && wlv->lnum == wp->w_cursor.lnum
		  && (wp->w_p_culopt_flags & CULOPT_NBR)
		  && (wlv->row == wlv->startrow + wlv->filler_lines
		      || (wlv->row > wlv->startrow + wlv->filler_lines
			 && (wp->w_p_culopt_flags & CULOPT_LINE))))
	    wlv->char_attr = hl_combine_attr(wlv->wcr_attr, HL_ATTR(HLF_CLN));
#endif
	  if (wp->w_p_rnu && wlv->lnum < wp->w_cursor.lnum
						      && HL_ATTR(HLF_LNA) != 0)
	      
	      wlv->char_attr = hl_combine_attr(wlv->wcr_attr, HL_ATTR(HLF_LNA));
	  if (wp->w_p_rnu && wlv->lnum > wp->w_cursor.lnum
						      && HL_ATTR(HLF_LNB) != 0)
	      
	      wlv->char_attr = hl_combine_attr(wlv->wcr_attr, HL_ATTR(HLF_LNB));
	}
#ifdef FEAT_SIGNS
	if (num_attr)
	    wlv->char_attr = num_attr;
#endif
    }
}

#ifdef FEAT_LINEBREAK
    static void
handle_breakindent(win_T *wp, winlinevars_T *wlv)
{
    if (wp->w_briopt_sbr && wlv->draw_state == WL_BRI - 1
					    && *get_showbreak_value(wp) != NUL)
	
	wlv->draw_state = WL_BRI;
    else if (wp->w_briopt_sbr && wlv->draw_state == WL_SBR)
	
	wlv->draw_state = WL_BRI - 1;

    
    if (wlv->draw_state == WL_BRI - 1)
    {
	wlv->draw_state = WL_BRI;
	
	if (wp->w_p_bri && (wlv->row > wlv->startrow
# ifdef FEAT_DIFF
		    + wlv->filler_lines
# endif
		    || wlv->need_showbreak)
# ifdef FEAT_PROP_POPUP
		&& !wlv->dont_use_showbreak
# endif
	   )
	{
	    wlv->char_attr = 0;
# ifdef FEAT_DIFF
	    if (wlv->diff_hlf != (hlf_T)0)
		wlv->char_attr = HL_ATTR(wlv->diff_hlf);
# endif
	    wlv->p_extra = NULL;
	    wlv->c_extra = ' ';
	    wlv->c_final = NUL;
	    wlv->n_extra = get_breakindent_win(wp,
				   ml_get_buf(wp->w_buffer, wlv->lnum, FALSE));
	    if (wlv->row == wlv->startrow)
	    {
		wlv->n_extra -= win_col_off2(wp);
		if (wlv->n_extra < 0)
		    wlv->n_extra = 0;
	    }

	    
	    if (wlv->fromcol >= wlv->vcol
				    && wlv->fromcol < wlv->vcol + wlv->n_extra)
		wlv->fromcol = wlv->vcol + wlv->n_extra;

	    
	    
	    if (wlv->tocol == wlv->vcol)
		wlv->tocol += wlv->n_extra;
	}

	if (wp->w_skipcol > 0 && wlv->startrow == 0 && wp->w_p_wrap
							   && wp->w_briopt_sbr)
	    wlv->need_showbreak = FALSE;
    }
}
#endif

#if defined(FEAT_LINEBREAK) || defined(FEAT_DIFF)
    static void
handle_showbreak_and_filler(win_T *wp, winlinevars_T *wlv)
{
# ifdef FEAT_DIFF
    if (wlv->filler_todo > 0)
    {
	
	if (char2cells(wp->w_fill_chars.diff) > 1)
	{
	    wlv->c_extra = '-';
	    wlv->c_final = NUL;
	}
	else
	{
	    wlv->c_extra = wp->w_fill_chars.diff;
	    wlv->c_final = NUL;
	}
#  ifdef FEAT_RIGHTLEFT
	if (wp->w_p_rl)
	    wlv->n_extra = wlv->col + 1;
	else
#  endif
	    wlv->n_extra = wp->w_width - wlv->col;
	wlv->char_attr = HL_ATTR(HLF_DED);
    }
# endif

# ifdef FEAT_LINEBREAK
    char_u *sbr = get_showbreak_value(wp);
    if (*sbr != NUL && wlv->need_showbreak)
    {
	
	wlv->p_extra = sbr;
	wlv->c_extra = NUL;
	wlv->c_final = NUL;
	wlv->n_extra = (int)STRLEN(sbr);
	wlv->vcol_sbr = wlv->vcol + MB_CHARLEN(sbr);

	
	if (wlv->fromcol >= wlv->vcol && wlv->fromcol < wlv->vcol_sbr)
	    wlv->fromcol = wlv->vcol_sbr;

	
	
	if (wlv->tocol == wlv->vcol)
	    wlv->tocol = wlv->vcol_sbr;
	
	wlv->char_attr = hl_combine_attr(wlv->win_attr, HL_ATTR(HLF_AT));
#  ifdef FEAT_SYN_HL
	
	if (wlv->cul_attr != 0)
	    wlv->char_attr = hl_combine_attr(wlv->char_attr, wlv->cul_attr);
#  endif
    }

    if (wp->w_skipcol == 0 || wlv->startrow > 0 || !wp->w_p_wrap
							  || !wp->w_briopt_sbr)
	wlv->need_showbreak = FALSE;
# endif
}
#endif

#if defined(FEAT_PROP_POPUP) || defined(PROTO)

    static int
textprop_size_after_trunc(
	win_T	*wp,
	int	flags,	    
	int	added,
	int	padding,
	char_u	*text,
	int	*n_used_ptr)
{
    int	space = (flags & (TP_FLAG_ALIGN_BELOW | TP_FLAG_ALIGN_ABOVE))
				       ? wp->w_width - win_col_off(wp) : added;
    int strsize = 0;
    char_u *p;

    
    
    if (space < PROP_TEXT_MIN_CELLS && wp->w_p_wrap)
	space += wp->w_width;
    if (flags & (TP_FLAG_ALIGN_BELOW | TP_FLAG_ALIGN_ABOVE))
	space -= padding;

    for (p = text; *p != NUL; p += (*mb_ptr2len)(p))
    {
	int clen = ptr2cells(p);

	if (strsize + clen > space)
	    break;
	strsize += clen;
    }
    *n_used_ptr = (int)(p - text);

    return strsize;
}


    int
text_prop_position(
	win_T	    *wp,
	textprop_T  *tp,
	int	    vcol,	    
	int	    scr_col,	    
	int	    *n_extra,	    
	char_u	    **p_extra,	    
	int	    *n_attr,	    
	int	    *n_attr_skip,   
	int	    do_skip)	    
{
    int	    right = (tp->tp_flags & TP_FLAG_ALIGN_RIGHT);
    int	    above = (tp->tp_flags & TP_FLAG_ALIGN_ABOVE);
    int	    below = (tp->tp_flags & TP_FLAG_ALIGN_BELOW);
    int	    wrap = tp->tp_col < MAXCOL || (tp->tp_flags & TP_FLAG_WRAP);
    int	    padding = tp->tp_col == MAXCOL && tp->tp_len > 1
							  ? tp->tp_len - 1 : 0;
    int	    col_with_padding = scr_col + (below ? 0 : padding);
    int	    room = wp->w_width - col_with_padding;
    int	    before = room;	
    int	    after = 0;		
    int	    n_used = *n_extra;
    char_u  *l = NULL;
    int	    strsize = vim_strsize(*p_extra);
    int	    cells = wrap ? strsize : textprop_size_after_trunc(wp,
			     tp->tp_flags, before, padding, *p_extra, &n_used);

    if (wrap || right || above || below || padding > 0 || n_used < *n_extra)
    {
	int	    col_off = win_col_off(wp) - win_col_off2(wp);

	if (above)
	{
	    before = 0;
	    after = wp->w_width - cells - win_col_off(wp) - padding;
	    if (after < 0)
	    {
		
		padding += after;
		after = 0;
	    }
	}
	else
	{
	    
	    if (right)
		before -= cells;

	    
	    if (below && vcol == 0 && col_with_padding == col_off
					    && wp->w_width - col_off == before)
		col_with_padding += 1;

	    if (before < 0
		    || !(right || below)
		    || (below ? (col_with_padding <= col_off || !wp->w_p_wrap)
			      : (n_used < *n_extra)))
	    {
		if (right && (wrap
			      || (room < PROP_TEXT_MIN_CELLS && wp->w_p_wrap)))
		{
		    
		    before = wp->w_width - col_off - strsize + room;
		    if (before < 0)
			before = 0;
		    else
			n_used = *n_extra;
		}
		else if (below && before > vcol && do_skip)
		    before -= vcol;
		else
		    before = 0;
	    }
	}

	
	
	if (!wp->w_p_wrap
		&& n_used < *n_extra
		&& wp->w_lcs_chars.ext != NUL
		&& wp->w_p_list)
	    ++n_used;

	
	if (n_attr != NULL)
	    l = alloc(n_used + before + after + (padding > 0 ? padding : 0) + 3);
	if (n_attr == NULL || l != NULL)
	{
	    int off = 0;

	    if (n_attr != NULL)
	    {
		vim_memset(l, ' ', before);
		off += before;
		if (padding > 0)
		{
		    vim_memset(l + off, ' ', padding);
		    off += padding;
		}
		vim_strncpy(l + off, *p_extra, n_used);
		off += n_used;
	    }
	    else
	    {
		off = before + after + padding + n_used;
		cells += before + after + padding;
	    }
	    if (n_attr != NULL)
	    {
		if (n_used < *n_extra && wp->w_p_wrap)
		{
		    char_u *lp = l + off - 1;

		    if (has_mbyte)
		    {
			char_u	buf[MB_MAXBYTES + 1];
			char_u	*cp = buf;

			
			
			STRCPY(buf, "…");
			if (!enc_utf8)
			{
			    vimconv_T	vc;

			    vc.vc_type = CONV_NONE;
			    convert_setup(&vc, (char_u *)"utf-8", p_enc);
			    if (vc.vc_type != CONV_NONE)
			    {
				cp = string_convert(&vc, buf, NULL);
				if (cp == NULL)
				{
				    
				    cp = buf;
				    STRCPY(buf, ">");
				}
				convert_setup(&vc, NULL, NULL);
			    }
			}

			lp -= (*mb_ptr2cells)(cp) - 1;
			lp -= (*mb_head_off)(l, lp);
			STRCPY(lp, cp);
			n_used = lp - l + 3 - before - padding;
			if (cp != buf)
			    vim_free(cp);
		    }
		    else
			
			*lp = '>';
		}
		else if (after > 0)
		{
		    vim_memset(l + off, ' ', after);
		    l[off + after] = NUL;
		}

		*p_extra = l;
		*n_extra = n_used + before + after + padding;
		*n_attr = mb_charlen(*p_extra);
		
		
		*n_attr_skip = before + (padding > 0 ? padding : 0);
		*n_attr -= *n_attr_skip;
		if (above)
		    *n_attr -= after;
	    }
	}
    }

    if (n_attr == NULL)
	return cells;
    return (below && col_with_padding > win_col_off(wp) && !wp->w_p_wrap);
}
#endif


    static void
wlv_screen_line(win_T *wp, winlinevars_T *wlv, int clear_end)
{
    if (wlv->row == 0 && wp->w_skipcol > 0
#if defined(FEAT_LINEBREAK)
	    
	    && *get_showbreak_value(wp) == NUL
#endif
	    
	    && !(wp->w_p_list && wp->w_lcs_chars.prec != 0))
    {
	int off = (int)(current_ScreenLine - ScreenLines);
	int max_off = off + screen_Columns;
	int skip = 0;

	if (wp->w_p_nu && wp->w_p_rnu)
	    
	    
	    while (skip < wp->w_width && VIM_ISDIGIT(ScreenLines[off]))
	    {
		++off;
		++skip;
	    }

	for (int i = 0; i < 3 && i + skip < wp->w_width; ++i)
	{
	    if ((*mb_off2cells)(off, max_off) > 1)
		
		
		ScreenLines[off + 1] = ' ';
	    ScreenLines[off] = '<';
	    if (enc_utf8)
		ScreenLinesUC[off] = 0;
	    ScreenAttrs[off] = HL_ATTR(HLF_AT);
	    ++off;
	}
    }

    screen_line(wp, wlv->screen_row, wp->w_wincol, wlv->col,
		    clear_end ? wp->w_width : -wp->w_width,
		    wlv->vcol - 1, wlv->screen_line_flags);
}


    static void
draw_screen_line(win_T *wp, winlinevars_T *wlv)
{
#ifdef FEAT_SYN_HL
    int	v;
    int		wcol;

    
    if (wp->w_p_wrap)
	v = wlv->startrow == 0 ? wp->w_skipcol : 0;
    else
	v = wp->w_leftcol;

    wcol =
# ifdef FEAT_RIGHTLEFT
	wp->w_p_rl ? wp->w_width - wlv->col - 1 :
# endif
	wlv->col;
    
    if (wlv->vcol < v + wcol - win_col_off(wp))
	wlv->vcol = v + wcol - win_col_off(wp);
# ifdef FEAT_CONCEAL
    
    
    wlv->col -= wlv->boguscols;
    wlv->boguscols = 0;
#  define VCOL_HLC (wlv->vcol - wlv->vcol_off_co - wlv->vcol_off_tp)
# else
#  define VCOL_HLC (wlv->vcol - wlv->vcol_off_tp)
# endif

    if (wlv->draw_color_col)
	wlv->draw_color_col = advance_color_col(VCOL_HLC, &wlv->color_cols);

    if (((wp->w_p_cuc
		    && (int)wp->w_virtcol >= VCOL_HLC - wlv->eol_hl_off
		    && (int)wp->w_virtcol <
			 (int)wp->w_width * (wlv->row - wlv->startrow + 1) + v
			 && wlv->lnum != wp->w_cursor.lnum)
		|| wlv->draw_color_col
# ifdef LINE_ATTR
		|| wlv->line_attr != 0
# endif
		|| wlv->win_attr != 0))
    {
	int	rightmost_vcol = 0;
	int	i;

	if (wp->w_p_cuc)
	    rightmost_vcol = wp->w_virtcol;
	if (wlv->draw_color_col)
	    
	    for (i = 0; wlv->color_cols[i] >= 0; ++i)
		if (rightmost_vcol < wlv->color_cols[i])
		    rightmost_vcol = wlv->color_cols[i];

	while (
# ifdef FEAT_RIGHTLEFT
		wp->w_p_rl ? (wlv->col >= 0) :
# endif
		(wlv->col < wp->w_width))
	{
	    ScreenLines[wlv->off] = ' ';
	    if (enc_utf8)
		ScreenLinesUC[wlv->off] = 0;

	    if (wlv->draw_color_col)
		wlv->draw_color_col = advance_color_col(
						   VCOL_HLC, &wlv->color_cols);

	    int attr = wlv->win_attr;
# ifdef LINE_ATTR
	    if (wlv->line_attr != 0)
		attr = hl_combine_attr(attr, wlv->line_attr);
# endif
	    if (wp->w_p_cuc && VCOL_HLC == (int)wp->w_virtcol
		    && wlv->lnum != wp->w_cursor.lnum)
		attr = hl_combine_attr(attr, HL_ATTR(HLF_CUC));
	    else if (wlv->draw_color_col && VCOL_HLC == *wlv->color_cols)
		attr = hl_combine_attr(attr, HL_ATTR(HLF_MC));
	    ScreenAttrs[wlv->off] = attr;
	    ScreenCols[wlv->off] = wlv->vcol;
# ifdef FEAT_RIGHTLEFT
	    if (wp->w_p_rl)
	    {
		--wlv->off;
		--wlv->col;
	    }
	    else
# endif
	    {
		++wlv->off;
		++wlv->col;
	    }
	    ++wlv->vcol;

	    if (VCOL_HLC > rightmost_vcol
# ifdef LINE_ATTR
		    && wlv->line_attr == 0
# endif
		    && wlv->win_attr == 0)
		break;
	}
    }
#endif

    
    
    wlv->screen_line_flags |= SLF_INC_VCOL;
    wlv_screen_line(wp, wlv, TRUE);
    wlv->screen_line_flags &= ~SLF_INC_VCOL;
    ++wlv->row;
    ++wlv->screen_row;
}
#undef VCOL_HLC


    static void
win_line_start(win_T *wp UNUSED, winlinevars_T *wlv, int save_extra)
{
    wlv->col = 0;
    wlv->off = (unsigned)(current_ScreenLine - ScreenLines);
#ifdef FEAT_LINEBREAK
    wlv->need_lbr = FALSE;
#endif

#ifdef FEAT_RIGHTLEFT
    if (wp->w_p_rl)
    {
	
	
	
	wlv->col = wp->w_width - 1;
	wlv->off += wlv->col;
	wlv->screen_line_flags |= SLF_RIGHTLEFT;
    }
#endif
    if (save_extra)
    {
	
	wlv->draw_state = WL_START;
	wlv->saved_n_extra = wlv->n_extra;
	wlv->saved_p_extra = wlv->p_extra;
	vim_free(wlv->saved_p_extra_free);
	wlv->saved_p_extra_free = wlv->p_extra_free;
	wlv->p_extra_free = NULL;
	wlv->saved_extra_attr = wlv->extra_attr;
	wlv->saved_n_attr_skip = wlv->n_attr_skip;
	wlv->saved_extra_for_textprop = wlv->extra_for_textprop;
	wlv->saved_c_extra = wlv->c_extra;
	wlv->saved_c_final = wlv->c_final;
#ifdef FEAT_LINEBREAK
	wlv->need_lbr = TRUE;
#endif
#ifdef FEAT_SYN_HL
	if (!(wlv->cul_screenline
# ifdef FEAT_DIFF
		    && wlv->diff_hlf == (hlf_T)0
# endif
	     ))
	    wlv->saved_char_attr = wlv->char_attr;
	else
#endif
	    wlv->saved_char_attr = 0;

	
	wlv->n_extra = 0;
	wlv->n_attr_skip = 0;
    }
}


    static void
win_line_continue(winlinevars_T *wlv)
{
    if (wlv->saved_n_extra > 0)
    {
	
	wlv->n_extra = wlv->saved_n_extra;
	wlv->saved_n_extra = 0;
	wlv->c_extra = wlv->saved_c_extra;
	wlv->c_final = wlv->saved_c_final;
	wlv->p_extra = wlv->saved_p_extra;
	vim_free(wlv->p_extra_free);
	wlv->p_extra_free = wlv->saved_p_extra_free;
	wlv->saved_p_extra_free = NULL;
	wlv->extra_attr = wlv->saved_extra_attr;
	wlv->n_attr_skip = wlv->saved_n_attr_skip;
	wlv->extra_for_textprop = wlv->saved_extra_for_textprop;
	wlv->char_attr = wlv->saved_char_attr;
    }
    else
	wlv->char_attr = wlv->win_attr;
}

#ifdef FEAT_SYN_HL
    static void
apply_cursorline_highlight(
	winlinevars_T *wlv,
	int sign_present UNUSED)
{
    wlv->cul_attr = HL_ATTR(HLF_CUL);
# ifdef FEAT_SIGNS
    
    
    if (sign_present && wlv->sattr.sat_linehl > 0)
    {
	if (wlv->sattr.sat_priority >= 100)
	    wlv->line_attr = hl_combine_attr(wlv->cul_attr, wlv->line_attr);
	else
	    wlv->line_attr = hl_combine_attr(wlv->line_attr, wlv->cul_attr);
    }
    else
# endif
# if defined(FEAT_QUICKFIX)
	
	
	
	wlv->line_attr = hl_combine_attr(wlv->cul_attr, wlv->line_attr);
# else
	wlv->line_attr = wlv->cul_attr;
# endif
}
#endif


    int
win_line(
    win_T	*wp,
    linenr_T	lnum,
    int		startrow,
    int		endrow,
    int		number_only,
    spellvars_T	*spv UNUSED)
{
    winlinevars_T	wlv;		

    int		c = 0;			
    int	vcol_prev = -1;		
    char_u	*line;			
    char_u	*ptr;			

#ifdef FEAT_PROP_POPUP
    char_u	*p_extra_free2 = NULL;   
#endif
#if defined(FEAT_LINEBREAK) && defined(FEAT_PROP_POPUP)
    int		in_linebreak = FALSE;	
#endif
    int		lcs_eol_one = wp->w_lcs_chars.eol; 
    int		lcs_prec_todo = wp->w_lcs_chars.prec;
					

    int		n_attr = 0;	    
    int		saved_attr2 = 0;    
    int		n_attr3 = 0;	    
    int		saved_attr3 = 0;    

    int		skip_cells = 0;		
					
    int		skipped_cells = 0;	
					
    int		fromcol_prev = -2;	
    int		noinvcur = FALSE;	
    int		lnum_in_visual_area = FALSE;
    pos_T	pos;
    int	v;

    int		attr_pri = FALSE;	
    int		area_highlighting = FALSE; 
					   
    int		vi_attr = 0;		
					
    int		area_attr = 0;		
    int		search_attr = 0;	
#ifdef FEAT_SYN_HL
    int		vcol_save_attr = 0;	
    int		syntax_attr = 0;	
    int		prev_syntax_col = -1;	
    int		prev_syntax_attr = 0;	
    int		has_syntax = FALSE;	
    int		save_did_emsg;
#endif
#ifdef FEAT_PROP_POPUP
    int		did_line = FALSE;	
    int		text_prop_count;
    int		last_textprop_text_idx = -1;
    int		text_prop_next = 0;	
    textprop_T	*text_props = NULL;
    int		*text_prop_idxs = NULL;
    int		text_props_active = 0;
    proptype_T  *text_prop_type = NULL;
    int		text_prop_attr = 0;
    int		text_prop_attr_comb = 0;  
					  
    int		text_prop_id = 0;	
    int		text_prop_flags = 0;
    int		text_prop_above = FALSE;  
    int		text_prop_follows = FALSE;  
    int		saved_search_attr = 0;	
					
    int		saved_area_attr = 0;	
    int		reset_extra_attr = FALSE;
#endif
#ifdef FEAT_SPELL
    int		can_spell = FALSE;
# define SPWORDLEN 150
    char_u	nextline[SPWORDLEN * 2];
    int		nextlinecol = 0;	
    int		nextline_idx = 0;	
					
    int		spell_attr = 0;		
    int		word_end = 0;		
    int		cur_checked_col = 0;	
#endif
    int		extra_check = 0;	
    int		multi_attr = 0;		
    int		mb_l = 1;		
    int		mb_c = 0;		
    int		mb_utf8 = FALSE;	
    int		u8cc[MAX_MCO];		
#ifdef FEAT_DIFF
    int		change_start = MAXCOL;	
    int		change_end = -1;	
#endif
    colnr_T	trailcol = MAXCOL;	
    colnr_T	leadcol = 0;		
    int		in_multispace = FALSE;	
    int		multispace_pos = 0;	
#ifdef LINE_ATTR
    int		line_attr_save = 0;
#endif
    int		sign_present = FALSE;
    int		num_attr = 0;		
#ifdef FEAT_ARABIC
    int		prev_c = 0;		
    int		prev_c1 = 0;		
#endif
#if defined(LINE_ATTR)
    int		did_line_attr = 0;
#endif
#ifdef FEAT_TERMINAL
    int		get_term_attr = FALSE;
#endif

#if defined(FEAT_SYN_HL) || defined(FEAT_DIFF)
    
    
    int		left_curline_col = 0;
    int		right_curline_col = 0;
#endif

#if defined(FEAT_XIM) && defined(FEAT_GUI_GTK)
    int		feedback_col = 0;
    int		feedback_old_attr = -1;
#endif

#if defined(FEAT_CONCEAL) || defined(FEAT_SEARCH_EXTRA)
    int		match_conc	= 0;	
#endif
#if defined(FEAT_CONCEAL) || defined(FEAT_SEARCH_EXTRA) || defined(FEAT_LINEBREAK)
    int		on_last_col     = FALSE;
#endif
#ifdef FEAT_CONCEAL
    int		syntax_flags	= 0;
    int		syntax_seqnr	= 0;
    int		prev_syntax_id	= 0;
    int		conceal_attr	= HL_ATTR(HLF_CONCEAL);
    int		is_concealing	= FALSE;
    int		did_wcol	= FALSE;
    int		old_boguscols   = 0;
# define VCOL_HLC (wlv.vcol - wlv.vcol_off_co - wlv.vcol_off_tp)
# define FIX_FOR_BOGUSCOLS \
    { \
	wlv.n_extra += wlv.vcol_off_co; \
	wlv.vcol -= wlv.vcol_off_co; \
	wlv.vcol_off_co = 0; \
	wlv.col -= wlv.boguscols; \
	old_boguscols = wlv.boguscols; \
	wlv.boguscols = 0; \
    }
#else
# define VCOL_HLC (wlv.vcol - wlv.vcol_off_tp)
#endif

    if (startrow > endrow)		
	return startrow;

    CLEAR_FIELD(wlv);

    wlv.lnum = lnum;
    wlv.startrow = startrow;
    wlv.row = startrow;
    wlv.screen_row = wlv.row + W_WINROW(wp);
    wlv.fromcol = -10;
    wlv.tocol = MAXCOL;
#ifdef FEAT_LINEBREAK
    wlv.vcol_sbr = -1;
#endif

    if (number_only == 0)
    {
	
	
#ifdef FEAT_LINEBREAK
	extra_check = wp->w_p_lbr;
#endif
#ifdef FEAT_SYN_HL
	if (syntax_present(wp) && !wp->w_s->b_syn_error
# ifdef SYN_TIME_LIMIT
		&& !wp->w_s->b_syn_slow
# endif
	   )
	{
	    
	    
	    save_did_emsg = did_emsg;
	    did_emsg = FALSE;
	    syntax_start(wp, lnum);
	    if (did_emsg)
		wp->w_s->b_syn_error = TRUE;
	    else
	    {
		did_emsg = save_did_emsg;
#ifdef SYN_TIME_LIMIT
		if (!wp->w_s->b_syn_slow)
#endif
		{
		    has_syntax = TRUE;
		    extra_check = TRUE;
		}
	    }
	}

	
	wlv.color_cols = wp->w_p_cc_cols;
	if (wlv.color_cols != NULL)
	    wlv.draw_color_col = advance_color_col(VCOL_HLC, &wlv.color_cols);
#endif

#ifdef FEAT_TERMINAL
	if (term_show_buffer(wp->w_buffer))
	{
	    extra_check = TRUE;
	    get_term_attr = TRUE;
	    wlv.win_attr = term_get_attr(wp, lnum, -1);
	}
#endif

	
	if (VIsual_active && wp->w_buffer == curwin->w_buffer)
	{
	    pos_T	*top, *bot;

	    if (LTOREQ_POS(curwin->w_cursor, VIsual))
	    {
		
		top = &curwin->w_cursor;
		bot = &VIsual;
	    }
	    else
	    {
		
		top = &VIsual;
		bot = &curwin->w_cursor;
	    }
	    lnum_in_visual_area = (lnum >= top->lnum && lnum <= bot->lnum);
	    if (VIsual_mode == Ctrl_V)
	    {
		
		if (lnum_in_visual_area)
		{
		    wlv.fromcol = wp->w_old_cursor_fcol;
		    wlv.tocol = wp->w_old_cursor_lcol;
		}
	    }
	    else
	    {
		
		if (lnum > top->lnum && lnum <= bot->lnum)
		    wlv.fromcol = 0;
		else if (lnum == top->lnum)
		{
		    if (VIsual_mode == 'V')	
			wlv.fromcol = 0;
		    else
		    {
			getvvcol(wp, top, (colnr_T *)&wlv.fromcol, NULL, NULL);
			if (gchar_pos(top) == NUL)
			    wlv.tocol = wlv.fromcol + 1;
		    }
		}
		if (VIsual_mode != 'V' && lnum == bot->lnum)
		{
		    if (*p_sel == 'e' && bot->col == 0 && bot->coladd == 0)
		    {
			wlv.fromcol = -10;
			wlv.tocol = MAXCOL;
		    }
		    else if (bot->col == MAXCOL)
			wlv.tocol = MAXCOL;
		    else
		    {
			pos = *bot;
			if (*p_sel == 'e')
			    getvvcol(wp, &pos, (colnr_T *)&wlv.tocol,
								   NULL, NULL);
			else
			{
			    getvvcol(wp, &pos, NULL, NULL,
							(colnr_T *)&wlv.tocol);
			    ++wlv.tocol;
			}
		    }
		}
	    }

	    
	    if (!highlight_match && lnum == curwin->w_cursor.lnum
								&& wp == curwin
#ifdef FEAT_GUI
		    && !gui.in_use
#endif
		    )
		noinvcur = TRUE;

	    
	    if (wlv.fromcol >= 0)
	    {
		area_highlighting = TRUE;
		vi_attr = HL_ATTR(HLF_V);
#if defined(FEAT_CLIPBOARD) && defined(FEAT_X11)
		if ((clip_star.available && !clip_star.owned
						      && clip_isautosel_star())
			|| (clip_plus.available && !clip_plus.owned
						     && clip_isautosel_plus()))
		    vi_attr = HL_ATTR(HLF_VNC);
#endif
	    }
	}

	
	else if (highlight_match
		&& wp == curwin
		&& lnum >= curwin->w_cursor.lnum
		&& lnum <= curwin->w_cursor.lnum + search_match_lines)
	{
	    if (lnum == curwin->w_cursor.lnum)
		getvcol(curwin, &(curwin->w_cursor),
					  (colnr_T *)&wlv.fromcol, NULL, NULL);
	    else
		wlv.fromcol = 0;
	    if (lnum == curwin->w_cursor.lnum + search_match_lines)
	    {
		pos.lnum = lnum;
		pos.col = search_match_endcol;
		getvcol(curwin, &pos, (colnr_T *)&wlv.tocol, NULL, NULL);
	    }
	    else
		wlv.tocol = MAXCOL;
	    
	    if (wlv.fromcol == wlv.tocol && search_match_endcol)
		wlv.tocol = wlv.fromcol + 1;
	    area_highlighting = TRUE;
	    vi_attr = HL_ATTR(HLF_I);
	}
    }

#ifdef FEAT_DIFF
    wlv.filler_lines = diff_check(wp, lnum);
    if (wlv.filler_lines < 0)
    {
	if (wlv.filler_lines == -1)
	{
	    if (diff_find_change(wp, lnum, &change_start, &change_end))
		wlv.diff_hlf = HLF_ADD;	
	    else if (change_start == 0)
		wlv.diff_hlf = HLF_TXD;	
	    else
		wlv.diff_hlf = HLF_CHD;	
	}
	else
	    wlv.diff_hlf = HLF_ADD;		
	wlv.filler_lines = 0;
	area_highlighting = TRUE;
    }
    if (lnum == wp->w_topline)
	wlv.filler_lines = wp->w_topfill;
    wlv.filler_todo = wlv.filler_lines;
#endif

#ifdef FEAT_SIGNS
    sign_present = buf_get_signattrs(wp, lnum, &wlv.sattr);
    if (sign_present)
	num_attr = wlv.sattr.sat_numhl;
#endif

#ifdef LINE_ATTR
# ifdef FEAT_SIGNS
    
    if (sign_present)
	wlv.line_attr = wlv.sattr.sat_linehl;
# endif
# if defined(FEAT_QUICKFIX)
    
    if (bt_quickfix(wp->w_buffer) && qf_current_entry(wp) == lnum)
	wlv.line_attr = HL_ATTR(HLF_QFL);
# endif
    if (wlv.line_attr != 0)
	area_highlighting = TRUE;
#endif

#ifdef FEAT_SPELL
    if (spv->spv_has_spell && number_only == 0)
    {
	
	extra_check = TRUE;

	
	
	if (lnum == spv->spv_checked_lnum)
	    cur_checked_col = spv->spv_checked_col;
	
	
	if (spv->spv_capcol_lnum == 0 && check_need_cap(wp, lnum, 0))
	    spv->spv_cap_col = 0;
	else if (lnum != spv->spv_capcol_lnum)
	    spv->spv_cap_col = -1;
	spv->spv_checked_lnum = 0;

	
	
	
	nextline[SPWORDLEN] = NUL;
	if (lnum < wp->w_buffer->b_ml.ml_line_count)
	{
	    line = ml_get_buf(wp->w_buffer, lnum + 1, FALSE);
	    spell_cat_line(nextline + SPWORDLEN, line, SPWORDLEN);
	}
	line = ml_get_buf(wp->w_buffer, lnum, FALSE);

	
	ptr = skipwhite(line);
	if (*ptr == NUL)
	{
	    spv->spv_cap_col = 0;
	    spv->spv_capcol_lnum = lnum + 1;
	}
	
	else if (spv->spv_cap_col == 0)
	    spv->spv_cap_col = ptr - line;

	
	if (nextline[SPWORDLEN] == NUL)
	{
	    
	    nextlinecol = MAXCOL;
	    nextline_idx = 0;
	}
	else
	{
	    v = ml_get_buf_len(wp->w_buffer, lnum);
	    if (v < SPWORDLEN)
	    {
		
		
		nextlinecol = 0;
		mch_memmove(nextline, line, (size_t)v);
		STRMOVE(nextline + v, nextline + SPWORDLEN);
		nextline_idx = v + 1;
	    }
	    else
	    {
		
		nextlinecol = v - SPWORDLEN;
		mch_memmove(nextline, line + nextlinecol, SPWORDLEN);
		nextline_idx = SPWORDLEN + 1;
	    }
	}
    }
#endif

    line = ml_get_buf(wp->w_buffer, lnum, FALSE);
    ptr = line;

    if (wp->w_p_list)
    {
	if (wp->w_lcs_chars.space
		|| wp->w_lcs_chars.multispace != NULL
		|| wp->w_lcs_chars.leadmultispace != NULL
		|| wp->w_lcs_chars.trail
		|| wp->w_lcs_chars.lead
		|| wp->w_lcs_chars.nbsp)
	    extra_check = TRUE;

	
	if (wp->w_lcs_chars.trail)
	{
	    trailcol = ml_get_buf_len(wp->w_buffer, lnum);
	    while (trailcol > (colnr_T)0 && VIM_ISWHITE(ptr[trailcol - 1]))
		--trailcol;
	    trailcol += (colnr_T)(ptr - line);
	}
	
	if (wp->w_lcs_chars.lead || wp->w_lcs_chars.leadmultispace != NULL)
	{
	    leadcol = 0;
	    while (VIM_ISWHITE(ptr[leadcol]))
		++leadcol;
	    if (ptr[leadcol] == NUL)
		
		leadcol = (colnr_T)0;
	    else
		
		leadcol += (colnr_T)(ptr - line) + 1;
	}
    }

    wlv.wcr_attr = get_wcr_attr(wp);
    if (wlv.wcr_attr != 0)
    {
	wlv.win_attr = wlv.wcr_attr;
	area_highlighting = TRUE;
    }

    
    
    int skipcol_in_text_prop_above = 0;

#ifdef FEAT_PROP_POPUP
    if (WIN_IS_POPUP(wp))
	wlv.screen_line_flags |= SLF_POPUP;

    char_u *prop_start;
    text_prop_count = get_text_props(wp->w_buffer, lnum, &prop_start, FALSE);
    if (text_prop_count > 0)
    {
	
	
	text_props = ALLOC_MULT(textprop_T, text_prop_count);
	if (text_props != NULL)
	    mch_memmove(text_props, prop_start,
				     text_prop_count * sizeof(textprop_T));

	
	text_prop_idxs = ALLOC_MULT(int, text_prop_count);
	if (text_prop_idxs == NULL)
	    VIM_CLEAR(text_props);

	if (text_props != NULL)
	{
	    area_highlighting = TRUE;
	    extra_check = TRUE;

	    
	    for (int i = 0; i < text_prop_count; ++i)
		if (text_props[i].tp_id < 0)
		    last_textprop_text_idx = i;

	    
	    
	    
	    int text_width = wp->w_width - win_col_off(wp);
	    for (int i = text_prop_count - 1; i >= 0; --i)
		if (text_props[i].tp_flags & TP_FLAG_ALIGN_ABOVE)
		{
		    if (lnum == wp->w_topline
			    && wp->w_skipcol - skipcol_in_text_prop_above
								 >= text_width)
		    {
			
			
			skipcol_in_text_prop_above += text_width;
			for (int j = i + 1; j < text_prop_count; ++j)
			    text_props[j - 1] = text_props[j];
			++i;
			--text_prop_count;
		    }
		    else
			++wlv.text_prop_above_count;
		}
	}
    }

    if (number_only > 0)
    {
	
	wlv.row += wlv.text_prop_above_count;
	if (wlv.row >= endrow)
	{
	    vim_free(text_props);
	    vim_free(text_prop_idxs);
	    return wlv.row;
	}
	wlv.screen_row += wlv.text_prop_above_count;
    }
#endif

#if defined(FEAT_LINEBREAK) || defined(FEAT_PROP_POPUP)
    colnr_T vcol_first_char = 0;
    if (wp->w_p_lbr && number_only == 0)
    {
	chartabsize_T cts;
	init_chartabsize_arg(&cts, wp, lnum, 0, line, line);
	(void)win_lbr_chartabsize(&cts, NULL);
	vcol_first_char = cts.cts_first_char;
	clear_chartabsize_arg(&cts);
    }
#endif

    
    
    if (wp->w_p_wrap)
	v = startrow == 0 ? wp->w_skipcol - skipcol_in_text_prop_above : 0;
    else
	v = wp->w_leftcol;
    if (v > 0 && number_only == 0)
    {
	char_u		*prev_ptr = ptr;
	chartabsize_T	cts;
	int		charsize = 0;
	int		head = 0;

	init_chartabsize_arg(&cts, wp, lnum, wlv.vcol, line, ptr);
	cts.cts_max_head_vcol = v;
	while (cts.cts_vcol < v && *cts.cts_ptr != NUL)
	{
	    head = 0;
	    charsize = win_lbr_chartabsize(&cts, &head);
	    cts.cts_vcol += charsize;
	    prev_ptr = cts.cts_ptr;
	    MB_PTR_ADV(cts.cts_ptr);
	    if (wp->w_p_list)
	    {
		in_multispace = *prev_ptr == ' ' && (*cts.cts_ptr == ' '
				  || (prev_ptr > line && prev_ptr[-1] == ' '));
		if (!in_multispace)
		    multispace_pos = 0;
		else if (cts.cts_ptr >= line + leadcol
					 && wp->w_lcs_chars.multispace != NULL)
		{
		    ++multispace_pos;
		    if (wp->w_lcs_chars.multispace[multispace_pos] == NUL)
			multispace_pos = 0;
		}
		else if (cts.cts_ptr < line + leadcol
				     && wp->w_lcs_chars.leadmultispace != NULL)
		{
		    ++multispace_pos;
		    if (wp->w_lcs_chars.leadmultispace[multispace_pos] == NUL)
			multispace_pos = 0;
		}
	    }
	}
	wlv.vcol = cts.cts_vcol;
	ptr = cts.cts_ptr;
	clear_chartabsize_arg(&cts);

	
	
	
	
	
	
	if (wlv.vcol < v && (
#ifdef FEAT_SYN_HL
	     wp->w_p_cuc || wlv.draw_color_col ||
#endif
	     virtual_active() ||
	     (VIsual_active && wp->w_buffer == curwin->w_buffer)))
	    wlv.vcol = v;

	
	
	if (wlv.vcol > v)
	{
	    wlv.vcol -= charsize;
	    ptr = prev_ptr;
	}
	if (v > wlv.vcol)
	    skip_cells = v - wlv.vcol - head;

	
	
	if (wlv.tocol <= wlv.vcol)
	    wlv.fromcol = 0;
	else if (wlv.fromcol >= 0 && wlv.fromcol < wlv.vcol)
	    wlv.fromcol = wlv.vcol;

#ifdef FEAT_LINEBREAK
	
	if (wp->w_p_wrap)
	    wlv.need_showbreak = TRUE;
#endif
#ifdef FEAT_SPELL
	
	
	if (spv->spv_has_spell)
	{
	    int		len;
	    colnr_T	linecol = (colnr_T)(ptr - line);
	    hlf_T	spell_hlf = HLF_COUNT;

	    pos = wp->w_cursor;
	    wp->w_cursor.lnum = lnum;
	    wp->w_cursor.col = linecol;
	    len = spell_move_to(wp, FORWARD, SMT_ALL, TRUE, &spell_hlf);

	    
	    line = ml_get_buf(wp->w_buffer, lnum, FALSE);
	    ptr = line + linecol;

	    if (len == 0 || (int)wp->w_cursor.col > linecol)
	    {
		
		
		spell_hlf = HLF_COUNT;
		word_end = (int)(spell_to_word_end(ptr, wp) - line + 1);
	    }
	    else
	    {
		
		word_end = wp->w_cursor.col + len + 1;

		
		if (spell_hlf != HLF_COUNT)
		    spell_attr = highlight_attr[spell_hlf];
	    }
	    wp->w_cursor = pos;

# ifdef FEAT_SYN_HL
	    
	    if (has_syntax)
		syntax_start(wp, lnum);
# endif
	}
#endif
    }

    
    
    if (wlv.fromcol >= 0)
    {
	if (noinvcur)
	{
	    if ((colnr_T)wlv.fromcol == wp->w_virtcol)
	    {
		
		
		fromcol_prev = wlv.fromcol;
		wlv.fromcol = -1;
	    }
	    else if ((colnr_T)wlv.fromcol < wp->w_virtcol)
		
		fromcol_prev = wp->w_virtcol;
	}
	if (wlv.fromcol >= wlv.tocol)
	    wlv.fromcol = -1;
    }

#ifdef FEAT_SEARCH_EXTRA
    if (number_only == 0)
    {
	v = (int)(ptr - line);
	area_highlighting |= prepare_search_hl_line(wp, lnum, (colnr_T)v,
					      &line, &screen_search_hl,
					      &search_attr);
	ptr = line + v; 
    }
#endif

#ifdef FEAT_SYN_HL
    
    if (wp->w_p_cul && lnum == wp->w_cursor.lnum)
    {
	
	
	if (!(wp == curwin && VIsual_active)
					 && wp->w_p_culopt_flags != CULOPT_NBR)
	{
	    wlv.cul_screenline = (wp->w_p_wrap
				   && (wp->w_p_culopt_flags & CULOPT_SCRLINE));

	    
	    
	    if (!wlv.cul_screenline)
		apply_cursorline_highlight(&wlv, sign_present);
	    else
	    {
		line_attr_save = wlv.line_attr;
		margin_columns_win(wp, &left_curline_col, &right_curline_col);
	    }
	    area_highlighting = TRUE;
	}
    }
#endif

    win_line_start(wp, &wlv, FALSE);

    
    for (;;)
    {
#if defined(FEAT_CONCEAL) || defined(FEAT_SEARCH_EXTRA)
	int	has_match_conc = 0;	
#endif
#ifdef FEAT_CONCEAL
	int	did_decrement_ptr = FALSE;
#endif

	
	if (wlv.draw_state != WL_LINE)
	{
#ifdef FEAT_SYN_HL
	    if (wlv.cul_screenline)
	    {
		wlv.cul_attr = 0;
		wlv.line_attr = line_attr_save;
	    }
#endif
	    if (wlv.draw_state == WL_CMDLINE - 1 && wlv.n_extra == 0)
	    {
		wlv.draw_state = WL_CMDLINE;
		if (wp == cmdwin_win)
		{
		    
		    wlv.n_extra = 1;
		    wlv.c_extra = cmdwin_type;
		    wlv.c_final = NUL;
		    wlv.char_attr =
				hl_combine_attr(wlv.wcr_attr, HL_ATTR(HLF_AT));
		}
	    }
#ifdef FEAT_FOLDING
	    if (wlv.draw_state == WL_FOLD - 1 && wlv.n_extra == 0)
	    {
		wlv.draw_state = WL_FOLD;
		handle_foldcolumn(wp, &wlv);
	    }
#endif
#ifdef FEAT_SIGNS
	    if (wlv.draw_state == WL_SIGN - 1 && wlv.n_extra == 0)
	    {
		
		wlv.draw_state = WL_SIGN;
		if (signcolumn_on(wp))
		    get_sign_display_info(FALSE, wp, &wlv);
	    }
#endif
	    if (wlv.draw_state == WL_NR - 1 && wlv.n_extra == 0)
	    {
		
		wlv.draw_state = WL_NR;
		handle_lnum_col(wp, &wlv, sign_present, num_attr);
	    }

	    
	    
	    if (number_only > 0 && wlv.draw_state == WL_NR && wlv.n_extra == 0)
	    {
		wlv_screen_line(wp, &wlv, FALSE);
		
		
		
		if ((wlv.row + 1 - wlv.startrow < number_only
			&& (HL_ATTR(HLF_LNA) != 0 || HL_ATTR(HLF_LNB) != 0))
#ifdef FEAT_DIFF
			|| wlv.filler_todo > 0
#endif
			)
		{
		    ++wlv.row;
		    ++wlv.screen_row;
		    if (wlv.row == endrow)
			break;
#ifdef FEAT_DIFF
		    --wlv.filler_todo;
		    if (wlv.filler_todo == 0 && wp->w_botfill)
			break;
#endif
		    win_line_start(wp, &wlv, TRUE);
		    continue;
		}
		else
		    break;
	    }

#ifdef FEAT_LINEBREAK
	    
	    
	    if (wlv.n_extra == 0)
		handle_breakindent(wp, &wlv);
#endif
#if defined(FEAT_LINEBREAK) || defined(FEAT_DIFF)
	    if (wlv.draw_state == WL_SBR - 1 && wlv.n_extra == 0)
	    {
		wlv.draw_state = WL_SBR;
		handle_showbreak_and_filler(wp, &wlv);
	    }
#endif
	    if (wlv.draw_state == WL_LINE - 1 && wlv.n_extra == 0)
	    {
		wlv.draw_state = WL_LINE;
		win_line_continue(&wlv);  
	    }
	}

#ifdef FEAT_SYN_HL
	if (wlv.cul_screenline && wlv.draw_state == WL_LINE
		&& wlv.vcol >= left_curline_col
		&& wlv.vcol < right_curline_col)
	    apply_cursorline_highlight(&wlv, sign_present);
#endif

	
	if (dollar_vcol >= 0 && wp == curwin
		&& lnum == wp->w_cursor.lnum
		&& wlv.vcol >= (int)wp->w_virtcol)
	{
	    wlv_screen_line(wp, &wlv, FALSE);
	    
	    
#ifdef FEAT_SYN_HL
	    if (wp->w_p_cuc)
		wlv.row = wp->w_cline_row + wp->w_cline_height;
	    else
#endif
		wlv.row = wp->w_height;
	    break;
	}

	if (wlv.draw_state == WL_LINE && (area_highlighting || extra_check))
	{
#ifdef FEAT_PROP_POPUP
	    if (text_props != NULL)
	    {
		int pi;
		int bcol = (int)(ptr - line);

		if (wlv.n_extra > 0
# ifdef FEAT_LINEBREAK
			&& !in_linebreak
# endif
			)
		    --bcol;  

		
		for (pi = 0; pi < text_props_active; ++pi)
		{
		    int		tpi = text_prop_idxs[pi];
		    textprop_T  *tp = &text_props[tpi];

		    
		    
		    
		    if ((tp->tp_col != MAXCOL
				       && bcol >= tp->tp_col - 1 + tp->tp_len))
		    {
			if (pi + 1 < text_props_active)
			    mch_memmove(text_prop_idxs + pi,
					text_prop_idxs + pi + 1,
					sizeof(int)
					     * (text_props_active - (pi + 1)));
			--text_props_active;
			--pi;
# ifdef FEAT_LINEBREAK
			
			if (in_linebreak && syntax_attr == text_prop_attr_comb)
			    syntax_attr = 0;
# endif
		    }
		}

# ifdef FEAT_LINEBREAK
		if (wlv.n_extra > 0 && in_linebreak)
		    
		    --bcol;
# endif
		
		while (text_prop_next < text_prop_count)
		{
		    int active;
		    textprop_T *tp = &text_props[text_prop_next];
		    if (tp->tp_col == MAXCOL)
		    {
			if (bcol == 0 && (tp->tp_flags & TP_FLAG_ALIGN_ABOVE))
			    active = TRUE;
			else if (*ptr != NUL)
			    break;
			else
			{
			    
			    
			    active = wp->w_p_wrap
				  || wlv.row == startrow
				  || (tp->tp_flags & TP_FLAG_ALIGN_BELOW);
			}
		    }
		    else
		    {
			if (bcol < tp->tp_col - 1)
			    break;
			active = bcol <= tp->tp_col - 1 + tp->tp_len;
		    }

		    if (active)
			text_prop_idxs[text_props_active++] = text_prop_next;
		    ++text_prop_next;
		}

		if (wlv.n_extra == 0 ||
			(!wlv.extra_for_textprop
			 && !(text_prop_type != NULL &&
			     text_prop_flags & PT_FLAG_OVERRIDE)
		    ))
		{
		    text_prop_attr = 0;
		    text_prop_attr_comb = 0;
		    text_prop_flags = 0;
		    text_prop_type = NULL;
		    text_prop_id = 0;
		    reset_extra_attr = FALSE;
		}
		if (text_props_active > 0 && wlv.n_extra == 0)
		{
		    int used_tpi = -1;
		    int used_attr = 0;
		    int other_tpi = -1;

		    text_prop_above = FALSE;
		    text_prop_follows = FALSE;

		    
		    
		    sort_text_props(wp->w_buffer, text_props,
					    text_prop_idxs, text_props_active);

		    for (pi = 0; pi < text_props_active; ++pi)
		    {
			int	    tpi = text_prop_idxs[pi];
			textprop_T  *tp = &text_props[tpi];
			proptype_T  *pt = text_prop_type_by_id(
						    wp->w_buffer, tp->tp_type);

			
			
			
			if (pt != NULL
				&& (pt->pt_hl_id > 0 || tp->tp_id < 0)
				&& tp->tp_id != -MAXCOL
				&& !(tp->tp_id < 0
				    && !wp->w_p_wrap
				    && (tp->tp_flags & (TP_FLAG_ALIGN_RIGHT
						| TP_FLAG_ALIGN_ABOVE
						| TP_FLAG_ALIGN_BELOW)) == 0
				    && wlv.col >= wp->w_width))
			{
			    if (tp->tp_col == MAXCOL
				     && *ptr == NUL
				     && ((wp->w_p_list && lcs_eol_one > 0
					     && (tp->tp_flags
						   & TP_FLAG_ALIGN_ABOVE) == 0)
					 || (ptr == line
						&& !did_line
						&& (tp->tp_flags
						      & TP_FLAG_ALIGN_BELOW))))
			    {
				
				
				text_prop_follows = TRUE;
				continue;
			    }

			    if (pt->pt_hl_id > 0)
				used_attr = syn_id2attr(pt->pt_hl_id);
			    text_prop_type = pt;
			    text_prop_attr =
				   hl_combine_attr(text_prop_attr, used_attr);
			    if (used_tpi >= 0 && text_props[used_tpi].tp_id < 0)
				other_tpi = used_tpi;
			    text_prop_flags = pt->pt_flags;
			    text_prop_id = tp->tp_id;
			    used_tpi = tpi;
			}
		    }
		    if (text_prop_id < 0 && used_tpi >= 0
			    && -text_prop_id
				      <= wp->w_buffer->b_textprop_text.ga_len)
		    {
			textprop_T  *tp = &text_props[used_tpi];
			char_u	    *p = ((char_u **)wp->w_buffer
						   ->b_textprop_text.ga_data)[
							   -text_prop_id - 1];
			int	    above = (tp->tp_flags
							& TP_FLAG_ALIGN_ABOVE);
			int	    bail_out = FALSE;

			
			
			tp->tp_id = -MAXCOL;

			if (p != NULL)
			{
			    int	    right = (tp->tp_flags
							& TP_FLAG_ALIGN_RIGHT);
			    int	    below = (tp->tp_flags
							& TP_FLAG_ALIGN_BELOW);
			    int	    wrap = tp->tp_col < MAXCOL
					      || (tp->tp_flags & TP_FLAG_WRAP);
			    int	    padding = tp->tp_col == MAXCOL
						 && tp->tp_len > 1
							  ? tp->tp_len - 1 : 0;

			    
			    
			    wlv.p_extra = p;
			    wlv.c_extra = NUL;
			    wlv.c_final = NUL;
			    wlv.n_extra = (int)STRLEN(p);
			    wlv.extra_for_textprop = TRUE;
			    wlv.start_extra_for_textprop = TRUE;
			    wlv.extra_attr = hl_combine_attr(wlv.win_attr,
								    used_attr);
			    n_attr = mb_charlen(p);
			    text_prop_attr = 0;
			    text_prop_attr_comb = 0;
			    if (*ptr == NUL)
				
				text_prop_flags &= ~PT_FLAG_COMBINE;
# ifdef FEAT_LINEBREAK
			    if (above || below || right || !wrap)
			    {
				
				
				wlv.need_showbreak = FALSE;
				wlv.dont_use_showbreak = TRUE;
			    }
# endif
			    if ((right || above || below || !wrap
					    || padding > 0) && wp->w_width > 2)
			    {
				char_u	*prev_p_extra = wlv.p_extra;
				int	start_line;

				
				
				
				
				start_line = text_prop_position(wp, tp,
						    wlv.vcol,
# ifdef FEAT_RIGHTLEFT
						    wp->w_p_rl
						    ? wp->w_width - wlv.col - 1
						    :
# endif
						    wlv.col,
						    &wlv.n_extra, &wlv.p_extra,
						    &n_attr, &wlv.n_attr_skip,
						    skip_cells > 0);
				if (wlv.p_extra != prev_p_extra)
				{
				    
				    vim_free(p_extra_free2);
				    p_extra_free2 = wlv.p_extra;
				}

				if (above)
				    wlv.vcol_off_tp = wlv.n_extra;

				if (lcs_eol_one < 0
					&& wp->w_p_wrap
					&& wlv.col
					       + wlv.n_extra - 2 > wp->w_width)
				    
				    text_prop_follows = TRUE;

				
				
				if (start_line)
				{
				    draw_screen_line(wp, &wlv);

				    
				    
				    if (wlv.row == endrow)
				    {
					++wlv.row;
					break;
				    }
				    win_line_start(wp, &wlv, TRUE);
				    bail_out = TRUE;
				}
			    }
			}

			
			
			if (skip_cells > 0)
			{
			    if (wlv.n_extra > skip_cells)
			    {
				wlv.n_extra -= skip_cells;
				wlv.p_extra += skip_cells;
				wlv.n_attr_skip -= skip_cells;
				if (wlv.n_attr_skip < 0)
				    wlv.n_attr_skip = 0;
				skipped_cells += skip_cells;
				skip_cells = 0;
			    }
			    else
			    {
				
				
				skip_cells -= wlv.n_extra;
				skipped_cells += wlv.n_extra;
				wlv.n_extra = 0;
				wlv.n_attr_skip = 0;
				bail_out = TRUE;
			    }
			}

			
			
			
			
			text_prop_above = above;
			text_prop_follows |= other_tpi != -1
					&& (wp->w_p_wrap
					     || (text_props[other_tpi].tp_flags
			       & (TP_FLAG_ALIGN_BELOW | TP_FLAG_ALIGN_RIGHT)));

			if (bail_out)
			    
			    continue;
		    }
		}
		else if (text_prop_next < text_prop_count
			   && ((*ptr != NUL && ptr[mb_ptr2len(ptr)] == NUL)
			       || (!wp->w_p_wrap && wlv.col == wp->w_width - 1)))
		{
		    
		    
		    
		    

		    int only_below_follows = !wp->w_p_wrap && wlv.col == wp->w_width - 1;
		    
		    
		    
		    for (int i = text_prop_next; i < text_prop_count; ++i)
		    {
			if (text_props[i].tp_col == MAXCOL
				&& (!only_below_follows
				    || (text_props[i].tp_flags & TP_FLAG_ALIGN_BELOW)))
			{
			    text_prop_follows = TRUE;
			    break;
			}
		    }
		}
	    }

	    if (wlv.start_extra_for_textprop)
	    {
		wlv.start_extra_for_textprop = FALSE;
		
		
		saved_search_attr = search_attr;
		saved_area_attr = area_attr;
		search_attr = 0;
		area_attr = 0;
	    }
#endif

	    int *area_attr_p =
#ifdef FEAT_PROP_POPUP
		wlv.extra_for_textprop ? &saved_area_attr :
#endif
							    &area_attr;

	    
	    if (wlv.vcol == wlv.fromcol
		    || (has_mbyte && wlv.vcol + 1 == wlv.fromcol
			&& ((wlv.n_extra == 0 && (*mb_ptr2cells)(ptr) > 1)
			    || (wlv.n_extra > 0 && wlv.p_extra != NULL
				&& (*mb_ptr2cells)(wlv.p_extra) > 1)))
		    || ((int)vcol_prev == fromcol_prev
			&& vcol_prev < wlv.vcol	
			&& wlv.vcol < wlv.tocol))
		*area_attr_p = vi_attr;		
	    else if (*area_attr_p != 0
		    && (wlv.vcol == wlv.tocol
			|| (noinvcur && (colnr_T)wlv.vcol == wp->w_virtcol)))
		*area_attr_p = 0;		

#ifdef FEAT_SEARCH_EXTRA
	    if (wlv.n_extra == 0)
	    {
		
		
		
		v = (int)(ptr - line);
		search_attr = update_search_hl(wp, lnum, (colnr_T)v, &line,
				      &screen_search_hl, &has_match_conc,
				      &match_conc, did_line_attr, lcs_eol_one,
				      &on_last_col);
		ptr = line + v;  

		
		
		if (*ptr == NUL)
		    has_match_conc = 0;
	    }
#endif

#ifdef FEAT_DIFF
	    if (wlv.diff_hlf != (hlf_T)0)
	    {
		
		
		if (wlv.diff_hlf == HLF_CHD && ptr - line >= change_start
							   && wlv.n_extra == 0)
		    wlv.diff_hlf = HLF_TXD;		
		if (wlv.diff_hlf == HLF_TXD
			&& ((ptr - line > change_end && wlv.n_extra == 0)
			       || (wlv.n_extra > 0 && wlv.extra_for_textprop)))
		    wlv.diff_hlf = HLF_CHD;		
		wlv.line_attr = HL_ATTR(wlv.diff_hlf);
		if (wp->w_p_cul && lnum == wp->w_cursor.lnum
			&& wp->w_p_culopt_flags != CULOPT_NBR
			&& (!wlv.cul_screenline || (wlv.vcol >= left_curline_col
					    && wlv.vcol <= right_curline_col)))
		    wlv.line_attr = hl_combine_attr(
					  wlv.line_attr, HL_ATTR(HLF_CUL));
	    }
#endif

#ifdef FEAT_SYN_HL
	    if (extra_check && wlv.n_extra == 0)
	    {
		syntax_attr = 0;
# ifdef FEAT_TERMINAL
		if (get_term_attr)
		    syntax_attr = term_get_attr(wp, lnum, wlv.vcol);
# endif
		
		if (has_syntax)
		{
		    
		    
		    save_did_emsg = did_emsg;
		    did_emsg = FALSE;

		    v = (int)(ptr - line);
		    if (v == prev_syntax_col)
			
			syntax_attr = prev_syntax_attr;
		    else
		    {
# ifdef FEAT_SPELL
			can_spell = TRUE;
# endif
			syntax_attr = get_syntax_attr((colnr_T)v,
# ifdef FEAT_SPELL
					    spv->spv_has_spell ? &can_spell :
# endif
					    NULL, FALSE);
			prev_syntax_col = v;
			prev_syntax_attr = syntax_attr;
		    }

		    if (did_emsg)
		    {
			wp->w_s->b_syn_error = TRUE;
			has_syntax = FALSE;
			syntax_attr = 0;
		    }
		    else
			did_emsg = save_did_emsg;
# ifdef SYN_TIME_LIMIT
		    if (wp->w_s->b_syn_slow)
			has_syntax = FALSE;
# endif

		    
		    
		    line = ml_get_buf(wp->w_buffer, lnum, FALSE);
		    ptr = line + v;
# ifdef FEAT_CONCEAL
		    
		    
		    if (*ptr == NUL)
			syntax_flags = 0;
		    else
			syntax_flags = get_syntax_info(&syntax_seqnr);
# endif
		}
	    }
# ifdef FEAT_PROP_POPUP
	    
	    if (text_prop_type != NULL)
	    {
		if (text_prop_flags & PT_FLAG_COMBINE)
		    syntax_attr = hl_combine_attr(syntax_attr, text_prop_attr);
		else
		    syntax_attr = text_prop_attr;
		text_prop_attr_comb = syntax_attr;
	    }
# endif
#endif

	    
	    attr_pri = TRUE;
#ifdef LINE_ATTR
	    if (area_attr != 0)
	    {
		wlv.char_attr = hl_combine_attr(wlv.line_attr, area_attr);
		if (!highlight_match)
		    
		    wlv.char_attr = hl_combine_attr(search_attr, wlv.char_attr);
# ifdef FEAT_SYN_HL
		wlv.char_attr = hl_combine_attr(syntax_attr, wlv.char_attr);
# endif
	    }
	    else if (search_attr != 0)
	    {
		wlv.char_attr = hl_combine_attr(wlv.line_attr, search_attr);
# ifdef FEAT_SYN_HL
		wlv.char_attr = hl_combine_attr(syntax_attr, wlv.char_attr);
# endif
	    }
	    else if (wlv.line_attr != 0
		    && ((wlv.fromcol == -10 && wlv.tocol == MAXCOL)
			      || wlv.vcol < wlv.fromcol
			      || vcol_prev < fromcol_prev
			      || wlv.vcol >= wlv.tocol))
	    {
		
		
# ifdef FEAT_SYN_HL
		wlv.char_attr = hl_combine_attr(syntax_attr, wlv.line_attr);
# else
		wlv.char_attr = wlv.line_attr;
# endif
		attr_pri = FALSE;
	    }
#else
	    if (area_attr != 0)
		wlv.char_attr = area_attr;
	    else if (search_attr != 0)
		wlv.char_attr = search_attr;
#endif
	    else
	    {
		attr_pri = FALSE;
#ifdef FEAT_SYN_HL
		wlv.char_attr = syntax_attr;
#else
		wlv.char_attr = 0;
#endif
	    }
#ifdef FEAT_PROP_POPUP
	    
	    if (text_prop_type != NULL && (text_prop_flags & PT_FLAG_OVERRIDE))
		wlv.char_attr = hl_combine_attr(wlv.char_attr, text_prop_attr);
#endif
	}

	
	if (wlv.win_attr != 0)
	{
	    if (wlv.char_attr == 0)
		wlv.char_attr = wlv.win_attr;
	    else
		wlv.char_attr = hl_combine_attr(wlv.win_attr, wlv.char_attr);
	}

	

	
	
	
	
	
	
	
	if (wlv.n_extra > 0)
	{
	    if (wlv.c_extra != NUL || (wlv.n_extra == 1 && wlv.c_final != NUL))
	    {
		c = (wlv.n_extra == 1 && wlv.c_final != NUL)
						   ? wlv.c_final : wlv.c_extra;
		mb_c = c;	
		if (enc_utf8 && utf_char2len(c) > 1)
		{
		    mb_utf8 = TRUE;
		    u8cc[0] = 0;
		    c = 0xc0;
		}
		else
		    mb_utf8 = FALSE;
	    }
	    else
	    {
		c = *wlv.p_extra;
		if (has_mbyte)
		{
		    mb_c = c;
		    if (enc_utf8)
		    {
			
			
			mb_l = utfc_ptr2len(wlv.p_extra);
			mb_utf8 = FALSE;
			if (mb_l > wlv.n_extra)
			    mb_l = 1;
			else if (mb_l > 1)
			{
			    mb_c = utfc_ptr2char(wlv.p_extra, u8cc);
			    mb_utf8 = TRUE;
			    c = 0xc0;
			}
		    }
		    else
		    {
			
			mb_l = MB_BYTE2LEN(c);
			if (mb_l >= wlv.n_extra)
			    mb_l = 1;
			else if (mb_l > 1)
			    mb_c = (c << 8) + wlv.p_extra[1];
		    }
		    if (mb_l == 0)  
			mb_l = 1;

		    
		    
		    if ((
# ifdef FEAT_RIGHTLEFT
			    wp->w_p_rl ? (wlv.col <= 0) :
# endif
				    (wlv.col >= wp->w_width - 1))
			    && (*mb_char2cells)(mb_c) == 2)
		    {
			c = '>';
			mb_c = c;
			mb_l = 1;
			mb_utf8 = FALSE;
			multi_attr = HL_ATTR(HLF_AT);
#ifdef FEAT_SYN_HL
			if (wlv.cul_attr)
			    multi_attr = hl_combine_attr(
						     multi_attr, wlv.cul_attr);
#endif
			multi_attr = hl_combine_attr(wlv.win_attr, multi_attr);

			
			
			++wlv.n_extra;
			--wlv.p_extra;
		    }
		    else
		    {
			wlv.n_extra -= mb_l - 1;
			wlv.p_extra += mb_l - 1;
		    }
		}
		++wlv.p_extra;
	    }
	    --wlv.n_extra;
#if defined(FEAT_PROP_POPUP)
	    if (wlv.n_extra <= 0)
	    {
		
		
		if (wlv.saved_n_extra <= 0)
		{
		    if (search_attr == 0)
			search_attr = saved_search_attr;
		    if (area_attr == 0 && *ptr != NUL)
			area_attr = saved_area_attr;

		    if (wlv.extra_for_textprop)
			
			
			reset_extra_attr = TRUE;
		}

		wlv.extra_for_textprop = FALSE;
		in_linebreak = FALSE;
	    }
#endif
	}
	else
	{
#ifdef FEAT_LINEBREAK
	    int		c0;
#endif
	    char_u	*prev_ptr = ptr;

	    
	    c = *ptr;
#ifdef FEAT_LINEBREAK
	    c0 = *ptr;
#endif
	    if (c == NUL)
	    {
#ifdef FEAT_PROP_POPUP
		
		did_line = TRUE;
#endif
		
		skip_cells = 0;
	    }

	    if (has_mbyte)
	    {
		mb_c = c;
		if (enc_utf8)
		{
		    
		    
		    mb_l = utfc_ptr2len(ptr);
		    mb_utf8 = FALSE;
		    if (mb_l > 1)
		    {
			mb_c = utfc_ptr2char(ptr, u8cc);
			
			
			if (mb_c < 0x80)
			{
			    c = mb_c;
#ifdef FEAT_LINEBREAK
			    c0 = mb_c;
#endif
			}
			mb_utf8 = TRUE;

			
			
			if (utf_iscomposing(mb_c))
			{
			    int i;

			    for (i = Screen_mco - 1; i > 0; --i)
				u8cc[i] = u8cc[i - 1];
			    u8cc[0] = mb_c;
			    mb_c = ' ';
			}
		    }

		    if ((mb_l == 1 && c >= 0x80)
			    || (mb_l >= 1 && mb_c == 0)
			    || (mb_l > 1 && (!vim_isprintc(mb_c))))
		    {
			
			
			transchar_hex(wlv.extra, mb_c);
# ifdef FEAT_RIGHTLEFT
			if (wp->w_p_rl)		
			    rl_mirror(wlv.extra);
# endif
			wlv.p_extra = wlv.extra;
			c = *wlv.p_extra;
			mb_c = mb_ptr2char_adv(&wlv.p_extra);
			mb_utf8 = (c >= 0x80);
			wlv.n_extra = (int)STRLEN(wlv.p_extra);
			wlv.c_extra = NUL;
			wlv.c_final = NUL;
			if (area_attr == 0 && search_attr == 0)
			{
			    n_attr = wlv.n_extra + 1;
			    wlv.extra_attr = hl_combine_attr(
						 wlv.win_attr, HL_ATTR(HLF_8));
			    saved_attr2 = wlv.char_attr; 
			}
		    }
		    else if (mb_l == 0)  
			mb_l = 1;
#ifdef FEAT_ARABIC
		    else if (p_arshape && !p_tbidi && ARABIC_CHAR(mb_c))
		    {
			
			int	pc, pc1, nc;
			int	pcc[MAX_MCO];

			
			
			if (wp->w_p_rl)
			{
			    pc = prev_c;
			    pc1 = prev_c1;
			    nc = utf_ptr2char(ptr + mb_l);
			    prev_c1 = u8cc[0];
			}
			else
			{
			    pc = utfc_ptr2char(ptr + mb_l, pcc);
			    nc = prev_c;
			    pc1 = pcc[0];
			}
			prev_c = mb_c;

			mb_c = arabic_shape(mb_c, &c, &u8cc[0], pc, pc1, nc);
		    }
		    else
			prev_c = mb_c;
#endif
		}
		else	
		{
		    mb_l = MB_BYTE2LEN(c);
		    if (mb_l == 0)  
			mb_l = 1;
		    else if (mb_l > 1)
		    {
			
			
			if (ptr[1] >= 32)
			    mb_c = (c << 8) + ptr[1];
			else
			{
			    if (ptr[1] == NUL)
			    {
				
				mb_l = 1;
				transchar_nonprint(wp->w_buffer, wlv.extra, c);
				wlv.n_extra = (int)STRLEN(wlv.extra) - 1;
			    }
			    else
			    {
				
				mb_l = 2;
				STRCPY(wlv.extra, "XX");
				wlv.n_extra = 1;
			    }
			    wlv.p_extra = wlv.extra;
			    wlv.c_extra = NUL;
			    wlv.c_final = NUL;
			    c = *wlv.p_extra++;
			    if (area_attr == 0 && search_attr == 0)
			    {
				n_attr = wlv.n_extra + 1;
				wlv.extra_attr = hl_combine_attr(
						 wlv.win_attr, HL_ATTR(HLF_8));
				
				saved_attr2 = wlv.char_attr;
			    }
			    mb_c = c;
			}
		    }
		}
		
		
		
		if ((
# ifdef FEAT_RIGHTLEFT
			    wp->w_p_rl ? (wlv.col <= 0) :
# endif
				(wlv.col >= wp->w_width - 1))
			&& (*mb_char2cells)(mb_c) == 2)
		{
		    c = '>';
		    mb_c = c;
		    mb_utf8 = FALSE;
		    mb_l = 1;
		    multi_attr = hl_combine_attr(wlv.win_attr, HL_ATTR(HLF_AT));
		    
		    
		    --ptr;
#ifdef FEAT_CONCEAL
		    did_decrement_ptr = TRUE;
#endif
		}
		else if (*ptr != NUL)
		    ptr += mb_l - 1;

		
		
		
		if (skip_cells > 0 && mb_l > 1 && wlv.n_extra == 0)
		{
		    wlv.n_extra = 1;
		    wlv.c_extra = MB_FILLER_CHAR;
		    wlv.c_final = NUL;
		    c = ' ';
		    if (area_attr == 0 && search_attr == 0)
		    {
			n_attr = wlv.n_extra + 1;
			wlv.extra_attr = hl_combine_attr(
						wlv.win_attr, HL_ATTR(HLF_AT));
			saved_attr2 = wlv.char_attr; 
		    }
		    mb_c = c;
		    mb_utf8 = FALSE;
		    mb_l = 1;
		}

	    }
	    ++ptr;

	    if (extra_check)
	    {
#ifdef FEAT_SPELL
		
		
		
		
		v = (int)(ptr - line);
		if (spv->spv_has_spell && v >= word_end && v > cur_checked_col)
		{
		    spell_attr = 0;
		    
		    
		    if (c != 0 && (*skipwhite(prev_ptr) != NUL) && (
# ifdef FEAT_SYN_HL
				!has_syntax ||
# endif
				can_spell))
		    {
			char_u	*p;
			int	len;
			hlf_T	spell_hlf = HLF_COUNT;

			if (has_mbyte)
			    v -= mb_l - 1;

			
			
			if ((prev_ptr - line) - nextlinecol >= 0)
			    p = nextline + (prev_ptr - line) - nextlinecol;
			else
			    p = prev_ptr;
			spv->spv_cap_col -= (int)(prev_ptr - line);
			len = spell_check(wp, p, &spell_hlf, &spv->spv_cap_col,
							    spv->spv_unchanged);
			word_end = v + len;

			
			
			if (spell_hlf != HLF_COUNT
				&& (State & MODE_INSERT)
				&& wp->w_cursor.lnum == lnum
				&& wp->w_cursor.col >=
						    (colnr_T)(prev_ptr - line)
				&& wp->w_cursor.col < (colnr_T)word_end)
			{
			    spell_hlf = HLF_COUNT;
			    spell_redraw_lnum = lnum;
			}

			if (spell_hlf == HLF_COUNT && p != prev_ptr
				       && (p - nextline) + len > nextline_idx)
			{
			    
			    
			    spv->spv_checked_lnum = lnum + 1;
			    spv->spv_checked_col = (p - nextline) + len
								- nextline_idx;
			}

			
			if (spell_hlf != HLF_COUNT)
			    spell_attr = highlight_attr[spell_hlf];

			if (spv->spv_cap_col > 0)
			{
			    if (p != prev_ptr
				    && (p - nextline) + spv->spv_cap_col
								>= nextline_idx)
			    {
				
				
				spv->spv_capcol_lnum = lnum + 1;
				spv->spv_cap_col = ((p - nextline)
					    + spv->spv_cap_col - nextline_idx);
			    }
			    else
				
				spv->spv_cap_col += (prev_ptr - line);
			}
		    }
		}
		if (spell_attr != 0)
		{
		    if (!attr_pri)
			wlv.char_attr = hl_combine_attr(wlv.char_attr,
								   spell_attr);
		    else
			wlv.char_attr = hl_combine_attr(spell_attr,
								wlv.char_attr);
		}
#endif
#ifdef FEAT_LINEBREAK
		
		
		
		
		
		
		if ( wp->w_p_lbr && !wlv.need_lbr && c != NUL &&
			!VIM_ISBREAK((int)*ptr))
		    wlv.need_lbr = TRUE;
#endif
#ifdef FEAT_LINEBREAK
		
		if (wp->w_p_lbr && c0 == c && wlv.need_lbr
				  && VIM_ISBREAK(c) && !VIM_ISBREAK((int)*ptr))
		{
		    int	    mb_off = has_mbyte ? (*mb_head_off)(line, ptr - 1)
									   : 0;
		    char_u  *p = ptr - (mb_off + 1);
		    chartabsize_T cts;

		    init_chartabsize_arg(&cts, wp, lnum, wlv.vcol
# ifdef FEAT_PROP_POPUP
							     - vcol_first_char,
# endif
								      line, p);
# ifdef FEAT_PROP_POPUP
		    
		    cts.cts_has_prop_with_text = FALSE;
# endif
		    wlv.n_extra = win_lbr_chartabsize(&cts, NULL) - 1;
		    clear_chartabsize_arg(&cts);

		    if (on_last_col && c != TAB)
			
			
			
			search_attr = 0;

		    if (c == TAB && wlv.n_extra + wlv.col > wp->w_width)
# ifdef FEAT_VARTABS
			wlv.n_extra = tabstop_padding(wlv.vcol,
					      wp->w_buffer->b_p_ts,
					      wp->w_buffer->b_p_vts_array) - 1;
# else
			wlv.n_extra = (int)wp->w_buffer->b_p_ts
				    - wlv.vcol % (int)wp->w_buffer->b_p_ts - 1;
# endif

		    wlv.c_extra = mb_off > 0 ? MB_FILLER_CHAR : ' ';
		    wlv.c_final = NUL;
# ifdef FEAT_PROP_POPUP
		    if (wlv.n_extra > 0 && c != TAB)
			in_linebreak = TRUE;
# endif
		    if (VIM_ISWHITE(c))
		    {
# ifdef FEAT_CONCEAL
			if (c == TAB)
			    
			    FIX_FOR_BOGUSCOLS;
# endif
			if (!wp->w_p_list)
			    c = ' ';
		    }
		}
#endif
		if (wp->w_p_list)
		{
		    in_multispace = c == ' ' && (*ptr == ' '
				  || (prev_ptr > line && prev_ptr[-1] == ' '));
		    if (!in_multispace)
			multispace_pos = 0;
		}

		
		
		
		if (wp->w_p_list
			&& ((((c == 160 && mb_l == 1)
			      || (mb_utf8
				  && ((mb_c == 160 && mb_l == 2)
				      || (mb_c == 0x202f && mb_l == 3))))
			     && wp->w_lcs_chars.nbsp)
			    || (c == ' '
				&& mb_l == 1
				&& (wp->w_lcs_chars.space
				    || (in_multispace
					&& wp->w_lcs_chars.multispace != NULL))
				&& ptr - line >= leadcol
				&& ptr - line <= trailcol)))
		{
		    if (in_multispace && wp->w_lcs_chars.multispace != NULL)
		    {
			c = wp->w_lcs_chars.multispace[multispace_pos++];
			if (wp->w_lcs_chars.multispace[multispace_pos] == NUL)
			    multispace_pos = 0;
		    }
		    else
			c = (c == ' ') ? wp->w_lcs_chars.space
					: wp->w_lcs_chars.nbsp;
		    if (area_attr == 0 && search_attr == 0)
		    {
			n_attr = 1;
			wlv.extra_attr = hl_combine_attr(wlv.win_attr,
							       HL_ATTR(HLF_8));
			saved_attr2 = wlv.char_attr; 
		    }
		    mb_c = c;
		    if (enc_utf8 && utf_char2len(c) > 1)
		    {
			mb_utf8 = TRUE;
			u8cc[0] = 0;
			c = 0xc0;
		    }
		    else
			mb_utf8 = FALSE;
		}

		if (c == ' ' && ((trailcol != MAXCOL && ptr > line + trailcol)
				    || (leadcol != 0 && ptr < line + leadcol)))
		{
		    if (leadcol != 0 && in_multispace && ptr < line + leadcol
			    && wp->w_lcs_chars.leadmultispace != NULL)
		    {
			c = wp->w_lcs_chars.leadmultispace[multispace_pos++];
			if (wp->w_lcs_chars.leadmultispace[multispace_pos]
									== NUL)
			    multispace_pos = 0;
		    }

		    else if (ptr > line + trailcol && wp->w_lcs_chars.trail)
			c = wp->w_lcs_chars.trail;

		    else if (ptr < line + leadcol && wp->w_lcs_chars.lead)
			c = wp->w_lcs_chars.lead;

		    else if (leadcol != 0 && wp->w_lcs_chars.space)
			c = wp->w_lcs_chars.space;


		    if (!attr_pri)
		    {
			n_attr = 1;
			wlv.extra_attr = hl_combine_attr(wlv.win_attr,
							       HL_ATTR(HLF_8));
			saved_attr2 = wlv.char_attr; 
		    }
		    mb_c = c;
		    if (enc_utf8 && utf_char2len(c) > 1)
		    {
			mb_utf8 = TRUE;
			u8cc[0] = 0;
			c = 0xc0;
		    }
		    else
			mb_utf8 = FALSE;
		}
	    }

	    
	    if (!vim_isprintc(c))
	    {
		
		
		
		if (c == TAB && (!wp->w_p_list || wp->w_lcs_chars.tab1))
		{
		    int	    tab_len = 0;
		    int    vcol_adjusted = wlv.vcol; 
#ifdef FEAT_LINEBREAK
		    char_u  *sbr = get_showbreak_value(wp);

		    
		    
		    if (*sbr != NUL && wlv.vcol == wlv.vcol_sbr && wp->w_p_wrap)
			vcol_adjusted = wlv.vcol - MB_CHARLEN(sbr);
#endif
		    
#ifdef FEAT_VARTABS
		    tab_len = tabstop_padding(vcol_adjusted,
					      wp->w_buffer->b_p_ts,
					      wp->w_buffer->b_p_vts_array) - 1;
#else
		    tab_len = (int)wp->w_buffer->b_p_ts
			       - vcol_adjusted % (int)wp->w_buffer->b_p_ts - 1;
#endif

#ifdef FEAT_LINEBREAK
		    if (!wp->w_p_lbr || !wp->w_p_list)
#endif
		    {
			
			wlv.n_extra = tab_len;
		    }
#ifdef FEAT_LINEBREAK
		    else
		    {
			char_u	*p;
			int	len;
			int	i;
			int	saved_nextra = wlv.n_extra;

# ifdef FEAT_CONCEAL
			if (wlv.vcol_off_co > 0)
			    
			    tab_len += wlv.vcol_off_co;

			
			if (wp->w_p_list && wp->w_lcs_chars.tab1
						      && old_boguscols > 0
						      && wlv.n_extra > tab_len)
			    tab_len += wlv.n_extra - tab_len;
# endif
			if (tab_len > 0)
			{
			    
			    
			    
			    int tab2_len = mb_char2len(wp->w_lcs_chars.tab2);
			    len = tab_len * tab2_len;
			    if (wp->w_lcs_chars.tab3)
				len += mb_char2len(wp->w_lcs_chars.tab3)
								    - tab2_len;
			    if (wlv.n_extra > 0)
				len += wlv.n_extra - tab_len;
			    c = wp->w_lcs_chars.tab1;
			    p = alloc(len + 1);
			    if (p == NULL)
				wlv.n_extra = 0;
			    else
			    {
				vim_memset(p, ' ', len);
				p[len] = NUL;
				vim_free(wlv.p_extra_free);
				wlv.p_extra_free = p;
				for (i = 0; i < tab_len; i++)
				{
				    int lcs = wp->w_lcs_chars.tab2;

				    if (*p == NUL)
				    {
					tab_len = i;
					break;
				    }

				    
				    
				    if (wp->w_lcs_chars.tab3
							   && i == tab_len - 1)
					lcs = wp->w_lcs_chars.tab3;
				    p += mb_char2bytes(lcs, p);
				    wlv.n_extra += mb_char2len(lcs)
						  - (saved_nextra > 0 ? 1 : 0);
				}
				wlv.p_extra = wlv.p_extra_free;
# ifdef FEAT_CONCEAL
				
				
				
				if (wlv.vcol_off_co > 0)
				    wlv.n_extra -= wlv.vcol_off_co;
# endif
			    }
			}
		    }
#endif
#ifdef FEAT_CONCEAL
		    {
			int vc_saved = wlv.vcol_off_co;

			
			
			
			
			
			
			FIX_FOR_BOGUSCOLS;

			
			
			
			if (wlv.n_extra == tab_len + vc_saved && wp->w_p_list
						&& wp->w_lcs_chars.tab1)
			    tab_len += vc_saved;
		    }
#endif
		    mb_utf8 = FALSE;	
		    if (wp->w_p_list)
		    {
			c = (wlv.n_extra == 0 && wp->w_lcs_chars.tab3)
							? wp->w_lcs_chars.tab3
							: wp->w_lcs_chars.tab1;
#ifdef FEAT_LINEBREAK
			if (wp->w_p_lbr && wlv.p_extra != NULL
							&& *wlv.p_extra != NUL)
			    wlv.c_extra = NUL; 
			else
#endif
			    wlv.c_extra = wp->w_lcs_chars.tab2;
			wlv.c_final = wp->w_lcs_chars.tab3;
			n_attr = tab_len + 1;
			wlv.extra_attr = hl_combine_attr(wlv.win_attr,
							       HL_ATTR(HLF_8));
			saved_attr2 = wlv.char_attr; 
			mb_c = c;
			if (enc_utf8 && utf_char2len(c) > 1)
			{
			    mb_utf8 = TRUE;
			    u8cc[0] = 0;
			    c = 0xc0;
			}
		    }
		    else
		    {
			wlv.c_final = NUL;
			wlv.c_extra = ' ';
			c = ' ';
		    }
		}
		else if (c == NUL
			&& wlv.n_extra == 0
			&& (wp->w_p_list
			    || ((wlv.fromcol >= 0 || fromcol_prev >= 0)
				&& wlv.tocol > wlv.vcol
				&& VIsual_mode != Ctrl_V
				&& (
# ifdef FEAT_RIGHTLEFT
				    wp->w_p_rl ? (wlv.col >= 0) :
# endif
				    (wlv.col < wp->w_width))
				&& !(noinvcur
				    && lnum == wp->w_cursor.lnum
				    && (colnr_T)wlv.vcol == wp->w_virtcol)))
			&& lcs_eol_one > 0)
		{
		    
		    
#if defined(FEAT_DIFF) || defined(LINE_ATTR)
		    
		    
		    if (
# ifdef FEAT_DIFF
			    wlv.diff_hlf == (hlf_T)0
#  ifdef LINE_ATTR
			    &&
#  endif
# endif
# ifdef LINE_ATTR
			    wlv.line_attr == 0
# endif
		       )
#endif
		    {
			
			
			if (!(area_highlighting && virtual_active()
				       && wlv.tocol != MAXCOL
				       && wlv.vcol < wlv.tocol))
			    wlv.p_extra = (char_u *)"";
			wlv.n_extra = 0;
		    }
		    if (wp->w_p_list && wp->w_lcs_chars.eol > 0)
			c = wp->w_lcs_chars.eol;
		    else
			c = ' ';
		    lcs_eol_one = -1;
		    --ptr;	    
		    if (!attr_pri)
		    {
			wlv.extra_attr = hl_combine_attr(wlv.win_attr,
							      HL_ATTR(HLF_AT));
			n_attr = 1;
		    }
		    mb_c = c;
		    if (enc_utf8 && utf_char2len(c) > 1)
		    {
			mb_utf8 = TRUE;
			u8cc[0] = 0;
			c = 0xc0;
		    }
		    else
			mb_utf8 = FALSE;	
		}
		else if (c != NUL)
		{
		    wlv.p_extra = transchar_buf(wp->w_buffer, c);
		    if (wlv.n_extra == 0)
			wlv.n_extra = byte2cells(c) - 1;
#ifdef FEAT_RIGHTLEFT
		    if ((dy_flags & DY_UHEX) && wp->w_p_rl)
			rl_mirror(wlv.p_extra);	
#endif
		    wlv.c_extra = NUL;
		    wlv.c_final = NUL;
#ifdef FEAT_LINEBREAK
		    if (wp->w_p_lbr)
		    {
			char_u *p;

			c = *wlv.p_extra;
			p = alloc(wlv.n_extra + 1);
			if (p == NULL)
			    wlv.n_extra = 0;
			else
			{
			    vim_memset(p, ' ', wlv.n_extra);
			    STRNCPY(p, wlv.p_extra + 1, STRLEN(wlv.p_extra) - 1);
			    p[wlv.n_extra] = NUL;
			    vim_free(wlv.p_extra_free);
			    wlv.p_extra_free = wlv.p_extra = p;
			}
		    }
		    else
#endif
		    {
			wlv.n_extra = byte2cells(c) - 1;
			c = *wlv.p_extra++;
		    }
		    if (!attr_pri)
		    {
			n_attr = wlv.n_extra + 1;
			wlv.extra_attr = hl_combine_attr(wlv.win_attr,
							       HL_ATTR(HLF_8));
#ifdef FEAT_PROP_POPUP
		    if (text_prop_type != NULL &&
			     text_prop_flags & PT_FLAG_OVERRIDE)
			wlv.extra_attr = hl_combine_attr(text_prop_attr, wlv.extra_attr);
#endif

			saved_attr2 = wlv.char_attr; 
		    }
		    mb_utf8 = FALSE;	
		}
		else if (VIsual_active
			 && (VIsual_mode == Ctrl_V
			     || VIsual_mode == 'v')
			 && virtual_active()
			 && wlv.tocol != MAXCOL
			 && wlv.vcol < wlv.tocol
			 && (
#ifdef FEAT_RIGHTLEFT
			    wp->w_p_rl ? (wlv.col >= 0) :
#endif
			    (wlv.col < wp->w_width)))
		{
		    c = ' ';
		    --ptr;	    
		}
#if defined(LINE_ATTR)
		else if ((
# ifdef FEAT_DIFF
			    wlv.diff_hlf != (hlf_T)0 ||
# endif
# ifdef FEAT_TERMINAL
			    wlv.win_attr != 0 ||
# endif
			    wlv.line_attr != 0
			) && (
# ifdef FEAT_RIGHTLEFT
			    wp->w_p_rl ? (wlv.col >= 0) :
# endif
			    (wlv.col
# ifdef FEAT_CONCEAL
				- wlv.boguscols
# endif
					    < wp->w_width)))
		{
		    
		    c = ' ';
		    --ptr;	    

		    
		    ++did_line_attr;

		    
		    if (wlv.line_attr != 0 && wlv.char_attr == search_attr
					&& (did_line_attr > 1
					    || (wp->w_p_list &&
						wp->w_lcs_chars.eol > 0)))
			wlv.char_attr = wlv.line_attr;
#ifdef FEAT_SIGNS
		    
		    
		    if (sign_present && wlv.sattr.sat_linehl > 0 && wlv.draw_state == WL_LINE
			 && !(wp->w_p_cul && lnum == wp->w_cursor.lnum))
			wlv.char_attr = wlv.sattr.sat_linehl;
#endif
# ifdef FEAT_DIFF
		    if (wlv.diff_hlf == HLF_TXD)
		    {
			wlv.diff_hlf = HLF_CHD;
			if (vi_attr == 0 || wlv.char_attr != vi_attr)
			{
			    wlv.char_attr = HL_ATTR(wlv.diff_hlf);
			    if (wp->w_p_cul && lnum == wp->w_cursor.lnum
				    && wp->w_p_culopt_flags != CULOPT_NBR
				    && (!wlv.cul_screenline
					|| (wlv.vcol >= left_curline_col
					    && wlv.vcol <= right_curline_col)))
				wlv.char_attr = hl_combine_attr(
					  wlv.char_attr, HL_ATTR(HLF_CUL));
			}
		    }
# endif
# ifdef FEAT_TERMINAL
		    if (wlv.win_attr != 0)
		    {
			wlv.char_attr = wlv.win_attr;
			if (wp->w_p_cul && lnum == wp->w_cursor.lnum
				    && wp->w_p_culopt_flags != CULOPT_NBR)
			{
			    if (!wlv.cul_screenline
				    || (wlv.vcol >= left_curline_col
					     && wlv.vcol <= right_curline_col))
				wlv.char_attr = hl_combine_attr(
					      wlv.char_attr, HL_ATTR(HLF_CUL));
			}
			else if (wlv.line_attr)
			    wlv.char_attr = hl_combine_attr(
						 wlv.char_attr, wlv.line_attr);
		    }
# endif
		}
#endif
	    }

#ifdef FEAT_CONCEAL
	    if (   wp->w_p_cole > 0
		&& (wp != curwin || lnum != wp->w_cursor.lnum
						    || conceal_cursor_line(wp))
		&& ((syntax_flags & HL_CONCEAL) != 0 || has_match_conc > 0)
		&& !(lnum_in_visual_area
				    && vim_strchr(wp->w_p_cocu, 'v') == NULL))
	    {
		wlv.char_attr = conceal_attr;
		if (((prev_syntax_id != syntax_seqnr
					   && (syntax_flags & HL_CONCEAL) != 0)
			    || has_match_conc > 1)
			&& (syn_get_sub_char() != NUL
				|| (has_match_conc && match_conc)
				|| wp->w_p_cole == 1)
			&& wp->w_p_cole != 3)
		{
		    
		    
		    if (has_match_conc && match_conc)
			c = match_conc;
		    else if (syn_get_sub_char() != NUL)
			c = syn_get_sub_char();
		    else if (wp->w_lcs_chars.conceal != NUL)
			c = wp->w_lcs_chars.conceal;
		    else
			c = ' ';

		    if (has_mbyte && (*mb_char2cells)(mb_c) > 1)
			
			
			wlv.n_extra++;

		    mb_c = c;
		    if (enc_utf8 && utf_char2len(c) > 1)
		    {
			mb_utf8 = TRUE;
			u8cc[0] = 0;
			c = 0xc0;
		    }
		    else
			mb_utf8 = FALSE;	

		    prev_syntax_id = syntax_seqnr;

		    if (wlv.n_extra > 0)
			wlv.vcol_off_co += wlv.n_extra;
		    wlv.vcol += wlv.n_extra;
		    if (wp->w_p_wrap && wlv.n_extra > 0)
		    {
# ifdef FEAT_RIGHTLEFT
			if (wp->w_p_rl)
			{
			    wlv.col -= wlv.n_extra;
			    wlv.boguscols -= wlv.n_extra;
			}
			else
# endif
			{
			    wlv.boguscols += wlv.n_extra;
			    wlv.col += wlv.n_extra;
			}
		    }
		    wlv.n_extra = 0;
		    n_attr = 0;
		}
		else if (skip_cells == 0)
		{
		    is_concealing = TRUE;
		    skip_cells = 1;
		}
	    }
	    else
	    {
		prev_syntax_id = 0;
		is_concealing = FALSE;
	    }

	    if (skip_cells > 0 && did_decrement_ptr)
		
		++ptr;

#endif 
	}

#ifdef FEAT_CONCEAL
	
	
	
	
	if (!did_wcol && wlv.draw_state == WL_LINE
		&& wp == curwin && lnum == wp->w_cursor.lnum
		&& conceal_cursor_line(wp)
		&& (wlv.vcol + skip_cells >= wp->w_virtcol || c == NUL))
	{
# ifdef FEAT_RIGHTLEFT
	    if (wp->w_p_rl)
		wp->w_wcol = wp->w_width - wlv.col + wlv.boguscols - 1;
	    else
# endif
		wp->w_wcol = wlv.col - wlv.boguscols;
	    if (wlv.vcol + skip_cells < wp->w_virtcol)
		
		wp->w_wcol += wp->w_virtcol - wlv.vcol - skip_cells;
	    wp->w_wrow = wlv.row;
	    did_wcol = TRUE;
	    curwin->w_valid |= VALID_WCOL|VALID_WROW|VALID_VIRTCOL;
# ifdef FEAT_PROP_POPUP
	    curwin->w_flags &= ~(WFLAG_WCOL_OFF_ADDED | WFLAG_WROW_OFF_ADDED);
# endif
	}
#endif

	
	
	
	if (wlv.n_attr_skip == 0 && n_attr > 0
		&& wlv.draw_state == WL_LINE
		&& (!attr_pri
#ifdef FEAT_PROP_POPUP
		    || (text_prop_flags & PT_FLAG_OVERRIDE)
#endif
		   ))
	{
#ifdef LINE_ATTR
	    if (wlv.line_attr)
		wlv.char_attr = hl_combine_attr(wlv.line_attr, wlv.extra_attr);
	    else
#endif
		wlv.char_attr = wlv.extra_attr;
#ifdef FEAT_PROP_POPUP
	    if (reset_extra_attr)
	    {
		reset_extra_attr = FALSE;
		wlv.extra_attr = 0;
	    }
#endif
	}

#if defined(FEAT_XIM) && defined(FEAT_GUI_GTK)
	
	
	
	if (p_imst == IM_ON_THE_SPOT
		&& xic != NULL
		&& lnum == wp->w_cursor.lnum
		&& (State & MODE_INSERT)
		&& !p_imdisable
		&& im_is_preediting()
		&& wlv.draw_state == WL_LINE)
	{
	    colnr_T tcol;

	    if (preedit_end_col == MAXCOL)
		getvcol(curwin, &(wp->w_cursor), &tcol, NULL, NULL);
	    else
		tcol = preedit_end_col;
	    if ((int)preedit_start_col <= wlv.vcol && wlv.vcol < (int)tcol)
	    {
		if (feedback_old_attr < 0)
		{
		    feedback_col = 0;
		    feedback_old_attr = wlv.char_attr;
		}
		wlv.char_attr = im_get_feedback_attr(feedback_col);
		if (wlv.char_attr < 0)
		    wlv.char_attr = feedback_old_attr;
		feedback_col++;
	    }
	    else if (feedback_old_attr >= 0)
	    {
		wlv.char_attr = feedback_old_attr;
		feedback_old_attr = -1;
		feedback_col = 0;
	    }
	}
#endif
	
	
	
	if (lcs_prec_todo != NUL
		&& wp->w_p_list
		&& (wp->w_p_wrap ? (wp->w_skipcol > 0 && wlv.row == 0)
				 : wp->w_leftcol > 0)
#ifdef FEAT_DIFF
		&& wlv.filler_todo <= 0
#endif
		&& wlv.draw_state > WL_NR
		&& c != NUL)
	{
	    c = wp->w_lcs_chars.prec;
	    lcs_prec_todo = NUL;
	    if (has_mbyte && (*mb_char2cells)(mb_c) > 1)
	    {
		
		
		wlv.c_extra = MB_FILLER_CHAR;
		wlv.c_final = NUL;
		wlv.n_extra = 1;
		n_attr = 2;
		wlv.extra_attr =
				hl_combine_attr(wlv.win_attr, HL_ATTR(HLF_AT));
	    }
	    mb_c = c;
	    if (enc_utf8 && utf_char2len(c) > 1)
	    {
		mb_utf8 = TRUE;
		u8cc[0] = 0;
		c = 0xc0;
	    }
	    else
		mb_utf8 = FALSE;	
	    if (!attr_pri)
	    {
		saved_attr3 = wlv.char_attr; 
		wlv.char_attr = hl_combine_attr(wlv.win_attr, HL_ATTR(HLF_AT));
		n_attr3 = 1;
	    }
	}

	
	if ((c == NUL
#if defined(LINE_ATTR)
		|| did_line_attr == 1
#endif
		) && wlv.eol_hl_off == 0)
	{
#ifdef FEAT_SEARCH_EXTRA
	    
	    
	    int prevcol_hl_flag = get_prevcol_hl_flag(wp, &screen_search_hl,
					      (int)(ptr - line) - (c == NUL));
#endif
	    
	    
	    
	    
	    if (wp->w_lcs_chars.eol == lcs_eol_one
		    && ((area_attr != 0 && wlv.vcol == wlv.fromcol
			    && (VIsual_mode != Ctrl_V
				|| lnum == VIsual.lnum
				|| lnum == curwin->w_cursor.lnum)
			    && c == NUL)
#ifdef FEAT_SEARCH_EXTRA
			
			|| (prevcol_hl_flag
# ifdef FEAT_SYN_HL
			    && !(wp->w_p_cul && lnum == wp->w_cursor.lnum
				    && !(wp == curwin && VIsual_active))
# endif
# ifdef FEAT_DIFF
			    && wlv.diff_hlf == (hlf_T)0
# endif
# if defined(LINE_ATTR)
			    && did_line_attr <= 1
# endif
			   )
#endif
		       ))
	    {
		int n = 0;

#ifdef FEAT_RIGHTLEFT
		if (wp->w_p_rl)
		{
		    if (wlv.col < 0)
			n = 1;
		}
		else
#endif
		{
		    if (wlv.col >= wp->w_width)
			n = -1;
		}
		if (n != 0)
		{
		    
		    
		    wlv.off += n;
		    wlv.col += n;
		}
		else
		{
		    
		    ScreenLines[wlv.off] = ' ';
		    if (enc_utf8)
			ScreenLinesUC[wlv.off] = 0;
		}
#ifdef FEAT_SEARCH_EXTRA
		if (area_attr == 0)
		{
		    
		    
		    get_search_match_hl(wp, &screen_search_hl,
					   (int)(ptr - line), &wlv.char_attr);
		}
#endif
		ScreenAttrs[wlv.off] = wlv.char_attr;
		ScreenCols[wlv.off] = wlv.vcol;
#ifdef FEAT_RIGHTLEFT
		if (wp->w_p_rl)
		{
		    --wlv.col;
		    --wlv.off;
		}
		else
#endif
		{
		    ++wlv.col;
		    ++wlv.off;
		}
		++wlv.vcol;
		wlv.eol_hl_off = 1;
	    }
	}

	
	if (c == NUL)
	{
#ifdef FEAT_PROP_POPUP
	    if (text_prop_follows)
	    {
		
		--ptr;
		c = ' ';
	    }
	    else
#endif
	    {
		draw_screen_line(wp, &wlv);

		
		
		if (wp == curwin && lnum == curwin->w_cursor.lnum)
		{
		    curwin->w_cline_row = startrow;
		    curwin->w_cline_height = wlv.row - startrow;
#ifdef FEAT_FOLDING
		    curwin->w_cline_folded = FALSE;
#endif
		    curwin->w_valid |= (VALID_CHEIGHT|VALID_CROW);
		}
		break;
	    }
	}

	
	
	if (wp->w_lcs_chars.ext != NUL
		&& wlv.draw_state == WL_LINE
		&& wp->w_p_list
		&& !wp->w_p_wrap
#ifdef FEAT_DIFF
		&& wlv.filler_todo <= 0
#endif
		&& (
#ifdef FEAT_RIGHTLEFT
		    wp->w_p_rl ? wlv.col == 0 :
#endif
		    wlv.col == wp->w_width - 1)
		&& (*ptr != NUL
		    || lcs_eol_one > 0
		    || (wlv.n_extra > 0 && (wlv.c_extra != NUL
						     || *wlv.p_extra != NUL))
#ifdef FEAT_PROP_POPUP
		    || text_prop_next <= last_textprop_text_idx
#endif
		   ))
	{
	    c = wp->w_lcs_chars.ext;
	    wlv.char_attr = hl_combine_attr(wlv.win_attr, HL_ATTR(HLF_AT));
	    mb_c = c;
	    if (enc_utf8 && utf_char2len(c) > 1)
	    {
		mb_utf8 = TRUE;
		u8cc[0] = 0;
		c = 0xc0;
	    }
	    else
		mb_utf8 = FALSE;
	}

#ifdef FEAT_SYN_HL
	
	if (wlv.draw_color_col)
	    wlv.draw_color_col = advance_color_col(VCOL_HLC, &wlv.color_cols);

	
	
	
	
	
	
	vcol_save_attr = -1;
	if (((wlv.draw_state == WL_LINE
		    || wlv.draw_state == WL_BRI
		    || wlv.draw_state == WL_SBR)
		&& !lnum_in_visual_area
		&& search_attr == 0
		&& area_attr == 0)
# ifdef FEAT_DIFF
			&& wlv.filler_todo <= 0
# endif
		)
	{
	    if (wp->w_p_cuc && VCOL_HLC == (int)wp->w_virtcol
						 && lnum != wp->w_cursor.lnum)
	    {
		vcol_save_attr = wlv.char_attr;
		wlv.char_attr = hl_combine_attr(wlv.char_attr,
							     HL_ATTR(HLF_CUC));
	    }
	    else if (wlv.draw_color_col && VCOL_HLC == *wlv.color_cols)
	    {
		vcol_save_attr = wlv.char_attr;
		wlv.char_attr = hl_combine_attr(wlv.char_attr, HL_ATTR(HLF_MC));
	    }
	}
#endif

	if (wlv.draw_state == WL_LINE)
	    vcol_prev = wlv.vcol;

	
	
	if (wlv.draw_state < WL_LINE || skip_cells <= 0)
	{
	    
#if defined(FEAT_RIGHTLEFT)
	    if (has_mbyte && wp->w_p_rl && (*mb_char2cells)(mb_c) > 1)
	    {
		
		--wlv.off;
		--wlv.col;
	    }
#endif
	    ScreenLines[wlv.off] = c;
	    if (enc_dbcs == DBCS_JPNU)
	    {
		if ((mb_c & 0xff00) == 0x8e00)
		    ScreenLines[wlv.off] = 0x8e;
		ScreenLines2[wlv.off] = mb_c & 0xff;
	    }
	    else if (enc_utf8)
	    {
		if (mb_utf8)
		{
		    int i;

		    ScreenLinesUC[wlv.off] = mb_c;
		    if ((c & 0xff) == 0)
			ScreenLines[wlv.off] = 0x80;   
		    for (i = 0; i < Screen_mco; ++i)
		    {
			ScreenLinesC[i][wlv.off] = u8cc[i];
			if (u8cc[i] == 0)
			    break;
		    }
		}
		else
		    ScreenLinesUC[wlv.off] = 0;
	    }
	    if (multi_attr)
	    {
		ScreenAttrs[wlv.off] = multi_attr;
		multi_attr = 0;
	    }
	    else
		ScreenAttrs[wlv.off] = wlv.char_attr;

	    if (wlv.draw_state > WL_NR
#ifdef FEAT_DIFF
		    && wlv.filler_todo <= 0
#endif
		    )
		ScreenCols[wlv.off] = wlv.vcol;
	    else
		ScreenCols[wlv.off] = -1;

	    if (has_mbyte && (*mb_char2cells)(mb_c) > 1)
	    {
		
		++wlv.off;
		++wlv.col;
		if (enc_utf8)
		    
		    ScreenLines[wlv.off] = 0;
		else
		    
		    ScreenLines[wlv.off] = mb_c & 0xff;

		if (wlv.draw_state > WL_NR
#ifdef FEAT_DIFF
			&& wlv.filler_todo <= 0
#endif
			)
		    ScreenCols[wlv.off] = ++wlv.vcol;
		else
		    ScreenCols[wlv.off] = -1;

		
		
		if (wlv.tocol == wlv.vcol)
		    ++wlv.tocol;

#ifdef FEAT_RIGHTLEFT
		if (wp->w_p_rl)
		{
		    
		    --wlv.off;
		    --wlv.col;
		}
#endif
	    }
#ifdef FEAT_RIGHTLEFT
	    if (wp->w_p_rl)
	    {
		--wlv.off;
		--wlv.col;
	    }
	    else
#endif
	    {
		++wlv.off;
		++wlv.col;
	    }
	}
#ifdef FEAT_CONCEAL
	else if (wp->w_p_cole > 0 && is_concealing)
	{
	    int concealed_wide = has_mbyte && (*mb_char2cells)(mb_c) > 1;

	    --skip_cells;
	    ++wlv.vcol_off_co;
	    if (concealed_wide)
	    {
		
		
		++wlv.vcol;
		++wlv.vcol_off_co;
	    }

	    if (wlv.n_extra > 0)
		wlv.vcol_off_co += wlv.n_extra;

	    if (wp->w_p_wrap)
	    {
		
		
		
		
		
		
		
		
		
		
		
		if (wlv.n_extra > 0)
		{
		    wlv.vcol += wlv.n_extra;
# ifdef FEAT_RIGHTLEFT
		    if (wp->w_p_rl)
		    {
			wlv.col -= wlv.n_extra;
			wlv.boguscols -= wlv.n_extra;
		    }
		    else
# endif
		    {
			wlv.col += wlv.n_extra;
			wlv.boguscols += wlv.n_extra;
		    }
		    wlv.n_extra = 0;
		    n_attr = 0;
		}

		if (concealed_wide)
		{
		    
# ifdef FEAT_RIGHTLEFT
		    if (wp->w_p_rl)
		    {
			--wlv.boguscols;
			--wlv.col;
		    }
		    else
# endif
		    {
			++wlv.boguscols;
			++wlv.col;
		    }
		}

# ifdef FEAT_RIGHTLEFT
		if (wp->w_p_rl)
		{
		    --wlv.boguscols;
		    --wlv.col;
		}
		else
# endif
		{
		    ++wlv.boguscols;
		    ++wlv.col;
		}
	    }
	    else
	    {
		if (wlv.n_extra > 0)
		{
		    wlv.vcol += wlv.n_extra;
		    wlv.n_extra = 0;
		    n_attr = 0;
		}
	    }

	}
#endif 
	else
	    --skip_cells;

	if (wlv.draw_state > WL_NR && skipped_cells > 0)
	{
	    wlv.vcol += skipped_cells;
	    skipped_cells = 0;
	}

	
	
	if (wlv.draw_state > WL_NR
#ifdef FEAT_DIFF
		&& wlv.filler_todo <= 0
#endif
		)
	    ++wlv.vcol;

#ifdef FEAT_SYN_HL
	if (vcol_save_attr >= 0)
	    wlv.char_attr = vcol_save_attr;
#endif

	
	if (wlv.draw_state > WL_NR && n_attr3 > 0 && --n_attr3 == 0)
	    wlv.char_attr = saved_attr3;

	
	if (n_attr > 0 && wlv.draw_state == WL_LINE
				      && wlv.n_attr_skip == 0 && --n_attr == 0)
	    wlv.char_attr = saved_attr2;
	if (wlv.n_attr_skip > 0)
	    --wlv.n_attr_skip;

	
	
	if ((
#ifdef FEAT_RIGHTLEFT
	    wp->w_p_rl ? (wlv.col < 0) :
#endif
				    (wlv.col >= wp->w_width))
		&& (wlv.draw_state != WL_LINE
		    || *ptr != NUL
#ifdef FEAT_DIFF
		    || wlv.filler_todo > 0
#endif
#ifdef FEAT_PROP_POPUP
		    || text_prop_above || text_prop_follows
		    || text_prop_next <= last_textprop_text_idx
#endif
		    || (wp->w_p_list && wp->w_lcs_chars.eol != NUL
						&& lcs_eol_one != -1)
		    || (wlv.n_extra != 0 && (wlv.c_extra != NUL
						      || *wlv.p_extra != NUL)))
		)
	{
#ifdef FEAT_CONCEAL
	    wlv.col -= wlv.boguscols;
	    
	    if (wlv.boguscols != 0 && (
# ifdef LINE_ATTR
			wlv.line_attr != 0 ||
# endif
			wlv.win_attr != 0
			)
	       )
	    {
		int attr = wlv.win_attr;
# ifdef LINE_ATTR
		if (wlv.line_attr != 0)
		    attr = hl_combine_attr(attr, wlv.line_attr);
# endif
		while ((
# ifdef FEAT_RIGHTLEFT
			    wp->w_p_rl ? wlv.col >= 0 :
# endif
			    wlv.col < wp->w_width))
		{
		    ScreenLines[wlv.off] = ' ';
		    if (enc_utf8)
			ScreenLinesUC[wlv.off] = 0;
		    ScreenAttrs[wlv.off] = attr;
		    ScreenCols[wlv.off] = wlv.vcol - 1;
# ifdef FEAT_RIGHTLEFT
		    if (wp->w_p_rl)
		    {
			wlv.off--;
			wlv.col--;
			wlv.boguscols++;
		    }
		    else
# endif
		    {
			wlv.off++;
			wlv.col++;
			wlv.boguscols--;
		    }
		}
	    }
	    wlv_screen_line(wp, &wlv, TRUE);
	    wlv.col += wlv.boguscols;
	    wlv.boguscols = 0;
	    wlv.vcol_off_co = 0;
#else
	    wlv_screen_line(wp, &wlv, TRUE);
#endif
	    ++wlv.row;
	    ++wlv.screen_row;

	    
	    if (!wp->w_p_wrap
#ifdef FEAT_DIFF
			&& wlv.filler_todo <= 0
#endif
#ifdef FEAT_PROP_POPUP
			&& !text_prop_above
			&& !text_prop_follows
#endif
		       )
		break;
#ifdef FEAT_PROP_POPUP
	    if (!wp->w_p_wrap && text_prop_follows && !text_prop_above)
	    {
		
		ptr = line + (size_t)ml_get_buf_len(wp->w_buffer, lnum);
# ifdef FEAT_LINEBREAK
		wlv.dont_use_showbreak = TRUE;
# endif
	    }
#endif

	    
	    if (wlv.draw_state != WL_LINE
#ifdef FEAT_DIFF
		    && wlv.filler_todo <= 0
#endif
		    )
	    {
		win_draw_end(wp, '@', ' ', TRUE, wlv.row, wp->w_height, HLF_AT);
		draw_vsep_win(wp, wlv.row);
		wlv.row = endrow;
	    }

	    
	    if (wlv.row == endrow)
	    {
		++wlv.row;
		break;
	    }

	    if (screen_cur_row == wlv.screen_row - 1
#ifdef FEAT_DIFF
		     && wlv.filler_todo <= 0
#endif
#ifdef FEAT_PROP_POPUP
		     && !text_prop_above && !text_prop_follows
#endif
		     && wp->w_width == Columns)
	    {
		
		LineWraps[wlv.screen_row - 1] = TRUE;

		
		
		
		
		
		
		
		
		
		
		if (p_tf
#ifdef FEAT_GUI
			 && !gui.in_use
#endif
			 && !(has_mbyte
			     && ((*mb_off2cells)(LineOffset[wlv.screen_row],
				   LineOffset[wlv.screen_row] + screen_Columns)
									  == 2
				 || (*mb_off2cells)(
				     LineOffset[wlv.screen_row - 1]
							    + (int)Columns - 2,
				     LineOffset[wlv.screen_row]
						      + screen_Columns) == 2)))
		{
		    
		    
		    
		    
		    if (screen_cur_col != wp->w_width)
			screen_char(LineOffset[wlv.screen_row - 1]
						       + (unsigned)Columns - 1,
				       wlv.screen_row - 1, (int)(Columns - 1));

		    
		    
		    if (has_mbyte && MB_BYTE2LEN(ScreenLines[LineOffset[
				     wlv.screen_row - 1] + (Columns - 1)]) > 1)
			out_char(' ');
		    else
			out_char(ScreenLines[LineOffset[wlv.screen_row - 1]
							    + (Columns - 1)]);
		    
		    ScreenAttrs[LineOffset[wlv.screen_row]] = (sattr_T)-1;
		    screen_start();	
		}
	    }

	    win_line_start(wp, &wlv, TRUE);

	    lcs_prec_todo = wp->w_lcs_chars.prec;
#ifdef FEAT_LINEBREAK
	    if (!wlv.dont_use_showbreak
# ifdef FEAT_DIFF
		    && wlv.filler_todo <= 0
# endif
	       )
		wlv.need_showbreak = TRUE;
#endif
#ifdef FEAT_DIFF
	    --wlv.filler_todo;
	    
	    
	    if (wlv.filler_todo == 0 && wp->w_botfill)
		break;
#endif
	}

    }	
#ifdef FEAT_PROP_POPUP
    vim_free(text_props);
    vim_free(text_prop_idxs);
    vim_free(p_extra_free2);
#endif

    vim_free(wlv.p_extra_free);
    vim_free(wlv.saved_p_extra_free);
    return wlv.row;
}
