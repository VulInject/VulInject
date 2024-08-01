



#include "vim.h"


typedef struct AutoCmd
{
    char_u	    *cmd;		
					
    char	    once;		
    char	    nested;		
    char	    last;		
    sctx_T	    script_ctx;		
    struct AutoCmd  *next;		
} AutoCmd;

typedef struct AutoPat
{
    struct AutoPat  *next;		
					
    char_u	    *pat;		
					
    regprog_T	    *reg_prog;		
    AutoCmd	    *cmds;		
    int		    group;		
    int		    patlen;		
    int		    buflocal_nr;	
    char	    allow_dirs;		
    char	    last;		
} AutoPat;






#define BUFNEWFILE_INDEX 9
#define BUFREAD_INDEX 10


static keyvalue_T event_tab[] = {
    KEYVALUE_ENTRY(EVENT_BUFADD, "BufAdd"),
    KEYVALUE_ENTRY(EVENT_BUFADD, "BufCreate"),
    KEYVALUE_ENTRY(EVENT_BUFDELETE, "BufDelete"),
    KEYVALUE_ENTRY(EVENT_BUFENTER, "BufEnter"),
    KEYVALUE_ENTRY(EVENT_BUFFILEPOST, "BufFilePost"),
    KEYVALUE_ENTRY(EVENT_BUFFILEPRE, "BufFilePre"),
    KEYVALUE_ENTRY(EVENT_BUFHIDDEN, "BufHidden"),
    KEYVALUE_ENTRY(EVENT_BUFLEAVE, "BufLeave"),
    KEYVALUE_ENTRY(EVENT_BUFNEW, "BufNew"),
    KEYVALUE_ENTRY(EVENT_BUFNEWFILE, "BufNewFile"),	
    KEYVALUE_ENTRY(EVENT_BUFREADPOST, "BufRead"),	
    KEYVALUE_ENTRY(EVENT_BUFREADCMD, "BufReadCmd"),
    KEYVALUE_ENTRY(EVENT_BUFREADPOST, "BufReadPost"),
    KEYVALUE_ENTRY(EVENT_BUFREADPRE, "BufReadPre"),
    KEYVALUE_ENTRY(EVENT_BUFUNLOAD, "BufUnload"),
    KEYVALUE_ENTRY(EVENT_BUFWINENTER, "BufWinEnter"),
    KEYVALUE_ENTRY(EVENT_BUFWINLEAVE, "BufWinLeave"),
    KEYVALUE_ENTRY(EVENT_BUFWIPEOUT, "BufWipeout"),
    KEYVALUE_ENTRY(EVENT_BUFWRITEPRE, "BufWrite"),
    KEYVALUE_ENTRY(EVENT_BUFWRITECMD, "BufWriteCmd"),
    KEYVALUE_ENTRY(EVENT_BUFWRITEPOST, "BufWritePost"),
    KEYVALUE_ENTRY(EVENT_BUFWRITEPRE, "BufWritePre"),
    KEYVALUE_ENTRY(EVENT_CMDLINECHANGED, "CmdlineChanged"),
    KEYVALUE_ENTRY(EVENT_CMDLINEENTER, "CmdlineEnter"),
    KEYVALUE_ENTRY(EVENT_CMDLINELEAVE, "CmdlineLeave"),
    KEYVALUE_ENTRY(EVENT_CMDUNDEFINED, "CmdUndefined"),
    KEYVALUE_ENTRY(EVENT_CMDWINENTER, "CmdwinEnter"),
    KEYVALUE_ENTRY(EVENT_CMDWINLEAVE, "CmdwinLeave"),
    KEYVALUE_ENTRY(EVENT_COLORSCHEME, "ColorScheme"),
    KEYVALUE_ENTRY(EVENT_COLORSCHEMEPRE, "ColorSchemePre"),
    KEYVALUE_ENTRY(EVENT_COMPLETECHANGED, "CompleteChanged"),
    KEYVALUE_ENTRY(EVENT_COMPLETEDONE, "CompleteDone"),
    KEYVALUE_ENTRY(EVENT_COMPLETEDONEPRE, "CompleteDonePre"),
    KEYVALUE_ENTRY(EVENT_CURSORHOLD, "CursorHold"),
    KEYVALUE_ENTRY(EVENT_CURSORHOLDI, "CursorHoldI"),
    KEYVALUE_ENTRY(EVENT_CURSORMOVED, "CursorMoved"),
    KEYVALUE_ENTRY(EVENT_CURSORMOVEDC, "CursorMovedC"),
    KEYVALUE_ENTRY(EVENT_CURSORMOVEDI, "CursorMovedI"),
    KEYVALUE_ENTRY(EVENT_DIFFUPDATED, "DiffUpdated"),
    KEYVALUE_ENTRY(EVENT_DIRCHANGED, "DirChanged"),
    KEYVALUE_ENTRY(EVENT_DIRCHANGEDPRE, "DirChangedPre"),
    KEYVALUE_ENTRY(EVENT_ENCODINGCHANGED, "EncodingChanged"),
    KEYVALUE_ENTRY(EVENT_EXITPRE, "ExitPre"),
    KEYVALUE_ENTRY(EVENT_FILEAPPENDCMD, "FileAppendCmd"),
    KEYVALUE_ENTRY(EVENT_FILEAPPENDPOST, "FileAppendPost"),
    KEYVALUE_ENTRY(EVENT_FILEAPPENDPRE, "FileAppendPre"),
    KEYVALUE_ENTRY(EVENT_FILECHANGEDRO, "FileChangedRO"),
    KEYVALUE_ENTRY(EVENT_FILECHANGEDSHELL, "FileChangedShell"),
    KEYVALUE_ENTRY(EVENT_FILECHANGEDSHELLPOST, "FileChangedShellPost"),
    KEYVALUE_ENTRY(EVENT_ENCODINGCHANGED, "FileEncoding"),
    KEYVALUE_ENTRY(EVENT_FILEREADCMD, "FileReadCmd"),
    KEYVALUE_ENTRY(EVENT_FILEREADPOST, "FileReadPost"),
    KEYVALUE_ENTRY(EVENT_FILEREADPRE, "FileReadPre"),
    KEYVALUE_ENTRY(EVENT_FILETYPE, "FileType"),
    KEYVALUE_ENTRY(EVENT_FILEWRITECMD, "FileWriteCmd"),
    KEYVALUE_ENTRY(EVENT_FILEWRITEPOST, "FileWritePost"),
    KEYVALUE_ENTRY(EVENT_FILEWRITEPRE, "FileWritePre"),
    KEYVALUE_ENTRY(EVENT_FILTERREADPOST, "FilterReadPost"),
    KEYVALUE_ENTRY(EVENT_FILTERREADPRE, "FilterReadPre"),
    KEYVALUE_ENTRY(EVENT_FILTERWRITEPOST, "FilterWritePost"),
    KEYVALUE_ENTRY(EVENT_FILTERWRITEPRE, "FilterWritePre"),
    KEYVALUE_ENTRY(EVENT_FOCUSGAINED, "FocusGained"),
    KEYVALUE_ENTRY(EVENT_FOCUSLOST, "FocusLost"),
    KEYVALUE_ENTRY(EVENT_FUNCUNDEFINED, "FuncUndefined"),
    KEYVALUE_ENTRY(EVENT_GUIENTER, "GUIEnter"),
    KEYVALUE_ENTRY(EVENT_GUIFAILED, "GUIFailed"),
    KEYVALUE_ENTRY(EVENT_INSERTCHANGE, "InsertChange"),
    KEYVALUE_ENTRY(EVENT_INSERTCHARPRE, "InsertCharPre"),
    KEYVALUE_ENTRY(EVENT_INSERTENTER, "InsertEnter"),
    KEYVALUE_ENTRY(EVENT_INSERTLEAVE, "InsertLeave"),
    KEYVALUE_ENTRY(EVENT_INSERTLEAVEPRE, "InsertLeavePre"),
    KEYVALUE_ENTRY(EVENT_KEYINPUTPRE, "KeyInputPre"),
    KEYVALUE_ENTRY(EVENT_MENUPOPUP, "MenuPopup"),
    KEYVALUE_ENTRY(EVENT_MODECHANGED, "ModeChanged"),
    KEYVALUE_ENTRY(EVENT_OPTIONSET, "OptionSet"),
    KEYVALUE_ENTRY(EVENT_QUICKFIXCMDPOST, "QuickFixCmdPost"),
    KEYVALUE_ENTRY(EVENT_QUICKFIXCMDPRE, "QuickFixCmdPre"),
    KEYVALUE_ENTRY(EVENT_QUITPRE, "QuitPre"),
    KEYVALUE_ENTRY(EVENT_REMOTEREPLY, "RemoteReply"),
    KEYVALUE_ENTRY(EVENT_SAFESTATE, "SafeState"),
    KEYVALUE_ENTRY(EVENT_SAFESTATEAGAIN, "SafeStateAgain"),
    KEYVALUE_ENTRY(EVENT_SESSIONLOADPOST, "SessionLoadPost"),
    KEYVALUE_ENTRY(EVENT_SESSIONWRITEPOST, "SessionWritePost"),
    KEYVALUE_ENTRY(EVENT_SHELLCMDPOST, "ShellCmdPost"),
    KEYVALUE_ENTRY(EVENT_SHELLFILTERPOST, "ShellFilterPost"),
    KEYVALUE_ENTRY(EVENT_SIGUSR1, "SigUSR1"),
    KEYVALUE_ENTRY(EVENT_SOURCECMD, "SourceCmd"),
    KEYVALUE_ENTRY(EVENT_SOURCEPOST, "SourcePost"),
    KEYVALUE_ENTRY(EVENT_SOURCEPRE, "SourcePre"),
    KEYVALUE_ENTRY(EVENT_SPELLFILEMISSING, "SpellFileMissing"),
    KEYVALUE_ENTRY(EVENT_STDINREADPOST, "StdinReadPost"),
    KEYVALUE_ENTRY(EVENT_STDINREADPRE, "StdinReadPre"),
    KEYVALUE_ENTRY(EVENT_SWAPEXISTS, "SwapExists"),
    KEYVALUE_ENTRY(EVENT_SYNTAX, "Syntax"),
    KEYVALUE_ENTRY(EVENT_TABCLOSED, "TabClosed"),
    KEYVALUE_ENTRY(EVENT_TABENTER, "TabEnter"),
    KEYVALUE_ENTRY(EVENT_TABLEAVE, "TabLeave"),
    KEYVALUE_ENTRY(EVENT_TABNEW, "TabNew"),
    KEYVALUE_ENTRY(EVENT_TERMCHANGED, "TermChanged"),
    KEYVALUE_ENTRY(EVENT_TERMINALOPEN, "TerminalOpen"),
    KEYVALUE_ENTRY(EVENT_TERMINALWINOPEN, "TerminalWinOpen"),
    KEYVALUE_ENTRY(EVENT_TERMRESPONSE, "TermResponse"),
    KEYVALUE_ENTRY(EVENT_TERMRESPONSEALL, "TermResponseAll"),
    KEYVALUE_ENTRY(EVENT_TEXTCHANGED, "TextChanged"),
    KEYVALUE_ENTRY(EVENT_TEXTCHANGEDI, "TextChangedI"),
    KEYVALUE_ENTRY(EVENT_TEXTCHANGEDP, "TextChangedP"),
    KEYVALUE_ENTRY(EVENT_TEXTCHANGEDT, "TextChangedT"),
    KEYVALUE_ENTRY(EVENT_TEXTYANKPOST, "TextYankPost"),
    KEYVALUE_ENTRY(EVENT_USER, "User"),
    KEYVALUE_ENTRY(EVENT_VIMENTER, "VimEnter"),
    KEYVALUE_ENTRY(EVENT_VIMLEAVE, "VimLeave"),
    KEYVALUE_ENTRY(EVENT_VIMLEAVEPRE, "VimLeavePre"),
    KEYVALUE_ENTRY(EVENT_VIMRESIZED, "VimResized"),
    KEYVALUE_ENTRY(EVENT_VIMRESUME, "VimResume"),
    KEYVALUE_ENTRY(EVENT_VIMSUSPEND, "VimSuspend"),
    KEYVALUE_ENTRY(EVENT_WINCLOSED, "WinClosed"),
    KEYVALUE_ENTRY(EVENT_WINENTER, "WinEnter"),
    KEYVALUE_ENTRY(EVENT_WINLEAVE, "WinLeave"),
    KEYVALUE_ENTRY(EVENT_WINNEW, "WinNew"),
    KEYVALUE_ENTRY(EVENT_WINNEWPRE, "WinNewPre"),
    KEYVALUE_ENTRY(EVENT_WINRESIZED, "WinResized"),
    KEYVALUE_ENTRY(EVENT_WINSCROLLED, "WinScrolled")
};

static AutoPat *first_autopat[NUM_EVENTS] = {
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL
};

static AutoPat *last_autopat[NUM_EVENTS] = {
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL
};

#define AUGROUP_DEFAULT    (-1)	    
#define AUGROUP_ERROR	   (-2)	    
#define AUGROUP_ALL	   (-3)	    


struct AutoPatCmd_S
{
    AutoPat	*curpat;	
    AutoCmd	*nextcmd;	
    int		group;		
    char_u	*fname;		
    char_u	*sfname;	
    char_u	*tail;		
    event_T	event;		
    sctx_T	script_ctx;	
    int		arg_bufnr;	
				
    AutoPatCmd_T *next;		
};

static AutoPatCmd_T *active_apc_list = NULL; 


#define FOR_ALL_AUTOCMD_PATTERNS(event, ap) \
    for ((ap) = first_autopat[(int)(event)]; (ap) != NULL; (ap) = (ap)->next)


static garray_T augroups = {0, 0, sizeof(char_u *), 10, NULL};
#define AUGROUP_NAME(i) (((char_u **)augroups.ga_data)[i])

static char_u *deleted_augroup = NULL;


static int current_augroup = AUGROUP_DEFAULT;

static int au_need_clean = FALSE;   

static event_T event_name2nr(char_u *start, char_u **end);
static char_u *event_nr2name(event_T event);
static int au_get_grouparg(char_u **argp);
static int do_autocmd_event(event_T event, char_u *pat, int once, int nested, char_u *cmd, int forceit, int group, int flags);
static int apply_autocmds_group(event_T event, char_u *fname, char_u *fname_io, int force, int group, buf_T *buf, exarg_T *eap);
static void auto_next_pat(AutoPatCmd_T *apc, int stop_at_last);
static int au_find_group(char_u *name);

static event_T	last_event;
static int	last_group;
static int	autocmd_blocked = 0;	

    static char_u *
get_deleted_augroup(void)
{
    if (deleted_augroup == NULL)
	deleted_augroup = (char_u *)_("--Deleted--");
    return deleted_augroup;
}


    static void
show_autocmd(AutoPat *ap, event_T event)
{
    AutoCmd *ac;

    
    
    if (got_int)
	return;
    if (ap->pat == NULL)		
	return;

    
    
    
    ++autocmd_busy;

    msg_putchar('\n');
    if (got_int)
	goto theend;
    if (event != last_event || ap->group != last_group)
    {
	if (ap->group != AUGROUP_DEFAULT)
	{
	    if (AUGROUP_NAME(ap->group) == NULL)
		msg_puts_attr((char *)get_deleted_augroup(), HL_ATTR(HLF_E));
	    else
		msg_puts_attr((char *)AUGROUP_NAME(ap->group), HL_ATTR(HLF_T));
	    msg_puts("  ");
	}
	msg_puts_attr((char *)event_nr2name(event), HL_ATTR(HLF_T));
	last_event = event;
	last_group = ap->group;
	msg_putchar('\n');
	if (got_int)
	    goto theend;
    }

    if (ap->pat == NULL)
	goto theend;  

    msg_col = 4;
    msg_outtrans(ap->pat);

    for (ac = ap->cmds; ac != NULL; ac = ac->next)
    {
	if (ac->cmd == NULL)		
	    continue;

	if (msg_col >= 14)
	    msg_putchar('\n');
	msg_col = 14;
	if (got_int)
	    goto theend;
	msg_outtrans(ac->cmd);
#ifdef FEAT_EVAL
	if (p_verbose > 0)
	    last_set_msg(ac->script_ctx);
#endif
	if (got_int)
	    goto theend;
	if (ac->next != NULL)
	{
	    msg_putchar('\n');
	    if (got_int)
		goto theend;
	}
    }

theend:
    --autocmd_busy;
}


    static void
au_remove_pat(AutoPat *ap)
{
    VIM_CLEAR(ap->pat);
    ap->buflocal_nr = -1;
    au_need_clean = TRUE;
}


    static void
au_remove_cmds(AutoPat *ap)
{
    AutoCmd *ac;

    for (ac = ap->cmds; ac != NULL; ac = ac->next)
	VIM_CLEAR(ac->cmd);
    au_need_clean = TRUE;
}


static void au_del_cmd(AutoCmd *ac)
{
    VIM_CLEAR(ac->cmd);
    au_need_clean = TRUE;
}


    static void
au_cleanup(void)
{
    AutoPat	*ap, **prev_ap;
    AutoCmd	*ac, **prev_ac;
    event_T	event;

    if (autocmd_busy || !au_need_clean)
	return;

    
    for (event = (event_T)0; (int)event < NUM_EVENTS;
					    event = (event_T)((int)event + 1))
    {
	
	prev_ap = &(first_autopat[(int)event]);
	for (ap = *prev_ap; ap != NULL; ap = *prev_ap)
	{
	    int has_cmd = FALSE;

	    
	    prev_ac = &(ap->cmds);
	    for (ac = *prev_ac; ac != NULL; ac = *prev_ac)
	    {
		
		
		if (ap->pat == NULL || ac->cmd == NULL)
		{
		    *prev_ac = ac->next;
		    vim_free(ac->cmd);
		    vim_free(ac);
		}
		else
		{
		    has_cmd = TRUE;
		    prev_ac = &(ac->next);
		}
	    }

	    if (ap->pat != NULL && !has_cmd)
		
		
		au_remove_pat(ap);

	    
	    if (ap->pat == NULL)
	    {
		if (ap->next == NULL)
		{
		    if (prev_ap == &(first_autopat[(int)event]))
			last_autopat[(int)event] = NULL;
		    else
			
			
			last_autopat[(int)event] = (AutoPat *)prev_ap;
		}
		*prev_ap = ap->next;
		vim_regfree(ap->reg_prog);
		vim_free(ap);
	    }
	    else
		prev_ap = &(ap->next);
	}
    }

    au_need_clean = FALSE;
}


    void
aubuflocal_remove(buf_T *buf)
{
    AutoPat	    *ap;
    event_T	    event;
    AutoPatCmd_T    *apc;

    
    for (apc = active_apc_list; apc; apc = apc->next)
	if (buf->b_fnum == apc->arg_bufnr)
	    apc->arg_bufnr = 0;

    
    for (event = (event_T)0; (int)event < NUM_EVENTS;
					    event = (event_T)((int)event + 1))
	
	FOR_ALL_AUTOCMD_PATTERNS(event, ap)
	    if (ap->buflocal_nr == buf->b_fnum)
	    {
		au_remove_pat(ap);
		if (p_verbose >= 6)
		{
		    verbose_enter();
		    smsg(_("auto-removing autocommand: %s <buffer=%d>"),
					   event_nr2name(event), buf->b_fnum);
		    verbose_leave();
		}
	    }
    au_cleanup();
}


    static int
au_new_group(char_u *name)
{
    int		i;

    i = au_find_group(name);
    if (i != AUGROUP_ERROR)
	return i;

    
    for (i = 0; i < augroups.ga_len; ++i)
	if (AUGROUP_NAME(i) == NULL)
	    break;
    if (i == augroups.ga_len && ga_grow(&augroups, 1) == FAIL)
	return AUGROUP_ERROR;

    AUGROUP_NAME(i) = vim_strsave(name);
    if (AUGROUP_NAME(i) == NULL)
	return AUGROUP_ERROR;
    if (i == augroups.ga_len)
	++augroups.ga_len;

    return i;
}

    static void
au_del_group(char_u *name)
{
    int		i;
    event_T	event;
    AutoPat	*ap;
    int		in_use = FALSE;


    i = au_find_group(name);
    if (i == AUGROUP_ERROR)	
    {
	semsg(_(e_no_such_group_str), name);
	return;
    }
    if (i == current_augroup)
    {
	emsg(_(e_cannot_delete_current_group));
	return;
    }

    for (event = (event_T)0; (int)event < NUM_EVENTS;
	    event = (event_T)((int)event + 1))
    {
	FOR_ALL_AUTOCMD_PATTERNS(event, ap)
	    if (ap->group == i && ap->pat != NULL)
	    {
		give_warning((char_u *)_("W19: Deleting augroup that is still in use"), TRUE);
		in_use = TRUE;
		event = NUM_EVENTS;
		break;
	    }
    }
    vim_free(AUGROUP_NAME(i));
    if (in_use)
	AUGROUP_NAME(i) = get_deleted_augroup();
    else
	AUGROUP_NAME(i) = NULL;
}


    static int
au_find_group(char_u *name)
{
    int	    i;

    for (i = 0; i < augroups.ga_len; ++i)
	if (AUGROUP_NAME(i) != NULL && AUGROUP_NAME(i) != get_deleted_augroup()
		&& STRCMP(AUGROUP_NAME(i), name) == 0)
	    return i;
    return AUGROUP_ERROR;
}


    int
au_has_group(char_u *name)
{
    return au_find_group(name) != AUGROUP_ERROR;
}


    void
do_augroup(char_u *arg, int del_group)
{
    int	    i;

    if (del_group)
    {
	if (*arg == NUL)
	    emsg(_(e_argument_required));
	else
	    au_del_group(arg);
    }
    else if (STRICMP(arg, "end") == 0)   
	current_augroup = AUGROUP_DEFAULT;
    else if (*arg)		    
    {
	i = au_new_group(arg);
	if (i != AUGROUP_ERROR)
	    current_augroup = i;
    }
    else			    
    {
	msg_start();
	for (i = 0; i < augroups.ga_len; ++i)
	{
	    if (AUGROUP_NAME(i) != NULL)
	    {
		msg_puts((char *)AUGROUP_NAME(i));
		msg_puts("  ");
	    }
	}
	msg_clr_eos();
	msg_end();
    }
}

    void
autocmd_init(void)
{
    CLEAR_FIELD(aucmd_win);
}

#if defined(EXITFREE) || defined(PROTO)
    void
free_all_autocmds(void)
{
    char_u	*s;

    for (current_augroup = -1; current_augroup < augroups.ga_len;
							    ++current_augroup)
	do_autocmd(NULL, (char_u *)"", TRUE);

    for (int i = 0; i < augroups.ga_len; ++i)
    {
	s = ((char_u **)(augroups.ga_data))[i];
	if (s != get_deleted_augroup())
	    vim_free(s);
    }
    ga_clear(&augroups);

    
}
#endif


    int
is_aucmd_win(win_T *win)
{
    for (int i = 0; i < AUCMD_WIN_COUNT; ++i)
	if (aucmd_win[i].auc_win_used && aucmd_win[i].auc_win == win)
	    return TRUE;
    return FALSE;
}


    static event_T
event_name2nr(char_u *start, char_u **end)
{
    char_u	*p;
    keyvalue_T target;
    keyvalue_T *entry;
    static keyvalue_T *bufnewfile = &event_tab[BUFNEWFILE_INDEX];
    static keyvalue_T *bufread = &event_tab[BUFREAD_INDEX];

    
    for (p = start; *p && !VIM_ISWHITE(*p) && *p != ',' && *p != '|'; ++p)
	;

    target.key = 0;
    target.value = (char *)start;
    target.length = (size_t)(p - start);

    
    
    
    if (cmp_keyvalue_value_ni(&target, bufnewfile) == 0)
	entry = bufnewfile;
    else
    if (cmp_keyvalue_value_ni(&target, bufread) == 0)
	entry = bufread;
    else
	entry = (keyvalue_T *)bsearch(&target, &event_tab, ARRAY_LENGTH(event_tab), sizeof(event_tab[0]), cmp_keyvalue_value_ni);

    if (*p == ',')
	++p;
    *end = p;

    return (entry == NULL) ? NUM_EVENTS : (event_T)entry->key;
}


    static char_u *
event_nr2name(event_T event)
{
    int	    i;
#define CACHE_SIZE 12
    static int cache_tab[CACHE_SIZE];
    static int cache_last_index = -1;

    if (cache_last_index < 0)
    {
	for (i = 0; i < (int)ARRAY_LENGTH(cache_tab); ++i)
	    cache_tab[i] = -1;
	cache_last_index = ARRAY_LENGTH(cache_tab) - 1;
    }

    
    
    
    for (i = cache_last_index; cache_tab[i] >= 0; )
    {
	if ((event_T)event_tab[cache_tab[i]].key == event)
	    return (char_u *)event_tab[cache_tab[i]].value;

	if (i == 0)
	    i = ARRAY_LENGTH(cache_tab) - 1;
	else
	    --i;

	
	if (i == cache_last_index)
	    break;
    }

    
    for (i = 0; i < (int)ARRAY_LENGTH(event_tab); ++i)
    {
	if ((event_T)event_tab[i].key == event)
	{
	    
	    
	    if (cache_last_index == ARRAY_LENGTH(cache_tab) - 1)
		cache_last_index = 0;
	    else
		++cache_last_index;
	    cache_tab[cache_last_index] = i;
	    break;
	}
    }

    return (i == (int)ARRAY_LENGTH(event_tab)) ? (char_u *)"Unknown" : (char_u *)event_tab[i].value;
}


    static char_u *
find_end_event(
    char_u  *arg,
    int	    have_group)	    
{
    char_u  *pat;
    char_u  *p;

    if (*arg == '*')
    {
	if (arg[1] && !VIM_ISWHITE(arg[1]))
	{
	    semsg(_(e_illegal_character_after_star_str), arg);
	    return NULL;
	}
	pat = arg + 1;
    }
    else
    {
	for (pat = arg; *pat && *pat != '|' && !VIM_ISWHITE(*pat); pat = p)
	{
	    if ((int)event_name2nr(pat, &p) >= NUM_EVENTS)
	    {
		if (have_group)
		    semsg(_(e_no_such_event_str), pat);
		else
		    semsg(_(e_no_such_group_or_event_str), pat);
		return NULL;
	    }
	}
    }
    return pat;
}


    static int
event_ignored(event_T event)
{
    char_u	*p = p_ei;

    while (*p != NUL)
    {
	if (STRNICMP(p, "all", 3) == 0 && (p[3] == NUL || p[3] == ','))
	    return TRUE;
	if (event_name2nr(p, &p) == event)
	    return TRUE;
    }

    return FALSE;
}


    int
check_ei(void)
{
    char_u	*p = p_ei;

    while (*p)
    {
	if (STRNICMP(p, "all", 3) == 0 && (p[3] == NUL || p[3] == ','))
	{
	    p += 3;
	    if (*p == ',')
		++p;
	}
	else if (event_name2nr(p, &p) == NUM_EVENTS)
	    return FAIL;
    }

    return OK;
}

# if defined(FEAT_SYN_HL) || defined(PROTO)


    char_u *
au_event_disable(char *what)
{
    char_u	*new_ei;
    char_u	*save_ei;
    size_t	p_ei_len;

    p_ei_len = STRLEN(p_ei);
    save_ei = vim_strnsave(p_ei, p_ei_len);
    if (save_ei == NULL)
	return NULL;

    new_ei = vim_strnsave(p_ei, p_ei_len + STRLEN(what));
    if (new_ei == NULL)
    {
	vim_free(save_ei);
	return NULL;
    }

    if (*what == ',' && *p_ei == NUL)
	STRCPY(new_ei, what + 1);
    else
	STRCAT(new_ei, what);
    set_string_option_direct((char_u *)"ei", -1, new_ei,
	    OPT_FREE, SID_NONE);
    vim_free(new_ei);
    return save_ei;
}

    void
au_event_restore(char_u *old_ei)
{
    if (old_ei != NULL)
    {
	set_string_option_direct((char_u *)"ei", -1, old_ei,
							  OPT_FREE, SID_NONE);
	vim_free(old_ei);
    }
}
# endif  


    void
do_autocmd(exarg_T *eap, char_u *arg_in, int forceit)
{
    char_u	*arg = arg_in;
    char_u	*pat;
    char_u	*envpat = NULL;
    char_u	*cmd;
    int		cmd_need_free = FALSE;
    event_T	event;
    char_u	*tofree = NULL;
    int		nested = FALSE;
    int		once = FALSE;
    int		group;
    int		i;
    int		flags = 0;

    if (*arg == '|')
    {
	eap->nextcmd = arg + 1;
	arg = (char_u *)"";
	group = AUGROUP_ALL;	
    }
    else
    {
	
	group = au_get_grouparg(&arg);
	if (arg == NULL)	    
	    return;
    }

    
    pat = find_end_event(arg, group != AUGROUP_ALL);
    if (pat == NULL)
	return;

    pat = skipwhite(pat);
    if (*pat == '|')
    {
	eap->nextcmd = pat + 1;
	pat = (char_u *)"";
	cmd = (char_u *)"";
    }
    else
    {
	
	cmd = pat;
	while (*cmd && (!VIM_ISWHITE(*cmd) || cmd[-1] == '\\'))
	    cmd++;
	if (*cmd)
	    *cmd++ = NUL;

	
	
	if (vim_strchr(pat, '$') != NULL || vim_strchr(pat, '~') != NULL)
	{
#ifdef BACKSLASH_IN_FILENAME
	    int	p_ssl_save = p_ssl;

	    p_ssl = TRUE;
#endif
	    envpat = expand_env_save(pat);
#ifdef BACKSLASH_IN_FILENAME
	    p_ssl = p_ssl_save;
#endif
	    if (envpat != NULL)
		pat = envpat;
	}

	cmd = skipwhite(cmd);
	for (i = 0; i < 2; i++)
	{
	    if (*cmd == NUL)
		continue;

	    
	    if (STRNCMP(cmd, "++once", 6) == 0 && VIM_ISWHITE(cmd[6]))
	    {
		if (once)
		    semsg(_(e_duplicate_argument_str), "++once");
		once = TRUE;
		cmd = skipwhite(cmd + 6);
	    }

	    
	    if ((STRNCMP(cmd, "++nested", 8) == 0 && VIM_ISWHITE(cmd[8])))
	    {
		if (nested)
		{
		    semsg(_(e_duplicate_argument_str), "++nested");
		    return;
		}
		nested = TRUE;
		cmd = skipwhite(cmd + 8);
	    }

	    
	    if (STRNCMP(cmd, "nested", 6) == 0 && VIM_ISWHITE(cmd[6]))
	    {
		if (in_vim9script())
		{
		    
		    
		    
		    emsg(_(e_invalid_command_nested_did_you_mean_plusplus_nested));
		    return;
		}
		if (nested)
		{
		    semsg(_(e_duplicate_argument_str), "nested");
		    return;
		}
		nested = TRUE;
		cmd = skipwhite(cmd + 6);
	    }
	}

	
	if (*cmd != NUL)
	{
	    if (eap != NULL)
		
		cmd = may_get_cmd_block(eap, cmd, &tofree, &flags);

	    cmd = expand_sfile(cmd);
	    if (cmd == NULL)	    
		return;
	    cmd_need_free = TRUE;
	}
    }

    
    if (!forceit && *cmd == NUL)
	
	msg_puts_title(_("\n--- Autocommands ---"));

    
    last_event = (event_T)-1;		
    last_group = AUGROUP_ERROR;		
    if (*arg == '*' || *arg == NUL || *arg == '|')
    {
	if (*cmd != NUL)
	    emsg(_(e_cannot_define_autocommands_for_all_events));
	else
	    for (event = (event_T)0; (int)event < NUM_EVENTS;
					     event = (event_T)((int)event + 1))
		if (do_autocmd_event(event, pat,
			     once, nested, cmd, forceit, group, flags) == FAIL)
		    break;
    }
    else
    {
	while (*arg && *arg != '|' && !VIM_ISWHITE(*arg))
	    if (do_autocmd_event(event_name2nr(arg, &arg), pat,
			  once, nested,	cmd, forceit, group, flags) == FAIL)
		break;
    }

    if (cmd_need_free)
	vim_free(cmd);
    vim_free(tofree);
    vim_free(envpat);
}


    static int
au_get_grouparg(char_u **argp)
{
    char_u	*group_name;
    char_u	*p;
    char_u	*arg = *argp;
    int		group = AUGROUP_ALL;

    for (p = arg; *p && !VIM_ISWHITE(*p) && *p != '|'; ++p)
	;
    if (p <= arg)
	return AUGROUP_ALL;

    group_name = vim_strnsave(arg, p - arg);
    if (group_name == NULL)		
	return AUGROUP_ERROR;
    group = au_find_group(group_name);
    if (group == AUGROUP_ERROR)
	group = AUGROUP_ALL;	
    else
	*argp = skipwhite(p);	
    vim_free(group_name);
    return group;
}


    static int
do_autocmd_event(
    event_T	event,
    char_u	*pat,
    int		once,
    int		nested,
    char_u	*cmd,
    int		forceit,
    int		group,
    int		flags)
{
    AutoPat	*ap;
    AutoPat	**prev_ap;
    AutoCmd	*ac;
    AutoCmd	**prev_ac;
    int		brace_level;
    char_u	*endpat;
    int		findgroup;
    int		allgroups;
    int		patlen;
    int		is_buflocal;
    int		buflocal_nr;
    char_u	buflocal_pat[25];	

    if (group == AUGROUP_ALL)
	findgroup = current_augroup;
    else
	findgroup = group;
    allgroups = (group == AUGROUP_ALL && !forceit && *cmd == NUL);

    
    if (*pat == NUL)
    {
	FOR_ALL_AUTOCMD_PATTERNS(event, ap)
	{
	    if (forceit)  
	    {
		if (ap->group == findgroup)
		    au_remove_pat(ap);
	    }
	    else if (group == AUGROUP_ALL || ap->group == group)
		show_autocmd(ap, event);
	}
    }

    
    for ( ; *pat; pat = (*endpat == ',' ? endpat + 1 : endpat))
    {
	
	brace_level = 0;
	for (endpat = pat; *endpat && (*endpat != ',' || brace_level
			   || (endpat > pat && endpat[-1] == '\\')); ++endpat)
	{
	    if (*endpat == '{')
		brace_level++;
	    else if (*endpat == '}')
		brace_level--;
	}
	if (pat == endpat)		
	    continue;
	patlen = (int)(endpat - pat);

	
	is_buflocal = FALSE;
	buflocal_nr = 0;

	if (patlen >= 8 && STRNCMP(pat, "<buffer", 7) == 0
						    && pat[patlen - 1] == '>')
	{
	    
	    
	    is_buflocal = TRUE;
	    if (patlen == 8)
		
		buflocal_nr = curbuf->b_fnum;
	    else if (patlen > 9 && pat[7] == '=')
	    {
		if (patlen == 13 && STRNICMP(pat, "<buffer=abuf>", 13) == 0)
		    
		    buflocal_nr = autocmd_bufnr;
		else if (skipdigits(pat + 8) == pat + patlen - 1)
		    
		    buflocal_nr = atoi((char *)pat + 8);
	    }
	}

	if (is_buflocal)
	{
	    
	    sprintf((char *)buflocal_pat, "<buffer=%d>", buflocal_nr);
	    pat = buflocal_pat;			
	    patlen = (int)STRLEN(buflocal_pat);	
	}

	
	if (!forceit && *cmd != NUL && last_autopat[(int)event] != NULL)
	    prev_ap = &last_autopat[(int)event];
	else
	    prev_ap = &first_autopat[(int)event];
	while ((ap = *prev_ap) != NULL)
	{
	    if (ap->pat != NULL)
	    {
		
		if ((allgroups || ap->group == findgroup)
			&& ap->patlen == patlen
			&& STRNCMP(pat, ap->pat, patlen) == 0)
		{
		    
		    if (forceit)
		    {
			if (*cmd != NUL && ap->next == NULL)
			{
			    au_remove_cmds(ap);
			    break;
			}
			au_remove_pat(ap);
		    }

		    
		    else if (*cmd == NUL)
			show_autocmd(ap, event);

		    
		    else if (ap->next == NULL)
			break;
		}
	    }
	    prev_ap = &ap->next;
	}

	
	if (*cmd != NUL)
	{
	    
	    if (ap == NULL)
	    {
		
		if (is_buflocal && (buflocal_nr == 0
				      || buflist_findnr(buflocal_nr) == NULL))
		{
		    semsg(_(e_buffer_nr_invalid_buffer_number), buflocal_nr);
		    return FAIL;
		}

		ap = ALLOC_ONE(AutoPat);
		if (ap == NULL)
		    return FAIL;
		ap->pat = vim_strnsave(pat, patlen);
		ap->patlen = patlen;
		if (ap->pat == NULL)
		{
		    vim_free(ap);
		    return FAIL;
		}

#ifdef FEAT_EVAL
		
		
		if (event == EVENT_MODECHANGED && !has_modechanged())
		    get_mode(last_mode);
#endif
		
		
		
		if ((event == EVENT_WINSCROLLED || event == EVENT_WINRESIZED)
			&& !(has_winscrolled() || has_winresized()))
		{
		    tabpage_T *save_curtab = curtab;
		    tabpage_T *tp;
		    FOR_ALL_TABPAGES(tp)
		    {
			unuse_tabpage(curtab);
			use_tabpage(tp);
			snapshot_windows_scroll_size();
		    }
		    unuse_tabpage(curtab);
		    use_tabpage(save_curtab);
		}

		if (is_buflocal)
		{
		    ap->buflocal_nr = buflocal_nr;
		    ap->reg_prog = NULL;
		}
		else
		{
		    char_u	*reg_pat;

		    ap->buflocal_nr = 0;
		    reg_pat = file_pat_to_reg_pat(pat, endpat,
							 &ap->allow_dirs, TRUE);
		    if (reg_pat != NULL)
			ap->reg_prog = vim_regcomp(reg_pat, RE_MAGIC);
		    vim_free(reg_pat);
		    if (reg_pat == NULL || ap->reg_prog == NULL)
		    {
			vim_free(ap->pat);
			vim_free(ap);
			return FAIL;
		    }
		}
		ap->cmds = NULL;
		*prev_ap = ap;
		last_autopat[(int)event] = ap;
		ap->next = NULL;
		if (group == AUGROUP_ALL)
		    ap->group = current_augroup;
		else
		    ap->group = group;
	    }

	    
	    prev_ac = &(ap->cmds);
	    while ((ac = *prev_ac) != NULL)
		prev_ac = &ac->next;
	    ac = ALLOC_ONE(AutoCmd);
	    if (ac == NULL)
		return FAIL;
	    ac->cmd = vim_strsave(cmd);
	    ac->script_ctx = current_sctx;
	    if (flags & UC_VIM9)
		ac->script_ctx.sc_version = SCRIPT_VERSION_VIM9;
#ifdef FEAT_EVAL
	    ac->script_ctx.sc_lnum += SOURCING_LNUM;
#endif
	    if (ac->cmd == NULL)
	    {
		vim_free(ac);
		return FAIL;
	    }
	    ac->next = NULL;
	    *prev_ac = ac;
	    ac->once = once;
	    ac->nested = nested;
	}
    }

    au_cleanup();	
    return OK;
}


    int
do_doautocmd(
    char_u	*arg_start,
    int		do_msg,	    
    int		*did_something)
{
    char_u	*arg = arg_start;
    char_u	*fname;
    int		nothing_done = TRUE;
    int		group;

    if (did_something != NULL)
	*did_something = FALSE;

    
    group = au_get_grouparg(&arg);
    if (arg == NULL)	    
	return FAIL;

    if (*arg == '*')
    {
	emsg(_(e_cant_execute_autocommands_for_all_events));
	return FAIL;
    }

    
    fname = find_end_event(arg, group != AUGROUP_ALL);
    if (fname == NULL)
	return FAIL;

    fname = skipwhite(fname);

    
    while (*arg && !ends_excmd(*arg) && !VIM_ISWHITE(*arg))
	if (apply_autocmds_group(event_name2nr(arg, &arg),
				      fname, NULL, TRUE, group, curbuf, NULL))
	    nothing_done = FALSE;

    if (nothing_done && do_msg
#ifdef FEAT_EVAL
		&& !aborting()
#endif
	       )
	smsg(_("No matching autocommands: %s"), arg_start);
    if (did_something != NULL)
	*did_something = !nothing_done;

#ifdef FEAT_EVAL
    return aborting() ? FAIL : OK;
#else
    return OK;
#endif
}


    void
ex_doautoall(exarg_T *eap)
{
    int		retval = OK;
    aco_save_T	aco;
    buf_T	*buf;
    bufref_T	bufref;
    char_u	*arg = eap->arg;
    int		call_do_modelines = check_nomodeline(&arg);
    int		did_aucmd;

    
    FOR_ALL_BUFFERS(buf)
    {
	
	if (buf->b_ml.ml_mfp == NULL || buf == curbuf)
	    continue;

	
	aucmd_prepbuf(&aco, buf);
	if (curbuf != buf)
	{
	    
	    
	    retval = FAIL;
	    break;
	}

	set_bufref(&bufref, buf);

	
	retval = do_doautocmd(arg, FALSE, &did_aucmd);

	if (call_do_modelines && did_aucmd)
	    
	    
	    
	    do_modelines(is_aucmd_win(curwin) ? OPT_NOWIN : 0);

	
	aucmd_restbuf(&aco);

	
	if (retval == FAIL || !bufref_valid(&bufref))
	{
	    retval = FAIL;
	    break;
	}
    }

    
    if (retval == OK)
    {
	do_doautocmd(arg, FALSE, &did_aucmd);
	if (call_do_modelines && did_aucmd)
	    do_modelines(0);
    }
}


    int
check_nomodeline(char_u **argp)
{
    if (STRNCMP(*argp, "<nomodeline>", 12) == 0)
    {
	*argp = skipwhite(*argp + 12);
	return FALSE;
    }
    return TRUE;
}


    void
aucmd_prepbuf(
    aco_save_T	*aco,		
    buf_T	*buf)		
{
    win_T	*win;
    int		save_ea;
#ifdef FEAT_AUTOCHDIR
    int		save_acd;
#endif

    
    if (buf == curbuf)		
	win = curwin;
    else
	FOR_ALL_WINDOWS(win)
	    if (win->w_buffer == buf)
		break;

    
    win_T *auc_win = NULL;
    int auc_idx = AUCMD_WIN_COUNT;
    if (win == NULL)
    {
	for (auc_idx = 0; auc_idx < AUCMD_WIN_COUNT; ++auc_idx)
	    if (!aucmd_win[auc_idx].auc_win_used)
	    {
		if (aucmd_win[auc_idx].auc_win == NULL)
		    aucmd_win[auc_idx].auc_win = win_alloc_popup_win();
		auc_win = aucmd_win[auc_idx].auc_win;
		if (auc_win != NULL)
		    aucmd_win[auc_idx].auc_win_used = TRUE;
		break;
	    }

	
	
	
	if (auc_win == NULL)
	    return;
    }

    aco->save_curwin_id = curwin->w_id;
    aco->save_prevwin_id = prevwin == NULL ? 0 : prevwin->w_id;
    aco->save_State = State;
#ifdef FEAT_JOB_CHANNEL
    if (bt_prompt(curbuf))
	aco->save_prompt_insert = curbuf->b_prompt_insert;
#endif

    if (win != NULL)
    {
	
	
	
	aco->use_aucmd_win_idx = -1;
	curwin = win;
    }
    else
    {
	
	
	
	
	aco->use_aucmd_win_idx = auc_idx;

	win_init_popup_win(auc_win, buf);

	
	
	
	aco->tp_localdir = curtab->tp_localdir;
	curtab->tp_localdir = NULL;
	aco->globaldir = globaldir;
	globaldir = NULL;

	
	
	block_autocmds();
	make_snapshot(SNAP_AUCMD_IDX);
	save_ea = p_ea;
	p_ea = FALSE;

#ifdef FEAT_AUTOCHDIR
	
	save_acd = p_acd;
	p_acd = FALSE;
#endif

	(void)win_split_ins(0, WSP_TOP | WSP_FORCE_ROOM, auc_win, 0, NULL);
	(void)win_comp_pos();   
	p_ea = save_ea;
#ifdef FEAT_AUTOCHDIR
	p_acd = save_acd;
#endif
	unblock_autocmds();
	curwin = auc_win;
    }
    curbuf = buf;
    aco->new_curwin_id = curwin->w_id;
    set_bufref(&aco->new_curbuf, curbuf);

    
    aco->save_VIsual_active = VIsual_active;
    VIsual_active = FALSE;
}


    void
aucmd_restbuf(
    aco_save_T	*aco)		
{
    int	    dummy;
    win_T   *save_curwin;

    if (aco->use_aucmd_win_idx >= 0)
    {
	win_T *awp = aucmd_win[aco->use_aucmd_win_idx].auc_win;

	
	
	block_autocmds();
	if (curwin != awp)
	{
	    tabpage_T	*tp;
	    win_T	*wp;

	    FOR_ALL_TAB_WINDOWS(tp, wp)
	    {
		if (wp == awp)
		{
		    if (tp != curtab)
			goto_tabpage_tp(tp, TRUE, TRUE);
		    win_goto(awp);
		    goto win_found;
		}
	    }
	}
win_found:
	--curbuf->b_nwindows;
#ifdef FEAT_JOB_CHANNEL
	int save_stop_insert_mode = stop_insert_mode;
	
	leaving_window(curwin);
	
	if (aco->save_State & MODE_INSERT)
	    stop_insert_mode = save_stop_insert_mode;
#endif
	
	(void)winframe_remove(curwin, &dummy, NULL, NULL);
	win_remove(curwin, NULL);

	
	
	aucmd_win[aco->use_aucmd_win_idx].auc_win_used = FALSE;
	last_status(FALSE);	    

	if (!valid_tabpage_win(curtab))
	    
	    close_tabpage(curtab);

	restore_snapshot(SNAP_AUCMD_IDX, FALSE);
	(void)win_comp_pos();   
	unblock_autocmds();

	save_curwin = win_find_by_id(aco->save_curwin_id);
	if (save_curwin != NULL)
	    curwin = save_curwin;
	else
	    
	    curwin = firstwin;
	curbuf = curwin->w_buffer;
#ifdef FEAT_JOB_CHANNEL
	
	entering_window(curwin);
	if (bt_prompt(curbuf))
	    curbuf->b_prompt_insert = aco->save_prompt_insert;
#endif
	prevwin = win_find_by_id(aco->save_prevwin_id);
#ifdef FEAT_EVAL
	vars_clear(&awp->w_vars->dv_hashtab);  
	hash_init(&awp->w_vars->dv_hashtab);   
#endif
	
	
	if (awp->w_localdir != NULL)
	    win_fix_current_dir();
	vim_free(curtab->tp_localdir);
	curtab->tp_localdir = aco->tp_localdir;
	vim_free(globaldir);
	globaldir = aco->globaldir;

	
	VIsual_active = aco->save_VIsual_active;
	check_cursor();
	if (curwin->w_topline > curbuf->b_ml.ml_line_count)
	{
	    curwin->w_topline = curbuf->b_ml.ml_line_count;
#ifdef FEAT_DIFF
	    curwin->w_topfill = 0;
#endif
	}
#if defined(FEAT_GUI)
	if (gui.in_use)
	{
	    
	    gui_mch_enable_scrollbar(&awp->w_scrollbars[SBAR_LEFT], FALSE);
	    gui_mch_enable_scrollbar(&awp->w_scrollbars[SBAR_RIGHT], FALSE);
	    gui_may_update_scrollbars();
	}
#endif
    }
    else
    {
	
	
	save_curwin = win_find_by_id(aco->save_curwin_id);
	if (save_curwin != NULL)
	{
	    
	    
	    
	    if (curwin->w_id == aco->new_curwin_id
		    && curbuf != aco->new_curbuf.br_buf
		    && bufref_valid(&aco->new_curbuf)
		    && aco->new_curbuf.br_buf->b_ml.ml_mfp != NULL)
	    {
# if defined(FEAT_SYN_HL) || defined(FEAT_SPELL)
		if (curwin->w_s == &curbuf->b_s)
		    curwin->w_s = &aco->new_curbuf.br_buf->b_s;
# endif
		--curbuf->b_nwindows;
		curbuf = aco->new_curbuf.br_buf;
		curwin->w_buffer = curbuf;
		++curbuf->b_nwindows;
	    }

	    curwin = save_curwin;
	    curbuf = curwin->w_buffer;
	    prevwin = win_find_by_id(aco->save_prevwin_id);

	    
	    
	    VIsual_active = aco->save_VIsual_active;
	    check_cursor();
	}
    }

    VIsual_active = aco->save_VIsual_active;
    check_cursor();	    
    if (VIsual_active)
	check_pos(curbuf, &VIsual);
}

static int	autocmd_nested = FALSE;


    int
apply_autocmds(
    event_T	event,
    char_u	*fname,	    
    char_u	*fname_io,  
    int		force,	    
    buf_T	*buf)	    
{
    return apply_autocmds_group(event, fname, fname_io, force,
						      AUGROUP_ALL, buf, NULL);
}


    int
apply_autocmds_exarg(
    event_T	event,
    char_u	*fname,
    char_u	*fname_io,
    int		force,
    buf_T	*buf,
    exarg_T	*eap)
{
    return apply_autocmds_group(event, fname, fname_io, force,
						       AUGROUP_ALL, buf, eap);
}


    int
apply_autocmds_retval(
    event_T	event,
    char_u	*fname,	    
    char_u	*fname_io,  
    int		force,	    
    buf_T	*buf,	    
    int		*retval)    
{
    int		did_cmd;

#ifdef FEAT_EVAL
    if (should_abort(*retval))
	return FALSE;
#endif

    did_cmd = apply_autocmds_group(event, fname, fname_io, force,
						      AUGROUP_ALL, buf, NULL);
    if (did_cmd
#ifdef FEAT_EVAL
	    && aborting()
#endif
	    )
	*retval = FAIL;
    return did_cmd;
}


    static int
has_cursorhold(void)
{
    return (first_autopat[(int)(get_real_state() == MODE_NORMAL_BUSY
			    ? EVENT_CURSORHOLD : EVENT_CURSORHOLDI)] != NULL);
}


    int
trigger_cursorhold(void)
{
    int		state;

    if (!did_cursorhold
	    && has_cursorhold()
	    && reg_recording == 0
	    && typebuf.tb_len == 0
	    && !ins_compl_active())
    {
	state = get_real_state();
	if (state == MODE_NORMAL_BUSY || (state & MODE_INSERT) != 0)
	    return TRUE;
    }
    return FALSE;
}


    int
has_winresized(void)
{
    return (first_autopat[(int)EVENT_WINRESIZED] != NULL);
}


    int
has_winscrolled(void)
{
    return (first_autopat[(int)EVENT_WINSCROLLED] != NULL);
}


    int
has_cursormoved(void)
{
    return (first_autopat[(int)EVENT_CURSORMOVED] != NULL);
}


    int
has_cursormovedI(void)
{
    return (first_autopat[(int)EVENT_CURSORMOVEDI] != NULL);
}


    int
has_textchanged(void)
{
    return (first_autopat[(int)EVENT_TEXTCHANGED] != NULL);
}


    int
has_textchangedI(void)
{
    return (first_autopat[(int)EVENT_TEXTCHANGEDI] != NULL);
}


    int
has_textchangedP(void)
{
    return (first_autopat[(int)EVENT_TEXTCHANGEDP] != NULL);
}


    int
has_insertcharpre(void)
{
    return (first_autopat[(int)EVENT_INSERTCHARPRE] != NULL);
}


    int
has_keyinputpre(void)
{
    return (first_autopat[(int)EVENT_KEYINPUTPRE] != NULL);
}


    int
has_cmdundefined(void)
{
    return (first_autopat[(int)EVENT_CMDUNDEFINED] != NULL);
}

#if defined(FEAT_EVAL) || defined(PROTO)

    int
has_textyankpost(void)
{
    return (first_autopat[(int)EVENT_TEXTYANKPOST] != NULL);
}
#endif

#if defined(FEAT_EVAL) || defined(PROTO)

    int
has_completechanged(void)
{
    return (first_autopat[(int)EVENT_COMPLETECHANGED] != NULL);
}
#endif

#if defined(FEAT_EVAL) || defined(PROTO)

    int
has_modechanged(void)
{
    return (first_autopat[(int)EVENT_MODECHANGED] != NULL);
}
#endif


    static int
apply_autocmds_group(
    event_T	event,
    char_u	*fname,	     
    char_u	*fname_io,   
			     
    int		force,	     
    int		group,	     
    buf_T	*buf,	     
    exarg_T	*eap UNUSED) 
{
    char_u	*sfname = NULL;	
    char_u	*tail;
    int		save_changed;
    buf_T	*old_curbuf;
    int		retval = FALSE;
    char_u	*save_autocmd_fname;
    int		save_autocmd_fname_full;
    int		save_autocmd_bufnr;
    char_u	*save_autocmd_match;
    int		save_autocmd_busy;
    int		save_autocmd_nested;
    static int	nesting = 0;
    AutoPatCmd_T patcmd;
    AutoPat	*ap;
    sctx_T	save_current_sctx;
#ifdef FEAT_EVAL
    funccal_entry_T funccal_entry;
    char_u	*save_cmdarg;
    int	save_cmdbang;
#endif
    static int	filechangeshell_busy = FALSE;
#ifdef FEAT_PROFILE
    proftime_T	wait_time;
#endif
    int		did_save_redobuff = FALSE;
    save_redo_T	save_redo;
    int		save_KeyTyped = KeyTyped;
    ESTACK_CHECK_DECLARATION;

    
    if (event == NUM_EVENTS || first_autopat[(int)event] == NULL
	    || autocmd_blocked > 0)
	goto BYPASS_AU;

    
    if (autocmd_busy && !(force || autocmd_nested))
	goto BYPASS_AU;

#ifdef FEAT_EVAL
    
    if (aborting())
	goto BYPASS_AU;
#endif

    
    if (filechangeshell_busy && (event == EVENT_FILECHANGEDSHELL
				      || event == EVENT_FILECHANGEDSHELLPOST))
	goto BYPASS_AU;

    
    if (event_ignored(event))
	goto BYPASS_AU;

    
    if (nesting == 10)
    {
	emsg(_(e_autocommand_nesting_too_deep));
	goto BYPASS_AU;
    }

    
    if (       (autocmd_no_enter
		&& (event == EVENT_WINENTER || event == EVENT_BUFENTER))
	    || (autocmd_no_leave
		&& (event == EVENT_WINLEAVE || event == EVENT_BUFLEAVE)))
	goto BYPASS_AU;

    if (event == EVENT_CMDLINECHANGED)
	++aucmd_cmdline_changed_count;

    
    save_autocmd_fname = autocmd_fname;
    save_autocmd_fname_full = autocmd_fname_full;
    save_autocmd_bufnr = autocmd_bufnr;
    save_autocmd_match = autocmd_match;
    save_autocmd_busy = autocmd_busy;
    save_autocmd_nested = autocmd_nested;
    save_changed = curbuf->b_changed;
    old_curbuf = curbuf;

    
    if (fname_io == NULL)
    {
	if (event == EVENT_COLORSCHEME || event == EVENT_COLORSCHEMEPRE
						 || event == EVENT_OPTIONSET
						 || event == EVENT_MODECHANGED
						 || event == EVENT_TERMRESPONSEALL)
	    autocmd_fname = NULL;
	else if (fname != NULL && !ends_excmd(*fname))
	    autocmd_fname = fname;
	else if (buf != NULL)
	    autocmd_fname = buf->b_ffname;
	else
	    autocmd_fname = NULL;
    }
    else
	autocmd_fname = fname_io;
    if (autocmd_fname != NULL)
	autocmd_fname = vim_strsave(autocmd_fname);
    autocmd_fname_full = FALSE; 

    
    if (buf == NULL)
	autocmd_bufnr = 0;
    else
	autocmd_bufnr = buf->b_fnum;

    
    if (fname == NULL || *fname == NUL)
    {
	if (buf == NULL)
	    fname = NULL;
	else
	{
#ifdef FEAT_SYN_HL
	    if (event == EVENT_SYNTAX)
		fname = buf->b_p_syn;
	    else
#endif
		if (event == EVENT_FILETYPE)
		    fname = buf->b_p_ft;
		else
		{
		    if (buf->b_sfname != NULL)
			sfname = vim_strsave(buf->b_sfname);
		    fname = buf->b_ffname;
		}
	}
	if (fname == NULL)
	    fname = (char_u *)"";
	fname = vim_strsave(fname);	
    }
    else
    {
	sfname = vim_strsave(fname);
	
	
	if (event == EVENT_FILETYPE
		|| event == EVENT_SYNTAX
		|| event == EVENT_CMDLINECHANGED
		|| event == EVENT_CMDLINEENTER
		|| event == EVENT_CMDLINELEAVE
		|| event == EVENT_CURSORMOVEDC
		|| event == EVENT_CMDWINENTER
		|| event == EVENT_CMDWINLEAVE
		|| event == EVENT_CMDUNDEFINED
		|| event == EVENT_FUNCUNDEFINED
		|| event == EVENT_KEYINPUTPRE
		|| event == EVENT_REMOTEREPLY
		|| event == EVENT_SPELLFILEMISSING
		|| event == EVENT_QUICKFIXCMDPRE
		|| event == EVENT_COLORSCHEME
		|| event == EVENT_COLORSCHEMEPRE
		|| event == EVENT_OPTIONSET
		|| event == EVENT_QUICKFIXCMDPOST
		|| event == EVENT_DIRCHANGED
		|| event == EVENT_DIRCHANGEDPRE
		|| event == EVENT_MODECHANGED
		|| event == EVENT_MENUPOPUP
		|| event == EVENT_USER
		|| event == EVENT_WINCLOSED
		|| event == EVENT_WINRESIZED
		|| event == EVENT_WINSCROLLED
		|| event == EVENT_TERMRESPONSEALL)
	{
	    fname = vim_strsave(fname);
	    autocmd_fname_full = TRUE; 
	}
	else
	    fname = FullName_save(fname, FALSE);
    }
    if (fname == NULL)	    
    {
	vim_free(sfname);
	retval = FALSE;
	goto BYPASS_AU;
    }

#ifdef BACKSLASH_IN_FILENAME
    
    if (sfname != NULL)
	forward_slash(sfname);
    forward_slash(fname);
#endif

#ifdef VMS
    
    if (sfname != NULL)
	vms_remove_version(sfname);
    vms_remove_version(fname);
#endif

    
    autocmd_match = fname;


    
    ++RedrawingDisabled;

    
    estack_push(ETYPE_AUCMD, NULL, 0);
    ESTACK_CHECK_SETUP;

    save_current_sctx = current_sctx;

#ifdef FEAT_EVAL
# ifdef FEAT_PROFILE
    if (do_profiling == PROF_YES)
	prof_child_enter(&wait_time); 
# endif

    
    save_funccal(&funccal_entry);
#endif

    
    if (!autocmd_busy)
    {
	save_search_patterns();
	if (!ins_compl_active())
	{
	    saveRedobuff(&save_redo);
	    did_save_redobuff = TRUE;
	}
	curbuf->b_did_filetype = curbuf->b_keep_filetype;
    }

    
    autocmd_busy = TRUE;
    filechangeshell_busy = (event == EVENT_FILECHANGEDSHELL);
    ++nesting;		

    
    if (event == EVENT_FILETYPE)
	curbuf->b_did_filetype = TRUE;

    tail = gettail(fname);

    
    CLEAR_FIELD(patcmd);
    patcmd.curpat = first_autopat[(int)event];
    patcmd.group = group;
    patcmd.fname = fname;
    patcmd.sfname = sfname;
    patcmd.tail = tail;
    patcmd.event = event;
    patcmd.arg_bufnr = autocmd_bufnr;
    auto_next_pat(&patcmd, FALSE);

    
    if (patcmd.curpat != NULL)
    {
	
	patcmd.next = active_apc_list;
	active_apc_list = &patcmd;

#ifdef FEAT_EVAL
	
	save_cmdbang = (int)get_vim_var_nr(VV_CMDBANG);
	if (eap != NULL)
	{
	    save_cmdarg = set_cmdarg(eap, NULL);
	    set_vim_var_nr(VV_CMDBANG, (int)eap->forceit);
	}
	else
	    save_cmdarg = NULL;	
#endif
	retval = TRUE;
	
	
	for (ap = patcmd.curpat; ap->next != NULL; ap = ap->next)
	    ap->last = FALSE;
	ap->last = TRUE;

	
	
	
	if (nesting == 1)
	    check_lnums(TRUE);
	else
	    check_lnums_nested(TRUE);

	int save_did_emsg = did_emsg;
	int save_ex_pressedreturn = get_pressedreturn();

	do_cmdline(NULL, getnextac, (void *)&patcmd,
				     DOCMD_NOWAIT|DOCMD_VERBOSE|DOCMD_REPEAT);

	did_emsg += save_did_emsg;
	set_pressedreturn(save_ex_pressedreturn);

	if (nesting == 1)
	    
	    reset_lnums();

#ifdef FEAT_EVAL
	if (eap != NULL)
	{
	    (void)set_cmdarg(NULL, save_cmdarg);
	    set_vim_var_nr(VV_CMDBANG, save_cmdbang);
	}
#endif
	
	if (active_apc_list == &patcmd)	    
	    active_apc_list = patcmd.next;
    }

    if (RedrawingDisabled > 0)
	--RedrawingDisabled;
    autocmd_busy = save_autocmd_busy;
    filechangeshell_busy = FALSE;
    autocmd_nested = save_autocmd_nested;
    vim_free(SOURCING_NAME);
    ESTACK_CHECK_NOW;
    estack_pop();
    vim_free(autocmd_fname);
    autocmd_fname = save_autocmd_fname;
    autocmd_fname_full = save_autocmd_fname_full;
    autocmd_bufnr = save_autocmd_bufnr;
    autocmd_match = save_autocmd_match;
    current_sctx = save_current_sctx;
#ifdef FEAT_EVAL
    restore_funccal();
# ifdef FEAT_PROFILE
    if (do_profiling == PROF_YES)
	prof_child_exit(&wait_time);
# endif
#endif
    KeyTyped = save_KeyTyped;
    vim_free(fname);
    vim_free(sfname);
    --nesting;		

    
    if (!autocmd_busy)
    {
	restore_search_patterns();
	if (did_save_redobuff)
	    restoreRedobuff(&save_redo);
	curbuf->b_did_filetype = FALSE;
	while (au_pending_free_buf != NULL)
	{
	    buf_T *b = au_pending_free_buf->b_next;

	    vim_free(au_pending_free_buf);
	    au_pending_free_buf = b;
	}
	while (au_pending_free_win != NULL)
	{
	    win_T *w = au_pending_free_win->w_next;

	    vim_free(au_pending_free_win);
	    au_pending_free_win = w;
	}
    }

    
    if (curbuf == old_curbuf
	    && (event == EVENT_BUFREADPOST
		|| event == EVENT_BUFWRITEPOST
		|| event == EVENT_FILEAPPENDPOST
		|| event == EVENT_VIMLEAVE
		|| event == EVENT_VIMLEAVEPRE))
    {
	if (curbuf->b_changed != save_changed)
	    need_maketitle = TRUE;
	curbuf->b_changed = save_changed;
    }

    au_cleanup();	

BYPASS_AU:
    
    
    if (event == EVENT_BUFWIPEOUT && buf != NULL)
	aubuflocal_remove(buf);

    if (retval == OK && event == EVENT_FILETYPE)
	curbuf->b_au_did_filetype = TRUE;

    return retval;
}

# ifdef FEAT_EVAL
static char_u	*old_termresponse = NULL;
static char_u	*old_termu7resp = NULL;
static char_u	*old_termblinkresp = NULL;
static char_u	*old_termrbgresp = NULL;
static char_u	*old_termrfgresp = NULL;
static char_u	*old_termstyleresp = NULL;
# endif


    void
block_autocmds(void)
{
# ifdef FEAT_EVAL
    
    if (autocmd_blocked == 0)
    {
	old_termresponse = get_vim_var_str(VV_TERMRESPONSE);
	old_termu7resp = get_vim_var_str(VV_TERMU7RESP);
	old_termblinkresp = get_vim_var_str(VV_TERMBLINKRESP);
	old_termrbgresp = get_vim_var_str(VV_TERMRBGRESP);
	old_termrfgresp = get_vim_var_str(VV_TERMRFGRESP);
	old_termstyleresp = get_vim_var_str(VV_TERMSTYLERESP);
    }
# endif
    ++autocmd_blocked;
}

    void
unblock_autocmds(void)
{
    --autocmd_blocked;

# ifdef FEAT_EVAL
    
    
    
    if (autocmd_blocked == 0)
    {
	if (get_vim_var_str(VV_TERMRESPONSE) != old_termresponse)
	{
	    apply_autocmds(EVENT_TERMRESPONSE, NULL, NULL, FALSE, curbuf);
	    apply_autocmds(EVENT_TERMRESPONSEALL, (char_u *)"version", NULL, FALSE, curbuf);
	}
	if (get_vim_var_str(VV_TERMU7RESP) != old_termu7resp)
	{
	    apply_autocmds(EVENT_TERMRESPONSEALL, (char_u *)"ambiguouswidth", NULL, FALSE, curbuf);
	}
	if (get_vim_var_str(VV_TERMBLINKRESP) != old_termblinkresp)
	{
	    apply_autocmds(EVENT_TERMRESPONSEALL, (char_u *)"cursorblink", NULL, FALSE, curbuf);
	}
	if (get_vim_var_str(VV_TERMRBGRESP) != old_termrbgresp)
	{
	    apply_autocmds(EVENT_TERMRESPONSEALL, (char_u *)"background", NULL, FALSE, curbuf);
	}
	if (get_vim_var_str(VV_TERMRFGRESP) != old_termrfgresp)
	{
	    apply_autocmds(EVENT_TERMRESPONSEALL, (char_u *)"foreground", NULL, FALSE, curbuf);
	}
	if (get_vim_var_str(VV_TERMSTYLERESP) != old_termstyleresp)
	{
	    apply_autocmds(EVENT_TERMRESPONSEALL, (char_u *)"cursorshape", NULL, FALSE, curbuf);
	}
    }
# endif
}

    int
is_autocmd_blocked(void)
{
    return autocmd_blocked != 0;
}


    static void
auto_next_pat(
    AutoPatCmd_T *apc,
    int		stop_at_last)	    
{
    AutoPat	*ap;
    AutoCmd	*cp;
    char_u	*name;
    char	*s;
    estack_T	*entry;
    char_u	*namep;

    entry = ((estack_T *)exestack.ga_data) + exestack.ga_len - 1;

    
    VIM_CLEAR(entry->es_name);
    entry->es_info.aucmd = NULL;

    for (ap = apc->curpat; ap != NULL && !got_int; ap = ap->next)
    {
	apc->curpat = NULL;

	
	
	
	if (ap->pat != NULL && ap->cmds != NULL
		&& (apc->group == AUGROUP_ALL || apc->group == ap->group))
	{
	    
	    if (ap->buflocal_nr == 0
		    ? (match_file_pat(NULL, &ap->reg_prog, apc->fname,
				      apc->sfname, apc->tail, ap->allow_dirs))
		    : ap->buflocal_nr == apc->arg_bufnr)
	    {
		name = event_nr2name(apc->event);
		s = _("%s Autocommands for \"%s\"");
		namep = alloc(STRLEN(s) + STRLEN(name) + ap->patlen + 1);
		if (namep != NULL)
		{
		    sprintf((char *)namep, s, (char *)name, (char *)ap->pat);
		    if (p_verbose >= 8)
		    {
			verbose_enter();
			smsg(_("Executing %s"), namep);
			verbose_leave();
		    }
		}

		
		entry->es_name = namep;
		entry->es_info.aucmd = apc;

		apc->curpat = ap;
		apc->nextcmd = ap->cmds;
		
		for (cp = ap->cmds; cp->next != NULL; cp = cp->next)
		    cp->last = FALSE;
		cp->last = TRUE;
	    }
	    line_breakcheck();
	    if (apc->curpat != NULL)	    
		break;
	}
	if (stop_at_last && ap->last)
	    break;
    }
}

#if defined(FEAT_EVAL) || defined(PROTO)

    sctx_T *
acp_script_ctx(AutoPatCmd_T *acp)
{
    return &acp->script_ctx;
}
#endif


    char_u *
getnextac(
	int c UNUSED,
	void *cookie,
	int indent UNUSED,
	getline_opt_T options UNUSED)
{
    AutoPatCmd_T    *acp = (AutoPatCmd_T *)cookie;
    char_u	    *retval;
    AutoCmd	    *ac;

    
    if (acp->curpat == NULL)
	return NULL;

    
    for (;;)
    {
	
	while (acp->nextcmd != NULL && acp->nextcmd->cmd == NULL)
	    if (acp->nextcmd->last)
		acp->nextcmd = NULL;
	    else
		acp->nextcmd = acp->nextcmd->next;

	if (acp->nextcmd != NULL)
	    break;

	
	if (acp->curpat->last)
	    acp->curpat = NULL;
	else
	    acp->curpat = acp->curpat->next;
	if (acp->curpat != NULL)
	    auto_next_pat(acp, TRUE);
	if (acp->curpat == NULL)
	    return NULL;
    }

    ac = acp->nextcmd;

    if (p_verbose >= 9)
    {
	verbose_enter_scroll();
	smsg(_("autocommand %s"), ac->cmd);
	msg_puts("\n");   
	verbose_leave_scroll();
    }
    retval = vim_strsave(ac->cmd);
    
    if (ac->once)
	au_del_cmd(ac);
    autocmd_nested = ac->nested;
    current_sctx = ac->script_ctx;
    acp->script_ctx = current_sctx;
    if (ac->last)
	acp->nextcmd = NULL;
    else
	acp->nextcmd = ac->next;
    return retval;
}


    int
has_autocmd(event_T event, char_u *sfname, buf_T *buf)
{
    AutoPat	*ap;
    char_u	*fname;
    char_u	*tail = gettail(sfname);
    int		retval = FALSE;

    fname = FullName_save(sfname, FALSE);
    if (fname == NULL)
	return FALSE;

#ifdef BACKSLASH_IN_FILENAME
    
    sfname = vim_strsave(sfname);
    if (sfname != NULL)
	forward_slash(sfname);
    forward_slash(fname);
#endif

    FOR_ALL_AUTOCMD_PATTERNS(event, ap)
	if (ap->pat != NULL && ap->cmds != NULL
	      && (ap->buflocal_nr == 0
		? match_file_pat(NULL, &ap->reg_prog,
					  fname, sfname, tail, ap->allow_dirs)
		: buf != NULL && ap->buflocal_nr == buf->b_fnum
	   ))
	{
	    retval = TRUE;
	    break;
	}

    vim_free(fname);
#ifdef BACKSLASH_IN_FILENAME
    vim_free(sfname);
#endif

    return retval;
}


    char_u *
get_augroup_name(expand_T *xp UNUSED, int idx)
{
    if (idx == augroups.ga_len)		
	return (char_u *)"END";
    if (idx < 0 || idx >= augroups.ga_len)	
	return NULL;
    if (AUGROUP_NAME(idx) == NULL || AUGROUP_NAME(idx) == get_deleted_augroup())
	
	return (char_u *)"";
    return AUGROUP_NAME(idx);		
}

static int include_groups = FALSE;

    char_u  *
set_context_in_autocmd(
    expand_T	*xp,
    char_u	*arg,
    int		doautocmd)	
{
    char_u	*p;
    int		group;

    
    include_groups = FALSE;
    p = arg;
    group = au_get_grouparg(&arg);
    if (group == AUGROUP_ERROR)
	return NULL;
    
    if (*arg == NUL && group != AUGROUP_ALL && !VIM_ISWHITE(arg[-1]))
    {
	arg = p;
	group = AUGROUP_ALL;
    }

    
    for (p = arg; *p != NUL && !VIM_ISWHITE(*p); ++p)
	if (*p == ',')
	    arg = p + 1;
    if (*p == NUL)
    {
	if (group == AUGROUP_ALL)
	    include_groups = TRUE;
	xp->xp_context = EXPAND_EVENTS;	    
	xp->xp_pattern = arg;
	return NULL;
    }

    
    arg = skipwhite(p);
    while (*arg && (!VIM_ISWHITE(*arg) || arg[-1] == '\\'))
	arg++;
    if (*arg)
	return arg;			    

    if (doautocmd)
	xp->xp_context = EXPAND_FILES;	    
    else
	xp->xp_context = EXPAND_NOTHING;    
    return NULL;
}


    char_u *
get_event_name(expand_T *xp UNUSED, int idx)
{
    int i;

    if (idx < augroups.ga_len)		
    {
	if (!include_groups || AUGROUP_NAME(idx) == NULL
				 || AUGROUP_NAME(idx) == get_deleted_augroup())
	    return (char_u *)"";	
	return AUGROUP_NAME(idx);	
    }

    i = idx - augroups.ga_len;
    if (i < 0 || i >= (int)ARRAY_LENGTH(event_tab))
	return NULL;

    return (char_u *)event_tab[i].value;
}


    char_u *
get_event_name_no_group(expand_T *xp UNUSED, int idx)
{
    if (idx < 0 || idx >= (int)ARRAY_LENGTH(event_tab))
	return NULL;

    return (char_u *)event_tab[idx].value;
}


#if defined(FEAT_EVAL) || defined(PROTO)

    int
autocmd_supported(char_u *name)
{
    char_u *p;

    return (event_name2nr(name, &p) != NUM_EVENTS);
}


    int
au_exists(char_u *arg)
{
    char_u	*arg_save;
    char_u	*pattern = NULL;
    char_u	*event_name;
    char_u	*p;
    event_T	event;
    AutoPat	*ap;
    buf_T	*buflocal_buf = NULL;
    int		group;
    int		retval = FALSE;

    
    arg_save = vim_strsave(arg);
    if (arg_save == NULL)
	return FALSE;
    p = vim_strchr(arg_save, '#');
    if (p != NULL)
	*p++ = NUL;

    
    group = au_find_group(arg_save);
    if (group == AUGROUP_ERROR)
    {
	
	group = AUGROUP_ALL;
	event_name = arg_save;
    }
    else
    {
	if (p == NULL)
	{
	    
	    retval = TRUE;
	    goto theend;
	}

	
	event_name = p;
	p = vim_strchr(event_name, '#');
	if (p != NULL)
	    *p++ = NUL;	    
    }

    pattern = p;	    

    
    event = event_name2nr(event_name, &p);

    
    if (event == NUM_EVENTS)
	goto theend;

    
    
    
    ap = first_autopat[(int)event];
    if (ap == NULL)
	goto theend;

    
    
    if (pattern != NULL && STRICMP(pattern, "<buffer>") == 0)
	buflocal_buf = curbuf;

    
    for ( ; ap != NULL; ap = ap->next)
	
	
	if (ap->pat != NULL && ap->cmds != NULL
	    && (group == AUGROUP_ALL || ap->group == group)
	    && (pattern == NULL
		|| (buflocal_buf == NULL
		    ? fnamecmp(ap->pat, pattern) == 0
		    : ap->buflocal_nr == buflocal_buf->b_fnum)))
	{
	    retval = TRUE;
	    break;
	}

theend:
    vim_free(arg_save);
    return retval;
}


    static void
autocmd_add_or_delete(typval_T *argvars, typval_T *rettv, int delete)
{
    list_T	*aucmd_list;
    listitem_T	*li;
    dict_T	*event_dict;
    dictitem_T	*di;
    char_u	*event_name = NULL;
    list_T	*event_list;
    listitem_T	*eli;
    event_T	event;
    char_u	*group_name = NULL;
    int		group;
    char_u	*pat = NULL;
    list_T	*pat_list;
    listitem_T	*pli;
    char_u	*cmd = NULL;
    char_u	*end;
    int		once;
    int		nested;
    int		replace;		
    int		retval = VVAL_TRUE;
    int		save_augroup = current_augroup;

    rettv->v_type = VAR_BOOL;
    rettv->vval.v_number = VVAL_FALSE;

    if (check_for_list_arg(argvars, 0) == FAIL)
	return;

    aucmd_list = argvars[0].vval.v_list;
    if (aucmd_list == NULL)
	return;

    FOR_ALL_LIST_ITEMS(aucmd_list, li)
    {
	VIM_CLEAR(group_name);
	VIM_CLEAR(cmd);
	event_name = NULL;
	event_list = NULL;
	pat = NULL;
	pat_list = NULL;

	if (li->li_tv.v_type != VAR_DICT)
	    continue;

	event_dict = li->li_tv.vval.v_dict;
	if (event_dict == NULL)
	    continue;

	di = dict_find(event_dict, (char_u *)"event", -1);
	if (di != NULL)
	{
	    if (di->di_tv.v_type == VAR_STRING)
	    {
		event_name = di->di_tv.vval.v_string;
		if (event_name == NULL)
		{
		    emsg(_(e_string_required));
		    continue;
		}
	    }
	    else if (di->di_tv.v_type == VAR_LIST)
	    {
		event_list = di->di_tv.vval.v_list;
		if (event_list == NULL)
		{
		    emsg(_(e_list_required));
		    continue;
		}
	    }
	    else
	    {
		emsg(_(e_string_or_list_expected));
		continue;
	    }
	}

	group_name = dict_get_string(event_dict, "group", TRUE);
	if (group_name == NULL || *group_name == NUL)
	    
	    
	    group = current_augroup;
	else
	{
	    group = au_find_group(group_name);
	    if (group == AUGROUP_ERROR)
	    {
		if (delete)
		{
		    semsg(_(e_no_such_group_str), group_name);
		    retval = VVAL_FALSE;
		    break;
		}
		
		group = au_new_group(group_name);
		if (group == AUGROUP_ERROR)
		{
		    semsg(_(e_no_such_group_str), group_name);
		    retval = VVAL_FALSE;
		    break;
		}

		current_augroup = group;
	    }
	}

	
	
	if (dict_has_key(event_dict, "bufnr"))
	{
	    varnumber_T	bnum;

	    bnum = dict_get_number_def(event_dict, "bufnr", -1);
	    if (bnum == -1)
		continue;

	    vim_snprintf((char *)IObuff, IOSIZE, "<buffer=%d>", (int)bnum);
	    pat = IObuff;
	}
	else
	{
	    di = dict_find(event_dict, (char_u *)"pattern", -1);
	    if (di != NULL)
	    {
		if (di->di_tv.v_type == VAR_STRING)
		{
		    pat = di->di_tv.vval.v_string;
		    if (pat == NULL)
		    {
			emsg(_(e_string_required));
			continue;
		    }
		}
		else if (di->di_tv.v_type == VAR_LIST)
		{
		    pat_list = di->di_tv.vval.v_list;
		    if (pat_list == NULL)
		    {
			emsg(_(e_list_required));
			continue;
		    }
		}
		else
		{
		    emsg(_(e_string_or_list_expected));
		    continue;
		}
	    }
	    else if (delete)
		pat = (char_u *)"";
	}

	once = dict_get_bool(event_dict, "once", FALSE);
	nested = dict_get_bool(event_dict, "nested", FALSE);
	
	
	replace = dict_get_bool(event_dict, "replace", FALSE);

	cmd = dict_get_string(event_dict, "cmd", TRUE);
	if (cmd == NULL)
	{
	    if (delete)
		cmd = vim_strsave((char_u *)"");
	    else
		continue;
	}

	if (delete && (event_name == NULL
		    || (event_name[0] == '*' && event_name[1] == NUL)))
	{
	    
	    for (event = (event_T)0; (int)event < NUM_EVENTS;
		    event = (event_T)((int)event + 1))
	    {
		if (do_autocmd_event(event, pat, once, nested, cmd, delete,
							group, 0) == FAIL)
		{
		    retval = VVAL_FALSE;
		    break;
		}
	    }
	}
	else
	{
	    char_u *p = NULL;

	    eli = NULL;
	    end = NULL;
	    while (TRUE)
	    {
		if (event_list != NULL)
		{
		    if (eli == NULL)
			eli = event_list->lv_first;
		    else
			eli = eli->li_next;
		    if (eli == NULL)
			break;
		    if (eli->li_tv.v_type != VAR_STRING
			    || (p = eli->li_tv.vval.v_string) == NULL)
		    {
			emsg(_(e_string_required));
			break;
		    }
		}
		else
		{
		    if (p == NULL)
			p = event_name;
		    if (p == NULL || *p == NUL)
			break;
		}

		event = event_name2nr(p, &end);
		if (event == NUM_EVENTS || *end != NUL)
		{
		    
		    semsg(_(e_no_such_event_str), p);
		    retval = VVAL_FALSE;
		    break;
		}
		if (pat != NULL)
		{
		    if (do_autocmd_event(event, pat, once, nested, cmd,
				delete | replace, group, 0) == FAIL)
		    {
			retval = VVAL_FALSE;
			break;
		    }
		}
		else if (pat_list != NULL)
		{
		    FOR_ALL_LIST_ITEMS(pat_list, pli)
		    {
			if (pli->li_tv.v_type != VAR_STRING
				|| pli->li_tv.vval.v_string == NULL)
			{
			    emsg(_(e_string_required));
			    continue;
			}
			if (do_autocmd_event(event,
				    pli->li_tv.vval.v_string, once, nested,
				    cmd, delete | replace, group, 0) ==
				FAIL)
			{
			    retval = VVAL_FALSE;
			    break;
			}
		    }
		    if (retval == VVAL_FALSE)
			break;
		}
		if (event_name != NULL)
		    p = end;
	    }
	}

	
	
	
	if (delete && group_name != NULL &&
		(event_name == NULL || event_name[0] == NUL)
		&& (pat == NULL || pat[0] == NUL)
		&& (cmd == NULL || cmd[0] == NUL))
	    au_del_group(group_name);
    }

    VIM_CLEAR(group_name);
    VIM_CLEAR(cmd);

    current_augroup = save_augroup;
    rettv->vval.v_number = retval;
}


    void
f_autocmd_add(typval_T *argvars, typval_T *rettv)
{
    autocmd_add_or_delete(argvars, rettv, FALSE);
}


    void
f_autocmd_delete(typval_T *argvars, typval_T *rettv)
{
    autocmd_add_or_delete(argvars, rettv, TRUE);
}


    void
f_autocmd_get(typval_T *argvars, typval_T *rettv)
{
    event_T	event_arg = NUM_EVENTS;
    event_T	event;
    AutoPat	*ap;
    AutoCmd	*ac;
    list_T	*event_list;
    dict_T	*event_dict;
    char_u	*event_name = NULL;
    char_u	*pat = NULL;
    char_u	*name = NULL;
    int		group = AUGROUP_ALL;

    if (rettv_list_alloc(rettv) == FAIL)
	return;
    if (check_for_opt_dict_arg(argvars, 0) == FAIL)
	return;

    if (argvars[0].v_type == VAR_DICT)
    {
	
	if (dict_has_key(argvars[0].vval.v_dict, "group"))
	{
	    name = dict_get_string(argvars[0].vval.v_dict, "group", TRUE);
	    if (name == NULL)
		return;

	    if (*name == NUL)
		group = AUGROUP_DEFAULT;
	    else
	    {
		group = au_find_group(name);
		if (group == AUGROUP_ERROR)
		{
		    semsg(_(e_no_such_group_str), name);
		    vim_free(name);
		    return;
		}
	    }
	    vim_free(name);
	}

	
	if (dict_has_key(argvars[0].vval.v_dict, "event"))
	{
	    name = dict_get_string(argvars[0].vval.v_dict, "event", TRUE);
	    if (name == NULL)
		return;

	    if (name[0] == '*' && name[1] == NUL)
		event_arg = NUM_EVENTS;
	    else
	    {
		keyvalue_T target;
		keyvalue_T *entry;

		target.key = 0;
		target.value = (char *)name;
		target.length = (int)STRLEN(target.value);
		entry = (keyvalue_T *)bsearch(&target, &event_tab, ARRAY_LENGTH(event_tab), sizeof(event_tab[0]), cmp_keyvalue_value_ni);
		if (entry == NULL)
		{
		    semsg(_(e_no_such_event_str), name);
		    vim_free(name);
		    return;
		}
		event_arg = (event_T)entry->key;
	    }
	    vim_free(name);
	}

	
	if (dict_has_key(argvars[0].vval.v_dict, "pattern"))
	{
	    pat = dict_get_string(argvars[0].vval.v_dict, "pattern", TRUE);
	    if (pat == NULL)
		return;
	}
    }

    event_list = rettv->vval.v_list;

    
    for (event = (event_T)0; (int)event < NUM_EVENTS;
	    event = (event_T)((int)event + 1))
    {
	if (event_arg != NUM_EVENTS && event != event_arg)
	    continue;

	event_name = event_nr2name(event);

	
	FOR_ALL_AUTOCMD_PATTERNS(event, ap)
	{
	    char_u	*group_name;

	    if (ap->pat == NULL)		
		continue;

	    if (group != AUGROUP_ALL && group != ap->group)
		continue;

	    if (pat != NULL && STRCMP(pat, ap->pat) != 0)
		continue;

	    group_name = get_augroup_name(NULL, ap->group);

	    
	    
	    for (ac = ap->cmds; ac != NULL; ac = ac->next)
	    {
		event_dict = dict_alloc();
		if (event_dict == NULL
			|| list_append_dict(event_list, event_dict) == FAIL)
		{
		    vim_free(pat);
		    return;
		}

		if (dict_add_string(event_dict, "event", event_name) == FAIL
			|| dict_add_string(event_dict, "group",
					group_name == NULL ? (char_u *)""
							  : group_name) == FAIL
			|| (ap->buflocal_nr != 0
				&& (dict_add_number(event_dict, "bufnr",
						    ap->buflocal_nr) == FAIL))
			|| dict_add_string(event_dict, "pattern",
							      ap->pat) == FAIL
			|| dict_add_string(event_dict, "cmd", ac->cmd) == FAIL
			|| dict_add_bool(event_dict, "once", ac->once) == FAIL
			|| dict_add_bool(event_dict, "nested",
							   ac->nested) == FAIL)
		{
		    vim_free(pat);
		    return;
		}
	    }
	}
    }

    vim_free(pat);
}

#endif
