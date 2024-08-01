


#include "vim.h"

#ifdef FEAT_EVAL
static void set_vv_searchforward(void);
static int first_submatch(regmmatch_T *rp);
#endif
#ifdef FEAT_FIND_ID
static char_u *get_line_and_copy(linenr_T lnum, char_u *buf);
static void show_pat_in_path(char_u *, int, int, int, FILE *, linenr_T *, int);
#endif

typedef struct searchstat
{
    int	    cur;	    
    int	    cnt;	    
    int	    exact_match;    
    int	    incomplete;	    
			    
			    
    int	    last_maxcount;  
} searchstat_T;

#ifdef FEAT_SEARCH_EXTRA
static void save_incsearch_state(void);
static void restore_incsearch_state(void);
#endif
static int check_prevcol(char_u *linep, int col, int ch, int *prevcol);
static int find_rawstring_end(char_u *linep, pos_T *startpos, pos_T *endpos);
static void find_mps_values(int *initc, int *findc, int *backwards, int switchit);
static int is_zero_width(char_u *pattern, size_t patternlen, int move, pos_T *cur, int direction);
static void cmdline_search_stat(int dirc, pos_T *pos, pos_T *cursor_pos, int show_top_bot_msg, char_u *msgbuf, size_t msgbuflen, int recompute, int maxcount, int timeout);
static void update_search_stat(int dirc, pos_T *pos, pos_T *cursor_pos, searchstat_T *stat, int recompute, int maxcount, int timeout);
static int fuzzy_match_compute_score(char_u *str, int strSz, int_u *matches, int numMatches);
static int fuzzy_match_recursive(char_u *fuzpat, char_u *str, int_u strIdx, int *outScore, char_u *strBegin, int strLen, int_u *srcMatches, int_u *matches, int maxMatches, int nextMatch, int *recursionCount);
#if defined(FEAT_EVAL) || defined(FEAT_PROTO)
static int fuzzy_match_item_compare(const void *s1, const void *s2);
static void fuzzy_match_in_list(list_T *l, char_u *str, int matchseq, char_u *key, callback_T *item_cb, int retmatchpos, list_T *fmatchlist, int max_matches);
static void do_fuzzymatch(typval_T *argvars, typval_T *rettv, int retmatchpos);
#endif
static int fuzzy_match_str_compare(const void *s1, const void *s2);
static void fuzzy_match_str_sort(fuzmatch_str_T *fm, int sz);
static int fuzzy_match_func_compare(const void *s1, const void *s2);
static void fuzzy_match_func_sort(fuzmatch_str_T *fm, int sz);
static int fuzzy_match_str_in_line(char_u **ptr, char_u *pat, int *len, pos_T *current_pos);

#define SEARCH_STAT_DEF_TIMEOUT 40L
#define SEARCH_STAT_DEF_MAX_COUNT 99
#define SEARCH_STAT_BUF_LEN 12






static spat_T spats[2] =
{
    {NULL, 0, TRUE, FALSE, {'/', 0, 0, 0L}},	
    {NULL, 0, TRUE, FALSE, {'/', 0, 0, 0L}}	
};

static int last_idx = 0;	

static char_u lastc[2] = {NUL, NUL};	
static int lastcdir = FORWARD;		
static int last_t_cmd = TRUE;		
static char_u	lastc_bytes[MB_MAXBYTES + 1];
static int	lastc_bytelen = 1;	


static spat_T	    saved_spats[ARRAY_LENGTH(spats)];
static char_u	    *saved_mr_pattern = NULL;
static size_t	    saved_mr_patternlen = 0;
# ifdef FEAT_SEARCH_EXTRA
static int	    saved_spats_last_idx = 0;
static int	    saved_spats_no_hlsearch = 0;
# endif


static char_u	    *mr_pattern = NULL;
static size_t	    mr_patternlen = 0;

#ifdef FEAT_FIND_ID

typedef struct SearchedFile
{
    FILE	*fp;		
    char_u	*name;		
    linenr_T	lnum;		
    int		matched;	
} SearchedFile;
#endif


    int
search_regcomp(
    char_u	*pat,
    size_t	patlen,
    char_u	**used_pat,
    int		pat_save,
    int		pat_use,
    int		options,
    regmmatch_T	*regmatch)	
{
    int		magic;

    rc_did_emsg = FALSE;
    magic = magic_isset();

    
    if (pat == NULL || *pat == NUL)
    {
	int i;

	if (pat_use == RE_LAST)
	    i = last_idx;
	else
	    i = pat_use;
	if (spats[i].pat == NULL)	
	{
	    if (pat_use == RE_SUBST)
		emsg(_(e_no_previous_substitute_regular_expression));
	    else
		emsg(_(e_no_previous_regular_expression));
	    rc_did_emsg = TRUE;
	    return FAIL;
	}
	pat = spats[i].pat;
	patlen = spats[i].patlen;
	magic = spats[i].magic;
	no_smartcase = spats[i].no_scs;
    }
    else if (options & SEARCH_HIS)	
	add_to_history(HIST_SEARCH, pat, patlen, TRUE, NUL);

    if (used_pat)
	*used_pat = pat;

    vim_free(mr_pattern);
#ifdef FEAT_RIGHTLEFT
    if (curwin->w_p_rl && *curwin->w_p_rlc == 's')
	mr_pattern = reverse_text(pat);
    else
#endif
	mr_pattern = vim_strnsave(pat, patlen);
    if (mr_pattern == NULL)
	mr_patternlen = 0;
    else
	mr_patternlen = patlen;

    
    if (!(options & SEARCH_KEEP)
			       && (cmdmod.cmod_flags & CMOD_KEEPPATTERNS) == 0)
    {
	
	if (pat_save == RE_SEARCH || pat_save == RE_BOTH)
	    save_re_pat(RE_SEARCH, pat, patlen, magic);
	
	if (pat_save == RE_SUBST || pat_save == RE_BOTH)
	    save_re_pat(RE_SUBST, pat, patlen, magic);
    }

    regmatch->rmm_ic = ignorecase(pat);
    regmatch->rmm_maxcol = 0;
    regmatch->regprog = vim_regcomp(pat, magic ? RE_MAGIC : 0);
    if (regmatch->regprog == NULL)
	return FAIL;
    return OK;
}


    char_u *
get_search_pat(void)
{
    return mr_pattern;
}

    void
save_re_pat(int idx, char_u *pat, size_t patlen, int magic)
{
    if (spats[idx].pat == pat)
	return;

    vim_free(spats[idx].pat);
    spats[idx].pat = vim_strnsave(pat, patlen);
    if (spats[idx].pat == NULL)
	spats[idx].patlen = 0;
    else
	spats[idx].patlen = patlen;
    spats[idx].magic = magic;
    spats[idx].no_scs = no_smartcase;
    last_idx = idx;
#ifdef FEAT_SEARCH_EXTRA
    
    if (p_hls)
	redraw_all_later(UPD_SOME_VALID);
    set_no_hlsearch(FALSE);
#endif
}


static int save_level = 0;

    void
save_search_patterns(void)
{
    int i;

    if (save_level++ != 0)
	return;

    for (i = 0; i < (int)ARRAY_LENGTH(spats); ++i)
    {
	saved_spats[i] = spats[i];
	if (spats[i].pat != NULL)
	{
	    saved_spats[i].pat = vim_strnsave(spats[i].pat, spats[i].patlen);
	    if (saved_spats[i].pat == NULL)
		saved_spats[i].patlen = 0;
	    else
		saved_spats[i].patlen = spats[i].patlen;
	}
    }
    if (mr_pattern == NULL)
	saved_mr_pattern = NULL;
    else
	saved_mr_pattern = vim_strnsave(mr_pattern, mr_patternlen);
    if (saved_mr_pattern == NULL)
	saved_mr_patternlen = 0;
    else
	saved_mr_patternlen = mr_patternlen;
#ifdef FEAT_SEARCH_EXTRA
    saved_spats_last_idx = last_idx;
    saved_spats_no_hlsearch = no_hlsearch;
#endif
}

    void
restore_search_patterns(void)
{
    int i;

    if (--save_level != 0)
	return;

    for (i = 0; i < (int)ARRAY_LENGTH(spats); ++i)
    {
	vim_free(spats[i].pat);
	spats[i] = saved_spats[i];
    }
#if defined(FEAT_EVAL)
    set_vv_searchforward();
#endif
    vim_free(mr_pattern);
    mr_pattern = saved_mr_pattern;
    mr_patternlen = saved_mr_patternlen;
#ifdef FEAT_SEARCH_EXTRA
    last_idx = saved_spats_last_idx;
    set_no_hlsearch(saved_spats_no_hlsearch);
#endif
}

#if defined(EXITFREE) || defined(PROTO)
    void
free_search_patterns(void)
{
    int i;

    for (i = 0; i < (int)ARRAY_LENGTH(spats); ++i)
    {
	VIM_CLEAR(spats[i].pat);
	spats[i].patlen = 0;
    }
    VIM_CLEAR(mr_pattern);
    mr_patternlen = 0;
}
#endif

#ifdef FEAT_SEARCH_EXTRA


static spat_T	    saved_last_search_spat;
static int	    did_save_last_search_spat = 0;
static int	    saved_last_idx = 0;
static int	    saved_no_hlsearch = 0;
static int	    saved_search_match_endcol;
static int	    saved_search_match_lines;


    void
save_last_search_pattern(void)
{
    if (++did_save_last_search_spat != 1)
	
	return;

    saved_last_search_spat = spats[RE_SEARCH];
    if (spats[RE_SEARCH].pat != NULL)
    {
	saved_last_search_spat.pat = vim_strnsave(spats[RE_SEARCH].pat, spats[RE_SEARCH].patlen);
	if (saved_last_search_spat.pat == NULL)
	    saved_last_search_spat.patlen = 0;
	else
	    saved_last_search_spat.patlen = spats[RE_SEARCH].patlen;
    }
    saved_last_idx = last_idx;
    saved_no_hlsearch = no_hlsearch;
}

    void
restore_last_search_pattern(void)
{
    if (--did_save_last_search_spat > 0)
	
	return;
    if (did_save_last_search_spat != 0)
    {
	iemsg("restore_last_search_pattern() called more often than save_last_search_pattern()");
	return;
    }

    vim_free(spats[RE_SEARCH].pat);
    spats[RE_SEARCH] = saved_last_search_spat;
    saved_last_search_spat.pat = NULL;
    saved_last_search_spat.patlen = 0;
# if defined(FEAT_EVAL)
    set_vv_searchforward();
# endif
    last_idx = saved_last_idx;
    set_no_hlsearch(saved_no_hlsearch);
}


    static void
save_incsearch_state(void)
{
    saved_search_match_endcol = search_match_endcol;
    saved_search_match_lines  = search_match_lines;
}

    static void
restore_incsearch_state(void)
{
    search_match_endcol = saved_search_match_endcol;
    search_match_lines  = saved_search_match_lines;
}

    char_u *
last_search_pattern(void)
{
    return spats[RE_SEARCH].pat;
}
#endif


    int
ignorecase(char_u *pat)
{
    return ignorecase_opt(pat, p_ic, p_scs);
}


    int
ignorecase_opt(char_u *pat, int ic_in, int scs)
{
    int		ic = ic_in;

    if (ic && !no_smartcase && scs
			    && !(ctrl_x_mode_not_default() && curbuf->b_p_inf))
	ic = !pat_has_uppercase(pat);
    no_smartcase = FALSE;

    return ic;
}


    int
pat_has_uppercase(char_u *pat)
{
    char_u *p = pat;
    magic_T magic_val = MAGIC_ON;

    
    (void)skip_regexp_ex(pat, NUL, magic_isset(), NULL, NULL, &magic_val);

    while (*p != NUL)
    {
	int		l;

	if (has_mbyte && (l = (*mb_ptr2len)(p)) > 1)
	{
	    if (enc_utf8 && utf_isupper(utf_ptr2char(p)))
		return TRUE;
	    p += l;
	}
	else if (*p == '\\' && magic_val <= MAGIC_ON)
	{
	    if (p[1] == '_' && p[2] != NUL)  
		p += 3;
	    else if (p[1] == '%' && p[2] != NUL)  
		p += 3;
	    else if (p[1] != NUL)  
		p += 2;
	    else
		p += 1;
	}
	else if ((*p == '%' || *p == '_') && magic_val == MAGIC_ALL)
	{
	    if (p[1] != NUL)  
		p += 2;
	    else
		p++;
	}
	else if (MB_ISUPPER(*p))
	    return TRUE;
	else
	    ++p;
    }
    return FALSE;
}

#if defined(FEAT_EVAL) || defined(PROTO)
    char_u *
last_csearch(void)
{
    return lastc_bytes;
}

    int
last_csearch_forward(void)
{
    return lastcdir == FORWARD;
}

    int
last_csearch_until(void)
{
    return last_t_cmd == TRUE;
}

    void
set_last_csearch(int c, char_u *s, int len)
{
    *lastc = c;
    lastc_bytelen = len;
    if (len)
	memcpy(lastc_bytes, s, len);
    else
	CLEAR_FIELD(lastc_bytes);
}
#endif

    void
set_csearch_direction(int cdir)
{
    lastcdir = cdir;
}

    void
set_csearch_until(int t_cmd)
{
    last_t_cmd = t_cmd;
}

    char_u *
last_search_pat(void)
{
    return spats[last_idx].pat;
}


    void
reset_search_dir(void)
{
    spats[0].off.dir = '/';
#if defined(FEAT_EVAL)
    set_vv_searchforward();
#endif
}

#if defined(FEAT_EVAL) || defined(FEAT_VIMINFO)

    void
set_last_search_pat(
    char_u	*s,
    int		idx,
    int		magic,
    int		setlast)
{
    vim_free(spats[idx].pat);
    
    if (*s == NUL)
	spats[idx].pat = NULL;
    else
    {
	spats[idx].patlen = STRLEN(s);
	spats[idx].pat = vim_strnsave(s, spats[idx].patlen);
    }
    if (spats[idx].pat == NULL)
	spats[idx].patlen = 0;
    spats[idx].magic = magic;
    spats[idx].no_scs = FALSE;
    spats[idx].off.dir = '/';
#if defined(FEAT_EVAL)
    set_vv_searchforward();
#endif
    spats[idx].off.line = FALSE;
    spats[idx].off.end = FALSE;
    spats[idx].off.off = 0;
    if (setlast)
	last_idx = idx;
    if (save_level)
    {
	vim_free(saved_spats[idx].pat);
	saved_spats[idx] = spats[0];
	if (spats[idx].pat == NULL)
	    saved_spats[idx].pat = NULL;
	else
	    saved_spats[idx].pat = vim_strnsave(spats[idx].pat, spats[idx].patlen);
	if (saved_spats[idx].pat == NULL)
	    saved_spats[idx].patlen = 0;
	else
	    saved_spats[idx].patlen = spats[idx].patlen;
# ifdef FEAT_SEARCH_EXTRA
	saved_spats_last_idx = last_idx;
# endif
    }
# ifdef FEAT_SEARCH_EXTRA
    
    if (p_hls && idx == last_idx && !no_hlsearch)
	redraw_all_later(UPD_SOME_VALID);
# endif
}
#endif

#ifdef FEAT_SEARCH_EXTRA

    void
last_pat_prog(regmmatch_T *regmatch)
{
    if (spats[last_idx].pat == NULL)
    {
	regmatch->regprog = NULL;
	return;
    }
    ++emsg_off;		
    (void)search_regcomp((char_u *)"", 0, NULL, 0, last_idx, SEARCH_KEEP, regmatch);
    --emsg_off;
}
#endif


    int
searchit(
    win_T	*win,		
				
    buf_T	*buf,
    pos_T	*pos,
    pos_T	*end_pos,	
    int		dir,
    char_u	*pat,
    size_t	patlen,
    int	count,
    int		options,
    int		pat_use,	
    searchit_arg_T *extra_arg)	
{
    int		found;
    linenr_T	lnum;		
    colnr_T	col;
    regmmatch_T	regmatch;
    char_u	*ptr;
    colnr_T	matchcol;
    lpos_T	endpos;
    lpos_T	matchpos;
    int		loop;
    pos_T	start_pos;
    int		at_first_line;
    int		extra_col;
    int		start_char_len;
    int		match_ok;
    int	nmatched;
    int		submatch = 0;
    int		first_match = TRUE;
    int		called_emsg_before = called_emsg;
#ifdef FEAT_SEARCH_EXTRA
    int		break_loop = FALSE;
#endif
    linenr_T	stop_lnum = 0;	
    int		unused_timeout_flag = FALSE;
    int		*timed_out = &unused_timeout_flag;  
    int		search_from_match_end;		    

    if (search_regcomp(pat, patlen, NULL, RE_SEARCH, pat_use,
		   (options & (SEARCH_HIS + SEARCH_KEEP)), &regmatch) == FAIL)
    {
	if ((options & SEARCH_MSG) && !rc_did_emsg)
	    semsg(_(e_invalid_search_string_str), mr_pattern);
	return FAIL;
    }

    search_from_match_end = vim_strchr(p_cpo, CPO_SEARCH) != NULL;

    if (extra_arg != NULL)
    {
	stop_lnum = extra_arg->sa_stop_lnum;
#ifdef FEAT_RELTIME
	if (extra_arg->sa_tm > 0)
	    init_regexp_timeout(extra_arg->sa_tm);
	
	
	timed_out = &extra_arg->sa_timed_out;
#endif
    }

    
    do	
    {
	
	
	
	if (pos->col == MAXCOL)
	    start_char_len = 0;
	
	else if (has_mbyte
		    && pos->lnum >= 1 && pos->lnum <= buf->b_ml.ml_line_count
						    && pos->col < MAXCOL - 2)
	{
	    ptr = ml_get_buf(buf, pos->lnum, FALSE);
	    if (ml_get_buf_len(buf, pos->lnum) <= pos->col)
		start_char_len = 1;
	    else
		start_char_len = (*mb_ptr2len)(ptr + pos->col);
	}
	else
	    start_char_len = 1;
	if (dir == FORWARD)
	{
	    if (options & SEARCH_START)
		extra_col = 0;
	    else
		extra_col = start_char_len;
	}
	else
	{
	    if (options & SEARCH_START)
		extra_col = start_char_len;
	    else
		extra_col = 0;
	}

	start_pos = *pos;	
	found = 0;		
	at_first_line = TRUE;	
	if (pos->lnum == 0)	
	{
	    pos->lnum = 1;
	    pos->col = 0;
	    at_first_line = FALSE;  
	}

	
	if (dir == BACKWARD && start_pos.col == 0
					     && (options & SEARCH_START) == 0)
	{
	    lnum = pos->lnum - 1;
	    at_first_line = FALSE;
	}
	else
	    lnum = pos->lnum;

	for (loop = 0; loop <= 1; ++loop)   
	{
	    for ( ; lnum > 0 && lnum <= buf->b_ml.ml_line_count;
					   lnum += dir, at_first_line = FALSE)
	    {
		
		if (stop_lnum != 0 && (dir == FORWARD
				       ? lnum > stop_lnum : lnum < stop_lnum))
		    break;
		
		if (*timed_out)
		    break;

		
		col = at_first_line && (options & SEARCH_COL) ? pos->col
								 : (colnr_T)0;
		nmatched = vim_regexec_multi(&regmatch, win, buf,
							 lnum, col, timed_out);
		
		if (regmatch.regprog == NULL)
		    break;
		
		if (called_emsg > called_emsg_before || *timed_out)
		    break;
		if (nmatched > 0)
		{
		    
		    matchpos = regmatch.startpos[0];
		    endpos = regmatch.endpos[0];
#ifdef FEAT_EVAL
		    submatch = first_submatch(&regmatch);
#endif
		    
		    if (lnum + matchpos.lnum > buf->b_ml.ml_line_count)
			ptr = (char_u *)"";
		    else
			ptr = ml_get_buf(buf, lnum + matchpos.lnum, FALSE);

		    
		    if (dir == FORWARD && at_first_line)
		    {
			match_ok = TRUE;

			
			while (matchpos.lnum == 0
				&& ((options & SEARCH_END) && first_match
				    ?  (nmatched == 1
					&& (int)endpos.col - 1
					     < (int)start_pos.col + extra_col)
				    : ((int)matchpos.col
						  - (ptr[matchpos.col] == NUL)
					    < (int)start_pos.col + extra_col)))
			{
			    
			    if (search_from_match_end)
			    {
				if (nmatched > 1)
				{
				    
				    
				    match_ok = FALSE;
				    break;
				}
				matchcol = endpos.col;
				
				if (matchcol == matchpos.col
						      && ptr[matchcol] != NUL)
				{
				    if (has_mbyte)
					matchcol +=
					  (*mb_ptr2len)(ptr + matchcol);
				    else
					++matchcol;
				}
			    }
			    else
			    {
				
				
				
				matchcol = regmatch.rmm_matchcol;
				if (ptr[matchcol] != NUL)
				{
				    if (has_mbyte)
					matchcol += (*mb_ptr2len)(ptr
								  + matchcol);
				    else
					++matchcol;
				}
			    }
			    if (matchcol == 0 && (options & SEARCH_START))
				break;
			    if (ptr[matchcol] == NUL
				    || (nmatched = vim_regexec_multi(&regmatch,
					      win, buf, lnum + matchpos.lnum,
					      matchcol, timed_out)) == 0)
			    {
				match_ok = FALSE;
				break;
			    }
			    
			    if (regmatch.regprog == NULL)
				break;
			    matchpos = regmatch.startpos[0];
			    endpos = regmatch.endpos[0];
# ifdef FEAT_EVAL
			    submatch = first_submatch(&regmatch);
# endif

			    
			    
			    ptr = ml_get_buf(buf, lnum + matchpos.lnum, FALSE);
			}
			if (!match_ok)
			    continue;
		    }
		    if (dir == BACKWARD)
		    {
			
			match_ok = FALSE;
			for (;;)
			{
			    
			    
			    
			    
			    if (loop
				|| ((options & SEARCH_END)
				    ? (lnum + regmatch.endpos[0].lnum
							      < start_pos.lnum
					|| (lnum + regmatch.endpos[0].lnum
							     == start_pos.lnum
					     && (int)regmatch.endpos[0].col - 1
							< (int)start_pos.col
								+ extra_col))
				    : (lnum + regmatch.startpos[0].lnum
							      < start_pos.lnum
					|| (lnum + regmatch.startpos[0].lnum
							     == start_pos.lnum
					     && (int)regmatch.startpos[0].col
						      < (int)start_pos.col
							      + extra_col))))
			    {
				match_ok = TRUE;
				matchpos = regmatch.startpos[0];
				endpos = regmatch.endpos[0];
# ifdef FEAT_EVAL
				submatch = first_submatch(&regmatch);
# endif
			    }
			    else
				break;

			    
			    if (search_from_match_end)
			    {
				if (nmatched > 1)
				    break;
				matchcol = endpos.col;
				
				if (matchcol == matchpos.col
						      && ptr[matchcol] != NUL)
				{
				    if (has_mbyte)
					matchcol +=
					  (*mb_ptr2len)(ptr + matchcol);
				    else
					++matchcol;
				}
			    }
			    else
			    {
				
				if (matchpos.lnum > 0)
				    break;
				matchcol = matchpos.col;
				if (ptr[matchcol] != NUL)
				{
				    if (has_mbyte)
					matchcol +=
					  (*mb_ptr2len)(ptr + matchcol);
				    else
					++matchcol;
				}
			    }
			    if (ptr[matchcol] == NUL
				    || (nmatched = vim_regexec_multi(&regmatch,
					      win, buf, lnum + matchpos.lnum,
					      matchcol, timed_out)) == 0)
			    {
				
				
				
				if (*timed_out)
				    match_ok = FALSE;
				break;
			    }
			    
			    if (regmatch.regprog == NULL)
				break;

			    
			    
			    ptr = ml_get_buf(buf, lnum + matchpos.lnum, FALSE);
			}

			
			if (!match_ok)
			    continue;
		    }

		    
		    
		    
		    if ((options & SEARCH_END) && !(options & SEARCH_NOOF)
			    && !(matchpos.lnum == endpos.lnum
				&& matchpos.col == endpos.col))
		    {
			
			
			pos->lnum = lnum + endpos.lnum;
			pos->col = endpos.col;
			if (endpos.col == 0)
			{
			    if (pos->lnum > 1)  
			    {
				--pos->lnum;
				pos->col = ml_get_buf_len(buf, pos->lnum);
			    }
			}
			else
			{
			    --pos->col;
			    if (has_mbyte
				    && pos->lnum <= buf->b_ml.ml_line_count)
			    {
				ptr = ml_get_buf(buf, pos->lnum, FALSE);
				pos->col -= (*mb_head_off)(ptr, ptr + pos->col);
			    }
			}
			if (end_pos != NULL)
			{
			    end_pos->lnum = lnum + matchpos.lnum;
			    end_pos->col = matchpos.col;
			}
		    }
		    else
		    {
			pos->lnum = lnum + matchpos.lnum;
			pos->col = matchpos.col;
			if (end_pos != NULL)
			{
			    end_pos->lnum = lnum + endpos.lnum;
			    end_pos->col = endpos.col;
			}
		    }
		    pos->coladd = 0;
		    if (end_pos != NULL)
			end_pos->coladd = 0;
		    found = 1;
		    first_match = FALSE;

		    
		    search_match_lines = endpos.lnum - matchpos.lnum;
		    search_match_endcol = endpos.col;
		    break;
		}
		line_breakcheck();	
		if (got_int)
		    break;

#ifdef FEAT_SEARCH_EXTRA
		
		
		
		if ((options & SEARCH_PEEK)
			&& ((lnum - pos->lnum) & 0x3f) == 0
			&& char_avail())
		{
		    break_loop = TRUE;
		    break;
		}
#endif

		if (loop && lnum == start_pos.lnum)
		    break;	    
	    }
	    at_first_line = FALSE;

	    
	    if (regmatch.regprog == NULL)
		break;

	    
	    if (!p_ws || stop_lnum != 0 || got_int
			      || called_emsg > called_emsg_before || *timed_out
#ifdef FEAT_SEARCH_EXTRA
			      || break_loop
#endif
			      || found || loop)
		break;

	    
	    if (dir == BACKWARD)    
		lnum = buf->b_ml.ml_line_count;
	    else
		lnum = 1;
	    if (!shortmess(SHM_SEARCH)
		    && shortmess(SHM_SEARCHCOUNT)
		    && (options & SEARCH_MSG))
		give_warning((char_u *)_(dir == BACKWARD
					  ? top_bot_msg : bot_top_msg), TRUE);
	    if (extra_arg != NULL)
		extra_arg->sa_wrapped = TRUE;
	}
	if (got_int || called_emsg > called_emsg_before || *timed_out
#ifdef FEAT_SEARCH_EXTRA
		|| break_loop
#endif
		)
	    break;
    }
    while (--count > 0 && found);   

#ifdef FEAT_RELTIME
    if (extra_arg != NULL && extra_arg->sa_tm > 0)
	disable_regexp_timeout();
#endif
    vim_regfree(regmatch.regprog);

    if (!found)		    
    {
	if (got_int)
	    emsg(_(e_interrupted));
	else if ((options & SEARCH_MSG) == SEARCH_MSG)
	{
	    if (p_ws)
		semsg(_(e_pattern_not_found_str), mr_pattern);
	    else if (lnum == 0)
		semsg(_(e_search_hit_top_without_match_for_str), mr_pattern);
	    else
		semsg(_(e_search_hit_bottom_without_match_for_str), mr_pattern);
	}
	return FAIL;
    }

    
    if (pos->lnum > buf->b_ml.ml_line_count)
    {
	pos->lnum = buf->b_ml.ml_line_count;
	pos->col = ml_get_buf_len(buf, pos->lnum);
	if (pos->col > 0)
	    --pos->col;
    }

    return submatch + 1;
}

#if defined(FEAT_EVAL) || defined(FEAT_PROTO)
    void
set_search_direction(int cdir)
{
    spats[0].off.dir = cdir;
}

    static void
set_vv_searchforward(void)
{
    set_vim_var_nr(VV_SEARCHFORWARD, (int)(spats[0].off.dir == '/'));
}


    static int
first_submatch(regmmatch_T *rp)
{
    int		submatch;

    for (submatch = 1; ; ++submatch)
    {
	if (rp->startpos[submatch].lnum >= 0)
	    break;
	if (submatch == 9)
	{
	    submatch = 0;
	    break;
	}
    }
    return submatch;
}
#endif


    int
do_search(
    oparg_T	    *oap,	
    int		    dirc,	
    int		    search_delim, 
				  
    char_u	    *pat,
    size_t	    patlen,
    int	    count,
    int		    options,
    searchit_arg_T  *sia)	
{
    pos_T	    pos;	
    char_u	    *searchstr;
    size_t	    searchstrlen;
    soffset_T	    old_off;
    int		    retval;	
    char_u	    *p;
    int	    c;
    char_u	    *dircp;
    char_u	    *strcopy = NULL;
    char_u	    *ps;
    int		    show_search_stats;
    char_u	    *msgbuf = NULL;
    size_t	    msgbuflen = 0;
    int		    has_offset = FALSE;

    searchcmdlen = 0;

    
    if (spats[0].off.line && vim_strchr(p_cpo, CPO_LINEOFF) != NULL)
    {
	spats[0].off.line = FALSE;
	spats[0].off.off = 0;
    }

    
    old_off = spats[0].off;

    pos = curwin->w_cursor;	

    
    if (dirc == 0)
	dirc = spats[0].off.dir;
    else
    {
	spats[0].off.dir = dirc;
#if defined(FEAT_EVAL)
	set_vv_searchforward();
#endif
    }
    if (options & SEARCH_REV)
    {
#ifdef MSWIN
	
	
	dirc = (dirc == '/')  ?  '?'  :  '/';
#else
	if (dirc == '/')
	    dirc = '?';
	else
	    dirc = '/';
#endif
    }

#ifdef FEAT_FOLDING
    
    
    if (dirc == '/')
    {
	if (hasFolding(pos.lnum, NULL, &pos.lnum))
	    pos.col = MAXCOL - 2;	
    }
    else
    {
	if (hasFolding(pos.lnum, &pos.lnum, NULL))
	    pos.col = 0;
    }
#endif

#ifdef FEAT_SEARCH_EXTRA
    
    if (no_hlsearch && !(options & SEARCH_KEEP))
    {
	redraw_all_later(UPD_SOME_VALID);
	set_no_hlsearch(FALSE);
    }
#endif

    
    for (;;)
    {
	int		show_top_bot_msg = FALSE;

	searchstr = pat;
	searchstrlen = patlen;

	dircp = NULL;
					    
	if (pat == NULL || *pat == NUL || *pat == search_delim)
	{
	    if (spats[RE_SEARCH].pat == NULL)	    
	    {
		if (spats[RE_SUBST].pat == NULL)
		{
		    emsg(_(e_no_previous_regular_expression));
		    retval = 0;
		    goto end_do_search;
		}
		searchstr = spats[RE_SUBST].pat;
		searchstrlen = spats[RE_SUBST].patlen;
	    }
	    else
	    {
		
		searchstr = (char_u *)"";
		searchstrlen = 0;
	    }
	}

	if (pat != NULL && *pat != NUL)	
	{
	    
	    ps = strcopy;
	    p = skip_regexp_ex(pat, search_delim, magic_isset(),
							&strcopy, NULL, NULL);
	    if (strcopy != ps)
	    {
		size_t len = STRLEN(strcopy);
		
		searchcmdlen += (int)(patlen - len);
		pat = strcopy;
		patlen = len;
		searchstr = strcopy;
		searchstrlen = len;
	    }
	    if (*p == search_delim)
	    {
		searchstrlen = p - pat;
		dircp = p;	
		*p++ = NUL;
	    }
	    spats[0].off.line = FALSE;
	    spats[0].off.end = FALSE;
	    spats[0].off.off = 0;
	    
	    if (*p == '+' || *p == '-' || VIM_ISDIGIT(*p))
		spats[0].off.line = TRUE;
	    else if ((options & SEARCH_OPT)
				      && (*p == 'e' || *p == 's' || *p == 'b'))
	    {
		if (*p == 'e')		
		    spats[0].off.end = SEARCH_END;
		++p;
	    }
	    if (VIM_ISDIGIT(*p) || *p == '+' || *p == '-')  
	    {
					    
		if (VIM_ISDIGIT(*p) || VIM_ISDIGIT(*(p + 1)))
		    spats[0].off.off = atol((char *)p);
		else if (*p == '-')	    
		    spats[0].off.off = -1;
		else			    
		    spats[0].off.off = 1;
		++p;
		while (VIM_ISDIGIT(*p))	    
		    ++p;
	    }

	    
	    searchcmdlen += (int)(p - pat);

	    patlen -= p - pat;
	    pat = p;			    
	}

	show_search_stats = FALSE;
	if ((options & SEARCH_ECHO) && messaging()
		&& !msg_silent
		&& (!cmd_silent || !shortmess(SHM_SEARCHCOUNT)))
	{
	    char_u	off_buf[40];
	    size_t	off_len = 0;
	    size_t	plen;
	    size_t	msgbufsize;

	    
	    msg_start();

	    
	    if (!cmd_silent &&
		    (spats[0].off.line || spats[0].off.end || spats[0].off.off))
	    {
		off_buf[off_len++] = dirc;
		if (spats[0].off.end)
		    off_buf[off_len++] = 'e';
		else if (!spats[0].off.line)
		    off_buf[off_len++] = 's';
		if (spats[0].off.off > 0 || spats[0].off.line)
		    off_buf[off_len++] = '+';
		off_buf[off_len] = NUL;
		if (spats[0].off.off != 0 || spats[0].off.line)
		    off_len += vim_snprintf((char *)off_buf + off_len, sizeof(off_buf) - off_len, "%ld", spats[0].off.off);
	    }

	    if (*searchstr == NUL)
	    {
		p = spats[0].pat;
		plen = spats[0].patlen;
	    }
	    else
	    {
		p = searchstr;
		plen = searchstrlen;
	    }

	    if (!shortmess(SHM_SEARCHCOUNT) || cmd_silent)
	    {
		
		
		
		
		if (msg_scrolled != 0 && !cmd_silent)
		    
		    msgbufsize = (int)(Rows - msg_row) * Columns - 1;
		else
		    
		    msgbufsize = (int)(Rows - msg_row - 1) * Columns + sc_col - 1;
		if (msgbufsize < plen + off_len + SEARCH_STAT_BUF_LEN + 3)
		    msgbufsize = plen + off_len + SEARCH_STAT_BUF_LEN + 3;
	    }
	    else
		
		msgbufsize = plen + off_len + 3;

	    vim_free(msgbuf);
	    msgbuf = alloc(msgbufsize);
	    if (msgbuf == NULL)
	    {
		msgbuflen = 0;
	    }
	    else
	    {
		vim_memset(msgbuf, ' ', msgbufsize);
		msgbuflen = msgbufsize - 1;
		msgbuf[msgbuflen] = NUL;
		
		
		if (!cmd_silent)
		{
		    char_u	*trunc;

		    msgbuf[0] = dirc;

		    if (enc_utf8 && utf_iscomposing(utf_ptr2char(p)))
		    {
			
			msgbuf[1] = ' ';
			mch_memmove(msgbuf + 2, p, plen);
		    }
		    else
			mch_memmove(msgbuf + 1, p, plen);
		    if (off_len > 0)
			mch_memmove(msgbuf + plen + 1, off_buf, off_len);

		    trunc = msg_strtrunc(msgbuf, TRUE);
		    if (trunc != NULL)
		    {
			vim_free(msgbuf);
			msgbuf = trunc;
			msgbuflen = STRLEN(msgbuf);
		    }

#ifdef FEAT_RIGHTLEFT
		    
		    
		    
		    
		    if (curwin->w_p_rl && *curwin->w_p_rlc == 's')
		    {
			char_u *r;
			size_t pat_len;

			r = reverse_text(msgbuf);
			if (r != NULL)
			{
			    vim_free(msgbuf);
			    msgbuf = r;
			    
			    while (*r != NUL && *r == ' ')
				r++;
			    pat_len = msgbuf + msgbuflen - r;
			    mch_memmove(msgbuf, r, pat_len);
			    
			    if ((size_t)(r - msgbuf) >= pat_len)
				vim_memset(r, ' ', pat_len);
			    else
				vim_memset(msgbuf + pat_len, ' ', r - msgbuf);
			}
		    }
#endif
		    msg_outtrans(msgbuf);
		    msg_clr_eos();
		    msg_check();

		    gotocmdline(FALSE);
		    out_flush();
		    msg_nowait = TRUE;	    
		}

		if (!shortmess(SHM_SEARCHCOUNT))
		    show_search_stats = TRUE;
	    }	
	}

	
	if (!spats[0].off.line && spats[0].off.off && pos.col < MAXCOL - 2)
	{
	    if (spats[0].off.off > 0)
	    {
		for (c = spats[0].off.off; c; --c)
		    if (decl(&pos) == -1)
			break;
		if (c)			
		{
		    pos.lnum = 0;	
		    pos.col = MAXCOL;
		}
	    }
	    else
	    {
		for (c = spats[0].off.off; c; ++c)
		    if (incl(&pos) == -1)
			break;
		if (c)			
		{
		    pos.lnum = curbuf->b_ml.ml_line_count + 1;
		    pos.col = 0;
		}
	    }
	}

	
	c = searchit(curwin, curbuf, &pos, NULL,
					      dirc == '/' ? FORWARD : BACKWARD,
		searchstr, searchstrlen, count, spats[0].off.end + (options &
		       (SEARCH_KEEP + SEARCH_PEEK + SEARCH_HIS
			+ SEARCH_MSG + SEARCH_START
			+ ((pat != NULL && *pat == ';') ? 0 : SEARCH_NOOF))),
		RE_LAST, sia);

	if (dircp != NULL)
	    *dircp = search_delim; 

	if (!shortmess(SHM_SEARCH)
		&& ((dirc == '/' && LT_POS(pos, curwin->w_cursor))
			    || (dirc == '?' && LT_POS(curwin->w_cursor, pos))))
	    show_top_bot_msg = TRUE;

	if (c == FAIL)
	{
	    retval = 0;
	    goto end_do_search;
	}
	if (spats[0].off.end && oap != NULL)
	    oap->inclusive = TRUE;  

	retval = 1;		    

	
	if (!(options & SEARCH_NOOF) || (pat != NULL && *pat == ';'))
	{
	    pos_T org_pos = pos;

	    if (spats[0].off.line)	
	    {
		c = pos.lnum + spats[0].off.off;
		if (c < 1)
		    pos.lnum = 1;
		else if (c > curbuf->b_ml.ml_line_count)
		    pos.lnum = curbuf->b_ml.ml_line_count;
		else
		    pos.lnum = c;
		pos.col = 0;

		retval = 2;	    
	    }
	    else if (pos.col < MAXCOL - 2)	
	    {
		
		c = spats[0].off.off;
		if (c > 0)
		{
		    while (c-- > 0)
			if (incl(&pos) == -1)
			    break;
		}
		
		else
		{
		    while (c++ < 0)
			if (decl(&pos) == -1)
			    break;
		}
	    }
	    if (!EQUAL_POS(pos, org_pos))
		has_offset = TRUE;
	}

	
	if (show_search_stats)
	     cmdline_search_stat(dirc, &pos, &curwin->w_cursor,
				show_top_bot_msg, msgbuf, msgbuflen,
				(count != 1 || has_offset
#ifdef FEAT_FOLDING
				 || (!(fdo_flags & FDO_SEARCH)
				     && hasFolding(curwin->w_cursor.lnum,
								   NULL, NULL))
#endif
				),
				SEARCH_STAT_DEF_MAX_COUNT,
				SEARCH_STAT_DEF_TIMEOUT);

	
	if (!(options & SEARCH_OPT) || pat == NULL || *pat != ';')
	    break;

	dirc = *++pat;
	search_delim = dirc;
	if (dirc != '?' && dirc != '/')
	{
	    retval = 0;
	    emsg(_(e_expected_question_or_slash_after_semicolon));
	    goto end_do_search;
	}
	++pat;
	--patlen;
    }

    if (options & SEARCH_MARK)
	setpcmark();
    curwin->w_cursor = pos;
    curwin->w_set_curswant = TRUE;

end_do_search:
    if ((options & SEARCH_KEEP) || (cmdmod.cmod_flags & CMOD_KEEPPATTERNS))
	spats[0].off = old_off;
    vim_free(strcopy);
    vim_free(msgbuf);

    return retval;
}


    int
search_for_exact_line(
    buf_T	*buf,
    pos_T	*pos,
    int		dir,
    char_u	*pat)
{
    linenr_T	start = 0;
    char_u	*ptr;
    char_u	*p;

    if (buf->b_ml.ml_line_count == 0)
	return FAIL;
    for (;;)
    {
	pos->lnum += dir;
	if (pos->lnum < 1)
	{
	    if (p_ws)
	    {
		pos->lnum = buf->b_ml.ml_line_count;
		if (!shortmess(SHM_SEARCH))
		    give_warning((char_u *)_(top_bot_msg), TRUE);
	    }
	    else
	    {
		pos->lnum = 1;
		break;
	    }
	}
	else if (pos->lnum > buf->b_ml.ml_line_count)
	{
	    if (p_ws)
	    {
		pos->lnum = 1;
		if (!shortmess(SHM_SEARCH))
		    give_warning((char_u *)_(bot_top_msg), TRUE);
	    }
	    else
	    {
		pos->lnum = 1;
		break;
	    }
	}
	if (pos->lnum == start)
	    break;
	if (start == 0)
	    start = pos->lnum;
	ptr = ml_get_buf(buf, pos->lnum, FALSE);
	p = skipwhite(ptr);
	pos->col = (colnr_T) (p - ptr);

	
	
	if (compl_status_adding() && !compl_status_sol())
	{
	    if ((p_ic ? MB_STRICMP(p, pat) : STRCMP(p, pat)) == 0)
		return OK;
	}
	else if (*p != NUL)	
	{	
	    if ((p_ic ? MB_STRNICMP(p, pat, ins_compl_len())
				   : STRNCMP(p, pat, ins_compl_len())) == 0)
		return OK;
	}
    }
    return FAIL;
}




    int
searchc(cmdarg_T *cap, int t_cmd)
{
    int			c = cap->nchar;	
    int			dir = cap->arg;	
    int		count = cap->count1;	
    int			col;
    char_u		*p;
    int			len;
    int			stop = TRUE;

    if (c != NUL)	
    {
	if (!KeyStuffed)    
	{
	    *lastc = c;
	    set_csearch_direction(dir);
	    set_csearch_until(t_cmd);
	    lastc_bytelen = (*mb_char2bytes)(c, lastc_bytes);
	    if (cap->ncharC1 != 0)
	    {
		lastc_bytelen += (*mb_char2bytes)(cap->ncharC1,
			lastc_bytes + lastc_bytelen);
		if (cap->ncharC2 != 0)
		    lastc_bytelen += (*mb_char2bytes)(cap->ncharC2,
			    lastc_bytes + lastc_bytelen);
	    }
	}
    }
    else		
    {
	if (*lastc == NUL && lastc_bytelen <= 1)
	    return FAIL;
	if (dir)	
	    dir = -lastcdir;
	else
	    dir = lastcdir;
	t_cmd = last_t_cmd;
	c = *lastc;
	

	
	
	
	if (vim_strchr(p_cpo, CPO_SCOLON) == NULL && count == 1 && t_cmd)
	    stop = FALSE;
    }

    if (dir == BACKWARD)
	cap->oap->inclusive = FALSE;
    else
	cap->oap->inclusive = TRUE;

    p = ml_get_curline();
    col = curwin->w_cursor.col;
    len = ml_get_curline_len();

    while (count--)
    {
	if (has_mbyte)
	{
	    for (;;)
	    {
		if (dir > 0)
		{
		    col += (*mb_ptr2len)(p + col);
		    if (col >= len)
			return FAIL;
		}
		else
		{
		    if (col == 0)
			return FAIL;
		    col -= (*mb_head_off)(p, p + col - 1) + 1;
		}
		if (lastc_bytelen <= 1)
		{
		    if (p[col] == c && stop)
			break;
		}
		else if (STRNCMP(p + col, lastc_bytes, lastc_bytelen) == 0
								       && stop)
		    break;
		stop = TRUE;
	    }
	}
	else
	{
	    for (;;)
	    {
		if ((col += dir) < 0 || col >= len)
		    return FAIL;
		if (p[col] == c && stop)
		    break;
		stop = TRUE;
	    }
	}
    }

    if (t_cmd)
    {
	
	col -= dir;
	if (has_mbyte)
	{
	    if (dir < 0)
		
		col += lastc_bytelen - 1;
	    else
		
		col -= (*mb_head_off)(p, p + col);
	}
    }
    curwin->w_cursor.col = col;

    return OK;
}




    pos_T *
findmatch(oparg_T *oap, int initc)
{
    return findmatchlimit(oap, initc, 0, 0);
}


    static int
check_prevcol(
    char_u	*linep,
    int		col,
    int		ch,
    int		*prevcol)
{
    --col;
    if (col > 0 && has_mbyte)
	col -= (*mb_head_off)(linep, linep + col);
    if (prevcol)
	*prevcol = col;
    return (col >= 0 && linep[col] == ch) ? TRUE : FALSE;
}


    static int
find_rawstring_end(char_u *linep, pos_T *startpos, pos_T *endpos)
{
    char_u	*p;
    char_u	*delim_copy;
    size_t	delim_len;
    linenr_T	lnum;
    int		found = FALSE;

    for (p = linep + startpos->col + 1; *p && *p != '('; ++p)
	;
    delim_len = (p - linep) - startpos->col - 1;
    delim_copy = vim_strnsave(linep + startpos->col + 1, delim_len);
    if (delim_copy == NULL)
	return FALSE;
    for (lnum = startpos->lnum; lnum <= endpos->lnum; ++lnum)
    {
	char_u *line = ml_get(lnum);

	for (p = line + (lnum == startpos->lnum
					    ? startpos->col + 1 : 0); *p; ++p)
	{
	    if (lnum == endpos->lnum && (colnr_T)(p - line) >= endpos->col)
		break;
	    if (*p == ')' && STRNCMP(delim_copy, p + 1, delim_len) == 0
			  && p[delim_len + 1] == '"')
	    {
		found = TRUE;
		break;
	    }
	}
	if (found)
	    break;
    }
    vim_free(delim_copy);
    return found;
}


    static void
find_mps_values(
    int	    *initc,
    int	    *findc,
    int	    *backwards,
    int	    switchit)
{
    char_u	*ptr;

    ptr = curbuf->b_p_mps;
    while (*ptr != NUL)
    {
	if (has_mbyte)
	{
	    char_u *prev;

	    if (mb_ptr2char(ptr) == *initc)
	    {
		if (switchit)
		{
		    *findc = *initc;
		    *initc = mb_ptr2char(ptr + mb_ptr2len(ptr) + 1);
		    *backwards = TRUE;
		}
		else
		{
		    *findc = mb_ptr2char(ptr + mb_ptr2len(ptr) + 1);
		    *backwards = FALSE;
		}
		return;
	    }
	    prev = ptr;
	    ptr += mb_ptr2len(ptr) + 1;
	    if (mb_ptr2char(ptr) == *initc)
	    {
		if (switchit)
		{
		    *findc = *initc;
		    *initc = mb_ptr2char(prev);
		    *backwards = FALSE;
		}
		else
		{
		    *findc = mb_ptr2char(prev);
		    *backwards = TRUE;
		}
		return;
	    }
	    ptr += mb_ptr2len(ptr);
	}
	else
	{
	    if (*ptr == *initc)
	    {
		if (switchit)
		{
		    *backwards = TRUE;
		    *findc = *initc;
		    *initc = ptr[2];
		}
		else
		{
		    *backwards = FALSE;
		    *findc = ptr[2];
		}
		return;
	    }
	    ptr += 2;
	    if (*ptr == *initc)
	    {
		if (switchit)
		{
		    *backwards = FALSE;
		    *findc = *initc;
		    *initc = ptr[-2];
		}
		else
		{
		    *backwards = TRUE;
		    *findc =  ptr[-2];
		}
		return;
	    }
	    ++ptr;
	}
	if (*ptr == ',')
	    ++ptr;
    }
}


    pos_T *
findmatchlimit(
    oparg_T	*oap,
    int		initc,
    int		flags,
    int		maxtravel)
{
    static pos_T pos;			
    int		findc = 0;		
    int		c;
    int		count = 0;		
    int		backwards = FALSE;	
    int		raw_string = FALSE;	
    int		inquote = FALSE;	
    char_u	*linep;			
    char_u	*ptr;
    int		do_quotes;		
    int		at_start;		
    int		hash_dir = 0;		
    int		comment_dir = 0;	
    pos_T	match_pos;		
    int		start_in_quotes;	
    int		traveled = 0;		
    int		ignore_cend = FALSE;    
    int		cpo_match;		
    int		cpo_bsl;		
    int		match_escaped = 0;	
    int		dir;			
    int		comment_col = MAXCOL;   
    int		lispcomm = FALSE;	
    int		lisp = curbuf->b_p_lisp; 

    pos = curwin->w_cursor;
    pos.coladd = 0;
    linep = ml_get(pos.lnum);

    cpo_match = (vim_strchr(p_cpo, CPO_MATCH) != NULL);
    cpo_bsl = (vim_strchr(p_cpo, CPO_MATCHBSL) != NULL);

    
    if (flags & FM_BACKWARD)
	dir = BACKWARD;
    else if (flags & FM_FORWARD)
	dir = FORWARD;
    else
	dir = 0;

    
    if (initc == '/' || initc == '*' || initc == 'R')
    {
	comment_dir = dir;
	if (initc == '/')
	    ignore_cend = TRUE;
	backwards = (dir == FORWARD) ? FALSE : TRUE;
	raw_string = (initc == 'R');
	initc = NUL;
    }
    else if (initc != '#' && initc != NUL)
    {
	find_mps_values(&initc, &findc, &backwards, TRUE);
	if (dir)
	    backwards = (dir == FORWARD) ? FALSE : TRUE;
	if (findc == NUL)
	    return NULL;
    }
    else
    {
	
	if (initc == '#')
	{
	    hash_dir = dir;
	}
	else
	{
	    
	    if (!cpo_match)
	    {
		
		ptr = skipwhite(linep);
		if (*ptr == '#' && pos.col <= (colnr_T)(ptr - linep))
		{
		    ptr = skipwhite(ptr + 1);
		    if (   STRNCMP(ptr, "if", 2) == 0
			|| STRNCMP(ptr, "endif", 5) == 0
			|| STRNCMP(ptr, "el", 2) == 0)
			hash_dir = 1;
		}

		
		else if (linep[pos.col] == '/')
		{
		    if (linep[pos.col + 1] == '*')
		    {
			comment_dir = FORWARD;
			backwards = FALSE;
			pos.col++;
		    }
		    else if (pos.col > 0 && linep[pos.col - 1] == '*')
		    {
			comment_dir = BACKWARD;
			backwards = TRUE;
			pos.col--;
		    }
		}
		else if (linep[pos.col] == '*')
		{
		    if (linep[pos.col + 1] == '/')
		    {
			comment_dir = BACKWARD;
			backwards = TRUE;
		    }
		    else if (pos.col > 0 && linep[pos.col - 1] == '/')
		    {
			comment_dir = FORWARD;
			backwards = FALSE;
		    }
		}
	    }

	    
	    if (!hash_dir && !comment_dir)
	    {
		
		if (linep[pos.col] == NUL && pos.col)
		    --pos.col;
		for (;;)
		{
		    initc = PTR2CHAR(linep + pos.col);
		    if (initc == NUL)
			break;

		    find_mps_values(&initc, &findc, &backwards, FALSE);
		    if (findc)
			break;
		    pos.col += mb_ptr2len(linep + pos.col);
		}
		if (!findc)
		{
		    
		    if (!cpo_match && *skipwhite(linep) == '#')
			hash_dir = 1;
		    else
			return NULL;
		}
		else if (!cpo_bsl)
		{
		    int col, bslcnt = 0;

		    
		    
		    for (col = pos.col; check_prevcol(linep, col, '\\', &col);)
			bslcnt++;
		    match_escaped = (bslcnt & 1);
		}
	    }
	}
	if (hash_dir)
	{
	    
	    if (oap != NULL)
		oap->motion_type = MLINE;   
	    if (initc != '#')
	    {
		ptr = skipwhite(skipwhite(linep) + 1);
		if (STRNCMP(ptr, "if", 2) == 0 || STRNCMP(ptr, "el", 2) == 0)
		    hash_dir = 1;
		else if (STRNCMP(ptr, "endif", 5) == 0)
		    hash_dir = -1;
		else
		    return NULL;
	    }
	    pos.col = 0;
	    while (!got_int)
	    {
		if (hash_dir > 0)
		{
		    if (pos.lnum == curbuf->b_ml.ml_line_count)
			break;
		}
		else if (pos.lnum == 1)
		    break;
		pos.lnum += hash_dir;
		linep = ml_get(pos.lnum);
		line_breakcheck();	
		ptr = skipwhite(linep);
		if (*ptr != '#')
		    continue;
		pos.col = (colnr_T) (ptr - linep);
		ptr = skipwhite(ptr + 1);
		if (hash_dir > 0)
		{
		    if (STRNCMP(ptr, "if", 2) == 0)
			count++;
		    else if (STRNCMP(ptr, "el", 2) == 0)
		    {
			if (count == 0)
			    return &pos;
		    }
		    else if (STRNCMP(ptr, "endif", 5) == 0)
		    {
			if (count == 0)
			    return &pos;
			count--;
		    }
		}
		else
		{
		    if (STRNCMP(ptr, "if", 2) == 0)
		    {
			if (count == 0)
			    return &pos;
			count--;
		    }
		    else if (initc == '#' && STRNCMP(ptr, "el", 2) == 0)
		    {
			if (count == 0)
			    return &pos;
		    }
		    else if (STRNCMP(ptr, "endif", 5) == 0)
			count++;
		}
	    }
	    return NULL;
	}
    }

#ifdef FEAT_RIGHTLEFT
    
    
    if (curwin->w_p_rl && vim_strchr((char_u *)"()[]{}<>", initc) != NULL)
	backwards = !backwards;
#endif

    do_quotes = -1;
    start_in_quotes = MAYBE;
    CLEAR_POS(&match_pos);

    
    if ((backwards && comment_dir) || lisp)
	comment_col = check_linecomment(linep);
    if (lisp && comment_col != MAXCOL && pos.col > (colnr_T)comment_col)
	lispcomm = TRUE;    

    while (!got_int)
    {
	
	if (backwards)
	{
	    
	    if (lispcomm && pos.col < (colnr_T)comment_col)
		break;
	    if (pos.col == 0)		
	    {
		if (pos.lnum == 1)	
		    break;
		--pos.lnum;

		if (maxtravel > 0 && ++traveled > maxtravel)
		    break;

		linep = ml_get(pos.lnum);
		pos.col = ml_get_len(pos.lnum); 
		do_quotes = -1;
		line_breakcheck();

		
		if (comment_dir || lisp)
		    comment_col = check_linecomment(linep);
		
		if (lisp && comment_col != MAXCOL)
		    pos.col = comment_col;
	    }
	    else
	    {
		--pos.col;
		if (has_mbyte)
		    pos.col -= (*mb_head_off)(linep, linep + pos.col);
	    }
	}
	else				
	{
	    if (linep[pos.col] == NUL
		    
		    
		    || (lisp && comment_col != MAXCOL
					   && pos.col == (colnr_T)comment_col))
	    {
		if (pos.lnum == curbuf->b_ml.ml_line_count  
			
			
			 || lispcomm)
		    break;
		++pos.lnum;

		if (maxtravel && traveled++ > maxtravel)
		    break;

		linep = ml_get(pos.lnum);
		pos.col = 0;
		do_quotes = -1;
		line_breakcheck();
		if (lisp)   
		    comment_col = check_linecomment(linep);
	    }
	    else
	    {
		if (has_mbyte)
		    pos.col += (*mb_ptr2len)(linep + pos.col);
		else
		    ++pos.col;
	    }
	}

	
	if (pos.col == 0 && (flags & FM_BLOCKSTOP)
				       && (linep[0] == '{' || linep[0] == '}'))
	{
	    if (linep[0] == findc && count == 0)	
		return &pos;
	    break;					
	}

	if (comment_dir)
	{
	    
	    
	    if (comment_dir == FORWARD)
	    {
		if (linep[pos.col] == '*' && linep[pos.col + 1] == '/')
		{
		    pos.col++;
		    return &pos;
		}
	    }
	    else    
	    {
		
		if (pos.col == 0)
		    continue;
		else if (raw_string)
		{
		    if (linep[pos.col - 1] == 'R'
			&& linep[pos.col] == '"'
			&& vim_strchr(linep + pos.col + 1, '(') != NULL)
		    {
			
			
			
			
			if (!find_rawstring_end(linep, &pos,
				  count > 0 ? &match_pos : &curwin->w_cursor))
			{
			    count++;
			    match_pos = pos;
			    match_pos.col--;
			}
			linep = ml_get(pos.lnum); 
		    }
		}
		else if (  linep[pos.col - 1] == '/'
			&& linep[pos.col] == '*'
			&& (pos.col == 1 || linep[pos.col - 2] != '*')
			&& (int)pos.col < comment_col)
		{
		    count++;
		    match_pos = pos;
		    match_pos.col--;
		}
		else if (linep[pos.col - 1] == '*' && linep[pos.col] == '/')
		{
		    if (count > 0)
			pos = match_pos;
		    else if (pos.col > 1 && linep[pos.col - 2] == '/'
					       && (int)pos.col <= comment_col)
			pos.col -= 2;
		    else if (ignore_cend)
			continue;
		    else
			return NULL;
		    return &pos;
		}
	    }
	    continue;
	}

	
	if (cpo_match)
	    do_quotes = 0;
	else if (do_quotes == -1)
	{
	    
	    at_start = do_quotes;
	    for (ptr = linep; *ptr; ++ptr)
	    {
		if (ptr == linep + pos.col + backwards)
		    at_start = (do_quotes & 1);
		if (*ptr == '"'
			&& (ptr == linep || ptr[-1] != '\'' || ptr[1] != '\''))
		    ++do_quotes;
		if (*ptr == '\\' && ptr[1] != NUL)
		    ++ptr;
	    }
	    do_quotes &= 1;	    

	    
	    if (!do_quotes)
	    {
		inquote = FALSE;
		if (ptr[-1] == '\\')
		{
		    do_quotes = 1;
		    if (start_in_quotes == MAYBE)
		    {
			
			inquote = TRUE;
			start_in_quotes = TRUE;
		    }
		    else if (backwards)
			inquote = TRUE;
		}
		if (pos.lnum > 1)
		{
		    ptr = ml_get(pos.lnum - 1);
		    if (*ptr && *(ptr + ml_get_len(pos.lnum - 1) - 1) == '\\')
		    {
			do_quotes = 1;
			if (start_in_quotes == MAYBE)
			{
			    inquote = at_start;
			    if (inquote)
				start_in_quotes = TRUE;
			}
			else if (!backwards)
			    inquote = TRUE;
		    }

		    
		    linep = ml_get(pos.lnum);
		}
	    }
	}
	if (start_in_quotes == MAYBE)
	    start_in_quotes = FALSE;

	
	c = PTR2CHAR(linep + pos.col);
	switch (c)
	{
	case NUL:
	    
	    if (pos.col == 0 || linep[pos.col - 1] != '\\')
	    {
		inquote = FALSE;
		start_in_quotes = FALSE;
	    }
	    break;

	case '"':
	    
	    
	    if (do_quotes)
	    {
		int col;

		for (col = pos.col - 1; col >= 0; --col)
		    if (linep[col] != '\\')
			break;
		if ((((int)pos.col - 1 - col) & 1) == 0)
		{
		    inquote = !inquote;
		    start_in_quotes = FALSE;
		}
	    }
	    break;

	
	case '\'':
	    if (!cpo_match && initc != '\'' && findc != '\'')
	    {
		if (backwards)
		{
		    if (pos.col > 1)
		    {
			if (linep[pos.col - 2] == '\'')
			{
			    pos.col -= 2;
			    break;
			}
			else if (linep[pos.col - 2] == '\\'
				  && pos.col > 2 && linep[pos.col - 3] == '\'')
			{
			    pos.col -= 3;
			    break;
			}
		    }
		}
		else if (linep[pos.col + 1])	
		{
		    if (linep[pos.col + 1] == '\\'
			   && linep[pos.col + 2] && linep[pos.col + 3] == '\'')
		    {
			pos.col += 3;
			break;
		    }
		    else if (linep[pos.col + 2] == '\'')
		    {
			pos.col += 2;
			break;
		    }
		}
	    }
	    

	default:
	    
	    if (curbuf->b_p_lisp
		    && vim_strchr((char_u *)"{}()[]", c) != NULL
		    && pos.col > 1
		    && check_prevcol(linep, pos.col, '\\', NULL)
		    && check_prevcol(linep, pos.col - 1, '#', NULL))
		break;

	    
	    
	    if ((!inquote || start_in_quotes == TRUE)
		    && (c == initc || c == findc))
	    {
		int	col, bslcnt = 0;

		if (!cpo_bsl)
		{
		    for (col = pos.col; check_prevcol(linep, col, '\\', &col);)
			bslcnt++;
		}
		
		
		if (cpo_bsl || (bslcnt & 1) == match_escaped)
		{
		    if (c == initc)
			count++;
		    else
		    {
			if (count == 0)
			    return &pos;
			count--;
		    }
		}
	    }
	}
    }

    if (comment_dir == BACKWARD && count > 0)
    {
	pos = match_pos;
	return &pos;
    }
    return (pos_T *)NULL;	
}


    int
check_linecomment(char_u *line)
{
    char_u  *p;

    p = line;
    
    if (curbuf->b_p_lisp)
    {
	if (vim_strchr(p, ';') != NULL) 
	{
	    int in_str = FALSE;	

	    p = line;		
	    while ((p = vim_strpbrk(p, (char_u *)"\";")) != NULL)
	    {
		if (*p == '"')
		{
		    if (in_str)
		    {
			if (*(p - 1) != '\\') 
			    in_str = FALSE;
		    }
		    else if (p == line || ((p - line) >= 2
				      
				      && *(p - 1) != '\\' && *(p - 2) != '#'))
			in_str = TRUE;
		}
		else if (!in_str && ((p - line) < 2
				    || (*(p - 1) != '\\' && *(p - 2) != '#'))
			       && !is_pos_in_string(line, (colnr_T)(p - line)))
		    break;	
		++p;
	    }
	}
	else
	    p = NULL;
    }
    else
	while ((p = vim_strchr(p, '/')) != NULL)
	{
	    
	    
	    
	    if (p[1] == '/' && (p == line || p[-1] != '*' || p[2] != '*')
			       && !is_pos_in_string(line, (colnr_T)(p - line)))
		break;
	    ++p;
	}

    if (p == NULL)
	return MAXCOL;
    return (int)(p - line);
}


    void
showmatch(
    int		c)	    
{
    pos_T	*lpos, save_cursor;
    pos_T	mpos;
    colnr_T	vcol;
    int	save_so;
    int	save_siso;
#ifdef CURSOR_SHAPE
    int		save_state;
#endif
    colnr_T	save_dollar_vcol;
    char_u	*p;
    int	*so = curwin->w_p_so >= 0 ? &curwin->w_p_so : &p_so;
    int	*siso = curwin->w_p_siso >= 0 ? &curwin->w_p_siso : &p_siso;

    
    
    for (p = curbuf->b_p_mps; *p != NUL; ++p)
    {
#ifdef FEAT_RIGHTLEFT
	if (PTR2CHAR(p) == c && (curwin->w_p_rl ^ p_ri))
	    break;
#endif
	p += mb_ptr2len(p) + 1;
	if (PTR2CHAR(p) == c
#ifdef FEAT_RIGHTLEFT
		&& !(curwin->w_p_rl ^ p_ri)
#endif
	   )
	    break;
	p += mb_ptr2len(p);
	if (*p == NUL)
	    return;
    }
    if (*p == NUL)
	return;

    if ((lpos = findmatch(NULL, NUL)) == NULL)	    
    {
	vim_beep(BO_MATCH);
	return;
    }

    if (lpos->lnum < curwin->w_topline || lpos->lnum >= curwin->w_botline)
	return;

    if (!curwin->w_p_wrap)
	getvcol(curwin, lpos, NULL, &vcol, NULL);

    int col_visible = (curwin->w_p_wrap
	    || (vcol >= curwin->w_leftcol
		&& vcol < curwin->w_leftcol + curwin->w_width));
    if (!col_visible)
	return;

    mpos = *lpos;    
    save_cursor = curwin->w_cursor;
    save_so = *so;
    save_siso = *siso;
    
    
    if (dollar_vcol >= 0 && dollar_vcol == curwin->w_virtcol)
	dollar_vcol = -1;
    ++curwin->w_virtcol;	
    update_screen(UPD_VALID);	

    save_dollar_vcol = dollar_vcol;
#ifdef CURSOR_SHAPE
    save_state = State;
    State = MODE_SHOWMATCH;
    ui_cursor_shape();		
#endif
    curwin->w_cursor = mpos;	
    *so = 0;			
    *siso = 0;			
    showruler(FALSE);
    setcursor();
    cursor_on();		
    out_flush_cursor(TRUE, FALSE);

    
    
    
    dollar_vcol = save_dollar_vcol;

    
    if (vim_strchr(p_cpo, CPO_SHOWMATCH) != NULL)
	ui_delay(p_mat * 100L + 8, TRUE);
    else if (!char_avail())
	ui_delay(p_mat * 100L + 9, FALSE);
    curwin->w_cursor = save_cursor;	
    *so = save_so;
    *siso = save_siso;
#ifdef CURSOR_SHAPE
    State = save_state;
    ui_cursor_shape();		
#endif
}


    static int
is_zero_width(char_u *pattern, size_t patternlen, int move, pos_T *cur, int direction)
{
    regmmatch_T	regmatch;
    int		nmatched = 0;
    int		result = -1;
    pos_T	pos;
    int		called_emsg_before = called_emsg;
    int		flag = 0;

    if (pattern == NULL)
    {
	pattern = spats[last_idx].pat;
	patternlen = spats[last_idx].patlen;
    }

    if (search_regcomp(pattern, patternlen, NULL, RE_SEARCH, RE_SEARCH,
					      SEARCH_KEEP, &regmatch) == FAIL)
	return -1;

    
    regmatch.startpos[0].col = -1;
    
    if (move)
    {
	CLEAR_POS(&pos);
    }
    else
    {
	pos = *cur;
	
	flag = SEARCH_START;
    }

    if (searchit(curwin, curbuf, &pos, NULL, direction, pattern, patternlen, 1,
				  SEARCH_KEEP + flag, RE_SEARCH, NULL) != FAIL)
    {
	
	
	do
	{
	    regmatch.startpos[0].col++;
	    nmatched = vim_regexec_multi(&regmatch, curwin, curbuf,
			       pos.lnum, regmatch.startpos[0].col, NULL);
	    if (nmatched != 0)
		break;
	} while (regmatch.regprog != NULL
		&& direction == FORWARD ? regmatch.startpos[0].col < pos.col
				      : regmatch.startpos[0].col > pos.col);

	if (called_emsg == called_emsg_before)
	{
	    result = (nmatched != 0
		&& regmatch.startpos[0].lnum == regmatch.endpos[0].lnum
		&& regmatch.startpos[0].col == regmatch.endpos[0].col);
	}
    }

    vim_regfree(regmatch.regprog);
    return result;
}



    int
current_search(
    int	count,
    int		forward)	
{
    pos_T	start_pos;	
    pos_T	end_pos;	
    pos_T	orig_pos;	
    pos_T	pos;		
    int		i;
    int		dir;
    int		result;		
    char_u	old_p_ws = p_ws;
    int		flags = 0;
    pos_T	save_VIsual = VIsual;
    int		zero_width;
    int		skip_first_backward;

    
    if (VIsual_active && *p_sel == 'e' && LT_POS(VIsual, curwin->w_cursor))
	dec_cursor();

    
    
    skip_first_backward = forward && VIsual_active
					   && LT_POS(curwin->w_cursor, VIsual);

    orig_pos = pos = curwin->w_cursor;
    if (VIsual_active)
    {
	if (forward)
	    incl(&pos);
	else
	    decl(&pos);
    }

    
    zero_width = is_zero_width(spats[last_idx].pat, spats[last_idx].patlen,
						TRUE, &curwin->w_cursor, FORWARD);
    if (zero_width == -1)
	return FAIL;  

    
    for (i = 0; i < 2; i++)
    {
	if (forward)
	{
	    if (i == 0 && skip_first_backward)
		continue;
	    dir = i;
	}
	else
	    dir = !i;

	flags = 0;
	if (!dir && !zero_width)
	    flags = SEARCH_END;
	end_pos = pos;

	
	if (i == 0)
	    p_ws = FALSE;

	result = searchit(curwin, curbuf, &pos, &end_pos,
		(dir ? FORWARD : BACKWARD),
		spats[last_idx].pat, spats[last_idx].patlen, (int) (i ? count : 1),
		SEARCH_KEEP | flags, RE_SEARCH, NULL);

	p_ws = old_p_ws;

	
	
	
	
	if (i == 1 && !result) 
	{
	    curwin->w_cursor = orig_pos;
	    if (VIsual_active)
		VIsual = save_VIsual;
	    return FAIL;
	}
	else if (i == 0 && !result)
	{
	    if (forward)
	    {
		
		CLEAR_POS(&pos);
	    }
	    else
	    {
		
		
		pos.lnum = curwin->w_buffer->b_ml.ml_line_count;
		pos.col  = ml_get_len(curwin->w_buffer->b_ml.ml_line_count);
	    }
	}
    }

    start_pos = pos;

    if (!VIsual_active)
	VIsual = start_pos;

    
    curwin->w_cursor = end_pos;
    if (LT_POS(VIsual, end_pos) && forward)
    {
	if (skip_first_backward)
	    
	    curwin->w_cursor = pos;
	else
	    
	    dec_cursor();
    }
    else if (VIsual_active && LT_POS(curwin->w_cursor, VIsual) && forward)
	curwin->w_cursor = pos;   
    VIsual_active = TRUE;
    VIsual_mode = 'v';

    if (*p_sel == 'e')
    {
	
	if (forward && LTOREQ_POS(VIsual, curwin->w_cursor))
	    inc_cursor();
	else if (!forward && LTOREQ_POS(curwin->w_cursor, VIsual))
	    inc(&VIsual);
    }

#ifdef FEAT_FOLDING
    if (fdo_flags & FDO_SEARCH && KeyTyped)
	foldOpenCursor();
#endif

    may_start_select('c');
    setmouse();
#ifdef FEAT_CLIPBOARD
    
    
    clip_star.vmode = NUL;
#endif
    redraw_curbuf_later(UPD_INVERTED);
    showmode();

    return OK;
}


    int
linewhite(linenr_T lnum)
{
    char_u  *p;

    p = skipwhite(ml_get(lnum));
    return (*p == NUL);
}


    static void
cmdline_search_stat(
    int		dirc,
    pos_T	*pos,
    pos_T	*cursor_pos,
    int		show_top_bot_msg,
    char_u	*msgbuf,
    size_t	msgbuflen,
    int		recompute,
    int		maxcount,
    int	timeout)
{
    searchstat_T stat;

    update_search_stat(dirc, pos, cursor_pos, &stat, recompute, maxcount,
								      timeout);
    if (stat.cur <= 0)
	return;

    char	t[SEARCH_STAT_BUF_LEN];
    size_t	len;

#ifdef FEAT_RIGHTLEFT
    if (curwin->w_p_rl && *curwin->w_p_rlc == 's')
    {
	if (stat.incomplete == 1)
	    len = vim_snprintf(t, SEARCH_STAT_BUF_LEN, "[?/??]");
	else if (stat.cnt > maxcount && stat.cur > maxcount)
	    len = vim_snprintf(t, SEARCH_STAT_BUF_LEN, "[>%d/>%d]",
		    maxcount, maxcount);
	else if (stat.cnt > maxcount)
	    len = vim_snprintf(t, SEARCH_STAT_BUF_LEN, "[>%d/%d]",
		    maxcount, stat.cur);
	else
	    len = vim_snprintf(t, SEARCH_STAT_BUF_LEN, "[%d/%d]",
		    stat.cnt, stat.cur);
    }
    else
#endif
    {
	if (stat.incomplete == 1)
	    len = vim_snprintf(t, SEARCH_STAT_BUF_LEN, "[?/??]");
	else if (stat.cnt > maxcount && stat.cur > maxcount)
	    len = vim_snprintf(t, SEARCH_STAT_BUF_LEN, "[>%d/>%d]",
		    maxcount, maxcount);
	else if (stat.cnt > maxcount)
	    len = vim_snprintf(t, SEARCH_STAT_BUF_LEN, "[%d/>%d]",
		    stat.cur, maxcount);
	else
	    len = vim_snprintf(t, SEARCH_STAT_BUF_LEN, "[%d/%d]",
		    stat.cur, stat.cnt);
    }

    if (show_top_bot_msg && len + 2 < SEARCH_STAT_BUF_LEN)
    {
	mch_memmove(t + 2, t, len);
	t[0] = 'W';
	t[1] = ' ';
	len += 2;
    }

    if (len > msgbuflen)
	len = msgbuflen;
    mch_memmove(msgbuf + msgbuflen - len, t, len);

    if (dirc == '?' && stat.cur == maxcount + 1)
	stat.cur = -1;

    
    msg_hist_off = TRUE;
    give_warning(msgbuf, FALSE);
    msg_hist_off = FALSE;
}


    static void
update_search_stat(
    int			dirc,
    pos_T		*pos,
    pos_T		*cursor_pos,
    searchstat_T	*stat,
    int			recompute,
    int			maxcount,
    int		timeout UNUSED)
{
    int		    save_ws = p_ws;
    int		    wraparound = FALSE;
    pos_T	    p = (*pos);
    static pos_T    lastpos = {0, 0, 0};
    static int	    cur = 0;
    static int	    cnt = 0;
    static int	    exact_match = FALSE;
    static int	    incomplete = 0;
    static int	    last_maxcount = SEARCH_STAT_DEF_MAX_COUNT;
    static int	    chgtick = 0;
    static char_u   *lastpat = NULL;
    static buf_T    *lbuf = NULL;
#ifdef FEAT_RELTIME
    proftime_T  start;
#endif

    CLEAR_POINTER(stat);

    if (dirc == 0 && !recompute && !EMPTY_POS(lastpos))
    {
	stat->cur = cur;
	stat->cnt = cnt;
	stat->exact_match = exact_match;
	stat->incomplete = incomplete;
	stat->last_maxcount = last_maxcount;
	return;
    }
    last_maxcount = maxcount;

    wraparound = ((dirc == '?' && LT_POS(lastpos, p))
	       || (dirc == '/' && LT_POS(p, lastpos)));

    
    
    
    
    if (!(chgtick == CHANGEDTICK(curbuf)
	&& MB_STRNICMP(lastpat, spats[last_idx].pat, STRLEN(lastpat)) == 0
	&& STRLEN(lastpat) == STRLEN(spats[last_idx].pat)
	&& EQUAL_POS(lastpos, *cursor_pos)
	&& lbuf == curbuf) || wraparound || cur < 0
	    || (maxcount > 0 && cur > maxcount) || recompute)
    {
	cur = 0;
	cnt = 0;
	exact_match = FALSE;
	incomplete = 0;
	CLEAR_POS(&lastpos);
	lbuf = curbuf;
    }

    
    
    if (EQUAL_POS(lastpos, *cursor_pos) && !wraparound
		&& (dirc == 0 || dirc == '/' ? cur < cnt : cur > 1))
	cur += dirc == 0 ? 0 : dirc == '/' ? 1 : -1;
    else
    {
	int	done_search = FALSE;
	pos_T	endpos = {0, 0, 0};

	p_ws = FALSE;
#ifdef FEAT_RELTIME
	if (timeout > 0)
	    profile_setlimit(timeout, &start);
#endif
	while (!got_int && searchit(curwin, curbuf, &lastpos, &endpos,
			 FORWARD, NULL, 0, 1, SEARCH_KEEP, RE_LAST, NULL) != FAIL)
	{
	    done_search = TRUE;
#ifdef FEAT_RELTIME
	    
	    if (timeout > 0 && profile_passed_limit(&start))
	    {
		incomplete = 1;
		break;
	    }
#endif
	    cnt++;
	    if (LTOREQ_POS(lastpos, p))
	    {
		cur = cnt;
		if (LT_POS(p, endpos))
		    exact_match = TRUE;
	    }
	    fast_breakcheck();
	    if (maxcount > 0 && cnt > maxcount)
	    {
		incomplete = 2;    
		break;
	    }
	}
	if (got_int)
	    cur = -1; 
	if (done_search)
	{
	    vim_free(lastpat);
	    lastpat = vim_strsave(spats[last_idx].pat);
	    chgtick = CHANGEDTICK(curbuf);
	    lbuf = curbuf;
	    lastpos = p;
	}
    }
    stat->cur = cur;
    stat->cnt = cnt;
    stat->exact_match = exact_match;
    stat->incomplete = incomplete;
    stat->last_maxcount = last_maxcount;
    p_ws = save_ws;
}

#if defined(FEAT_FIND_ID) || defined(PROTO)


    static char_u *
get_line_and_copy(linenr_T lnum, char_u *buf)
{
    char_u *line = ml_get(lnum);

    vim_strncpy(buf, line, LSIZE - 1);
    return buf;
}


    void
find_pattern_in_path(
    char_u	*ptr,		
    int		dir UNUSED,	
    int		len,		
    int		whole,		
    int		skip_comments,	
    int		type,		
				
    int	count,
    int		action,		
    linenr_T	start_lnum,	
    linenr_T	end_lnum,	
    int		forceit)	
{
    SearchedFile *files;		
    SearchedFile *bigger;		
    int		max_path_depth = 50;
    int	match_count = 1;

    char_u	*pat;
    char_u	*new_fname;
    char_u	*curr_fname = curbuf->b_fname;
    char_u	*prev_fname = NULL;
    linenr_T	lnum;
    int		depth;
    int		depth_displayed;	
    int		old_files;
    int		already_searched;
    char_u	*file_line;
    char_u	*line;
    char_u	*p;
    char_u	save_char;
    int		define_matched;
    regmatch_T	regmatch;
    regmatch_T	incl_regmatch;
    regmatch_T	def_regmatch;
    int		matched = FALSE;
    int		did_show = FALSE;
    int		found = FALSE;
    int		i;
    char_u	*already = NULL;
    char_u	*startp = NULL;
    char_u	*inc_opt = NULL;
#if defined(FEAT_QUICKFIX)
    win_T	*curwin_save = NULL;
#endif

    regmatch.regprog = NULL;
    incl_regmatch.regprog = NULL;
    def_regmatch.regprog = NULL;

    file_line = alloc(LSIZE);
    if (file_line == NULL)
	return;

    if (type != CHECK_PATH && type != FIND_DEFINE
	    
	    
	    && !compl_status_sol())
    {
	pat = alloc(len + 5);
	if (pat == NULL)
	    goto fpip_end;
	vim_snprintf((char *)pat, len + 5, whole ? "\\<%.*s\\>" : "%.*s", len, ptr);
	
	regmatch.rm_ic = ignorecase(pat);
	regmatch.regprog = vim_regcomp(pat, magic_isset() ? RE_MAGIC : 0);
	vim_free(pat);
	if (regmatch.regprog == NULL)
	    goto fpip_end;
    }
    inc_opt = (*curbuf->b_p_inc == NUL) ? p_inc : curbuf->b_p_inc;
    if (*inc_opt != NUL)
    {
	incl_regmatch.regprog = vim_regcomp(inc_opt,
						 magic_isset() ? RE_MAGIC : 0);
	if (incl_regmatch.regprog == NULL)
	    goto fpip_end;
	incl_regmatch.rm_ic = FALSE;	
    }
    if (type == FIND_DEFINE && (*curbuf->b_p_def != NUL || *p_def != NUL))
    {
	def_regmatch.regprog = vim_regcomp(*curbuf->b_p_def == NUL ? p_def : curbuf->b_p_def,
						 magic_isset() ? RE_MAGIC : 0);
	if (def_regmatch.regprog == NULL)
	    goto fpip_end;
	def_regmatch.rm_ic = FALSE;	
    }
    files = lalloc_clear(max_path_depth * sizeof(SearchedFile), TRUE);
    if (files == NULL)
	goto fpip_end;
    old_files = max_path_depth;
    depth = depth_displayed = -1;

    lnum = start_lnum;
    if (end_lnum > curbuf->b_ml.ml_line_count)
	end_lnum = curbuf->b_ml.ml_line_count;
    if (lnum > end_lnum)		
	lnum = end_lnum;
    line = get_line_and_copy(lnum, file_line);

    for (;;)
    {
	if (incl_regmatch.regprog != NULL
		&& vim_regexec(&incl_regmatch, line, (colnr_T)0))
	{
	    char_u *p_fname = (curr_fname == curbuf->b_fname)
					      ? curbuf->b_ffname : curr_fname;

	    if (inc_opt != NULL && strstr((char *)inc_opt, "\\zs") != NULL)
		
		new_fname = find_file_name_in_path(incl_regmatch.startp[0],
		       (int)(incl_regmatch.endp[0] - incl_regmatch.startp[0]),
				 FNAME_EXP|FNAME_INCL|FNAME_REL, 1L, p_fname);
	    else
		
		new_fname = file_name_in_line(incl_regmatch.endp[0], 0,
			     FNAME_EXP|FNAME_INCL|FNAME_REL, 1L, p_fname, NULL);
	    already_searched = FALSE;
	    if (new_fname != NULL)
	    {
		
		for (i = 0;; i++)
		{
		    if (i == depth + 1)
			i = old_files;
		    if (i == max_path_depth)
			break;
		    if (fullpathcmp(new_fname, files[i].name, TRUE, TRUE)
								    & FPC_SAME)
		    {
			if (type != CHECK_PATH
				&& action == ACTION_SHOW_ALL
				&& files[i].matched)
			{
			    msg_putchar('\n');	    
			    if (!got_int)	    
						    
						    
			    {
				msg_home_replace_hl(new_fname);
				msg_puts(_(" (includes previously listed match)"));
				prev_fname = NULL;
			    }
			}
			VIM_CLEAR(new_fname);
			already_searched = TRUE;
			break;
		    }
		}
	    }

	    if (type == CHECK_PATH && (action == ACTION_SHOW_ALL
				 || (new_fname == NULL && !already_searched)))
	    {
		if (did_show)
		    msg_putchar('\n');	    
		else
		{
		    gotocmdline(TRUE);	    
		    msg_puts_title(_("--- Included files "));
		    if (action != ACTION_SHOW_ALL)
			msg_puts_title(_("not found "));
		    msg_puts_title(_("in path ---\n"));
		}
		did_show = TRUE;
		while (depth_displayed < depth && !got_int)
		{
		    ++depth_displayed;
		    for (i = 0; i < depth_displayed; i++)
			msg_puts("  ");
		    msg_home_replace(files[depth_displayed].name);
		    msg_puts(" -->\n");
		}
		if (!got_int)		    
					    
		{
		    for (i = 0; i <= depth_displayed; i++)
			msg_puts("  ");
		    if (new_fname != NULL)
		    {
			
			
			msg_outtrans_attr(new_fname, HL_ATTR(HLF_D));
		    }
		    else
		    {
			
			if (inc_opt != NULL
				   && strstr((char *)inc_opt, "\\zs") != NULL)
			{
			    
			    p = incl_regmatch.startp[0];
			    i = (int)(incl_regmatch.endp[0]
						   - incl_regmatch.startp[0]);
			}
			else
			{
			    
			    for (p = incl_regmatch.endp[0];
						  *p && !vim_isfilec(*p); p++)
				;
			    for (i = 0; vim_isfilec(p[i]); i++)
				;
			}

			if (i == 0)
			{
			    
			    p = incl_regmatch.endp[0];
			    i = (int)STRLEN(p);
			}
			
			
			else if (p > line)
			{
			    if (p[-1] == '"' || p[-1] == '<')
			    {
				--p;
				++i;
			    }
			    if (p[i] == '"' || p[i] == '>')
				++i;
			}
			save_char = p[i];
			p[i] = NUL;
			msg_outtrans_attr(p, HL_ATTR(HLF_D));
			p[i] = save_char;
		    }

		    if (new_fname == NULL && action == ACTION_SHOW_ALL)
		    {
			if (already_searched)
			    msg_puts(_("  (Already listed)"));
			else
			    msg_puts(_("  NOT FOUND"));
		    }
		}
		out_flush();	    
	    }

	    if (new_fname != NULL)
	    {
		
		if (depth + 1 == old_files)
		{
		    bigger = ALLOC_MULT(SearchedFile, max_path_depth * 2);
		    if (bigger != NULL)
		    {
			for (i = 0; i <= depth; i++)
			    bigger[i] = files[i];
			for (i = depth + 1; i < old_files + max_path_depth; i++)
			{
			    bigger[i].fp = NULL;
			    bigger[i].name = NULL;
			    bigger[i].lnum = 0;
			    bigger[i].matched = FALSE;
			}
			for (i = old_files; i < max_path_depth; i++)
			    bigger[i + max_path_depth] = files[i];
			old_files += max_path_depth;
			max_path_depth *= 2;
			vim_free(files);
			files = bigger;
		    }
		}
		if ((files[depth + 1].fp = mch_fopen((char *)new_fname, "r"))
								    == NULL)
		    vim_free(new_fname);
		else
		{
		    if (++depth == old_files)
		    {
			
			vim_free(files[old_files].name);
			++old_files;
		    }
		    files[depth].name = curr_fname = new_fname;
		    files[depth].lnum = 0;
		    files[depth].matched = FALSE;
		    if (action == ACTION_EXPAND)
		    {
			msg_hist_off = TRUE;	
			vim_snprintf((char*)IObuff, IOSIZE,
				_("Scanning included file: %s"),
				(char *)new_fname);
			msg_trunc_attr((char *)IObuff, TRUE, HL_ATTR(HLF_R));
		    }
		    else if (p_verbose >= 5)
		    {
			verbose_enter();
			smsg(_("Searching included file %s"),
							   (char *)new_fname);
			verbose_leave();
		    }

		}
	    }
	}
	else
	{
	    
	    p = line;
search_line:
	    define_matched = FALSE;
	    if (def_regmatch.regprog != NULL
			      && vim_regexec(&def_regmatch, line, (colnr_T)0))
	    {
		
		p = def_regmatch.endp[0];
		while (*p && !vim_iswordc(*p))
		    p++;
		define_matched = TRUE;
	    }

	    
	    if (def_regmatch.regprog == NULL || define_matched)
	    {
		if (define_matched || compl_status_sol())
		{
		    
		    startp = skipwhite(p);
		    if (p_ic)
			matched = !MB_STRNICMP(startp, ptr, len);
		    else
			matched = !STRNCMP(startp, ptr, len);
		    if (matched && define_matched && whole
						  && vim_iswordc(startp[len]))
			matched = FALSE;
		}
		else if (regmatch.regprog != NULL
			 && vim_regexec(&regmatch, line, (colnr_T)(p - line)))
		{
		    matched = TRUE;
		    startp = regmatch.startp[0];
		    
		    if (!define_matched && skip_comments)
		    {
			if ((*line != '#' ||
				STRNCMP(skipwhite(line + 1), "define", 6) != 0)
				&& get_leader_len(line, NULL, FALSE, TRUE))
			    matched = FALSE;

			
			p = skipwhite(line);
			if (matched
				|| (p[0] == '/' && p[1] == '*') || p[0] == '*')
			    for (p = line; *p && p < startp; ++p)
			    {
				if (matched
					&& p[0] == '/'
					&& (p[1] == '*' || p[1] == '/'))
				{
				    matched = FALSE;
				    
				    if (p[1] == '/')
					break;
				    ++p;
				}
				else if (!matched && p[0] == '*' && p[1] == '/')
				{
				    
				    matched = TRUE;
				    ++p;
				}
			    }
		    }
		}
	    }
	}
	if (matched)
	{
	    if (action == ACTION_EXPAND)
	    {
		int	cont_s_ipos = FALSE;
		int	add_r;
		char_u	*aux;

		if (depth == -1 && lnum == curwin->w_cursor.lnum)
		    break;
		found = TRUE;
		aux = p = startp;
		if (compl_status_adding())
		{
		    p += ins_compl_len();
		    if (vim_iswordp(p))
			goto exit_matched;
		    p = find_word_start(p);
		}
		p = find_word_end(p);
		i = (int)(p - aux);

		if (compl_status_adding() && i == ins_compl_len())
		{
		    
		    STRNCPY(IObuff, aux, i);

		    
		    
		    
		    if (depth < 0)
		    {
			if (lnum >= end_lnum)
			    goto exit_matched;
			line = get_line_and_copy(++lnum, file_line);
		    }
		    else if (vim_fgets(line = file_line,
						      LSIZE, files[depth].fp))
			goto exit_matched;

		    
		    
		    
		    already = aux = p = skipwhite(line);
		    p = find_word_start(p);
		    p = find_word_end(p);
		    if (p > aux)
		    {
			if (*aux != ')' && IObuff[i-1] != TAB)
			{
			    if (IObuff[i-1] != ' ')
				IObuff[i++] = ' ';
			    
			    if (p_js
				&& (IObuff[i-2] == '.'
				    || (vim_strchr(p_cpo, CPO_JOINSP) == NULL
					&& (IObuff[i-2] == '?'
					    || IObuff[i-2] == '!'))))
				IObuff[i++] = ' ';
			}
			
			if (p - aux >= IOSIZE - i)
			    p = aux + IOSIZE - i - 1;
			STRNCPY(IObuff + i, aux, p - aux);
			i += (int)(p - aux);
			cont_s_ipos = TRUE;
		    }
		    IObuff[i] = NUL;
		    aux = IObuff;

		    if (i == ins_compl_len())
			goto exit_matched;
		}

		add_r = ins_compl_add_infercase(aux, i, p_ic,
			curr_fname == curbuf->b_fname ? NULL : curr_fname,
			dir, cont_s_ipos);
		if (add_r == OK)
		    
		    dir = FORWARD;
		else if (add_r == FAIL)
		    break;
	    }
	    else if (action == ACTION_SHOW_ALL)
	    {
		found = TRUE;
		if (!did_show)
		    gotocmdline(TRUE);		
		if (curr_fname != prev_fname)
		{
		    if (did_show)
			msg_putchar('\n');	
		    if (!got_int)		
						
			msg_home_replace_hl(curr_fname);
		    prev_fname = curr_fname;
		}
		did_show = TRUE;
		if (!got_int)
		    show_pat_in_path(line, type, TRUE, action,
			    (depth == -1) ? NULL : files[depth].fp,
			    (depth == -1) ? &lnum : &files[depth].lnum,
			    match_count++);

		
		
		for (i = 0; i <= depth; ++i)
		    files[i].matched = TRUE;
	    }
	    else if (--count <= 0)
	    {
		found = TRUE;
		if (depth == -1 && lnum == curwin->w_cursor.lnum
#if defined(FEAT_QUICKFIX)
						      && g_do_tagpreview == 0
#endif
						      )
		    emsg(_(e_match_is_on_current_line));
		else if (action == ACTION_SHOW)
		{
		    show_pat_in_path(line, type, did_show, action,
			(depth == -1) ? NULL : files[depth].fp,
			(depth == -1) ? &lnum : &files[depth].lnum, 1L);
		    did_show = TRUE;
		}
		else
		{
#ifdef FEAT_GUI
		    need_mouse_correct = TRUE;
#endif
#if defined(FEAT_QUICKFIX)
		    
		    if (g_do_tagpreview != 0)
		    {
			curwin_save = curwin;
			prepare_tagpreview(TRUE, TRUE, FALSE);
		    }
#endif
		    if (action == ACTION_SPLIT)
		    {
			if (win_split(0, 0) == FAIL)
			    break;
			RESET_BINDING(curwin);
		    }
		    if (depth == -1)
		    {
			
#if defined(FEAT_QUICKFIX)
			if (g_do_tagpreview != 0)
			{
			    if (!win_valid(curwin_save))
				break;
			    if (!GETFILE_SUCCESS(getfile(
					   curwin_save->w_buffer->b_fnum, NULL,
						     NULL, TRUE, lnum, forceit)))
				break;	
			}
			else
#endif
			    setpcmark();
			curwin->w_cursor.lnum = lnum;
			check_cursor();
		    }
		    else
		    {
			if (!GETFILE_SUCCESS(getfile(
					0, files[depth].name, NULL, TRUE,
						    files[depth].lnum, forceit)))
			    break;	
			
			
			curwin->w_cursor.lnum = files[depth].lnum;
		    }
		}
		if (action != ACTION_SHOW)
		{
		    curwin->w_cursor.col = (colnr_T)(startp - line);
		    curwin->w_set_curswant = TRUE;
		}

#if defined(FEAT_QUICKFIX)
		if (g_do_tagpreview != 0
			   && curwin != curwin_save && win_valid(curwin_save))
		{
		    
		    validate_cursor();
		    redraw_later(UPD_VALID);
		    win_enter(curwin_save, TRUE);
		}
# ifdef FEAT_PROP_POPUP
		else if (WIN_IS_POPUP(curwin))
		    
		    win_enter(firstwin, TRUE);
# endif
#endif
		break;
	    }
exit_matched:
	    matched = FALSE;
	    
	    
	    if (def_regmatch.regprog == NULL
		    && action == ACTION_EXPAND
		    && !compl_status_sol()
		    && *startp != NUL
		    && *(startp + mb_ptr2len(startp)) != NUL)
		goto search_line;
	}
	line_breakcheck();
	if (action == ACTION_EXPAND)
	    ins_compl_check_keys(30, FALSE);
	if (got_int || ins_compl_interrupted())
	    break;

	
	while (depth >= 0 && !already
		&& vim_fgets(line = file_line, LSIZE, files[depth].fp))
	{
	    fclose(files[depth].fp);
	    --old_files;
	    files[old_files].name = files[depth].name;
	    files[old_files].matched = files[depth].matched;
	    --depth;
	    curr_fname = (depth == -1) ? curbuf->b_fname
				       : files[depth].name;
	    if (depth < depth_displayed)
		depth_displayed = depth;
	}
	if (depth >= 0)		
	{
	    files[depth].lnum++;
	    
	    i = (int)STRLEN(line);
	    if (i > 0 && line[i - 1] == '\n')
		line[--i] = NUL;
	    if (i > 0 && line[i - 1] == '\r')
		line[--i] = NUL;
	}
	else if (!already)
	{
	    if (++lnum > end_lnum)
		break;
	    line = get_line_and_copy(lnum, file_line);
	}
	already = NULL;
    }
    

    
    for (i = 0; i <= depth; i++)
    {
	fclose(files[i].fp);
	vim_free(files[i].name);
    }
    for (i = old_files; i < max_path_depth; i++)
	vim_free(files[i].name);
    vim_free(files);

    if (type == CHECK_PATH)
    {
	if (!did_show)
	{
	    if (action != ACTION_SHOW_ALL)
		msg(_("All included files were found"));
	    else
		msg(_("No included files"));
	}
    }
    else if (!found && action != ACTION_EXPAND)
    {
	if (got_int || ins_compl_interrupted())
	    emsg(_(e_interrupted));
	else if (type == FIND_DEFINE)
	    emsg(_(e_couldnt_find_definition));
	else
	    emsg(_(e_couldnt_find_pattern));
    }
    if (action == ACTION_SHOW || action == ACTION_SHOW_ALL)
	msg_end();

fpip_end:
    vim_free(file_line);
    vim_regfree(regmatch.regprog);
    vim_regfree(incl_regmatch.regprog);
    vim_regfree(def_regmatch.regprog);
}

    static void
show_pat_in_path(
    char_u  *line,
    int	    type,
    int	    did_show,
    int	    action,
    FILE    *fp,
    linenr_T *lnum,
    int    count)
{
    char_u  *p;
    size_t  linelen;

    if (did_show)
	msg_putchar('\n');	
    else if (!msg_silent)
	gotocmdline(TRUE);	
    if (got_int)		
	return;
    linelen = STRLEN(line);
    for (;;)
    {
	p = line + linelen - 1;
	if (fp != NULL)
	{
	    
	    if (p >= line && *p == '\n')
		--p;
	    if (p >= line && *p == '\r')
		--p;
	    *(p + 1) = NUL;
	}
	if (action == ACTION_SHOW_ALL)
	{
	    sprintf((char *)IObuff, "%3ld: ", count);	
	    msg_puts((char *)IObuff);
	    sprintf((char *)IObuff, "%4ld", *lnum);	
						
	    msg_puts_attr((char *)IObuff, HL_ATTR(HLF_N));
	    msg_puts(" ");
	}
	msg_prt_line(line, FALSE);
	out_flush();			

	
	if (got_int || type != FIND_DEFINE || p < line || *p != '\\')
	    break;

	if (fp != NULL)
	{
	    if (vim_fgets(line, LSIZE, fp)) 
		break;
	    linelen = STRLEN(line);
	    ++*lnum;
	}
	else
	{
	    if (++*lnum > curbuf->b_ml.ml_line_count)
		break;
	    line = ml_get(*lnum);
	    linelen = ml_get_len(*lnum);
	}
	msg_putchar('\n');
    }
}
#endif

#ifdef FEAT_VIMINFO

    spat_T *
get_spat(int idx)
{
    return &spats[idx];
}


    int
get_spat_last_idx(void)
{
    return last_idx;
}
#endif

#if defined(FEAT_EVAL) || defined(FEAT_PROTO)

    void
f_searchcount(typval_T *argvars, typval_T *rettv)
{
    pos_T		pos = curwin->w_cursor;
    char_u		*pattern = NULL;
    int			maxcount = SEARCH_STAT_DEF_MAX_COUNT;
    int		timeout = SEARCH_STAT_DEF_TIMEOUT;
    int			recompute = TRUE;
    searchstat_T	stat;

    if (rettv_dict_alloc(rettv) == FAIL)
	return;

    if (in_vim9script() && check_for_opt_dict_arg(argvars, 0) == FAIL)
	return;

    if (shortmess(SHM_SEARCHCOUNT))	
	recompute = TRUE;

    if (argvars[0].v_type != VAR_UNKNOWN)
    {
	dict_T		*dict;
	dictitem_T	*di;
	listitem_T	*li;
	int		error = FALSE;

	if (check_for_nonnull_dict_arg(argvars, 0) == FAIL)
	    return;
	dict = argvars[0].vval.v_dict;
	di = dict_find(dict, (char_u *)"timeout", -1);
	if (di != NULL)
	{
	    timeout = (int)tv_get_number_chk(&di->di_tv, &error);
	    if (error)
		return;
	}
	di = dict_find(dict, (char_u *)"maxcount", -1);
	if (di != NULL)
	{
	    maxcount = (int)tv_get_number_chk(&di->di_tv, &error);
	    if (error)
		return;
	}
	recompute = dict_get_bool(dict, "recompute", recompute);
	di = dict_find(dict, (char_u *)"pattern", -1);
	if (di != NULL)
	{
	    pattern = tv_get_string_chk(&di->di_tv);
	    if (pattern == NULL)
		return;
	}
	di = dict_find(dict, (char_u *)"pos", -1);
	if (di != NULL)
	{
	    if (di->di_tv.v_type != VAR_LIST)
	    {
		semsg(_(e_invalid_argument_str), "pos");
		return;
	    }
	    if (list_len(di->di_tv.vval.v_list) != 3)
	    {
		semsg(_(e_invalid_argument_str), "List format should be [lnum, col, off]");
		return;
	    }
	    li = list_find(di->di_tv.vval.v_list, 0L);
	    if (li != NULL)
	    {
		pos.lnum = tv_get_number_chk(&li->li_tv, &error);
		if (error)
		    return;
	    }
	    li = list_find(di->di_tv.vval.v_list, 1L);
	    if (li != NULL)
	    {
		pos.col = tv_get_number_chk(&li->li_tv, &error) - 1;
		if (error)
		    return;
	    }
	    li = list_find(di->di_tv.vval.v_list, 2L);
	    if (li != NULL)
	    {
		pos.coladd = tv_get_number_chk(&li->li_tv, &error);
		if (error)
		    return;
	    }
	}
    }

    save_last_search_pattern();
#ifdef FEAT_SEARCH_EXTRA
    save_incsearch_state();
#endif
    if (pattern != NULL)
    {
	if (*pattern == NUL)
	    goto the_end;
	vim_free(spats[last_idx].pat);
	spats[last_idx].patlen = STRLEN(pattern);
	spats[last_idx].pat = vim_strnsave(pattern, spats[last_idx].patlen);
	if (spats[last_idx].pat == NULL)
	    spats[last_idx].patlen = 0;
    }
    if (spats[last_idx].pat == NULL || *spats[last_idx].pat == NUL)
	goto the_end;	

    update_search_stat(0, &pos, &pos, &stat, recompute, maxcount, timeout);

    dict_add_number(rettv->vval.v_dict, "current", stat.cur);
    dict_add_number(rettv->vval.v_dict, "total", stat.cnt);
    dict_add_number(rettv->vval.v_dict, "exact_match", stat.exact_match);
    dict_add_number(rettv->vval.v_dict, "incomplete", stat.incomplete);
    dict_add_number(rettv->vval.v_dict, "maxcount", stat.last_maxcount);

the_end:
    restore_last_search_pattern();
#ifdef FEAT_SEARCH_EXTRA
    restore_incsearch_state();
#endif
}
#endif


typedef struct
{
    int		idx;		
    listitem_T	*item;
    int		score;
    list_T	*lmatchpos;
} fuzzyItem_T;



#define SEQUENTIAL_BONUS 40

#define PATH_SEPARATOR_BONUS 30

#define WORD_SEPARATOR_BONUS 25

#define CAMEL_BONUS 30

#define FIRST_LETTER_BONUS 15

#define LEADING_LETTER_PENALTY (-5)

#define MAX_LEADING_LETTER_PENALTY (-15)

#define UNMATCHED_LETTER_PENALTY (-1)

#define GAP_PENALTY	(-2)

#define SCORE_NONE	(-9999)

#define FUZZY_MATCH_RECURSION_LIMIT	10


    static int
fuzzy_match_compute_score(
	char_u		*str,
	int		strSz,
	int_u		*matches,
	int		numMatches)
{
    int		score;
    int		penalty;
    int		unmatched;
    int		i;
    char_u	*p = str;
    int_u	sidx = 0;

    
    score = 100;

    
    penalty = LEADING_LETTER_PENALTY * matches[0];
    if (penalty < MAX_LEADING_LETTER_PENALTY)
	penalty = MAX_LEADING_LETTER_PENALTY;
    score += penalty;

    
    unmatched = strSz - numMatches;
    score += UNMATCHED_LETTER_PENALTY * unmatched;

    
    for (i = 0; i < numMatches; ++i)
    {
	int_u	currIdx = matches[i];

	if (i > 0)
	{
	    int_u	prevIdx = matches[i - 1];

	    
	    if (currIdx == (prevIdx + 1))
		score += SEQUENTIAL_BONUS;
	    else
		score += GAP_PENALTY * (currIdx - prevIdx);
	}

	
	if (currIdx > 0)
	{
	    
	    int	neighbor = ' ';
	    int	curr;

	    if (has_mbyte)
	    {
		while (sidx < currIdx)
		{
		    neighbor = (*mb_ptr2char)(p);
		    MB_PTR_ADV(p);
		    sidx++;
		}
		curr = (*mb_ptr2char)(p);
	    }
	    else
	    {
		neighbor = str[currIdx - 1];
		curr = str[currIdx];
	    }

	    if (vim_islower(neighbor) && vim_isupper(curr))
		score += CAMEL_BONUS;

	    
	    if (neighbor == '/' || neighbor == '\\')
		score += PATH_SEPARATOR_BONUS;
	    else if (neighbor == ' ' || neighbor == '_')
		score += WORD_SEPARATOR_BONUS;
	}
	else
	{
	    
	    score += FIRST_LETTER_BONUS;
	}
    }
    return score;
}


    static int
fuzzy_match_recursive(
	char_u		*fuzpat,
	char_u		*str,
	int_u		strIdx,
	int		*outScore,
	char_u		*strBegin,
	int		strLen,
	int_u		*srcMatches,
	int_u		*matches,
	int		maxMatches,
	int		nextMatch,
	int		*recursionCount)
{
    
    int		recursiveMatch = FALSE;
    int_u	bestRecursiveMatches[MAX_FUZZY_MATCHES];
    int		bestRecursiveScore = 0;
    int		first_match;
    int		matched;

    
    ++*recursionCount;
    if (*recursionCount >= FUZZY_MATCH_RECURSION_LIMIT)
	return 0;

    
    if (*fuzpat == NUL || *str == NUL)
	return 0;

    
    first_match = TRUE;
    while (*fuzpat != NUL && *str != NUL)
    {
	int	c1;
	int	c2;

	c1 = PTR2CHAR(fuzpat);
	c2 = PTR2CHAR(str);

	
	if (vim_tolower(c1) == vim_tolower(c2))
	{
	    
	    if (nextMatch >= maxMatches)
		return 0;

	    int		recursiveScore = 0;
	    int_u	recursiveMatches[MAX_FUZZY_MATCHES];
	    CLEAR_FIELD(recursiveMatches);

	    
	    if (first_match && srcMatches)
	    {
		memcpy(matches, srcMatches, nextMatch * sizeof(srcMatches[0]));
		first_match = FALSE;
	    }

	    
	    char_u *next_char = str + (has_mbyte ? (*mb_ptr2len)(str) : 1);
	    if (fuzzy_match_recursive(fuzpat, next_char, strIdx + 1,
			&recursiveScore, strBegin, strLen, matches,
			recursiveMatches,
			ARRAY_LENGTH(recursiveMatches),
			nextMatch, recursionCount))
	    {
		
		if (!recursiveMatch || recursiveScore > bestRecursiveScore)
		{
		    memcpy(bestRecursiveMatches, recursiveMatches,
			    MAX_FUZZY_MATCHES * sizeof(recursiveMatches[0]));
		    bestRecursiveScore = recursiveScore;
		}
		recursiveMatch = TRUE;
	    }

	    
	    matches[nextMatch++] = strIdx;
	    if (has_mbyte)
		MB_PTR_ADV(fuzpat);
	    else
		++fuzpat;
	}
	if (has_mbyte)
	    MB_PTR_ADV(str);
	else
	    ++str;
	strIdx++;
    }

    
    matched = *fuzpat == NUL ? TRUE : FALSE;

    
    if (matched)
	*outScore = fuzzy_match_compute_score(strBegin, strLen, matches,
		nextMatch);

    
    if (recursiveMatch && (!matched || bestRecursiveScore > *outScore))
    {
	
	memcpy(matches, bestRecursiveMatches, maxMatches * sizeof(matches[0]));
	*outScore = bestRecursiveScore;
	return nextMatch;
    }
    else if (matched)
	return nextMatch;	

    return 0;		
}


    int
fuzzy_match(
	char_u		*str,
	char_u		*pat_arg,
	int		matchseq,
	int		*outScore,
	int_u		*matches,
	int		maxMatches)
{
    int		recursionCount = 0;
    int		len = MB_CHARLEN(str);
    char_u	*save_pat;
    char_u	*pat;
    char_u	*p;
    int		complete = FALSE;
    int		score = 0;
    int		numMatches = 0;
    int		matchCount;

    *outScore = 0;

    save_pat = vim_strsave(pat_arg);
    if (save_pat == NULL)
	return FALSE;
    pat = save_pat;
    p = pat;

    
    while (TRUE)
    {
	if (matchseq)
	    complete = TRUE;
	else
	{
	    
	    p = skipwhite(p);
	    if (*p == NUL)
		break;
	    pat = p;
	    while (*p != NUL && !VIM_ISWHITE(PTR2CHAR(p)))
	    {
		if (has_mbyte)
		    MB_PTR_ADV(p);
		else
		    ++p;
	    }
	    if (*p == NUL)		
		complete = TRUE;
	    *p = NUL;
	}

	score = 0;
	recursionCount = 0;
	matchCount = fuzzy_match_recursive(pat, str, 0, &score, str, len, NULL,
				matches + numMatches, maxMatches - numMatches,
				0, &recursionCount);
	if (matchCount == 0)
	{
	    numMatches = 0;
	    break;
	}

	
	*outScore += score;
	numMatches += matchCount;

	if (complete)
	    break;

	
	++p;
    }

    vim_free(save_pat);
    return numMatches != 0;
}

#if defined(FEAT_EVAL) || defined(FEAT_PROTO)

    static int
fuzzy_match_item_compare(const void *s1, const void *s2)
{
    int		v1 = ((fuzzyItem_T *)s1)->score;
    int		v2 = ((fuzzyItem_T *)s2)->score;
    int		idx1 = ((fuzzyItem_T *)s1)->idx;
    int		idx2 = ((fuzzyItem_T *)s2)->idx;

    if (v1 == v2)
	return idx1 == idx2 ? 0 : idx1 > idx2 ? 1 : -1;
    else
	return v1 > v2 ? -1 : 1;
}


    static void
fuzzy_match_in_list(
	list_T		*l,
	char_u		*str,
	int		matchseq,
	char_u		*key,
	callback_T	*item_cb,
	int		retmatchpos,
	list_T		*fmatchlist,
	int		max_matches)
{
    int	len;
    fuzzyItem_T	*items;
    listitem_T	*li;
    int	i = 0;
    int	match_count = 0;
    int_u	matches[MAX_FUZZY_MATCHES];

    len = list_len(l);
    if (len == 0)
	return;
    if (max_matches > 0 && len > max_matches)
	len = max_matches;

    items = ALLOC_CLEAR_MULT(fuzzyItem_T, len);
    if (items == NULL)
	return;

    
    FOR_ALL_LIST_ITEMS(l, li)
    {
	int		score;
	char_u		*itemstr;
	typval_T	rettv;

	if (max_matches > 0 && match_count >= max_matches)
	    break;

	itemstr = NULL;
	rettv.v_type = VAR_UNKNOWN;
	if (li->li_tv.v_type == VAR_STRING)	
	    itemstr = li->li_tv.vval.v_string;
	else if (li->li_tv.v_type == VAR_DICT
				&& (key != NULL || item_cb->cb_name != NULL))
	{
	    
	    
	    if (key != NULL)
		itemstr = dict_get_string(li->li_tv.vval.v_dict,
							   (char *)key, FALSE);
	    else
	    {
		typval_T	argv[2];

		
		li->li_tv.vval.v_dict->dv_refcount++;
		argv[0].v_type = VAR_DICT;
		argv[0].vval.v_dict = li->li_tv.vval.v_dict;
		argv[1].v_type = VAR_UNKNOWN;
		if (call_callback(item_cb, -1, &rettv, 1, argv) != FAIL)
		{
		    if (rettv.v_type == VAR_STRING)
			itemstr = rettv.vval.v_string;
		}
		dict_unref(li->li_tv.vval.v_dict);
	    }
	}

	if (itemstr != NULL
		&& fuzzy_match(itemstr, str, matchseq, &score, matches,
							MAX_FUZZY_MATCHES))
	{
	    items[match_count].idx = match_count;
	    items[match_count].item = li;
	    items[match_count].score = score;

	    
	    
	    if (retmatchpos)
	    {
		int	j = 0;
		char_u	*p;

		items[match_count].lmatchpos = list_alloc();
		if (items[match_count].lmatchpos == NULL)
		    goto done;

		p = str;
		while (*p != NUL)
		{
		    if (!VIM_ISWHITE(PTR2CHAR(p)) || matchseq)
		    {
			if (list_append_number(items[match_count].lmatchpos,
				    matches[j]) == FAIL)
			    goto done;
			j++;
		    }
		    if (has_mbyte)
			MB_PTR_ADV(p);
		    else
			++p;
		}
	    }
	    ++match_count;
	}
	clear_tv(&rettv);
    }

    if (match_count > 0)
    {
	list_T		*retlist;

	
	qsort((void *)items, (size_t)match_count, sizeof(fuzzyItem_T),
		fuzzy_match_item_compare);

	
	
	
	
	
	
	
	if (retmatchpos)
	{
	    li = list_find(fmatchlist, 0);
	    if (li == NULL || li->li_tv.vval.v_list == NULL)
		goto done;
	    retlist = li->li_tv.vval.v_list;
	}
	else
	    retlist = fmatchlist;

	
	for (i = 0; i < match_count; i++)
	{
	    if (items[i].score == SCORE_NONE)
		break;
	    list_append_tv(retlist, &items[i].item->li_tv);
	}

	
	if (retmatchpos)
	{
	    li = list_find(fmatchlist, -2);
	    if (li == NULL || li->li_tv.vval.v_list == NULL)
		goto done;
	    retlist = li->li_tv.vval.v_list;

	    for (i = 0; i < match_count; i++)
	    {
		if (items[i].score == SCORE_NONE)
		    break;
		if (items[i].lmatchpos != NULL
		      && list_append_list(retlist, items[i].lmatchpos) == FAIL)
		    goto done;
	    }

	    
	    li = list_find(fmatchlist, -1);
	    if (li == NULL || li->li_tv.vval.v_list == NULL)
		goto done;
	    retlist = li->li_tv.vval.v_list;
	    for (i = 0; i < match_count; i++)
	    {
		if (items[i].score == SCORE_NONE)
		    break;
		if (list_append_number(retlist, items[i].score) == FAIL)
		    goto done;
	    }
	}
    }

done:
    vim_free(items);
}


    static void
do_fuzzymatch(typval_T *argvars, typval_T *rettv, int retmatchpos)
{
    callback_T	cb;
    char_u	*key = NULL;
    int		ret;
    int		matchseq = FALSE;
    int	max_matches = 0;

    if (in_vim9script()
	    && (check_for_list_arg(argvars, 0) == FAIL
		|| check_for_string_arg(argvars, 1) == FAIL
		|| check_for_opt_dict_arg(argvars, 2) == FAIL))
	return;

    CLEAR_POINTER(&cb);

    
    if (argvars[0].v_type != VAR_LIST || argvars[0].vval.v_list == NULL)
    {
	semsg(_(e_argument_of_str_must_be_list),
			     retmatchpos ? "matchfuzzypos()" : "matchfuzzy()");
	return;
    }
    if (argvars[1].v_type != VAR_STRING
	    || argvars[1].vval.v_string == NULL)
    {
	semsg(_(e_invalid_argument_str), tv_get_string(&argvars[1]));
	return;
    }

    if (argvars[2].v_type != VAR_UNKNOWN)
    {
	dict_T		*d;
	dictitem_T	*di;

	if (check_for_nonnull_dict_arg(argvars, 2) == FAIL)
	    return;

	
	
	d = argvars[2].vval.v_dict;
	if ((di = dict_find(d, (char_u *)"key", -1)) != NULL)
	{
	    if (di->di_tv.v_type != VAR_STRING
		    || di->di_tv.vval.v_string == NULL
		    || *di->di_tv.vval.v_string == NUL)
	    {
		semsg(_(e_invalid_argument_str), tv_get_string(&di->di_tv));
		return;
	    }
	    key = tv_get_string(&di->di_tv);
	}
	else if ((di = dict_find(d, (char_u *)"text_cb", -1)) != NULL)
	{
	    cb = get_callback(&di->di_tv);
	    if (cb.cb_name == NULL)
	    {
		semsg(_(e_invalid_value_for_argument_str), "text_cb");
		return;
	    }
	}

	if ((di = dict_find(d, (char_u *)"limit", -1)) != NULL)
	{
	    if (di->di_tv.v_type != VAR_NUMBER)
	    {
		semsg(_(e_invalid_argument_str), tv_get_string(&di->di_tv));
		return;
	    }
	    max_matches = (int)tv_get_number_chk(&di->di_tv, NULL);
	}

	if (dict_has_key(d, "matchseq"))
	    matchseq = TRUE;
    }

    
    ret = rettv_list_alloc(rettv);
    if (ret == FAIL)
	goto done;
    if (retmatchpos)
    {
	list_T	*l;

	
	
	
	
	l = list_alloc();
	if (l == NULL)
	    goto done;
	if (list_append_list(rettv->vval.v_list, l) == FAIL)
	{
	    vim_free(l);
	    goto done;
	}
	l = list_alloc();
	if (l == NULL)
	    goto done;
	if (list_append_list(rettv->vval.v_list, l) == FAIL)
	{
	    vim_free(l);
	    goto done;
	}
	l = list_alloc();
	if (l == NULL)
	    goto done;
	if (list_append_list(rettv->vval.v_list, l) == FAIL)
	{
	    vim_free(l);
	    goto done;
	}
    }

    fuzzy_match_in_list(argvars[0].vval.v_list, tv_get_string(&argvars[1]),
	    matchseq, key, &cb, retmatchpos, rettv->vval.v_list, max_matches);

done:
    free_callback(&cb);
}


    void
f_matchfuzzy(typval_T *argvars, typval_T *rettv)
{
    do_fuzzymatch(argvars, rettv, FALSE);
}


    void
f_matchfuzzypos(typval_T *argvars, typval_T *rettv)
{
    do_fuzzymatch(argvars, rettv, TRUE);
}
#endif


    static int
fuzzy_match_str_compare(const void *s1, const void *s2)
{
    int		v1 = ((fuzmatch_str_T *)s1)->score;
    int		v2 = ((fuzmatch_str_T *)s2)->score;
    int		idx1 = ((fuzmatch_str_T *)s1)->idx;
    int		idx2 = ((fuzmatch_str_T *)s2)->idx;

    if (v1 == v2)
	return idx1 == idx2 ? 0 : idx1 > idx2 ? 1 : -1;
    else
	return v1 > v2 ? -1 : 1;
}


    static void
fuzzy_match_str_sort(fuzmatch_str_T *fm, int sz)
{
    
    qsort((void *)fm, (size_t)sz, sizeof(fuzmatch_str_T),
	    fuzzy_match_str_compare);
}


    static int
fuzzy_match_func_compare(const void *s1, const void *s2)
{
    int		v1 = ((fuzmatch_str_T *)s1)->score;
    int		v2 = ((fuzmatch_str_T *)s2)->score;
    int		idx1 = ((fuzmatch_str_T *)s1)->idx;
    int		idx2 = ((fuzmatch_str_T *)s2)->idx;
    char_u	*str1 = ((fuzmatch_str_T *)s1)->str;
    char_u	*str2 = ((fuzmatch_str_T *)s2)->str;

    if (*str1 != '<' && *str2 == '<')
	return -1;
    if (*str1 == '<' && *str2 != '<')
	return 1;
    if (v1 == v2)
	return idx1 == idx2 ? 0 : idx1 > idx2 ? 1 : -1;
    else
	return v1 > v2 ? -1 : 1;
}


    static void
fuzzy_match_func_sort(fuzmatch_str_T *fm, int sz)
{
    
    qsort((void *)fm, (size_t)sz, sizeof(fuzmatch_str_T),
		fuzzy_match_func_compare);
}


    int
fuzzy_match_str(char_u *str, char_u *pat)
{
    int		score = 0;
    int_u	matchpos[MAX_FUZZY_MATCHES];

    if (str == NULL || pat == NULL)
	return 0;

    fuzzy_match(str, pat, TRUE, &score, matchpos,
				sizeof(matchpos) / sizeof(matchpos[0]));

    return score;
}


    garray_T *
fuzzy_match_str_with_pos(char_u *str UNUSED, char_u *pat UNUSED)
{
#ifdef FEAT_SEARCH_EXTRA
    int		    score = 0;
    garray_T	    *match_positions = NULL;
    int_u	    matches[MAX_FUZZY_MATCHES];
    int		    j = 0;

    if (str == NULL || pat == NULL)
	return NULL;

    match_positions = ALLOC_ONE(garray_T);
    if (match_positions == NULL)
	return NULL;
    ga_init2(match_positions, sizeof(int_u), 10);

    if (!fuzzy_match(str, pat, FALSE, &score, matches, MAX_FUZZY_MATCHES)
	    || score == 0)
    {
	ga_clear(match_positions);
	vim_free(match_positions);
	return NULL;
    }

    for (char_u *p = pat; *p != NUL; MB_PTR_ADV(p))
    {
	if (!VIM_ISWHITE(PTR2CHAR(p)))
	{
	    ga_grow(match_positions, 1);
	    ((int_u *)match_positions->ga_data)[match_positions->ga_len] =
								    matches[j];
	    match_positions->ga_len++;
	    j++;
	}
    }

    return match_positions;
#else
    return NULL;
#endif
}


    static int
fuzzy_match_str_in_line(char_u **ptr, char_u *pat, int *len, pos_T *current_pos)
{
    char_u	*str = *ptr;
    char_u	*strBegin = str;
    char_u	*end = NULL;
    char_u	*start = NULL;
    int		found = FALSE;
    int		result;
    char	save_end;

    if (str == NULL || pat == NULL)
        return found;

    while (*str != NUL)
    {
	
	start = find_word_start(str);
	if (*start == NUL)
	    break;
	end = find_word_end(start);

	
	save_end = *end;
	*end = NUL;

	
	result = fuzzy_match_str(start, pat);
	*end = save_end;

	if (result > 0)
	{
	    *len = (int)(end - start);
	    current_pos->col += (int)(end - strBegin);
	    found = TRUE;
	    *ptr = start;
	    break;
	}

	
	str = end;
	
	while (*str != NUL && !vim_iswordp(str))
	    MB_PTR_ADV(str);
    }

    return found;
}


    int
search_for_fuzzy_match(
    buf_T	*buf,
    pos_T	*pos,
    char_u	*pattern,
    int		dir,
    pos_T	*start_pos,
    int		*len,
    char_u	**ptr,
    int		whole_line)
{
    pos_T	current_pos = *pos;
    pos_T	circly_end;
    int		found_new_match = FAIL;
    int		looped_around = FALSE;

    if (whole_line)
	current_pos.lnum += dir;

    if (buf == curbuf)
        circly_end = *start_pos;
    else
    {
        circly_end.lnum = buf->b_ml.ml_line_count;
        circly_end.col = 0;
        circly_end.coladd = 0;
    }

    do {

	
	if (looped_around && EQUAL_POS(current_pos, circly_end))
	    break;

	
	if (current_pos.lnum >= 1 && current_pos.lnum <= buf->b_ml.ml_line_count)
	{
	    
	    *ptr = ml_get_buf(buf, current_pos.lnum, FALSE);
	    
	    
	    if (**ptr != NUL)
	    {
		if (!whole_line)
		{
		    *ptr += current_pos.col;
		    
		    found_new_match = fuzzy_match_str_in_line(ptr, pattern, len, &current_pos);
		    if (found_new_match)
		    {
			*pos = current_pos;
			break;
		    }
		    else if (looped_around && current_pos.lnum == circly_end.lnum)
			break;
		}
		else
		{
		    if (fuzzy_match_str(*ptr, pattern) > 0)
		    {
			found_new_match = TRUE;
			*pos = current_pos;
			*len = (int)STRLEN(*ptr);
			break;
		    }
		}
	    }
	}

	
	if (dir == FORWARD)
	{
	    if (++current_pos.lnum > buf->b_ml.ml_line_count)
	    {
		if (p_ws)
		{
		    current_pos.lnum = 1;
		    looped_around = TRUE;
		}
		else
		    break;
	    }
	}
	else
	{
	    if (--current_pos.lnum < 1)
	    {
		if (p_ws)
		{
		    current_pos.lnum = buf->b_ml.ml_line_count;
		    looped_around = TRUE;
		}
		else
		    break;

	    }
	}
	current_pos.col = 0;
    } while (TRUE);

    return found_new_match;
}


    void
fuzmatch_str_free(fuzmatch_str_T *fuzmatch, int count)
{
    int i;

    if (fuzmatch == NULL)
	return;
    for (i = 0; i < count; ++i)
	vim_free(fuzmatch[i].str);
    vim_free(fuzmatch);
}


    int
fuzzymatches_to_strmatches(
	fuzmatch_str_T	*fuzmatch,
	char_u		***matches,
	int		count,
	int		funcsort)
{
    int		i;

    if (count <= 0)
	return OK;

    *matches = ALLOC_MULT(char_u *, count);
    if (*matches == NULL)
    {
	fuzmatch_str_free(fuzmatch, count);
	return FAIL;
    }

    
    if (funcsort)
	fuzzy_match_func_sort((void *)fuzmatch, (size_t)count);
    else
	fuzzy_match_str_sort((void *)fuzmatch, (size_t)count);

    for (i = 0; i < count; i++)
	(*matches)[i] = fuzmatch[i].str;
    vim_free(fuzmatch);

    return OK;
}
