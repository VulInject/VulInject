



#include "vim.h"

static int	quitmore = 0;
static int	ex_pressedreturn = FALSE;
#ifndef FEAT_PRINTER
# define ex_hardcopy	ex_ni
#endif

#ifdef FEAT_EVAL
static char_u	*do_one_cmd(char_u **, int, cstack_T *, char_u *(*fgetline)(int, void *, int, getline_opt_T), void *cookie);
#else
static char_u	*do_one_cmd(char_u **, int, char_u *(*fgetline)(int, void *, int, getline_opt_T), void *cookie);
static int	if_level = 0;		
#endif
static void	append_command(char_u *cmd);

#ifndef FEAT_MENU
# define ex_emenu		ex_ni
# define ex_menu		ex_ni
# define ex_menutranslate	ex_ni
#endif
static void	ex_autocmd(exarg_T *eap);
static void	ex_doautocmd(exarg_T *eap);
static void	ex_bunload(exarg_T *eap);
static void	ex_buffer(exarg_T *eap);
static void	ex_bmodified(exarg_T *eap);
static void	ex_bnext(exarg_T *eap);
static void	ex_bprevious(exarg_T *eap);
static void	ex_brewind(exarg_T *eap);
static void	ex_blast(exarg_T *eap);
static char_u	*getargcmd(char_u **);
static int	getargopt(exarg_T *eap);
#ifndef FEAT_QUICKFIX
# define ex_make		ex_ni
# define ex_cbuffer		ex_ni
# define ex_cc			ex_ni
# define ex_cnext		ex_ni
# define ex_cbelow		ex_ni
# define ex_cfile		ex_ni
# define qf_list		ex_ni
# define qf_age			ex_ni
# define qf_history		ex_ni
# define ex_helpgrep		ex_ni
# define ex_vimgrep		ex_ni
# define ex_cclose		ex_ni
# define ex_copen		ex_ni
# define ex_cwindow		ex_ni
# define ex_cbottom		ex_ni
#endif
#if !defined(FEAT_QUICKFIX) || !defined(FEAT_EVAL)
# define ex_cexpr		ex_ni
#endif

static linenr_T default_address(exarg_T *eap);
static linenr_T get_address(exarg_T *, char_u **, cmd_addr_T addr_type, int skip, int silent, int to_other_file, int address_count);
static void address_default_all(exarg_T *eap);
static void	get_flags(exarg_T *eap);
#if !defined(FEAT_PERL) \
	|| !defined(FEAT_PYTHON) || !defined(FEAT_PYTHON3) \
	|| !defined(FEAT_TCL) \
	|| !defined(FEAT_RUBY) \
	|| !defined(FEAT_LUA) \
	|| !defined(FEAT_MZSCHEME)
# define HAVE_EX_SCRIPT_NI
static void	ex_script_ni(exarg_T *eap);
#endif
static char	*invalid_range(exarg_T *eap);
static void	correct_range(exarg_T *eap);
#ifdef FEAT_QUICKFIX
static char_u	*replace_makeprg(exarg_T *eap, char_u *p, char_u **cmdlinep);
#endif
static char_u	*repl_cmdline(exarg_T *eap, char_u *src, size_t srclen, char_u *repl, char_u **cmdlinep);
static void	ex_highlight(exarg_T *eap);
static void	ex_colorscheme(exarg_T *eap);
static void	ex_cquit(exarg_T *eap);
static void	ex_quit_all(exarg_T *eap);
static void	ex_close(exarg_T *eap);
static void	ex_win_close(int forceit, win_T *win, tabpage_T *tp);
static void	ex_only(exarg_T *eap);
static void	ex_resize(exarg_T *eap);
static void	ex_stag(exarg_T *eap);
static void	ex_tabclose(exarg_T *eap);
static void	ex_tabonly(exarg_T *eap);
static void	ex_tabnext(exarg_T *eap);
static void	ex_tabmove(exarg_T *eap);
static void	ex_tabs(exarg_T *eap);
#if defined(FEAT_QUICKFIX)
static void	ex_pclose(exarg_T *eap);
static void	ex_ptag(exarg_T *eap);
static void	ex_pedit(exarg_T *eap);
#else
# define ex_pclose		ex_ni
# define ex_ptag		ex_ni
# define ex_pedit		ex_ni
#endif
static void	ex_hide(exarg_T *eap);
static void	ex_exit(exarg_T *eap);
static void	ex_print(exarg_T *eap);
#ifdef FEAT_BYTEOFF
static void	ex_goto(exarg_T *eap);
#else
# define ex_goto		ex_ni
#endif
static void	ex_shell(exarg_T *eap);
static void	ex_preserve(exarg_T *eap);
static void	ex_recover(exarg_T *eap);
static void	ex_mode(exarg_T *eap);
static void	ex_wrongmodifier(exarg_T *eap);
static void	ex_find(exarg_T *eap);
static void	ex_open(exarg_T *eap);
static void	ex_edit(exarg_T *eap);
#ifndef FEAT_GUI
# define ex_gui			ex_nogui
static void	ex_nogui(exarg_T *eap);
#endif
#if defined(FEAT_GUI_MSWIN) && defined(FEAT_MENU) && defined(FEAT_TEAROFF)
static void	ex_tearoff(exarg_T *eap);
#else
# define ex_tearoff		ex_ni
#endif
#if (defined(FEAT_GUI_MSWIN) || defined(FEAT_GUI_GTK) \
	|| defined(FEAT_TERM_POPUP_MENU)) && defined(FEAT_MENU)
static void	ex_popup(exarg_T *eap);
#else
# define ex_popup		ex_ni
#endif
#ifndef FEAT_GUI_MSWIN
# define ex_simalt		ex_ni
#endif
#if !defined(FEAT_GUI_MSWIN) && !defined(FEAT_GUI_GTK) && !defined(FEAT_GUI_MOTIF)
# define gui_mch_find_dialog	ex_ni
# define gui_mch_replace_dialog ex_ni
#endif
#if !defined(FEAT_GUI_GTK)
# define ex_helpfind		ex_ni
#endif
#ifndef FEAT_CSCOPE
# define ex_cscope		ex_ni
# define ex_scscope		ex_ni
# define ex_cstag		ex_ni
#endif
#ifndef FEAT_SYN_HL
# define ex_syntax		ex_ni
# define ex_ownsyntax		ex_ni
#endif
#if !defined(FEAT_SYN_HL) || !defined(FEAT_PROFILE)
# define ex_syntime		ex_ni
#endif
#ifndef FEAT_SPELL
# define ex_spell		ex_ni
# define ex_mkspell		ex_ni
# define ex_spelldump		ex_ni
# define ex_spellinfo		ex_ni
# define ex_spellrepall		ex_ni
#endif
#ifndef FEAT_PERSISTENT_UNDO
# define ex_rundo		ex_ni
# define ex_wundo		ex_ni
#endif
#ifndef FEAT_LUA
# define ex_lua			ex_script_ni
# define ex_luado		ex_ni
# define ex_luafile		ex_ni
#endif
#ifndef FEAT_MZSCHEME
# define ex_mzscheme		ex_script_ni
# define ex_mzfile		ex_ni
#endif
#ifndef FEAT_PERL
# define ex_perl		ex_script_ni
# define ex_perldo		ex_ni
#endif
#ifndef FEAT_PYTHON
# define ex_python		ex_script_ni
# define ex_pydo		ex_ni
# define ex_pyfile		ex_ni
#endif
#ifndef FEAT_PYTHON3
# define ex_py3			ex_script_ni
# define ex_py3do		ex_ni
# define ex_py3file		ex_ni
#endif
#if !defined(FEAT_PYTHON) && !defined(FEAT_PYTHON3)
# define ex_pyx			ex_script_ni
# define ex_pyxdo		ex_ni
# define ex_pyxfile		ex_ni
#endif
#ifndef FEAT_TCL
# define ex_tcl			ex_script_ni
# define ex_tcldo		ex_ni
# define ex_tclfile		ex_ni
#endif
#ifndef FEAT_RUBY
# define ex_ruby		ex_script_ni
# define ex_rubydo		ex_ni
# define ex_rubyfile		ex_ni
#endif
#ifndef FEAT_KEYMAP
# define ex_loadkeymap		ex_ni
#endif
static void	ex_swapname(exarg_T *eap);
static void	ex_syncbind(exarg_T *eap);
static void	ex_read(exarg_T *eap);
static void	ex_pwd(exarg_T *eap);
static void	ex_equal(exarg_T *eap);
static void	ex_sleep(exarg_T *eap);
static void	ex_winsize(exarg_T *eap);
static void	ex_wincmd(exarg_T *eap);
#if defined(FEAT_GUI) || defined(UNIX) || defined(VMS) || defined(MSWIN)
static void	ex_winpos(exarg_T *eap);
#else
# define ex_winpos	    ex_ni
#endif
static void	ex_operators(exarg_T *eap);
static void	ex_put(exarg_T *eap);
static void	ex_copymove(exarg_T *eap);
static void	ex_submagic(exarg_T *eap);
static void	ex_join(exarg_T *eap);
static void	ex_at(exarg_T *eap);
static void	ex_bang(exarg_T *eap);
static void	ex_undo(exarg_T *eap);
#ifdef FEAT_PERSISTENT_UNDO
static void	ex_wundo(exarg_T *eap);
static void	ex_rundo(exarg_T *eap);
#endif
static void	ex_redo(exarg_T *eap);
static void	ex_later(exarg_T *eap);
static void	ex_redir(exarg_T *eap);
static void	ex_redrawstatus(exarg_T *eap);
static void	ex_redrawtabline(exarg_T *eap);
static void	close_redir(void);
static void	ex_mark(exarg_T *eap);
static void	ex_startinsert(exarg_T *eap);
static void	ex_stopinsert(exarg_T *eap);
#ifdef FEAT_FIND_ID
static void	ex_checkpath(exarg_T *eap);
static void	ex_findpat(exarg_T *eap);
#else
# define ex_findpat		ex_ni
# define ex_checkpath		ex_ni
#endif
#if defined(FEAT_FIND_ID) && defined(FEAT_QUICKFIX)
static void	ex_psearch(exarg_T *eap);
#else
# define ex_psearch		ex_ni
#endif
static void	ex_tag(exarg_T *eap);
static void	ex_tag_cmd(exarg_T *eap, char_u *name);
#ifndef FEAT_EVAL
# define ex_block		ex_ni
# define ex_break		ex_ni
# define ex_breakadd		ex_ni
# define ex_breakdel		ex_ni
# define ex_breaklist		ex_ni
# define ex_call		ex_ni
# define ex_catch		ex_ni
# define ex_class		ex_ni
# define ex_compiler		ex_ni
# define ex_continue		ex_ni
# define ex_debug		ex_ni
# define ex_debuggreedy		ex_ni
# define ex_defcompile		ex_ni
# define ex_delfunction		ex_ni
# define ex_disassemble		ex_ni
# define ex_echo		ex_ni
# define ex_echohl		ex_ni
# define ex_else		ex_ni
# define ex_endblock		ex_ni
# define ex_endfunction		ex_ni
# define ex_endif		ex_ni
# define ex_endtry		ex_ni
# define ex_endwhile		ex_ni
# define ex_enum		ex_ni
# define ex_eval		ex_ni
# define ex_execute		ex_ni
# define ex_finally		ex_ni
# define ex_incdec		ex_ni
# define ex_finish		ex_ni
# define ex_function		ex_ni
# define ex_if			ex_ni
# define ex_let			ex_ni
# define ex_var			ex_ni
# define ex_lockvar		ex_ni
# define ex_oldfiles		ex_ni
# define ex_options		ex_ni
# define ex_packadd		ex_ni
# define ex_packloadall		ex_ni
# define ex_return		ex_ni
# define ex_scriptnames		ex_ni
# define ex_throw		ex_ni
# define ex_try			ex_ni
# define ex_type		ex_ni
# define ex_unlet		ex_ni
# define ex_while		ex_ni
# define ex_import		ex_ni
# define ex_export		ex_ni
#endif
#ifndef FEAT_SESSION
# define ex_loadview		ex_ni
#endif
#ifndef FEAT_VIMINFO
# define ex_viminfo		ex_ni
#endif
static void	ex_behave(exarg_T *eap);
static void	ex_filetype(exarg_T *eap);
static void	ex_setfiletype(exarg_T *eap);
#ifndef FEAT_DIFF
# define ex_diffoff		ex_ni
# define ex_diffpatch		ex_ni
# define ex_diffgetput		ex_ni
# define ex_diffsplit		ex_ni
# define ex_diffthis		ex_ni
# define ex_diffupdate		ex_ni
#endif
static void	ex_digraphs(exarg_T *eap);
#ifdef FEAT_SEARCH_EXTRA
static void	ex_nohlsearch(exarg_T *eap);
#else
# define ex_nohlsearch		ex_ni
# define ex_match		ex_ni
#endif
#ifdef FEAT_CRYPT
static void	ex_X(exarg_T *eap);
#else
# define ex_X			ex_ni
#endif
#ifdef FEAT_FOLDING
static void	ex_fold(exarg_T *eap);
static void	ex_foldopen(exarg_T *eap);
static void	ex_folddo(exarg_T *eap);
#else
# define ex_fold		ex_ni
# define ex_foldopen		ex_ni
# define ex_folddo		ex_ni
#endif
#if !(defined(HAVE_LOCALE_H) || defined(X_LOCALE))
# define ex_language		ex_ni
#endif
#ifndef FEAT_SIGNS
# define ex_sign		ex_ni
#endif
#ifndef FEAT_NETBEANS_INTG
# define ex_nbclose		ex_ni
# define ex_nbkey		ex_ni
# define ex_nbstart		ex_ni
#endif

#ifndef FEAT_PROFILE
# define ex_profile		ex_ni
#endif
#ifndef FEAT_TERMINAL
# define ex_terminal		ex_ni
#endif
#if !defined(FEAT_X11) || !defined(FEAT_XCLIPBOARD)
# define ex_xrestore		ex_ni
#endif
#if !defined(FEAT_PROP_POPUP)
# define ex_popupclear		ex_ni
#endif


#define DO_DECLARE_EXCMD
#include "ex_cmds.h"
#include "ex_cmdidxs.h"

static char_u dollar_command[2] = {'$', 0};


#ifdef FEAT_EVAL

typedef struct
{
    char_u	*line;		
    linenr_T	lnum;		
} wcmd_T;


struct loop_cookie
{
    garray_T	*lines_gap;		
    int		current_line;		
    int		repeating;		
    
    char_u	*(*lc_getline)(int, void *, int, getline_opt_T);
    void	*cookie;
};

static char_u	*get_loop_line(int c, void *cookie, int indent, getline_opt_T options);
static int	store_loop_line(garray_T *gap, char_u *line);
static void	free_cmdlines(garray_T *gap);


struct dbg_stuff
{
    int		trylevel;
    int		force_abort;
    except_T	*caught_stack;
    char_u	*vv_exception;
    char_u	*vv_throwpoint;
    int		did_emsg;
    int		got_int;
    int		did_throw;
    int		need_rethrow;
    int		check_cstack;
    except_T	*current_exception;
};

    static void
save_dbg_stuff(struct dbg_stuff *dsp)
{
    dsp->trylevel	= trylevel;		trylevel = 0;
    dsp->force_abort	= force_abort;		force_abort = FALSE;
    dsp->caught_stack	= caught_stack;		caught_stack = NULL;
    dsp->vv_exception	= v_exception(NULL);
    dsp->vv_throwpoint	= v_throwpoint(NULL);

    
    dsp->did_emsg	= did_emsg;		did_emsg     = FALSE;
    dsp->got_int	= got_int;		got_int	     = FALSE;
    dsp->did_throw	= did_throw;		did_throw    = FALSE;
    dsp->need_rethrow	= need_rethrow;		need_rethrow = FALSE;
    dsp->check_cstack	= check_cstack;		check_cstack = FALSE;
    dsp->current_exception = current_exception;	current_exception = NULL;
}

    static void
restore_dbg_stuff(struct dbg_stuff *dsp)
{
    suppress_errthrow = FALSE;
    trylevel = dsp->trylevel;
    force_abort = dsp->force_abort;
    caught_stack = dsp->caught_stack;
    (void)v_exception(dsp->vv_exception);
    (void)v_throwpoint(dsp->vv_throwpoint);
    did_emsg = dsp->did_emsg;
    got_int = dsp->got_int;
    did_throw = dsp->did_throw;
    need_rethrow = dsp->need_rethrow;
    check_cstack = dsp->check_cstack;
    current_exception = dsp->current_exception;
}
#endif


    static int
is_other_file(int fnum, char_u *ffname)
{
  if (fnum != 0)
  {
    if (fnum == curbuf->b_fnum)
      return FALSE;

    return TRUE;
  }

  if (ffname == NULL)
    return TRUE;

  if (*ffname == NUL)
    return FALSE;

  
  
  if (curbuf->b_sfname != NULL
      && *curbuf->b_sfname != NUL)
    
    
    return fnamecmp(ffname, curbuf->b_sfname) != 0;

  return otherfile(ffname);
}


    void
do_exmode(
    int		improved)	    
{
    int		save_msg_scroll;
    int		prev_msg_row;
    linenr_T	prev_line;
    varnumber_T	changedtick;

    if (improved)
	exmode_active = EXMODE_VIM;
    else
	exmode_active = EXMODE_NORMAL;
    State = MODE_NORMAL;
    may_trigger_modechanged();

    
    
    if (global_busy)
	return;

    save_msg_scroll = msg_scroll;
    ++RedrawingDisabled;	    
    ++no_wait_return;		    
#ifdef FEAT_GUI
    
    ++hold_gui_events;
#endif

    msg(_("Entering Ex mode.  Type \"visual\" to go to Normal mode."));
    while (exmode_active)
    {
	
	if (ex_normal_busy > 0 && typebuf.tb_len == 0)
	{
	    exmode_active = FALSE;
	    break;
	}
	msg_scroll = TRUE;
	need_wait_return = FALSE;
	ex_pressedreturn = FALSE;
	ex_no_reprint = FALSE;
	changedtick = CHANGEDTICK(curbuf);
	prev_msg_row = msg_row;
	prev_line = curwin->w_cursor.lnum;
	if (improved)
	{
	    cmdline_row = msg_row;
	    do_cmdline(NULL, getexline, NULL, 0);
	}
	else
	    do_cmdline(NULL, getexmodeline, NULL, DOCMD_NOWAIT);
	lines_left = Rows - 1;

	if ((prev_line != curwin->w_cursor.lnum
		   || changedtick != CHANGEDTICK(curbuf)) && !ex_no_reprint)
	{
	    if (curbuf->b_ml.ml_flags & ML_EMPTY)
		emsg(_(e_empty_buffer));
	    else
	    {
		if (ex_pressedreturn)
		{
		    
		    
		    msg_row = prev_msg_row;
		    if (prev_msg_row == Rows - 1)
			msg_row--;
		}
		msg_col = 0;
		print_line_no_prefix(curwin->w_cursor.lnum, FALSE, FALSE);
		msg_clr_eos();
	    }
	}
	else if (ex_pressedreturn && !ex_no_reprint)	
	{
	    if (curbuf->b_ml.ml_flags & ML_EMPTY)
		emsg(_(e_empty_buffer));
	    else
		emsg(_(e_at_end_of_file));
	}
    }

#ifdef FEAT_GUI
    --hold_gui_events;
#endif
    if (RedrawingDisabled > 0)
	--RedrawingDisabled;
    --no_wait_return;
    update_screen(UPD_CLEAR);
    need_wait_return = FALSE;
    msg_scroll = save_msg_scroll;
}


    static void
msg_verbose_cmd(linenr_T lnum, char_u *cmd)
{
    ++no_wait_return;
    verbose_enter_scroll();

    if (lnum == 0)
	smsg(_("Executing: %s"), cmd);
    else
	smsg(_("line %ld: %s"), (int)lnum, cmd);
    if (msg_silent == 0)
	msg_puts("\n");   

    verbose_leave_scroll();
    --no_wait_return;
}


    int
do_cmdline_cmd(char_u *cmd)
{
    return do_cmdline(cmd, NULL, NULL,
				   DOCMD_VERBOSE|DOCMD_NOWAIT|DOCMD_KEYTYPED);
}


    static int
do_cmd_argument(char_u *cmd)
{
    return do_cmdline(cmd, NULL, NULL,
		      DOCMD_VERBOSE|DOCMD_NOWAIT|DOCMD_KEYTYPED|DOCMD_RANGEOK);
}


    int
do_cmdline(
    char_u	*cmdline,
    char_u	*(*fgetline)(int, void *, int, getline_opt_T),
    void	*cookie,		
    int		flags)
{
    char_u	*next_cmdline;		
    char_u	*cmdline_copy = NULL;	
    int		used_getline = FALSE;	
    static int	recursive = 0;		
    int		msg_didout_before_start = 0;
    int		count = 0;		
    int		did_inc_RedrawingDisabled = FALSE;
    int		retval = OK;
#ifdef FEAT_EVAL
    cstack_T	cstack;			
    garray_T	lines_ga;		
    int		current_line = 0;	
    int		current_line_before = 0;
    char_u	*fname = NULL;		
    linenr_T	*breakpoint = NULL;	
    int		*dbg_tick = NULL;	
    struct dbg_stuff debug_saved;	
    int		initial_trylevel;
    msglist_T	**saved_msg_list = NULL;
    msglist_T	*private_msg_list = NULL;

    
    char_u	*(*cmd_getline)(int, void *, int, getline_opt_T);
    void	*cmd_cookie;
    struct loop_cookie cmd_loop_cookie;
    void	*real_cookie;
    int		getline_is_func;
#else
# define cmd_getline fgetline
# define cmd_cookie cookie
#endif
    static int	call_depth = 0;		
#ifdef FEAT_EVAL
    
    
    
    
    
    
    saved_msg_list = msg_list;
    msg_list = &private_msg_list;
#endif

    
    
    
    if (call_depth >= 200
#ifdef FEAT_EVAL
	    && call_depth >= p_mfd
#endif
	    )
    {
	emsg(_(e_command_too_recursive));
#ifdef FEAT_EVAL
	
	
	do_errthrow((cstack_T *)NULL, (char_u *)NULL);
	msg_list = saved_msg_list;
#endif
	return FAIL;
    }
    ++call_depth;

#ifdef FEAT_EVAL
    CLEAR_FIELD(cstack);
    cstack.cs_idx = -1;
    ga_init2(&lines_ga, sizeof(wcmd_T), 10);

    real_cookie = getline_cookie(fgetline, cookie);

    
    getline_is_func = getline_equal(fgetline, cookie, get_func_line);
    if (getline_is_func && ex_nesting_level == func_level(real_cookie))
	++ex_nesting_level;

    
    
    if (getline_is_func)
    {
	fname = func_name(real_cookie);
	breakpoint = func_breakpoint(real_cookie);
	dbg_tick = func_dbg_tick(real_cookie);
    }
    else if (getline_equal(fgetline, cookie, getsourceline))
    {
	fname = SOURCING_NAME;
	breakpoint = source_breakpoint(real_cookie);
	dbg_tick = source_dbg_tick(real_cookie);
    }

    
    if (!recursive)
    {
	force_abort = FALSE;
	suppress_errthrow = FALSE;
    }

    
    if (flags & DOCMD_EXCRESET)
	save_dbg_stuff(&debug_saved);
    else
	CLEAR_FIELD(debug_saved);

    initial_trylevel = trylevel;

    
    did_throw = FALSE;
#endif
    
#ifdef FEAT_EVAL
    did_emsg_cumul += did_emsg;
#endif
    did_emsg = FALSE;

    
    if (!(flags & DOCMD_KEYTYPED)
			       && !getline_equal(fgetline, cookie, getexline))
	KeyTyped = FALSE;

    
    next_cmdline = cmdline;
    do
    {
#ifdef FEAT_EVAL
	getline_is_func = getline_equal(fgetline, cookie, get_func_line);
#endif

	
	if (next_cmdline == NULL
#ifdef FEAT_EVAL
		&& !force_abort
		&& cstack.cs_idx < 0
		&& !(getline_is_func && func_has_abort(real_cookie))
#endif
							)
	{
#ifdef FEAT_EVAL
	    did_emsg_cumul += did_emsg;
#endif
	    did_emsg = FALSE;
	}

	

#ifdef FEAT_EVAL
	
	if (cstack.cs_looplevel > 0 && current_line < lines_ga.ga_len)
	{
	    
	    
	    VIM_CLEAR(cmdline_copy);

	    
	    
	    if (getline_is_func)
	    {
# ifdef FEAT_PROFILE
		if (do_profiling == PROF_YES)
		    func_line_end(real_cookie);
# endif
		if (func_has_ended(real_cookie))
		{
		    retval = FAIL;
		    break;
		}
	    }
#ifdef FEAT_PROFILE
	    else if (do_profiling == PROF_YES
			    && getline_equal(fgetline, cookie, getsourceline))
		script_line_end();
#endif

	    
	    if (source_finished(fgetline, cookie))
	    {
		retval = FAIL;
		break;
	    }

	    
	    if (breakpoint != NULL && dbg_tick != NULL
						   && *dbg_tick != debug_tick)
	    {
		*breakpoint = dbg_find_breakpoint(
				getline_equal(fgetline, cookie, getsourceline),
							fname, SOURCING_LNUM);
		*dbg_tick = debug_tick;
	    }

	    next_cmdline = ((wcmd_T *)(lines_ga.ga_data))[current_line].line;
	    SOURCING_LNUM = ((wcmd_T *)(lines_ga.ga_data))[current_line].lnum;

	    
	    if (breakpoint != NULL && *breakpoint != 0
					      && *breakpoint <= SOURCING_LNUM)
	    {
		dbg_breakpoint(fname, SOURCING_LNUM);
		
		*breakpoint = dbg_find_breakpoint(
			       getline_equal(fgetline, cookie, getsourceline),
							fname, SOURCING_LNUM);
		*dbg_tick = debug_tick;
	    }
# ifdef FEAT_PROFILE
	    if (do_profiling == PROF_YES)
	    {
		if (getline_is_func)
		    func_line_start(real_cookie, SOURCING_LNUM);
		else if (getline_equal(fgetline, cookie, getsourceline))
		    script_line_start();
	    }
# endif
	}
#endif

	
	if (next_cmdline == NULL)
	{
	    
	    if (count == 1 && getline_equal(fgetline, cookie, getexline))
		msg_didout = TRUE;
	    if (fgetline == NULL || (next_cmdline = fgetline(':', cookie,
#ifdef FEAT_EVAL
		    cstack.cs_idx < 0 ? 0 : (cstack.cs_idx + 1) * 2
#else
		    0
#endif
		    , in_vim9script() ? GETLINE_CONCAT_CONTBAR
					       : GETLINE_CONCAT_CONT)) == NULL)
	    {
		
		
		
		if (KeyTyped && !(flags & DOCMD_REPEAT))
		    need_wait_return = FALSE;
		retval = FAIL;
		break;
	    }
	    used_getline = TRUE;

	    
	    if (flags & DOCMD_KEEPLINE)
	    {
		vim_free(repeat_cmdline);
		if (count == 0)
		    repeat_cmdline = vim_strsave(next_cmdline);
		else
		    repeat_cmdline = NULL;
	    }
	}

	
	else if (cmdline_copy == NULL)
	{
	    next_cmdline = vim_strsave(next_cmdline);
	    if (next_cmdline == NULL)
	    {
		emsg(_(e_out_of_memory));
		retval = FAIL;
		break;
	    }
	}
	cmdline_copy = next_cmdline;

#ifdef FEAT_EVAL
	
	if ((cstack.cs_looplevel > 0 || has_loop_cmd(next_cmdline)))
	{
	    cmd_getline = get_loop_line;
	    cmd_cookie = (void *)&cmd_loop_cookie;
	    cmd_loop_cookie.lines_gap = &lines_ga;
	    cmd_loop_cookie.current_line = current_line;
	    cmd_loop_cookie.lc_getline = fgetline;
	    cmd_loop_cookie.cookie = cookie;
	    cmd_loop_cookie.repeating = (current_line < lines_ga.ga_len);

	    
	    if (current_line == lines_ga.ga_len
		    && store_loop_line(&lines_ga, next_cmdline) == FAIL)
	    {
		retval = FAIL;
		break;
	    }
	    current_line_before = current_line;
	}
	else
	{
	    cmd_getline = fgetline;
	    cmd_cookie = cookie;
	}

	did_endif = FALSE;
#endif

	if (count++ == 0)
	{
	    
	    if (!(flags & DOCMD_NOWAIT) && !recursive)
	    {
		msg_didout_before_start = msg_didout;
		msg_didany = FALSE; 
		msg_start();
		msg_scroll = TRUE;  
		++no_wait_return;   
		++RedrawingDisabled;
		did_inc_RedrawingDisabled = TRUE;
	    }
	}

	if ((p_verbose >= 15 && SOURCING_NAME != NULL) || p_verbose >= 16)
	    msg_verbose_cmd(SOURCING_LNUM, cmdline_copy);

	
	++recursive;
	next_cmdline = do_one_cmd(&cmdline_copy, flags,
#ifdef FEAT_EVAL
				&cstack,
#endif
				cmd_getline, cmd_cookie);
	--recursive;

#ifdef FEAT_EVAL
	if (cmd_cookie == (void *)&cmd_loop_cookie)
	    
	    
	    current_line = cmd_loop_cookie.current_line;
#endif

	if (next_cmdline == NULL)
	{
	    VIM_CLEAR(cmdline_copy);

	    
	    if (getline_equal(fgetline, cookie, getexline)
						  && new_last_cmdline != NULL)
	    {
		vim_free(last_cmdline);
		last_cmdline = new_last_cmdline;
		new_last_cmdline = NULL;
	    }
	}
	else
	{
	    
	    
	    STRMOVE(cmdline_copy, next_cmdline);
	    next_cmdline = cmdline_copy;
	}


#ifdef FEAT_EVAL
	
	if (did_emsg && !force_abort
		&& getline_equal(fgetline, cookie, get_func_line)
					      && !func_has_abort(real_cookie))
	{
	    
	    did_emsg = FALSE;
	}

	if (cstack.cs_looplevel > 0)
	{
	    ++current_line;

	    
	    if (cstack.cs_lflags & (CSL_HAD_CONT | CSL_HAD_ENDLOOP))
	    {
		cstack.cs_lflags &= ~(CSL_HAD_CONT | CSL_HAD_ENDLOOP);

		
		
		
		
		if (!did_emsg && !got_int && !did_throw
			&& cstack.cs_idx >= 0
			&& (cstack.cs_flags[cstack.cs_idx]
						      & (CSF_WHILE | CSF_FOR))
			&& cstack.cs_line[cstack.cs_idx] >= 0
			&& (cstack.cs_flags[cstack.cs_idx] & CSF_ACTIVE))
		{
		    current_line = cstack.cs_line[cstack.cs_idx];
						
		    cstack.cs_lflags |= CSL_HAD_LOOP;
		    line_breakcheck();		

		    
		    
		    if (breakpoint != NULL && lines_ga.ga_len > current_line)
		    {
			*breakpoint = dbg_find_breakpoint(
			       getline_equal(fgetline, cookie, getsourceline),
									fname,
			   ((wcmd_T *)lines_ga.ga_data)[current_line].lnum-1);
			*dbg_tick = debug_tick;
		    }
		}
		else
		{
		    
		    if (cstack.cs_idx >= 0)
			rewind_conditionals(&cstack, cstack.cs_idx - 1,
				   CSF_WHILE | CSF_FOR, &cstack.cs_looplevel);
		}
	    }

	    
	    else if (cstack.cs_lflags & CSL_HAD_LOOP)
	    {
		cstack.cs_lflags &= ~CSL_HAD_LOOP;
		cstack.cs_line[cstack.cs_idx] = current_line_before;
	    }
	}

	
	if (breakpoint != NULL && has_watchexpr())
	{
	    *breakpoint = dbg_find_breakpoint(FALSE, fname, SOURCING_LNUM);
	    *dbg_tick = debug_tick;
	}

	
	if (cstack.cs_looplevel == 0)
	{
	    if (lines_ga.ga_len > 0)
	    {
		SOURCING_LNUM =
		       ((wcmd_T *)lines_ga.ga_data)[lines_ga.ga_len - 1].lnum;
		free_cmdlines(&lines_ga);
	    }
	    current_line = 0;
	}

	
	if (cstack.cs_lflags & CSL_HAD_FINA)
	{
	    cstack.cs_lflags &= ~CSL_HAD_FINA;
	    report_make_pending(cstack.cs_pending[cstack.cs_idx]
		    & (CSTP_ERROR | CSTP_INTERRUPT | CSTP_THROW),
		    did_throw ? (void *)current_exception : NULL);
	    did_emsg = got_int = did_throw = FALSE;
	    cstack.cs_flags[cstack.cs_idx] |= CSF_ACTIVE | CSF_FINALLY;
	}

	
	
	trylevel = initial_trylevel + cstack.cs_trylevel;

	
	if (trylevel == 0 && !did_emsg && !got_int && !did_throw)
	    force_abort = FALSE;

	
	(void)do_intthrow(&cstack);
#endif 

    }
    
    while (!((got_int
#ifdef FEAT_EVAL
		    || (did_emsg && (force_abort || in_vim9script()))
		    || did_throw
#endif
	     )
#ifdef FEAT_EVAL
		&& cstack.cs_trylevel == 0
#endif
	    )
	    && !(did_emsg
#ifdef FEAT_EVAL
		
		
		
		&& (cstack.cs_trylevel == 0 || did_emsg_syntax)
#endif
		&& used_getline
			    && (getline_equal(fgetline, cookie, getexmodeline)
			       || getline_equal(fgetline, cookie, getexline)))
	    && (next_cmdline != NULL
#ifdef FEAT_EVAL
			|| cstack.cs_idx >= 0
#endif
			|| (flags & DOCMD_REPEAT)));

    vim_free(cmdline_copy);
    did_emsg_syntax = FALSE;
#ifdef FEAT_EVAL
    free_cmdlines(&lines_ga);
    ga_clear(&lines_ga);

    if (cstack.cs_idx >= 0)
    {
	
	if (!got_int && !did_throw && !aborting()
		&& !(did_emsg && in_vim9script())
		&& ((getline_equal(fgetline, cookie, getsourceline)
			&& !source_finished(fgetline, cookie))
		    || (getline_equal(fgetline, cookie, get_func_line)
					    && !func_has_ended(real_cookie))))
	{
	    if (cstack.cs_flags[cstack.cs_idx] & CSF_TRY)
		emsg(_(e_missing_endtry));
	    else if (cstack.cs_flags[cstack.cs_idx] & CSF_WHILE)
		emsg(_(e_missing_endwhile));
	    else if (cstack.cs_flags[cstack.cs_idx] & CSF_FOR)
		emsg(_(e_missing_endfor));
	    else
		emsg(_(e_missing_endif));
	}

	
	do
	{
	    int idx = cleanup_conditionals(&cstack, 0, TRUE);

	    if (idx >= 0)
		--idx;	    
	    rewind_conditionals(&cstack, idx, CSF_WHILE | CSF_FOR,
							&cstack.cs_looplevel);
	}
	while (cstack.cs_idx >= 0);
	trylevel = initial_trylevel;
    }

    
    
    
    do_errthrow(&cstack, getline_equal(fgetline, cookie, get_func_line)
				  ? (char_u *)"endfunction" : (char_u *)NULL);

    if (trylevel == 0)
    {
	
	if (current_exception == NULL)
	    did_throw = FALSE;

	
	if (did_throw)
	    handle_did_throw();

	
	else if (got_int || (did_emsg && force_abort))
	    suppress_errthrow = TRUE;
    }

    
    if (did_throw)
	need_rethrow = TRUE;
    if ((getline_equal(fgetline, cookie, getsourceline)
		&& ex_nesting_level > source_level(real_cookie))
	    || (getline_equal(fgetline, cookie, get_func_line)
		&& ex_nesting_level > func_level(real_cookie) + 1))
    {
	if (!did_throw)
	    check_cstack = TRUE;
    }
    else
    {
	
	if (getline_equal(fgetline, cookie, get_func_line))
	    --ex_nesting_level;
	
	if ((getline_equal(fgetline, cookie, getsourceline)
		    || getline_equal(fgetline, cookie, get_func_line))
		&& ex_nesting_level + 1 <= debug_break_level)
	    do_debug(getline_equal(fgetline, cookie, getsourceline)
		    ? (char_u *)_("End of sourced file")
		    : (char_u *)_("End of function"));
    }

    
    if (flags & DOCMD_EXCRESET)
	restore_dbg_stuff(&debug_saved);

    msg_list = saved_msg_list;

    
    if (cstack.cs_emsg_silent_list != NULL)
    {
	eslist_T *elem, *temp;

	for (elem = cstack.cs_emsg_silent_list; elem != NULL; elem = temp)
	{
	    temp = elem->next;
	    vim_free(elem);
	}
    }
#endif 

    
    if (did_inc_RedrawingDisabled)
    {
	if (RedrawingDisabled > 0)
	    --RedrawingDisabled;
	--no_wait_return;
	msg_scroll = FALSE;

	
	if (retval == FAIL
#ifdef FEAT_EVAL
		|| (did_endif && KeyTyped && !did_emsg)
#endif
					    )
	{
	    need_wait_return = FALSE;
	    msg_didany = FALSE;		
	}
	else if (need_wait_return)
	{
	    
	    msg_didout |= msg_didout_before_start;
	    wait_return(FALSE);
	}
    }

#ifdef FEAT_EVAL
    did_endif = FALSE;  
#else
    
    if_level = 0;
#endif

    --call_depth;
    return retval;
}

#if defined(FEAT_EVAL) || defined(PROTO)

    void
handle_did_throw(void)
{
    char	*p = NULL;
    msglist_T	*messages = NULL;
    ESTACK_CHECK_DECLARATION;

    
    switch (current_exception->type)
    {
	case ET_USER:
	    vim_snprintf((char *)IObuff, IOSIZE,
		    _(e_exception_not_caught_str),
		    current_exception->value);
	    p = (char *)vim_strsave(IObuff);
	    break;
	case ET_ERROR:
	    messages = current_exception->messages;
	    current_exception->messages = NULL;
	    break;
	case ET_INTERRUPT:
	    break;
    }

    estack_push(ETYPE_EXCEPT, current_exception->throw_name,
					current_exception->throw_lnum);
    ESTACK_CHECK_SETUP;
    current_exception->throw_name = NULL;

    discard_current_exception();	

    
    if (emsg_silent == 0)
    {
	suppress_errthrow = TRUE;
	force_abort = TRUE;
    }

    if (messages != NULL)
    {
	do
	{
	    msglist_T	*next = messages->next;
	    int		save_compiling = estack_compiling;

	    estack_compiling = messages->msg_compiling;
	    emsg(messages->msg);
	    vim_free(messages->msg);
	    vim_free(messages->sfile);
	    vim_free(messages);
	    messages = next;
	    estack_compiling = save_compiling;
	}
	while (messages != NULL);
    }
    else if (p != NULL)
    {
	emsg(p);
	vim_free(p);
    }
    vim_free(SOURCING_NAME);
    ESTACK_CHECK_NOW;
    estack_pop();
}


    static char_u *
get_loop_line(int c, void *cookie, int indent, getline_opt_T options)
{
    struct loop_cookie	*cp = (struct loop_cookie *)cookie;
    wcmd_T		*wp;
    char_u		*line;

    if (cp->current_line + 1 >= cp->lines_gap->ga_len)
    {
	if (cp->repeating)
	    return NULL;	

	
	if (cp->lc_getline == NULL)
	    line = getcmdline(c, 0L, indent, 0);
	else
	    line = cp->lc_getline(c, cp->cookie, indent, options);
	if (line != NULL && store_loop_line(cp->lines_gap, line) == OK)
	    ++cp->current_line;

	return line;
    }

    KeyTyped = FALSE;
    ++cp->current_line;
    wp = (wcmd_T *)(cp->lines_gap->ga_data) + cp->current_line;
    SOURCING_LNUM = wp->lnum;
    return vim_strsave(wp->line);
}


    static int
store_loop_line(garray_T *gap, char_u *line)
{
    if (ga_grow(gap, 1) == FAIL)
	return FAIL;
    ((wcmd_T *)(gap->ga_data))[gap->ga_len].line = vim_strsave(line);
    ((wcmd_T *)(gap->ga_data))[gap->ga_len].lnum = SOURCING_LNUM;
    ++gap->ga_len;
    return OK;
}


    static void
free_cmdlines(garray_T *gap)
{
    while (gap->ga_len > 0)
    {
	vim_free(((wcmd_T *)(gap->ga_data))[gap->ga_len - 1].line);
	--gap->ga_len;
    }
}
#endif


    int
getline_equal(
    char_u	*(*fgetline)(int, void *, int, getline_opt_T),
    void	*cookie UNUSED,		
    char_u	*(*func)(int, void *, int, getline_opt_T))
{
#ifdef FEAT_EVAL
    char_u		*(*gp)(int, void *, int, getline_opt_T);
    struct loop_cookie *cp;

    
    
    
    gp = fgetline;
    cp = (struct loop_cookie *)cookie;
    while (gp == get_loop_line)
    {
	gp = cp->lc_getline;
	cp = cp->cookie;
    }
    return gp == func;
#else
    return fgetline == func;
#endif
}


    void *
getline_cookie(
    char_u	*(*fgetline)(int, void *, int, getline_opt_T) UNUSED,
    void	*cookie)		
{
#ifdef FEAT_EVAL
    char_u		*(*gp)(int, void *, int, getline_opt_T);
    struct loop_cookie  *cp;

    
    
    
    gp = fgetline;
    cp = (struct loop_cookie *)cookie;
    while (gp == get_loop_line)
    {
	gp = cp->lc_getline;
	cp = cp->cookie;
    }
    return cp;
#else
    return cookie;
#endif
}

#if defined(FEAT_EVAL) || defined(PROTO)

    char_u *
getline_peek(
    char_u	*(*fgetline)(int, void *, int, getline_opt_T) UNUSED,
    void	*cookie)		
{
    char_u		*(*gp)(int, void *, int, getline_opt_T);
    struct loop_cookie  *cp;
    wcmd_T		*wp;

    
    
    
    gp = fgetline;
    cp = (struct loop_cookie *)cookie;
    while (gp == get_loop_line)
    {
	if (cp->current_line + 1 < cp->lines_gap->ga_len)
	{
	    
	    wp = (wcmd_T *)(cp->lines_gap->ga_data) + cp->current_line + 1;
	    return wp->line;
	}
	gp = cp->lc_getline;
	cp = cp->cookie;
    }
    if (gp == getsourceline)
	return source_nextline(cp);
    return NULL;
}
#endif



    static int
compute_buffer_local_count(int addr_type, int lnum, int offset)
{
    buf_T   *buf;
    buf_T   *nextbuf;
    int     count = offset;

    buf = firstbuf;
    while (buf->b_next != NULL && buf->b_fnum < lnum)
	buf = buf->b_next;
    while (count != 0)
    {
	count += (offset < 0) ? 1 : -1;
	nextbuf = (offset < 0) ? buf->b_prev : buf->b_next;
	if (nextbuf == NULL)
	    break;
	buf = nextbuf;
	if (addr_type == ADDR_LOADED_BUFFERS)
	    
	    while (buf->b_ml.ml_mfp == NULL)
	    {
		nextbuf = (offset < 0) ? buf->b_prev : buf->b_next;
		if (nextbuf == NULL)
		    break;
		buf = nextbuf;
	    }
    }
    
    if (addr_type == ADDR_LOADED_BUFFERS)
	while (buf->b_ml.ml_mfp == NULL)
	{
	    nextbuf = (offset >= 0) ? buf->b_prev : buf->b_next;
	    if (nextbuf == NULL)
		break;
	    buf = nextbuf;
	}
    return buf->b_fnum;
}


    static int
current_win_nr(win_T *win)
{
    win_T	*wp;
    int		nr = 0;

    FOR_ALL_WINDOWS(wp)
    {
	++nr;
	if (wp == win)
	    break;
    }
    return nr;
}

    static int
current_tab_nr(tabpage_T *tab)
{
    tabpage_T	*tp;
    int		nr = 0;

    FOR_ALL_TABPAGES(tp)
    {
	++nr;
	if (tp == tab)
	    break;
    }
    return nr;
}

    static int
comment_start(char_u *p, int starts_with_colon UNUSED)
{
    if (in_vim9script())
	return p[0] == '#' && !starts_with_colon;
    return *p == '"';
}

# define CURRENT_WIN_NR current_win_nr(curwin)
# define LAST_WIN_NR current_win_nr(NULL)
# define CURRENT_TAB_NR current_tab_nr(curtab)
# define LAST_TAB_NR current_tab_nr(NULL)


    static char_u *
do_one_cmd(
    char_u	**cmdlinep,
    int		flags,
#ifdef FEAT_EVAL
    cstack_T	*cstack,
#endif
    char_u	*(*fgetline)(int, void *, int, getline_opt_T),
    void	*cookie)		
{
    char_u	*p;
    linenr_T	lnum;
    int	n;
    char	*errormsg = NULL;	
    char_u	*after_modifier = NULL;
    exarg_T	ea;			
    cmdmod_T	save_cmdmod;
    int		save_reg_executing = reg_executing;
    int		save_pending_end_reg_executing = pending_end_reg_executing;
    int		ni;			
    char_u	*cmd;
    int		starts_with_colon = FALSE;
    int		may_have_range;
#ifdef FEAT_EVAL
    int		did_set_expr_line = FALSE;
#endif
    int		sourcing = flags & DOCMD_VERBOSE;
    int		did_append_cmd = FALSE;

    CLEAR_FIELD(ea);
    ea.line1 = 1;
    ea.line2 = 1;
#ifdef FEAT_EVAL
    ++ex_nesting_level;
#endif

    
    if (quitmore
#ifdef FEAT_EVAL
	    
	    && !getline_equal(fgetline, cookie, get_func_line)
#endif
	    
	    && !getline_equal(fgetline, cookie, getnextac))
	--quitmore;

    
    save_cmdmod = cmdmod;

    
    if ((*cmdlinep)[0] == '#' && (*cmdlinep)[1] == '!')
	goto doend;


    
    ea.cmd = *cmdlinep;
    ea.cmdlinep = cmdlinep;
    ea.ea_getline = fgetline;
    ea.cookie = cookie;
#ifdef FEAT_EVAL
    ea.cstack = cstack;
    starts_with_colon = *skipwhite(ea.cmd) == ':';
#endif
    if (parse_command_modifiers(&ea, &errormsg, &cmdmod, FALSE) == FAIL)
	goto doend;
    apply_cmdmod(&cmdmod);
    after_modifier = ea.cmd;

#ifdef FEAT_EVAL
    ea.skip = did_emsg || got_int || did_throw || (cstack->cs_idx >= 0
			 && !(cstack->cs_flags[cstack->cs_idx] & CSF_ACTIVE));
#else
    ea.skip = (if_level > 0);
#endif


    cmd = ea.cmd;

    
    
    int vim9script = in_vim9script();
    if (vim9script && (flags & DOCMD_RANGEOK) == 0)
    {
	may_have_range = FALSE;
	for (p = ea.cmd; p >= *cmdlinep; --p)
	{
	    if (*p == ':')
		may_have_range = TRUE;
	    if (p < ea.cmd && !VIM_ISWHITE(*p))
		break;
	}
    }
    else
	may_have_range = TRUE;
    if (may_have_range)
	ea.cmd = skip_range(ea.cmd, TRUE, NULL);

#ifdef FEAT_EVAL
    
    
    
    
    if (vim9script && checkforcmd_noparen(&ea.cmd, "export", 6))
	is_export = TRUE;
#endif

    if (vim9script && !may_have_range)
    {
	if (ea.cmd == cmd + 1 && *cmd == '$')
	    
	    --ea.cmd;
#ifdef FEAT_EVAL
	p = find_ex_command(&ea, NULL, lookup_scriptitem, NULL);
#else
	p = find_ex_command(&ea, NULL, NULL, NULL);
#endif
	if (ea.cmdidx == CMD_SIZE)
	{
	    char_u *ar = skip_range(ea.cmd, TRUE, NULL);

	    
	    
	    if (ar > ea.cmd && !ea.skip)
	    {
		semsg(_(e_colon_required_before_range_str), ea.cmd);
		goto doend;
	    }
	}
    }
    else
	p = find_ex_command(&ea, NULL, NULL, NULL);

#ifdef FEAT_EVAL
# ifdef FEAT_PROFILE
    
    if (do_profiling == PROF_YES
	    && (!ea.skip || cstack->cs_idx == 0 || (cstack->cs_idx > 0
		     && (cstack->cs_flags[cstack->cs_idx - 1] & CSF_ACTIVE))))
    {
	int skip = did_emsg || got_int || did_throw;

	if (ea.cmdidx == CMD_catch)
	    skip = !skip && !(cstack->cs_idx >= 0
			  && (cstack->cs_flags[cstack->cs_idx] & CSF_THROWN)
			  && !(cstack->cs_flags[cstack->cs_idx] & CSF_CAUGHT));
	else if (ea.cmdidx == CMD_else || ea.cmdidx == CMD_elseif)
	    skip = skip || !(cstack->cs_idx >= 0
			  && !(cstack->cs_flags[cstack->cs_idx]
						  & (CSF_ACTIVE | CSF_TRUE)));
	else if (ea.cmdidx == CMD_finally)
	    skip = FALSE;
	else if (ea.cmdidx != CMD_endif
		&& ea.cmdidx != CMD_endfor
		&& ea.cmdidx != CMD_endtry
		&& ea.cmdidx != CMD_endwhile)
	    skip = ea.skip;

	if (!skip)
	{
	    if (getline_equal(fgetline, cookie, get_func_line))
		func_line_exec(getline_cookie(fgetline, cookie));
	    else if (getline_equal(fgetline, cookie, getsourceline))
		script_line_exec();
	}
    }
# endif
#endif

    ea.cmd = cmd;

#ifdef FEAT_EVAL
    
    
    dbg_check_breakpoint(&ea);
    if (!ea.skip && got_int)
    {
	ea.skip = TRUE;
	(void)do_intthrow(cstack);
    }
#endif



    
    if (!IS_USER_CMDIDX(ea.cmdidx))
    {
	if (ea.cmdidx != CMD_SIZE)
	    ea.addr_type = cmdnames[(int)ea.cmdidx].cmd_addr_type;
	else
	    ea.addr_type = ADDR_LINES;

	
	if (ea.cmdidx == CMD_wincmd && p != NULL)
	    get_wincmd_addr_type(skipwhite(p), &ea);
#ifdef FEAT_QUICKFIX
	
	if ((ea.cmdidx == CMD_cc || ea.cmdidx == CMD_ll) && bt_quickfix(curbuf))
	    ea.addr_type = ADDR_OTHER;
#endif
    }

    if (!may_have_range)
	ea.line1 = ea.line2 = default_address(&ea);
    else if (parse_cmd_address(&ea, &errormsg, FALSE) == FAIL)
	goto doend;



    
    ea.cmd = skipwhite(ea.cmd);
    while (*ea.cmd == ':')
	ea.cmd = skipwhite(ea.cmd + 1);

    
    if (*ea.cmd == NUL || comment_start(ea.cmd, starts_with_colon)
			       || (ea.nextcmd = check_nextcmd(ea.cmd)) != NULL)
    {
	
	if (ea.skip)	    
	    goto doend;
	errormsg = ex_range_without_command(&ea);
	goto doend;
    }

    
    
    if (p != NULL && ea.cmdidx == CMD_SIZE && !ea.skip
	    && ASCII_ISUPPER(*ea.cmd)
	    && has_cmdundefined())
    {
	int ret;

	p = ea.cmd;
	while (ASCII_ISALNUM(*p))
	    ++p;
	p = vim_strnsave(ea.cmd, p - ea.cmd);
	ret = apply_autocmds(EVENT_CMDUNDEFINED, p, p, TRUE, NULL);
	vim_free(p);
	
	
	p = (ret
#ifdef FEAT_EVAL
		&& !aborting()
#endif
		) ? find_ex_command(&ea, NULL, NULL, NULL) : ea.cmd;
    }

    if (p == NULL)
    {
	if (!ea.skip)
	    errormsg = _(e_ambiguous_use_of_user_defined_command);
	goto doend;
    }
    
    if (*p == '!' && ea.cmd[1] == 0151 && ea.cmd[0] == 78
	    && !IS_USER_CMDIDX(ea.cmdidx))
    {
	errormsg = uc_fun_cmd();
	goto doend;
    }

    if (ea.cmdidx == CMD_SIZE)
    {
	if (!ea.skip)
	{
	    STRCPY(IObuff, _(e_not_an_editor_command));
	    if (!sourcing)
	    {
		
		
		if (after_modifier != NULL)
		    append_command(after_modifier);
		else
		    append_command(*cmdlinep);
		did_append_cmd = TRUE;
	    }
	    errormsg = (char *)IObuff;
	    did_emsg_syntax = TRUE;
	}
	goto doend;
    }

    ni = (!IS_USER_CMDIDX(ea.cmdidx)
	    && (cmdnames[ea.cmdidx].cmd_func == ex_ni
#ifdef HAVE_EX_SCRIPT_NI
	     || cmdnames[ea.cmdidx].cmd_func == ex_script_ni
#endif
	     ));

#ifndef FEAT_EVAL
    
    if (ea.cmdidx == CMD_if)
	++if_level;
    if (if_level)
    {
	if (ea.cmdidx == CMD_endif)
	    --if_level;
	goto doend;
    }

#endif

    
    if (*p == '!' && ea.cmdidx != CMD_substitute
	    && ea.cmdidx != CMD_smagic && ea.cmdidx != CMD_snomagic)
    {
	++p;
	ea.forceit = TRUE;
    }
    else
	ea.forceit = FALSE;


    if (!IS_USER_CMDIDX(ea.cmdidx))
	ea.argt = (int)cmdnames[(int)ea.cmdidx].cmd_argt;

    if (!ea.skip)
    {
#ifdef HAVE_SANDBOX
	if (sandbox != 0 && !(ea.argt & EX_SBOXOK))
	{
	    
	    errormsg = _(e_not_allowed_in_sandbox);
	    goto doend;
	}
#endif
	if (restricted != 0 && (ea.argt & EX_RESTRICT))
	{
	    errormsg = _(e_command_not_allowed_in_rvim);
	    goto doend;
	}
	if (!curbuf->b_p_ma && (ea.argt & EX_MODIFY))
	{
	    
	    errormsg = _(e_cannot_make_changes_modifiable_is_off);
	    goto doend;
	}

	if (!IS_USER_CMDIDX(ea.cmdidx))
	{
	    if (cmdwin_type != 0 && !(ea.argt & EX_CMDWIN))
	    {
		
		errormsg = _(e_invalid_in_cmdline_window);
		goto doend;
	    }
	    if (text_locked() && !(ea.argt & EX_LOCK_OK))
	    {
		
		errormsg = _(get_text_locked_msg());
		goto doend;
	    }
	}

	
	
	
	
	if (!(ea.argt & (EX_CMDWIN | EX_LOCK_OK))
		&& ea.cmdidx != CMD_checktime
		&& ea.cmdidx != CMD_edit
		&& ea.cmdidx != CMD_file
		&& !IS_USER_CMDIDX(ea.cmdidx)
		&& curbuf_locked())
	    goto doend;

	if (!ni && !(ea.argt & EX_RANGE) && ea.addr_count > 0)
	{
	    errormsg = _(e_no_range_allowed);
	    goto doend;
	}
    }

    if (!ni && !(ea.argt & EX_BANG) && ea.forceit)
    {
	errormsg = _(e_no_bang_allowed);
	goto doend;
    }

    
    if (!ea.skip && !ni && (ea.argt & EX_RANGE))
    {
	
	if (!global_busy && ea.line1 > ea.line2)
	{
	    if (msg_silent == 0)
	    {
		if (sourcing || exmode_active)
		{
		    errormsg = _(e_backwards_range_given);
		    goto doend;
		}
		if (ask_yesno((char_u *)
			_("Backwards range given, OK to swap"), FALSE) != 'y')
		    goto doend;
	    }
	    lnum = ea.line1;
	    ea.line1 = ea.line2;
	    ea.line2 = lnum;
	}
	if ((errormsg = invalid_range(&ea)) != NULL)
	    goto doend;
    }

    if ((ea.addr_type == ADDR_OTHER) && ea.addr_count == 0)
	
	ea.line2 = 1;

    correct_range(&ea);

#ifdef FEAT_FOLDING
    if (((ea.argt & EX_WHOLEFOLD) || ea.addr_count >= 2) && !global_busy
	    && ea.addr_type == ADDR_LINES)
    {
	
	
	(void)hasFolding(ea.line1, &ea.line1, NULL);
	(void)hasFolding(ea.line2, NULL, &ea.line2);
    }
#endif

#ifdef FEAT_QUICKFIX
    
    p = replace_makeprg(&ea, p, cmdlinep);
    if (p == NULL)
	goto doend;
#endif

    
    if (ea.cmdidx == CMD_bang)
	ea.arg = p;
    else
	ea.arg = skipwhite(p);

    
    if (ea.cmdidx == CMD_file && *ea.arg != NUL && curbuf_locked())
	goto doend;

    
    if (ea.argt & EX_ARGOPT)
	while (ea.arg[0] == '+' && ea.arg[1] == '+')
	    if (getargopt(&ea) == FAIL && !ni)
	    {
		errormsg = _(e_invalid_argument);
		goto doend;
	    }

    if (ea.cmdidx == CMD_write || ea.cmdidx == CMD_update)
    {
	if (*ea.arg == '>')			
	{
	    if (*++ea.arg != '>')		
	    {
		errormsg = _(e_use_w_or_w_gt_gt);
		goto doend;
	    }
	    ea.arg = skipwhite(ea.arg + 1);
	    ea.append = TRUE;
	}
	else if (*ea.arg == '!' && ea.cmdidx == CMD_write)  
	{
	    ++ea.arg;
	    ea.usefilter = TRUE;
	}
    }

    if (ea.cmdidx == CMD_read)
    {
	if (ea.forceit)
	{
	    ea.usefilter = TRUE;		
	    ea.forceit = FALSE;
	}
	else if (*ea.arg == '!')		
	{
	    ++ea.arg;
	    ea.usefilter = TRUE;
	}
    }

    if (ea.cmdidx == CMD_lshift || ea.cmdidx == CMD_rshift)
    {
	ea.amount = 1;
	while (*ea.arg == *ea.cmd)		
	{
	    ++ea.arg;
	    ++ea.amount;
	}
	ea.arg = skipwhite(ea.arg);
    }

    
    if ((ea.argt & EX_CMDARG) && !ea.usefilter)
	ea.do_ecmd_cmd = getargcmd(&ea.arg);

    
    if ((ea.argt & EX_TRLBAR) && !ea.usefilter)
    {
	separate_nextcmd(&ea, FALSE);
    }
    else if (ea.cmdidx == CMD_bang
	    || ea.cmdidx == CMD_terminal
	    || ea.cmdidx == CMD_global
	    || ea.cmdidx == CMD_vglobal
	    || ea.usefilter
#ifdef FEAT_EVAL
	    || inside_block(&ea)
#endif
	    )
    {
	for (p = ea.arg; *p; ++p)
	{
	    
	    if (*p == '\\' && p[1] == '\n')
		STRMOVE(p, p + 1);
	    else if (*p == '\n' && !(ea.argt & EX_EXPR_ARG))
	    {
		ea.nextcmd = p + 1;
		*p = NUL;
		break;
	    }
	}
    }

    if ((ea.argt & EX_DFLALL) && ea.addr_count == 0)
	address_default_all(&ea);

    
    if (       (ea.argt & EX_REGSTR)
	    && *ea.arg != NUL
	       
	    && (!IS_USER_CMDIDX(ea.cmdidx) || *ea.arg != '=')
	    && !((ea.argt & EX_COUNT) && VIM_ISDIGIT(*ea.arg)))
    {
#ifndef FEAT_CLIPBOARD
	
	if (*ea.arg == '*' || *ea.arg == '+')
	{
	    errormsg = _(e_invalid_register_name);
	    goto doend;
	}
#endif
	if (valid_yank_reg(*ea.arg, (ea.cmdidx != CMD_put
					      && !IS_USER_CMDIDX(ea.cmdidx))))
	{
	    ea.regname = *ea.arg++;
#ifdef FEAT_EVAL
	    
	    if (ea.arg[-1] == '=' && ea.arg[0] != NUL)
	    {
		if (!ea.skip)
		{
		    set_expr_line(vim_strsave(ea.arg), &ea);
		    did_set_expr_line = TRUE;
		}
		ea.arg += STRLEN(ea.arg);
	    }
#endif
	    ea.arg = skipwhite(ea.arg);
	}
    }

    
    if ((ea.argt & EX_COUNT) && VIM_ISDIGIT(*ea.arg)
	    && (!(ea.argt & EX_BUFNAME) || *(p = skipdigits(ea.arg + 1)) == NUL
							  || VIM_ISWHITE(*p)))
    {
	n = getdigits_quoted(&ea.arg);
	ea.arg = skipwhite(ea.arg);
	if (n <= 0 && !ni && (ea.argt & EX_ZEROR) == 0)
	{
	    errormsg = _(e_positive_count_required);
	    goto doend;
	}
	if (ea.addr_type != ADDR_LINES)	
	{
	    ea.line2 = n;
	    if (ea.addr_count == 0)
		ea.addr_count = 1;
	}
	else
	{
	    ea.line1 = ea.line2;
	    if (ea.line2 >= LONG_MAX - (n - 1))
		ea.line2 = LONG_MAX;  
	    else
		ea.line2 += n - 1;
	    ++ea.addr_count;
	    
	    if (ea.line2 > curbuf->b_ml.ml_line_count)
		ea.line2 = curbuf->b_ml.ml_line_count;
	}
    }

    
    if (ea.argt & EX_FLAGS)
	get_flags(&ea);
    if (!ni && !(ea.argt & EX_EXTRA) && *ea.arg != NUL
	    && *ea.arg != '"' && (*ea.arg != '|' || (ea.argt & EX_TRLBAR) == 0))
    {
	
	errormsg = ex_errmsg(e_trailing_characters_str, ea.arg);
	goto doend;
    }

    if (!ni && (ea.argt & EX_NEEDARG) && *ea.arg == NUL)
    {
	errormsg = _(e_argument_required);
	goto doend;
    }

#ifdef FEAT_EVAL
    
    if (ea.skip)
    {
	switch (ea.cmdidx)
	{
	    
	    case CMD_while:
	    case CMD_endwhile:
	    case CMD_for:
	    case CMD_endfor:
	    case CMD_if:
	    case CMD_elseif:
	    case CMD_else:
	    case CMD_endif:
	    case CMD_try:
	    case CMD_catch:
	    case CMD_finally:
	    case CMD_endtry:
	    case CMD_function:
	    case CMD_def:
				break;

	    
	    
	    
	    case CMD_aboveleft:
	    case CMD_and:
	    case CMD_belowright:
	    case CMD_botright:
	    case CMD_browse:
	    case CMD_call:
	    case CMD_confirm:
	    case CMD_const:
	    case CMD_delfunction:
	    case CMD_djump:
	    case CMD_dlist:
	    case CMD_dsearch:
	    case CMD_dsplit:
	    case CMD_echo:
	    case CMD_echoerr:
	    case CMD_echomsg:
	    case CMD_echon:
	    case CMD_eval:
	    case CMD_execute:
	    case CMD_filter:
	    case CMD_final:
	    case CMD_help:
	    case CMD_hide:
	    case CMD_horizontal:
	    case CMD_ijump:
	    case CMD_ilist:
	    case CMD_isearch:
	    case CMD_isplit:
	    case CMD_keepalt:
	    case CMD_keepjumps:
	    case CMD_keepmarks:
	    case CMD_keeppatterns:
	    case CMD_leftabove:
	    case CMD_let:
	    case CMD_lockmarks:
	    case CMD_lockvar:
	    case CMD_lua:
	    case CMD_match:
	    case CMD_mzscheme:
	    case CMD_noautocmd:
	    case CMD_noswapfile:
	    case CMD_perl:
	    case CMD_psearch:
	    case CMD_py3:
	    case CMD_python3:
	    case CMD_python:
	    case CMD_return:
	    case CMD_rightbelow:
	    case CMD_ruby:
	    case CMD_silent:
	    case CMD_smagic:
	    case CMD_snomagic:
	    case CMD_substitute:
	    case CMD_syntax:
	    case CMD_tab:
	    case CMD_tcl:
	    case CMD_throw:
	    case CMD_tilde:
	    case CMD_topleft:
	    case CMD_unlet:
	    case CMD_unlockvar:
	    case CMD_var:
	    case CMD_verbose:
	    case CMD_vertical:
	    case CMD_wincmd:
				break;

	    default:		goto doend;
	}
    }
#endif

    if ((ea.argt & EX_XFILE)
	    && expand_filename(&ea, cmdlinep, &errormsg) == FAIL)
	goto doend;

#ifdef FEAT_EVAL
    if (is_export && (ea.argt & EX_EXPORT) == 0)
    {
	emsg(_(e_invalid_command_after_export));
	goto doend;
    }
#endif

    
    if ((ea.argt & EX_BUFNAME) && *ea.arg != NUL && ea.addr_count == 0
	    && !IS_USER_CMDIDX(ea.cmdidx))
    {
	
	if (ea.cmdidx == CMD_bdelete || ea.cmdidx == CMD_bwipeout
						  || ea.cmdidx == CMD_bunload)
	    p = skiptowhite_esc(ea.arg);
	else
	{
	    p = ea.arg + STRLEN(ea.arg);
	    while (p > ea.arg && VIM_ISWHITE(p[-1]))
		--p;
	}
	ea.line2 = buflist_findpat(ea.arg, p, (ea.argt & EX_BUFUNL) != 0,
								FALSE, FALSE);
	if (ea.line2 < 0)	    
	    goto doend;
	ea.addr_count = 1;
	ea.arg = skipwhite(p);
    }

    
    
    if (ea.cmdidx == CMD_try && cmdmod.cmod_did_esilent > 0)
    {
	emsg_silent -= cmdmod.cmod_did_esilent;
	if (emsg_silent < 0)
	    emsg_silent = 0;
	cmdmod.cmod_did_esilent = 0;
    }



    if (IS_USER_CMDIDX(ea.cmdidx))
    {
	
	do_ucmd(&ea);
    }
    else
    {
	
	(cmdnames[ea.cmdidx].cmd_func)(&ea);
	if (ea.errmsg != NULL)
	    errormsg = ea.errmsg;
    }

#ifdef FEAT_EVAL
    
    
    if (!ea.skip && is_export)
    {
	if (errormsg == NULL)
	    errormsg = _(e_export_with_invalid_argument);
	is_export = FALSE;
    }

    
    
    if (sourcing_a_script(&ea)
	    && current_sctx.sc_sid > 0
	    && ea.cmdidx != CMD_endif
	    && (cstack->cs_idx < 0
		    || (cstack->cs_flags[cstack->cs_idx] & CSF_ACTIVE)))
	SCRIPT_ITEM(current_sctx.sc_sid)->sn_state = SN_STATE_HAD_COMMAND;

    
    if (need_rethrow)
	do_throw(cstack);
    else if (check_cstack)
    {
	if (source_finished(fgetline, cookie))
	    do_finish(&ea, TRUE);
	else if (getline_equal(fgetline, cookie, get_func_line)
						   && current_func_returned())
	    do_return(&ea, TRUE, FALSE, NULL);
    }
    need_rethrow = check_cstack = FALSE;
#endif

doend:
    if (curwin->w_cursor.lnum == 0)	
    {
	curwin->w_cursor.lnum = 1;
	curwin->w_cursor.col = 0;
    }

    if (errormsg != NULL && *errormsg != NUL && !did_emsg)
    {
	if ((sourcing || !KeyTyped) && !did_append_cmd)
	{
	    if (errormsg != (char *)IObuff)
	    {
		STRCPY(IObuff, errormsg);
		errormsg = (char *)IObuff;
	    }
	    append_command(*cmdlinep);
	}
	emsg(errormsg);
    }
#ifdef FEAT_EVAL
    do_errthrow(cstack,
	    (ea.cmdidx != CMD_SIZE && !IS_USER_CMDIDX(ea.cmdidx))
			? cmdnames[(int)ea.cmdidx].cmd_name : (char_u *)NULL);

    if (did_set_expr_line)
	set_expr_line(NULL, NULL);
    is_export = FALSE;
#endif

    undo_cmdmod(&cmdmod);
    cmdmod = save_cmdmod;
    reg_executing = save_reg_executing;
    pending_end_reg_executing = save_pending_end_reg_executing;

    if (ea.nextcmd && *ea.nextcmd == NUL)	
	ea.nextcmd = NULL;

#ifdef FEAT_EVAL
    --ex_nesting_level;
    vim_free(ea.cmdline_tofree);
#endif

    return ea.nextcmd;
}

static char ex_error_buf[MSG_BUF_LEN];


     char *
ex_errmsg(char *msg, char_u *arg)
{
    vim_snprintf(ex_error_buf, MSG_BUF_LEN, _(msg), arg);
    return ex_error_buf;
}


static char exmode_plus[] = "+";


    char *
ex_range_without_command(exarg_T *eap)
{
    char *errormsg = NULL;

    if ((*eap->cmd == '|' ||
		(exmode_active && eap->cmd != (char_u *)exmode_plus + 1))
#ifdef FEAT_EVAL
	    && !in_vim9script()
#endif
       )
    {
	eap->cmdidx = CMD_print;
	eap->argt = EX_RANGE+EX_COUNT+EX_TRLBAR;
	if ((errormsg = invalid_range(eap)) == NULL)
	{
	    correct_range(eap);
	    ex_print(eap);
	}
    }
    else if (eap->addr_count != 0)
    {
	if (eap->line2 > curbuf->b_ml.ml_line_count)
	{
	    
	    
	    if (vim_strchr(p_cpo, CPO_MINUS) != NULL)
		eap->line2 = -1;
	    else
		eap->line2 = curbuf->b_ml.ml_line_count;
	}

	if (eap->line2 < 0)
	    errormsg = _(e_invalid_range);
	else
	{
	    if (eap->line2 == 0)
		curwin->w_cursor.lnum = 1;
	    else
		curwin->w_cursor.lnum = eap->line2;
	    beginline(BL_SOL | BL_FIX);
	}
    }
    return errormsg;
}


    static int
checkforcmd_opt(
    char_u	**pp,		
    char	*cmd,		
    int		len,		
    int		noparen)
{
    int		i;

    for (i = 0; cmd[i] != NUL; ++i)
	if (((char_u *)cmd)[i] != (*pp)[i])
	    break;
    if (i >= len && !ASCII_ISALPHA((*pp)[i]) && (*pp)[i] != '_'
			 && (!noparen || ((*pp)[i] != '(' && (*pp)[i] != '.')))
    {
	*pp = skipwhite(*pp + i);
	return TRUE;
    }
    return FALSE;
}


    int
checkforcmd(
    char_u	**pp,		
    char	*cmd,		
    int		len)		
{
    return checkforcmd_opt(pp, cmd, len, FALSE);
}


    int
checkforcmd_noparen(
    char_u	**pp,		
    char	*cmd,		
    int		len)		
{
    return checkforcmd_opt(pp, cmd, len, TRUE);
}


    int
parse_command_modifiers(
	exarg_T	    *eap,
	char	    **errormsg,
	cmdmod_T    *cmod,
	int	    skip_only)
{
    char_u  *orig_cmd = eap->cmd;
    char_u  *cmd_start = NULL;
    int	    use_plus_cmd = FALSE;
    int	    starts_with_colon = FALSE;
    int	    vim9script = in_vim9script();
    int	    has_visual_range = FALSE;

    CLEAR_POINTER(cmod);
    cmod->cmod_flags = sticky_cmdmod_flags;

    if (STRNCMP(eap->cmd, "'<,'>", 5) == 0)
    {
	
	
	
	
	eap->cmd += 5;
	cmd_start = eap->cmd;
	has_visual_range = TRUE;
    }

    
    for (;;)
    {
	char_u  *p;

	while (*eap->cmd == ' ' || *eap->cmd == '\t' || *eap->cmd == ':')
	{
	    if (*eap->cmd == ':')
		starts_with_colon = TRUE;
	    ++eap->cmd;
	}

	
	if (*eap->cmd == NUL && exmode_active
		   && (getline_equal(eap->ea_getline, eap->cookie, getexmodeline)
		       || getline_equal(eap->ea_getline, eap->cookie, getexline))
			&& curwin->w_cursor.lnum < curbuf->b_ml.ml_line_count)
	{
	    use_plus_cmd = TRUE;
	    if (!skip_only)
		ex_pressedreturn = TRUE;
	    break;  
	}

	
	if (comment_start(eap->cmd, starts_with_colon))
	{
	    
	    if (eap->nextcmd == NULL)
	    {
		eap->nextcmd = vim_strchr(eap->cmd, '\n');
		if (eap->nextcmd != NULL)
		    ++eap->nextcmd;
	    }
	    if (vim9script)
	    {
		if (has_cmdmod(cmod, FALSE))
		    *errormsg = _(e_command_modifier_without_command);
#ifdef FEAT_EVAL
		if (eap->cmd[0] == '#' && eap->cmd[1] == '{'
							 && eap->cmd[2] != '{')
		    *errormsg = _(e_cannot_use_hash_curly_to_start_comment);
#endif
	    }
	    return FAIL;
	}
	if (*eap->cmd == NUL)
	{
	    if (!skip_only)
	    {
		ex_pressedreturn = TRUE;
		if (vim9script && has_cmdmod(cmod, FALSE))
		    *errormsg = _(e_command_modifier_without_command);
	    }
	    return FAIL;
	}

	p = skip_range(eap->cmd, TRUE, NULL);

	
	
	
	
	
	
	
	
	if (vim9script)
	{
	    char_u *s, *n;

	    for (s = eap->cmd; ASCII_ISALPHA(*s); ++s)
		;
	    n = skipwhite(s);
	    if (*n == '.' || *n == '=' || (*n != NUL && n[1] == '=')
		    || *s == '[')
		break;
	}

	switch (*p)
	{
	    
	    case 'a':	if (!checkforcmd_noparen(&eap->cmd, "aboveleft", 3))
			    break;
			cmod->cmod_split |= WSP_ABOVE;
			continue;

	    case 'b':	if (checkforcmd_noparen(&eap->cmd, "belowright", 3))
			{
			    cmod->cmod_split |= WSP_BELOW;
			    continue;
			}
			if (checkforcmd_opt(&eap->cmd, "browse", 3, TRUE))
			{
#ifdef FEAT_BROWSE_CMD
			    cmod->cmod_flags |= CMOD_BROWSE;
#endif
			    continue;
			}
			if (!checkforcmd_noparen(&eap->cmd, "botright", 2))
			    break;
			cmod->cmod_split |= WSP_BOT;
			continue;

	    case 'c':	if (!checkforcmd_opt(&eap->cmd, "confirm", 4, TRUE))
			    break;
#if defined(FEAT_GUI_DIALOG) || defined(FEAT_CON_DIALOG)
			cmod->cmod_flags |= CMOD_CONFIRM;
#endif
			continue;

	    case 'k':	if (checkforcmd_noparen(&eap->cmd, "keepmarks", 3))
			{
			    cmod->cmod_flags |= CMOD_KEEPMARKS;
			    continue;
			}
			if (checkforcmd_noparen(&eap->cmd, "keepalt", 5))
			{
			    cmod->cmod_flags |= CMOD_KEEPALT;
			    continue;
			}
			if (checkforcmd_noparen(&eap->cmd, "keeppatterns", 5))
			{
			    cmod->cmod_flags |= CMOD_KEEPPATTERNS;
			    continue;
			}
			if (!checkforcmd_noparen(&eap->cmd, "keepjumps", 5))
			    break;
			cmod->cmod_flags |= CMOD_KEEPJUMPS;
			continue;

	    case 'f':	
			{
			    char_u  *reg_pat;
			    char_u  *nulp = NULL;
			    int	    c = 0;

			    if (!checkforcmd_noparen(&p, "filter", 4)
				    || *p == NUL
				    || (ends_excmd(*p)
#ifdef FEAT_EVAL
					
					
				     && (!vim9script || VIM_ISWHITE(p[1]))
#endif
				     ))
				break;
			    if (*p == '!')
			    {
				cmod->cmod_filter_force = TRUE;
				p = skipwhite(p + 1);
				if (*p == NUL || ends_excmd(*p))
				    break;
			    }
#ifdef FEAT_EVAL
			    
			    if (vim9script && !VIM_ISWHITE(p[-1]))
				break;
#endif
			    if (skip_only)
				p = skip_vimgrep_pat(p, NULL, NULL);
			    else
				
				p = skip_vimgrep_pat_ext(p, &reg_pat, NULL,
								    &nulp, &c);
			    if (p == NULL || *p == NUL)
				break;
			    if (!skip_only)
			    {
				cmod->cmod_filter_regmatch.regprog =
						vim_regcomp(reg_pat, RE_MAGIC);
				if (cmod->cmod_filter_regmatch.regprog == NULL)
				    break;
				
				if (nulp != NULL)
				    *nulp = c;
			    }
			    eap->cmd = p;
			    continue;
			}

	    case 'h':	if (checkforcmd_noparen(&eap->cmd, "horizontal", 3))
			{
			    cmod->cmod_split |= WSP_HOR;
			    continue;
			}
			
			if (p != eap->cmd || !checkforcmd_noparen(&p, "hide", 3)
					       || *p == NUL || ends_excmd(*p))
			    break;
			eap->cmd = p;
			cmod->cmod_flags |= CMOD_HIDE;
			continue;

	    case 'l':	if (checkforcmd_noparen(&eap->cmd, "lockmarks", 3))
			{
			    cmod->cmod_flags |= CMOD_LOCKMARKS;
			    continue;
			}
			if (checkforcmd_noparen(&eap->cmd, "legacy", 3))
			{
			    if (ends_excmd2(p, eap->cmd))
			    {
				*errormsg =
				      _(e_legacy_must_be_followed_by_command);
				return FAIL;
			    }
			    cmod->cmod_flags |= CMOD_LEGACY;
			    continue;
			}

			if (!checkforcmd_noparen(&eap->cmd, "leftabove", 5))
			    break;
			cmod->cmod_split |= WSP_ABOVE;
			continue;

	    case 'n':	if (checkforcmd_noparen(&eap->cmd, "noautocmd", 3))
			{
			    cmod->cmod_flags |= CMOD_NOAUTOCMD;
			    continue;
			}
			if (!checkforcmd_noparen(&eap->cmd, "noswapfile", 3))
			    break;
			cmod->cmod_flags |= CMOD_NOSWAPFILE;
			continue;

	    case 'r':	if (!checkforcmd_noparen(&eap->cmd, "rightbelow", 6))
			    break;
			cmod->cmod_split |= WSP_BELOW;
			continue;

	    case 's':	if (checkforcmd_noparen(&eap->cmd, "sandbox", 3))
			{
			    cmod->cmod_flags |= CMOD_SANDBOX;
			    continue;
			}
			if (!checkforcmd_noparen(&eap->cmd, "silent", 3))
			    break;
			cmod->cmod_flags |= CMOD_SILENT;
			if (*eap->cmd == '!' && !VIM_ISWHITE(eap->cmd[-1]))
			{
			    
			    eap->cmd = skipwhite(eap->cmd + 1);
			    cmod->cmod_flags |= CMOD_ERRSILENT;
			}
			continue;

	    case 't':	if (checkforcmd_noparen(&p, "tab", 3))
			{
			    if (!skip_only)
			    {
				int tabnr = get_address(eap, &eap->cmd,
						    ADDR_TABS, eap->skip,
						    skip_only, FALSE, 1);
				if (tabnr == MAXLNUM)
				    cmod->cmod_tab = tabpage_index(curtab) + 1;
				else
				{
				    if (tabnr < 0 || tabnr > LAST_TAB_NR)
				    {
					*errormsg = _(e_invalid_range);
					return FAIL;
				    }
				    cmod->cmod_tab = tabnr + 1;
				}
			    }
			    eap->cmd = p;
			    continue;
			}
			if (!checkforcmd_noparen(&eap->cmd, "topleft", 2))
			    break;
			cmod->cmod_split |= WSP_TOP;
			continue;

	    case 'u':	if (!checkforcmd_noparen(&eap->cmd, "unsilent", 3))
			    break;
			cmod->cmod_flags |= CMOD_UNSILENT;
			continue;

	    case 'v':	if (checkforcmd_noparen(&eap->cmd, "vertical", 4))
			{
			    cmod->cmod_split |= WSP_VERT;
			    continue;
			}
			if (checkforcmd_noparen(&eap->cmd, "vim9cmd", 4))
			{
			    if (ends_excmd2(p, eap->cmd))
			    {
				*errormsg =
				      _(e_vim9cmd_must_be_followed_by_command);
				return FAIL;
			    }
			    cmod->cmod_flags |= CMOD_VIM9CMD;
			    continue;
			}
			if (!checkforcmd_noparen(&p, "verbose", 4))
			    break;
			if (vim_isdigit(*eap->cmd))
			{
			    
			    cmod->cmod_verbose = atoi((char *)eap->cmd) + 1;
			}
			else
			    cmod->cmod_verbose = 2;  
			eap->cmd = p;
			continue;
	}
	break;
    }

    if (has_visual_range)
    {
	if (eap->cmd > cmd_start)
	{
	    
	    
	    
	    
	    if (use_plus_cmd)
	    {
		size_t len = STRLEN(cmd_start);

		
		
		
		
		mch_memmove(orig_cmd, cmd_start, len);
		STRCPY(orig_cmd + len, " *+");
	    }
	    else
	    {
		mch_memmove(cmd_start - 5, cmd_start, eap->cmd - cmd_start);
		eap->cmd -= 5;
		mch_memmove(eap->cmd - 1, ":'<,'>", 6);
	    }
	}
	else
	    
	    
	    if (use_plus_cmd)
		eap->cmd = (char_u *)"'<,'>+";
	    else
		eap->cmd = orig_cmd;
    }
    else if (use_plus_cmd)
	eap->cmd = (char_u *)exmode_plus;

    return OK;
}


    int
has_cmdmod(cmdmod_T *cmod, int ignore_silent)
{
    return (cmod->cmod_flags != 0 && (!ignore_silent
		|| (cmod->cmod_flags
		      & ~(CMOD_SILENT | CMOD_ERRSILENT | CMOD_UNSILENT)) != 0))
	    || cmod->cmod_split != 0
	    || cmod->cmod_verbose > 0
	    || cmod->cmod_tab != 0
	    || cmod->cmod_filter_regmatch.regprog != NULL;
}

#if defined(FEAT_EVAL) || defined(PROTO)

    int
cmdmod_error(int ignore_silent)
{
    if (in_vim9script() && has_cmdmod(&cmdmod, ignore_silent))
    {
	emsg(_(e_misplaced_command_modifier));
	return TRUE;
    }
    return FALSE;
}
#endif


    void
apply_cmdmod(cmdmod_T *cmod)
{
#ifdef HAVE_SANDBOX
    if ((cmod->cmod_flags & CMOD_SANDBOX) && !cmod->cmod_did_sandbox)
    {
	++sandbox;
	cmod->cmod_did_sandbox = TRUE;
    }
#endif
    if (cmod->cmod_verbose > 0)
    {
	if (cmod->cmod_verbose_save == 0)
	    cmod->cmod_verbose_save = p_verbose + 1;
	p_verbose = cmod->cmod_verbose - 1;
    }

    if ((cmod->cmod_flags & (CMOD_SILENT | CMOD_UNSILENT))
	    && cmod->cmod_save_msg_silent == 0)
    {
	cmod->cmod_save_msg_silent = msg_silent + 1;
	cmod->cmod_save_msg_scroll = msg_scroll;
    }
    if (cmod->cmod_flags & CMOD_SILENT)
	++msg_silent;
    if (cmod->cmod_flags & CMOD_UNSILENT)
	msg_silent = 0;

    if (cmod->cmod_flags & CMOD_ERRSILENT)
    {
	++emsg_silent;
	++cmod->cmod_did_esilent;
    }

    if ((cmod->cmod_flags & CMOD_NOAUTOCMD) && cmod->cmod_save_ei == NULL)
    {
	
	
	cmod->cmod_save_ei = vim_strsave(p_ei);
	set_string_option_direct((char_u *)"ei", -1,
					  (char_u *)"all", OPT_FREE, SID_NONE);
    }
}


    void
undo_cmdmod(cmdmod_T *cmod)
{
    if (cmod->cmod_verbose_save > 0)
    {
	p_verbose = cmod->cmod_verbose_save - 1;
	cmod->cmod_verbose_save = 0;
    }

#ifdef HAVE_SANDBOX
    if (cmod->cmod_did_sandbox)
    {
	--sandbox;
	cmod->cmod_did_sandbox = FALSE;
    }
#endif

    if (cmod->cmod_save_ei != NULL)
    {
	
	set_string_option_direct((char_u *)"ei", -1, cmod->cmod_save_ei,
							   OPT_FREE, SID_NONE);
	free_string_option(cmod->cmod_save_ei);
	cmod->cmod_save_ei = NULL;
    }

    vim_regfree(cmod->cmod_filter_regmatch.regprog);

    if (cmod->cmod_save_msg_silent > 0)
    {
	
	
	if (!did_emsg || msg_silent > cmod->cmod_save_msg_silent - 1)
	    msg_silent = cmod->cmod_save_msg_silent - 1;
	emsg_silent -= cmod->cmod_did_esilent;
	if (emsg_silent < 0)
	    emsg_silent = 0;
	
	
	msg_scroll = cmod->cmod_save_msg_scroll;

	
	
	if (redirecting())
	    msg_col = 0;

	cmod->cmod_save_msg_silent = 0;
	cmod->cmod_did_esilent = 0;
    }
}


    int
parse_cmd_address(exarg_T *eap, char **errormsg, int silent)
{
    int		address_count = 1;
    linenr_T	lnum;
    int		need_check_cursor = FALSE;
    int		ret = FAIL;

    
    for (;;)
    {
	eap->line1 = eap->line2;
	eap->line2 = default_address(eap);
	eap->cmd = skipwhite(eap->cmd);
	lnum = get_address(eap, &eap->cmd, eap->addr_type, eap->skip, silent,
					eap->addr_count == 0, address_count++);
	if (eap->cmd == NULL)	
	    goto theend;
	if (lnum == MAXLNUM)
	{
	    if (*eap->cmd == '%')   
	    {
		++eap->cmd;
		switch (eap->addr_type)
		{
		    case ADDR_LINES:
		    case ADDR_OTHER:
			eap->line1 = 1;
			eap->line2 = curbuf->b_ml.ml_line_count;
			break;
		    case ADDR_LOADED_BUFFERS:
			{
			    buf_T	*buf = firstbuf;

			    while (buf->b_next != NULL
						  && buf->b_ml.ml_mfp == NULL)
				buf = buf->b_next;
			    eap->line1 = buf->b_fnum;
			    buf = lastbuf;
			    while (buf->b_prev != NULL
						  && buf->b_ml.ml_mfp == NULL)
				buf = buf->b_prev;
			    eap->line2 = buf->b_fnum;
			    break;
			}
		    case ADDR_BUFFERS:
			eap->line1 = firstbuf->b_fnum;
			eap->line2 = lastbuf->b_fnum;
			break;
		    case ADDR_WINDOWS:
		    case ADDR_TABS:
			if (IS_USER_CMDIDX(eap->cmdidx))
			{
			    eap->line1 = 1;
			    eap->line2 = eap->addr_type == ADDR_WINDOWS
						  ? LAST_WIN_NR : LAST_TAB_NR;
			}
			else
			{
			    
			    
			    *errormsg = _(e_invalid_range);
			    goto theend;
			}
			break;
		    case ADDR_TABS_RELATIVE:
		    case ADDR_UNSIGNED:
		    case ADDR_QUICKFIX:
			*errormsg = _(e_invalid_range);
			goto theend;
		    case ADDR_ARGUMENTS:
			if (ARGCOUNT == 0)
			    eap->line1 = eap->line2 = 0;
			else
			{
			    eap->line1 = 1;
			    eap->line2 = ARGCOUNT;
			}
			break;
		    case ADDR_QUICKFIX_VALID:
#ifdef FEAT_QUICKFIX
			eap->line1 = 1;
			eap->line2 = qf_get_valid_size(eap);
			if (eap->line2 == 0)
			    eap->line2 = 1;
#endif
			break;
		    case ADDR_NONE:
			
			break;
		}
		++eap->addr_count;
	    }
	    else if (*eap->cmd == '*' && vim_strchr(p_cpo, CPO_STAR) == NULL)
	    {
		pos_T	    *fp;

		
		if (eap->addr_type != ADDR_LINES)
		{
		    *errormsg = _(e_invalid_range);
		    goto theend;
		}

		++eap->cmd;
		if (!eap->skip)
		{
		    fp = getmark('<', FALSE);
		    if (check_mark(fp) == FAIL)
			goto theend;
		    eap->line1 = fp->lnum;
		    fp = getmark('>', FALSE);
		    if (check_mark(fp) == FAIL)
			goto theend;
		    eap->line2 = fp->lnum;
		    ++eap->addr_count;
		}
	    }
	}
	else
	    eap->line2 = lnum;
	eap->addr_count++;

	if (*eap->cmd == ';')
	{
	    if (!eap->skip)
	    {
		curwin->w_cursor.lnum = eap->line2;

		
		
		
		
		if (eap->line2 > 0)
		    check_cursor();
		else
		    check_cursor_col();
		need_check_cursor = TRUE;
	    }
	}
	else if (*eap->cmd != ',')
	    break;
	++eap->cmd;
    }

    
    if (eap->addr_count == 1)
    {
	eap->line1 = eap->line2;
	
	if (lnum == MAXLNUM)
	    eap->addr_count = 0;
    }
    ret = OK;

theend:
    if (need_check_cursor)
	check_cursor();
    return ret;
}


    static void
append_command(char_u *cmd)
{
    size_t  len = STRLEN(IObuff);
    char_u  *s = cmd;
    char_u  *d;

    if (len > IOSIZE - 100)
    {
	
	d = IObuff + IOSIZE - 100;
	d -= mb_head_off(IObuff, d);
	STRCPY(d, "...");
    }
    STRCAT(IObuff, ": ");
    d = IObuff + STRLEN(IObuff);
    while (*s != NUL && d - IObuff + 5 < IOSIZE)
    {
	if (enc_utf8 ? (s[0] == 0xc2 && s[1] == 0xa0) : *s == 0xa0)
	{
	    s += enc_utf8 ? 2 : 1;
	    STRCPY(d, "<a0>");
	    d += 4;
	}
	else if (d - IObuff + (*mb_ptr2len)(s) + 1 >= IOSIZE)
	    break;
	else
	    MB_COPY_CHAR(s, d);
    }
    *d = NUL;
}

#if defined(FEAT_EVAL) || defined(PROTO)

    char_u *
skip_option_env_lead(char_u *start)
{
    char_u *name = start;

    if (*start == '&')
    {
	if ((start[1] == 'l' || start[1] == 'g') && start[2] == ':')
	    name += 3;
	else
	    name += 1;
    }
    else if (*start == '$')
	name += 1;
    return name;
}
#endif


    static int
one_letter_cmd(char_u *p, cmdidx_T *idx)
{
    if (in_vim9script())
	return FALSE;
    if (*p == 'k')
    {
	*idx = CMD_k;
	return TRUE;
    }
    if (p[0] == 's'
	    && ((p[1] == 'c' && (p[2] == NUL || (p[2] != 's' && p[2] != 'r'
			&& (p[3] == NUL || (p[3] != 'i' && p[4] != 'p')))))
		|| p[1] == 'g'
		|| (p[1] == 'i' && p[2] != 'm' && p[2] != 'l' && p[2] != 'g')
		|| p[1] == 'I'
		|| (p[1] == 'r' && p[2] != 'e')))
    {
	*idx = CMD_substitute;
	return TRUE;
    }
    return FALSE;
}

#if defined(FEAT_EVAL) || defined(PROTO)

    int
number_method(char_u *cmd)
{
    char_u *p = skipdigits(cmd);

    return p > cmd && (p = skipwhite(p))[0] == '-' && p[1] == '>';
}
#endif


    char_u *
find_ex_command(
	exarg_T *eap,
	int	*full UNUSED,
	int	(*lookup)(char_u *, size_t, int cmd, cctx_T *) UNUSED,
	cctx_T	*cctx UNUSED)
{
    int		len;
    char_u	*p;
    int		i;
#ifndef FEAT_EVAL
    int		vim9 = FALSE;
#else
    int		vim9 = in_vim9script();

    
    p = eap->cmd;
    if (lookup != NULL)
    {
	char_u *pskip = skip_option_env_lead(eap->cmd);

	if (vim_strchr((char_u *)"{('[\"@&$", *p) != NULL
	       || ((p = to_name_const_end(pskip)) > eap->cmd && *p != NUL)
	       || (p[0] == '0' && p[1] == 'z'))
	{
	    int	    oplen;
	    int	    heredoc;
	    char_u  *swp;

	    if (*eap->cmd == '&'
		    || (eap->cmd[0] == '$'
				  && eap->cmd[1] != '\'' && eap->cmd[1] != '"')
		    || (eap->cmd[0] == '@'
					&& (valid_yank_reg(eap->cmd[1], FALSE)
						       || eap->cmd[1] == '@')))
	    {
		if (*eap->cmd == '&')
		{
		    p = eap->cmd + 1;
		    if (STRNCMP("l:", p, 2) == 0 || STRNCMP("g:", p, 2) == 0)
			p += 2;
		    p = to_name_end(p, FALSE);
		}
		else if (*eap->cmd == '$')
		    p = to_name_end(eap->cmd + 1, FALSE);
		else
		    p = eap->cmd + 2;
		if (ends_excmd(*skipwhite(p)))
		{
		    
		    
		    eap->cmdidx = CMD_eval;
		    return eap->cmd;
		}
		
	    }

	    swp = skipwhite(p);

	    if (
		
		
		*p == '('
		    || (p == eap->cmd
			? (
			    
			    *eap->cmd == '{'
			    
			 || *eap->cmd == '\''
			    
			 || *eap->cmd == '"'
			    
			    
			 || (eap->cmd[0] == '$'
			     && (eap->cmd[1] == '\'' || eap->cmd[1] == '"'))
			    
			 || (eap->cmd[0] == '0' && eap->cmd[1] == 'z')
			    
			 || eap->cmd[1] == ':'
			    )
			    
			: (*swp == '-' && swp[1] == '>')))
	    {
		if (*eap->cmd == '{' && ends_excmd(*skipwhite(eap->cmd + 1)))
		{
		    
		    eap->cmdidx = CMD_block;
		    return eap->cmd + 1;
		}
		eap->cmdidx = CMD_eval;
		return eap->cmd;
	    }

	    if ((p != eap->cmd && (
			    
			    *p == '['
			    
			 || (*p == '.'
				     && (ASCII_ISALPHA(p[1]) || p[1] == '_'))))
			
		    || STRNCMP(eap->cmd, "g:[", 3) == 0)
	    {
		char_u	*after = eap->cmd;

		
		
		
		
		
		
		
		eap->cmdidx = CMD_eval;
		++emsg_silent;
		if (skip_expr(&after, NULL) == OK)
		{
		    after = skipwhite(after);
		    if (*after == '=' || (*after != NUL && after[1] == '=')
					 || (after[0] == '.' && after[1] == '.'
							   && after[2] == '='))
			eap->cmdidx = CMD_var;
		}
		--emsg_silent;
		return eap->cmd;
	    }

	    
	    
	    
	    
	    
	    
	    
	    if (*eap->cmd == '[')
	    {
		char_u	    *eq;

		p = to_name_const_end(eap->cmd);
		if (p == eap->cmd && *p == '[')
		{
		    int count = 0;
		    int	semicolon = FALSE;

		    p = skip_var_list(eap->cmd, TRUE, &count, &semicolon, TRUE);
		}
		eq = p;
		if (eq != NULL)
		{
		    eq = skipwhite(eq);
		    if (vim_strchr((char_u *)"+-*/%", *eq) != NULL)
			++eq;
		}
		if (p == NULL || p == eap->cmd || *eq != '=')
		{
		    eap->cmdidx = CMD_eval;
		    return eap->cmd;
		}
		if (p > eap->cmd && *eq == '=')
		{
		    eap->cmdidx = CMD_var;
		    return eap->cmd;
		}
	    }

	    
	    
	    
	    
	    
	    
	    
	    oplen = assignment_len(skipwhite(p), &heredoc);
	    if (oplen > 0)
	    {
		if (((p - eap->cmd) > 2 && eap->cmd[1] == ':')
			|| *eap->cmd == '&'
			|| *eap->cmd == '$'
			|| *eap->cmd == '@'
			|| (eap->skip && IS_WHITE_OR_NUL(
						      *(skipwhite(p) + oplen)))
			|| lookup(eap->cmd, p - eap->cmd, TRUE, cctx) == OK)
		{
		    eap->cmdidx = CMD_var;
		    return eap->cmd;
		}
	    }

	    
	    
	    if (eap->cmd[1] == ':' && *p == ':')
	    {
		eap->cmdidx = CMD_var;
		return eap->cmd;
	    }
	}

	
	if (number_method(eap->cmd))
	{
	    eap->cmdidx = CMD_eval;
	    return eap->cmd;
	}

	
	
	
	if (vim_strchr((char_u *)"gsl", *p) != NULL && p[1] == ':')
	{
	    eap->cmdidx = CMD_eval;
	    return eap->cmd;
	}

	
	
	if (p > eap->cmd && ends_excmd(*skipwhite(p))
		&& (lookup(eap->cmd, p - eap->cmd, TRUE, cctx) == OK
		    || (ASCII_ISALPHA(eap->cmd[0]) && eap->cmd[1] == ':')))
	{
	    eap->cmdidx = CMD_eval;
	    return eap->cmd;
	}

	
	if (p == eap->cmd && p[0] != NUL && p[0] == p[1]
						   && (*p == '+' || *p == '-'))
	{
	    eap->cmdidx = *p == '+' ? CMD_increment : CMD_decrement;
	    return eap->cmd + 2;
	}
    }
#endif

    
    p = eap->cmd;
    if (one_letter_cmd(p, &eap->cmdidx))
    {
	++p;
    }
    else
    {
	while (ASCII_ISALPHA(*p))
	    ++p;
	
	if (eap->cmd[0] == 'p' && eap->cmd[1] == 'y')
	{
	    while (ASCII_ISALNUM(*p))
		++p;
	}
	else if (*p == '9' && STRNCMP("vim9", eap->cmd, 4) == 0)
	{
	    
	    ++p;
	    while (ASCII_ISALPHA(*p))
		++p;
	}

	
	if (p == eap->cmd && vim_strchr((char_u *)"@*!=><&~#}", *p) != NULL)
	    ++p;
	len = (int)(p - eap->cmd);
	
	
	if (!vim9 && *eap->cmd == 'd' && (p[-1] == 'l' || p[-1] == 'p'))
	{
	    
	    
	    for (i = 0; i < len; ++i)
		if (eap->cmd[i] != ((char_u *)"delete")[i])
		    break;
	    if (i == len - 1)
	    {
		--len;
		if (p[-1] == 'l')
		    eap->flags |= EXFLAG_LIST;
		else
		    eap->flags |= EXFLAG_PRINT;
	    }
	}

	if (ASCII_ISLOWER(eap->cmd[0]))
	{
	    int c1 = eap->cmd[0];
	    int c2 = len == 1 ? NUL : eap->cmd[1];

	    if (command_count != (int)CMD_SIZE)
	    {
		iemsg(e_command_table_needs_to_be_updated_run_make_cmdidxs);
		getout(1);
	    }

	    
	    
	    eap->cmdidx = cmdidxs1[CharOrdLow(c1)];
	    if (ASCII_ISLOWER(c2))
		eap->cmdidx += cmdidxs2[CharOrdLow(c1)][CharOrdLow(c2)];
	}
	else if (ASCII_ISUPPER(eap->cmd[0]))
	    eap->cmdidx = CMD_Next;
	else
	    eap->cmdidx = CMD_bang;

	for ( ; (int)eap->cmdidx < (int)CMD_SIZE;
			       eap->cmdidx = (cmdidx_T)((int)eap->cmdidx + 1))
	    if (STRNCMP(cmdnames[(int)eap->cmdidx].cmd_name, (char *)eap->cmd,
							    (size_t)len) == 0)
	    {
#ifdef FEAT_EVAL
		if (full != NULL && cmdnames[eap->cmdidx].cmd_name[len] == NUL)
		    *full = TRUE;
#endif
		break;
	    }

	
	
	if (vim9 && eap->cmdidx != CMD_SIZE)
	{
	    if (eap->cmdidx == CMD_mode || eap->cmdidx == CMD_Print)
		eap->cmdidx = CMD_SIZE;
	    else if ((cmdnames[eap->cmdidx].cmd_argt & EX_WHOLE)
			  && len < (int)cmdnames[eap->cmdidx].cmd_namelen)
	    {
		semsg(_(e_command_cannot_be_shortened_str), eap->cmd);
		eap->cmdidx = CMD_SIZE;
	    }
	}

	
	
	if (eap->cmdidx == CMD_star && vim_strchr(p_cpo, CPO_STAR) == NULL)
	    p = eap->cmd;

	
	
	if ((eap->cmdidx == CMD_SIZE || eap->cmdidx == CMD_Print)
		&& *eap->cmd >= 'A' && *eap->cmd <= 'Z')
	{
	    
	    while (ASCII_ISALNUM(*p))
		++p;
	    p = find_ucmd(eap, p, full, NULL, NULL);
	}
	if (p == NULL || p == eap->cmd)
	    eap->cmdidx = CMD_SIZE;
    }

    
    if (eap->cmdidx == CMD_final && p - eap->cmd == 4 && !vim9)
	eap->cmdidx = CMD_finally;

#ifdef FEAT_EVAL
    if (eap->cmdidx < CMD_SIZE
	    && vim9
	    && !IS_WHITE_NL_OR_NUL(*p) && *p != '!' && *p != '|'
	    && (eap->cmdidx < 0 ||
		(cmdnames[eap->cmdidx].cmd_argt & EX_NONWHITE_OK) == 0))
    {
	char_u *cmd = vim_strnsave(eap->cmd, p - eap->cmd);

	semsg(_(e_command_str_not_followed_by_white_space_str), cmd, eap->cmd);
	eap->cmdidx = CMD_SIZE;
	vim_free(cmd);
    }
#endif

    return p;
}

#if defined(FEAT_EVAL) || defined(PROTO)
typedef struct
{
    char	*name;
    int		minlen;
    int		has_count;  
} cmdmod_info_T;

static cmdmod_info_T cmdmod_info_tab[] = {
    {"aboveleft", 3, FALSE},
    {"belowright", 3, FALSE},
    {"botright", 2, FALSE},
    {"browse", 3, FALSE},
    {"confirm", 4, FALSE},
    {"filter", 4, FALSE},
    {"hide", 3, FALSE},
    {"horizontal", 3, FALSE},
    {"keepalt", 5, FALSE},
    {"keepjumps", 5, FALSE},
    {"keepmarks", 3, FALSE},
    {"keeppatterns", 5, FALSE},
    {"leftabove", 5, FALSE},
    {"legacy", 3, FALSE},
    {"lockmarks", 3, FALSE},
    {"noautocmd", 3, FALSE},
    {"noswapfile", 3, FALSE},
    {"rightbelow", 6, FALSE},
    {"sandbox", 3, FALSE},
    {"silent", 3, FALSE},
    {"tab", 3, TRUE},
    {"topleft", 2, FALSE},
    {"unsilent", 3, FALSE},
    {"verbose", 4, TRUE},
    {"vertical", 4, FALSE},
    {"vim9cmd", 4, FALSE}
};	


    int
modifier_len(char_u *cmd)
{
    int		i, j;
    char_u	*p = cmd;

    if (VIM_ISDIGIT(*cmd))
	p = skipwhite(skipdigits(cmd + 1));
    for (i = 0; i < (int)ARRAY_LENGTH(cmdmod_info_tab); ++i)
    {
	for (j = 0; p[j] != NUL; ++j)
	    if (p[j] != cmdmod_info_tab[i].name[j])
		break;
	if (!ASCII_ISALPHA(p[j]) && j >= cmdmod_info_tab[i].minlen
					&& (p == cmd || cmdmod_info_tab[i].has_count))
	    return j + (int)(p - cmd);
    }
    return 0;
}


    int
cmd_exists(char_u *name)
{
    exarg_T	ea;
    int		full = FALSE;
    int		i;
    int		j;
    char_u	*p;

    
    for (i = 0; i < (int)ARRAY_LENGTH(cmdmod_info_tab); ++i)
    {
	for (j = 0; name[j] != NUL; ++j)
	    if (name[j] != cmdmod_info_tab[i].name[j])
		break;
	if (name[j] == NUL && j >= cmdmod_info_tab[i].minlen)
	    return (cmdmod_info_tab[i].name[j] == NUL ? 2 : 1);
    }

    
    
    ea.cmd = (*name == '2' || *name == '3') ? name + 1 : name;
    ea.cmdidx = (cmdidx_T)0;
    ea.flags = 0;
    p = find_ex_command(&ea, &full, NULL, NULL);
    if (p == NULL)
	return 3;
    if (vim_isdigit(*name) && ea.cmdidx != CMD_match)
	return 0;
    if (*skipwhite(p) != NUL)
	return 0;	
    return (ea.cmdidx == CMD_SIZE ? 0 : (full ? 2 : 1));
}


    void
f_fullcommand(typval_T *argvars, typval_T *rettv)
{
    exarg_T	ea;
    char_u	*name;
    char_u	*p;
    int		vim9script = in_vim9script();
    int		save_cmod_flags = cmdmod.cmod_flags;

    rettv->v_type = VAR_STRING;
    rettv->vval.v_string = NULL;

    if (in_vim9script()
	    && (check_for_string_arg(argvars, 0) == FAIL
		|| check_for_opt_bool_arg(argvars, 1) == FAIL))
	return;

    name = tv_get_string(&argvars[0]);
    if (name == NULL)
	return;

    if (argvars[1].v_type != VAR_UNKNOWN)
    {
	vim9script = tv_get_bool(&argvars[1]);
	cmdmod.cmod_flags &= ~(CMOD_VIM9CMD | CMOD_LEGACY);
	cmdmod.cmod_flags |= vim9script ? CMOD_VIM9CMD : CMOD_LEGACY;
    }

    while (*name == ':')
	name++;
    name = skip_range(name, TRUE, NULL);

    ea.cmd = (*name == '2' || *name == '3') ? name + 1 : name;
    ea.cmdidx = (cmdidx_T)0;
    ea.addr_count = 0;
    ++emsg_silent;  
    p = find_ex_command(&ea, NULL, NULL, NULL);
    --emsg_silent;
    if (p == NULL || ea.cmdidx == CMD_SIZE)
	goto theend;

    if (vim9script)
    {
	int	     res;

	++emsg_silent;
	res = not_in_vim9(&ea);
	--emsg_silent;

	if (res == FAIL)
	    goto theend;
    }

    rettv->vval.v_string = vim_strsave(IS_USER_CMDIDX(ea.cmdidx)
				 ? get_user_command_name(ea.useridx, ea.cmdidx)
				 : cmdnames[ea.cmdidx].cmd_name);
theend:
    cmdmod.cmod_flags = save_cmod_flags;
}
#endif

    cmdidx_T
excmd_get_cmdidx(char_u *cmd, int len)
{
    cmdidx_T idx;

    if (!one_letter_cmd(cmd, &idx))
	for (idx = (cmdidx_T)0; (int)idx < (int)CMD_SIZE;
		idx = (cmdidx_T)((int)idx + 1))
	    if (STRNCMP(cmdnames[(int)idx].cmd_name, cmd, (size_t)len) == 0)
		break;

    return idx;
}

    int
excmd_get_argt(cmdidx_T idx)
{
    return (int)cmdnames[(int)idx].cmd_argt;
}


    char_u *
skip_range(
    char_u	*cmd_start,
    int		skip_star,	
    int		*ctx)		
{
    char_u	*cmd = cmd_start;
    unsigned	delim;

    while (vim_strchr((char_u *)" \t0123456789.$%'/?-+,;\\", *cmd) != NULL)
    {
	if (*cmd == '\\')
	{
	    if (cmd[1] == '?' || cmd[1] == '/' || cmd[1] == '&')
		++cmd;
	    else
		break;
	}
	else if (*cmd == '\'')
	{
	    char_u *p = cmd;

	    
	    while (p > cmd_start)
	    {
		--p;
		if (!VIM_ISWHITE(*p))
		    break;
	    }
	    if (cmd > cmd_start && !VIM_ISWHITE(*p) && *p != ',' && *p != ';')
		break;
	    if (*++cmd == NUL && ctx != NULL)
		*ctx = EXPAND_NOTHING;
	}
	else if (*cmd == '/' || *cmd == '?')
	{
	    delim = *cmd++;
	    while (*cmd != NUL && *cmd != delim)
		if (*cmd++ == '\\' && *cmd != NUL)
		    ++cmd;
	    if (*cmd == NUL && ctx != NULL)
		*ctx = EXPAND_NOTHING;
	}
	if (*cmd != NUL)
	    ++cmd;
    }

    
    while (*cmd == ':')
	cmd = skipwhite(cmd + 1);

    
    if (skip_star && *cmd == '*' && vim_strchr(p_cpo, CPO_STAR) == NULL)
	cmd = skipwhite(cmd + 1);

    return cmd;
}

    static void
addr_error(cmd_addr_T addr_type)
{
    if (addr_type == ADDR_NONE)
	emsg(_(e_no_range_allowed));
    else
	emsg(_(e_invalid_range));
}


    static linenr_T
default_address(exarg_T *eap)
{
    linenr_T lnum = 0;

    switch (eap->addr_type)
    {
	case ADDR_LINES:
	case ADDR_OTHER:
	    
	    
	    if (curwin->w_cursor.lnum > curbuf->b_ml.ml_line_count)
		lnum = curbuf->b_ml.ml_line_count;
	    else
		lnum = curwin->w_cursor.lnum;
	    break;
	case ADDR_WINDOWS:
	    lnum = CURRENT_WIN_NR;
	    break;
	case ADDR_ARGUMENTS:
	    lnum = curwin->w_arg_idx + 1;
	    if (lnum > ARGCOUNT)
		lnum = ARGCOUNT;
	    break;
	case ADDR_LOADED_BUFFERS:
	case ADDR_BUFFERS:
	    lnum = curbuf->b_fnum;
	    break;
	case ADDR_TABS:
	    lnum = CURRENT_TAB_NR;
	    break;
	case ADDR_TABS_RELATIVE:
	case ADDR_UNSIGNED:
	    lnum = 1;
	    break;
	case ADDR_QUICKFIX:
#ifdef FEAT_QUICKFIX
	    lnum = qf_get_cur_idx(eap);
#endif
	    break;
	case ADDR_QUICKFIX_VALID:
#ifdef FEAT_QUICKFIX
	    lnum = qf_get_cur_valid_idx(eap);
#endif
	    break;
	case ADDR_NONE:
	    
	    break;
    }
    return lnum;
}


    static linenr_T
get_address(
    exarg_T	*eap UNUSED,
    char_u	**ptr,
    cmd_addr_T	addr_type,
    int		skip,		
    int		silent,		
    int		to_other_file,  
    int		address_count UNUSED) 
{
    int		c;
    int		i;
    int	n;
    char_u	*cmd;
    pos_T	pos;
    pos_T	*fp;
    linenr_T	lnum;
    buf_T	*buf;

    cmd = skipwhite(*ptr);
    lnum = MAXLNUM;
    do
    {
	switch (*cmd)
	{
	    case '.':			    
		++cmd;
		switch (addr_type)
		{
		    case ADDR_LINES:
		    case ADDR_OTHER:
			lnum = curwin->w_cursor.lnum;
			break;
		    case ADDR_WINDOWS:
			lnum = CURRENT_WIN_NR;
			break;
		    case ADDR_ARGUMENTS:
			lnum = curwin->w_arg_idx + 1;
			break;
		    case ADDR_LOADED_BUFFERS:
		    case ADDR_BUFFERS:
			lnum = curbuf->b_fnum;
			break;
		    case ADDR_TABS:
			lnum = CURRENT_TAB_NR;
			break;
		    case ADDR_NONE:
		    case ADDR_TABS_RELATIVE:
		    case ADDR_UNSIGNED:
			addr_error(addr_type);
			cmd = NULL;
			goto error;
			break;
		    case ADDR_QUICKFIX:
#ifdef FEAT_QUICKFIX
			lnum = qf_get_cur_idx(eap);
#endif
			break;
		    case ADDR_QUICKFIX_VALID:
#ifdef FEAT_QUICKFIX
			lnum = qf_get_cur_valid_idx(eap);
#endif
			break;
		}
		break;

	    case '$':			    
		++cmd;
		switch (addr_type)
		{
		    case ADDR_LINES:
		    case ADDR_OTHER:
			lnum = curbuf->b_ml.ml_line_count;
			break;
		    case ADDR_WINDOWS:
			lnum = LAST_WIN_NR;
			break;
		    case ADDR_ARGUMENTS:
			lnum = ARGCOUNT;
			break;
		    case ADDR_LOADED_BUFFERS:
			buf = lastbuf;
			while (buf->b_ml.ml_mfp == NULL)
			{
			    if (buf->b_prev == NULL)
				break;
			    buf = buf->b_prev;
			}
			lnum = buf->b_fnum;
			break;
		    case ADDR_BUFFERS:
			lnum = lastbuf->b_fnum;
			break;
		    case ADDR_TABS:
			lnum = LAST_TAB_NR;
			break;
		    case ADDR_NONE:
		    case ADDR_TABS_RELATIVE:
		    case ADDR_UNSIGNED:
			addr_error(addr_type);
			cmd = NULL;
			goto error;
			break;
		    case ADDR_QUICKFIX:
#ifdef FEAT_QUICKFIX
			lnum = qf_get_size(eap);
			if (lnum == 0)
			    lnum = 1;
#endif
			break;
		    case ADDR_QUICKFIX_VALID:
#ifdef FEAT_QUICKFIX
			lnum = qf_get_valid_size(eap);
			if (lnum == 0)
			    lnum = 1;
#endif
			break;
		}
		break;

	    case '\'':			    
		if (*++cmd == NUL)
		{
		    cmd = NULL;
		    goto error;
		}
		if (addr_type != ADDR_LINES)
		{
		    addr_error(addr_type);
		    cmd = NULL;
		    goto error;
		}
		if (skip)
		    ++cmd;
		else
		{
		    
		    
		    fp = getmark(*cmd, to_other_file && cmd[1] == NUL);
		    ++cmd;
		    if (fp == (pos_T *)-1)
			
			lnum = curwin->w_cursor.lnum;
		    else
		    {
			if (check_mark(fp) == FAIL)
			{
			    cmd = NULL;
			    goto error;
			}
			lnum = fp->lnum;
		    }
		}
		break;

	    case '/':
	    case '?':			
		c = *cmd++;
		if (addr_type != ADDR_LINES)
		{
		    addr_error(addr_type);
		    cmd = NULL;
		    goto error;
		}
		if (skip)	
		{
		    cmd = skip_regexp(cmd, c, magic_isset());
		    if (*cmd == c)
			++cmd;
		}
		else
		{
		    int flags;

		    pos = curwin->w_cursor; 

		    
		    
		    if (lnum > 0 && lnum != MAXLNUM)
			curwin->w_cursor.lnum =
				lnum > curbuf->b_ml.ml_line_count
					   ? curbuf->b_ml.ml_line_count : lnum;

		    
		    
		    
		    
		    
		    
		    if (c == '/' && curwin->w_cursor.lnum > 0)
			curwin->w_cursor.col = MAXCOL;
		    else
			curwin->w_cursor.col = 0;
		    searchcmdlen = 0;
		    flags = silent ? 0 : SEARCH_HIS | SEARCH_MSG;
		    if (!do_search(NULL, c, c, cmd, STRLEN(cmd), 1L, flags, NULL))
		    {
			curwin->w_cursor = pos;
			cmd = NULL;
			goto error;
		    }
		    lnum = curwin->w_cursor.lnum;
		    curwin->w_cursor = pos;
		    
		    cmd += searchcmdlen;
		}
		break;

	    case '\\':		    
		++cmd;
		if (addr_type != ADDR_LINES)
		{
		    addr_error(addr_type);
		    cmd = NULL;
		    goto error;
		}
		if (*cmd == '&')
		    i = RE_SUBST;
		else if (*cmd == '?' || *cmd == '/')
		    i = RE_SEARCH;
		else
		{
		    emsg(_(e_backslash_should_be_followed_by));
		    cmd = NULL;
		    goto error;
		}

		if (!skip)
		{
		    
		    if (lnum != MAXLNUM)
			pos.lnum = lnum;
		    else
			pos.lnum = curwin->w_cursor.lnum;

		    
		    if (*cmd != '?')
			pos.col = MAXCOL;
		    else
			pos.col = 0;
		    pos.coladd = 0;
		    if (searchit(curwin, curbuf, &pos, NULL,
				*cmd == '?' ? BACKWARD : FORWARD,
				(char_u *)"", 0, 1L, SEARCH_MSG, i, NULL) != FAIL)
			lnum = pos.lnum;
		    else
		    {
			cmd = NULL;
			goto error;
		    }
		}
		++cmd;
		break;

	    default:
		if (VIM_ISDIGIT(*cmd))	
		    lnum = getdigits(&cmd);
	}

	for (;;)
	{
	    cmd = skipwhite(cmd);
	    if (*cmd != '-' && *cmd != '+' && !VIM_ISDIGIT(*cmd))
		break;

	    if (lnum == MAXLNUM)
	    {
		switch (addr_type)
		{
		    case ADDR_LINES:
		    case ADDR_OTHER:
			
			lnum = curwin->w_cursor.lnum;
			break;
		    case ADDR_WINDOWS:
			lnum = CURRENT_WIN_NR;
			break;
		    case ADDR_ARGUMENTS:
			lnum = curwin->w_arg_idx + 1;
			break;
		    case ADDR_LOADED_BUFFERS:
		    case ADDR_BUFFERS:
			lnum = curbuf->b_fnum;
			break;
		    case ADDR_TABS:
			lnum = CURRENT_TAB_NR;
			break;
		    case ADDR_TABS_RELATIVE:
			lnum = 1;
			break;
		    case ADDR_QUICKFIX:
#ifdef FEAT_QUICKFIX
			lnum = qf_get_cur_idx(eap);
#endif
			break;
		    case ADDR_QUICKFIX_VALID:
#ifdef FEAT_QUICKFIX
			lnum = qf_get_cur_valid_idx(eap);
#endif
			break;
		    case ADDR_NONE:
		    case ADDR_UNSIGNED:
			lnum = 0;
			break;
		}
	    }

	    if (VIM_ISDIGIT(*cmd))
		i = '+';		
	    else
		i = *cmd++;
	    if (!VIM_ISDIGIT(*cmd))	
		n = 1;
	    else
	    {
		
		n = getdigits(&cmd);
		if (n == MAXLNUM)
		{
		    emsg(_(e_line_number_out_of_range));
		    cmd = NULL;
		    goto error;
		}
	    }

	    if (addr_type == ADDR_TABS_RELATIVE)
	    {
		emsg(_(e_invalid_range));
		cmd = NULL;
		goto error;
	    }
	    else if (addr_type == ADDR_LOADED_BUFFERS
		    || addr_type == ADDR_BUFFERS)
		lnum = compute_buffer_local_count(
				    addr_type, lnum, (i == '-') ? -1 * n : n);
	    else
	    {
#ifdef FEAT_FOLDING
		
		
		if (addr_type == ADDR_LINES && (i == '-' || i == '+')
							 && address_count >= 2)
		    (void)hasFolding(lnum, NULL, &lnum);
#endif
		if (i == '-')
		    lnum -= n;
		else
		{
		    if (lnum >= 0 && n >= LONG_MAX - lnum)
		    {
			emsg(_(e_line_number_out_of_range));
			cmd = NULL;
			goto error;
		    }
		    lnum += n;
		}
	    }
	}
    } while (*cmd == '/' || *cmd == '?');

error:
    *ptr = cmd;
    return lnum;
}


    static void
address_default_all(exarg_T *eap)
{
    eap->line1 = 1;
    switch (eap->addr_type)
    {
	case ADDR_LINES:
	case ADDR_OTHER:
	    eap->line2 = curbuf->b_ml.ml_line_count;
	    break;
	case ADDR_LOADED_BUFFERS:
	    {
		buf_T *buf = firstbuf;

		while (buf->b_next != NULL && buf->b_ml.ml_mfp == NULL)
		    buf = buf->b_next;
		eap->line1 = buf->b_fnum;
		buf = lastbuf;
		while (buf->b_prev != NULL && buf->b_ml.ml_mfp == NULL)
		    buf = buf->b_prev;
		eap->line2 = buf->b_fnum;
	    }
	    break;
	case ADDR_BUFFERS:
	    eap->line1 = firstbuf->b_fnum;
	    eap->line2 = lastbuf->b_fnum;
	    break;
	case ADDR_WINDOWS:
	    eap->line2 = LAST_WIN_NR;
	    break;
	case ADDR_TABS:
	    eap->line2 = LAST_TAB_NR;
	    break;
	case ADDR_TABS_RELATIVE:
	    eap->line2 = 1;
	    break;
	case ADDR_ARGUMENTS:
	    if (ARGCOUNT == 0)
		eap->line1 = eap->line2 = 0;
	    else
		eap->line2 = ARGCOUNT;
	    break;
	case ADDR_QUICKFIX_VALID:
#ifdef FEAT_QUICKFIX
	    eap->line2 = qf_get_valid_size(eap);
	    if (eap->line2 == 0)
		eap->line2 = 1;
#endif
	    break;
	case ADDR_NONE:
	case ADDR_UNSIGNED:
	case ADDR_QUICKFIX:
	    iemsg("Cannot use EX_DFLALL with ADDR_NONE, ADDR_UNSIGNED or ADDR_QUICKFIX");
	    break;
    }
}



    static void
get_flags(exarg_T *eap)
{
    while (vim_strchr((char_u *)"lp#", *eap->arg) != NULL)
    {
	if (*eap->arg == 'l')
	    eap->flags |= EXFLAG_LIST;
	else if (*eap->arg == 'p')
	    eap->flags |= EXFLAG_PRINT;
	else
	    eap->flags |= EXFLAG_NR;
	eap->arg = skipwhite(eap->arg + 1);
    }
}


    void
ex_ni(exarg_T *eap)
{
    if (!eap->skip)
	eap->errmsg =
		_(e_sorry_command_is_not_available_in_this_version);
}

#ifdef HAVE_EX_SCRIPT_NI

    static void
ex_script_ni(exarg_T *eap)
{
    if (!eap->skip)
	ex_ni(eap);
    else
	vim_free(script_get(eap, eap->arg));
}
#endif


    static char *
invalid_range(exarg_T *eap)
{
    buf_T	*buf;

    if (       eap->line1 < 0
	    || eap->line2 < 0
	    || eap->line1 > eap->line2)
	return _(e_invalid_range);

    if (eap->argt & EX_RANGE)
    {
	switch (eap->addr_type)
	{
	    case ADDR_LINES:
		if (eap->line2 > curbuf->b_ml.ml_line_count
#ifdef FEAT_DIFF
			    + (eap->cmdidx == CMD_diffget)
#endif
		   )
		    return _(e_invalid_range);
		break;
	    case ADDR_ARGUMENTS:
		
		if (eap->line2 > ARGCOUNT + (!ARGCOUNT))
		    return _(e_invalid_range);
		break;
	    case ADDR_BUFFERS:
		
		
		if (eap->line1 < 1 || eap->line2 > get_highest_fnum())
		    return _(e_invalid_range);
		break;
	    case ADDR_LOADED_BUFFERS:
		buf = firstbuf;
		while (buf->b_ml.ml_mfp == NULL)
		{
		    if (buf->b_next == NULL)
			return _(e_invalid_range);
		    buf = buf->b_next;
		}
		if (eap->line1 < buf->b_fnum)
		    return _(e_invalid_range);
		buf = lastbuf;
		while (buf->b_ml.ml_mfp == NULL)
		{
		    if (buf->b_prev == NULL)
			return _(e_invalid_range);
		    buf = buf->b_prev;
		}
		if (eap->line2 > buf->b_fnum)
		    return _(e_invalid_range);
		break;
	    case ADDR_WINDOWS:
		if (eap->line2 > LAST_WIN_NR)
		    return _(e_invalid_range);
		break;
	    case ADDR_TABS:
		if (eap->line2 > LAST_TAB_NR)
		    return _(e_invalid_range);
		break;
	    case ADDR_TABS_RELATIVE:
	    case ADDR_OTHER:
		
		break;
	    case ADDR_QUICKFIX:
#ifdef FEAT_QUICKFIX
		
		if (eap->line2 <= 0)
		{
		    if (eap->addr_count == 0)
			return _(e_no_errors);
		    return _(e_invalid_range);
		}
#endif
		break;
	    case ADDR_QUICKFIX_VALID:
#ifdef FEAT_QUICKFIX
		if ((eap->line2 != 1 && eap->line2 > qf_get_valid_size(eap))
			|| eap->line2 < 0)
		    return _(e_invalid_range);
#endif
		break;
	    case ADDR_UNSIGNED:
	    case ADDR_NONE:
		
		break;
	}
    }
    return NULL;
}


    static void
correct_range(exarg_T *eap)
{
    if (!(eap->argt & EX_ZEROR))	    
    {
	if (eap->line1 == 0)
	    eap->line1 = 1;
	if (eap->line2 == 0)
	    eap->line2 = 1;
    }
}

#ifdef FEAT_QUICKFIX

    static char_u *
skip_grep_pat(exarg_T *eap)
{
    char_u	*p = eap->arg;

    if (*p != NUL && (eap->cmdidx == CMD_vimgrep || eap->cmdidx == CMD_lvimgrep
		|| eap->cmdidx == CMD_vimgrepadd
		|| eap->cmdidx == CMD_lvimgrepadd
		|| grep_internal(eap->cmdidx)))
    {
	p = skip_vimgrep_pat(p, NULL, NULL);
	if (p == NULL)
	    p = eap->arg;
    }
    return p;
}


    static char_u *
replace_makeprg(exarg_T *eap, char_u *p, char_u **cmdlinep)
{
    char_u	*new_cmdline;
    char_u	*program;
    char_u	*pos;
    char_u	*ptr;
    int		len;
    int		i;

    
    if ((eap->cmdidx == CMD_make || eap->cmdidx == CMD_lmake
		     || eap->cmdidx == CMD_grep || eap->cmdidx == CMD_lgrep
		     || eap->cmdidx == CMD_grepadd
		     || eap->cmdidx == CMD_lgrepadd)
	    && !grep_internal(eap->cmdidx))
    {
	if (eap->cmdidx == CMD_grep || eap->cmdidx == CMD_lgrep
	    || eap->cmdidx == CMD_grepadd || eap->cmdidx == CMD_lgrepadd)
	{
	    if (*curbuf->b_p_gp == NUL)
		program = p_gp;
	    else
		program = curbuf->b_p_gp;
	}
	else
	{
	    if (*curbuf->b_p_mp == NUL)
		program = p_mp;
	    else
		program = curbuf->b_p_mp;
	}

	p = skipwhite(p);

	if ((pos = (char_u *)strstr((char *)program, "$*")) != NULL)
	{
	    
	    i = 1;
	    while ((pos = (char_u *)strstr((char *)pos + 2, "$*")) != NULL)
		++i;
	    len = (int)STRLEN(p);
	    new_cmdline = alloc(STRLEN(program) + (size_t)i * (len - 2) + 1);
	    if (new_cmdline == NULL)
		return NULL;			
	    ptr = new_cmdline;
	    while ((pos = (char_u *)strstr((char *)program, "$*")) != NULL)
	    {
		i = (int)(pos - program);
		STRNCPY(ptr, program, i);
		STRCPY(ptr += i, p);
		ptr += len;
		program = pos + 2;
	    }
	    STRCPY(ptr, program);
	}
	else
	{
	    size_t program_len = STRLEN(program);

	    new_cmdline = alloc(program_len + STRLEN(p) + 2);
	    if (new_cmdline == NULL)
		return NULL;			
	    STRCPY(new_cmdline, program);
	    STRCPY(new_cmdline + program_len, " ");
	    STRCPY(new_cmdline + program_len + 1, p);
	}
	msg_make(p);

	
	vim_free(*cmdlinep);
	*cmdlinep = new_cmdline;
	p = new_cmdline;
    }
    return p;
}
#endif


    int
expand_filename(
    exarg_T	*eap,
    char_u	**cmdlinep,
    char	**errormsgp)
{
    int		has_wildcards;	
    char_u	*repl;
    size_t	srclen;
    char_u	*p;
    int		n;
    int		escaped;

#ifdef FEAT_QUICKFIX
    
    p = skip_grep_pat(eap);
#else
    p = eap->arg;
#endif

    
    has_wildcards = mch_has_wildcard(p);
    while (*p != NUL)
    {
#ifdef FEAT_EVAL
	
	if (p[0] == '`' && p[1] == '=')
	{
	    p += 2;
	    (void)skip_expr(&p, NULL);
	    if (*p == '`')
		++p;
	    continue;
	}
#endif
	
	if (vim_strchr((char_u *)"%#<", *p) == NULL)
	{
	    ++p;
	    continue;
	}

	
	repl = eval_vars(p, eap->arg, &srclen, &(eap->do_ecmd_lnum),
						    errormsgp, &escaped, TRUE);
	if (*errormsgp != NULL)		
	    return FAIL;
	if (repl == NULL)		
	{
	    p += srclen;
	    continue;
	}

	
	
	if (vim_strchr(repl, '$') != NULL || vim_strchr(repl, '~') != NULL)
	{
	    char_u *l = repl;

	    repl = expand_env_save(repl);
	    vim_free(l);
	}

	
	
	
	
	
	
	if (!eap->usefilter
		&& !escaped
		&& eap->cmdidx != CMD_bang
		&& eap->cmdidx != CMD_grep
		&& eap->cmdidx != CMD_grepadd
		&& eap->cmdidx != CMD_hardcopy
		&& eap->cmdidx != CMD_lgrep
		&& eap->cmdidx != CMD_lgrepadd
		&& eap->cmdidx != CMD_lmake
		&& eap->cmdidx != CMD_make
		&& eap->cmdidx != CMD_terminal
#ifndef UNIX
		&& !(eap->argt & EX_NOSPC)
#endif
		)
	{
	    char_u	*l;
#ifdef BACKSLASH_IN_FILENAME
	    
	    
	    static char_u *nobslash = (char_u *)" \t\"|";
# define ESCAPE_CHARS nobslash
#else
# define ESCAPE_CHARS escape_chars
#endif

	    for (l = repl; *l; ++l)
		if (vim_strchr(ESCAPE_CHARS, *l) != NULL)
		{
		    l = vim_strsave_escaped(repl, ESCAPE_CHARS);
		    if (l != NULL)
		    {
			vim_free(repl);
			repl = l;
		    }
		    break;
		}
	}

	
	if ((eap->usefilter || eap->cmdidx == CMD_bang
						|| eap->cmdidx == CMD_terminal)
			    && vim_strpbrk(repl, (char_u *)"!") != NULL)
	{
	    char_u	*l;

	    l = vim_strsave_escaped(repl, (char_u *)"!");
	    if (l != NULL)
	    {
		vim_free(repl);
		repl = l;
	    }
	}

	p = repl_cmdline(eap, p, srclen, repl, cmdlinep);
	vim_free(repl);
	if (p == NULL)
	    return FAIL;
    }

    
    if ((eap->argt & EX_NOSPC) && !eap->usefilter)
    {
	
	for (n = 1; n <= 2; ++n)
	{
	    if (n == 2)
	    {
		
#if defined(UNIX)
		if (!has_wildcards)
#endif
		    backslash_halve(eap->arg);
	    }

	    if (has_wildcards)
	    {
		if (n == 1)
		{
		    
		    if (vim_strchr(eap->arg, '$') != NULL
			    || vim_strchr(eap->arg, '~') != NULL)
		    {
			expand_env_esc(eap->arg, NameBuff, MAXPATHL,
							    TRUE, TRUE, NULL);
			has_wildcards = mch_has_wildcard(NameBuff);
			p = NameBuff;
		    }
		    else
			p = NULL;
		}
		else 
		{
		    expand_T	xpc;
		    int		options = WILD_LIST_NOTFOUND
					       | WILD_NOERROR | WILD_ADD_SLASH;

		    ExpandInit(&xpc);
		    xpc.xp_context = EXPAND_FILES;
		    if (p_wic)
			options += WILD_ICASE;
		    p = ExpandOne(&xpc, eap->arg, NULL,
						   options, WILD_EXPAND_FREE);
		    if (p == NULL)
			return FAIL;
		}
		if (p != NULL)
		{
		    (void)repl_cmdline(eap, eap->arg, STRLEN(eap->arg),
								 p, cmdlinep);
		    if (n == 2)	
			vim_free(p);
		}
	    }
	}
    }
    return OK;
}


    static char_u *
repl_cmdline(
    exarg_T	*eap,
    char_u	*src,
    size_t	srclen,
    char_u	*repl,
    char_u	**cmdlinep)
{
    size_t	repllen;
    size_t	taillen;
    size_t	i;
    char_u	*new_cmdline;
    size_t	new_cmdlinelen;

    
    repllen = STRLEN(repl);
    taillen = STRLEN(src + srclen);
    i = (src - *cmdlinep) + repllen + taillen + 3;
    if (eap->nextcmd != NULL)
	i += STRLEN(eap->nextcmd);	
    if ((new_cmdline = alloc(i)) == NULL)
	return NULL;			

    
    new_cmdlinelen = src - *cmdlinep;	
    mch_memmove(new_cmdline, *cmdlinep, new_cmdlinelen);

    mch_memmove(new_cmdline + new_cmdlinelen, repl, repllen);
    new_cmdlinelen += repllen;		
    STRCPY(new_cmdline + new_cmdlinelen, src + srclen);
    src = new_cmdline + new_cmdlinelen;	

    if (eap->nextcmd != NULL)		
    {
	new_cmdlinelen += taillen + 1;
	STRCPY(new_cmdline + new_cmdlinelen, eap->nextcmd);
	eap->nextcmd = new_cmdline + new_cmdlinelen;
    }
    eap->cmd = new_cmdline + (eap->cmd - *cmdlinep);
    eap->arg = new_cmdline + (eap->arg - *cmdlinep);
    if (eap->do_ecmd_cmd != NULL && eap->do_ecmd_cmd != dollar_command)
	eap->do_ecmd_cmd = new_cmdline + (eap->do_ecmd_cmd - *cmdlinep);
    vim_free(*cmdlinep);
    *cmdlinep = new_cmdline;

    return src;
}


    void
separate_nextcmd(exarg_T *eap, int keep_backslash)
{
    char_u	*p;

#ifdef FEAT_QUICKFIX
    p = skip_grep_pat(eap);
#else
    p = eap->arg;
#endif

    for ( ; *p; MB_PTR_ADV(p))
    {
	if (*p == Ctrl_V)
	{
	    if ((eap->argt & (EX_CTRLV | EX_XFILE)) || keep_backslash)
		++p;		
	    else
				
		STRMOVE(p, p + 1);
	    if (*p == NUL)		
		break;
	}

#ifdef FEAT_EVAL
	
	else if (p[0] == '`' && p[1] == '=' && (eap->argt & EX_XFILE))
	{
	    p += 2;
	    (void)skip_expr(&p, NULL);
	    if (*p == NUL)		
		break;
	}
#endif

	
	
	
	else if ((*p == '"'
		    && !in_vim9script()
		    && !(eap->argt & EX_NOTRLCOM)
		    && ((eap->cmdidx != CMD_at && eap->cmdidx != CMD_star)
							      || p != eap->arg)
		    && (eap->cmdidx != CMD_redir
					 || p != eap->arg + 1 || p[-1] != '@'))
		|| (*p == '#'
		    && in_vim9script()
		    && !(eap->argt & EX_NOTRLCOM)
		    && p > eap->cmd && VIM_ISWHITE(p[-1]))
		|| (*p == '|'
		    && eap->cmdidx != CMD_append
		    && eap->cmdidx != CMD_change
		    && eap->cmdidx != CMD_insert)
		|| *p == '\n')
	{
	    
	    if ((vim_strchr(p_cpo, CPO_BAR) == NULL
			      || !(eap->argt & EX_CTRLV)) && *(p - 1) == '\\')
	    {
		if (!keep_backslash)
		{
		    STRMOVE(p - 1, p);	
		    --p;
		}
	    }
	    else
	    {
		eap->nextcmd = check_nextcmd(p);
		*p = NUL;
		break;
	    }
	}
    }

    if (!(eap->argt & EX_NOTRLCOM))	
	del_trailing_spaces(eap->arg);
}


    static char_u *
getargcmd(char_u **argp)
{
    char_u *arg = *argp;
    char_u *command = NULL;

    if (*arg == '+')	    
    {
	++arg;
	if (vim_isspace(*arg) || *arg == NUL)
	    command = dollar_command;
	else
	{
	    command = arg;
	    arg = skip_cmd_arg(command, TRUE);
	    if (*arg != NUL)
		*arg++ = NUL;		
	}

	arg = skipwhite(arg);	
	*argp = arg;
    }
    return command;
}


    char_u *
skip_cmd_arg(
    char_u *p,
    int	   rembs)	
{
    while (*p && !vim_isspace(*p))
    {
	if (*p == '\\' && p[1] != NUL)
	{
	    if (rembs)
		STRMOVE(p, p + 1);
	    else
		++p;
	}
	MB_PTR_ADV(p);
    }
    return p;
}

    int
get_bad_opt(char_u *p, exarg_T *eap)
{
    if (STRICMP(p, "keep") == 0)
	eap->bad_char = BAD_KEEP;
    else if (STRICMP(p, "drop") == 0)
	eap->bad_char = BAD_DROP;
    else if (MB_BYTE2LEN(*p) == 1 && p[1] == NUL)
	eap->bad_char = *p;
    else
	return FAIL;
    return OK;
}


    static char_u *
get_bad_name(expand_T *xp UNUSED, int idx)
{
    
    static char *(p_bad_values[]) =
    {
	"?",
	"keep",
	"drop",
    };

    if (idx < 0 || idx >= (int)ARRAY_LENGTH(p_bad_values))
	return NULL;

    return (char_u*)p_bad_values[idx];
}


    static int
getargopt(exarg_T *eap)
{
    char_u	*arg = eap->arg + 2;
    int		*pp = NULL;
    int		bad_char_idx;
    char_u	*p;

    

    
    if (STRNCMP(arg, "bin", 3) == 0 || STRNCMP(arg, "nobin", 5) == 0)
    {
	if (*arg == 'n')
	{
	    arg += 2;
	    eap->force_bin = FORCE_NOBIN;
	}
	else
	    eap->force_bin = FORCE_BIN;
	if (!checkforcmd(&arg, "binary", 3))
	    return FAIL;
	eap->arg = skipwhite(arg);
	return OK;
    }

    
    if (STRNCMP(arg, "edit", 4) == 0)
    {
	eap->read_edit = TRUE;
	eap->arg = skipwhite(arg + 4);
	return OK;
    }

    if (STRNCMP(arg, "ff", 2) == 0)
    {
	arg += 2;
	pp = &eap->force_ff;
    }
    else if (STRNCMP(arg, "fileformat", 10) == 0)
    {
	arg += 10;
	pp = &eap->force_ff;
    }
    else if (STRNCMP(arg, "enc", 3) == 0)
    {
	if (STRNCMP(arg, "encoding", 8) == 0)
	    arg += 8;
	else
	    arg += 3;
	pp = &eap->force_enc;
    }
    else if (STRNCMP(arg, "bad", 3) == 0)
    {
	arg += 3;
	pp = &bad_char_idx;
    }

    if (pp == NULL || *arg != '=')
	return FAIL;

    ++arg;
    *pp = (int)(arg - eap->cmd);
    arg = skip_cmd_arg(arg, FALSE);
    eap->arg = skipwhite(arg);
    *arg = NUL;

    if (pp == &eap->force_ff)
    {
	if (check_ff_value(eap->cmd + eap->force_ff) == FAIL)
	    return FAIL;
	eap->force_ff = eap->cmd[eap->force_ff];
    }
    else if (pp == &eap->force_enc)
    {
	
	for (p = eap->cmd + eap->force_enc; *p != NUL; ++p)
	    *p = TOLOWER_ASC(*p);
    }
    else
    {
	
	
	if (get_bad_opt(eap->cmd + bad_char_idx, eap) == FAIL)
	    return FAIL;
    }

    return OK;
}


    static char_u *
get_argopt_name(expand_T *xp UNUSED, int idx)
{
    
    static char *(p_opt_values[]) =
    {
	"fileformat=",
	"encoding=",
	"binary",
	"nobinary",
	"bad=",
	"edit",
    };

    if (idx < 0 || idx >= (int)ARRAY_LENGTH(p_opt_values))
	return NULL;

    return (char_u*)p_opt_values[idx];
}


    int
expand_argopt(
	char_u	    *pat,
	expand_T    *xp,
	regmatch_T  *rmp,
	char_u	    ***matches,
	int	    *numMatches)
{
    if (xp->xp_pattern > xp->xp_line && *(xp->xp_pattern-1) == '=')
    {
	char_u *(*cb)(expand_T *, int) = NULL;

	char_u *name_end = xp->xp_pattern - 1;
	if (name_end - xp->xp_line >= 2
		&& STRNCMP(name_end - 2, "ff", 2) == 0)
	    cb = get_fileformat_name;
	else if (name_end - xp->xp_line >= 10
		&& STRNCMP(name_end - 10, "fileformat", 10) == 0)
	    cb = get_fileformat_name;
	else if (name_end - xp->xp_line >= 3
		&& STRNCMP(name_end - 3, "enc", 3) == 0)
	    cb = get_encoding_name;
	else if (name_end - xp->xp_line >= 8
		&& STRNCMP(name_end - 8, "encoding", 8) == 0)
	    cb = get_encoding_name;
	else if (name_end - xp->xp_line >= 3
		&& STRNCMP(name_end - 3, "bad", 3) == 0)
	    cb = get_bad_name;

	if (cb != NULL)
	{
	    return ExpandGeneric(
		    pat,
		    xp,
		    rmp,
		    matches,
		    numMatches,
		    cb,
		    FALSE);
	}
	return FAIL;
    }

    
    
    if (xp->xp_pattern_len == 2
	    && STRNCMP(xp->xp_pattern, "ff", xp->xp_pattern_len) == 0)
    {
	*matches = ALLOC_MULT(char_u *, 1);
	if (*matches == NULL)
	    return FAIL;
	*numMatches = 1;
	(*matches)[0] = vim_strsave((char_u*)"fileformat=");
	return OK;
    }

    return ExpandGeneric(
	    pat,
	    xp,
	    rmp,
	    matches,
	    numMatches,
	    get_argopt_name,
	    FALSE);
}

    static void
ex_autocmd(exarg_T *eap)
{
    
    if (secure)
    {
	secure = 2;
	eap->errmsg =
	      _(e_command_not_allowed_from_vimrc_in_current_dir_or_tag_search);
    }
    else if (eap->cmdidx == CMD_autocmd)
	do_autocmd(eap, eap->arg, eap->forceit);
    else
	do_augroup(eap->arg, eap->forceit);
}


    static void
ex_doautocmd(exarg_T *eap)
{
    char_u	*arg = eap->arg;
    int		call_do_modelines = check_nomodeline(&arg);
    int		did_aucmd;

    (void)do_doautocmd(arg, TRUE, &did_aucmd);
    
    if (call_do_modelines && did_aucmd)
	do_modelines(0);
}


    static void
ex_bunload(exarg_T *eap)
{
    if (ERROR_IF_ANY_POPUP_WINDOW)
	return;
    eap->errmsg = do_bufdel(
	    eap->cmdidx == CMD_bdelete ? DOBUF_DEL
		: eap->cmdidx == CMD_bwipeout ? DOBUF_WIPE
		: DOBUF_UNLOAD, eap->arg,
	    eap->addr_count, (int)eap->line1, (int)eap->line2, eap->forceit);
}


    static void
ex_buffer(exarg_T *eap)
{
    if (ERROR_IF_ANY_POPUP_WINDOW)
	return;
    if (*eap->arg)
	eap->errmsg = ex_errmsg(e_trailing_characters_str, eap->arg);
    else
    {
	if (eap->addr_count == 0)	
	    goto_buffer(eap, DOBUF_CURRENT, FORWARD, 0);
	else
	    goto_buffer(eap, DOBUF_FIRST, FORWARD, (int)eap->line2);
	if (eap->do_ecmd_cmd != NULL)
	    do_cmd_argument(eap->do_ecmd_cmd);
    }
}


    static void
ex_bmodified(exarg_T *eap)
{
    goto_buffer(eap, DOBUF_MOD, FORWARD, (int)eap->line2);
    if (eap->do_ecmd_cmd != NULL)
	do_cmd_argument(eap->do_ecmd_cmd);
}


    static void
ex_bnext(exarg_T *eap)
{
    if (ERROR_IF_ANY_POPUP_WINDOW)
	return;

    goto_buffer(eap, DOBUF_CURRENT, FORWARD, (int)eap->line2);
    if (eap->do_ecmd_cmd != NULL)
	do_cmd_argument(eap->do_ecmd_cmd);
}


    static void
ex_bprevious(exarg_T *eap)
{
    if (ERROR_IF_ANY_POPUP_WINDOW)
	return;

    goto_buffer(eap, DOBUF_CURRENT, BACKWARD, (int)eap->line2);
    if (eap->do_ecmd_cmd != NULL)
	do_cmd_argument(eap->do_ecmd_cmd);
}


    static void
ex_brewind(exarg_T *eap)
{
    if (ERROR_IF_ANY_POPUP_WINDOW)
	return;

    goto_buffer(eap, DOBUF_FIRST, FORWARD, 0);
    if (eap->do_ecmd_cmd != NULL)
	do_cmd_argument(eap->do_ecmd_cmd);
}


    static void
ex_blast(exarg_T *eap)
{
    if (ERROR_IF_ANY_POPUP_WINDOW)
	return;

    goto_buffer(eap, DOBUF_LAST, BACKWARD, 0);
    if (eap->do_ecmd_cmd != NULL)
	do_cmd_argument(eap->do_ecmd_cmd);
}


    int
ends_excmd(int c)
{
    int comment_char = '"';

    if (in_vim9script())
	comment_char = '#';
    return (c == NUL || c == '|' || c == comment_char || c == '\n');
}


    int
ends_excmd2(char_u *cmd_start UNUSED, char_u *cmd)
{
    int c = *cmd;

    if (c == NUL || c == '|' || c == '\n')
	return TRUE;
    if (in_vim9script())
	
	return c == '#' && (cmd[1] != '{' || cmd[2] == '{')
				 && (cmd == cmd_start || VIM_ISWHITE(cmd[-1]));
    return c == '"';
}

#if defined(FEAT_SYN_HL) || defined(FEAT_SEARCH_EXTRA) || defined(FEAT_EVAL) \
	|| defined(PROTO)

    char_u *
find_nextcmd(char_u *p)
{
    while (*p != '|' && *p != '\n')
    {
	if (*p == NUL)
	    return NULL;
	++p;
    }
    return (p + 1);
}
#endif


    char_u *
check_nextcmd(char_u *p)
{
    char_u *s = skipwhite(p);

    if (*s == '|' || *s == '\n')
	return (s + 1);
    else
	return NULL;
}


    void
set_nextcmd(exarg_T *eap, char_u *arg)
{
    char_u *p = check_nextcmd(arg);

    if (eap->nextcmd == NULL)
	eap->nextcmd = p;
    else if (p != NULL)
	
	semsg(_(e_cannot_use_bar_to_separate_commands_here_str), arg);
}


    static int
check_more(
    int message,	    
    int forceit)
{
    int	    n = ARGCOUNT - curwin->w_arg_idx - 1;

    if (!forceit && only_one_window()
	    && ARGCOUNT > 1 && !arg_had_last && n > 0 && quitmore == 0)
    {
	if (message)
	{
#if defined(FEAT_GUI_DIALOG) || defined(FEAT_CON_DIALOG)
	    if ((p_confirm || (cmdmod.cmod_flags & CMOD_CONFIRM))
						    && curbuf->b_fname != NULL)
	    {
		char_u	buff[DIALOG_MSG_SIZE];

		vim_snprintf((char *)buff, DIALOG_MSG_SIZE,
			NGETTEXT("%d more file to edit.  Quit anyway?",
			    "%d more files to edit.  Quit anyway?", n), n);
		if (vim_dialog_yesno(VIM_QUESTION, NULL, buff, 1) == VIM_YES)
		    return OK;
		return FAIL;
	    }
#endif
	    semsg(NGETTEXT(e_nr_more_file_to_edit,
			   e_nr_more_files_to_edit , n), n);
	    quitmore = 2;	    
	}
	return FAIL;
    }
    return OK;
}


    char_u *
get_command_name(expand_T *xp UNUSED, int idx)
{
    if (idx >= (int)CMD_SIZE)
	return expand_user_command_name(idx);
    
    if (STRNCMP(cmdnames[idx].cmd_name, "{", 1) == 0 ||
        STRNCMP(cmdnames[idx].cmd_name, "}", 1) == 0)
	return (char_u *)"";
    return cmdnames[idx].cmd_name;
}

    static void
ex_colorscheme(exarg_T *eap)
{
    if (*eap->arg == NUL)
    {
#ifdef FEAT_EVAL
	char_u *expr = vim_strsave((char_u *)"g:colors_name");
	char_u *p = NULL;

	if (expr != NULL)
	{
	    ++emsg_off;
	    p = eval_to_string(expr, FALSE, FALSE);
	    --emsg_off;
	    vim_free(expr);
	}
	if (p != NULL)
	{
	    msg((char *)p);
	    vim_free(p);
	}
	else
	    msg("default");
#else
	msg(_("unknown"));
#endif
    }
    else if (load_colors(eap->arg) == FAIL)
	semsg(_(e_cannot_find_color_scheme_str), eap->arg);

#ifdef FEAT_VTP
    else if (has_vtp_working())
    {
	
	update_screen(UPD_CLEAR);
	redrawcmd();
    }
#endif
}

    static void
ex_highlight(exarg_T *eap)
{
    if (*eap->arg == NUL && eap->cmd[2] == '!')
	msg(_("Greetings, Vim user!"));
    do_highlight(eap->arg, eap->forceit, FALSE);
}



    void
not_exiting(void)
{
    exiting = FALSE;
    settmode(TMODE_RAW);
}

    int
before_quit_autocmds(win_T *wp, int quit_all, int forceit)
{
    apply_autocmds(EVENT_QUITPRE, NULL, NULL, FALSE, wp->w_buffer);

    
    
    
    if (!win_valid(wp)
	    || curbuf_locked()
	    || (wp->w_buffer->b_nwindows == 1 && wp->w_buffer->b_locked > 0))
	return TRUE;

    if (quit_all || (check_more(FALSE, forceit) == OK && only_one_window()))
    {
	apply_autocmds(EVENT_EXITPRE, NULL, NULL, FALSE, curbuf);
	
	
	
	if (!win_valid(wp) || curbuf_locked()
			  || (curbuf->b_nwindows == 1 && curbuf->b_locked > 0))
	    return TRUE;
    }

    return FALSE;
}


    void
ex_quit(exarg_T *eap)
{
    win_T	*wp;

    if (cmdwin_type != 0)
    {
	cmdwin_result = Ctrl_C;
	return;
    }
    
    if (text_locked())
    {
	text_locked_msg();
	return;
    }
    if (eap->addr_count > 0)
    {
	int	wnr = eap->line2;

	for (wp = firstwin; wp->w_next != NULL; wp = wp->w_next)
	    if (--wnr <= 0)
		break;
    }
    else
	wp = curwin;

    
    if (curbuf_locked())
	return;

    
    if (before_quit_autocmds(wp, FALSE, eap->forceit))
	return;

#ifdef FEAT_NETBEANS_INTG
    netbeansForcedQuit = eap->forceit;
#endif

    
    if (check_more(FALSE, eap->forceit) == OK && only_one_window())
	exiting = TRUE;
    if ((!buf_hide(wp->w_buffer)
		&& check_changed(wp->w_buffer, (p_awa ? CCGD_AW : 0)
				       | (eap->forceit ? CCGD_FORCEIT : 0)
				       | CCGD_EXCMD))
	    || check_more(TRUE, eap->forceit) == FAIL
	    || (only_one_window() && check_changed_any(eap->forceit, TRUE)))
    {
	not_exiting();
    }
    else
    {
	
	
	
	
	
	
	if (only_one_window() && (ONE_WINDOW || eap->addr_count == 0))
	    getout(0);
	not_exiting();
#ifdef FEAT_GUI
	need_mouse_correct = TRUE;
#endif
	
	win_close(wp, !buf_hide(wp->w_buffer) || eap->forceit);
    }
}


    static void
ex_cquit(exarg_T *eap UNUSED)
{
    
    getout(eap->addr_count > 0 ? (int)eap->line2 : EXIT_FAILURE);
}


    int
before_quit_all(exarg_T *eap)
{
    if (cmdwin_type != 0)
    {
	if (eap->forceit)
	    cmdwin_result = K_XF1;	
	else
	    cmdwin_result = K_XF2;
	return FAIL;
    }

    
    if (text_locked())
    {
	text_locked_msg();
	return FAIL;
    }

    if (before_quit_autocmds(curwin, TRUE, eap->forceit))
	return FAIL;

    return OK;
}


    static void
ex_quit_all(exarg_T *eap)
{
    if (before_quit_all(eap) == FAIL)
	return;
    exiting = TRUE;
    if (eap->forceit || !check_changed_any(FALSE, FALSE))
	getout(0);
    not_exiting();
}


    static void
ex_close(exarg_T *eap)
{
    win_T	*win;
    int		winnr = 0;
    if (cmdwin_type != 0)
	cmdwin_result = Ctrl_C;
    else
	if (!text_locked() && !curbuf_locked())
	{
	    if (eap->addr_count == 0)
		ex_win_close(eap->forceit, curwin, NULL);
	    else
	    {
		FOR_ALL_WINDOWS(win)
		{
		    winnr++;
		    if (winnr == eap->line2)
			break;
		}
		if (win == NULL)
		    win = lastwin;
		ex_win_close(eap->forceit, win, NULL);
	    }
	}
}

#ifdef FEAT_QUICKFIX

    static void
ex_pclose(exarg_T *eap)
{
    win_T	*win;

    
    FOR_ALL_WINDOWS(win)
	if (win->w_p_pvw)
	{
	    ex_win_close(eap->forceit, win, NULL);
	    return;
	}
# ifdef FEAT_PROP_POPUP
    
    popup_close_preview();
# endif
}
#endif


    static void
ex_win_close(
    int		forceit,
    win_T	*win,
    tabpage_T	*tp)		
{
    int		need_hide;
    buf_T	*buf = win->w_buffer;

    
    if (is_aucmd_win(win))
    {
	emsg(_(e_cannot_close_autocmd_or_popup_window));
	return;
    }
    if (window_layout_locked(CMD_close))
	return;

    need_hide = (bufIsChanged(buf) && buf->b_nwindows <= 1);
    if (need_hide && !buf_hide(buf) && !forceit)
    {
#if defined(FEAT_GUI_DIALOG) || defined(FEAT_CON_DIALOG)
	if ((p_confirm || (cmdmod.cmod_flags & CMOD_CONFIRM)) && p_write)
	{
# ifdef FEAT_TERMINAL
	    if (term_job_running(buf->b_term))
	    {
		if (term_confirm_stop(buf) == FAIL)
		    return;
		
		
		free_terminal(buf);
		need_hide = FALSE;
	    }
	    else
# endif
	    {
		bufref_T bufref;

		set_bufref(&bufref, buf);
		dialog_changed(buf, FALSE);
		if (bufref_valid(&bufref) && bufIsChanged(buf))
		    return;
		need_hide = FALSE;
	    }
	}
	else
#endif
	{
	    no_write_message();
	    return;
	}
    }

#ifdef FEAT_GUI
    need_mouse_correct = TRUE;
#endif

    
    if (tp == NULL)
	win_close(win, !need_hide && !buf_hide(buf));
    else
	win_close_othertab(win, !need_hide && !buf_hide(buf), tp);
}


    static int
get_tabpage_arg(exarg_T *eap)
{
    int tab_number;
    int unaccept_arg0 = (eap->cmdidx == CMD_tabmove) ? 0 : 1;

    if (eap->arg && *eap->arg != NUL)
    {
	char_u *p = eap->arg;
	char_u *p_save;
	int    relative = 0; 
			     

	if (*p == '-')
	{
	    relative = -1;
	    p++;
	}
	else if (*p == '+')
	{
	    relative = 1;
	    p++;
	}

	p_save = p;
	tab_number = getdigits(&p);

	if (relative == 0)
	{
	    if (STRCMP(p, "$") == 0)
		tab_number = LAST_TAB_NR;
	    else if (STRCMP(p, "#") == 0)
		if (valid_tabpage(lastused_tabpage))
		    tab_number = tabpage_index(lastused_tabpage);
		else
		{
		    eap->errmsg = ex_errmsg(e_invalid_value_for_argument_str,
								     eap->arg);
		    tab_number = 0;
		    goto theend;
		}
	    else if (p == p_save || *p_save == '-' || *p != NUL
		    || tab_number > LAST_TAB_NR)
	    {
		
		eap->errmsg = ex_errmsg(e_invalid_argument_str, eap->arg);
		goto theend;
	    }
	}
	else
	{
	    if (*p_save == NUL)
		tab_number = 1;
	    else if (p == p_save || *p_save == '-' || *p != NUL
		    || tab_number == 0)
	    {
		
		eap->errmsg = ex_errmsg(e_invalid_argument_str, eap->arg);
		goto theend;
	    }
	    tab_number = tab_number * relative + tabpage_index(curtab);
	    if (!unaccept_arg0 && relative == -1)
		--tab_number;
	}
	if (tab_number < unaccept_arg0 || tab_number > LAST_TAB_NR)
	    eap->errmsg = ex_errmsg(e_invalid_argument_str, eap->arg);
    }
    else if (eap->addr_count > 0)
    {
	if (unaccept_arg0 && eap->line2 == 0)
	{
	    eap->errmsg = _(e_invalid_range);
	    tab_number = 0;
	}
	else
	{
	    tab_number = eap->line2;
	    if (!unaccept_arg0)
	    {
		char_u *cmdp = eap->cmd;

		while (--cmdp > *eap->cmdlinep
			&& (VIM_ISWHITE(*cmdp) || VIM_ISDIGIT(*cmdp)))
		    ;
		if (*cmdp == '-')
		{
		    --tab_number;
		    if (tab_number < unaccept_arg0)
			eap->errmsg = _(e_invalid_range);
		}
	    }
	}
    }
    else
    {
	switch (eap->cmdidx)
	{
	case CMD_tabnext:
	    tab_number = tabpage_index(curtab) + 1;
	    if (tab_number > LAST_TAB_NR)
		tab_number = 1;
	    break;
	case CMD_tabmove:
	    tab_number = LAST_TAB_NR;
	    break;
	default:
	    tab_number = tabpage_index(curtab);
	}
    }

theend:
    return tab_number;
}


    static void
ex_tabclose(exarg_T *eap)
{
    tabpage_T	*tp;
    int		tab_number;

    if (cmdwin_type != 0)
    {
	cmdwin_result = K_IGNORE;
	return;
    }

    if (first_tabpage->tp_next == NULL)
    {
	emsg(_(e_cannot_close_last_tab_page));
	return;
    }

    if (window_layout_locked(CMD_tabclose))
	return;

    tab_number = get_tabpage_arg(eap);
    if (eap->errmsg != NULL)
	return;

    tp = find_tabpage(tab_number);
    if (tp == NULL)
    {
	beep_flush();
	return;
    }
    if (tp != curtab)
    {
	tabpage_close_other(tp, eap->forceit);
	return;
    }
    else if (!text_locked() && !curbuf_locked())
	tabpage_close(eap->forceit);
}


    static void
ex_tabonly(exarg_T *eap)
{
    tabpage_T	*tp;
    int		done;
    int		tab_number;

    if (cmdwin_type != 0)
    {
	cmdwin_result = K_IGNORE;
	return;
    }

    if (first_tabpage->tp_next == NULL)
    {
	msg(_("Already only one tab page"));
	return;
    }

    if (window_layout_locked(CMD_tabonly))
	return;

    tab_number = get_tabpage_arg(eap);
    if (eap->errmsg != NULL)
	return;

    goto_tabpage(tab_number);
    
    
    for (done = 0; done < 1000; ++done)
    {
	FOR_ALL_TABPAGES(tp)
	    if (tp->tp_topframe != topframe)
	    {
		tabpage_close_other(tp, eap->forceit);
		
		if (valid_tabpage(tp))
		    done = 1000;
		
		break;
	    }
	if (first_tabpage->tp_next == NULL)
	    break;
    }
}


    void
tabpage_close(int forceit)
{
    if (window_layout_locked(CMD_tabclose))
	return;

    
    
    if (!ONE_WINDOW)
	close_others(TRUE, forceit);
    if (ONE_WINDOW)
	ex_win_close(forceit, curwin, NULL);
# ifdef FEAT_GUI
    need_mouse_correct = TRUE;
# endif
}


    void
tabpage_close_other(tabpage_T *tp, int forceit)
{
    int		done = 0;
    win_T	*wp;

    
    
    while (++done < 1000)
    {
	wp = tp->tp_firstwin;
	ex_win_close(forceit, wp, tp);

	
	
	if (!valid_tabpage(tp) || tp->tp_firstwin == wp)
	    break;
    }

    apply_autocmds(EVENT_TABCLOSED, NULL, NULL, FALSE, curbuf);
}


    static void
ex_only(exarg_T *eap)
{
    if (window_layout_locked(CMD_only))
	return;
# ifdef FEAT_GUI
    need_mouse_correct = TRUE;
# endif
    if (eap->addr_count > 0)
    {
	win_T   *wp;
	int	wnr = eap->line2;
	for (wp = firstwin; --wnr > 0; )
	{
	    if (wp->w_next == NULL)
		break;
	    else
		wp = wp->w_next;
	}
	win_goto(wp);
    }
    close_others(TRUE, eap->forceit);
}

    static void
ex_hide(exarg_T *eap UNUSED)
{
    
    if (eap->skip)
	return;

    if (window_layout_locked(CMD_hide))
	return;
#ifdef FEAT_GUI
    need_mouse_correct = TRUE;
#endif
    if (eap->addr_count == 0)
	win_close(curwin, FALSE);	
    else
    {
	int	winnr = 0;
	win_T	*win;

	FOR_ALL_WINDOWS(win)
	{
	    winnr++;
	    if (winnr == eap->line2)
		break;
	}
	if (win == NULL)
	    win = lastwin;
	win_close(win, FALSE);
    }
}


    void
ex_stop(exarg_T *eap)
{
    
    if (check_restricted())
	return;

    if (!eap->forceit)
	autowrite_all();
    apply_autocmds(EVENT_VIMSUSPEND, NULL, NULL, FALSE, NULL);
    windgoto((int)Rows - 1, 0);
    out_char('\n');
    out_flush();
    stoptermcap();
    out_flush();		
    mch_restore_title(SAVE_RESTORE_BOTH);	
    ui_suspend();		
    maketitle();
    resettitle();		
    starttermcap();
    scroll_start();		
    redraw_later_clear();
    shell_resized();	
    apply_autocmds(EVENT_VIMRESUME, NULL, NULL, FALSE, NULL);
}


    static void
ex_exit(exarg_T *eap)
{
#ifdef FEAT_EVAL
    if (not_in_vim9(eap) == FAIL)
	return;
#endif
    if (cmdwin_type != 0)
    {
	cmdwin_result = Ctrl_C;
	return;
    }
    
    if (text_locked())
    {
	text_locked_msg();
	return;
    }

    
    if (check_more(FALSE, eap->forceit) == OK && only_one_window())
	exiting = TRUE;

    
    
    
    if (((eap->cmdidx == CMD_wq || curbufIsChanged()) && do_write(eap) == FAIL)
	    || before_quit_autocmds(curwin, FALSE, eap->forceit)
	    || check_more(TRUE, eap->forceit) == FAIL
	    || (only_one_window() && check_changed_any(eap->forceit, FALSE)))
    {
	not_exiting();
    }
    else
    {
	if (only_one_window())	    
	    getout(0);
	not_exiting();
# ifdef FEAT_GUI
	need_mouse_correct = TRUE;
# endif
	
	win_close(curwin, !buf_hide(curwin->w_buffer));
    }
}


    static void
ex_print(exarg_T *eap)
{
    if (curbuf->b_ml.ml_flags & ML_EMPTY)
	emsg(_(e_empty_buffer));
    else
    {
	for ( ;!got_int; ui_breakcheck())
	{
	    print_line(eap->line1,
		    (eap->cmdidx == CMD_number || eap->cmdidx == CMD_pound
						 || (eap->flags & EXFLAG_NR)),
		    eap->cmdidx == CMD_list || (eap->flags & EXFLAG_LIST));
	    if (++eap->line1 > eap->line2)
		break;
	    out_flush();	    
	}
	setpcmark();
	
	curwin->w_cursor.lnum = eap->line2;
	beginline(BL_SOL | BL_FIX);
    }

    ex_no_reprint = TRUE;
}

#ifdef FEAT_BYTEOFF
    static void
ex_goto(exarg_T *eap)
{
    goto_byte(eap->line2);
}
#endif


    static void
ex_shell(exarg_T *eap UNUSED)
{
    do_shell(NULL, 0);
}

#if defined(HAVE_DROP_FILE) || defined(PROTO)

static int drop_busy = FALSE;
static int drop_filec;
static char_u **drop_filev = NULL;
static int drop_split;
static void (*drop_callback)(void *);
static void *drop_cookie;

    static void
handle_drop_internal(void)
{
    exarg_T	ea;
    int		save_msg_scroll = msg_scroll;

    
    
    drop_busy = TRUE;

    
    
    
    
    if (!buf_hide(curbuf) && !drop_split)
    {
	++emsg_off;
	drop_split = check_changed(curbuf, CCGD_AW);
	--emsg_off;
    }
    if (drop_split)
    {
	if (win_split(0, 0) == FAIL)
	    return;
	RESET_BINDING(curwin);

	
	
	alist_unlink(curwin->w_alist);
	alist_new();
    }

    
    alist_set(ALIST(curwin), drop_filec, drop_filev, FALSE, NULL, 0);

    
    
    CLEAR_FIELD(ea);
    ea.cmd = (char_u *)"next";
    do_argfile(&ea, 0);

    
    
    need_start_insertmode = FALSE;

    
    
    
    msg_scroll = save_msg_scroll;

    if (drop_callback != NULL)
	drop_callback(drop_cookie);

    drop_filev = NULL;
    drop_busy = FALSE;
}


    void
handle_drop(
    int		filec,		
    char_u	**filev,	
    int		split,		
    void	(*callback)(void *), 
				     
    void	*cookie)	
{
    
    if (drop_busy)
    {
	FreeWild(filec, filev);
	vim_free(cookie);
	return;
    }

    
    
    if (drop_filev != NULL)
    {
	FreeWild(drop_filec, drop_filev);
	vim_free(drop_cookie);
    }

    drop_filec = filec;
    drop_filev = filev;
    drop_split = split;
    drop_callback = callback;
    drop_cookie = cookie;

    
    
    
    
    
    
    if (text_locked() || curbuf_locked() || updating_screen)
	return;

    handle_drop_internal();
}


    void
handle_any_postponed_drop(void)
{
    if (!drop_busy && drop_filev != NULL
	     && !text_locked() && !curbuf_locked() && !updating_screen)
	handle_drop_internal();
}
#endif


    static void
ex_preserve(exarg_T *eap UNUSED)
{
    curbuf->b_flags |= BF_PRESERVED;
    ml_preserve(curbuf, TRUE);
}


    static void
ex_recover(exarg_T *eap)
{
    
    recoverymode = TRUE;
    if (!check_changed(curbuf, (p_awa ? CCGD_AW : 0)
			     | CCGD_MULTWIN
			     | (eap->forceit ? CCGD_FORCEIT : 0)
			     | CCGD_EXCMD)

	    && (*eap->arg == NUL
			     || setfname(curbuf, eap->arg, NULL, TRUE) == OK))
	ml_recover(TRUE);
    recoverymode = FALSE;
}


    static void
ex_wrongmodifier(exarg_T *eap)
{
    eap->errmsg = ex_errmsg(e_invalid_command_str, eap->cmd);
}


    void
ex_splitview(exarg_T *eap)
{
    win_T	*old_curwin = curwin;
    char_u	*fname = NULL;
#ifdef FEAT_BROWSE
    char_u	dot_path[] = ".";
    int		save_cmod_flags = cmdmod.cmod_flags;
#endif
    int		use_tab = eap->cmdidx == CMD_tabedit
		       || eap->cmdidx == CMD_tabfind
		       || eap->cmdidx == CMD_tabnew;

    if (ERROR_IF_ANY_POPUP_WINDOW)
	return;

#ifdef FEAT_GUI
    need_mouse_correct = TRUE;
#endif

#ifdef FEAT_QUICKFIX
    
    
    if (bt_quickfix(curbuf) && cmdmod.cmod_tab == 0)
    {
	if (eap->cmdidx == CMD_split)
	    eap->cmdidx = CMD_new;
	if (eap->cmdidx == CMD_vsplit)
	    eap->cmdidx = CMD_vnew;
    }
#endif

    if (eap->cmdidx == CMD_sfind || eap->cmdidx == CMD_tabfind)
    {
	char_u	*file_to_find = NULL;
	char	*search_ctx = NULL;
	fname = find_file_in_path(eap->arg, (int)STRLEN(eap->arg),
					  FNAME_MESS, TRUE, curbuf->b_ffname,
					  &file_to_find, &search_ctx);
	vim_free(file_to_find);
	vim_findfile_cleanup(search_ctx);
	if (fname == NULL)
	    goto theend;
	eap->arg = fname;
    }
# ifdef FEAT_BROWSE
    else if ((cmdmod.cmod_flags & CMOD_BROWSE)
	    && eap->cmdidx != CMD_vnew
	    && eap->cmdidx != CMD_new)
    {
	if (
# ifdef FEAT_GUI
	    !gui.in_use &&
# endif
		au_has_group((char_u *)"FileExplorer"))
	{
	    
	    
	    if (*eap->arg == NUL || !mch_isdir(eap->arg))
		eap->arg = dot_path;
	}
	else
	{
	    fname = do_browse(0, (char_u *)(use_tab
			? _("Edit File in new tab page")
			: _("Edit File in new window")),
					  eap->arg, NULL, NULL, NULL, curbuf);
	    if (fname == NULL)
		goto theend;
	    eap->arg = fname;
	}
    }
    cmdmod.cmod_flags &= ~CMOD_BROWSE;	
#endif

    
    if (use_tab)
    {
	if (win_new_tabpage(cmdmod.cmod_tab != 0 ? cmdmod.cmod_tab
			 : eap->addr_count == 0 ? 0
					       : (int)eap->line2 + 1) != FAIL)
	{
	    do_exedit(eap, old_curwin);

	    
	    if (curwin != old_curwin
		    && win_valid(old_curwin)
		    && old_curwin->w_buffer != curbuf
		    && (cmdmod.cmod_flags & CMOD_KEEPALT) == 0)
		old_curwin->w_alt_fnum = curbuf->b_fnum;
	}
    }
    else if (win_split(eap->addr_count > 0 ? (int)eap->line2 : 0,
				     *eap->cmd == 'v' ? WSP_VERT : 0) != FAIL)
    {
	
	
	if (*eap->arg != NUL)
	    RESET_BINDING(curwin);
	else
	    do_check_scrollbind(FALSE);
	do_exedit(eap, old_curwin);
    }

# ifdef FEAT_BROWSE
    cmdmod.cmod_flags = save_cmod_flags;
# endif

theend:
    vim_free(fname);
}


    void
tabpage_new(void)
{
    exarg_T	ea;

    CLEAR_FIELD(ea);
    ea.cmdidx = CMD_tabnew;
    ea.cmd = (char_u *)"tabn";
    ea.arg = (char_u *)"";
    ex_splitview(&ea);
}


    static void
ex_tabnext(exarg_T *eap)
{
    int tab_number;

    if (ERROR_IF_POPUP_WINDOW)
	return;
    switch (eap->cmdidx)
    {
	case CMD_tabfirst:
	case CMD_tabrewind:
	    goto_tabpage(1);
	    break;
	case CMD_tablast:
	    goto_tabpage(9999);
	    break;
	case CMD_tabprevious:
	case CMD_tabNext:
	    if (eap->arg && *eap->arg != NUL)
	    {
		char_u *p = eap->arg;
		char_u *p_save = p;

		tab_number = getdigits(&p);
		if (p == p_save || *p_save == '-' || *p != NUL
			    || tab_number == 0)
		{
		    
		    eap->errmsg = ex_errmsg(e_invalid_argument_str, eap->arg);
		    return;
		}
	    }
	    else
	    {
		if (eap->addr_count == 0)
		    tab_number = 1;
		else
		{
		    tab_number = eap->line2;
		    if (tab_number < 1)
		    {
			eap->errmsg = _(e_invalid_range);
			return;
		    }
		}
	    }
	    goto_tabpage(-tab_number);
	    break;
	default: 
	    tab_number = get_tabpage_arg(eap);
	    if (eap->errmsg == NULL)
		goto_tabpage(tab_number);
	    break;
    }
}


    static void
ex_tabmove(exarg_T *eap)
{
    int tab_number;

    tab_number = get_tabpage_arg(eap);
    if (eap->errmsg == NULL)
	tabpage_move(tab_number);
}


    static void
ex_tabs(exarg_T *eap UNUSED)
{
    tabpage_T	*tp;
    win_T	*wp;
    int		tabcount = 1;

    msg_start();
    msg_scroll = TRUE;
    for (tp = first_tabpage; tp != NULL && !got_int; tp = tp->tp_next)
    {
	msg_putchar('\n');
	vim_snprintf((char *)IObuff, IOSIZE, _("Tab page %d"), tabcount++);
	msg_outtrans_attr(IObuff, HL_ATTR(HLF_T));
	out_flush();	    
	ui_breakcheck();

	if (tp  == curtab)
	    wp = firstwin;
	else
	    wp = tp->tp_firstwin;
	for ( ; wp != NULL && !got_int; wp = wp->w_next)
	{
	    msg_putchar('\n');
	    msg_putchar(wp == curwin ? '>' : ' ');
	    msg_putchar(' ');
	    msg_putchar(bufIsChanged(wp->w_buffer) ? '+' : ' ');
	    msg_putchar(' ');
	    if (buf_spname(wp->w_buffer) != NULL)
		vim_strncpy(IObuff, buf_spname(wp->w_buffer), IOSIZE - 1);
	    else
		home_replace(wp->w_buffer, wp->w_buffer->b_fname,
							IObuff, IOSIZE, TRUE);
	    msg_outtrans(IObuff);
	    out_flush();	    
	    ui_breakcheck();
	}
    }
}


    static void
ex_mode(exarg_T *eap)
{
    if (*eap->arg == NUL)
	shell_resized();
    else
	emsg(_(e_screen_mode_setting_not_supported));
}


    static void
ex_resize(exarg_T *eap)
{
    int		n;
    win_T	*wp = curwin;

    if (eap->addr_count > 0)
    {
	n = eap->line2;
	for (wp = firstwin; wp->w_next != NULL && --n > 0; wp = wp->w_next)
	    ;
    }

# ifdef FEAT_GUI
    need_mouse_correct = TRUE;
# endif
    n = atol((char *)eap->arg);
    if (cmdmod.cmod_split & WSP_VERT)
    {
	if (*eap->arg == '-' || *eap->arg == '+')
	    n += wp->w_width;
	else if (n == 0 && eap->arg[0] == NUL)	
	    n = 9999;
	win_setwidth_win(n, wp);
    }
    else
    {
	if (*eap->arg == '-' || *eap->arg == '+')
	    n += wp->w_height;
	else if (n == 0 && eap->arg[0] == NUL)	
	    n = 9999;
	win_setheight_win(n, wp);
    }
}


    static void
ex_find(exarg_T *eap)
{
    if (!check_can_set_curbuf_forceit(eap->forceit))
	return;

    char_u	*fname;
    int		count;
    char_u	*file_to_find = NULL;
    char	*search_ctx = NULL;

    fname = find_file_in_path(eap->arg, (int)STRLEN(eap->arg), FNAME_MESS,
			   TRUE, curbuf->b_ffname, &file_to_find, &search_ctx);
    if (eap->addr_count > 0)
    {
	
	
	count = eap->line2;
	while (fname != NULL && --count > 0)
	{
	    vim_free(fname);
	    fname = find_file_in_path(NULL, 0, FNAME_MESS,
			  FALSE, curbuf->b_ffname, &file_to_find, &search_ctx);
	}
    }
    VIM_CLEAR(file_to_find);
    vim_findfile_cleanup(search_ctx);

    if (fname == NULL)
	return;

    eap->arg = fname;
    do_exedit(eap, NULL);
    vim_free(fname);
}


    static void
ex_open(exarg_T *eap)
{
    regmatch_T	regmatch;
    char_u	*p;

#ifdef FEAT_EVAL
    if (not_in_vim9(eap) == FAIL)
	return;
#endif
    curwin->w_cursor.lnum = eap->line2;
    beginline(BL_SOL | BL_FIX);
    if (*eap->arg == '/')
    {
	
	++eap->arg;
	p = skip_regexp(eap->arg, '/', magic_isset());
	*p = NUL;
	regmatch.regprog = vim_regcomp(eap->arg, magic_isset() ? RE_MAGIC : 0);
	if (regmatch.regprog != NULL)
	{
	    
	    
	    char_u *line = vim_strsave(ml_get_curline());

	    regmatch.rm_ic = p_ic;
	    if (vim_regexec(&regmatch, line, (colnr_T)0))
		curwin->w_cursor.col = (colnr_T)(regmatch.startp[0] - line);
	    else
		emsg(_(e_no_match));
	    vim_regfree(regmatch.regprog);
	    vim_free(line);
	}
	
	eap->arg += STRLEN(eap->arg);
    }
    check_cursor();

    eap->cmdidx = CMD_visual;
    do_exedit(eap, NULL);
}


    static void
ex_edit(exarg_T *eap)
{
    char_u *ffname = eap->cmdidx == CMD_enew ? NULL : eap->arg;

    
    if (
	    eap->cmdidx != CMD_badd
	    && eap->cmdidx != CMD_balt
	    
	    && (is_other_file(0, ffname) && !check_can_set_curbuf_forceit(eap->forceit))
    )
	return;

    do_exedit(eap, NULL);
}


    void
do_exedit(
    exarg_T	*eap,
    win_T	*old_curwin)	    
{
    int		n;
    int		need_hide;
    int		exmode_was = exmode_active;

    if ((eap->cmdidx != CMD_pedit && ERROR_IF_POPUP_WINDOW)
						 || ERROR_IF_TERM_POPUP_WINDOW)
	return;
    
    if (exmode_active && (eap->cmdidx == CMD_visual
						|| eap->cmdidx == CMD_view))
    {
	exmode_active = FALSE;
	ex_pressedreturn = FALSE;
	if (*eap->arg == NUL)
	{
	    
	    if (global_busy)
	    {
		if (eap->nextcmd != NULL)
		{
		    stuffReadbuff(eap->nextcmd);
		    eap->nextcmd = NULL;
		}

		if (exmode_was != EXMODE_VIM)
		    settmode(TMODE_RAW);
		int save_RedrawingDisabled = RedrawingDisabled;
		RedrawingDisabled = 0;
		int save_nwr = no_wait_return;
		no_wait_return = 0;
		need_wait_return = FALSE;
		int save_ms = msg_scroll;
		msg_scroll = 0;
#ifdef FEAT_GUI
		int save_he = hold_gui_events;
		hold_gui_events = 0;
#endif
		set_must_redraw(UPD_CLEAR);
		pending_exmode_active = TRUE;

		main_loop(FALSE, TRUE);

		pending_exmode_active = FALSE;
		RedrawingDisabled = save_RedrawingDisabled;
		no_wait_return = save_nwr;
		msg_scroll = save_ms;
#ifdef FEAT_GUI
		hold_gui_events = save_he;
#endif
	    }
	    return;
	}
    }

    if ((eap->cmdidx == CMD_new
		|| eap->cmdidx == CMD_tabnew
		|| eap->cmdidx == CMD_tabedit
		|| eap->cmdidx == CMD_vnew) && *eap->arg == NUL)
    {
	
	setpcmark();
	(void)do_ecmd(0, NULL, NULL, eap, ECMD_ONE,
		      ECMD_HIDE + (eap->forceit ? ECMD_FORCEIT : 0),
		      old_curwin == NULL ? curwin : NULL);
    }
    else if ((eap->cmdidx != CMD_split && eap->cmdidx != CMD_vsplit)
	    || *eap->arg != NUL
#ifdef FEAT_BROWSE
	    || (cmdmod.cmod_flags & CMOD_BROWSE)
#endif
	    )
    {
	
	
	
	if (*eap->arg != NUL && text_or_buf_locked())
	    return;

	n = readonlymode;
	if (eap->cmdidx == CMD_view || eap->cmdidx == CMD_sview)
	    readonlymode = TRUE;
	else if (eap->cmdidx == CMD_enew)
	    readonlymode = FALSE;   
				    
	if (eap->cmdidx != CMD_balt && eap->cmdidx != CMD_badd)
	    setpcmark();
	if (do_ecmd(0, (eap->cmdidx == CMD_enew ? NULL : eap->arg),
		    NULL, eap,
		    
		    (*eap->arg == NUL && eap->do_ecmd_lnum == 0
				      && vim_strchr(p_cpo, CPO_GOTO1) != NULL)
					       ? ECMD_ONE : eap->do_ecmd_lnum,
		    (buf_hide(curbuf) ? ECMD_HIDE : 0)
		    + (eap->forceit ? ECMD_FORCEIT : 0)
		      
		    + (old_curwin != NULL ? ECMD_OLDBUF : 0)
		    + (eap->cmdidx == CMD_badd ? ECMD_ADDBUF : 0)
		    + (eap->cmdidx == CMD_balt ? ECMD_ALTBUF : 0)
		    , old_curwin == NULL ? curwin : NULL) == FAIL)
	{
	    
	    if (old_curwin != NULL)
	    {
		need_hide = (curbufIsChanged() && curbuf->b_nwindows <= 1);
		if (!need_hide || buf_hide(curbuf))
		{
#if defined(FEAT_EVAL)
		    cleanup_T   cs;

		    
		    
		    enter_cleanup(&cs);
#endif
#ifdef FEAT_GUI
		    need_mouse_correct = TRUE;
#endif
		    win_close(curwin, !need_hide && !buf_hide(curbuf));

#if defined(FEAT_EVAL)
		    
		    
		    
		    leave_cleanup(&cs);
#endif
		}
	    }
	}
	else if (readonlymode && curbuf->b_nwindows == 1)
	{
	    
	    
	    
	    
	    curbuf->b_p_ro = TRUE;
	}
	readonlymode = n;
    }
    else
    {
	if (eap->do_ecmd_cmd != NULL)
	    do_cmd_argument(eap->do_ecmd_cmd);
	n = curwin->w_arg_idx_invalid;
	check_arg_idx(curwin);
	if (n != curwin->w_arg_idx_invalid)
	    maketitle();
    }

    
    if (old_curwin != NULL
	    && *eap->arg != NUL
	    && curwin != old_curwin
	    && win_valid(old_curwin)
	    && old_curwin->w_buffer != curbuf
	    && (cmdmod.cmod_flags & CMOD_KEEPALT) == 0)
	old_curwin->w_alt_fnum = curbuf->b_fnum;

    ex_no_reprint = TRUE;
}

#ifndef FEAT_GUI

    static void
ex_nogui(exarg_T *eap)
{
    eap->errmsg = _(e_gui_cannot_be_used_not_enabled_at_compile_time);
}
#endif

#if defined(FEAT_GUI_MSWIN) && defined(FEAT_MENU) && defined(FEAT_TEAROFF)
    static void
ex_tearoff(exarg_T *eap)
{
    gui_make_tearoff(eap->arg);
}
#endif

#if (defined(FEAT_GUI_MSWIN) || defined(FEAT_GUI_GTK) \
	|| defined(FEAT_TERM_POPUP_MENU)) && defined(FEAT_MENU)
    static void
ex_popup(exarg_T *eap)
{
# if defined(FEAT_GUI_MSWIN) || defined(FEAT_GUI_GTK)
    if (gui.in_use)
	gui_make_popup(eap->arg, eap->forceit);
#  ifdef FEAT_TERM_POPUP_MENU
    else
#  endif
# endif
# ifdef FEAT_TERM_POPUP_MENU
	pum_make_popup(eap->arg, eap->forceit);
# endif
}
#endif

    static void
ex_swapname(exarg_T *eap UNUSED)
{
    if (curbuf->b_ml.ml_mfp == NULL || curbuf->b_ml.ml_mfp->mf_fname == NULL)
	msg(_("No swap file"));
    else
	msg((char *)curbuf->b_ml.ml_mfp->mf_fname);
}


    static void
ex_syncbind(exarg_T *eap UNUSED)
{
    win_T	*wp;
    win_T	*save_curwin = curwin;
    buf_T	*save_curbuf = curbuf;
    int	topline;
    int	y;
    linenr_T	old_linenr = curwin->w_cursor.lnum;

    setpcmark();

    
    if (curwin->w_p_scb)
    {
	topline = curwin->w_topline;
	FOR_ALL_WINDOWS(wp)
	{
	    if (wp->w_p_scb && wp->w_buffer)
	    {
		y = wp->w_buffer->b_ml.ml_line_count - get_scrolloff_value();
		if (topline > y)
		    topline = y;
	    }
	}
	if (topline < 1)
	    topline = 1;
    }
    else
    {
	topline = 1;
    }


    
    FOR_ALL_WINDOWS(curwin)
    {
	if (curwin->w_p_scb)
	{
	    curbuf = curwin->w_buffer;
	    y = topline - curwin->w_topline;
	    if (y > 0)
		scrollup(y, TRUE);
	    else
		scrolldown(-y, TRUE);
	    curwin->w_scbind_pos = topline;
	    redraw_later(UPD_VALID);
	    cursor_correct();
	    curwin->w_redr_status = TRUE;
	}
    }
    curwin = save_curwin;
    curbuf = save_curbuf;
    if (curwin->w_p_scb)
    {
	did_syncbind = TRUE;
	checkpcmark();
	if (old_linenr != curwin->w_cursor.lnum)
	{
	    char_u ctrl_o[2];

	    ctrl_o[0] = Ctrl_O;
	    ctrl_o[1] = 0;
	    ins_typebuf(ctrl_o, REMAP_NONE, 0, TRUE, FALSE);
	}
    }
}


    static void
ex_read(exarg_T *eap)
{
    int		i;
    int		empty = (curbuf->b_ml.ml_flags & ML_EMPTY);
    linenr_T	lnum;

    if (eap->usefilter)			
    {
	do_bang(1, eap, FALSE, FALSE, TRUE);
	return;
    }

    if (u_save(eap->line2, (linenr_T)(eap->line2 + 1)) == FAIL)
	return;

#ifdef FEAT_BROWSE
    if (cmdmod.cmod_flags & CMOD_BROWSE)
    {
	char_u *browseFile;

	browseFile = do_browse(0, (char_u *)_("Append File"), eap->arg,
		NULL, NULL, NULL, curbuf);
	if (browseFile != NULL)
	{
	    i = readfile(browseFile, NULL,
		    eap->line2, (linenr_T)0, (linenr_T)MAXLNUM, eap, 0);
	    vim_free(browseFile);
	}
	else
	    i = OK;
    }
    else
#endif
	if (*eap->arg == NUL)
	{
	    if (check_fname() == FAIL)	
		return;
	    i = readfile(curbuf->b_ffname, curbuf->b_fname,
		    eap->line2, (linenr_T)0, (linenr_T)MAXLNUM, eap, 0);
	}
	else
	{
	    if (vim_strchr(p_cpo, CPO_ALTREAD) != NULL)
		(void)setaltfname(eap->arg, eap->arg, (linenr_T)1);
	    i = readfile(eap->arg, NULL,
		    eap->line2, (linenr_T)0, (linenr_T)MAXLNUM, eap, 0);

	}
    if (i != OK)
    {
#if defined(FEAT_EVAL)
	if (!aborting())
#endif
	    semsg(_(e_cant_open_file_str), eap->arg);
    }
    else
    {
	if (empty && exmode_active)
	{
	    
	    
	    if (eap->line2 == 0)
		lnum = curbuf->b_ml.ml_line_count;
	    else
		lnum = 1;
	    if (*ml_get(lnum) == NUL && u_savedel(lnum, 1L) == OK)
	    {
		ml_delete(lnum);
		if (curwin->w_cursor.lnum > 1
			&& curwin->w_cursor.lnum >= lnum)
		    --curwin->w_cursor.lnum;
		deleted_lines_mark(lnum, 1L);
	    }
	}
	redraw_curbuf_later(UPD_VALID);
    }
}

static char_u	*prev_dir = NULL;

#if defined(EXITFREE) || defined(PROTO)
    void
free_cd_dir(void)
{
    VIM_CLEAR(prev_dir);
    VIM_CLEAR(globaldir);
}
#endif


    static char_u *
get_prevdir(cdscope_T scope)
{
    if (scope == CDSCOPE_WINDOW)
	return curwin->w_prevdir;
    else if (scope == CDSCOPE_TABPAGE)
	return curtab->tp_prevdir;
    return prev_dir;
}


    void
post_chdir(cdscope_T scope)
{
    if (scope != CDSCOPE_WINDOW)
	
	VIM_CLEAR(curtab->tp_localdir);
    VIM_CLEAR(curwin->w_localdir);
    if (scope != CDSCOPE_GLOBAL)
    {
	char_u	*pdir = get_prevdir(scope);

	
	
	if (globaldir == NULL && pdir != NULL)
	    globaldir = vim_strsave(pdir);

	
	if (mch_dirname(NameBuff, MAXPATHL) == OK)
	{
	    if (scope == CDSCOPE_TABPAGE)
		curtab->tp_localdir = vim_strsave(NameBuff);
	    else
		curwin->w_localdir = vim_strsave(NameBuff);
	}
    }
    else
    {
	
	VIM_CLEAR(globaldir);
    }

    last_chdir_reason = NULL;
    shorten_fnames(TRUE);
}


    void
trigger_DirChangedPre(char_u *acmd_fname, char_u *new_dir)
{
#ifdef FEAT_EVAL
    dict_T	    *v_event;
    save_v_event_T  save_v_event;

    v_event = get_v_event(&save_v_event);
    (void)dict_add_string(v_event, "directory", new_dir);
    dict_set_items_ro(v_event);
#endif
    apply_autocmds(EVENT_DIRCHANGEDPRE, acmd_fname, new_dir, FALSE, curbuf);
#ifdef FEAT_EVAL
    restore_v_event(v_event, &save_v_event);
#endif
}


    int
changedir_func(
	char_u		*new_dir,
	int		forceit,
	cdscope_T	scope)
{
    char_u	*pdir = NULL;
    int		dir_differs;
    char_u	*acmd_fname = NULL;
    char_u	**pp;
    char_u	*tofree;

    if (new_dir == NULL || allbuf_locked())
	return FALSE;

    if (vim_strchr(p_cpo, CPO_CHDIR) != NULL && curbufIsChanged() && !forceit)
    {
	emsg(_(e_cannot_change_directory_buffer_is_modified_add_bang_to_override));
	return FALSE;
    }

    
    if (STRCMP(new_dir, "-") == 0)
    {
	pdir = get_prevdir(scope);
	if (pdir == NULL)
	{
	    emsg(_(e_no_previous_directory));
	    return FALSE;
	}
	new_dir = pdir;
    }

    
    if (mch_dirname(NameBuff, MAXPATHL) == OK)
	pdir = vim_strsave(NameBuff);
    else
	pdir = NULL;

    
    
#if defined(UNIX) || defined(VMS)
    if (*new_dir == NUL)
#else
    if (*new_dir == NUL && p_cdh)
#endif
    {
	
# ifdef VMS
	char_u	*p;

	p = mch_getenv((char_u *)"SYS$LOGIN");
	if (p == NULL || *p == NUL)	
	    NameBuff[0] = NUL;
	else
	    vim_strncpy(NameBuff, p, MAXPATHL - 1);
# else
	expand_env((char_u *)"$HOME", NameBuff, MAXPATHL);
# endif
	new_dir = NameBuff;
    }
    dir_differs = pdir == NULL
			    || pathcmp((char *)pdir, (char *)new_dir, -1) != 0;
    if (dir_differs)
    {
	if (scope == CDSCOPE_WINDOW)
	    acmd_fname = (char_u *)"window";
	else if (scope == CDSCOPE_TABPAGE)
	    acmd_fname = (char_u *)"tabpage";
	else
	    acmd_fname = (char_u *)"global";
	trigger_DirChangedPre(acmd_fname, new_dir);

	if (vim_chdir(new_dir))
	{
	    emsg(_(e_command_failed));
	    vim_free(pdir);
	    return FALSE;
	}
    }

    if (scope == CDSCOPE_WINDOW)
	pp = &curwin->w_prevdir;
    else if (scope == CDSCOPE_TABPAGE)
	pp = &curtab->tp_prevdir;
    else
	pp = &prev_dir;
    tofree = *pp;  
    *pp = pdir;

    post_chdir(scope);

    if (dir_differs)
	apply_autocmds(EVENT_DIRCHANGED, acmd_fname, new_dir, FALSE, curbuf);
    vim_free(tofree);
    return TRUE;
}


    void
ex_cd(exarg_T *eap)
{
    char_u	*new_dir;

    new_dir = eap->arg;
#if !defined(UNIX) && !defined(VMS)
    
    if (*new_dir == NUL && !p_cdh)
    {
	ex_pwd(NULL);
	return;
    }
#endif

    cdscope_T	scope = CDSCOPE_GLOBAL;

    if (eap->cmdidx == CMD_lcd || eap->cmdidx == CMD_lchdir)
	scope = CDSCOPE_WINDOW;
    else if (eap->cmdidx == CMD_tcd || eap->cmdidx == CMD_tchdir)
	scope = CDSCOPE_TABPAGE;

    if (changedir_func(new_dir, eap->forceit, scope))
    {
	
	if (KeyTyped || p_verbose >= 5)
	    ex_pwd(eap);
    }
}


    static void
ex_pwd(exarg_T *eap UNUSED)
{
    if (mch_dirname(NameBuff, MAXPATHL) == OK)
    {
#ifdef BACKSLASH_IN_FILENAME
	slash_adjust(NameBuff);
#endif
	if (p_verbose > 0)
	{
	    char *context = "global";

	    if (last_chdir_reason != NULL)
		context = last_chdir_reason;
	    else if (curwin->w_localdir != NULL)
		context = "window";
	    else if (curtab->tp_localdir != NULL)
		context = "tabpage";
	    smsg("[%s] %s", context, (char *)NameBuff);
	}
	else
	    msg((char *)NameBuff);
    }
    else
	emsg(_(e_directory_unknown));
}


    static void
ex_equal(exarg_T *eap)
{
    smsg("%ld", (int)eap->line2);
    ex_may_print(eap);
}

    static void
ex_sleep(exarg_T *eap)
{
    int		n;
    int	len;

    if (cursor_valid())
    {
	n = W_WINROW(curwin) + curwin->w_wrow - msg_scrolled;
	if (n >= 0)
	    windgoto(n, curwin->w_wincol + curwin->w_wcol);
    }

    len = eap->line2;
    switch (*eap->arg)
    {
	case 'm': break;
	case NUL: len *= 1000L; break;
	default: semsg(_(e_invalid_argument_str), eap->arg); return;
    }

    
    do_sleep(len, eap->forceit);
}


    void
do_sleep(int msec, int hide_cursor)
{
    int	done = 0;
    int	wait_now;
# ifdef ELAPSED_FUNC
    elapsed_T	start_tv;

    
    
    ELAPSED_INIT(start_tv);
# endif

    if (hide_cursor)
	cursor_sleep();
    else
	cursor_on();

    out_flush_cursor(FALSE, FALSE);
    while (!got_int && done < msec)
    {
	wait_now = msec - done > 1000L ? 1000L : msec - done;
#ifdef FEAT_TIMERS
	{
	    int    due_time = check_due_timer();

	    if (due_time > 0 && due_time < wait_now)
		wait_now = due_time;
	}
#endif
#ifdef FEAT_JOB_CHANNEL
	if (has_any_channel() && wait_now > 20L)
	    wait_now = 20L;
#endif
#ifdef FEAT_SOUND
	if (has_any_sound_callback() && wait_now > 20L)
	    wait_now = 20L;
#endif
	ui_delay(wait_now, TRUE);

#ifdef FEAT_JOB_CHANNEL
	if (has_any_channel())
	    ui_breakcheck_force(TRUE);
	else
#endif
	    ui_breakcheck();
#ifdef MESSAGE_QUEUE
	
	
	
	parse_queued_messages();
#endif

# ifdef ELAPSED_FUNC
	
	done = ELAPSED_FUNC(start_tv);
# else
	
	done += wait_now;
# endif
    }

    
    
    if (got_int)
	(void)vpeekc();

    if (hide_cursor)
	cursor_unsleep();
}


    static void
ex_winsize(exarg_T *eap)
{
    int		w, h;
    char_u	*arg = eap->arg;
    char_u	*p;

    if (!SAFE_isdigit(*arg))
    {
	semsg(_(e_invalid_argument_str), arg);
	return;
    }
    w = getdigits(&arg);
    arg = skipwhite(arg);
    p = arg;
    h = getdigits(&arg);
    if (*p != NUL && *arg == NUL)
	set_shellsize(w, h, TRUE);
    else
	emsg(_(e_winsize_requires_two_number_arguments));
}

    static void
ex_wincmd(exarg_T *eap)
{
    int		xchar = NUL;
    char_u	*p;

    if (*eap->arg == 'g' || *eap->arg == Ctrl_G)
    {
	
	if (eap->arg[1] == NUL)
	{
	    emsg(_(e_invalid_argument));
	    return;
	}
	xchar = eap->arg[1];
	p = eap->arg + 2;
    }
    else
	p = eap->arg + 1;

    set_nextcmd(eap, p);
    p = skipwhite(p);
    if (*p != NUL && *p != (
#ifdef FEAT_EVAL
	    in_vim9script() ? '#' :
#endif
		'"')
	    && eap->nextcmd == NULL)
	emsg(_(e_invalid_argument));
    else if (!eap->skip)
    {
	
	postponed_split_flags = cmdmod.cmod_split;
	postponed_split_tab = cmdmod.cmod_tab;
	do_window(*eap->arg, eap->addr_count > 0 ? eap->line2 : 0L, xchar);
	postponed_split_flags = 0;
	postponed_split_tab = 0;
    }
}

#if defined(FEAT_GUI) || defined(UNIX) || defined(VMS) || defined(MSWIN)

    static void
ex_winpos(exarg_T *eap)
{
    int		x, y;
    char_u	*arg = eap->arg;
    char_u	*p;

    if (*arg == NUL)
    {
# if defined(FEAT_GUI) || defined(MSWIN)
#  ifdef VIMDLL
	if (gui.in_use ? gui_mch_get_winpos(&x, &y) != FAIL :
		mch_get_winpos(&x, &y) != FAIL)
#  elif defined(FEAT_GUI)
	if (gui.in_use && gui_mch_get_winpos(&x, &y) != FAIL)
#  else
	if (mch_get_winpos(&x, &y) != FAIL)
#  endif
	{
	    sprintf((char *)IObuff, _("Window position: X %d, Y %d"), x, y);
	    msg((char *)IObuff);
	}
	else
# endif
	    emsg(_(e_obtaining_window_position_not_implemented_for_this_platform));
    }
    else
    {
	x = getdigits(&arg);
	arg = skipwhite(arg);
	p = arg;
	y = getdigits(&arg);
	if (*p == NUL || *arg != NUL)
	{
	    emsg(_(e_winpos_requires_two_number_arguments));
	    return;
	}
# ifdef FEAT_GUI
	if (gui.in_use)
	    gui_mch_set_winpos(x, y);
	else if (gui.starting)
	{
	    
	    gui_win_x = x;
	    gui_win_y = y;
	}
#  if defined(HAVE_TGETENT) || defined(VIMDLL)
	else
#  endif
# endif
# if defined(MSWIN) && (!defined(FEAT_GUI) || defined(VIMDLL))
	    mch_set_winpos(x, y);
# endif
# ifdef HAVE_TGETENT
	if (*T_CWP)
	    term_set_winpos(x, y);
# endif
    }
}
#endif


    static void
ex_operators(exarg_T *eap)
{
    oparg_T	oa;

    clear_oparg(&oa);
    oa.regname = eap->regname;
    oa.start.lnum = eap->line1;
    oa.end.lnum = eap->line2;
    oa.line_count = eap->line2 - eap->line1 + 1;
    oa.motion_type = MLINE;
    virtual_op = FALSE;
    if (eap->cmdidx != CMD_yank)	
    {
	setpcmark();
	curwin->w_cursor.lnum = eap->line1;
	beginline(BL_SOL | BL_FIX);
    }

    if (VIsual_active)
	end_visual_mode();

    switch (eap->cmdidx)
    {
	case CMD_delete:
	    oa.op_type = OP_DELETE;
	    op_delete(&oa);
	    break;

	case CMD_yank:
	    oa.op_type = OP_YANK;
	    (void)op_yank(&oa, FALSE, TRUE);
	    break;

	default:    
	    if (
#ifdef FEAT_RIGHTLEFT
		(eap->cmdidx == CMD_rshift) ^ curwin->w_p_rl
#else
		eap->cmdidx == CMD_rshift
#endif
						)
		oa.op_type = OP_RSHIFT;
	    else
		oa.op_type = OP_LSHIFT;
	    op_shift(&oa, FALSE, eap->amount);
	    break;
    }
    virtual_op = MAYBE;
    ex_may_print(eap);
}


    static void
ex_put(exarg_T *eap)
{
    
    if (eap->line2 == 0)
    {
	eap->line2 = 1;
	eap->forceit = TRUE;
    }
    curwin->w_cursor.lnum = eap->line2;
    check_cursor_col();
    do_put(eap->regname, NULL, eap->forceit ? BACKWARD : FORWARD, 1L,
						       PUT_LINE|PUT_CURSLINE);
}


    static void
ex_copymove(exarg_T *eap)
{
    int	n;

#ifdef FEAT_EVAL
    if (not_in_vim9(eap) == FAIL)
	return;
#endif
    n = get_address(eap, &eap->arg, eap->addr_type, FALSE, FALSE, FALSE, 1);
    if (eap->arg == NULL)	    
    {
	eap->nextcmd = NULL;
	return;
    }
    get_flags(eap);

    
    if (n == MAXLNUM || n < 0 || n > curbuf->b_ml.ml_line_count)
    {
	emsg(_(e_invalid_range));
	return;
    }

    if (eap->cmdidx == CMD_move)
    {
	if (do_move(eap->line1, eap->line2, n) == FAIL)
	    return;
    }
    else
	ex_copy(eap->line1, eap->line2, n);
    u_clearline();
    beginline(BL_SOL | BL_FIX);
    ex_may_print(eap);
}


    void
ex_may_print(exarg_T *eap)
{
    if (eap->flags != 0)
    {
	print_line(curwin->w_cursor.lnum, (eap->flags & EXFLAG_NR),
						  (eap->flags & EXFLAG_LIST));
	ex_no_reprint = TRUE;
    }
}


    static void
ex_submagic(exarg_T *eap)
{
    optmagic_T saved = magic_overruled;

    magic_overruled = eap->cmdidx == CMD_smagic
					  ? OPTION_MAGIC_ON : OPTION_MAGIC_OFF;
    ex_substitute(eap);
    magic_overruled = saved;
}


    static void
ex_join(exarg_T *eap)
{
    curwin->w_cursor.lnum = eap->line1;
    if (eap->line1 == eap->line2)
    {
	if (eap->addr_count >= 2)   
	    return;
	if (eap->line2 == curbuf->b_ml.ml_line_count)
	{
	    beep_flush();
	    return;
	}
	++eap->line2;
    }
    (void)do_join(eap->line2 - eap->line1 + 1, !eap->forceit, TRUE, TRUE, TRUE);
    beginline(BL_WHITE | BL_FIX);
    ex_may_print(eap);
}


    static void
ex_at(exarg_T *eap)
{
    int		c;
    int		prev_len = typebuf.tb_len;

    curwin->w_cursor.lnum = eap->line2;
    check_cursor_col();

#ifdef USE_ON_FLY_SCROLL
    dont_scroll = TRUE;		
#endif

    
    c = *eap->arg;
    if (c == NUL || (c == '*' && *eap->cmd == '*'))
	c = '@';
    
    if (do_execreg(c, TRUE, vim_strchr(p_cpo, CPO_EXECBUF) != NULL, TRUE)
								      == FAIL)
    {
	beep_flush();
	return;
    }

    int	save_efr = exec_from_reg;

    exec_from_reg = TRUE;

    
    while (!stuff_empty() || typebuf.tb_len > prev_len)
	(void)do_cmdline(NULL, getexline, NULL, DOCMD_NOWAIT|DOCMD_VERBOSE);

    exec_from_reg = save_efr;
}


    static void
ex_bang(exarg_T *eap)
{
    do_bang(eap->addr_count, eap, eap->forceit, TRUE, TRUE);
}


    static void
ex_undo(exarg_T *eap)
{
    if (eap->addr_count == 1)	    
	undo_time(eap->line2, FALSE, FALSE, TRUE);
    else
	u_undo(1);
}

#ifdef FEAT_PERSISTENT_UNDO
    static void
ex_wundo(exarg_T *eap)
{
    char_u hash[UNDO_HASH_SIZE];

    u_compute_hash(hash);
    u_write_undo(eap->arg, eap->forceit, curbuf, hash);
}

    static void
ex_rundo(exarg_T *eap)
{
    char_u hash[UNDO_HASH_SIZE];

    u_compute_hash(hash);
    u_read_undo(eap->arg, hash, NULL);
}
#endif


    static void
ex_redo(exarg_T *eap UNUSED)
{
    u_redo(1);
}


    static void
ex_later(exarg_T *eap)
{
    int	count = 0;
    int		sec = FALSE;
    int		file = FALSE;
    char_u	*p = eap->arg;

    if (*p == NUL)
	count = 1;
    else if (SAFE_isdigit(*p))
    {
	count = getdigits(&p);
	switch (*p)
	{
	    case 's': ++p; sec = TRUE; break;
	    case 'm': ++p; sec = TRUE; count *= 60; break;
	    case 'h': ++p; sec = TRUE; count *= 60 * 60; break;
	    case 'd': ++p; sec = TRUE; count *= 24 * 60 * 60; break;
	    case 'f': ++p; file = TRUE; break;
	}
    }

    if (*p != NUL)
	semsg(_(e_invalid_argument_str), eap->arg);
    else
	undo_time(eap->cmdidx == CMD_earlier ? -count : count,
							    sec, file, FALSE);
}


    static void
ex_redir(exarg_T *eap)
{
    char	*mode;
    char_u	*fname;
    char_u	*arg = eap->arg;

#ifdef FEAT_EVAL
    if (redir_execute)
    {
	emsg(_(e_cannot_use_redir_inside_execute));
	return;
    }
#endif

    if (STRICMP(eap->arg, "END") == 0)
	close_redir();
    else
    {
	if (*arg == '>')
	{
	    ++arg;
	    if (*arg == '>')
	    {
		++arg;
		mode = "a";
	    }
	    else
		mode = "w";
	    arg = skipwhite(arg);

	    close_redir();

	    
	    fname = expand_env_save(arg);
	    if (fname == NULL)
		return;
#ifdef FEAT_BROWSE
	    if (cmdmod.cmod_flags & CMOD_BROWSE)
	    {
		char_u	*browseFile;

		browseFile = do_browse(BROWSE_SAVE,
			(char_u *)_("Save Redirection"),
			fname, NULL, NULL,
			(char_u *)_(BROWSE_FILTER_ALL_FILES), curbuf);
		if (browseFile == NULL)
		    return;		
		vim_free(fname);
		fname = browseFile;
		eap->forceit = TRUE;	
	    }
#endif

	    redir_fd = open_exfile(fname, eap->forceit, mode);
	    vim_free(fname);
	}
#ifdef FEAT_EVAL
	else if (*arg == '@')
	{
	    
	    close_redir();
	    ++arg;
	    if (ASCII_ISALPHA(*arg)
# ifdef FEAT_CLIPBOARD
		    || *arg == '*'
		    || *arg == '+'
# endif
		    || *arg == '"')
	    {
		redir_reg = *arg++;
		if (*arg == '>' && arg[1] == '>')  
		    arg += 2;
		else
		{
		    
		    if (*arg == '>')
			arg++;
		    
		    
		    if (*arg == NUL && !SAFE_isupper(redir_reg))
			write_reg_contents(redir_reg, (char_u *)"", -1, FALSE);
		}
	    }
	    if (*arg != NUL)
	    {
		redir_reg = 0;
		semsg(_(e_invalid_argument_str), eap->arg);
	    }
	}
	else if (*arg == '=' && arg[1] == '>')
	{
	    int append;

	    
	    close_redir();
	    arg += 2;

	    if (*arg == '>')
	    {
		++arg;
		append = TRUE;
	    }
	    else
		append = FALSE;

	    if (var_redir_start(skipwhite(arg), append) == OK)
		redir_vname = 1;
	}
#endif

	

	else
	    semsg(_(e_invalid_argument_str), eap->arg);
    }

    
    
    if (redir_fd != NULL
#ifdef FEAT_EVAL
			  || redir_reg || redir_vname
#endif
							)
	redir_off = FALSE;
}


    void
ex_redraw(exarg_T *eap)
{
    redraw_cmd(eap->forceit);
}


    void
redraw_cmd(int clear)
{
    int save_RedrawingDisabled = RedrawingDisabled;
    RedrawingDisabled = 0;

    int save_p_lz = p_lz;
    p_lz = FALSE;

    validate_cursor();
    update_topline();
    update_screen(clear ? UPD_CLEAR : VIsual_active ? UPD_INVERTED : 0);
    if (need_maketitle)
	maketitle();
#if defined(MSWIN) && (!defined(FEAT_GUI_MSWIN) || defined(VIMDLL))
# ifdef VIMDLL
    if (!gui.in_use)
# endif
	resize_console_buf();
#endif
    RedrawingDisabled = save_RedrawingDisabled;
    p_lz = save_p_lz;

    
    screen_stop_highlight();

    
    msg_didout = FALSE;
    msg_col = 0;

    
    need_wait_return = FALSE;

    
    if (State & MODE_CMDLINE)
	redrawcmdline();

    out_flush();
}


    static void
ex_redrawstatus(exarg_T *eap UNUSED)
{
    if (eap->forceit)
	status_redraw_all();
    else
	status_redraw_curbuf();
    if (msg_scrolled && (State & MODE_CMDLINE))
	return;  

    int save_RedrawingDisabled = RedrawingDisabled;
    RedrawingDisabled = 0;

    int save_p_lz = p_lz;
    p_lz = FALSE;

    if (State & MODE_CMDLINE)
	redraw_statuslines();
    else
	update_screen(VIsual_active ? UPD_INVERTED : 0);
    RedrawingDisabled = save_RedrawingDisabled;
    p_lz = save_p_lz;
    out_flush();
}


    static void
ex_redrawtabline(exarg_T *eap UNUSED)
{
    int save_RedrawingDisabled = RedrawingDisabled;
    RedrawingDisabled = 0;

    int save_p_lz = p_lz;
    p_lz = FALSE;

    draw_tabline();

    RedrawingDisabled = save_RedrawingDisabled;
    p_lz = save_p_lz;
    out_flush();
}

    static void
close_redir(void)
{
    if (redir_fd != NULL)
    {
	fclose(redir_fd);
	redir_fd = NULL;
    }
#ifdef FEAT_EVAL
    redir_reg = 0;
    if (redir_vname)
    {
	var_redir_stop();
	redir_vname = 0;
    }
#endif
}

#if (defined(FEAT_SESSION) || defined(FEAT_EVAL)) || defined(PROTO)
    int
vim_mkdir_emsg(char_u *name, int prot UNUSED)
{
    if (vim_mkdir(name, prot) != 0)
    {
	semsg(_(e_cannot_create_directory_str), name);
	return FAIL;
    }
    return OK;
}
#endif


    FILE *
open_exfile(
    char_u	*fname,
    int		forceit,
    char	*mode)	    
{
    FILE	*fd;

#ifdef UNIX
    
    if (mch_isdir(fname))
    {
	semsg(_(e_str_is_directory), fname);
	return NULL;
    }
#endif
    if (!forceit && *mode != 'a' && vim_fexists(fname))
    {
	semsg(_(e_str_exists_add_bang_to_override), fname);
	return NULL;
    }

    if ((fd = mch_fopen((char *)fname, mode)) == NULL)
	semsg(_(e_cannot_open_str_for_writing_2), fname);

    return fd;
}


    static void
ex_mark(exarg_T *eap)
{
    pos_T	pos;

#ifdef FEAT_EVAL
    if (not_in_vim9(eap) == FAIL)
	return;
#endif
    if (*eap->arg == NUL)		
    {
	emsg(_(e_argument_required));
	return;
    }

    if (eap->arg[1] != NUL)	
    {
	semsg(_(e_trailing_characters_str), eap->arg);
	return;
    }

    pos = curwin->w_cursor;		
    curwin->w_cursor.lnum = eap->line2;
    beginline(BL_WHITE | BL_FIX);
    if (setmark(*eap->arg) == FAIL)	
	emsg(_(e_argument_must_be_letter_or_forward_backward_quote));
    curwin->w_cursor = pos;		
}


    void
update_topline_cursor(void)
{
    check_cursor();		
    update_topline();
    if (!curwin->w_p_wrap)
	validate_cursor();
    update_curswant();
}


    int
save_current_state(save_state_T *sst)
{
    sst->save_msg_scroll = msg_scroll;
    sst->save_restart_edit = restart_edit;
    sst->save_msg_didout = msg_didout;
    sst->save_State = State;
    sst->save_insertmode = p_im;
    sst->save_finish_op = finish_op;
    sst->save_opcount = opcount;
    sst->save_reg_executing = reg_executing;
    sst->save_pending_end_reg_executing = pending_end_reg_executing;

    msg_scroll = FALSE;		    
    restart_edit = 0;		    
    p_im = FALSE;		    

    sst->save_script_version = current_sctx.sc_version;
    current_sctx.sc_version = 1;    

    
    save_typeahead(&sst->tabuf);
    return sst->tabuf.typebuf_valid;
}

    void
restore_current_state(save_state_T *sst)
{
    
    restore_typeahead(&sst->tabuf, FALSE);

    msg_scroll = sst->save_msg_scroll;
    restart_edit = sst->save_restart_edit;
    p_im = sst->save_insertmode;
    finish_op = sst->save_finish_op;
    opcount = sst->save_opcount;
    reg_executing = sst->save_reg_executing;
    pending_end_reg_executing = sst->save_pending_end_reg_executing;
    msg_didout |= sst->save_msg_didout;	
    current_sctx.sc_version = sst->save_script_version;

    
    
    State = sst->save_State;
#ifdef CURSOR_SHAPE
    ui_cursor_shape();		
#endif
}


    void
ex_normal(exarg_T *eap)
{
    save_state_T save_state;
    char_u	*arg = NULL;
    int		l;
    char_u	*p;

    if (ex_normal_lock > 0)
    {
	emsg(_(e_not_allowed_here));
	return;
    }
    if (ex_normal_busy >= p_mmd)
    {
	emsg(_(e_recursive_use_of_normal_too_deep));
	return;
    }

    
    if (has_mbyte)
    {
	int	len = 0;

	
	for (p = eap->arg; *p != NUL; ++p)
	{
#ifdef FEAT_GUI
	    if (*p == CSI)  
		len += 2;
#endif
	    for (l = (*mb_ptr2len)(p) - 1; l > 0; --l)
		if (*++p == K_SPECIAL	  
#ifdef FEAT_GUI
			|| *p == CSI
#endif
			)
		    len += 2;
	}
	if (len > 0)
	{
	    arg = alloc(STRLEN(eap->arg) + len + 1);
	    if (arg != NULL)
	    {
		len = 0;
		for (p = eap->arg; *p != NUL; ++p)
		{
		    arg[len++] = *p;
#ifdef FEAT_GUI
		    if (*p == CSI)
		    {
			arg[len++] = KS_EXTRA;
			arg[len++] = (int)KE_CSI;
		    }
#endif
		    for (l = (*mb_ptr2len)(p) - 1; l > 0; --l)
		    {
			arg[len++] = *++p;
			if (*p == K_SPECIAL)
			{
			    arg[len++] = KS_SPECIAL;
			    arg[len++] = KE_FILLER;
			}
#ifdef FEAT_GUI
			else if (*p == CSI)
			{
			    arg[len++] = KS_EXTRA;
			    arg[len++] = (int)KE_CSI;
			}
#endif
		    }
		    arg[len] = NUL;
		}
	    }
	}
    }

    ++ex_normal_busy;
    if (save_current_state(&save_state))
    {
	
	do
	{
	    if (eap->addr_count != 0)
	    {
		curwin->w_cursor.lnum = eap->line1++;
		curwin->w_cursor.col = 0;
		check_cursor_moved(curwin);
	    }

	    exec_normal_cmd(arg != NULL
		     ? arg
		     : eap->arg, eap->forceit ? REMAP_NONE : REMAP_YES, FALSE);
	}
	while (eap->addr_count > 0 && eap->line1 <= eap->line2 && !got_int);
    }

    
    update_topline_cursor();

    restore_current_state(&save_state);
    --ex_normal_busy;
    setmouse();
#ifdef CURSOR_SHAPE
    ui_cursor_shape();		
#endif

    vim_free(arg);
}


    static void
ex_startinsert(exarg_T *eap)
{
    if (eap->forceit)
    {
	
	if (!curwin->w_cursor.lnum)
	    curwin->w_cursor.lnum = 1;
	set_cursor_for_append_to_line();
    }
#ifdef FEAT_TERMINAL
    
    if (term_job_running(curbuf->b_term))
	return;
#endif

    
    
    if (State & MODE_INSERT)
	return;

    if (eap->cmdidx == CMD_startinsert)
	restart_edit = 'a';
    else if (eap->cmdidx == CMD_startreplace)
	restart_edit = 'R';
    else
	restart_edit = 'V';

    if (!eap->forceit)
    {
	if (eap->cmdidx == CMD_startinsert)
	    restart_edit = 'i';
	curwin->w_curswant = 0;	    
    }

    if (VIsual_active)
	showmode();
}


    static void
ex_stopinsert(exarg_T *eap UNUSED)
{
    restart_edit = 0;
    stop_insert_mode = TRUE;
    clearmode();
}


    void
exec_normal_cmd(char_u *cmd, int remap, int silent)
{
    
    ins_typebuf(cmd, remap, 0, TRUE, silent);
    exec_normal(FALSE, FALSE, FALSE);
}


    void
exec_normal(int was_typed, int use_vpeekc, int may_use_terminal_loop UNUSED)
{
    oparg_T	oa;
    int		c;

    
    
    clear_oparg(&oa);
    finish_op = FALSE;
    while ((!stuff_empty()
		|| ((was_typed || !typebuf_typed()) && typebuf.tb_len > 0)
		|| (use_vpeekc && (c = vpeekc()) != NUL && c != Ctrl_C))
	    && !got_int)
    {
	update_topline_cursor();
#ifdef FEAT_TERMINAL
	if (may_use_terminal_loop && term_use_loop()
		&& oa.op_type == OP_NOP && oa.regname == NUL
		&& !VIsual_active)
	{
	    
	    
	    
	    if (terminal_loop(TRUE) == OK)
		normal_cmd(&oa, TRUE);
	}
	else
#endif
	    
	    normal_cmd(&oa, TRUE);
    }
}

#ifdef FEAT_FIND_ID
    static void
ex_checkpath(exarg_T *eap)
{
    find_pattern_in_path(NULL, 0, 0, FALSE, FALSE, CHECK_PATH, 1L,
				   eap->forceit ? ACTION_SHOW_ALL : ACTION_SHOW,
					      (linenr_T)1, (linenr_T)MAXLNUM, eap->forceit);
}

#if defined(FEAT_QUICKFIX)

    static void
ex_psearch(exarg_T *eap)
{
    g_do_tagpreview = p_pvh;
    ex_findpat(eap);
    g_do_tagpreview = 0;
}
#endif

    static void
ex_findpat(exarg_T *eap)
{
    int		whole = TRUE;
    int	n;
    char_u	*p;
    int		action;

    switch (cmdnames[eap->cmdidx].cmd_name[2])
    {
	case 'e':	
		if (cmdnames[eap->cmdidx].cmd_name[0] == 'p')
		    action = ACTION_GOTO;
		else
		    action = ACTION_SHOW;
		break;
	case 'i':	
		action = ACTION_SHOW_ALL;
		break;
	case 'u':	
		action = ACTION_GOTO;
		break;
	default:	
		action = ACTION_SPLIT;
		break;
    }

    n = 1;
    if (vim_isdigit(*eap->arg))	
    {
	n = getdigits(&eap->arg);
	eap->arg = skipwhite(eap->arg);
    }
    if (*eap->arg == '/')   
    {
	whole = FALSE;
	++eap->arg;
	p = skip_regexp(eap->arg, '/', magic_isset());
	if (*p)
	{
	    *p++ = NUL;
	    p = skipwhite(p);

	    
	    if (!ends_excmd2(eap->arg, p))
		eap->errmsg = ex_errmsg(e_trailing_characters_str, p);
	    else
		set_nextcmd(eap, p);
	}
    }
    if (!eap->skip)
	find_pattern_in_path(eap->arg, 0, (int)STRLEN(eap->arg),
			    whole, !eap->forceit,
			    *eap->cmd == 'd' ?	FIND_DEFINE : FIND_ANY,
			    n, action, eap->line1, eap->line2, eap->forceit);
}
#endif


#ifdef FEAT_QUICKFIX

    static void
ex_ptag(exarg_T *eap)
{
    g_do_tagpreview = p_pvh;  
    ex_tag_cmd(eap, cmdnames[eap->cmdidx].cmd_name + 1);
}


    static void
ex_pedit(exarg_T *eap)
{
    win_T	*curwin_save = curwin;

    if (ERROR_IF_ANY_POPUP_WINDOW)
	return;

    
    g_do_tagpreview = p_pvh;
    prepare_tagpreview(TRUE, TRUE, FALSE);

    
    do_exedit(eap, NULL);

    if (curwin != curwin_save && win_valid(curwin_save))
    {
	
	validate_cursor();
	redraw_later(UPD_VALID);
	win_enter(curwin_save, TRUE);
    }
# ifdef FEAT_PROP_POPUP
    else if (WIN_IS_POPUP(curwin))
    {
	
	win_enter(firstwin, TRUE);
    }
# endif
    g_do_tagpreview = 0;
}
#endif


    static void
ex_stag(exarg_T *eap)
{
    postponed_split = -1;
    postponed_split_flags = cmdmod.cmod_split;
    postponed_split_tab = cmdmod.cmod_tab;
    ex_tag_cmd(eap, cmdnames[eap->cmdidx].cmd_name + 1);
    postponed_split_flags = 0;
    postponed_split_tab = 0;
}


    static void
ex_tag(exarg_T *eap)
{
    ex_tag_cmd(eap, cmdnames[eap->cmdidx].cmd_name);
}

    static void
ex_tag_cmd(exarg_T *eap, char_u *name)
{
    int		cmd;

    switch (name[1])
    {
	case 'j': cmd = DT_JUMP;	
		  break;
	case 's': cmd = DT_SELECT;	
		  break;
	case 'p': cmd = DT_PREV;	
		  break;
	case 'N': cmd = DT_PREV;	
		  break;
	case 'n': cmd = DT_NEXT;	
		  break;
	case 'o': cmd = DT_POP;		
		  break;
	case 'f':			
	case 'r': cmd = DT_FIRST;	
		  break;
	case 'l': cmd = DT_LAST;	
		  break;
	default:			
#ifdef FEAT_CSCOPE
		  if (p_cst && *eap->arg != NUL)
		  {
		      ex_cstag(eap);
		      return;
		  }
#endif
		  cmd = DT_TAG;
		  break;
    }

    if (name[0] == 'l')
    {
#ifndef FEAT_QUICKFIX
	ex_ni(eap);
	return;
#else
	cmd = DT_LTAG;
#endif
    }

    do_tag(eap->arg, cmd, eap->addr_count > 0 ? (int)eap->line2 : 1,
							  eap->forceit, TRUE);
}

enum {
    SPEC_PERC = 0,
    SPEC_HASH,
    SPEC_CWORD,	    
    SPEC_CCWORD,    
    SPEC_CEXPR,	    
    SPEC_CFILE,	    
    SPEC_SFILE,	    
    SPEC_SLNUM,	    
    SPEC_STACK,	    
    SPEC_SCRIPT,    
    SPEC_AFILE,	    
    SPEC_ABUF,	    
    SPEC_AMATCH,    
    SPEC_SFLNUM,    
    SPEC_SID	    
#ifdef FEAT_CLIENTSERVER
    , SPEC_CLIENT
#endif
};


    int
find_cmdline_var(char_u *src, size_t *usedlen)
{
    
    static keyvalue_T spec_str_tab[] = {
	KEYVALUE_ENTRY(SPEC_SID, "SID>"),	    
	KEYVALUE_ENTRY(SPEC_ABUF, "abuf>"),	    
	KEYVALUE_ENTRY(SPEC_AFILE, "afile>"),	    
	KEYVALUE_ENTRY(SPEC_AMATCH, "amatch>"),	    
	KEYVALUE_ENTRY(SPEC_CCWORD, "cWORD>"),	    
	KEYVALUE_ENTRY(SPEC_CEXPR, "cexpr>"),	    
	KEYVALUE_ENTRY(SPEC_CFILE, "cfile>"),	    
#ifdef FEAT_CLIENTSERVER
	KEYVALUE_ENTRY(SPEC_CLIENT, "client>"),
#endif
	KEYVALUE_ENTRY(SPEC_CWORD, "cword>"),	    
	KEYVALUE_ENTRY(SPEC_SCRIPT, "script>"),	    
	KEYVALUE_ENTRY(SPEC_SFILE, "sfile>"),	    
	KEYVALUE_ENTRY(SPEC_SFLNUM, "sflnum>"),	    
	KEYVALUE_ENTRY(SPEC_SLNUM, "slnum>"),	    
	KEYVALUE_ENTRY(SPEC_STACK, "stack>")	    
    };
    keyvalue_T target;
    keyvalue_T *entry;

    switch (*src)
    {
    case '%':
	*usedlen = 1;
	return SPEC_PERC;

    case '#':
	*usedlen = 1;
	return SPEC_HASH;

    case '<':
	target.key = 0;
	target.value = (char *)src + 1;	    
	target.length = 0;		    

	entry = (keyvalue_T *)bsearch(&target, &spec_str_tab, ARRAY_LENGTH(spec_str_tab), sizeof(spec_str_tab[0]), cmp_keyvalue_value_n);
	if (entry == NULL)
	    return -1;

	*usedlen = entry->length + 1;
	return entry->key;

    default:
	break;
    }

    return -1;
}


    char_u *
eval_vars(
    char_u	*src,		
    char_u	*srcstart,	
    size_t	*usedlen,	
    linenr_T	*lnump,		
    char	**errormsg,	
    int		*escaped,	
				
    int		empty_is_error)	
{
    int		i;
    char_u	*s;
    char_u	*result;
    char_u	*resultbuf = NULL;
    int		resultlen;
    buf_T	*buf;
    int		valid = VALID_HEAD + VALID_PATH;    
    int		spec_idx;
    int		tilde_file = FALSE;
    int		skip_mod = FALSE;
    char_u	strbuf[30];

    *errormsg = NULL;
    if (escaped != NULL)
	*escaped = FALSE;

    
    spec_idx = find_cmdline_var(src, usedlen);
    if (spec_idx < 0)	
    {
	*usedlen = 1;
	return NULL;
    }

    
    if (src > srcstart && src[-1] == '\\')
    {
	*usedlen = 0;
	STRMOVE(src - 1, src);	
	return NULL;
    }

    
    if (spec_idx == SPEC_CWORD || spec_idx == SPEC_CCWORD
						     || spec_idx == SPEC_CEXPR)
    {
	resultlen = find_ident_under_cursor(&result,
		spec_idx == SPEC_CWORD ? (FIND_IDENT | FIND_STRING)
	      : spec_idx == SPEC_CEXPR ? (FIND_IDENT | FIND_STRING | FIND_EVAL)
	      : FIND_STRING);
	if (resultlen == 0)
	{
	    *errormsg = "";
	    return NULL;
	}
    }

    
    else
    {
	size_t off = 0;

	switch (spec_idx)
	{
	case SPEC_PERC:
#ifdef FEAT_EVAL
		if (!in_vim9script() || src[1] != '%')
#endif
		{
		    
		    if (curbuf->b_fname == NULL)
		    {
			result = (char_u *)"";
			valid = 0;	    
		    }
		    else
		    {
			result = curbuf->b_fname;
			tilde_file = STRCMP(result, "~") == 0;
		    }
		    break;
		}
#ifdef FEAT_EVAL
		
		off = 1;
#endif
		
	case SPEC_HASH:		
		if (off == 0 ? src[1] == '#' : src[2] == '%')
		{
		    
		    result = arg_all();
		    resultbuf = result;
		    *usedlen = off + 2;
		    if (escaped != NULL)
			*escaped = TRUE;
		    skip_mod = TRUE;
		    break;
		}
		s = src + off + 1;
		if (*s == '<')		
		    ++s;
		i = (int)getdigits(&s);
		if (s == src + off + 2 && src[off + 1] == '-')
		    
		    s--;
		*usedlen = (int)(s - src); 

		if (src[off + 1] == '<' && i != 0)
		{
		    if (*usedlen < off + 2)
		    {
			
			*usedlen = off + 1;
			return NULL;
		    }
#ifdef FEAT_EVAL
		    result = list_find_str(get_vim_var_list(VV_OLDFILES),
								     (int)i);
		    if (result == NULL)
		    {
			*errormsg = "";
			return NULL;
		    }
#else
		    *errormsg = _(e_hashsmall_is_not_available_without_the_eval_feature);
		    return NULL;
#endif
		}
		else
		{
		    if (i == 0 && src[off + 1] == '<' && *usedlen > off + 1)
			*usedlen = off + 1;
		    buf = buflist_findnr(i);
		    if (buf == NULL)
		    {
			*errormsg = _(e_no_alternate_file_name_to_substitute_for_hash);
			return NULL;
		    }
		    if (lnump != NULL)
			*lnump = ECMD_LAST;
		    if (buf->b_fname == NULL)
		    {
			result = (char_u *)"";
			valid = 0;	    
		    }
		    else
		    {
			result = buf->b_fname;
			tilde_file = STRCMP(result, "~") == 0;
		    }
		}
		break;

	case SPEC_CFILE:	
		result = file_name_at_cursor(FNAME_MESS|FNAME_HYP, 1L, NULL);
		if (result == NULL)
		{
		    *errormsg = "";
		    return NULL;
		}
		resultbuf = result;	    
		break;

	case SPEC_AFILE:	
		result = autocmd_fname;
		if (result != NULL && !autocmd_fname_full)
		{
		    
		    
		    autocmd_fname_full = TRUE;
		    result = FullName_save(autocmd_fname, FALSE);
		    vim_free(autocmd_fname);
		    autocmd_fname = result;
		}
		if (result == NULL)
		{
		    *errormsg = _(e_no_autocommand_file_name_to_substitute_for_afile);
		    return NULL;
		}
		result = shorten_fname1(result);
		break;

	case SPEC_ABUF:		
		if (autocmd_bufnr <= 0)
		{
		    *errormsg = _(e_no_autocommand_buffer_number_to_substitute_for_abuf);
		    return NULL;
		}
		sprintf((char *)strbuf, "%d", autocmd_bufnr);
		result = strbuf;
		break;

	case SPEC_AMATCH:	
		result = autocmd_match;
		if (result == NULL)
		{
		    *errormsg = _(e_no_autocommand_match_name_to_substitute_for_amatch);
		    return NULL;
		}
		break;

	case SPEC_SFILE:	
		result = estack_sfile(ESTACK_SFILE);
		if (result == NULL)
		{
		    *errormsg = _(e_no_source_file_name_to_substitute_for_sfile);
		    return NULL;
		}
		resultbuf = result;	    
		break;
	case SPEC_STACK:	
		result = estack_sfile(ESTACK_STACK);
		if (result == NULL)
		{
		    *errormsg = _(e_no_call_stack_to_substitute_for_stack);
		    return NULL;
		}
		resultbuf = result;	    
		break;
	case SPEC_SCRIPT:	
		result = estack_sfile(ESTACK_SCRIPT);
		if (result == NULL)
		{
		    *errormsg = _(e_no_script_file_name_to_substitute_for_script);
		    return NULL;
		}
		resultbuf = result;	    
		break;

	case SPEC_SLNUM:	
		if (SOURCING_NAME == NULL || SOURCING_LNUM == 0)
		{
		    *errormsg = _(e_no_line_number_to_use_for_slnum);
		    return NULL;
		}
		sprintf((char *)strbuf, "%ld", SOURCING_LNUM);
		result = strbuf;
		break;

#ifdef FEAT_EVAL
	case SPEC_SFLNUM:	
		if (current_sctx.sc_lnum + SOURCING_LNUM == 0)
		{
		    *errormsg = _(e_no_line_number_to_use_for_sflnum);
		    return NULL;
		}
		sprintf((char *)strbuf, "%ld",
				 (int)(current_sctx.sc_lnum + SOURCING_LNUM));
		result = strbuf;
		break;

	case SPEC_SID:
		if (current_sctx.sc_sid <= 0)
		{
		    *errormsg = _(e_using_sid_not_in_script_context);
		    return NULL;
		}
		sprintf((char *)strbuf, "<SNR>%d_", current_sctx.sc_sid);
		result = strbuf;
		break;
#endif

#ifdef FEAT_CLIENTSERVER
	case SPEC_CLIENT:	
		sprintf((char *)strbuf, PRINTF_HEX_LONG_U,
							(long_u)clientWindow);
		result = strbuf;
		break;
#endif

	default:
		result = (char_u *)""; 
		break;
	}

	resultlen = (int)STRLEN(result);	
	if (src[*usedlen] == '<')	
	{
	    ++*usedlen;
	    if ((s = vim_strrchr(result, '.')) != NULL && s >= gettail(result))
		resultlen = (int)(s - result);
	}
	else if (!skip_mod)
	{
	    valid |= modify_fname(src, tilde_file, usedlen, &result, &resultbuf,
								  &resultlen);
	    if (result == NULL)
	    {
		*errormsg = "";
		return NULL;
	    }
	}
    }

    if (resultlen == 0 || valid != VALID_HEAD + VALID_PATH)
    {
	if (empty_is_error)
	{
	    if (valid != VALID_HEAD + VALID_PATH)
		*errormsg = _(e_empty_file_name_for_percent_or_hash_only_works_with_ph);
	    else
		*errormsg = _(e_evaluates_to_an_empty_string);
	}
	result = NULL;
    }
    else
	result = vim_strnsave(result, resultlen);
    vim_free(resultbuf);
    return result;
}


    char_u *
expand_sfile(char_u *arg)
{
    char	*errormsg;
    char_u	*result;
    size_t	resultlen;
    char_u	*newres;
    size_t	len;
    char_u	*repl;
    size_t	repllen;
    size_t	srclen;
    char_u	*p;

    resultlen = STRLEN(arg);
    result = vim_strnsave(arg, resultlen);
    if (result == NULL)
	return NULL;

    for (p = result; *p; )
    {
	if (STRNCMP(p, "<sfile>", 7) != 0)
	    ++p;
	else
	{
	    
	    repl = eval_vars(p, result, &srclen, NULL, &errormsg, NULL, TRUE);
	    if (errormsg != NULL)
	    {
		if (*errormsg)
		    emsg(errormsg);
		vim_free(result);
		return NULL;
	    }
	    if (repl == NULL)		
	    {
		p += srclen;
		continue;
	    }
	    repllen = STRLEN(repl);
	    resultlen += repllen - srclen;
	    newres = alloc(resultlen + 1);
	    if (newres == NULL)
	    {
		vim_free(repl);
		vim_free(result);
		return NULL;
	    }
	    len = p - result;
	    mch_memmove(newres, result, len);
	    STRCPY(newres + len, repl);
	    len += repllen;
	    STRCPY(newres + len, p + srclen);
	    vim_free(repl);
	    vim_free(result);
	    result = newres;
	    p = newres + len;		
	}
    }

    return result;
}

#if defined(FEAT_GUI_DIALOG) || defined(FEAT_CON_DIALOG) || defined(PROTO)

    void
dialog_msg(char_u *buff, char *format, char_u *fname)
{
    if (fname == NULL)
	fname = (char_u *)_("Untitled");
    vim_snprintf((char *)buff, DIALOG_MSG_SIZE, format, fname);
}
#endif


    static void
ex_behave(exarg_T *eap)
{
    if (STRCMP(eap->arg, "mswin") == 0)
    {
	set_option_value_give_err((char_u *)"selection",
						 0L, (char_u *)"exclusive", 0);
	set_option_value_give_err((char_u *)"selectmode",
						 0L, (char_u *)"mouse,key", 0);
	set_option_value_give_err((char_u *)"mousemodel",
						     0L, (char_u *)"popup", 0);
	set_option_value_give_err((char_u *)"keymodel",
					  0L, (char_u *)"startsel,stopsel", 0);
    }
    else if (STRCMP(eap->arg, "xterm") == 0)
    {
	set_option_value_give_err((char_u *)"selection",
						 0L, (char_u *)"inclusive", 0);
	set_option_value_give_err((char_u *)"selectmode", 0L, (char_u *)"", 0);
	set_option_value_give_err((char_u *)"mousemodel",
						    0L, (char_u *)"extend", 0);
	set_option_value_give_err((char_u *)"keymodel", 0L, (char_u *)"", 0);
    }
    else
	semsg(_(e_invalid_argument_str), eap->arg);
}

static int filetype_detect = FALSE;
static int filetype_plugin = FALSE;
static int filetype_indent = FALSE;


    static void
ex_filetype(exarg_T *eap)
{
    char_u	*arg = eap->arg;
    int		plugin = FALSE;
    int		indent = FALSE;

    if (*eap->arg == NUL)
    {
	
	smsg("filetype detection:%s  plugin:%s  indent:%s",
		filetype_detect ? "ON" : "OFF",
		filetype_plugin ? (filetype_detect ? "ON" : "(on)") : "OFF",
		filetype_indent ? (filetype_detect ? "ON" : "(on)") : "OFF");
	return;
    }

    
    for (;;)
    {
	if (STRNCMP(arg, "plugin", 6) == 0)
	{
	    plugin = TRUE;
	    arg = skipwhite(arg + 6);
	    continue;
	}
	if (STRNCMP(arg, "indent", 6) == 0)
	{
	    indent = TRUE;
	    arg = skipwhite(arg + 6);
	    continue;
	}
	break;
    }
    if (STRCMP(arg, "on") == 0 || STRCMP(arg, "detect") == 0)
    {
	if (*arg == 'o' || !filetype_detect)
	{
	    source_runtime((char_u *)FILETYPE_FILE, DIP_ALL);
	    filetype_detect = TRUE;
	    if (plugin)
	    {
		source_runtime((char_u *)FTPLUGIN_FILE, DIP_ALL);
		filetype_plugin = TRUE;
	    }
	    if (indent)
	    {
		source_runtime((char_u *)INDENT_FILE, DIP_ALL);
		filetype_indent = TRUE;
	    }
	}
	if (*arg == 'd')
	{
	    (void)do_doautocmd((char_u *)"filetypedetect BufRead", TRUE, NULL);
	    do_modelines(0);
	}
    }
    else if (STRCMP(arg, "off") == 0)
    {
	if (plugin || indent)
	{
	    if (plugin)
	    {
		source_runtime((char_u *)FTPLUGOF_FILE, DIP_ALL);
		filetype_plugin = FALSE;
	    }
	    if (indent)
	    {
		source_runtime((char_u *)INDOFF_FILE, DIP_ALL);
		filetype_indent = FALSE;
	    }
	}
	else
	{
	    source_runtime((char_u *)FTOFF_FILE, DIP_ALL);
	    filetype_detect = FALSE;
	}
    }
    else
	semsg(_(e_invalid_argument_str), arg);
}


    static void
ex_setfiletype(exarg_T *eap)
{
    if (curbuf->b_did_filetype)
	return;

    char_u *arg = eap->arg;
    if (STRNCMP(arg, "FALLBACK ", 9) == 0)
	arg += 9;

    set_option_value_give_err((char_u *)"filetype", 0L, arg, OPT_LOCAL);
    if (arg != eap->arg)
	curbuf->b_did_filetype = FALSE;
}

    static void
ex_digraphs(exarg_T *eap UNUSED)
{
#ifdef FEAT_DIGRAPHS
    if (*eap->arg != NUL)
	putdigraph(eap->arg);
    else
	listdigraphs(eap->forceit);
#else
    emsg(_(e_no_digraphs_version));
#endif
}

#if defined(FEAT_SEARCH_EXTRA) || defined(PROTO)
    void
set_no_hlsearch(int flag)
{
    no_hlsearch = flag;
# ifdef FEAT_EVAL
    set_vim_var_nr(VV_HLSEARCH, !no_hlsearch && p_hls);
# endif
}


    static void
ex_nohlsearch(exarg_T *eap UNUSED)
{
    set_no_hlsearch(TRUE);
    redraw_all_later(UPD_SOME_VALID);
}
#endif

#ifdef FEAT_CRYPT

    static void
ex_X(exarg_T *eap UNUSED)
{
    crypt_check_current_method();
    (void)crypt_get_key(TRUE, TRUE);
}
#endif

#ifdef FEAT_FOLDING
    static void
ex_fold(exarg_T *eap)
{
    if (foldManualAllowed(TRUE))
	foldCreate(eap->line1, eap->line2);
}

    static void
ex_foldopen(exarg_T *eap)
{
    opFoldRange(eap->line1, eap->line2, eap->cmdidx == CMD_foldopen,
							 eap->forceit, FALSE);
}

    static void
ex_folddo(exarg_T *eap)
{
    linenr_T	lnum;

# ifdef FEAT_CLIPBOARD
    start_global_changes();
# endif

    
    for (lnum = eap->line1; lnum <= eap->line2; ++lnum)
	if (hasFolding(lnum, NULL, NULL) == (eap->cmdidx == CMD_folddoclosed))
	    ml_setmarked(lnum);

    
    global_exe(eap->arg);
    ml_clearmarked();	   
# ifdef FEAT_CLIPBOARD
    end_global_changes();
# endif
}
#endif

#if defined(FEAT_QUICKFIX) || defined(PROTO)

    int
is_loclist_cmd(int cmdidx)
{
    if (cmdidx < 0 || cmdidx >= CMD_SIZE)
	return FALSE;
    return cmdnames[cmdidx].cmd_name[0] == 'l';
}
#endif

    int
get_pressedreturn(void)
{
    return ex_pressedreturn;
}

    void
set_pressedreturn(int val)
{
     ex_pressedreturn = val;
}
