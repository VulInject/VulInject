



#include "vim.h"

#if defined(FEAT_SPELL) || defined(PROTO)


#define RESCORE(word_score, sound_score) ((3 * (word_score) + (sound_score)) / 4)


#define MAXSCORE(word_score, sound_score) ((4 * (word_score) - (sound_score)) / 3)


#define WF_MIXCAP   0x20	


typedef struct suginfo_S
{
    garray_T	su_ga;		    
    int		su_maxcount;	    
    int		su_maxscore;	    
    int		su_sfmaxscore;	    
    garray_T	su_sga;		    
    char_u	*su_badptr;	    
    int		su_badlen;	    
    int		su_badflags;	    
    char_u	su_badword[MAXWLEN]; 
    char_u	su_fbadword[MAXWLEN]; 
    char_u	su_sal_badword[MAXWLEN]; 
    hashtab_T	su_banned;	    
    slang_T	*su_sallang;	    
} suginfo_T;


typedef struct suggest_S
{
    char_u	*st_word;	
    int		st_wordlen;	
    int		st_orglen;	
    int		st_score;	
    int		st_altscore;	
    int		st_salscore;	
    int		st_had_bonus;	
    slang_T	*st_slang;	
} suggest_T;

#define SUG(ga, i) (((suggest_T *)(ga).ga_data)[i])


#define WAS_BANNED(su, word) (!HASHITEM_EMPTY(hash_find(&(su)->su_banned, word)))




#define SUG_CLEAN_COUNT(su)    ((su)->su_maxcount < 130 ? 150 : (su)->su_maxcount + 20)



#define SUG_MAX_COUNT(su)	(SUG_CLEAN_COUNT(su) + 50)


#define SCORE_SPLIT	149	
#define SCORE_SPLIT_NO	249	
#define SCORE_ICASE	52	
#define SCORE_REGION	200	
#define SCORE_RARE	180	
#define SCORE_SWAP	75	
#define SCORE_SWAP3	110	
#define SCORE_REP	65	
#define SCORE_SUBST	93	
#define SCORE_SIMILAR	33	
#define SCORE_SUBCOMP	33	
#define SCORE_DEL	94	
#define SCORE_DELDUP	66	
#define SCORE_DELCOMP	28	
#define SCORE_INS	96	
#define SCORE_INSDUP	67	
#define SCORE_INSCOMP	30	
#define SCORE_NONWORD	103	

#define SCORE_FILE	30	
#define SCORE_MAXINIT	350	
				

#define SCORE_COMMON1	30	
#define SCORE_COMMON2	40	
#define SCORE_COMMON3	50	
#define SCORE_THRES2	10	
#define SCORE_THRES3	100	




#define SCORE_SFMAX1	200	
#define SCORE_SFMAX2	300	
#define SCORE_SFMAX3	400	

#define SCORE_BIG	(SCORE_INS * 3)	
#define SCORE_MAXMAX	999999		
#define SCORE_LIMITMAX	350		



#define SCORE_EDIT_MIN	SCORE_SIMILAR


typedef enum
{
    STATE_START = 0,	
			
			
    STATE_NOPREFIX,	
    STATE_SPLITUNDO,	
    STATE_ENDNUL,	
    STATE_PLAIN,	
    STATE_DEL,		
    STATE_INS_PREP,	
    STATE_INS,		
    STATE_SWAP,		
    STATE_UNSWAP,	
    STATE_SWAP3,	
    STATE_UNSWAP3,	
    STATE_UNROT3L,	
    STATE_UNROT3R,	
    STATE_REP_INI,	
    STATE_REP,		
    STATE_REP_UNDO,	
    STATE_FINAL		
} state_T;


typedef struct trystate_S
{
    state_T	ts_state;	
    int		ts_score;	
    idx_T	ts_arridx;	
    short	ts_curi;	
    char_u	ts_fidx;	
    char_u	ts_fidxtry;	
    char_u	ts_twordlen;	
    char_u	ts_prefixdepth;	
				
    char_u	ts_flags;	
    char_u	ts_tcharlen;	
    char_u	ts_tcharidx;	
    char_u	ts_isdiff;	
    char_u	ts_fcharstart;	
    char_u	ts_prewordlen;	
    char_u	ts_splitoff;	
    char_u	ts_splitfidx;	
    char_u	ts_complen;	
    char_u	ts_compsplit;	
    char_u	ts_save_badflags;   
    char_u	ts_delidx;	
				
} trystate_T;


#define DIFF_NONE	0	
#define DIFF_YES	1	
#define DIFF_INSERT	2	


#define TSF_PREFIXOK	1	
#define TSF_DIDSPLIT	2	
#define TSF_DIDDEL	4	


#define PFD_NOPREFIX	0xff	
#define PFD_PREFIXTREE	0xfe	
#define PFD_NOTSPECIAL	0xfd	

static int spell_suggest_timeout = 5000;

static void spell_find_suggest(char_u *badptr, int badlen, suginfo_T *su, int maxcount, int banbadword, int need_cap, int interactive);
#ifdef FEAT_EVAL
static void spell_suggest_expr(suginfo_T *su, char_u *expr);
#endif
static void spell_suggest_file(suginfo_T *su, char_u *fname);
static void spell_suggest_intern(suginfo_T *su, int interactive);
static void spell_find_cleanup(suginfo_T *su);
static void suggest_try_special(suginfo_T *su);
static void suggest_try_change(suginfo_T *su);
static void suggest_trie_walk(suginfo_T *su, langp_T *lp, char_u *fword, int soundfold);
static void go_deeper(trystate_T *stack, int depth, int score_add);
static void find_keepcap_word(slang_T *slang, char_u *fword, char_u *kword);
static void score_comp_sal(suginfo_T *su);
static void score_combine(suginfo_T *su);
static int stp_sal_score(suggest_T *stp, suginfo_T *su, slang_T *slang, char_u *badsound);
static void suggest_try_soundalike_prep(void);
static void suggest_try_soundalike(suginfo_T *su);
static void suggest_try_soundalike_finish(void);
static void add_sound_suggest(suginfo_T *su, char_u *goodword, int score, langp_T *lp);
static int soundfold_find(slang_T *slang, char_u *word);
static int similar_chars(slang_T *slang, int c1, int c2);
static void add_suggestion(suginfo_T *su, garray_T *gap, char_u *goodword, int badlen, int score, int altscore, int had_bonus, slang_T *slang, int maxsf);
static void check_suggestions(suginfo_T *su, garray_T *gap);
static void add_banned(suginfo_T *su, char_u *word);
static void rescore_suggestions(suginfo_T *su);
static void rescore_one(suginfo_T *su, suggest_T *stp);
static int cleanup_suggestions(garray_T *gap, int maxscore, int keep);
static int soundalike_score(char_u *goodsound, char_u *badsound);
static int spell_edit_score(slang_T *slang, char_u *badword, char_u *goodword);
static int spell_edit_score_limit(slang_T *slang, char_u *badword, char_u *goodword, int limit);
static int spell_edit_score_limit_w(slang_T *slang, char_u *badword, char_u *goodword, int limit);


    static int
can_be_compound(
    trystate_T	*sp,
    slang_T	*slang,
    char_u	*compflags,
    int		flag)
{
    
    
    if (!byte_in_str(sp->ts_complen == sp->ts_compsplit
		? slang->sl_compstartflags : slang->sl_compallflags, flag))
	return FALSE;

    
    
    
    if (slang->sl_comprules != NULL && sp->ts_complen > sp->ts_compsplit)
    {
	int v;

	compflags[sp->ts_complen] = flag;
	compflags[sp->ts_complen + 1] = NUL;
	v = match_compoundrule(slang, compflags + sp->ts_compsplit);
	compflags[sp->ts_complen] = NUL;
	return v;
    }

    return TRUE;
}


    static int
score_wordcount_adj(
    slang_T	*slang,
    int		score,
    char_u	*word,
    int		split)	    
{
    hashitem_T	*hi;
    wordcount_T	*wc;
    int		bonus;
    int		newscore;

    hi = hash_find(&slang->sl_wordcount, word);
    if (HASHITEM_EMPTY(hi))
	return score;

    wc = HI2WC(hi);
    if (wc->wc_count < SCORE_THRES2)
	bonus = SCORE_COMMON1;
    else if (wc->wc_count < SCORE_THRES3)
	bonus = SCORE_COMMON2;
    else
	bonus = SCORE_COMMON3;
    if (split)
	newscore = score - bonus / 2;
    else
	newscore = score - bonus;
    if (newscore < 0)
	return 0;
    return newscore;
}


    static int
badword_captype(char_u *word, char_u *end)
{
    int		flags = captype(word, end);
    int		c;
    int		l, u;
    int		first;
    char_u	*p;

    if (!(flags & WF_KEEPCAP))
	return flags;

    
    l = u = 0;
    first = FALSE;
    for (p = word; p < end; MB_PTR_ADV(p))
    {
	c = PTR2CHAR(p);
	if (SPELL_ISUPPER(c))
	{
	    ++u;
	    if (p == word)
		first = TRUE;
	}
	else
	    ++l;
    }

    
    
    
    
    if (u > l && u > 2)
	flags |= WF_ALLCAP;
    else if (first)
	flags |= WF_ONECAP;

    if (u >= 2 && l >= 2)	
	flags |= WF_MIXCAP;

    return flags;
}


    static int
bytes2offset(char_u **pp)
{
    char_u	*p = *pp;
    int		nr;
    int		c;

    c = *p++;
    if ((c & 0x80) == 0x00)		
    {
	nr = c - 1;
    }
    else if ((c & 0xc0) == 0x80)	
    {
	nr = (c & 0x3f) - 1;
	nr = nr * 255 + (*p++ - 1);
    }
    else if ((c & 0xe0) == 0xc0)	
    {
	nr = (c & 0x1f) - 1;
	nr = nr * 255 + (*p++ - 1);
	nr = nr * 255 + (*p++ - 1);
    }
    else				
    {
	nr = (c & 0x0f) - 1;
	nr = nr * 255 + (*p++ - 1);
	nr = nr * 255 + (*p++ - 1);
	nr = nr * 255 + (*p++ - 1);
    }

    *pp = p;
    return nr;
}


#define SPS_BEST    1
#define SPS_FAST    2
#define SPS_DOUBLE  4

static int sps_flags = SPS_BEST;	
static int sps_limit = 9999;		


    int
spell_check_sps(void)
{
    char_u	*p;
    char_u	*s;
    char_u	buf[MAXPATHL];
    int		f;

    sps_flags = 0;
    sps_limit = 9999;

    for (p = p_sps; *p != NUL; )
    {
	copy_option_part(&p, buf, MAXPATHL, ",");

	f = 0;
	if (VIM_ISDIGIT(*buf))
	{
	    s = buf;
	    sps_limit = getdigits(&s);
	    if (*s != NUL && !VIM_ISDIGIT(*s))
		f = -1;
	}
	
	else if (STRCMP(buf, "best") == 0)
	    f = SPS_BEST;
	else if (STRCMP(buf, "fast") == 0)
	    f = SPS_FAST;
	else if (STRCMP(buf, "double") == 0)
	    f = SPS_DOUBLE;
	else if (STRNCMP(buf, "expr:", 5) != 0
		&& STRNCMP(buf, "file:", 5) != 0
		&& (STRNCMP(buf, "timeout:", 8) != 0
		    || (!VIM_ISDIGIT(buf[8])
				  && !(buf[8] == '-' && VIM_ISDIGIT(buf[9])))))
	    f = -1;

	if (f == -1 || (sps_flags != 0 && f != 0))
	{
	    sps_flags = SPS_BEST;
	    sps_limit = 9999;
	    return FAIL;
	}
	if (f != 0)
	    sps_flags = f;
    }

    if (sps_flags == 0)
	sps_flags = SPS_BEST;

    return OK;
}


    void
spell_suggest(int count)
{
    char_u	*line;
    pos_T	prev_cursor = curwin->w_cursor;
    char_u	wcopy[MAXWLEN + 2];
    char_u	*p;
    int		i;
    int		c;
    suginfo_T	sug;
    suggest_T	*stp;
    int		mouse_used;
    int		need_cap;
    int		limit;
    int		selected = count;
    int		badlen = 0;
    int		msg_scroll_save = msg_scroll;
    int		wo_spell_save = curwin->w_p_spell;

    if (!curwin->w_p_spell)
    {
	parse_spelllang(curwin);
	curwin->w_p_spell = TRUE;
    }

    if (*curwin->w_s->b_p_spl == NUL)
    {
	emsg(_(e_spell_checking_is_not_possible));
	return;
    }

    if (VIsual_active)
    {
	
	
	if (curwin->w_cursor.lnum != VIsual.lnum)
	{
	    vim_beep(BO_SPELL);
	    return;
	}
	badlen = (int)curwin->w_cursor.col - (int)VIsual.col;
	if (badlen < 0)
	    badlen = -badlen;
	else
	    curwin->w_cursor.col = VIsual.col;
	++badlen;
	end_visual_mode();
	
	if (badlen > ml_get_curline_len() - (int)curwin->w_cursor.col)
	    badlen = ml_get_curline_len() - (int)curwin->w_cursor.col;
    }
    
    else if (spell_move_to(curwin, FORWARD, SMT_ALL, TRUE, NULL) == 0
	    || curwin->w_cursor.col > prev_cursor.col)
    {
	
	
	curwin->w_cursor = prev_cursor;
	line = ml_get_curline();
	p = line + curwin->w_cursor.col;
	
	while (p > line && spell_iswordp_nmw(p, curwin))
	    MB_PTR_BACK(line, p);
	
	while (*p != NUL && !spell_iswordp_nmw(p, curwin))
	    MB_PTR_ADV(p);

	if (!spell_iswordp_nmw(p, curwin))		
	{
	    beep_flush();
	    return;
	}
	curwin->w_cursor.col = (colnr_T)(p - line);
    }

    

    
    need_cap = check_need_cap(curwin, curwin->w_cursor.lnum,
							curwin->w_cursor.col);

    
    line = vim_strnsave(ml_get_curline(), ml_get_curline_len());
    if (line == NULL)
	goto skip;

    
    
    if (sps_limit > (int)Rows - 2)
	limit = (int)Rows - 2;
    else
	limit = sps_limit;
    spell_find_suggest(line + curwin->w_cursor.col, badlen, &sug, limit,
							TRUE, need_cap, TRUE);

    if (sug.su_ga.ga_len == 0)
	msg(_("Sorry, no suggestions"));
    else if (count > 0)
    {
	if (count > sug.su_ga.ga_len)
	    smsg(_("Sorry, only %ld suggestions"), (int)sug.su_ga.ga_len);
    }
    else
    {
#ifdef FEAT_RIGHTLEFT
	
	cmdmsg_rl = curwin->w_p_rl;
	if (cmdmsg_rl)
	    msg_col = Columns - 1;
#endif

	
	msg_start();
	msg_row = Rows - 1;	
	lines_left = Rows;	
	vim_snprintf((char *)IObuff, IOSIZE, _("Change \"%.*s\" to:"),
						sug.su_badlen, sug.su_badptr);
#ifdef FEAT_RIGHTLEFT
	if (cmdmsg_rl && STRNCMP(IObuff, "Change", 6) == 0)
	{
	    
	    
	    vim_snprintf((char *)IObuff, IOSIZE, ":ot \"%.*s\" egnahC",
						sug.su_badlen, sug.su_badptr);
	}
#endif
	msg_puts((char *)IObuff);
	msg_clr_eos();
	msg_putchar('\n');

	msg_scroll = TRUE;
	for (i = 0; i < sug.su_ga.ga_len; ++i)
	{
	    int el;

	    stp = &SUG(sug.su_ga, i);

	    
	    
	    vim_strncpy(wcopy, stp->st_word, MAXWLEN);
	    el = sug.su_badlen - stp->st_orglen;
	    if (el > 0 && stp->st_wordlen + el <= MAXWLEN)
		vim_strncpy(wcopy + stp->st_wordlen,
					   sug.su_badptr + stp->st_orglen, el);
	    vim_snprintf((char *)IObuff, IOSIZE, "%2d", i + 1);
#ifdef FEAT_RIGHTLEFT
	    if (cmdmsg_rl)
		rl_mirror(IObuff);
#endif
	    msg_puts((char *)IObuff);

	    vim_snprintf((char *)IObuff, IOSIZE, " \"%s\"", wcopy);
	    msg_puts((char *)IObuff);

	    
	    if (sug.su_badlen < stp->st_orglen)
	    {
		vim_snprintf((char *)IObuff, IOSIZE, _(" < \"%.*s\""),
					       stp->st_orglen, sug.su_badptr);
		msg_puts((char *)IObuff);
	    }

	    if (p_verbose > 0)
	    {
		
		if (sps_flags & (SPS_DOUBLE | SPS_BEST))
		    vim_snprintf((char *)IObuff, IOSIZE, " (%s%d - %d)",
			stp->st_salscore ? "s " : "",
			stp->st_score, stp->st_altscore);
		else
		    vim_snprintf((char *)IObuff, IOSIZE, " (%d)",
			    stp->st_score);
#ifdef FEAT_RIGHTLEFT
		if (cmdmsg_rl)
		    
		    rl_mirror(IObuff + 1);
#endif
		msg_advance(30);
		msg_puts((char *)IObuff);
	    }
	    msg_putchar('\n');
	}

#ifdef FEAT_RIGHTLEFT
	cmdmsg_rl = FALSE;
	msg_col = 0;
#endif
	
	selected = prompt_for_number(&mouse_used);
	if (mouse_used)
	    selected -= lines_left;
	lines_left = Rows;		
	
	msg_scroll = msg_scroll_save;
    }

    if (selected > 0 && selected <= sug.su_ga.ga_len && u_save_cursor() == OK)
    {
	
	VIM_CLEAR(repl_from);
	VIM_CLEAR(repl_to);

	stp = &SUG(sug.su_ga, selected - 1);
	if (sug.su_badlen > stp->st_orglen)
	{
	    
	    
	    repl_from = vim_strnsave(sug.su_badptr, sug.su_badlen);
	    vim_snprintf((char *)IObuff, IOSIZE, "%s%.*s", stp->st_word,
		    sug.su_badlen - stp->st_orglen,
					      sug.su_badptr + stp->st_orglen);
	    repl_to = vim_strsave(IObuff);
	}
	else
	{
	    
	    repl_from = vim_strnsave(sug.su_badptr, stp->st_orglen);
	    repl_to = vim_strsave(stp->st_word);
	}

	
	p = alloc(STRLEN(line) - stp->st_orglen + stp->st_wordlen + 1);
	if (p != NULL)
	{
	    int len_diff = stp->st_wordlen - stp->st_orglen;

	    c = (int)(sug.su_badptr - line);
	    mch_memmove(p, line, c);
	    STRCPY(p + c, stp->st_word);
	    STRCAT(p, sug.su_badptr + stp->st_orglen);

	    
	    ResetRedobuff();
	    AppendToRedobuff((char_u *)"ciw");
	    AppendToRedobuffLit(p + c,
			    stp->st_wordlen + sug.su_badlen - stp->st_orglen);
	    AppendCharToRedobuff(ESC);

	    
	    ml_replace(curwin->w_cursor.lnum, p, FALSE);
	    curwin->w_cursor.col = c;

	    changed_bytes(curwin->w_cursor.lnum, c);
#if defined(FEAT_PROP_POPUP)
	    if (curbuf->b_has_textprop && len_diff != 0)
		adjust_prop_columns(curwin->w_cursor.lnum, c, len_diff,
							       APC_SUBSTITUTE);
#endif
	}
    }
    else
	curwin->w_cursor = prev_cursor;

    spell_find_cleanup(&sug);
skip:
    vim_free(line);
    curwin->w_p_spell = wo_spell_save;
}


    void
spell_suggest_list(
    garray_T	*gap,
    char_u	*word,
    int		maxcount,	
    int		need_cap,	
    int		interactive)
{
    suginfo_T	sug;
    int		i;
    suggest_T	*stp;
    char_u	*wcopy;

    spell_find_suggest(word, 0, &sug, maxcount, FALSE, need_cap, interactive);

    
    ga_init2(gap, sizeof(char_u *), sug.su_ga.ga_len + 1);
    if (ga_grow(gap, sug.su_ga.ga_len) == OK)
    {
	for (i = 0; i < sug.su_ga.ga_len; ++i)
	{
	    stp = &SUG(sug.su_ga, i);

	    
	    
	    wcopy = alloc(stp->st_wordlen
		      + (unsigned)STRLEN(sug.su_badptr + stp->st_orglen) + 1);
	    if (wcopy == NULL)
		break;
	    STRCPY(wcopy, stp->st_word);
	    STRCPY(wcopy + stp->st_wordlen, sug.su_badptr + stp->st_orglen);
	    ((char_u **)gap->ga_data)[gap->ga_len++] = wcopy;
	}
    }

    spell_find_cleanup(&sug);
}


    static void
spell_find_suggest(
    char_u	*badptr,
    int		badlen,		
    suginfo_T	*su,
    int		maxcount,
    int		banbadword,	
    int		need_cap,	
    int		interactive)
{
    hlf_T	attr = HLF_COUNT;
    char_u	buf[MAXPATHL];
    char_u	*p;
    int		do_combine = FALSE;
    char_u	*sps_copy;
#ifdef FEAT_EVAL
    static int	expr_busy = FALSE;
#endif
    int		c;
    int		i;
    langp_T	*lp;
    int		did_intern = FALSE;

    
    CLEAR_POINTER(su);
    ga_init2(&su->su_ga, sizeof(suggest_T), 10);
    ga_init2(&su->su_sga, sizeof(suggest_T), 10);
    if (*badptr == NUL)
	return;
    hash_init(&su->su_banned);

    su->su_badptr = badptr;
    if (badlen != 0)
	su->su_badlen = badlen;
    else
	su->su_badlen = spell_check(curwin, su->su_badptr, &attr, NULL, FALSE);
    su->su_maxcount = maxcount;
    su->su_maxscore = SCORE_MAXINIT;

    if (su->su_badlen >= MAXWLEN)
	su->su_badlen = MAXWLEN - 1;	
    vim_strncpy(su->su_badword, su->su_badptr, su->su_badlen);
    (void)spell_casefold(curwin, su->su_badptr, su->su_badlen,
						    su->su_fbadword, MAXWLEN);
    
    
    su->su_fbadword[su->su_badlen] = NUL;

    
    su->su_badflags = badword_captype(su->su_badptr,
					       su->su_badptr + su->su_badlen);
    if (need_cap)
	su->su_badflags |= WF_ONECAP;

    
    
    
    
    for (i = 0; i < curbuf->b_s.b_langp.ga_len; ++i)
    {
	lp = LANGP_ENTRY(curbuf->b_s.b_langp, i);
	if (lp->lp_sallang != NULL)
	{
	    su->su_sallang = lp->lp_sallang;
	    break;
	}
    }

    
    
    if (su->su_sallang != NULL)
	spell_soundfold(su->su_sallang, su->su_fbadword, TRUE,
							  su->su_sal_badword);

    
    
    
    c = PTR2CHAR(su->su_badptr);
    if (!SPELL_ISUPPER(c) && attr == HLF_COUNT)
    {
	make_case_word(su->su_badword, buf, WF_ONECAP);
	add_suggestion(su, &su->su_ga, buf, su->su_badlen, SCORE_ICASE,
					      0, TRUE, su->su_sallang, FALSE);
    }

    
    if (banbadword)
	add_banned(su, su->su_badword);

    
    sps_copy = vim_strsave(p_sps);
    if (sps_copy == NULL)
	return;
    spell_suggest_timeout = 5000;

    
    for (p = sps_copy; *p != NUL; )
    {
	copy_option_part(&p, buf, MAXPATHL, ",");

	if (STRNCMP(buf, "expr:", 5) == 0)
	{
#ifdef FEAT_EVAL
	    
	    
	    if (!expr_busy)
	    {
		expr_busy = TRUE;
		spell_suggest_expr(su, buf + 5);
		expr_busy = FALSE;
	    }
#endif
	}
	else if (STRNCMP(buf, "file:", 5) == 0)
	    
	    spell_suggest_file(su, buf + 5);
	else if (STRNCMP(buf, "timeout:", 8) == 0)
	    
	    spell_suggest_timeout = atol((char *)buf + 8);
	else if (!did_intern)
	{
	    
	    spell_suggest_intern(su, interactive);
	    if (sps_flags & SPS_DOUBLE)
		do_combine = TRUE;
	    did_intern = TRUE;
	}
    }

    vim_free(sps_copy);

    if (do_combine)
	
	
	score_combine(su);
}

#ifdef FEAT_EVAL

    static void
spell_suggest_expr(suginfo_T *su, char_u *expr)
{
    list_T	*list;
    listitem_T	*li;
    int		score;
    char_u	*p;

    
    
    
    list = eval_spell_expr(su->su_badword, expr);
    if (list != NULL)
    {
	
	FOR_ALL_LIST_ITEMS(list, li)
	    if (li->li_tv.v_type == VAR_LIST)
	    {
		
		score = get_spellword(li->li_tv.vval.v_list, &p);
		if (score >= 0 && score <= su->su_maxscore)
		    add_suggestion(su, &su->su_ga, p, su->su_badlen,
				       score, 0, TRUE, su->su_sallang, FALSE);
	    }
	list_unref(list);
    }

    
    check_suggestions(su, &su->su_ga);
    (void)cleanup_suggestions(&su->su_ga, su->su_maxscore, su->su_maxcount);
}
#endif


    static void
spell_suggest_file(suginfo_T *su, char_u *fname)
{
    FILE	*fd;
    char_u	line[MAXWLEN * 2];
    char_u	*p;
    int		len;
    char_u	cword[MAXWLEN];

    
    fd = mch_fopen((char *)fname, "r");
    if (fd == NULL)
    {
	semsg(_(e_cant_open_file_str), fname);
	return;
    }

    
    while (!vim_fgets(line, MAXWLEN * 2, fd) && !got_int)
    {
	line_breakcheck();

	p = vim_strchr(line, '/');
	if (p == NULL)
	    continue;	    
	*p++ = NUL;
	if (STRICMP(su->su_badword, line) == 0)
	{
	    
	    for (len = 0; p[len] >= ' '; ++len)
		;
	    p[len] = NUL;

	    
	    
	    if (captype(p, NULL) == 0)
	    {
		make_case_word(p, cword, su->su_badflags);
		p = cword;
	    }

	    add_suggestion(su, &su->su_ga, p, su->su_badlen,
				  SCORE_FILE, 0, TRUE, su->su_sallang, FALSE);
	}
    }

    fclose(fd);

    
    check_suggestions(su, &su->su_ga);
    (void)cleanup_suggestions(&su->su_ga, su->su_maxscore, su->su_maxcount);
}


    static void
spell_suggest_intern(suginfo_T *su, int interactive)
{
    
    suggest_load_files();

    
    
    
    
    suggest_try_special(su);

    
    
    suggest_try_change(su);

    
    if (sps_flags & SPS_DOUBLE)
	score_comp_sal(su);

    
    if ((sps_flags & SPS_FAST) == 0)
    {
	if (sps_flags & SPS_BEST)
	    
	    
	    rescore_suggestions(su);

	
	
	
	
	
	
	
	
	suggest_try_soundalike_prep();
	su->su_maxscore = SCORE_SFMAX1;
	su->su_sfmaxscore = SCORE_MAXINIT * 3;
	suggest_try_soundalike(su);
	if (su->su_ga.ga_len < SUG_CLEAN_COUNT(su))
	{
	    
	    
	    su->su_maxscore = SCORE_SFMAX2;
	    suggest_try_soundalike(su);
	    if (su->su_ga.ga_len < SUG_CLEAN_COUNT(su))
	    {
		
		
		su->su_maxscore = SCORE_SFMAX3;
		suggest_try_soundalike(su);
	    }
	}
	su->su_maxscore = su->su_sfmaxscore;
	suggest_try_soundalike_finish();
    }

    
    
    ui_breakcheck();
    if (interactive && got_int)
    {
	(void)vgetc();
	got_int = FALSE;
    }

    if ((sps_flags & SPS_DOUBLE) == 0 && su->su_ga.ga_len != 0)
    {
	if (sps_flags & SPS_BEST)
	    
	    rescore_suggestions(su);

	
	check_suggestions(su, &su->su_ga);
	(void)cleanup_suggestions(&su->su_ga, su->su_maxscore, su->su_maxcount);
    }
}


    static void
spell_find_cleanup(suginfo_T *su)
{
    int		i;

    
    for (i = 0; i < su->su_ga.ga_len; ++i)
	vim_free(SUG(su->su_ga, i).st_word);
    ga_clear(&su->su_ga);
    for (i = 0; i < su->su_sga.ga_len; ++i)
	vim_free(SUG(su->su_sga, i).st_word);
    ga_clear(&su->su_sga);

    
    hash_clear_all(&su->su_banned, 0);
}


    static void
suggest_try_special(suginfo_T *su)
{
    char_u	*p;
    size_t	len;
    int		c;
    char_u	word[MAXWLEN];

    
    p = skiptowhite(su->su_fbadword);
    len = p - su->su_fbadword;
    p = skipwhite(p);
    if (STRLEN(p) == len && STRNCMP(su->su_fbadword, p, len) == 0)
    {
	
	
	c = su->su_fbadword[len];
	su->su_fbadword[len] = NUL;
	make_case_word(su->su_fbadword, word, su->su_badflags);
	su->su_fbadword[len] = c;

	
	
	add_suggestion(su, &su->su_ga, word, su->su_badlen,
		       RESCORE(SCORE_REP, 0), 0, TRUE, su->su_sallang, FALSE);
    }
}


#if 0
# define SUGGEST_PROFILE
proftime_T current;
proftime_T total;
proftime_T times[STATE_FINAL + 1];
int counts[STATE_FINAL + 1];

    static void
prof_init(void)
{
    for (int i = 0; i <= STATE_FINAL; ++i)
    {
	profile_zero(&times[i]);
	counts[i] = 0;
    }
    profile_start(&current);
    profile_start(&total);
}


    static void
prof_store(state_T state)
{
    profile_end(&current);
    profile_add(&times[state], &current);
    ++counts[state];
    profile_start(&current);
}
# define PROF_STORE(state) prof_store(state);

    static void
prof_report(char *name)
{
    FILE *fd = fopen("suggestprof", "a");

    profile_end(&total);
    fprintf(fd, "-----------------------\n");
    fprintf(fd, "%s: %s\n", name, profile_msg(&total));
    for (int i = 0; i <= STATE_FINAL; ++i)
	fprintf(fd, "%d: %s (%ld)\n", i, profile_msg(&times[i]), counts[i]);
    fclose(fd);
}
#else
# define PROF_STORE(state)
#endif


    static void
suggest_try_change(suginfo_T *su)
{
    char_u	fword[MAXWLEN];	    
    int		n;
    char_u	*p;
    int		lpi;
    langp_T	*lp;

    
    
    
    STRCPY(fword, su->su_fbadword);
    n = (int)STRLEN(fword);
    p = su->su_badptr + su->su_badlen;
    (void)spell_casefold(curwin, p, (int)STRLEN(p), fword + n, MAXWLEN - n);

    
    n = (int)STRLEN(su->su_badptr);
    if (n < MAXWLEN)
	fword[n] = NUL;

    for (lpi = 0; lpi < curwin->w_s->b_langp.ga_len; ++lpi)
    {
	lp = LANGP_ENTRY(curwin->w_s->b_langp, lpi);

	
	
	if (lp->lp_slang->sl_fbyts == NULL)
	    continue;

	
#ifdef SUGGEST_PROFILE
	prof_init();
#endif
	suggest_trie_walk(su, lp, fword, FALSE);
#ifdef SUGGEST_PROFILE
	prof_report("try_change");
#endif
    }
}


#define TRY_DEEPER(su, stack, depth, add) \
       ((depth) < MAXWLEN - 1 && (stack)[depth].ts_score + (add) < (su)->su_maxscore)


    static void
suggest_trie_walk(
    suginfo_T	*su,
    langp_T	*lp,
    char_u	*fword,
    int		soundfold)
{
    char_u	tword[MAXWLEN];	    
    trystate_T	stack[MAXWLEN];
    char_u	preword[MAXWLEN * 3]; 
				      
				      
				      
				      
    char_u	compflags[MAXWLEN];	
    trystate_T	*sp;
    int		newscore;
    int		score;
    char_u	*byts, *fbyts, *pbyts;
    idx_T	*idxs, *fidxs, *pidxs;
    int		depth;
    int		c, c2, c3;
    int		n = 0;
    int		flags;
    garray_T	*gap;
    idx_T	arridx;
    int		len;
    char_u	*p;
    fromto_T	*ftp;
    int		fl = 0, tl;
    int		repextra = 0;	    
    slang_T	*slang = lp->lp_slang;
    int		fword_ends;
    int		goodword_ends;
#ifdef DEBUG_TRIEWALK
    
    char_u	changename[MAXWLEN][80];
#endif
    int		breakcheckcount = 1000;
#ifdef FEAT_RELTIME
    proftime_T	time_limit;
#endif
    int		compound_ok;

    
    
    
    
    depth = 0;
    sp = &stack[0];
    CLEAR_POINTER(sp);
    sp->ts_curi = 1;

    if (soundfold)
    {
	
	byts = fbyts = slang->sl_sbyts;
	idxs = fidxs = slang->sl_sidxs;
	pbyts = NULL;
	pidxs = NULL;
	sp->ts_prefixdepth = PFD_NOPREFIX;
	sp->ts_state = STATE_START;
    }
    else
    {
	
	
	fbyts = slang->sl_fbyts;
	fidxs = slang->sl_fidxs;
	pbyts = slang->sl_pbyts;
	pidxs = slang->sl_pidxs;
	if (pbyts != NULL)
	{
	    byts = pbyts;
	    idxs = pidxs;
	    sp->ts_prefixdepth = PFD_PREFIXTREE;
	    sp->ts_state = STATE_NOPREFIX;	
	}
	else
	{
	    byts = fbyts;
	    idxs = fidxs;
	    sp->ts_prefixdepth = PFD_NOPREFIX;
	    sp->ts_state = STATE_START;
	}
    }
#ifdef FEAT_RELTIME
    
    
    if (spell_suggest_timeout > 0)
	profile_setlimit(spell_suggest_timeout, &time_limit);
#endif

    
    
    
    
    
    while (depth >= 0 && !got_int)
    {
	sp = &stack[depth];
	switch (sp->ts_state)
	{
	case STATE_START:
	case STATE_NOPREFIX:
	    
	    
	    arridx = sp->ts_arridx;	    
	    len = byts[arridx];		    
	    arridx += sp->ts_curi;	    

	    if (sp->ts_prefixdepth == PFD_PREFIXTREE)
	    {
		
		for (n = 0; n < len && byts[arridx + n] == 0; ++n)
		    ;
		sp->ts_curi += n;

		
		n = (int)sp->ts_state;
		PROF_STORE(sp->ts_state)
		sp->ts_state = STATE_ENDNUL;
		sp->ts_save_badflags = su->su_badflags;

		
		
		if (depth < MAXWLEN - 1
			    && (byts[arridx] == 0 || n == (int)STATE_NOPREFIX))
		{
		    
		    
		    if (has_mbyte)
			n = nofold_len(fword, sp->ts_fidx, su->su_badptr);
		    else
			n = sp->ts_fidx;
		    flags = badword_captype(su->su_badptr, su->su_badptr + n);
		    su->su_badflags = badword_captype(su->su_badptr + n,
					       su->su_badptr + su->su_badlen);
#ifdef DEBUG_TRIEWALK
		    sprintf(changename[depth], "prefix");
#endif
		    go_deeper(stack, depth, 0);
		    ++depth;
		    sp = &stack[depth];
		    sp->ts_prefixdepth = depth - 1;
		    byts = fbyts;
		    idxs = fidxs;
		    sp->ts_arridx = 0;

		    
		    
		    tword[sp->ts_twordlen] = NUL;
		    make_case_word(tword + sp->ts_splitoff,
					  preword + sp->ts_prewordlen, flags);
		    sp->ts_prewordlen = (char_u)STRLEN(preword);
		    sp->ts_splitoff = sp->ts_twordlen;
		}
		break;
	    }

	    if (sp->ts_curi > len || byts[arridx] != 0)
	    {
		
		PROF_STORE(sp->ts_state)
		sp->ts_state = STATE_ENDNUL;
		sp->ts_save_badflags = su->su_badflags;
		break;
	    }

	    
	    ++sp->ts_curi;		

	    flags = (int)idxs[arridx];

	    
	    if (flags & WF_NOSUGGEST)
		break;

	    fword_ends = (fword[sp->ts_fidx] == NUL
			   || (soundfold
			       ? VIM_ISWHITE(fword[sp->ts_fidx])
			       : !spell_iswordp(fword + sp->ts_fidx, curwin)));
	    tword[sp->ts_twordlen] = NUL;

	    if (sp->ts_prefixdepth <= PFD_NOTSPECIAL
					&& (sp->ts_flags & TSF_PREFIXOK) == 0
					&& pbyts != NULL)
	    {
		
		
		
		
		n = stack[sp->ts_prefixdepth].ts_arridx;
		len = pbyts[n++];
		for (c = 0; c < len && pbyts[n + c] == 0; ++c)
		    ;
		if (c > 0)
		{
		    c = valid_word_prefix(c, n, flags,
				       tword + sp->ts_splitoff, slang, FALSE);
		    if (c == 0)
			break;

		    
		    if (c & WF_RAREPFX)
			flags |= WF_RARE;

		    
		    
		    
		    
		    sp->ts_flags |= TSF_PREFIXOK;
		}
	    }

	    
	    
	    if (sp->ts_complen == sp->ts_compsplit && fword_ends
						     && (flags & WF_NEEDCOMP))
		goodword_ends = FALSE;
	    else
		goodword_ends = TRUE;

	    p = NULL;
	    compound_ok = TRUE;
	    if (sp->ts_complen > sp->ts_compsplit)
	    {
		if (slang->sl_nobreak)
		{
		    
		    
		    
		    
		    if (sp->ts_fidx - sp->ts_splitfidx
					  == sp->ts_twordlen - sp->ts_splitoff
			    && STRNCMP(fword + sp->ts_splitfidx,
					tword + sp->ts_splitoff,
					 sp->ts_fidx - sp->ts_splitfidx) == 0)
		    {
			preword[sp->ts_prewordlen] = NUL;
			newscore = score_wordcount_adj(slang, sp->ts_score,
						 preword + sp->ts_prewordlen,
						 sp->ts_prewordlen > 0);
			
			if (newscore <= su->su_maxscore)
			    add_suggestion(su, &su->su_ga, preword,
				    sp->ts_splitfidx - repextra,
				    newscore, 0, FALSE,
				    lp->lp_sallang, FALSE);
			break;
		    }
		}
		else
		{
		    
		    
		    
		    
		    if (((unsigned)flags >> 24) == 0
			    || sp->ts_twordlen - sp->ts_splitoff
						       < slang->sl_compminlen)
			break;
		    
		    
		    if (has_mbyte
			    && slang->sl_compminlen > 0
			    && mb_charlen(tword + sp->ts_splitoff)
						       < slang->sl_compminlen)
			break;

		    compflags[sp->ts_complen] = ((unsigned)flags >> 24);
		    compflags[sp->ts_complen + 1] = NUL;
		    vim_strncpy(preword + sp->ts_prewordlen,
			    tword + sp->ts_splitoff,
			    sp->ts_twordlen - sp->ts_splitoff);

		    
		    if (match_checkcompoundpattern(preword,  sp->ts_prewordlen,
							  &slang->sl_comppat))
			compound_ok = FALSE;

		    if (compound_ok)
		    {
			p = preword;
			while (*skiptowhite(p) != NUL)
			    p = skipwhite(skiptowhite(p));
			if (fword_ends && !can_compound(slang, p,
						compflags + sp->ts_compsplit))
			    
			    
			    compound_ok = FALSE;
		    }

		    
		    p = preword + sp->ts_prewordlen;
		    MB_PTR_BACK(preword, p);
		}
	    }

	    
	    
	    
	    if (soundfold)
		STRCPY(preword + sp->ts_prewordlen, tword + sp->ts_splitoff);
	    else if (flags & WF_KEEPCAP)
		
		find_keepcap_word(slang, tword + sp->ts_splitoff,
						 preword + sp->ts_prewordlen);
	    else
	    {
		
		
		
		c = su->su_badflags;
		if ((c & WF_ALLCAP)
			&& su->su_badlen == (*mb_ptr2len)(su->su_badptr))
		    c = WF_ONECAP;
		c |= flags;

		
		
		if (p != NULL && spell_iswordp_nmw(p, curwin))
		    c &= ~WF_ONECAP;
		make_case_word(tword + sp->ts_splitoff,
					      preword + sp->ts_prewordlen, c);
	    }

	    if (!soundfold)
	    {
		
		
		if (flags & WF_BANNED)
		{
		    add_banned(su, preword + sp->ts_prewordlen);
		    break;
		}
		if ((sp->ts_complen == sp->ts_compsplit
			    && WAS_BANNED(su, preword + sp->ts_prewordlen))
						   || WAS_BANNED(su, preword))
		{
		    if (slang->sl_compprog == NULL)
			break;
		    
		    goodword_ends = FALSE;
		}
	    }

	    newscore = 0;
	    if (!soundfold)	
	    {
		if ((flags & WF_REGION)
			    && (((unsigned)flags >> 16) & lp->lp_region) == 0)
		    newscore += SCORE_REGION;
		if (flags & WF_RARE)
		    newscore += SCORE_RARE;

		if (!spell_valid_case(su->su_badflags,
				  captype(preword + sp->ts_prewordlen, NULL)))
		    newscore += SCORE_ICASE;
	    }

	    
	    if (fword_ends
		    && goodword_ends
		    && sp->ts_fidx >= sp->ts_fidxtry
		    && compound_ok)
	    {
		
#ifdef DEBUG_TRIEWALK
		if (soundfold && STRCMP(preword, "smwrd") == 0)
		{
		    int	    j;

		    
		    smsg("------ %s -------", fword);
		    for (j = 0; j < depth; ++j)
			smsg("%s", changename[j]);
		}
#endif
		if (soundfold)
		{
		    
		    
		    add_sound_suggest(su, preword, sp->ts_score, lp);
		}
		else if (sp->ts_fidx > 0)
		{
		    
		    
		    p = fword + sp->ts_fidx;
		    MB_PTR_BACK(fword, p);
		    if (!spell_iswordp(p, curwin) && *preword != NUL)
		    {
			p = preword + STRLEN(preword);
			MB_PTR_BACK(preword, p);
			if (spell_iswordp(p, curwin))
			    newscore += SCORE_NONWORD;
		    }

		    
		    score = score_wordcount_adj(slang,
						sp->ts_score + newscore,
						preword + sp->ts_prewordlen,
						sp->ts_prewordlen > 0);

		    
		    if (score <= su->su_maxscore)
		    {
			add_suggestion(su, &su->su_ga, preword,
				    sp->ts_fidx - repextra,
				    score, 0, FALSE, lp->lp_sallang, FALSE);

			if (su->su_badflags & WF_MIXCAP)
			{
			    
			    
			    c = captype(preword, NULL);
			    if (c == 0 || c == WF_ALLCAP)
			    {
				make_case_word(tword + sp->ts_splitoff,
					      preword + sp->ts_prewordlen,
						      c == 0 ? WF_ALLCAP : 0);

				add_suggestion(su, &su->su_ga, preword,
					sp->ts_fidx - repextra,
					score + SCORE_ICASE, 0, FALSE,
					lp->lp_sallang, FALSE);
			    }
			}
		    }
		}
	    }

	    
	    if ((sp->ts_fidx >= sp->ts_fidxtry || fword_ends)
		    
		    && (!has_mbyte || sp->ts_tcharlen == 0))
	    {
		int	try_compound;
		int	try_split;

		
		
		
		
		
		try_split = (sp->ts_fidx - repextra < su->su_badlen)
								&& !soundfold;

		
		
		
		
		
		
		
		
		
		
		
		
		try_compound = FALSE;
		if (!soundfold
			&& !slang->sl_nocompoundsugs
			&& slang->sl_compprog != NULL
			&& ((unsigned)flags >> 24) != 0
			&& sp->ts_twordlen - sp->ts_splitoff
						       >= slang->sl_compminlen
			&& (!has_mbyte
			    || slang->sl_compminlen == 0
			    || mb_charlen(tword + sp->ts_splitoff)
						      >= slang->sl_compminlen)
			&& (slang->sl_compsylmax < MAXWLEN
			    || sp->ts_complen + 1 - sp->ts_compsplit
							  < slang->sl_compmax)
			&& (can_be_compound(sp, slang,
					 compflags, ((unsigned)flags >> 24))))

		{
		    try_compound = TRUE;
		    compflags[sp->ts_complen] = ((unsigned)flags >> 24);
		    compflags[sp->ts_complen + 1] = NUL;
		}

		
		
		if (slang->sl_nobreak && !slang->sl_nocompoundsugs)
		    try_compound = TRUE;

		
		
		
		else if (!fword_ends
			&& try_compound
			&& (sp->ts_flags & TSF_DIDSPLIT) == 0)
		{
		    try_compound = FALSE;
		    sp->ts_flags |= TSF_DIDSPLIT;
		    --sp->ts_curi;	    
		    compflags[sp->ts_complen] = NUL;
		}
		else
		    sp->ts_flags &= ~TSF_DIDSPLIT;

		if (try_split || try_compound)
		{
		    if (!try_compound && (!fword_ends || !goodword_ends))
		    {
			
			
			
			
			if (sp->ts_complen == sp->ts_compsplit
						     && (flags & WF_NEEDCOMP))
			    break;
			p = preword;
			while (*skiptowhite(p) != NUL)
			    p = skipwhite(skiptowhite(p));
			if (sp->ts_complen > sp->ts_compsplit
				&& !can_compound(slang, p,
						compflags + sp->ts_compsplit))
			    break;

			if (slang->sl_nosplitsugs)
			    newscore += SCORE_SPLIT_NO;
			else
			    newscore += SCORE_SPLIT;

			
			newscore = score_wordcount_adj(slang, newscore,
					   preword + sp->ts_prewordlen, TRUE);
		    }

		    if (TRY_DEEPER(su, stack, depth, newscore))
		    {
			go_deeper(stack, depth, newscore);
#ifdef DEBUG_TRIEWALK
			if (!try_compound && !fword_ends)
			    sprintf(changename[depth], "%.*s-%s: split",
				 sp->ts_twordlen, tword, fword + sp->ts_fidx);
			else
			    sprintf(changename[depth], "%.*s-%s: compound",
				 sp->ts_twordlen, tword, fword + sp->ts_fidx);
#endif
			
			sp->ts_save_badflags = su->su_badflags;
			PROF_STORE(sp->ts_state)
			sp->ts_state = STATE_SPLITUNDO;

			++depth;
			sp = &stack[depth];

			
			if (!try_compound && !fword_ends)
			    STRCAT(preword, " ");
			sp->ts_prewordlen = (char_u)STRLEN(preword);
			sp->ts_splitoff = sp->ts_twordlen;
			sp->ts_splitfidx = sp->ts_fidx;

			
			
			
			
			
			if (((!try_compound && !spell_iswordp_nmw(fword
							       + sp->ts_fidx,
							       curwin))
				    || fword_ends)
				&& fword[sp->ts_fidx] != NUL
				&& goodword_ends)
			{
			    int	    l;

			    l = mb_ptr2len(fword + sp->ts_fidx);
			    if (fword_ends)
			    {
				
				mch_memmove(preword + sp->ts_prewordlen,
						      fword + sp->ts_fidx, l);
				sp->ts_prewordlen += l;
				preword[sp->ts_prewordlen] = NUL;
			    }
			    else
				sp->ts_score -= SCORE_SPLIT - SCORE_SUBST;
			    sp->ts_fidx += l;
			}

			
			
			
			if (try_compound)
			    ++sp->ts_complen;
			else
			    sp->ts_compsplit = sp->ts_complen;
			sp->ts_prefixdepth = PFD_NOPREFIX;

			
			
			if (has_mbyte)
			    n = nofold_len(fword, sp->ts_fidx, su->su_badptr);
			else
			    n = sp->ts_fidx;
			su->su_badflags = badword_captype(su->su_badptr + n,
					       su->su_badptr + su->su_badlen);

			
			sp->ts_arridx = 0;

			
			if (pbyts != NULL)
			{
			    byts = pbyts;
			    idxs = pidxs;
			    sp->ts_prefixdepth = PFD_PREFIXTREE;
			    PROF_STORE(sp->ts_state)
			    sp->ts_state = STATE_NOPREFIX;
			}
		    }
		}
	    }
	    break;

	case STATE_SPLITUNDO:
	    
	    su->su_badflags = sp->ts_save_badflags;

	    
	    PROF_STORE(sp->ts_state)
	    sp->ts_state = STATE_START;

	    
	    byts = fbyts;
	    idxs = fidxs;
	    break;

	case STATE_ENDNUL:
	    
	    su->su_badflags = sp->ts_save_badflags;
	    if (fword[sp->ts_fidx] == NUL && sp->ts_tcharlen == 0)
	    {
		
		PROF_STORE(sp->ts_state)
		sp->ts_state = STATE_DEL;
		break;
	    }
	    PROF_STORE(sp->ts_state)
	    sp->ts_state = STATE_PLAIN;
	    

	case STATE_PLAIN:
	    
	    
	    arridx = sp->ts_arridx;
	    if (sp->ts_curi > byts[arridx])
	    {
		
		
		PROF_STORE(sp->ts_state)
		if (sp->ts_fidx >= sp->ts_fidxtry)
		    sp->ts_state = STATE_DEL;
		else
		    sp->ts_state = STATE_FINAL;
	    }
	    else
	    {
		arridx += sp->ts_curi++;
		c = byts[arridx];

		
		
		
		
		
		if (c == fword[sp->ts_fidx]
			|| (sp->ts_tcharlen > 0 && sp->ts_isdiff != DIFF_NONE))
		    newscore = 0;
		else
		    newscore = SCORE_SUBST;
		if ((newscore == 0
			    || (sp->ts_fidx >= sp->ts_fidxtry
				&& ((sp->ts_flags & TSF_DIDDEL) == 0
				    || c != fword[sp->ts_delidx])))
			&& TRY_DEEPER(su, stack, depth, newscore))
		{
		    go_deeper(stack, depth, newscore);
#ifdef DEBUG_TRIEWALK
		    if (newscore > 0)
			sprintf(changename[depth], "%.*s-%s: subst %c to %c",
				sp->ts_twordlen, tword, fword + sp->ts_fidx,
				fword[sp->ts_fidx], c);
		    else
			sprintf(changename[depth], "%.*s-%s: accept %c",
				sp->ts_twordlen, tword, fword + sp->ts_fidx,
				fword[sp->ts_fidx]);
#endif
		    ++depth;
		    sp = &stack[depth];
		    if (fword[sp->ts_fidx] != NUL)
			++sp->ts_fidx;
		    tword[sp->ts_twordlen++] = c;
		    sp->ts_arridx = idxs[arridx];
		    if (newscore == SCORE_SUBST)
			sp->ts_isdiff = DIFF_YES;
		    if (has_mbyte)
		    {
			
			
			
			if (sp->ts_tcharlen == 0)
			{
			    
			    sp->ts_tcharidx = 0;
			    sp->ts_tcharlen = MB_BYTE2LEN(c);
			    sp->ts_fcharstart = sp->ts_fidx - 1;
			    sp->ts_isdiff = (newscore != 0)
						       ? DIFF_YES : DIFF_NONE;
			}
			else if (sp->ts_isdiff == DIFF_INSERT
							    && sp->ts_fidx > 0)
			    
			    
			    --sp->ts_fidx;
			if (++sp->ts_tcharidx == sp->ts_tcharlen)
			{
			    
			    if (sp->ts_isdiff == DIFF_YES)
			    {
				
				
				sp->ts_fidx = sp->ts_fcharstart
					    + mb_ptr2len(
						    fword + sp->ts_fcharstart);
				
				
				
				if (enc_utf8
					&& utf_iscomposing(
					    utf_ptr2char(tword
						+ sp->ts_twordlen
							   - sp->ts_tcharlen))
					&& utf_iscomposing(
					    utf_ptr2char(fword
							+ sp->ts_fcharstart)))
				    sp->ts_score -=
						  SCORE_SUBST - SCORE_SUBCOMP;

				
				
				else if (!soundfold
					&& slang->sl_has_map
					&& similar_chars(slang,
					    mb_ptr2char(tword
						+ sp->ts_twordlen
							   - sp->ts_tcharlen),
					    mb_ptr2char(fword
							+ sp->ts_fcharstart)))
				    sp->ts_score -=
						  SCORE_SUBST - SCORE_SIMILAR;
			    }
			    else if (sp->ts_isdiff == DIFF_INSERT
					 && sp->ts_twordlen > sp->ts_tcharlen)
			    {
				p = tword + sp->ts_twordlen - sp->ts_tcharlen;
				c = mb_ptr2char(p);
				if (enc_utf8 && utf_iscomposing(c))
				{
				    
				    
				    sp->ts_score -= SCORE_INS - SCORE_INSCOMP;
				}
				else
				{
				    
				    
				    
				    
				    
				    MB_PTR_BACK(tword, p);
				    if (c == mb_ptr2char(p))
					sp->ts_score -= SCORE_INS
							       - SCORE_INSDUP;
				}
			    }

			    
			    sp->ts_tcharlen = 0;
			}
		    }
		    else
		    {
			
			
			
			if (newscore != 0
				&& !soundfold
				&& slang->sl_has_map
				&& similar_chars(slang,
						   c, fword[sp->ts_fidx - 1]))
			    sp->ts_score -= SCORE_SUBST - SCORE_SIMILAR;
		    }
		}
	    }
	    break;

	case STATE_DEL:
	    
	    
	    if (has_mbyte && sp->ts_tcharlen > 0)
	    {
		PROF_STORE(sp->ts_state)
		sp->ts_state = STATE_FINAL;
		break;
	    }
	    
	    PROF_STORE(sp->ts_state)
	    sp->ts_state = STATE_INS_PREP;
	    sp->ts_curi = 1;
	    if (soundfold && sp->ts_fidx == 0 && fword[sp->ts_fidx] == '*')
		
		
		newscore = 2 * SCORE_DEL / 3;
	    else
		newscore = SCORE_DEL;
	    if (fword[sp->ts_fidx] != NUL
				    && TRY_DEEPER(su, stack, depth, newscore))
	    {
		go_deeper(stack, depth, newscore);
#ifdef DEBUG_TRIEWALK
		sprintf(changename[depth], "%.*s-%s: delete %c",
			sp->ts_twordlen, tword, fword + sp->ts_fidx,
			fword[sp->ts_fidx]);
#endif
		++depth;

		
		
		stack[depth].ts_flags |= TSF_DIDDEL;
		stack[depth].ts_delidx = sp->ts_fidx;

		
		
		
		
		if (has_mbyte)
		{
		    c = mb_ptr2char(fword + sp->ts_fidx);
		    stack[depth].ts_fidx += mb_ptr2len(fword + sp->ts_fidx);
		    if (enc_utf8 && utf_iscomposing(c))
			stack[depth].ts_score -= SCORE_DEL - SCORE_DELCOMP;
		    else if (c == mb_ptr2char(fword + stack[depth].ts_fidx))
			stack[depth].ts_score -= SCORE_DEL - SCORE_DELDUP;
		}
		else
		{
		    ++stack[depth].ts_fidx;
		    if (fword[sp->ts_fidx] == fword[sp->ts_fidx + 1])
			stack[depth].ts_score -= SCORE_DEL - SCORE_DELDUP;
		}
		break;
	    }
	    

	case STATE_INS_PREP:
	    if (sp->ts_flags & TSF_DIDDEL)
	    {
		
		
		PROF_STORE(sp->ts_state)
		sp->ts_state = STATE_SWAP;
		break;
	    }

	    
	    n = sp->ts_arridx;
	    for (;;)
	    {
		if (sp->ts_curi > byts[n])
		{
		    
		    PROF_STORE(sp->ts_state)
		    sp->ts_state = STATE_SWAP;
		    break;
		}
		if (byts[n + sp->ts_curi] != NUL)
		{
		    
		    PROF_STORE(sp->ts_state)
		    sp->ts_state = STATE_INS;
		    break;
		}
		++sp->ts_curi;
	    }
	    break;

	    

	case STATE_INS:
	    
	    
	    n = sp->ts_arridx;
	    if (sp->ts_curi > byts[n])
	    {
		
		PROF_STORE(sp->ts_state)
		sp->ts_state = STATE_SWAP;
		break;
	    }

	    
	    
	    
	    
	    n += sp->ts_curi++;

	    
	    if (byts == slang->sl_fbyts && n >= slang->sl_fbyts_len)
	    {
		got_int = TRUE;
		break;
	    }
	    c = byts[n];
	    if (soundfold && sp->ts_twordlen == 0 && c == '*')
		
		
		newscore = 2 * SCORE_INS / 3;
	    else
		newscore = SCORE_INS;
	    if (c != fword[sp->ts_fidx]
				    && TRY_DEEPER(su, stack, depth, newscore))
	    {
		go_deeper(stack, depth, newscore);
#ifdef DEBUG_TRIEWALK
		sprintf(changename[depth], "%.*s-%s: insert %c",
			sp->ts_twordlen, tword, fword + sp->ts_fidx,
			c);
#endif
		++depth;
		sp = &stack[depth];
		tword[sp->ts_twordlen++] = c;
		sp->ts_arridx = idxs[n];
		if (has_mbyte)
		{
		    fl = MB_BYTE2LEN(c);
		    if (fl > 1)
		    {
			
			
			
			sp->ts_tcharlen = fl;
			sp->ts_tcharidx = 1;
			sp->ts_isdiff = DIFF_INSERT;
		    }
		}
		else
		    fl = 1;
		if (fl == 1)
		{
		    
		    
		    
		    
		    if (sp->ts_twordlen >= 2
					   && tword[sp->ts_twordlen - 2] == c)
			sp->ts_score -= SCORE_INS - SCORE_INSDUP;
		}
	    }
	    break;

	case STATE_SWAP:
	    
	    
	    
	    p = fword + sp->ts_fidx;
	    c = *p;
	    if (c == NUL)
	    {
		
		PROF_STORE(sp->ts_state)
		sp->ts_state = STATE_FINAL;
		break;
	    }

	    
	    
	    if (!soundfold && !spell_iswordp(p, curwin))
	    {
		PROF_STORE(sp->ts_state)
		sp->ts_state = STATE_REP_INI;
		break;
	    }

	    if (has_mbyte)
	    {
		n = MB_CPTR2LEN(p);
		c = mb_ptr2char(p);
		if (p[n] == NUL)
		    c2 = NUL;
		else if (!soundfold && !spell_iswordp(p + n, curwin))
		    c2 = c; 
		else
		    c2 = mb_ptr2char(p + n);
	    }
	    else
	    {
		if (p[1] == NUL)
		    c2 = NUL;
		else if (!soundfold && !spell_iswordp(p + 1, curwin))
		    c2 = c; 
		else
		    c2 = p[1];
	    }

	    
	    if (c2 == NUL)
	    {
		PROF_STORE(sp->ts_state)
		sp->ts_state = STATE_REP_INI;
		break;
	    }

	    
	    
	    if (c == c2)
	    {
		PROF_STORE(sp->ts_state)
		sp->ts_state = STATE_SWAP3;
		break;
	    }
	    if (c2 != NUL && TRY_DEEPER(su, stack, depth, SCORE_SWAP))
	    {
		go_deeper(stack, depth, SCORE_SWAP);
#ifdef DEBUG_TRIEWALK
		sprintf(changename[depth], "%.*s-%s: swap %c and %c",
			sp->ts_twordlen, tword, fword + sp->ts_fidx,
			c, c2);
#endif
		PROF_STORE(sp->ts_state)
		sp->ts_state = STATE_UNSWAP;
		++depth;
		if (has_mbyte)
		{
		    fl = mb_char2len(c2);
		    mch_memmove(p, p + n, fl);
		    mb_char2bytes(c, p + fl);
		    stack[depth].ts_fidxtry = sp->ts_fidx + n + fl;
		}
		else
		{
		    p[0] = c2;
		    p[1] = c;
		    stack[depth].ts_fidxtry = sp->ts_fidx + 2;
		}
	    }
	    else
	    {
		
		PROF_STORE(sp->ts_state)
		sp->ts_state = STATE_REP_INI;
	    }
	    break;

	case STATE_UNSWAP:
	    
	    p = fword + sp->ts_fidx;
	    if (has_mbyte)
	    {
		n = mb_ptr2len(p);
		c = mb_ptr2char(p + n);
		mch_memmove(p + mb_ptr2len(p + n), p, n);
		mb_char2bytes(c, p);
	    }
	    else
	    {
		c = *p;
		*p = p[1];
		p[1] = c;
	    }
	    

	case STATE_SWAP3:
	    
	    
	    p = fword + sp->ts_fidx;
	    if (has_mbyte)
	    {
		n = MB_CPTR2LEN(p);
		c = mb_ptr2char(p);
		fl = MB_CPTR2LEN(p + n);
		c2 = mb_ptr2char(p + n);
		if (!soundfold && !spell_iswordp(p + n + fl, curwin))
		    c3 = c;	
		else
		    c3 = mb_ptr2char(p + n + fl);
	    }
	    else
	    {
		c = *p;
		c2 = p[1];
		if (!soundfold && !spell_iswordp(p + 2, curwin))
		    c3 = c;	
		else
		    c3 = p[2];
	    }

	    
	    
	    
	    
	    
	    
	    if (c == c3 || c3 == NUL)
	    {
		PROF_STORE(sp->ts_state)
		sp->ts_state = STATE_REP_INI;
		break;
	    }
	    if (TRY_DEEPER(su, stack, depth, SCORE_SWAP3))
	    {
		go_deeper(stack, depth, SCORE_SWAP3);
#ifdef DEBUG_TRIEWALK
		sprintf(changename[depth], "%.*s-%s: swap3 %c and %c",
			sp->ts_twordlen, tword, fword + sp->ts_fidx,
			c, c3);
#endif
		PROF_STORE(sp->ts_state)
		sp->ts_state = STATE_UNSWAP3;
		++depth;
		if (has_mbyte)
		{
		    tl = mb_char2len(c3);
		    mch_memmove(p, p + n + fl, tl);
		    mb_char2bytes(c2, p + tl);
		    mb_char2bytes(c, p + fl + tl);
		    stack[depth].ts_fidxtry = sp->ts_fidx + n + fl + tl;
		}
		else
		{
		    p[0] = p[2];
		    p[2] = c;
		    stack[depth].ts_fidxtry = sp->ts_fidx + 3;
		}
	    }
	    else
	    {
		PROF_STORE(sp->ts_state)
		sp->ts_state = STATE_REP_INI;
	    }
	    break;

	case STATE_UNSWAP3:
	    
	    p = fword + sp->ts_fidx;
	    if (has_mbyte)
	    {
		n = mb_ptr2len(p);
		c2 = mb_ptr2char(p + n);
		fl = mb_ptr2len(p + n);
		c = mb_ptr2char(p + n + fl);
		tl = mb_ptr2len(p + n + fl);
		mch_memmove(p + fl + tl, p, n);
		mb_char2bytes(c, p);
		mb_char2bytes(c2, p + tl);
		p = p + tl;
	    }
	    else
	    {
		c = *p;
		*p = p[2];
		p[2] = c;
		++p;
	    }

	    if (!soundfold && !spell_iswordp(p, curwin))
	    {
		
		
		PROF_STORE(sp->ts_state)
		sp->ts_state = STATE_REP_INI;
		break;
	    }

	    
	    
	    if (TRY_DEEPER(su, stack, depth, SCORE_SWAP3))
	    {
		go_deeper(stack, depth, SCORE_SWAP3);
#ifdef DEBUG_TRIEWALK
		p = fword + sp->ts_fidx;
		sprintf(changename[depth], "%.*s-%s: rotate left %c%c%c",
			sp->ts_twordlen, tword, fword + sp->ts_fidx,
			p[0], p[1], p[2]);
#endif
		PROF_STORE(sp->ts_state)
		sp->ts_state = STATE_UNROT3L;
		++depth;
		p = fword + sp->ts_fidx;
		if (has_mbyte)
		{
		    n = MB_CPTR2LEN(p);
		    c = mb_ptr2char(p);
		    fl = MB_CPTR2LEN(p + n);
		    fl += MB_CPTR2LEN(p + n + fl);
		    mch_memmove(p, p + n, fl);
		    mb_char2bytes(c, p + fl);
		    stack[depth].ts_fidxtry = sp->ts_fidx + n + fl;
		}
		else
		{
		    c = *p;
		    *p = p[1];
		    p[1] = p[2];
		    p[2] = c;
		    stack[depth].ts_fidxtry = sp->ts_fidx + 3;
		}
	    }
	    else
	    {
		PROF_STORE(sp->ts_state)
		sp->ts_state = STATE_REP_INI;
	    }
	    break;

	case STATE_UNROT3L:
	    
	    p = fword + sp->ts_fidx;
	    if (has_mbyte)
	    {
		n = mb_ptr2len(p);
		n += mb_ptr2len(p + n);
		c = mb_ptr2char(p + n);
		tl = mb_ptr2len(p + n);
		mch_memmove(p + tl, p, n);
		mb_char2bytes(c, p);
	    }
	    else
	    {
		c = p[2];
		p[2] = p[1];
		p[1] = *p;
		*p = c;
	    }

	    
	    
	    if (TRY_DEEPER(su, stack, depth, SCORE_SWAP3))
	    {
		go_deeper(stack, depth, SCORE_SWAP3);
#ifdef DEBUG_TRIEWALK
		p = fword + sp->ts_fidx;
		sprintf(changename[depth], "%.*s-%s: rotate right %c%c%c",
			sp->ts_twordlen, tword, fword + sp->ts_fidx,
			p[0], p[1], p[2]);
#endif
		PROF_STORE(sp->ts_state)
		sp->ts_state = STATE_UNROT3R;
		++depth;
		p = fword + sp->ts_fidx;
		if (has_mbyte)
		{
		    n = MB_CPTR2LEN(p);
		    n += MB_CPTR2LEN(p + n);
		    c = mb_ptr2char(p + n);
		    tl = MB_CPTR2LEN(p + n);
		    mch_memmove(p + tl, p, n);
		    mb_char2bytes(c, p);
		    stack[depth].ts_fidxtry = sp->ts_fidx + n + tl;
		}
		else
		{
		    c = p[2];
		    p[2] = p[1];
		    p[1] = *p;
		    *p = c;
		    stack[depth].ts_fidxtry = sp->ts_fidx + 3;
		}
	    }
	    else
	    {
		PROF_STORE(sp->ts_state)
		sp->ts_state = STATE_REP_INI;
	    }
	    break;

	case STATE_UNROT3R:
	    
	    p = fword + sp->ts_fidx;
	    if (has_mbyte)
	    {
		c = mb_ptr2char(p);
		tl = mb_ptr2len(p);
		n = mb_ptr2len(p + tl);
		n += mb_ptr2len(p + tl + n);
		mch_memmove(p, p + tl, n);
		mb_char2bytes(c, p + n);
	    }
	    else
	    {
		c = *p;
		*p = p[1];
		p[1] = p[2];
		p[2] = c;
	    }
	    

	case STATE_REP_INI:
	    
	    
	    
	    
	    
	    if ((lp->lp_replang == NULL && !soundfold)
		    || sp->ts_score + SCORE_REP >= su->su_maxscore
		    || sp->ts_fidx < sp->ts_fidxtry)
	    {
		PROF_STORE(sp->ts_state)
		sp->ts_state = STATE_FINAL;
		break;
	    }

	    
	    
	    if (soundfold)
		sp->ts_curi = slang->sl_repsal_first[fword[sp->ts_fidx]];
	    else
		sp->ts_curi = lp->lp_replang->sl_rep_first[fword[sp->ts_fidx]];

	    if (sp->ts_curi < 0)
	    {
		PROF_STORE(sp->ts_state)
		sp->ts_state = STATE_FINAL;
		break;
	    }

	    PROF_STORE(sp->ts_state)
	    sp->ts_state = STATE_REP;
	    

	case STATE_REP:
	    
	    
	    
	    p = fword + sp->ts_fidx;

	    if (soundfold)
		gap = &slang->sl_repsal;
	    else
		gap = &lp->lp_replang->sl_rep;
	    while (sp->ts_curi < gap->ga_len)
	    {
		ftp = (fromto_T *)gap->ga_data + sp->ts_curi++;
		if (*ftp->ft_from != *p)
		{
		    
		    sp->ts_curi = gap->ga_len;
		    break;
		}
		if (STRNCMP(ftp->ft_from, p, STRLEN(ftp->ft_from)) == 0
			&& TRY_DEEPER(su, stack, depth, SCORE_REP))
		{
		    go_deeper(stack, depth, SCORE_REP);
#ifdef DEBUG_TRIEWALK
		    sprintf(changename[depth], "%.*s-%s: replace %s with %s",
			    sp->ts_twordlen, tword, fword + sp->ts_fidx,
			    ftp->ft_from, ftp->ft_to);
#endif
		    
		    PROF_STORE(sp->ts_state)
		    sp->ts_state = STATE_REP_UNDO;

		    
		    ++depth;
		    fl = (int)STRLEN(ftp->ft_from);
		    tl = (int)STRLEN(ftp->ft_to);
		    if (fl != tl)
		    {
			STRMOVE(p + tl, p + fl);
			repextra += tl - fl;
		    }
		    mch_memmove(p, ftp->ft_to, tl);
		    stack[depth].ts_fidxtry = sp->ts_fidx + tl;
		    stack[depth].ts_tcharlen = 0;
		    break;
		}
	    }

	    if (sp->ts_curi >= gap->ga_len && sp->ts_state == STATE_REP)
	    {
		
		PROF_STORE(sp->ts_state)
		sp->ts_state = STATE_FINAL;
	    }

	    break;

	case STATE_REP_UNDO:
	    
	    if (soundfold)
		gap = &slang->sl_repsal;
	    else
		gap = &lp->lp_replang->sl_rep;
	    ftp = (fromto_T *)gap->ga_data + sp->ts_curi - 1;
	    fl = (int)STRLEN(ftp->ft_from);
	    tl = (int)STRLEN(ftp->ft_to);
	    p = fword + sp->ts_fidx;
	    if (fl != tl)
	    {
		STRMOVE(p + fl, p + tl);
		repextra -= tl - fl;
	    }
	    mch_memmove(p, ftp->ft_from, fl);
	    PROF_STORE(sp->ts_state)
	    sp->ts_state = STATE_REP;
	    break;

	default:
	    
	    --depth;

	    if (depth >= 0 && stack[depth].ts_prefixdepth == PFD_PREFIXTREE)
	    {
		
		byts = pbyts;
		idxs = pidxs;
	    }

	    
	    if (--breakcheckcount == 0)
	    {
		ui_breakcheck();
		breakcheckcount = 1000;
#ifdef FEAT_RELTIME
		if (spell_suggest_timeout > 0
					  && profile_passed_limit(&time_limit))
		    got_int = TRUE;
#endif
	    }
	}
    }
}



    static void
go_deeper(trystate_T *stack, int depth, int score_add)
{
    stack[depth + 1] = stack[depth];
    stack[depth + 1].ts_state = STATE_START;
    stack[depth + 1].ts_score = stack[depth].ts_score + score_add;
    stack[depth + 1].ts_curi = 1;	
    stack[depth + 1].ts_flags = 0;
}


    static void
find_keepcap_word(slang_T *slang, char_u *fword, char_u *kword)
{
    char_u	uword[MAXWLEN];		
    int		depth;
    idx_T	tryidx;

    
    idx_T	arridx[MAXWLEN];
    int		round[MAXWLEN];
    int		fwordidx[MAXWLEN];
    int		uwordidx[MAXWLEN];
    int		kwordlen[MAXWLEN];

    int		flen, ulen;
    int		l;
    int		len;
    int		c;
    idx_T	lo, hi, m;
    char_u	*p;
    char_u	*byts = slang->sl_kbyts;    
    idx_T	*idxs = slang->sl_kidxs;    

    if (byts == NULL)
    {
	
	*kword = NUL;
	return;
    }

    
    allcap_copy(fword, uword);

    
    
    
    depth = 0;
    arridx[0] = 0;
    round[0] = 0;
    fwordidx[0] = 0;
    uwordidx[0] = 0;
    kwordlen[0] = 0;
    while (depth >= 0)
    {
	if (fword[fwordidx[depth]] == NUL)
	{
	    
	    
	    if (byts[arridx[depth] + 1] == 0)
	    {
		kword[kwordlen[depth]] = NUL;
		return;
	    }

	    
	    --depth;
	}
	else if (++round[depth] > 2)
	{
	    
	    
	    --depth;
	}
	else
	{
	    
	    
	    if (has_mbyte)
	    {
		flen = MB_CPTR2LEN(fword + fwordidx[depth]);
		ulen = MB_CPTR2LEN(uword + uwordidx[depth]);
	    }
	    else
		ulen = flen = 1;
	    if (round[depth] == 1)
	    {
		p = fword + fwordidx[depth];
		l = flen;
	    }
	    else
	    {
		p = uword + uwordidx[depth];
		l = ulen;
	    }

	    for (tryidx = arridx[depth]; l > 0; --l)
	    {
		
		len = byts[tryidx++];
		c = *p++;
		lo = tryidx;
		hi = tryidx + len - 1;
		while (lo < hi)
		{
		    m = (lo + hi) / 2;
		    if (byts[m] > c)
			hi = m - 1;
		    else if (byts[m] < c)
			lo = m + 1;
		    else
		    {
			lo = hi = m;
			break;
		    }
		}

		
		if (hi < lo || byts[lo] != c)
		    break;

		
		tryidx = idxs[lo];
	    }

	    if (l == 0)
	    {
		
		
		if (round[depth] == 1)
		{
		    STRNCPY(kword + kwordlen[depth], fword + fwordidx[depth],
									flen);
		    kwordlen[depth + 1] = kwordlen[depth] + flen;
		}
		else
		{
		    STRNCPY(kword + kwordlen[depth], uword + uwordidx[depth],
									ulen);
		    kwordlen[depth + 1] = kwordlen[depth] + ulen;
		}
		fwordidx[depth + 1] = fwordidx[depth] + flen;
		uwordidx[depth + 1] = uwordidx[depth] + ulen;

		++depth;
		arridx[depth] = tryidx;
		round[depth] = 0;
	    }
	}
    }

    
    *kword = NUL;
}


    static void
score_comp_sal(suginfo_T *su)
{
    langp_T	*lp;
    char_u	badsound[MAXWLEN];
    int		i;
    suggest_T   *stp;
    suggest_T   *sstp;
    int		score;
    int		lpi;

    if (ga_grow(&su->su_sga, su->su_ga.ga_len) == FAIL)
	return;

    
    for (lpi = 0; lpi < curwin->w_s->b_langp.ga_len; ++lpi)
    {
	lp = LANGP_ENTRY(curwin->w_s->b_langp, lpi);
	if (lp->lp_slang->sl_sal.ga_len > 0)
	{
	    
	    spell_soundfold(lp->lp_slang, su->su_fbadword, TRUE, badsound);

	    for (i = 0; i < su->su_ga.ga_len; ++i)
	    {
		stp = &SUG(su->su_ga, i);

		
		
		score = stp_sal_score(stp, su, lp->lp_slang, badsound);
		if (score < SCORE_MAXMAX)
		{
		    
		    sstp = &SUG(su->su_sga, su->su_sga.ga_len);
		    sstp->st_word = vim_strsave(stp->st_word);
		    if (sstp->st_word != NULL)
		    {
			sstp->st_wordlen = stp->st_wordlen;
			sstp->st_score = score;
			sstp->st_altscore = 0;
			sstp->st_orglen = stp->st_orglen;
			++su->su_sga.ga_len;
		    }
		}
	    }
	    break;
	}
    }
}


    static void
score_combine(suginfo_T *su)
{
    int		i;
    int		j;
    garray_T	ga;
    garray_T	*gap;
    langp_T	*lp;
    suggest_T	*stp;
    char_u	*p;
    char_u	badsound[MAXWLEN];
    int		round;
    int		lpi;
    slang_T	*slang = NULL;

    
    for (lpi = 0; lpi < curwin->w_s->b_langp.ga_len; ++lpi)
    {
	lp = LANGP_ENTRY(curwin->w_s->b_langp, lpi);
	if (lp->lp_slang->sl_sal.ga_len > 0)
	{
	    
	    slang = lp->lp_slang;
	    spell_soundfold(slang, su->su_fbadword, TRUE, badsound);

	    for (i = 0; i < su->su_ga.ga_len; ++i)
	    {
		stp = &SUG(su->su_ga, i);
		stp->st_altscore = stp_sal_score(stp, su, slang, badsound);
		if (stp->st_altscore == SCORE_MAXMAX)
		    stp->st_score = (stp->st_score * 3 + SCORE_BIG) / 4;
		else
		    stp->st_score = (stp->st_score * 3
						  + stp->st_altscore) / 4;
		stp->st_salscore = FALSE;
	    }
	    break;
	}
    }

    if (slang == NULL)	
    {
	(void)cleanup_suggestions(&su->su_ga, su->su_maxscore,
							     su->su_maxcount);
	return;
    }

    
    for (i = 0; i < su->su_sga.ga_len; ++i)
    {
	stp = &SUG(su->su_sga, i);
	stp->st_altscore = spell_edit_score(slang,
						su->su_badword, stp->st_word);
	if (stp->st_score == SCORE_MAXMAX)
	    stp->st_score = (SCORE_BIG * 7 + stp->st_altscore) / 8;
	else
	    stp->st_score = (stp->st_score * 7 + stp->st_altscore) / 8;
	stp->st_salscore = TRUE;
    }

    
    
    check_suggestions(su, &su->su_ga);
    (void)cleanup_suggestions(&su->su_ga, su->su_maxscore, su->su_maxcount);
    check_suggestions(su, &su->su_sga);
    (void)cleanup_suggestions(&su->su_sga, su->su_maxscore, su->su_maxcount);

    ga_init2(&ga, sizeof(suginfo_T), 1);
    if (ga_grow(&ga, su->su_ga.ga_len + su->su_sga.ga_len) == FAIL)
	return;

    stp = &SUG(ga, 0);
    for (i = 0; i < su->su_ga.ga_len || i < su->su_sga.ga_len; ++i)
    {
	
	
	for (round = 1; round <= 2; ++round)
	{
	    gap = round == 1 ? &su->su_ga : &su->su_sga;
	    if (i < gap->ga_len)
	    {
		
		p = SUG(*gap, i).st_word;
		for (j = 0; j < ga.ga_len; ++j)
		    if (STRCMP(stp[j].st_word, p) == 0)
			break;
		if (j == ga.ga_len)
		    stp[ga.ga_len++] = SUG(*gap, i);
		else
		    vim_free(p);
	    }
	}
    }

    ga_clear(&su->su_ga);
    ga_clear(&su->su_sga);

    
    if (ga.ga_len > su->su_maxcount)
    {
	for (i = su->su_maxcount; i < ga.ga_len; ++i)
	    vim_free(stp[i].st_word);
	ga.ga_len = su->su_maxcount;
    }

    su->su_ga = ga;
}


    static int
stp_sal_score(
    suggest_T	*stp,
    suginfo_T	*su,
    slang_T	*slang,
    char_u	*badsound)	
{
    char_u	*p;
    char_u	*pbad;
    char_u	*pgood;
    char_u	badsound2[MAXWLEN];
    char_u	fword[MAXWLEN];
    char_u	goodsound[MAXWLEN];
    char_u	goodword[MAXWLEN];
    int		lendiff;

    lendiff = (int)(su->su_badlen - stp->st_orglen);
    if (lendiff >= 0)
	pbad = badsound;
    else
    {
	
	(void)spell_casefold(curwin,
				su->su_badptr, stp->st_orglen, fword, MAXWLEN);

	
	
	
	
	if (VIM_ISWHITE(su->su_badptr[su->su_badlen])
					 && *skiptowhite(stp->st_word) == NUL)
	    for (p = fword; *(p = skiptowhite(p)) != NUL; )
		STRMOVE(p, p + 1);

	spell_soundfold(slang, fword, TRUE, badsound2);
	pbad = badsound2;
    }

    if (lendiff > 0 && stp->st_wordlen + lendiff < MAXWLEN)
    {
	
	
	STRCPY(goodword, stp->st_word);
	vim_strncpy(goodword + stp->st_wordlen,
			    su->su_badptr + su->su_badlen - lendiff, lendiff);
	pgood = goodword;
    }
    else
	pgood = stp->st_word;

    
    spell_soundfold(slang, pgood, FALSE, goodsound);

    return soundalike_score(goodsound, pbad);
}



typedef struct
{
    short	sft_score;	
    char_u	sft_word[1];    
} sftword_T;

static sftword_T dumsft;
#define HIKEY2SFT(p)  ((sftword_T *)((p) - (dumsft.sft_word - (char_u *)&dumsft)))
#define HI2SFT(hi)     HIKEY2SFT((hi)->hi_key)


    static void
suggest_try_soundalike_prep(void)
{
    langp_T	*lp;
    int		lpi;
    slang_T	*slang;

    
    
    for (lpi = 0; lpi < curwin->w_s->b_langp.ga_len; ++lpi)
    {
	lp = LANGP_ENTRY(curwin->w_s->b_langp, lpi);
	slang = lp->lp_slang;
	if (slang->sl_sal.ga_len > 0 && slang->sl_sbyts != NULL)
	    
	    hash_init(&slang->sl_sounddone);
    }
}


    static void
suggest_try_soundalike(suginfo_T *su)
{
    char_u	salword[MAXWLEN];
    langp_T	*lp;
    int		lpi;
    slang_T	*slang;

    
    
    for (lpi = 0; lpi < curwin->w_s->b_langp.ga_len; ++lpi)
    {
	lp = LANGP_ENTRY(curwin->w_s->b_langp, lpi);
	slang = lp->lp_slang;
	if (slang->sl_sal.ga_len > 0 && slang->sl_sbyts != NULL)
	{
	    
	    spell_soundfold(slang, su->su_fbadword, TRUE, salword);

	    
	    
	    
#ifdef SUGGEST_PROFILE
	    prof_init();
#endif
	    suggest_trie_walk(su, lp, salword, TRUE);
#ifdef SUGGEST_PROFILE
	    prof_report("soundalike");
#endif
	}
    }
}


    static void
suggest_try_soundalike_finish(void)
{
    langp_T	*lp;
    int		lpi;
    slang_T	*slang;
    int		todo;
    hashitem_T	*hi;

    
    
    for (lpi = 0; lpi < curwin->w_s->b_langp.ga_len; ++lpi)
    {
	lp = LANGP_ENTRY(curwin->w_s->b_langp, lpi);
	slang = lp->lp_slang;
	if (slang->sl_sal.ga_len > 0 && slang->sl_sbyts != NULL)
	{
	    
	    todo = (int)slang->sl_sounddone.ht_used;
	    FOR_ALL_HASHTAB_ITEMS(&slang->sl_sounddone, hi, todo)
		if (!HASHITEM_EMPTY(hi))
		{
		    vim_free(HI2SFT(hi));
		    --todo;
		}

	    
	    hash_clear(&slang->sl_sounddone);
	    hash_init(&slang->sl_sounddone);
	}
    }
}


    static void
add_sound_suggest(
    suginfo_T	*su,
    char_u	*goodword,
    int		score,		
    langp_T	*lp)
{
    slang_T	*slang = lp->lp_slang;	
    int		sfwordnr;
    char_u	*nrline;
    int		orgnr;
    char_u	theword[MAXWLEN];
    int		i;
    int		wlen;
    char_u	*byts;
    idx_T	*idxs;
    int		n;
    int		wordcount;
    int		wc;
    int		goodscore;
    hash_T	hash;
    hashitem_T  *hi;
    sftword_T	*sft;
    int		bc, gc;
    int		limit;

    
    
    
    
    hash = hash_hash(goodword);
    hi = hash_lookup(&slang->sl_sounddone, goodword, hash);
    if (HASHITEM_EMPTY(hi))
    {
	sft = alloc(offsetof(sftword_T, sft_word) + STRLEN(goodword) + 1);
	if (sft != NULL)
	{
	    sft->sft_score = score;
	    STRCPY(sft->sft_word, goodword);
	    hash_add_item(&slang->sl_sounddone, hi, sft->sft_word, hash);
	}
    }
    else
    {
	sft = HI2SFT(hi);
	if (score >= sft->sft_score)
	    return;
	sft->sft_score = score;
    }

    
    sfwordnr = soundfold_find(slang, goodword);
    if (sfwordnr < 0)
    {
	internal_error("add_sound_suggest()");
	return;
    }

    
    nrline = ml_get_buf(slang->sl_sugbuf, (linenr_T)(sfwordnr + 1), FALSE);
    orgnr = 0;
    while (*nrline != NUL)
    {
	
	
	orgnr += bytes2offset(&nrline);

	byts = slang->sl_fbyts;
	idxs = slang->sl_fidxs;

	
	n = 0;
	wordcount = 0;
	for (wlen = 0; wlen < MAXWLEN - 3; ++wlen)
	{
	    i = 1;
	    if (wordcount == orgnr && byts[n + 1] == NUL)
		break;	

	    if (byts[n + 1] == NUL)
		++wordcount;

	    
	    for ( ; byts[n + i] == NUL; ++i)
		if (i > byts[n])	
		{
		    STRCPY(theword + wlen, "BAD");
		    wlen += 3;
		    goto badword;
		}

	    
	    for ( ; i < byts[n]; ++i)
	    {
		wc = idxs[idxs[n + i]];	
		if (wordcount + wc > orgnr)
		    break;
		wordcount += wc;
	    }

	    theword[wlen] = byts[n + i];
	    n = idxs[n + i];
	}
badword:
	theword[wlen] = NUL;

	
	for (; i <= byts[n] && byts[n + i] == NUL; ++i)
	{
	    char_u	cword[MAXWLEN];
	    char_u	*p;
	    int		flags = (int)idxs[n + i];

	    
	    if (flags & WF_NOSUGGEST)
		continue;

	    if (flags & WF_KEEPCAP)
	    {
		
		find_keepcap_word(slang, theword, cword);
		p = cword;
	    }
	    else
	    {
		flags |= su->su_badflags;
		if ((flags & WF_CAPMASK) != 0)
		{
		    
		    make_case_word(theword, cword, flags);
		    p = cword;
		}
		else
		    p = theword;
	    }

	    
	    if (sps_flags & SPS_DOUBLE)
	    {
		
		if (score <= su->su_maxscore)
		    add_suggestion(su, &su->su_sga, p, su->su_badlen,
					       score, 0, FALSE, slang, FALSE);
	    }
	    else
	    {
		
		if ((flags & WF_REGION)
			    && (((unsigned)flags >> 16) & lp->lp_region) == 0)
		    goodscore = SCORE_REGION;
		else
		    goodscore = 0;

		
		
		
		
		gc = PTR2CHAR(p);
		if (SPELL_ISUPPER(gc))
		{
		    bc = PTR2CHAR(su->su_badword);
		    if (!SPELL_ISUPPER(bc)
				      && SPELL_TOFOLD(bc) != SPELL_TOFOLD(gc))
			goodscore += SCORE_ICASE / 2;
		}

		
		
		
		
		
		
		
		limit = MAXSCORE(su->su_sfmaxscore - goodscore, score);
		if (limit > SCORE_LIMITMAX)
		    goodscore += spell_edit_score(slang, su->su_badword, p);
		else
		    goodscore += spell_edit_score_limit(slang, su->su_badword,
								    p, limit);

		
		if (goodscore < SCORE_MAXMAX)
		{
		    
		    goodscore = score_wordcount_adj(slang, goodscore, p, FALSE);

		    
		    goodscore = RESCORE(goodscore, score);
		    if (goodscore <= su->su_sfmaxscore)
			add_suggestion(su, &su->su_ga, p, su->su_badlen,
					 goodscore, score, TRUE, slang, TRUE);
		}
	    }
	}
	
    }
}


    static int
soundfold_find(slang_T *slang, char_u *word)
{
    idx_T	arridx = 0;
    int		len;
    int		wlen = 0;
    int		c;
    char_u	*ptr = word;
    char_u	*byts;
    idx_T	*idxs;
    int		wordnr = 0;

    byts = slang->sl_sbyts;
    idxs = slang->sl_sidxs;

    for (;;)
    {
	
	len = byts[arridx++];

	
	
	c = ptr[wlen];
	if (byts[arridx] == NUL)
	{
	    if (c == NUL)
		break;

	    
	    while (len > 0 && byts[arridx] == NUL)
	    {
		++arridx;
		--len;
	    }
	    if (len == 0)
		return -1;    
	    ++wordnr;
	}

	
	if (c == NUL)
	    return -1;

	
	if (c == TAB)	    
	    c = ' ';
	while (byts[arridx] < c)
	{
	    
	    wordnr += idxs[idxs[arridx]];
	    ++arridx;
	    if (--len == 0)	
		return -1;
	}
	if (byts[arridx] != c)	
	    return -1;

	
	arridx = idxs[arridx];
	++wlen;

	
	
	if (c == ' ')
	    while (ptr[wlen] == ' ' || ptr[wlen] == TAB)
		++wlen;
    }

    return wordnr;
}


    static int
similar_chars(slang_T *slang, int c1, int c2)
{
    int		m1, m2;
    char_u	buf[MB_MAXBYTES + 1];
    hashitem_T  *hi;

    if (c1 >= 256)
    {
	buf[mb_char2bytes(c1, buf)] = 0;
	hi = hash_find(&slang->sl_map_hash, buf);
	if (HASHITEM_EMPTY(hi))
	    m1 = 0;
	else
	    m1 = mb_ptr2char(hi->hi_key + STRLEN(hi->hi_key) + 1);
    }
    else
	m1 = slang->sl_map_array[c1];
    if (m1 == 0)
	return FALSE;


    if (c2 >= 256)
    {
	buf[mb_char2bytes(c2, buf)] = 0;
	hi = hash_find(&slang->sl_map_hash, buf);
	if (HASHITEM_EMPTY(hi))
	    m2 = 0;
	else
	    m2 = mb_ptr2char(hi->hi_key + STRLEN(hi->hi_key) + 1);
    }
    else
	m2 = slang->sl_map_array[c2];

    return m1 == m2;
}


    static void
add_suggestion(
    suginfo_T	*su,
    garray_T	*gap,		
    char_u	*goodword,
    int		badlenarg,	
    int		score,
    int		altscore,
    int		had_bonus,	
    slang_T	*slang,		
    int		maxsf)		
				
{
    int		goodlen;	
    int		badlen;		
    suggest_T   *stp;
    suggest_T   new_sug;
    int		i;
    char_u	*pgood, *pbad;

    
    
    pgood = goodword + STRLEN(goodword);
    pbad = su->su_badptr + badlenarg;
    for (;;)
    {
	goodlen = (int)(pgood - goodword);
	badlen = (int)(pbad - su->su_badptr);
	if (goodlen <= 0 || badlen <= 0)
	    break;
	MB_PTR_BACK(goodword, pgood);
	MB_PTR_BACK(su->su_badptr, pbad);
	if (has_mbyte)
	{
	    if (mb_ptr2char(pgood) != mb_ptr2char(pbad))
		break;
	}
	else if (*pgood != *pbad)
		break;
    }

    if (badlen == 0 && goodlen == 0)
	
	
	return;

    if (gap->ga_len == 0)
	i = -1;
    else
    {
	
	
	
	stp = &SUG(*gap, 0);
	for (i = gap->ga_len; --i >= 0; ++stp)
	    if (stp->st_wordlen == goodlen
		    && stp->st_orglen == badlen
		    && STRNCMP(stp->st_word, goodword, goodlen) == 0)
	    {
		
		if (stp->st_slang == NULL)
		    stp->st_slang = slang;

		new_sug.st_score = score;
		new_sug.st_altscore = altscore;
		new_sug.st_had_bonus = had_bonus;

		if (stp->st_had_bonus != had_bonus)
		{
		    
		    
		    
		    
		    
		    
		    if (had_bonus)
			rescore_one(su, stp);
		    else
		    {
			new_sug.st_word = stp->st_word;
			new_sug.st_wordlen = stp->st_wordlen;
			new_sug.st_slang = stp->st_slang;
			new_sug.st_orglen = badlen;
			rescore_one(su, &new_sug);
		    }
		}

		if (stp->st_score > new_sug.st_score)
		{
		    stp->st_score = new_sug.st_score;
		    stp->st_altscore = new_sug.st_altscore;
		    stp->st_had_bonus = new_sug.st_had_bonus;
		}
		break;
	    }
    }

    if (i < 0 && ga_grow(gap, 1) == OK)
    {
	
	stp = &SUG(*gap, gap->ga_len);
	stp->st_word = vim_strnsave(goodword, goodlen);
	if (stp->st_word != NULL)
	{
	    stp->st_wordlen = goodlen;
	    stp->st_score = score;
	    stp->st_altscore = altscore;
	    stp->st_had_bonus = had_bonus;
	    stp->st_orglen = badlen;
	    stp->st_slang = slang;
	    ++gap->ga_len;

	    
	    
	    if (gap->ga_len > SUG_MAX_COUNT(su))
	    {
		if (maxsf)
		    su->su_sfmaxscore = cleanup_suggestions(gap,
				      su->su_sfmaxscore, SUG_CLEAN_COUNT(su));
		else
		    su->su_maxscore = cleanup_suggestions(gap,
					su->su_maxscore, SUG_CLEAN_COUNT(su));
	    }
	}
    }
}


    static void
check_suggestions(
    suginfo_T	*su,
    garray_T	*gap)		    
{
    suggest_T   *stp;
    int		i;
    char_u	longword[MAXWLEN + 1];
    int		len;
    hlf_T	attr;

    if (gap->ga_len == 0)
	return;
    stp = &SUG(*gap, 0);
    for (i = gap->ga_len - 1; i >= 0; --i)
    {
	
	vim_strncpy(longword, stp[i].st_word, MAXWLEN);
	len = stp[i].st_wordlen;
	vim_strncpy(longword + len, su->su_badptr + stp[i].st_orglen,
							       MAXWLEN - len);
	attr = HLF_COUNT;
	(void)spell_check(curwin, longword, &attr, NULL, FALSE);
	if (attr != HLF_COUNT)
	{
	    
	    vim_free(stp[i].st_word);
	    --gap->ga_len;
	    if (i < gap->ga_len)
		mch_memmove(stp + i, stp + i + 1,
				       sizeof(suggest_T) * (gap->ga_len - i));
	}
    }
}



    static void
add_banned(
    suginfo_T	*su,
    char_u	*word)
{
    char_u	*s;
    hash_T	hash;
    hashitem_T	*hi;

    hash = hash_hash(word);
    hi = hash_lookup(&su->su_banned, word, hash);
    if (!HASHITEM_EMPTY(hi))		
	return;
    s = vim_strsave(word);
    if (s != NULL)
	hash_add_item(&su->su_banned, hi, s, hash);
}


    static void
rescore_suggestions(suginfo_T *su)
{
    int		i;

    if (su->su_sallang != NULL)
	for (i = 0; i < su->su_ga.ga_len; ++i)
	    rescore_one(su, &SUG(su->su_ga, i));
}


    static void
rescore_one(suginfo_T *su, suggest_T *stp)
{
    slang_T	*slang = stp->st_slang;
    char_u	sal_badword[MAXWLEN];
    char_u	*p;

    
    
    if (slang != NULL && slang->sl_sal.ga_len > 0 && !stp->st_had_bonus)
    {
	if (slang == su->su_sallang)
	    p = su->su_sal_badword;
	else
	{
	    spell_soundfold(slang, su->su_fbadword, TRUE, sal_badword);
	    p = sal_badword;
	}

	stp->st_altscore = stp_sal_score(stp, su, slang, p);
	if (stp->st_altscore == SCORE_MAXMAX)
	    stp->st_altscore = SCORE_BIG;
	stp->st_score = RESCORE(stp->st_score, stp->st_altscore);
	stp->st_had_bonus = TRUE;
    }
}

static int sug_compare(const void *s1, const void *s2);


    static int
sug_compare(const void *s1, const void *s2)
{
    suggest_T	*p1 = (suggest_T *)s1;
    suggest_T	*p2 = (suggest_T *)s2;
    int		n;

    n = p1->st_score == p2->st_score ? 0 :
	p1->st_score > p2->st_score ? 1 : -1;

    if (n == 0)
    {
	n = p1->st_altscore == p2->st_altscore ? 0 :
	    p1->st_altscore > p2->st_altscore ? 1 : -1;

	if (n == 0)
	    n = STRICMP(p1->st_word, p2->st_word);
    }
    return n;
}


    static int
cleanup_suggestions(
    garray_T	*gap,
    int		maxscore,
    int		keep)		
{
    if (gap->ga_len <= 0)
	return maxscore;

    
    qsort(gap->ga_data, (size_t)gap->ga_len, sizeof(suggest_T),
	    sug_compare);

    
    
    if (gap->ga_len > keep)
    {
	int		i;
	suggest_T   *stp = &SUG(*gap, 0);

	for (i = keep; i < gap->ga_len; ++i)
	    vim_free(stp[i].st_word);
	gap->ga_len = keep;
	if (keep >= 1)
	    return stp[keep - 1].st_score;
    }
    return maxscore;
}


    static int
soundalike_score(
    char_u	*goodstart,	
    char_u	*badstart)	
{
    char_u	*goodsound = goodstart;
    char_u	*badsound = badstart;
    int		goodlen;
    int		badlen;
    int		n;
    char_u	*pl, *ps;
    char_u	*pl2, *ps2;
    int		score = 0;

    
    
    if ((*badsound == '*' || *goodsound == '*') && *badsound != *goodsound)
    {
	if ((badsound[0] == NUL && goodsound[1] == NUL)
	    || (goodsound[0] == NUL && badsound[1] == NUL))
	    
	    return SCORE_DEL;
	if (badsound[0] == NUL || goodsound[0] == NUL)
	    
	    return SCORE_MAXMAX;

	if (badsound[1] == goodsound[1]
		|| (badsound[1] != NUL
		    && goodsound[1] != NUL
		    && badsound[2] == goodsound[2]))
	{
	    
	}
	else
	{
	    score = 2 * SCORE_DEL / 3;
	    if (*badsound == '*')
		++badsound;
	    else
		++goodsound;
	}
    }

    goodlen = (int)STRLEN(goodsound);
    badlen = (int)STRLEN(badsound);

    
    
    n = goodlen - badlen;
    if (n < -2 || n > 2)
	return SCORE_MAXMAX;

    if (n > 0)
    {
	pl = goodsound;	    
	ps = badsound;
    }
    else
    {
	pl = badsound;	    
	ps = goodsound;
    }

    
    while (*pl == *ps && *pl != NUL)
    {
	++pl;
	++ps;
    }

    switch (n)
    {
	case -2:
	case 2:
	    
	    ++pl;	
	    while (*pl == *ps)
	    {
		++pl;
		++ps;
	    }
	    
	    if (STRCMP(pl + 1, ps) == 0)
		return score + SCORE_DEL * 2;

	    
	    break;

	case -1:
	case 1:
	    

	    
	    pl2 = pl + 1;
	    ps2 = ps;
	    while (*pl2 == *ps2)
	    {
		if (*pl2 == NUL)	
		    return score + SCORE_DEL;
		++pl2;
		++ps2;
	    }

	    
	    if (pl2[0] == ps2[1] && pl2[1] == ps2[0]
					     && STRCMP(pl2 + 2, ps2 + 2) == 0)
		return score + SCORE_DEL + SCORE_SWAP;

	    
	    if (STRCMP(pl2 + 1, ps2 + 1) == 0)
		return score + SCORE_DEL + SCORE_SUBST;

	    
	    if (pl[0] == ps[1] && pl[1] == ps[0])
	    {
		pl2 = pl + 2;	    
		ps2 = ps + 2;
		while (*pl2 == *ps2)
		{
		    ++pl2;
		    ++ps2;
		}
		
		if (STRCMP(pl2 + 1, ps2) == 0)
		    return score + SCORE_SWAP + SCORE_DEL;
	    }

	    
	    pl2 = pl + 1;	    
	    ps2 = ps + 1;
	    while (*pl2 == *ps2)
	    {
		++pl2;
		++ps2;
	    }
	    
	    if (STRCMP(pl2 + 1, ps2) == 0)
		return score + SCORE_SUBST + SCORE_DEL;

	    
	    break;

	case 0:
	    
	    
	    
	    if (*pl == NUL)
		return score;

	    
	    if (pl[0] == ps[1] && pl[1] == ps[0])
	    {
		pl2 = pl + 2;	    
		ps2 = ps + 2;
		while (*pl2 == *ps2)
		{
		    if (*pl2 == NUL)	
			return score + SCORE_SWAP;
		    ++pl2;
		    ++ps2;
		}
		
		if (pl2[0] == ps2[1] && pl2[1] == ps2[0]
					     && STRCMP(pl2 + 2, ps2 + 2) == 0)
		    return score + SCORE_SWAP + SCORE_SWAP;

		
		if (STRCMP(pl2 + 1, ps2 + 1) == 0)
		    return score + SCORE_SWAP + SCORE_SUBST;
	    }

	    
	    pl2 = pl + 1;
	    ps2 = ps + 1;
	    while (*pl2 == *ps2)
	    {
		if (*pl2 == NUL)	
		    return score + SCORE_SUBST;
		++pl2;
		++ps2;
	    }

	    
	    if (pl2[0] == ps2[1] && pl2[1] == ps2[0]
					     && STRCMP(pl2 + 2, ps2 + 2) == 0)
		return score + SCORE_SUBST + SCORE_SWAP;

	    
	    if (STRCMP(pl2 + 1, ps2 + 1) == 0)
		return score + SCORE_SUBST + SCORE_SUBST;

	    
	    pl2 = pl;
	    ps2 = ps + 1;
	    while (*pl2 == *ps2)
	    {
		++pl2;
		++ps2;
	    }
	    if (STRCMP(pl2 + 1, ps2) == 0)
		return score + SCORE_INS + SCORE_DEL;

	    
	    pl2 = pl + 1;
	    ps2 = ps;
	    while (*pl2 == *ps2)
	    {
		++pl2;
		++ps2;
	    }
	    if (STRCMP(pl2, ps2 + 1) == 0)
		return score + SCORE_INS + SCORE_DEL;

	    
	    break;
    }

    return SCORE_MAXMAX;
}


    static int
spell_edit_score(
    slang_T	*slang,
    char_u	*badword,
    char_u	*goodword)
{
    int		*cnt;
    int		badlen, goodlen;	
    int		j, i;
    int		t;
    int		bc, gc;
    int		pbc, pgc;
    char_u	*p;
    int		wbadword[MAXWLEN];
    int		wgoodword[MAXWLEN];

    if (has_mbyte)
    {
	
	
	for (p = badword, badlen = 0; *p != NUL; )
	    wbadword[badlen++] = mb_cptr2char_adv(&p);
	wbadword[badlen++] = 0;
	for (p = goodword, goodlen = 0; *p != NUL; )
	    wgoodword[goodlen++] = mb_cptr2char_adv(&p);
	wgoodword[goodlen++] = 0;
    }
    else
    {
	badlen = (int)STRLEN(badword) + 1;
	goodlen = (int)STRLEN(goodword) + 1;
    }

    
#define CNT(a, b)   cnt[(a) + (b) * (badlen + 1)]
    cnt = ALLOC_MULT(int, (badlen + 1) * (goodlen + 1));
    if (cnt == NULL)
	return 0;	

    CNT(0, 0) = 0;
    for (j = 1; j <= goodlen; ++j)
	CNT(0, j) = CNT(0, j - 1) + SCORE_INS;

    for (i = 1; i <= badlen; ++i)
    {
	CNT(i, 0) = CNT(i - 1, 0) + SCORE_DEL;
	for (j = 1; j <= goodlen; ++j)
	{
	    if (has_mbyte)
	    {
		bc = wbadword[i - 1];
		gc = wgoodword[j - 1];
	    }
	    else
	    {
		bc = badword[i - 1];
		gc = goodword[j - 1];
	    }
	    if (bc == gc)
		CNT(i, j) = CNT(i - 1, j - 1);
	    else
	    {
		
		if (SPELL_TOFOLD(bc) == SPELL_TOFOLD(gc))
		    CNT(i, j) = SCORE_ICASE + CNT(i - 1, j - 1);
		else
		{
		    
		    if (slang != NULL
			    && slang->sl_has_map
			    && similar_chars(slang, gc, bc))
			CNT(i, j) = SCORE_SIMILAR + CNT(i - 1, j - 1);
		    else
			CNT(i, j) = SCORE_SUBST + CNT(i - 1, j - 1);
		}

		if (i > 1 && j > 1)
		{
		    if (has_mbyte)
		    {
			pbc = wbadword[i - 2];
			pgc = wgoodword[j - 2];
		    }
		    else
		    {
			pbc = badword[i - 2];
			pgc = goodword[j - 2];
		    }
		    if (bc == pgc && pbc == gc)
		    {
			t = SCORE_SWAP + CNT(i - 2, j - 2);
			if (t < CNT(i, j))
			    CNT(i, j) = t;
		    }
		}
		t = SCORE_DEL + CNT(i - 1, j);
		if (t < CNT(i, j))
		    CNT(i, j) = t;
		t = SCORE_INS + CNT(i, j - 1);
		if (t < CNT(i, j))
		    CNT(i, j) = t;
	    }
	}
    }

    i = CNT(badlen - 1, goodlen - 1);
    vim_free(cnt);
    return i;
}

typedef struct
{
    int		badi;
    int		goodi;
    int		score;
} limitscore_T;


    static int
spell_edit_score_limit(
    slang_T	*slang,
    char_u	*badword,
    char_u	*goodword,
    int		limit)
{
    limitscore_T    stack[10];		
    int		    stackidx;
    int		    bi, gi;
    int		    bi2, gi2;
    int		    bc, gc;
    int		    score;
    int		    score_off;
    int		    minscore;
    int		    round;

    
    
    if (has_mbyte)
	return spell_edit_score_limit_w(slang, badword, goodword, limit);

    
    
    
    
    
    
    
    stackidx = 0;
    bi = 0;
    gi = 0;
    score = 0;
    minscore = limit + 1;

    for (;;)
    {
	
	for (;;)
	{
	    bc = badword[bi];
	    gc = goodword[gi];
	    if (bc != gc)	
		break;
	    if (bc == NUL)	
	    {
		if (score < minscore)
		    minscore = score;
		goto pop;	
	    }
	    ++bi;
	    ++gi;
	}

	if (gc == NUL)    
	{
	    do
	    {
		if ((score += SCORE_DEL) >= minscore)
		    goto pop;	    
	    } while (badword[++bi] != NUL);
	    minscore = score;
	}
	else if (bc == NUL) 
	{
	    do
	    {
		if ((score += SCORE_INS) >= minscore)
		    goto pop;	    
	    } while (goodword[++gi] != NUL);
	    minscore = score;
	}
	else			
	{
	    
	    
	    
	    
	    for (round = 0; round <= 1; ++round)
	    {
		score_off = score + (round == 0 ? SCORE_DEL : SCORE_INS);
		if (score_off < minscore)
		{
		    if (score_off + SCORE_EDIT_MIN >= minscore)
		    {
			
			
			
			bi2 = bi + 1 - round;
			gi2 = gi + round;
			while (goodword[gi2] == badword[bi2])
			{
			    if (goodword[gi2] == NUL)
			    {
				minscore = score_off;
				break;
			    }
			    ++bi2;
			    ++gi2;
			}
		    }
		    else
		    {
			
			stack[stackidx].badi = bi + 1 - round;
			stack[stackidx].goodi = gi + round;
			stack[stackidx].score = score_off;
			++stackidx;
		    }
		}
	    }

	    if (score + SCORE_SWAP < minscore)
	    {
		
		
		
		if (gc == badword[bi + 1] && bc == goodword[gi + 1])
		{
		    
		    gi += 2;
		    bi += 2;
		    score += SCORE_SWAP;
		    continue;
		}
	    }

	    
	    
	    
	    if (SPELL_TOFOLD(bc) == SPELL_TOFOLD(gc))
		score += SCORE_ICASE;
	    else
	    {
		
		if (slang != NULL
			&& slang->sl_has_map
			&& similar_chars(slang, gc, bc))
		    score += SCORE_SIMILAR;
		else
		    score += SCORE_SUBST;
	    }

	    if (score < minscore)
	    {
		
		++gi;
		++bi;
		continue;
	    }
	}
pop:
	
	if (stackidx == 0)		
	    break;

	
	--stackidx;
	gi = stack[stackidx].goodi;
	bi = stack[stackidx].badi;
	score = stack[stackidx].score;
    }

    
    
    
    if (minscore > limit)
	return SCORE_MAXMAX;
    return minscore;
}


    static int
spell_edit_score_limit_w(
    slang_T	*slang,
    char_u	*badword,
    char_u	*goodword,
    int		limit)
{
    limitscore_T    stack[10];		
    int		    stackidx;
    int		    bi, gi;
    int		    bi2, gi2;
    int		    bc, gc;
    int		    score;
    int		    score_off;
    int		    minscore;
    int		    round;
    char_u	    *p;
    int		    wbadword[MAXWLEN];
    int		    wgoodword[MAXWLEN];

    
    
    bi = 0;
    for (p = badword; *p != NUL; )
	wbadword[bi++] = mb_cptr2char_adv(&p);
    wbadword[bi++] = 0;
    gi = 0;
    for (p = goodword; *p != NUL; )
	wgoodword[gi++] = mb_cptr2char_adv(&p);
    wgoodword[gi++] = 0;

    
    
    
    
    
    
    
    stackidx = 0;
    bi = 0;
    gi = 0;
    score = 0;
    minscore = limit + 1;

    for (;;)
    {
	
	for (;;)
	{
	    bc = wbadword[bi];
	    gc = wgoodword[gi];

	    if (bc != gc)	
		break;
	    if (bc == NUL)	
	    {
		if (score < minscore)
		    minscore = score;
		goto pop;	
	    }
	    ++bi;
	    ++gi;
	}

	if (gc == NUL)    
	{
	    do
	    {
		if ((score += SCORE_DEL) >= minscore)
		    goto pop;	    
	    } while (wbadword[++bi] != NUL);
	    minscore = score;
	}
	else if (bc == NUL) 
	{
	    do
	    {
		if ((score += SCORE_INS) >= minscore)
		    goto pop;	    
	    } while (wgoodword[++gi] != NUL);
	    minscore = score;
	}
	else			
	{
	    
	    
	    
	    
	    for (round = 0; round <= 1; ++round)
	    {
		score_off = score + (round == 0 ? SCORE_DEL : SCORE_INS);
		if (score_off < minscore)
		{
		    if (score_off + SCORE_EDIT_MIN >= minscore)
		    {
			
			
			
			bi2 = bi + 1 - round;
			gi2 = gi + round;
			while (wgoodword[gi2] == wbadword[bi2])
			{
			    if (wgoodword[gi2] == NUL)
			    {
				minscore = score_off;
				break;
			    }
			    ++bi2;
			    ++gi2;
			}
		    }
		    else
		    {
			
			stack[stackidx].badi = bi + 1 - round;
			stack[stackidx].goodi = gi + round;
			stack[stackidx].score = score_off;
			++stackidx;
		    }
		}
	    }

	    if (score + SCORE_SWAP < minscore)
	    {
		
		
		
		if (gc == wbadword[bi + 1] && bc == wgoodword[gi + 1])
		{
		    
		    gi += 2;
		    bi += 2;
		    score += SCORE_SWAP;
		    continue;
		}
	    }

	    
	    
	    
	    if (SPELL_TOFOLD(bc) == SPELL_TOFOLD(gc))
		score += SCORE_ICASE;
	    else
	    {
		
		if (slang != NULL
			&& slang->sl_has_map
			&& similar_chars(slang, gc, bc))
		    score += SCORE_SIMILAR;
		else
		    score += SCORE_SUBST;
	    }

	    if (score < minscore)
	    {
		
		++gi;
		++bi;
		continue;
	    }
	}
pop:
	
	if (stackidx == 0)		
	    break;

	
	--stackidx;
	gi = stack[stackidx].goodi;
	bi = stack[stackidx].badi;
	score = stack[stackidx].score;
    }

    
    
    
    if (minscore > limit)
	return SCORE_MAXMAX;
    return minscore;
}
#endif  
