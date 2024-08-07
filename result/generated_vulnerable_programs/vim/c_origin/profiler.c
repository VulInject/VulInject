



#include "vim.h"

#if defined(FEAT_EVAL) || defined(PROTO)
# if defined(FEAT_PROFILE) || defined(FEAT_RELTIME) || defined(PROTO)

    void
profile_start(proftime_T *tm)
{
# ifdef MSWIN
    QueryPerformanceCounter(tm);
# else
    PROF_GET_TIME(tm);
# endif
}


    void
profile_end(proftime_T *tm)
{
    proftime_T now;

# ifdef MSWIN
    QueryPerformanceCounter(&now);
    tm->QuadPart = now.QuadPart - tm->QuadPart;
# else
    PROF_GET_TIME(&now);
    tm->tv_fsec = now.tv_fsec - tm->tv_fsec;
    tm->tv_sec = now.tv_sec - tm->tv_sec;
    if (tm->tv_fsec < 0)
    {
	tm->tv_fsec += TV_FSEC_SEC;
	--tm->tv_sec;
    }
# endif
}


    void
profile_sub(proftime_T *tm, proftime_T *tm2)
{
# ifdef MSWIN
    tm->QuadPart -= tm2->QuadPart;
# else
    tm->tv_fsec -= tm2->tv_fsec;
    tm->tv_sec -= tm2->tv_sec;
    if (tm->tv_fsec < 0)
    {
	tm->tv_fsec += TV_FSEC_SEC;
	--tm->tv_sec;
    }
# endif
}


    char *
profile_msg(proftime_T *tm)
{
    static char buf[50];

# ifdef MSWIN
    LARGE_INTEGER   fr;

    QueryPerformanceFrequency(&fr);
    sprintf(buf, "%10.6lf", (double)tm->QuadPart / (double)fr.QuadPart);
# else
    sprintf(buf, PROF_TIME_FORMAT, (int)tm->tv_sec, (int)tm->tv_fsec);
# endif
    return buf;
}


    float_T
profile_float(proftime_T *tm)
{
# ifdef MSWIN
    LARGE_INTEGER   fr;

    QueryPerformanceFrequency(&fr);
    return (float_T)tm->QuadPart / (float_T)fr.QuadPart;
# else
    return (float_T)tm->tv_sec + (float_T)tm->tv_fsec / (float_T)TV_FSEC_SEC;
# endif
}


    void
profile_setlimit(int msec, proftime_T *tm)
{
    if (msec <= 0)   
	profile_zero(tm);
    else
    {
# ifdef MSWIN
	LARGE_INTEGER   fr;

	QueryPerformanceCounter(tm);
	QueryPerformanceFrequency(&fr);
	tm->QuadPart += (LONGLONG)((double)msec / 1000.0 * (double)fr.QuadPart);
# else
	varnumber_T	    fsec;	

	PROF_GET_TIME(tm);
	fsec = (varnumber_T)tm->tv_fsec
		       + (varnumber_T)msec * (varnumber_T)(TV_FSEC_SEC / 1000);
	tm->tv_fsec = fsec % (int)TV_FSEC_SEC;
	tm->tv_sec += fsec / (int)TV_FSEC_SEC;
# endif
    }
}


    int
profile_passed_limit(proftime_T *tm)
{
    proftime_T	now;

# ifdef MSWIN
    if (tm->QuadPart == 0)  
	return FALSE;
    QueryPerformanceCounter(&now);
    return (now.QuadPart > tm->QuadPart);
# else
    if (tm->tv_sec == 0)    
	return FALSE;
    PROF_GET_TIME(&now);
    return (now.tv_sec > tm->tv_sec
	    || (now.tv_sec == tm->tv_sec && now.tv_fsec > tm->tv_fsec));
# endif
}


    void
profile_zero(proftime_T *tm)
{
# ifdef MSWIN
    tm->QuadPart = 0;
# else
    tm->tv_fsec = 0;
    tm->tv_sec = 0;
# endif
}

# endif  

#if defined(FEAT_SYN_HL) && defined(FEAT_RELTIME) && defined(FEAT_PROFILE)
# if defined(HAVE_MATH_H)
#  include <math.h>
# endif


    void
profile_divide(proftime_T *tm, int count, proftime_T *tm2)
{
    if (count == 0)
	profile_zero(tm2);
    else
    {
# ifdef MSWIN
	tm2->QuadPart = tm->QuadPart / count;
# else
	double fsec = (tm->tv_sec * (float_T)TV_FSEC_SEC + tm->tv_fsec)
								       / count;

	tm2->tv_sec = floor(fsec / (float_T)TV_FSEC_SEC);
	tm2->tv_fsec = vim_round(fsec - (tm2->tv_sec * (float_T)TV_FSEC_SEC));
# endif
    }
}
#endif

# if defined(FEAT_PROFILE) || defined(PROTO)

static proftime_T prof_wait_time;


    void
profile_add(proftime_T *tm, proftime_T *tm2)
{
# ifdef MSWIN
    tm->QuadPart += tm2->QuadPart;
# else
    tm->tv_fsec += tm2->tv_fsec;
    tm->tv_sec += tm2->tv_sec;
    if (tm->tv_fsec >= TV_FSEC_SEC)
    {
	tm->tv_fsec -= TV_FSEC_SEC;
	++tm->tv_sec;
    }
# endif
}


    void
profile_self(proftime_T *self, proftime_T *total, proftime_T *children)
{
    
    
#ifdef MSWIN
    if (total->QuadPart <= children->QuadPart)
	return;
#else
    if (total->tv_sec < children->tv_sec
	    || (total->tv_sec == children->tv_sec
		&& total->tv_fsec <= children->tv_fsec))
	return;
#endif
    profile_add(self, total);
    profile_sub(self, children);
}


    static void
profile_get_wait(proftime_T *tm)
{
    *tm = prof_wait_time;
}


    void
profile_sub_wait(proftime_T *tm, proftime_T *tma)
{
    proftime_T tm3 = prof_wait_time;

    profile_sub(&tm3, tm);
    profile_sub(tma, &tm3);
}


    static int
profile_equal(proftime_T *tm1, proftime_T *tm2)
{
# ifdef MSWIN
    return (tm1->QuadPart == tm2->QuadPart);
# else
    return (tm1->tv_fsec == tm2->tv_fsec && tm1->tv_sec == tm2->tv_sec);
# endif
}


    int
profile_cmp(const proftime_T *tm1, const proftime_T *tm2)
{
# ifdef MSWIN
    return tm2->QuadPart == tm1->QuadPart ? 0 :
	tm2->QuadPart > tm1->QuadPart ? 1 : -1;
# else
    if (tm1->tv_sec == tm2->tv_sec)
	return tm2->tv_fsec == tm1->tv_fsec ? 0 :
	    tm2->tv_fsec > tm1->tv_fsec ? 1 : -1;
    return tm2->tv_sec > tm1->tv_sec ? 1 : -1;
# endif
}

static char_u	*profile_fname = NULL;
static proftime_T pause_time;


    static void
profile_reset(void)
{
    int		id;
    int		todo;
    hashtab_T	*functbl;
    hashitem_T	*hi;

    
    for (id = 1; id <= script_items.ga_len; id++)
    {
	scriptitem_T *si = SCRIPT_ITEM(id);
	if (si->sn_prof_on)
	{
	    si->sn_prof_on      = FALSE;
	    si->sn_pr_force     = FALSE;
	    profile_zero(&si->sn_pr_child);
	    si->sn_pr_nest      = 0;
	    si->sn_pr_count     = 0;
	    profile_zero(&si->sn_pr_total);
	    profile_zero(&si->sn_pr_self);
	    profile_zero(&si->sn_pr_start);
	    profile_zero(&si->sn_pr_children);
	    ga_clear(&si->sn_prl_ga);
	    profile_zero(&si->sn_prl_start);
	    profile_zero(&si->sn_prl_children);
	    profile_zero(&si->sn_prl_wait);
	    si->sn_prl_idx      = -1;
	    si->sn_prl_execed   = 0;
	}
    }

    
    functbl = func_tbl_get();
    todo = (int)functbl->ht_used;

    FOR_ALL_HASHTAB_ITEMS(functbl, hi, todo)
    {
	ufunc_T *fp;
	int	i;

	if (HASHITEM_EMPTY(hi))
	    continue;

	todo--;
	fp = HI2UF(hi);
	if (fp->uf_prof_initialized)
	{
	    fp->uf_profiling    = 0;
	    fp->uf_prof_initialized = FALSE;
	    fp->uf_tm_count     = 0;
	    profile_zero(&fp->uf_tm_total);
	    profile_zero(&fp->uf_tm_self);
	    profile_zero(&fp->uf_tm_children);

	    for (i = 0; i < fp->uf_lines.ga_len; i++)
	    {
		fp->uf_tml_count[i] = 0;
		profile_zero(&fp->uf_tml_total[i]);
		profile_zero(&fp->uf_tml_self[i]);
	    }

	    profile_zero(&fp->uf_tml_start);
	    profile_zero(&fp->uf_tml_children);
	    profile_zero(&fp->uf_tml_wait);
	    fp->uf_tml_idx      = -1;
	    fp->uf_tml_execed   = 0;
	}
    }

    VIM_CLEAR(profile_fname);
}


    void
ex_profile(exarg_T *eap)
{
    char_u	*e;
    int		len;

    e = skiptowhite(eap->arg);
    len = (int)(e - eap->arg);
    e = skipwhite(e);

    if (len == 5 && STRNCMP(eap->arg, "start", 5) == 0 && *e != NUL)
    {
	VIM_CLEAR(profile_fname);
	profile_fname = expand_env_save_opt(e, TRUE);
	do_profiling = PROF_YES;
	profile_zero(&prof_wait_time);
	set_vim_var_nr(VV_PROFILING, 1L);
    }
    else if (do_profiling == PROF_NONE)
	emsg(_(e_first_use_profile_start_fname));
    else if (STRCMP(eap->arg, "stop") == 0)
    {
	profile_dump();
	do_profiling = PROF_NONE;
	set_vim_var_nr(VV_PROFILING, 0L);
	profile_reset();
    }
    else if (STRCMP(eap->arg, "pause") == 0)
    {
	if (do_profiling == PROF_YES)
	    profile_start(&pause_time);
	do_profiling = PROF_PAUSED;
    }
    else if (STRCMP(eap->arg, "continue") == 0)
    {
	if (do_profiling == PROF_PAUSED)
	{
	    profile_end(&pause_time);
	    profile_add(&prof_wait_time, &pause_time);
	}
	do_profiling = PROF_YES;
    }
    else if (STRCMP(eap->arg, "dump") == 0)
	profile_dump();
    else
    {
	
	ex_breakadd(eap);
    }
}


static enum
{
    PEXP_SUBCMD,	
    PEXP_FUNC		
} pexpand_what;

static char *pexpand_cmds[] = {
			"start",
			"stop",
			"pause",
			"continue",
			"func",
			"file",
			"dump",
			NULL
};


    char_u *
get_profile_name(expand_T *xp UNUSED, int idx)
{
    switch (pexpand_what)
    {
    case PEXP_SUBCMD:
	return (char_u *)pexpand_cmds[idx];
    default:
	return NULL;
    }
}


    void
set_context_in_profile_cmd(expand_T *xp, char_u *arg)
{
    char_u	*end_subcmd;

    
    xp->xp_context = EXPAND_PROFILE;
    pexpand_what = PEXP_SUBCMD;
    xp->xp_pattern = arg;

    end_subcmd = skiptowhite(arg);
    if (*end_subcmd == NUL)
	return;

    if ((end_subcmd - arg == 5 && STRNCMP(arg, "start", 5) == 0)
	    || (end_subcmd - arg == 4 && STRNCMP(arg, "file", 4) == 0))
    {
	xp->xp_context = EXPAND_FILES;
	xp->xp_pattern = skipwhite(end_subcmd);
	return;
    }
    else if (end_subcmd - arg == 4 && STRNCMP(arg, "func", 4) == 0)
    {
	xp->xp_context = EXPAND_USER_FUNC;
	xp->xp_pattern = skipwhite(end_subcmd);
	return;
    }

    xp->xp_context = EXPAND_NOTHING;
}

static proftime_T inchar_time;


    void
prof_inchar_enter(void)
{
    profile_start(&inchar_time);
}


    void
prof_inchar_exit(void)
{
    profile_end(&inchar_time);
    profile_add(&prof_wait_time, &inchar_time);
}



    int
prof_def_func(void)
{
    if (current_sctx.sc_sid > 0)
	return SCRIPT_ITEM(current_sctx.sc_sid)->sn_pr_force;
    return FALSE;
}


    static void
prof_func_line(
    FILE	*fd,
    int		count,
    proftime_T	*total,
    proftime_T	*self,
    int		prefer_self)	
{
    if (count > 0)
    {
	fprintf(fd, "%5d ", count);
	if (prefer_self && profile_equal(total, self))
	    fprintf(fd, PROF_TIME_BLANK);
	else
	    fprintf(fd, "%s ", profile_msg(total));
	if (!prefer_self && profile_equal(total, self))
	    fprintf(fd, PROF_TIME_BLANK);
	else
	    fprintf(fd, "%s ", profile_msg(self));
    }
    else
	fprintf(fd, "      %s%s", PROF_TIME_BLANK, PROF_TIME_BLANK);
}

    static void
prof_sort_list(
    FILE	*fd,
    ufunc_T	**sorttab,
    int		st_len,
    char	*title,
    int		prefer_self)	
{
    int		i;
    ufunc_T	*fp;

    fprintf(fd, "FUNCTIONS SORTED ON %s TIME\n", title);
    fprintf(fd, "%s  function\n", PROF_TOTALS_HEADER);
    for (i = 0; i < 20 && i < st_len; ++i)
    {
	fp = sorttab[i];
	prof_func_line(fd, fp->uf_tm_count, &fp->uf_tm_total, &fp->uf_tm_self,
								 prefer_self);
	if (fp->uf_name[0] == K_SPECIAL)
	    fprintf(fd, " <SNR>%s()\n", fp->uf_name + 3);
	else
	    fprintf(fd, " %s()\n", fp->uf_name);
    }
    fprintf(fd, "\n");
}


    static int
prof_total_cmp(const void *s1, const void *s2)
{
    ufunc_T	*p1, *p2;

    p1 = *(ufunc_T **)s1;
    p2 = *(ufunc_T **)s2;
    return profile_cmp(&p1->uf_tm_total, &p2->uf_tm_total);
}


    static int
prof_self_cmp(const void *s1, const void *s2)
{
    ufunc_T	*p1, *p2;

    p1 = *(ufunc_T **)s1;
    p2 = *(ufunc_T **)s2;
    return profile_cmp(&p1->uf_tm_self, &p2->uf_tm_self);
}


    void
func_do_profile(ufunc_T *fp)
{
    int		len = fp->uf_lines.ga_len;

    if (!fp->uf_prof_initialized)
    {
	if (len == 0)
	    len = 1;  
	fp->uf_tm_count = 0;
	profile_zero(&fp->uf_tm_self);
	profile_zero(&fp->uf_tm_total);
	if (fp->uf_tml_count == NULL)
	    fp->uf_tml_count = ALLOC_CLEAR_MULT(int, len);
	if (fp->uf_tml_total == NULL)
	    fp->uf_tml_total = ALLOC_CLEAR_MULT(proftime_T, len);
	if (fp->uf_tml_self == NULL)
	    fp->uf_tml_self = ALLOC_CLEAR_MULT(proftime_T, len);
	fp->uf_tml_idx = -1;
	if (fp->uf_tml_count == NULL || fp->uf_tml_total == NULL
						    || fp->uf_tml_self == NULL)
	    return;	    
	fp->uf_prof_initialized = TRUE;
    }

    fp->uf_profiling = TRUE;
}


    static void
script_prof_save(
    proftime_T	*tm)	    
{
    scriptitem_T    *si;

    if (SCRIPT_ID_VALID(current_sctx.sc_sid))
    {
	si = SCRIPT_ITEM(current_sctx.sc_sid);
	if (si->sn_prof_on && si->sn_pr_nest++ == 0)
	    profile_start(&si->sn_pr_child);
    }
    profile_get_wait(tm);
}


    void
profile_may_start_func(profinfo_T *info, ufunc_T *fp, ufunc_T *caller)
{
    if (!fp->uf_profiling && has_profiling(FALSE, fp->uf_name, NULL,
								&fp->uf_hash))
    {
	info->pi_started_profiling = TRUE;
	func_do_profile(fp);
    }
    if (fp->uf_profiling || (caller != NULL && caller->uf_profiling))
    {
	++fp->uf_tm_count;
	profile_start(&info->pi_call_start);
	profile_zero(&fp->uf_tm_children);
    }
    script_prof_save(&info->pi_wait_start);
}


    void
profile_may_end_func(profinfo_T *info, ufunc_T *fp, ufunc_T *caller)
{
    profile_end(&info->pi_call_start);
    profile_sub_wait(&info->pi_wait_start, &info->pi_call_start);
    profile_add(&fp->uf_tm_total, &info->pi_call_start);
    profile_self(&fp->uf_tm_self, &info->pi_call_start, &fp->uf_tm_children);
    if (caller != NULL && caller->uf_profiling)
    {
	profile_add(&caller->uf_tm_children, &info->pi_call_start);
	profile_add(&caller->uf_tml_children, &info->pi_call_start);
    }
    if (info->pi_started_profiling)
	
	fp->uf_profiling = FALSE;
}


    void
prof_child_enter(
    proftime_T *tm)	
{
    funccall_T *fc = get_current_funccal();

    if (fc != NULL && fc->fc_func->uf_profiling)
	profile_start(&fc->fc_prof_child);
    script_prof_save(tm);
}


    void
prof_child_exit(
    proftime_T *tm)	
{
    funccall_T *fc = get_current_funccal();

    if (fc != NULL && fc->fc_func->uf_profiling)
    {
	profile_end(&fc->fc_prof_child);
	profile_sub_wait(tm, &fc->fc_prof_child); 
	profile_add(&fc->fc_func->uf_tm_children, &fc->fc_prof_child);
	profile_add(&fc->fc_func->uf_tml_children, &fc->fc_prof_child);
    }
    script_prof_restore(tm);
}


    void
func_line_start(void *cookie, int lnum)
{
    funccall_T	*fcp = (funccall_T *)cookie;
    ufunc_T	*fp = fcp->fc_func;

    if (fp->uf_profiling && lnum >= 1 && lnum <= fp->uf_lines.ga_len)
    {
	fp->uf_tml_idx = lnum - 1;
	
	while (fp->uf_tml_idx > 0 && FUNCLINE(fp, fp->uf_tml_idx) == NULL)
	    --fp->uf_tml_idx;
	fp->uf_tml_execed = FALSE;
	profile_start(&fp->uf_tml_start);
	profile_zero(&fp->uf_tml_children);
	profile_get_wait(&fp->uf_tml_wait);
    }
}


    void
func_line_exec(void *cookie)
{
    funccall_T	*fcp = (funccall_T *)cookie;
    ufunc_T	*fp = fcp->fc_func;

    if (fp->uf_profiling && fp->uf_tml_idx >= 0)
	fp->uf_tml_execed = TRUE;
}


    void
func_line_end(void *cookie)
{
    funccall_T	*fcp = (funccall_T *)cookie;
    ufunc_T	*fp = fcp->fc_func;

    if (fp->uf_profiling && fp->uf_tml_idx >= 0)
    {
	if (fp->uf_tml_execed)
	{
	    ++fp->uf_tml_count[fp->uf_tml_idx];
	    profile_end(&fp->uf_tml_start);
	    profile_sub_wait(&fp->uf_tml_wait, &fp->uf_tml_start);
	    profile_add(&fp->uf_tml_total[fp->uf_tml_idx], &fp->uf_tml_start);
	    profile_self(&fp->uf_tml_self[fp->uf_tml_idx], &fp->uf_tml_start,
							&fp->uf_tml_children);
	}
	fp->uf_tml_idx = -1;
    }
}


    static void
func_dump_profile(FILE *fd)
{
    hashtab_T	*functbl;
    hashitem_T	*hi;
    int		todo;
    ufunc_T	*fp;
    int		i;
    ufunc_T	**sorttab;
    int		st_len = 0;
    char_u	*p;

    functbl = func_tbl_get();
    todo = (int)functbl->ht_used;
    if (todo == 0)
	return;     

    sorttab = ALLOC_MULT(ufunc_T *, todo);

    FOR_ALL_HASHTAB_ITEMS(functbl, hi, todo)
    {
	if (!HASHITEM_EMPTY(hi))
	{
	    --todo;
	    fp = HI2UF(hi);
	    if (fp->uf_prof_initialized)
	    {
		if (sorttab != NULL)
		    sorttab[st_len++] = fp;

		if (fp->uf_name[0] == K_SPECIAL)
		    fprintf(fd, "FUNCTION  <SNR>%s()\n", fp->uf_name + 3);
		else
		    fprintf(fd, "FUNCTION  %s()\n", fp->uf_name);
		if (fp->uf_script_ctx.sc_sid > 0)
		{
		    p = home_replace_save(NULL,
				     get_scriptname(fp->uf_script_ctx.sc_sid));
		    if (p != NULL)
		    {
			fprintf(fd, "    Defined: %s:%ld\n",
					   p, (int)fp->uf_script_ctx.sc_lnum);
			vim_free(p);
		    }
		}
		if (fp->uf_tm_count == 1)
		    fprintf(fd, "Called 1 time\n");
		else
		    fprintf(fd, "Called %d times\n", fp->uf_tm_count);
		fprintf(fd, "Total time: %s\n", profile_msg(&fp->uf_tm_total));
		fprintf(fd, " Self time: %s\n", profile_msg(&fp->uf_tm_self));
		fprintf(fd, "\n");
		fprintf(fd, "%s\n", PROF_TOTALS_HEADER);

		for (i = 0; i < fp->uf_lines.ga_len; ++i)
		{
		    if (FUNCLINE(fp, i) == NULL)
			continue;
		    prof_func_line(fd, fp->uf_tml_count[i],
			     &fp->uf_tml_total[i], &fp->uf_tml_self[i], TRUE);
		    fprintf(fd, "%s\n", FUNCLINE(fp, i));
		}
		fprintf(fd, "\n");
	    }
	}
    }

    if (sorttab != NULL && st_len > 0)
    {
	qsort((void *)sorttab, (size_t)st_len, sizeof(ufunc_T *),
							      prof_total_cmp);
	prof_sort_list(fd, sorttab, st_len, "TOTAL", FALSE);
	qsort((void *)sorttab, (size_t)st_len, sizeof(ufunc_T *),
							      prof_self_cmp);
	prof_sort_list(fd, sorttab, st_len, "SELF", TRUE);
    }

    vim_free(sorttab);
}


    void
script_do_profile(scriptitem_T *si)
{
    si->sn_pr_count = 0;
    profile_zero(&si->sn_pr_total);
    profile_zero(&si->sn_pr_self);

    ga_init2(&si->sn_prl_ga, sizeof(sn_prl_T), 100);
    si->sn_prl_idx = -1;
    si->sn_prof_on = TRUE;
    si->sn_pr_nest = 0;
}


    void
script_prof_restore(proftime_T *tm)
{
    scriptitem_T    *si;

    if (!SCRIPT_ID_VALID(current_sctx.sc_sid))
	return;

    si = SCRIPT_ITEM(current_sctx.sc_sid);
    if (si->sn_prof_on && --si->sn_pr_nest == 0)
    {
	profile_end(&si->sn_pr_child);
	profile_sub_wait(tm, &si->sn_pr_child); 
	profile_add(&si->sn_pr_children, &si->sn_pr_child);
	profile_add(&si->sn_prl_children, &si->sn_pr_child);
    }
}


    static void
script_dump_profile(FILE *fd)
{
    int		    id;
    scriptitem_T    *si;
    int		    i;
    FILE	    *sfd;
    sn_prl_T	    *pp;

    for (id = 1; id <= script_items.ga_len; ++id)
    {
	si = SCRIPT_ITEM(id);
	if (si->sn_prof_on)
	{
	    fprintf(fd, "SCRIPT  %s\n", si->sn_name);
	    if (si->sn_pr_count == 1)
		fprintf(fd, "Sourced 1 time\n");
	    else
		fprintf(fd, "Sourced %d times\n", si->sn_pr_count);
	    fprintf(fd, "Total time: %s\n", profile_msg(&si->sn_pr_total));
	    fprintf(fd, " Self time: %s\n", profile_msg(&si->sn_pr_self));
	    fprintf(fd, "\n");
	    fprintf(fd, "%s\n", PROF_TOTALS_HEADER);

	    sfd = mch_fopen((char *)si->sn_name, "r");
	    if (sfd == NULL)
		fprintf(fd, "Cannot open file!\n");
	    else
	    {
		
		
		for (i = 0; ; ++i)
		{
		    if (vim_fgets(IObuff, IOSIZE, sfd))
			break;
		    
		    
		    if (IObuff[IOSIZE - 2] != NUL && IObuff[IOSIZE - 2] != NL)
		    {
			int n = IOSIZE - 2;

			if (enc_utf8)
			{
			    
			    
			    
			    while (n > 0 && (IObuff[n] & 0xc0) == 0x80)
				--n;
			}
			else if (has_mbyte)
			    n -= mb_head_off(IObuff, IObuff + n);
			IObuff[n] = NL;
			IObuff[n + 1] = NUL;
		    }
		    if (i < si->sn_prl_ga.ga_len
				     && (pp = &PRL_ITEM(si, i))->snp_count > 0)
		    {
			fprintf(fd, "%5d ", pp->snp_count);
			if (profile_equal(&pp->sn_prl_total, &pp->sn_prl_self))
			    fprintf(fd, "           ");
			else
			    fprintf(fd, "%s ", profile_msg(&pp->sn_prl_total));
			fprintf(fd, "%s ", profile_msg(&pp->sn_prl_self));
		    }
		    else
			fprintf(fd, "                            ");
		    fprintf(fd, "%s", IObuff);
		}
		fclose(sfd);
	    }
	    fprintf(fd, "\n");
	}
    }
}


    void
profile_dump(void)
{
    FILE	*fd;

    if (profile_fname == NULL)
	return;

    fd = mch_fopen((char *)profile_fname, "w");
    if (fd == NULL)
	semsg(_(e_cant_open_file_str), profile_fname);
    else
    {
	script_dump_profile(fd);
	func_dump_profile(fd);
	fclose(fd);
    }
}


    void
script_line_start(void)
{
    scriptitem_T    *si;
    sn_prl_T	    *pp;

    if (!SCRIPT_ID_VALID(current_sctx.sc_sid))
	return;
    si = SCRIPT_ITEM(current_sctx.sc_sid);
    if (si->sn_prof_on && SOURCING_LNUM >= 1)
    {
	
	
	(void)ga_grow(&si->sn_prl_ga,
				  (int)(SOURCING_LNUM - si->sn_prl_ga.ga_len));
	si->sn_prl_idx = SOURCING_LNUM - 1;
	while (si->sn_prl_ga.ga_len <= si->sn_prl_idx
		&& si->sn_prl_ga.ga_len < si->sn_prl_ga.ga_maxlen)
	{
	    
	    pp = &PRL_ITEM(si, si->sn_prl_ga.ga_len);
	    pp->snp_count = 0;
	    profile_zero(&pp->sn_prl_total);
	    profile_zero(&pp->sn_prl_self);
	    ++si->sn_prl_ga.ga_len;
	}
	si->sn_prl_execed = FALSE;
	profile_start(&si->sn_prl_start);
	profile_zero(&si->sn_prl_children);
	profile_get_wait(&si->sn_prl_wait);
    }
}


    void
script_line_exec(void)
{
    scriptitem_T    *si;

    if (!SCRIPT_ID_VALID(current_sctx.sc_sid))
	return;
    si = SCRIPT_ITEM(current_sctx.sc_sid);
    if (si->sn_prof_on && si->sn_prl_idx >= 0)
	si->sn_prl_execed = TRUE;
}


    void
script_line_end(void)
{
    scriptitem_T    *si;
    sn_prl_T	    *pp;

    if (!SCRIPT_ID_VALID(current_sctx.sc_sid))
	return;
    si = SCRIPT_ITEM(current_sctx.sc_sid);
    if (si->sn_prof_on && si->sn_prl_idx >= 0
				     && si->sn_prl_idx < si->sn_prl_ga.ga_len)
    {
	if (si->sn_prl_execed)
	{
	    pp = &PRL_ITEM(si, si->sn_prl_idx);
	    ++pp->snp_count;
	    profile_end(&si->sn_prl_start);
	    profile_sub_wait(&si->sn_prl_wait, &si->sn_prl_start);
	    profile_add(&pp->sn_prl_total, &si->sn_prl_start);
	    profile_self(&pp->sn_prl_self, &si->sn_prl_start,
							&si->sn_prl_children);
	}
	si->sn_prl_idx = -1;
    }
}
# endif 

#endif
