



#include "vim.h"

#if defined(FEAT_EVAL) || defined(PROTO)
static int debug_greedy = FALSE;	
					
static void do_setdebugtracelevel(char_u *arg);
static void do_checkbacktracelevel(void);
static void do_showbacktrace(char_u *cmd);

static char_u *debug_oldval = NULL;	
static char_u *debug_newval = NULL;
static int     debug_expr   = 0;	

    int
has_watchexpr(void)
{
    return debug_expr;
}


    void
do_debug(char_u *cmd)
{
    int		save_msg_scroll = msg_scroll;
    int		save_State = State;
    int		save_did_emsg = did_emsg;
    int		save_cmd_silent = cmd_silent;
    int		save_msg_silent = msg_silent;
    int		save_emsg_silent = emsg_silent;
    int		save_redir_off = redir_off;
    tasave_T	typeaheadbuf;
    int		typeahead_saved = FALSE;
    int		save_ignore_script = 0;
    int		save_ex_normal_busy;
    int		n;
    char_u	*cmdline = NULL;
    char_u	*p;
    char_u	*sname;
    char	*tail = NULL;
    static int	last_cmd = 0;
#define CMD_CONT	1
#define CMD_NEXT	2
#define CMD_STEP	3
#define CMD_FINISH	4
#define CMD_QUIT	5
#define CMD_INTERRUPT	6
#define CMD_BACKTRACE	7
#define CMD_FRAME	8
#define CMD_UP		9
#define CMD_DOWN	10

#ifdef ALWAYS_USE_GUI
    
    if (!gui.in_use)
    {
	
	debug_break_level = 9999;
	return;
    }
#endif

    
    
    settmode(TMODE_RAW);
    starttermcap();

    ++RedrawingDisabled;	
    ++no_wait_return;		
    did_emsg = FALSE;		
    cmd_silent = FALSE;		
    msg_silent = FALSE;		
    emsg_silent = FALSE;	
    redir_off = TRUE;		
    save_timeout_for_debugging();   

    State = MODE_NORMAL;
    debug_mode = TRUE;

    if (!debug_did_msg)
	msg(_("Entering Debug mode.  Type \"cont\" to continue."));
    if (debug_oldval != NULL)
    {
	smsg(_("Oldval = \"%s\""), debug_oldval);
	VIM_CLEAR(debug_oldval);
    }
    if (debug_newval != NULL)
    {
	smsg(_("Newval = \"%s\""), debug_newval);
	VIM_CLEAR(debug_newval);
    }
    sname = estack_sfile(ESTACK_NONE);
    if (sname != NULL)
	msg((char *)sname);
    vim_free(sname);
    if (SOURCING_LNUM != 0)
	smsg(_("line %ld: %s"), SOURCING_LNUM, cmd);
    else
	smsg(_("cmd: %s"), cmd);

    
    for (;;)
    {
	msg_scroll = TRUE;
	need_wait_return = FALSE;

	
	
	
	
	
	save_ex_normal_busy = ex_normal_busy;
	ex_normal_busy = 0;
	if (!debug_greedy)
	{
	    save_typeahead(&typeaheadbuf);
	    typeahead_saved = TRUE;
	    save_ignore_script = ignore_script;
	    ignore_script = TRUE;
	}

	
	n = debug_break_level;
	debug_break_level = -1;

	vim_free(cmdline);
	cmdline = getcmdline_prompt('>', NULL, 0, EXPAND_NOTHING, NULL);

	debug_break_level = n;
	if (typeahead_saved)
	{
	    restore_typeahead(&typeaheadbuf, TRUE);
	    ignore_script = save_ignore_script;
	}
	ex_normal_busy = save_ex_normal_busy;

	cmdline_row = msg_row;
	msg_starthere();
	if (cmdline != NULL)
	{
	    
	    
	    
	    p = skipwhite(cmdline);
	    if (*p != NUL)
	    {
		switch (*p)
		{
		    case 'c': last_cmd = CMD_CONT;
			      tail = "ont";
			      break;
		    case 'n': last_cmd = CMD_NEXT;
			      tail = "ext";
			      break;
		    case 's': last_cmd = CMD_STEP;
			      tail = "tep";
			      break;
		    case 'f':
			      last_cmd = 0;
			      if (p[1] == 'r')
			      {
				  last_cmd = CMD_FRAME;
				  tail = "rame";
			      }
			      else
			      {
				  last_cmd = CMD_FINISH;
				  tail = "inish";
			      }
			      break;
		    case 'q': last_cmd = CMD_QUIT;
			      tail = "uit";
			      break;
		    case 'i': last_cmd = CMD_INTERRUPT;
			      tail = "nterrupt";
			      break;
		    case 'b': last_cmd = CMD_BACKTRACE;
			      if (p[1] == 't')
				  tail = "t";
			      else
				  tail = "acktrace";
			      break;
		    case 'w': last_cmd = CMD_BACKTRACE;
			      tail = "here";
			      break;
		    case 'u': last_cmd = CMD_UP;
			      tail = "p";
			      break;
		    case 'd': last_cmd = CMD_DOWN;
			      tail = "own";
			      break;
		    default: last_cmd = 0;
		}
		if (last_cmd != 0)
		{
		    
		    ++p;
		    while (*p != NUL && *p == *tail)
		    {
			++p;
			++tail;
		    }
		    if (ASCII_ISALPHA(*p) && last_cmd != CMD_FRAME)
			last_cmd = 0;
		}
	    }

	    if (last_cmd != 0)
	    {
		
		
		switch (last_cmd)
		{
		    case CMD_CONT:
			debug_break_level = -1;
			break;
		    case CMD_NEXT:
			debug_break_level = ex_nesting_level;
			break;
		    case CMD_STEP:
			debug_break_level = 9999;
			break;
		    case CMD_FINISH:
			debug_break_level = ex_nesting_level - 1;
			break;
		    case CMD_QUIT:
			got_int = TRUE;
			debug_break_level = -1;
			break;
		    case CMD_INTERRUPT:
			got_int = TRUE;
			debug_break_level = 9999;
			
			last_cmd = CMD_STEP;
			break;
		    case CMD_BACKTRACE:
			do_showbacktrace(cmd);
			continue;
		    case CMD_FRAME:
			if (*p == NUL)
			{
			    do_showbacktrace(cmd);
			}
			else
			{
			    p = skipwhite(p);
			    do_setdebugtracelevel(p);
			}
			continue;
		    case CMD_UP:
			debug_backtrace_level++;
			do_checkbacktracelevel();
			continue;
		    case CMD_DOWN:
			debug_backtrace_level--;
			do_checkbacktracelevel();
			continue;
		}
		
		debug_backtrace_level = 0;
		break;
	    }

	    
	    n = debug_break_level;
	    debug_break_level = -1;
	    (void)do_cmdline(cmdline, getexline, NULL,
						DOCMD_VERBOSE|DOCMD_EXCRESET);
	    debug_break_level = n;
	}
	lines_left = Rows - 1;
    }
    vim_free(cmdline);

    if (RedrawingDisabled > 0)
	--RedrawingDisabled;
    --no_wait_return;
    redraw_all_later(UPD_NOT_VALID);
    need_wait_return = FALSE;
    msg_scroll = save_msg_scroll;
    restore_timeout_for_debugging();
    lines_left = Rows - 1;
    State = save_State;
    debug_mode = FALSE;
    did_emsg = save_did_emsg;
    cmd_silent = save_cmd_silent;
    msg_silent = save_msg_silent;
    emsg_silent = save_emsg_silent;
    redir_off = save_redir_off;

    
    
    debug_did_msg = TRUE;
}

    static int
get_maxbacktrace_level(char_u *sname)
{
    char	*p, *q;
    int		maxbacktrace = 0;

    if (sname == NULL)
	return 0;

    p = (char *)sname;
    while ((q = strstr(p, "..")) != NULL)
    {
	p = q + 2;
	maxbacktrace++;
    }
    return maxbacktrace;
}

    static void
do_setdebugtracelevel(char_u *arg)
{
    int level;

    level = atoi((char *)arg);
    if (*arg == '+' || level < 0)
	debug_backtrace_level += level;
    else
	debug_backtrace_level = level;

    do_checkbacktracelevel();
}

    static void
do_checkbacktracelevel(void)
{
    if (debug_backtrace_level < 0)
    {
	debug_backtrace_level = 0;
	msg(_("frame is zero"));
    }
    else
    {
	char_u	*sname = estack_sfile(ESTACK_NONE);
	int	max = get_maxbacktrace_level(sname);

	if (debug_backtrace_level > max)
	{
	    debug_backtrace_level = max;
	    smsg(_("frame at highest level: %d"), max);
	}
	vim_free(sname);
    }
}

    static void
do_showbacktrace(char_u *cmd)
{
    char_u  *sname;
    char    *cur;
    char    *next;
    int	    i = 0;
    int	    max;

    sname = estack_sfile(ESTACK_NONE);
    max = get_maxbacktrace_level(sname);
    if (sname != NULL)
    {
	cur = (char *)sname;
	while (!got_int)
	{
	    next = strstr(cur, "..");
	    if (next != NULL)
		*next = NUL;
	    if (i == max - debug_backtrace_level)
		smsg("->%d %s", max - i, cur);
	    else
		smsg("  %d %s", max - i, cur);
	    ++i;
	    if (next == NULL)
		break;
	    *next = '.';
	    cur = next + 2;
	}
	vim_free(sname);
    }

    if (SOURCING_LNUM != 0)
       smsg(_("line %ld: %s"), (int)SOURCING_LNUM, cmd);
    else
       smsg(_("cmd: %s"), cmd);
}


    void
ex_debug(exarg_T *eap)
{
    int		debug_break_level_save = debug_break_level;

    debug_break_level = 9999;
    do_cmdline_cmd(eap->arg);
    debug_break_level = debug_break_level_save;
}

static char_u	*debug_breakpoint_name = NULL;
static linenr_T	debug_breakpoint_lnum;


static int	debug_skipped;
static char_u	*debug_skipped_name;


    void
dbg_check_breakpoint(exarg_T *eap)
{
    char_u	*p;

    debug_skipped = FALSE;
    if (debug_breakpoint_name != NULL)
    {
	if (!eap->skip)
	{
	    
	    if (debug_breakpoint_name[0] == K_SPECIAL
		    && debug_breakpoint_name[1] == KS_EXTRA
		    && debug_breakpoint_name[2] == KE_SNR)
		p = (char_u *)"<SNR>";
	    else
		p = (char_u *)"";
	    smsg(_("Breakpoint in \"%s%s\" line %ld"),
		    p,
		    debug_breakpoint_name + (*p == NUL ? 0 : 3),
		    (int)debug_breakpoint_lnum);
	    debug_breakpoint_name = NULL;
	    do_debug(eap->cmd);
	}
	else
	{
	    debug_skipped = TRUE;
	    debug_skipped_name = debug_breakpoint_name;
	    debug_breakpoint_name = NULL;
	}
    }
    else if (ex_nesting_level <= debug_break_level)
    {
	if (!eap->skip)
	    do_debug(eap->cmd);
	else
	{
	    debug_skipped = TRUE;
	    debug_skipped_name = NULL;
	}
    }
}


    int
dbg_check_skipped(exarg_T *eap)
{
    int		prev_got_int;

    if (!debug_skipped)
	return FALSE;

    
    
    prev_got_int = got_int;
    got_int = FALSE;
    debug_breakpoint_name = debug_skipped_name;
    
    eap->skip = FALSE;
    (void)dbg_check_breakpoint(eap);
    eap->skip = TRUE;
    got_int |= prev_got_int;
    return TRUE;
}


struct debuggy
{
    int		dbg_nr;		
    int		dbg_type;	
    char_u	*dbg_name;	
    regprog_T	*dbg_prog;	
    linenr_T	dbg_lnum;	
    int		dbg_forceit;	
#ifdef FEAT_EVAL
    typval_T    *dbg_val;       
#endif
    int		dbg_level;      
};

static garray_T dbg_breakp = {0, 0, sizeof(struct debuggy), 4, NULL};
#define BREAKP(idx)		(((struct debuggy *)dbg_breakp.ga_data)[idx])
#define DEBUGGY(gap, idx)	(((struct debuggy *)gap->ga_data)[idx])
static int last_breakp = 0;	
static int has_expr_breakpoint = FALSE;

#ifdef FEAT_PROFILE

static garray_T prof_ga = {0, 0, sizeof(struct debuggy), 4, NULL};


#define N_PROF_HTAB 2
static hashtab_T prof_cache[N_PROF_HTAB];
#define PROF_HTAB_FUNCS 0
#define PROF_HTAB_FILES 1
static int prof_cache_initialized;
typedef struct profentry_S
{
    char    pen_flags;	
    char_u  pen_name[1]; 
} profentry_T;
#define PEN_FLAG_PROFILING 1
#define PEN_FLAG_FORCEIT 2
#define PEN_SET_PROFILING(pe) ((pe)->pen_flags |= PEN_FLAG_PROFILING)
#define PEN_SET_FORCEIT(pe) ((pe)->pen_flags |= PEN_FLAG_FORCEIT)
#define PEN_IS_PROFILING(pe) (((pe)->pen_flags & PEN_FLAG_PROFILING) != 0)
#define PEN_IS_FORCEIT(pe) (((pe)->pen_flags & PEN_FLAG_FORCEIT) != 0)

#define PE2HIKEY(pe)	((pe)->pen_name)
#define HIKEY2PE(p)	((profentry_T *)((p) - (offsetof(profentry_T, pen_name))))
#define HI2PE(hi)	HIKEY2PE((hi)->hi_key)

static void prof_clear_cache(void);
#define PROF_CLEAR_CACHE(gap) do {if ((gap) == &prof_ga) prof_clear_cache();} while (0)


#else
#define PROF_CLEAR_CACHE(gap) do {} while (0)
#endif
#define DBG_FUNC	1
#define DBG_FILE	2
#define DBG_EXPR	3

static linenr_T debuggy_find(int file,char_u *fname, linenr_T after, garray_T *gap, int *fp);


    static typval_T *
eval_expr_no_emsg(struct debuggy *bp)
{
    typval_T	*tv;

    
    ++emsg_off;
    tv = eval_expr(bp->dbg_name, NULL);
    --emsg_off;

    return tv;
}


    static int
dbg_parsearg(
    char_u	*arg,
    garray_T	*gap)	    
{
    char_u	*p = arg;
    char_u	*q;
    struct debuggy *bp;
    int		here = FALSE;

    if (ga_grow(gap, 1) == FAIL)
	return FAIL;
    bp = &DEBUGGY(gap, gap->ga_len);

    
    if (STRNCMP(p, "func", 4) == 0)
	bp->dbg_type = DBG_FUNC;
    else if (STRNCMP(p, "file", 4) == 0)
	bp->dbg_type = DBG_FILE;
    else if (
#ifdef FEAT_PROFILE
	    gap != &prof_ga &&
#endif
	    STRNCMP(p, "here", 4) == 0)
    {
	if (curbuf->b_ffname == NULL)
	{
	    emsg(_(e_no_file_name));
	    return FAIL;
	}
	bp->dbg_type = DBG_FILE;
	here = TRUE;
    }
    else if (
#ifdef FEAT_PROFILE
	    gap != &prof_ga &&
#endif
	    STRNCMP(p, "expr", 4) == 0)
	bp->dbg_type = DBG_EXPR;
    else
    {
	semsg(_(e_invalid_argument_str), p);
	return FAIL;
    }
    p = skipwhite(p + 4);

    
    if (here)
	bp->dbg_lnum = curwin->w_cursor.lnum;
    else if (
#ifdef FEAT_PROFILE
	    gap != &prof_ga &&
#endif
	    VIM_ISDIGIT(*p))
    {
	bp->dbg_lnum = getdigits(&p);
	p = skipwhite(p);
    }
    else
	bp->dbg_lnum = 0;

    
    if ((!here && *p == NUL)
	    || (here && *p != NUL)
	    || (bp->dbg_type == DBG_FUNC && strstr((char *)p, "()") != NULL))
    {
	semsg(_(e_invalid_argument_str), arg);
	return FAIL;
    }

    if (bp->dbg_type == DBG_FUNC)
	bp->dbg_name = vim_strsave(STRNCMP(p, "g:", 2) == 0 ? p + 2 : p);
    else if (here)
	bp->dbg_name = vim_strsave(curbuf->b_ffname);
    else if (bp->dbg_type == DBG_EXPR)
    {
	bp->dbg_name = vim_strsave(p);
	if (bp->dbg_name != NULL)
	    bp->dbg_val = eval_expr_no_emsg(bp);
    }
    else
    {
	
	
	
	q = expand_env_save(p);
	if (q == NULL)
	    return FAIL;
	p = expand_env_save(q);
	vim_free(q);
	if (p == NULL)
	    return FAIL;
	if (*p != '*')
	{
	    bp->dbg_name = fix_fname(p);
	    vim_free(p);
	}
	else
	    bp->dbg_name = p;
    }

    if (bp->dbg_name == NULL)
	return FAIL;
    return OK;
}


    void
ex_breakadd(exarg_T *eap)
{
    struct debuggy *bp;
    char_u	*pat;
    garray_T	*gap;

    gap = &dbg_breakp;
#ifdef FEAT_PROFILE
    if (eap->cmdidx == CMD_profile)
	gap = &prof_ga;
#endif

    if (dbg_parsearg(eap->arg, gap) != OK)
	return;

    bp = &DEBUGGY(gap, gap->ga_len);
    bp->dbg_forceit = eap->forceit;

    if (bp->dbg_type != DBG_EXPR)
    {
	pat = file_pat_to_reg_pat(bp->dbg_name, NULL, NULL, FALSE);
	if (pat != NULL)
	{
	    bp->dbg_prog = vim_regcomp(pat, RE_MAGIC + RE_STRING);
	    vim_free(pat);
	}
	if (pat == NULL || bp->dbg_prog == NULL)
	    vim_free(bp->dbg_name);
	else
	{
	    if (bp->dbg_lnum == 0)	
		bp->dbg_lnum = 1;
#ifdef FEAT_PROFILE
	    if (eap->cmdidx != CMD_profile)
#endif
	    {
		DEBUGGY(gap, gap->ga_len).dbg_nr = ++last_breakp;
		++debug_tick;
	    }
	    ++gap->ga_len;
	    PROF_CLEAR_CACHE(gap);
	}
    }
    else
    {
	
	DEBUGGY(gap, gap->ga_len++).dbg_nr = ++last_breakp;
	++debug_tick;
	if (gap == &dbg_breakp)
	    has_expr_breakpoint = TRUE;
    }
}


    void
ex_debuggreedy(exarg_T *eap)
{
    if (eap->addr_count == 0 || eap->line2 != 0)
	debug_greedy = TRUE;
    else
	debug_greedy = FALSE;
}

    static void
update_has_expr_breakpoint(void)
{
    int i;

    has_expr_breakpoint = FALSE;
    for (i = 0; i < dbg_breakp.ga_len; ++i)
	if (BREAKP(i).dbg_type == DBG_EXPR)
	{
	    has_expr_breakpoint = TRUE;
	    break;
	}
}


    int
debug_has_expr_breakpoint(void)
{
    return has_expr_breakpoint;
}


    void
ex_breakdel(exarg_T *eap)
{
    struct debuggy *bp, *bpi;
    int		nr;
    int		todel = -1;
    int		del_all = FALSE;
    int		i;
    linenr_T	best_lnum = 0;
    garray_T	*gap;

    gap = &dbg_breakp;
    if (eap->cmdidx == CMD_profdel)
    {
#ifdef FEAT_PROFILE
	gap = &prof_ga;
#else
	ex_ni(eap);
	return;
#endif
    }

    if (vim_isdigit(*eap->arg))
    {
	
	nr = atol((char *)eap->arg);
	for (i = 0; i < gap->ga_len; ++i)
	    if (DEBUGGY(gap, i).dbg_nr == nr)
	    {
		todel = i;
		break;
	    }
    }
    else if (*eap->arg == '*')
    {
	todel = 0;
	del_all = TRUE;
    }
    else
    {
	
	if (dbg_parsearg(eap->arg, gap) == FAIL)
	    return;
	bp = &DEBUGGY(gap, gap->ga_len);
	for (i = 0; i < gap->ga_len; ++i)
	{
	    bpi = &DEBUGGY(gap, i);
	    if (bp->dbg_type == bpi->dbg_type
		    && STRCMP(bp->dbg_name, bpi->dbg_name) == 0
		    && (bp->dbg_lnum == bpi->dbg_lnum
			|| (bp->dbg_lnum == 0
			    && (best_lnum == 0
				|| bpi->dbg_lnum < best_lnum))))
	    {
		todel = i;
		best_lnum = bpi->dbg_lnum;
	    }
	}
	vim_free(bp->dbg_name);
    }

    if (todel < 0)
    {
	semsg(_(e_breakpoint_not_found_str), eap->arg);
	return;
    }

    while (gap->ga_len > 0)
    {
	vim_free(DEBUGGY(gap, todel).dbg_name);
#ifdef FEAT_EVAL
	if (DEBUGGY(gap, todel).dbg_type == DBG_EXPR
		&& DEBUGGY(gap, todel).dbg_val != NULL)
	    free_tv(DEBUGGY(gap, todel).dbg_val);
#endif
	vim_regfree(DEBUGGY(gap, todel).dbg_prog);
	--gap->ga_len;
	if (todel < gap->ga_len)
	    mch_memmove(&DEBUGGY(gap, todel), &DEBUGGY(gap, todel + 1),
		    (gap->ga_len - todel) * sizeof(struct debuggy));
#ifdef FEAT_PROFILE
	if (eap->cmdidx == CMD_breakdel)
#endif
	    ++debug_tick;
	if (!del_all)
	    break;
    }
    PROF_CLEAR_CACHE(gap);

    
    if (gap->ga_len == 0)
	ga_clear(gap);
    if (gap == &dbg_breakp)
	update_has_expr_breakpoint();
}


    void
ex_breaklist(exarg_T *eap UNUSED)
{
    struct debuggy *bp;
    int		i;

    if (dbg_breakp.ga_len == 0)
    {
	msg(_("No breakpoints defined"));
	return;
    }

    for (i = 0; i < dbg_breakp.ga_len; ++i)
    {
	bp = &BREAKP(i);
	if (bp->dbg_type == DBG_FILE)
	    home_replace(NULL, bp->dbg_name, NameBuff, MAXPATHL, TRUE);
	if (bp->dbg_type != DBG_EXPR)
	    smsg(_("%3d  %s %s  line %ld"),
		    bp->dbg_nr,
		    bp->dbg_type == DBG_FUNC ? "func" : "file",
		    bp->dbg_type == DBG_FUNC ? bp->dbg_name : NameBuff,
		    (int)bp->dbg_lnum);
	else
	    smsg(_("%3d  expr %s"),
		    bp->dbg_nr, bp->dbg_name);
    }
}


    linenr_T
dbg_find_breakpoint(
    int		file,	    
    char_u	*fname,	    
    linenr_T	after)	    
{
    return debuggy_find(file, fname, after, &dbg_breakp, NULL);
}

#if defined(FEAT_PROFILE) || defined(PROTO)
#if defined(PROF_CACHE_LOG)
static int count_lookups[2];
#endif

    int
has_profiling(
    int		file,	    
    char_u	*fname,	    
    int		*fp,	    
    hash_T	*hashp)	    
{
    if (prof_ga.ga_len == 0 || !prof_cache_initialized)
	return debuggy_find(file, fname, (linenr_T)0, &prof_ga, fp)
							     != (linenr_T)0;

    hash_T hash;
    if (hashp != NULL)
    {
	hash = *hashp;
	if (hash == 0)
	{
	    hash = hash_hash(fname);
	    *hashp = hash;
	}
    }
    else
	hash = hash_hash(fname);

    hashtab_T *ht = &prof_cache[file ? PROF_HTAB_FILES : PROF_HTAB_FUNCS];
    hashitem_T *hi = hash_lookup(ht, fname, hash);
    profentry_T *pe;
    if (HASHITEM_EMPTY(hi))
    {
	pe = alloc(offsetof(profentry_T, pen_name) + STRLEN(fname) + 1);
	if (pe == NULL)
	    return FALSE;
	STRCPY(pe->pen_name, fname);
	pe->pen_flags = 0;
	
	int f;
	int lnum = debuggy_find(file, fname, (linenr_T)0, &prof_ga, &f);
	if (lnum)
	{
	    PEN_SET_PROFILING(pe);
	    if (f)
		PEN_SET_FORCEIT(pe);
	}
	hash_add_item(ht, hi, pe->pen_name, hash);
#if defined(PROF_CACHE_LOG)
	ch_log(NULL, "has_profiling: %s %s forceit %s, profile %s",
	       file ? "file" : "func", fname,
	       PEN_IS_FORCEIT(pe) ? "true" : "false",
	       PEN_IS_PROFILING(pe) ? "true" : "false");
#endif
    }
    else
	pe = HI2PE(hi);
    if (fp)
	*fp = PEN_IS_FORCEIT(pe);
#if defined(PROF_CACHE_LOG)
    count_lookups[file ? PROF_HTAB_FILES : PROF_HTAB_FUNCS]++;
#endif
    return PEN_IS_PROFILING(pe);
}

    static void
prof_clear_cache(void)
{
    if (!prof_cache_initialized)
    {
	hash_init(&prof_cache[PROF_HTAB_FUNCS]);
	hash_init(&prof_cache[PROF_HTAB_FILES]);
	prof_cache_initialized = TRUE;
    }

    hashtab_T *ht;
    for (ht = &prof_cache[0]; ht < &prof_cache[N_PROF_HTAB]; ht++)
    {
	if (ht->ht_used > 0)
	{
#if defined(PROF_CACHE_LOG)
	    int idx = ht == &prof_cache[PROF_HTAB_FUNCS]
		      ? PROF_HTAB_FUNCS : PROF_HTAB_FILES;
	    ch_log(NULL, "prof_clear_cache: %s, used: %ld, lookups: %d",
		   idx == PROF_HTAB_FUNCS ? "function" : "script",
		   ht->ht_used, count_lookups[idx]);
	    count_lookups[idx] = 0;
#endif
	    hash_clear_all(ht, offsetof(profentry_T, pen_name));
	    hash_init(ht);
	}
    }
}
#endif


    static linenr_T
debuggy_find(
    int		is_file,    
    char_u	*fname,	    
    linenr_T	after,	    
    garray_T	*gap,	    
    int		*fp)	    
{
    struct debuggy *bp;
    int		i;
    linenr_T	lnum = 0;
    char_u	*name = NULL;
    char_u	*short_name = fname;
    int		prev_got_int;

    
    if (gap->ga_len == 0)
	return (linenr_T)0;

    
    
    
    
    
    
    if (!is_file && fname[0] == K_SPECIAL)
    {
	short_name = vim_strchr(fname, '_') + 1;
	name = alloc(STRLEN(fname) + 3);
	if (name != NULL)
	{
	    STRCPY(name, "<SNR>");
	    STRCPY(name + 5, fname + 3);
	}
    }

    for (i = 0; i < gap->ga_len; ++i)
    {
	
	
	bp = &DEBUGGY(gap, i);
	if (((bp->dbg_type == DBG_FILE) == is_file
		    && bp->dbg_type != DBG_EXPR && (
#ifdef FEAT_PROFILE
		gap == &prof_ga ||
#endif
		(bp->dbg_lnum > after && (lnum == 0 || bp->dbg_lnum < lnum)))))
	{
	    
	    
	    
	    prev_got_int = got_int;
	    got_int = FALSE;
	    if ((name != NULL
		   && vim_regexec_prog(&bp->dbg_prog, FALSE, name, (colnr_T)0))
		    || vim_regexec_prog(&bp->dbg_prog, FALSE,
						       short_name, (colnr_T)0))
	    {
		lnum = bp->dbg_lnum;
		if (fp != NULL)
		    *fp = bp->dbg_forceit;
	    }
	    got_int |= prev_got_int;
#ifdef FEAT_PROFILE
	    if (lnum && gap == &prof_ga)
		break;
#endif
	}
#ifdef FEAT_EVAL
	else if (bp->dbg_type == DBG_EXPR)
	{
	    typval_T *tv;
	    int	      line = FALSE;

	    tv = eval_expr_no_emsg(bp);
	    if (tv != NULL)
	    {
		if (bp->dbg_val == NULL)
		{
		    debug_oldval = typval_tostring(NULL, TRUE);
		    bp->dbg_val = tv;
		    debug_newval = typval_tostring(bp->dbg_val, TRUE);
		    line = TRUE;
		}
		else
		{
		    
		    
		    exprtype_T	type = tv->v_type == VAR_STRING
							? EXPR_EQUAL : EXPR_IS;

		    if (typval_compare(tv, bp->dbg_val, type, FALSE) == OK
			    && tv->vval.v_number == FALSE)
		    {
			typval_T *v;

			line = TRUE;
			debug_oldval = typval_tostring(bp->dbg_val, TRUE);
			
			
			v = eval_expr_no_emsg(bp);
			debug_newval = typval_tostring(v, TRUE);
			free_tv(bp->dbg_val);
			bp->dbg_val = v;
		    }
		    free_tv(tv);
		}
	    }
	    else if (bp->dbg_val != NULL)
	    {
		debug_oldval = typval_tostring(bp->dbg_val, TRUE);
		debug_newval = typval_tostring(NULL, TRUE);
		free_tv(bp->dbg_val);
		bp->dbg_val = NULL;
		line = TRUE;
	    }

	    if (line)
	    {
		lnum = after > 0 ? after : 1;
		break;
	    }
	}
#endif
    }
    if (name != fname)
	vim_free(name);

    return lnum;
}


    void
dbg_breakpoint(char_u *name, linenr_T lnum)
{
    
    debug_breakpoint_name = name;
    debug_breakpoint_lnum = lnum;
}
#endif