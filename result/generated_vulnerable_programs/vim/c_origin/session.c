



#include "vim.h"

#if defined(FEAT_SESSION) || defined(PROTO)

static int did_lcd;	


    static int
ses_put_fname(FILE *fd, char_u *name, unsigned *flagp)
{
    char_u	*sname;
    char_u	*p;
    int		retval = OK;

    sname = home_replace_save(NULL, name);
    if (sname == NULL)
	return FAIL;

    if (*flagp & SSOP_SLASH)
    {
	
	for (p = sname; *p != NUL; MB_PTR_ADV(p))
	    if (*p == '\\')
		*p = '/';
    }

    
    p = vim_strsave_fnameescape(sname, VSE_NONE);
    vim_free(sname);
    if (p == NULL)
	return FAIL;

    
    if (fputs((char *)p, fd) < 0)
	retval = FAIL;

    vim_free(p);
    return retval;
}


    static int
ses_fname(FILE *fd, buf_T *buf, unsigned *flagp, int add_eol)
{
    char_u	*name;

    
    
    
    
    
    if (buf->b_sfname != NULL
	    && flagp == &ssop_flags
	    && (ssop_flags & (SSOP_CURDIR | SSOP_SESDIR))
#ifdef FEAT_AUTOCHDIR
	    && !p_acd
#endif
	    && !did_lcd)
	name = buf->b_sfname;
    else
	name = buf->b_ffname;
    if (ses_put_fname(fd, name, flagp) == FAIL
	    || (add_eol && put_eol(fd) == FAIL))
	return FAIL;
    return OK;
}


    static int
ses_arglist(
    FILE	*fd,
    char	*cmd,
    garray_T	*gap,
    int		fullname,	
    unsigned	*flagp)
{
    int		i;
    char_u	*buf = NULL;
    char_u	*s;

    if (fputs(cmd, fd) < 0 || put_eol(fd) == FAIL)
	return FAIL;
    if (put_line(fd, "%argdel") == FAIL)
	return FAIL;
    for (i = 0; i < gap->ga_len; ++i)
    {
	
	s = alist_name(&((aentry_T *)gap->ga_data)[i]);
	if (s != NULL)
	{
	    if (fullname)
	    {
		buf = alloc(MAXPATHL);
		if (buf != NULL)
		{
		    (void)vim_FullName(s, buf, MAXPATHL, FALSE);
		    s = buf;
		}
	    }
	    if (fputs("$argadd ", fd) < 0
		    || ses_put_fname(fd, s, flagp) == FAIL
		    || put_eol(fd) == FAIL)
	    {
		vim_free(buf);
		return FAIL;
	    }
	    vim_free(buf);
	}
    }
    return OK;
}


    static int
ses_do_win(win_T *wp)
{
#ifdef FEAT_TERMINAL
    if (bt_terminal(wp->w_buffer))
	return !term_is_finished(wp->w_buffer)
	    && (ssop_flags & SSOP_TERMINAL)
	    && term_should_restore(wp->w_buffer);
#endif
    if (wp->w_buffer->b_fname == NULL
	    
	    || bt_nofilename(wp->w_buffer))
	return (ssop_flags & SSOP_BLANK);
    if (bt_help(wp->w_buffer))
	return (ssop_flags & SSOP_HELP);
    return TRUE;
}


    static int
ses_do_frame(frame_T *fr)
{
    frame_T	*frc;

    if (fr->fr_layout == FR_LEAF)
	return ses_do_win(fr->fr_win);
    FOR_ALL_FRAMES(frc, fr->fr_child)
	if (ses_do_frame(frc))
	    return TRUE;
    return FALSE;
}


    static frame_T *
ses_skipframe(frame_T *fr)
{
    frame_T	*frc;

    FOR_ALL_FRAMES(frc, fr)
	if (ses_do_frame(frc))
	    break;
    return frc;
}


    static int
ses_win_rec(FILE *fd, frame_T *fr)
{
    frame_T	*frc;
    int		count = 0;

    if (fr->fr_layout == FR_LEAF)
	return OK;

    
    
    frc = ses_skipframe(fr->fr_child);
    if (frc != NULL)
	while ((frc = ses_skipframe(frc->fr_next)) != NULL)
	{
	    
	    
	    if (put_line(fd, "wincmd _ | wincmd |") == FAIL
		    || put_line(fd, fr->fr_layout == FR_COL
			? "split" : "vsplit") == FAIL)
		return FAIL;
	    ++count;
	}

    
    if (count > 0 && (fprintf(fd, fr->fr_layout == FR_COL
		    ? "%dwincmd k" : "%dwincmd h", count) < 0
		|| put_eol(fd) == FAIL))
	return FAIL;

    
    
    frc = ses_skipframe(fr->fr_child);
    while (frc != NULL)
    {
	ses_win_rec(fd, frc);
	frc = ses_skipframe(frc->fr_next);
	
	if (frc != NULL && put_line(fd, "wincmd w") == FAIL)
	    return FAIL;
    }

    return OK;
}

    static int
ses_winsizes(
    FILE	*fd,
    int		restore_size,
    win_T	*tab_firstwin)
{
    int		n = 0;
    win_T	*wp;

    if (restore_size && (ssop_flags & SSOP_WINSIZE))
    {
	for (wp = tab_firstwin; wp != NULL; wp = wp->w_next)
	{
	    if (!ses_do_win(wp))
		continue;
	    ++n;

	    
	    if (wp->w_height + wp->w_status_height < topframe->fr_height
		    && (fprintf(fd,
			  "exe '%dresize ' . ((&lines * %ld + %ld) / %ld)",
			    n, (int)wp->w_height, Rows / 2, Rows) < 0
						  || put_eol(fd) == FAIL))
		return FAIL;

	    
	    if (wp->w_width < Columns && (fprintf(fd,
		   "exe 'vert %dresize ' . ((&columns * %ld + %ld) / %ld)",
			    n, (int)wp->w_width, Columns / 2, Columns) < 0
						  || put_eol(fd) == FAIL))
		return FAIL;
	}
    }
    else
    {
	
	if (put_line(fd, "wincmd =") == FAIL)
	    return FAIL;
    }
    return OK;
}

    static int
put_view_curpos(FILE *fd, win_T *wp, char *spaces)
{
    int r;

    if (wp->w_curswant == MAXCOL)
	r = fprintf(fd, "%snormal! $", spaces);
    else
	r = fprintf(fd, "%snormal! 0%d|", spaces, wp->w_virtcol + 1);
    return r < 0 || put_eol(fd) == FAIL ? FALSE : OK;
}


    static int
put_view(
    FILE	*fd,
    win_T	*wp,
    int		add_edit,	     
    unsigned	*flagp,		     
    int		current_arg_idx,     
				     
    hashtab_T *terminal_bufs UNUSED) 
				     
{
    win_T	*save_curwin;
    int		f;
    int		do_cursor;
    int		did_next = FALSE;

    
    
    do_cursor = (flagp == &ssop_flags || *flagp & SSOP_CURSOR);

    
    if (wp->w_alist == &global_alist)
    {
	if (put_line(fd, "argglobal") == FAIL)
	    return FAIL;
    }
    else
    {
	if (ses_arglist(fd, "arglocal", &wp->w_alist->al_ga,
			flagp == &vop_flags
			|| !(*flagp & SSOP_CURDIR)
			|| wp->w_localdir != NULL, flagp) == FAIL)
	    return FAIL;
    }

    
    
    if (wp->w_arg_idx != current_arg_idx && wp->w_arg_idx < WARGCOUNT(wp)
						      && flagp == &ssop_flags)
    {
	if (fprintf(fd, "%ldargu", (int)wp->w_arg_idx + 1) < 0
		|| put_eol(fd) == FAIL)
	    return FAIL;
	did_next = TRUE;
    }

    
    if (add_edit && (!did_next || wp->w_arg_idx_invalid))
    {
	if (bt_help(wp->w_buffer))
	{
	    char *curtag = "";

	    
	    
	    
	    
	    if (0 < wp->w_tagstackidx
		    && wp->w_tagstackidx <= wp->w_tagstacklen)
		curtag = (char *)wp->w_tagstack[wp->w_tagstackidx - 1].tagname;

	    if (put_line(fd, "enew | setl bt=help") == FAIL
		    || fprintf(fd, "help %s", curtag) < 0
		    || put_eol(fd) == FAIL)
		return FAIL;
	}
# ifdef FEAT_TERMINAL
	else if (bt_terminal(wp->w_buffer))
	{
	    if (term_write_session(fd, wp, terminal_bufs) == FAIL)
		return FAIL;
	}
# endif
	
	else if (wp->w_buffer->b_ffname != NULL
		&& !bt_nofilename(wp->w_buffer))
	{
	    
	    
	    
	    
	    
	    
	    if (fputs("if bufexists(fnamemodify(\"", fd) < 0
		    || ses_fname(fd, wp->w_buffer, flagp, FALSE) == FAIL
		    || fputs("\", \":p\")) | buffer ", fd) < 0
		    || ses_fname(fd, wp->w_buffer, flagp, FALSE) == FAIL
		    || fputs(" | else | edit ", fd) < 0
		    || ses_fname(fd, wp->w_buffer, flagp, FALSE) == FAIL
		    || fputs(" | endif", fd) < 0
		    || put_eol(fd) == FAIL)
		return FAIL;
	}
	else
	{
	    
	    if (put_line(fd, "enew") == FAIL)
		return FAIL;
#ifdef FEAT_QUICKFIX
	    if (wp->w_buffer->b_ffname != NULL)
	    {
		
		if (fputs("file ", fd) < 0
			|| ses_fname(fd, wp->w_buffer, flagp, TRUE) == FAIL)
		    return FAIL;
	    }
#endif
	    do_cursor = FALSE;
	}
    }

    if (wp->w_alt_fnum)
    {
	buf_T *alt = buflist_findnr(wp->w_alt_fnum);

	
	if ((flagp == &ssop_flags)
		&& alt != NULL
		&& alt->b_fname != NULL
		&& *alt->b_fname != NUL
		&& alt->b_p_bl
		&& (fputs("balt ", fd) < 0
		|| ses_fname(fd, alt, flagp, TRUE) == FAIL))
	    return FAIL;
    }

    
    if ((*flagp & (SSOP_OPTIONS | SSOP_LOCALOPTIONS))
					 && makemap(fd, wp->w_buffer) == FAIL)
	return FAIL;

    
    
    
    
    
    save_curwin = curwin;
    curwin = wp;
    curbuf = curwin->w_buffer;
    if (*flagp & (SSOP_OPTIONS | SSOP_LOCALOPTIONS))
	f = makeset(fd, OPT_LOCAL,
			     flagp == &vop_flags || !(*flagp & SSOP_OPTIONS));
#ifdef FEAT_FOLDING
    else if (*flagp & SSOP_FOLDS)
	f = makefoldset(fd);
#endif
    else
	f = OK;
    curwin = save_curwin;
    curbuf = curwin->w_buffer;
    if (f == FAIL)
	return FAIL;

#ifdef FEAT_FOLDING
    
    if ((*flagp & SSOP_FOLDS)
	    && wp->w_buffer->b_ffname != NULL
	    && (bt_normal(wp->w_buffer) || bt_help(wp->w_buffer)))
    {
	if (put_folds(fd, wp) == FAIL)
	    return FAIL;
    }
#endif

    
    if (do_cursor)
    {

	
	
	if (wp->w_height <= 0)
	{
	    if (fprintf(fd, "let s:l = %ld", (int)wp->w_cursor.lnum) < 0)
		return FAIL;
	}
	else if (fprintf(fd,
		    "let s:l = %ld - ((%ld * winheight(0) + %ld) / %ld)",
		    (int)wp->w_cursor.lnum,
		    (int)(wp->w_cursor.lnum - wp->w_topline),
		    (int)wp->w_height / 2, (int)wp->w_height) < 0)
	    return FAIL;

	if (put_eol(fd) == FAIL
		|| put_line(fd, "if s:l < 1 | let s:l = 1 | endif") == FAIL
		|| put_line(fd, "keepjumps exe s:l") == FAIL
		|| put_line(fd, "normal! zt") == FAIL
		|| fprintf(fd, "keepjumps %ld", (int)wp->w_cursor.lnum) < 0
		|| put_eol(fd) == FAIL)
	    return FAIL;
	
	if (wp->w_cursor.col == 0)
	{
	    if (put_line(fd, "normal! 0") == FAIL)
		return FAIL;
	}
	else
	{
	    if (!wp->w_p_wrap && wp->w_leftcol > 0 && wp->w_width > 0)
	    {
		if (fprintf(fd,
			  "let s:c = %ld - ((%ld * winwidth(0) + %ld) / %ld)",
			    (int)wp->w_virtcol + 1,
			    (int)(wp->w_virtcol - wp->w_leftcol),
			    (int)wp->w_width / 2, (int)wp->w_width) < 0
			|| put_eol(fd) == FAIL
			|| put_line(fd, "if s:c > 0") == FAIL
			|| fprintf(fd,
			    "  exe 'normal! ' . s:c . '|zs' . %ld . '|'",
			    (int)wp->w_virtcol + 1) < 0
			|| put_eol(fd) == FAIL
			|| put_line(fd, "else") == FAIL
			|| put_view_curpos(fd, wp, "  ") == FAIL
			|| put_line(fd, "endif") == FAIL)
		    return FAIL;
	    }
	    else if (put_view_curpos(fd, wp, "") == FAIL)
		return FAIL;
	}
    }

    
    
    if (wp->w_localdir != NULL
			    && (flagp != &vop_flags || (*flagp & SSOP_CURDIR)))
    {
	if (fputs("lcd ", fd) < 0
		|| ses_put_fname(fd, wp->w_localdir, flagp) == FAIL
		|| put_eol(fd) == FAIL)
	    return FAIL;
	did_lcd = TRUE;
    }

    return OK;
}

#ifdef FEAT_EVAL
    static int
store_session_globals(FILE *fd)
{
    hashtab_T	*gvht = get_globvar_ht();
    hashitem_T	*hi;
    dictitem_T	*this_var;
    int		todo;
    char_u	*p, *t;

    todo = (int)gvht->ht_used;
    FOR_ALL_HASHTAB_ITEMS(gvht, hi, todo)
    {
	if (!HASHITEM_EMPTY(hi))
	{
	    --todo;
	    this_var = HI2DI(hi);
	    if ((this_var->di_tv.v_type == VAR_NUMBER
			|| this_var->di_tv.v_type == VAR_STRING)
		    && var_flavour(this_var->di_key) == VAR_FLAVOUR_SESSION)
	    {
		
		
		p = vim_strsave_escaped(tv_get_string(&this_var->di_tv),
							(char_u *)"\\\"\n\r");
		if (p == NULL)	    
		    break;
		for (t = p; *t != NUL; ++t)
		    if (*t == '\n')
			*t = 'n';
		    else if (*t == '\r')
			*t = 'r';
		if ((fprintf(fd, "let %s = %c%s%c",
				this_var->di_key,
				(this_var->di_tv.v_type == VAR_STRING) ? '"'
									: ' ',
				p,
				(this_var->di_tv.v_type == VAR_STRING) ? '"'
								   : ' ') < 0)
			|| put_eol(fd) == FAIL)
		{
		    vim_free(p);
		    return FAIL;
		}
		vim_free(p);
	    }
	    else if (this_var->di_tv.v_type == VAR_FLOAT
		    && var_flavour(this_var->di_key) == VAR_FLAVOUR_SESSION)
	    {
		float_T f = this_var->di_tv.vval.v_float;
		int sign = ' ';

		if (f < 0)
		{
		    f = -f;
		    sign = '-';
		}
		if ((fprintf(fd, "let %s = %c%f",
					       this_var->di_key, sign, f) < 0)
			|| put_eol(fd) == FAIL)
		    return FAIL;
	    }
	}
    }
    return OK;
}
#endif


    static int
makeopens(
    FILE	*fd,
    char_u	*dirnow)	
{
    buf_T	*buf;
    int		only_save_windows = TRUE;
    int		nr;
    int		restore_size = TRUE;
    int		restore_height_width = FALSE;
    win_T	*wp;
    char_u	*sname;
    win_T	*edited_win = NULL;
    int		restore_stal = FALSE;
    win_T	*tab_firstwin;
    frame_T	*tab_topframe;
    int		cur_arg_idx = 0;
    int		next_arg_idx = 0;
    int		ret = FAIL;
    tabpage_T	*tp;
#ifdef FEAT_TERMINAL
    hashtab_T	terminal_bufs;

    hash_init(&terminal_bufs);
#endif

    if (ssop_flags & SSOP_BUFFERS)
	only_save_windows = FALSE;		

    
    
#ifdef FEAT_EVAL
    if (put_line(fd, "let v:this_session=expand(\"<sfile>:p\")") == FAIL)
	goto fail;
    if (ssop_flags & SSOP_GLOBALS)
	if (store_session_globals(fd) == FAIL)
	    goto fail;
#endif

    
    if (put_line(fd, "silent only") == FAIL)
	goto fail;
    if ((ssop_flags & SSOP_TABPAGES)
	    && put_line(fd, "silent tabonly") == FAIL)
	goto fail;

    
    if (ssop_flags & SSOP_SESDIR)
    {
	if (put_line(fd, "exe \"cd \" . escape(expand(\"<sfile>:p:h\"), ' ')")
								      == FAIL)
	    goto fail;
    }
    else if (ssop_flags & SSOP_CURDIR)
    {
	sname = home_replace_save(NULL, globaldir != NULL ? globaldir : dirnow);
	if (sname == NULL
		|| fputs("cd ", fd) < 0
		|| ses_put_fname(fd, sname, &ssop_flags) == FAIL
		|| put_eol(fd) == FAIL)
	{
	    vim_free(sname);
	    goto fail;
	}
	vim_free(sname);
    }

    
    
    if (put_line(fd, "if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''") == FAIL)
	goto fail;
    if (put_line(fd, "  let s:wipebuf = bufnr('%')") == FAIL)
	goto fail;
    if (put_line(fd, "endif") == FAIL)
	goto fail;

    
    if ((ssop_flags & SSOP_OPTIONS) == 0
	    && put_line(fd, "let s:shortmess_save = &shortmess") == FAIL)
	goto fail;

    
    if (put_line(fd, "if &shortmess =~ 'A'") == FAIL
	    || put_line(fd, "  set shortmess=aoOA") == FAIL
	    || put_line(fd, "else") == FAIL
	    || put_line(fd, "  set shortmess=aoO") == FAIL
	    || put_line(fd, "endif") == FAIL)
	goto fail;

    
    
    
    
    FOR_ALL_BUFFERS(buf)
    {
	if (!(only_save_windows && buf->b_nwindows == 0)
		&& !(buf->b_help && !(ssop_flags & SSOP_HELP))
		
		
		&& !bt_terminal(buf)
		&& buf->b_fname != NULL
		&& buf->b_p_bl)
	{
	    if (fprintf(fd, "badd +%ld ", buf->b_wininfo == NULL ? 1L
					   : buf->b_wininfo->wi_fpos.lnum) < 0
		    || ses_fname(fd, buf, &ssop_flags, TRUE) == FAIL)
		goto fail;
	}
    }

    
    if (ses_arglist(fd, "argglobal", &global_alist.al_ga,
			    !(ssop_flags & SSOP_CURDIR), &ssop_flags) == FAIL)
	goto fail;

    if (ssop_flags & SSOP_RESIZE)
    {
	
	if (fprintf(fd, "set lines=%ld columns=%ld" , Rows, Columns) < 0
		|| put_eol(fd) == FAIL)
	    goto fail;
    }

#ifdef FEAT_GUI
    if (gui.in_use && (ssop_flags & SSOP_WINPOS))
    {
	int	x, y;

	if (gui_mch_get_winpos(&x, &y) == OK)
	{
	    
	    if (fprintf(fd, "winpos %d %d", x, y) < 0 || put_eol(fd) == FAIL)
		goto fail;
	}
    }
#endif

    
    
    
    
    if (p_stal == 1 && first_tabpage->tp_next != NULL)
    {
	if (put_line(fd, "set stal=2") == FAIL)
	    goto fail;
	restore_stal = TRUE;
    }

    if ((ssop_flags & SSOP_TABPAGES))
    {
	
	
	
	FOR_ALL_TABPAGES(tp)
	    
	    
	    
	    if (tp->tp_next != NULL
		  && put_line(fd, "tabnew +setlocal\\ bufhidden=wipe") == FAIL)
		goto fail;
	if (first_tabpage->tp_next != NULL && put_line(fd, "tabrewind") == FAIL)
	    goto fail;
    }

    
    
    FOR_ALL_TABPAGES(tp)
    {
	int	need_tabnext = FALSE;
	int	cnr = 1;

	
	
	
	
	if ((ssop_flags & SSOP_TABPAGES))
	{
	    if (tp == curtab)
	    {
		tab_firstwin = firstwin;
		tab_topframe = topframe;
	    }
	    else
	    {
		tab_firstwin = tp->tp_firstwin;
		tab_topframe = tp->tp_topframe;
	    }
	    if (tp != first_tabpage)
		need_tabnext = TRUE;
	}
	else
	{
	    tp = curtab;
	    tab_firstwin = firstwin;
	    tab_topframe = topframe;
	}

	
	
	
	for (wp = tab_firstwin; wp != NULL; wp = wp->w_next)
	{
	    if (ses_do_win(wp)
		    && wp->w_buffer->b_ffname != NULL
		    && !bt_help(wp->w_buffer)
		    && !bt_nofilename(wp->w_buffer))
	    {
		if (need_tabnext && put_line(fd, "tabnext") == FAIL)
		    goto fail;
		need_tabnext = FALSE;

		if (fputs("edit ", fd) < 0
			      || ses_fname(fd, wp->w_buffer, &ssop_flags, TRUE)
								       == FAIL)
		    goto fail;
		if (!wp->w_arg_idx_invalid)
		    edited_win = wp;
		break;
	    }
	}

	
	if (need_tabnext && put_line(fd, "tabnext") == FAIL)
	    goto fail;

	if (tab_topframe->fr_layout != FR_LEAF)
	{
	    
	    if (put_line(fd, "let s:save_splitbelow = &splitbelow") == FAIL
		    || put_line(fd, "let s:save_splitright = &splitright")
								       == FAIL)
		goto fail;
	    if (put_line(fd, "set splitbelow splitright") == FAIL)
		goto fail;
	    if (ses_win_rec(fd, tab_topframe) == FAIL)
		goto fail;
	    if (put_line(fd, "let &splitbelow = s:save_splitbelow") == FAIL
		    || put_line(fd, "let &splitright = s:save_splitright")
								       == FAIL)
		goto fail;
	}

	
	
	nr = 0;
	for (wp = tab_firstwin; wp != NULL; wp = W_NEXT(wp))
	{
	    if (ses_do_win(wp))
		++nr;
	    else
		restore_size = FALSE;
	    if (curwin == wp)
		cnr = nr;
	}

	if (tab_firstwin->w_next != NULL)
	{
	    
	    if (put_line(fd, "wincmd t") == FAIL)
		goto fail;

	    
	    
	    
	    
	    
	    
	    
	    if (put_line(fd, "let s:save_winminheight = &winminheight") == FAIL
		    || put_line(fd, "let s:save_winminwidth = &winminwidth")
								       == FAIL)
		goto fail;
	    if (put_line(fd, "set winminheight=0") == FAIL
		    || put_line(fd, "set winheight=1") == FAIL
		    || put_line(fd, "set winminwidth=0") == FAIL
		    || put_line(fd, "set winwidth=1") == FAIL)
		goto fail;
	    restore_height_width = TRUE;
	}
	if (nr > 1 && ses_winsizes(fd, restore_size, tab_firstwin) == FAIL)
	    goto fail;

	
	
	
	if ((ssop_flags & SSOP_CURDIR) && tp->tp_localdir != NULL)
	{
	    if (fputs("tcd ", fd) < 0
		     || ses_put_fname(fd, tp->tp_localdir, &ssop_flags) == FAIL
		     || put_eol(fd) == FAIL)
		goto fail;
	    did_lcd = TRUE;
	}

	
	for (wp = tab_firstwin; wp != NULL; wp = wp->w_next)
	{
	    if (!ses_do_win(wp))
		continue;
	    if (put_view(fd, wp, wp != edited_win, &ssop_flags, cur_arg_idx,
#ifdef FEAT_TERMINAL
							 &terminal_bufs
#else
							 NULL
#endif
		 ) == FAIL)
		goto fail;
	    if (nr > 1 && put_line(fd, "wincmd w") == FAIL)
		goto fail;
	    next_arg_idx = wp->w_arg_idx;
	}

	
	
	
	cur_arg_idx = next_arg_idx;

	
	if (cnr > 1 && (fprintf(fd, "%dwincmd w", cnr) < 0
						      || put_eol(fd) == FAIL))
	    goto fail;

	
	
	if (nr > 1 && ses_winsizes(fd, restore_size, tab_firstwin) == FAIL)
	    goto fail;

	
	
	if (!(ssop_flags & SSOP_TABPAGES))
	    break;
    }

    if (ssop_flags & SSOP_TABPAGES)
    {
	if (fprintf(fd, "tabnext %d", tabpage_index(curtab)) < 0
		|| put_eol(fd) == FAIL)
	    goto fail;
    }
    if (restore_stal && put_line(fd, "set stal=1") == FAIL)
	goto fail;

    
    if (put_line(fd, "if exists('s:wipebuf') && len(win_findbuf(s:wipebuf)) == 0")
								       == FAIL)
	goto fail;
    if (put_line(fd, "  silent exe 'bwipe ' . s:wipebuf") == FAIL)
	goto fail;
    if (put_line(fd, "endif") == FAIL)
	goto fail;
    if (put_line(fd, "unlet! s:wipebuf") == FAIL)
	goto fail;

    
    if (fprintf(fd, "set winheight=%ld winwidth=%ld",
			       p_wh, p_wiw) < 0 || put_eol(fd) == FAIL)
	goto fail;

    
    if (ssop_flags & SSOP_OPTIONS)
    {
	if (fprintf(fd, "set shortmess=%s", p_shm) < 0 || put_eol(fd) == FAIL)
	    goto fail;
    }
    else
    {
	if (put_line(fd, "let &shortmess = s:shortmess_save") == FAIL)
	    goto fail;
    }

    if (restore_height_width)
    {
	
	if (put_line(fd, "let &winminheight = s:save_winminheight") == FAIL
	      || put_line(fd, "let &winminwidth = s:save_winminwidth") == FAIL)
	    goto fail;
    }

    
    if (put_line(fd, "let s:sx = expand(\"<sfile>:p:r\").\"x.vim\"") == FAIL
	    || put_line(fd, "if filereadable(s:sx)") == FAIL
	    || put_line(fd, "  exe \"source \" . fnameescape(s:sx)") == FAIL
	    || put_line(fd, "endif") == FAIL)
	goto fail;

    ret = OK;
fail:
#ifdef FEAT_TERMINAL
    hash_clear_all(&terminal_bufs, 0);
#endif
    return ret;
}


    static char_u *
get_view_file(int c)
{
    int		len = 0;
    char_u	*p, *s;
    char_u	*retval;
    char_u	*sname;

    if (curbuf->b_ffname == NULL)
    {
	emsg(_(e_no_file_name));
	return NULL;
    }
    sname = home_replace_save(NULL, curbuf->b_ffname);
    if (sname == NULL)
	return NULL;

    
    
    
    
    
    for (p = sname; *p; ++p)
	if (*p == '=' || vim_ispathsep(*p))
	    ++len;
    retval = alloc(STRLEN(sname) + len + STRLEN(p_vdir) + 9);
    if (retval != NULL)
    {
	STRCPY(retval, p_vdir);
	add_pathsep(retval);
	s = retval + STRLEN(retval);
	for (p = sname; *p; ++p)
	{
	    if (*p == '=')
	    {
		*s++ = '=';
		*s++ = '=';
	    }
	    else if (vim_ispathsep(*p))
	    {
		*s++ = '=';
#if defined(BACKSLASH_IN_FILENAME) || defined(AMIGA) || defined(VMS)
		if (*p == ':')
		    *s++ = '-';
		else
#endif
		    *s++ = '+';
	    }
	    else
		*s++ = *p;
	}
	*s++ = '=';
	*s++ = c;
	STRCPY(s, ".vim");
    }

    vim_free(sname);
    return retval;
}


    void
ex_loadview(exarg_T *eap)
{
    char_u	*fname;

    fname = get_view_file(*eap->arg);
    if (fname == NULL)
	return;

    do_source(fname, FALSE, DOSO_NONE, NULL);
    vim_free(fname);
}

# if defined(FEAT_GUI_GNOME) \
	|| (defined(GUI_MAY_SPAWN) && defined(EXPERIMENTAL_GUI_CMD)) \
	|| defined(PROTO)

    int
write_session_file(char_u *filename)
{
    char_u	    *escaped_filename;
    char	    *mksession_cmdline;
    unsigned int    save_ssop_flags;
    int		    failed;

    
    
    escaped_filename = vim_strsave_escaped(filename, escape_chars);
    if (escaped_filename == NULL)
	return FALSE;
    mksession_cmdline = alloc(10 + (int)STRLEN(escaped_filename) + 1);
    if (mksession_cmdline == NULL)
    {
	vim_free(escaped_filename);
	return FALSE;
    }
    strcpy(mksession_cmdline, "mksession ");
    STRCAT(mksession_cmdline, escaped_filename);
    vim_free(escaped_filename);

    
    
    
    
    
    save_ssop_flags = ssop_flags;
    ssop_flags = (SSOP_BLANK|SSOP_CURDIR|SSOP_FOLDS|SSOP_GLOBALS
		  |SSOP_HELP|SSOP_OPTIONS|SSOP_WINSIZE|SSOP_TABPAGES);

    do_cmdline_cmd((char_u *)"let Save_VV_this_session = v:this_session");
    failed = (do_cmdline_cmd((char_u *)mksession_cmdline) == FAIL);
    do_cmdline_cmd((char_u *)"let v:this_session = Save_VV_this_session");
    do_unlet((char_u *)"Save_VV_this_session", TRUE);

    ssop_flags = save_ssop_flags;
    vim_free(mksession_cmdline);

    
    
    
    
    if (!failed)
    {
	FILE *fd;

	fd = open_exfile(filename, TRUE, APPENDBIN);

	failed = (fd == NULL
	       || put_line(fd, "let v:this_session = Save_VV_this_session")
									== FAIL
	       || put_line(fd, "unlet Save_VV_this_session") == FAIL);

	if (fd != NULL && fclose(fd) != 0)
	    failed = TRUE;

	if (failed)
	    mch_remove(filename);
    }

    return !failed;
}
# endif

#endif 

#if defined(FEAT_SESSION) && defined(USE_CRNL)
# define MKSESSION_NL
static int mksession_nl = FALSE;    
#endif


    void
ex_mkrc(exarg_T	*eap)
{
    FILE	*fd;
    int		failed = FALSE;
    char_u	*fname;
#ifdef FEAT_BROWSE
    char_u	*browseFile = NULL;
#endif
#ifdef FEAT_SESSION
    int		view_session = FALSE;
    int		using_vdir = FALSE;	
    char_u	*viewFile = NULL;
    unsigned	*flagp;
#endif

    if (eap->cmdidx == CMD_mksession || eap->cmdidx == CMD_mkview)
    {
#ifdef FEAT_SESSION
	view_session = TRUE;
#else
	ex_ni(eap);
	return;
#endif
    }

#ifdef FEAT_SESSION
    
    
    did_lcd = FALSE;

    
    if (eap->cmdidx == CMD_mkview
	    && (*eap->arg == NUL
		|| (vim_isdigit(*eap->arg) && eap->arg[1] == NUL)))
    {
	eap->forceit = TRUE;
	fname = get_view_file(*eap->arg);
	if (fname == NULL)
	    return;
	viewFile = fname;
	using_vdir = TRUE;
    }
    else
#endif
	if (*eap->arg != NUL)
	fname = eap->arg;
    else if (eap->cmdidx == CMD_mkvimrc)
	fname = (char_u *)VIMRC_FILE;
#ifdef FEAT_SESSION
    else if (eap->cmdidx == CMD_mksession)
	fname = (char_u *)SESSION_FILE;
#endif
    else
	fname = (char_u *)EXRC_FILE;

#ifdef FEAT_BROWSE
    if (cmdmod.cmod_flags & CMOD_BROWSE)
    {
	browseFile = do_browse(BROWSE_SAVE,
# ifdef FEAT_SESSION
		eap->cmdidx == CMD_mkview ? (char_u *)_("Save View") :
		eap->cmdidx == CMD_mksession ? (char_u *)_("Save Session") :
# endif
		(char_u *)_("Save Setup"),
		fname, (char_u *)"vim", NULL,
		(char_u *)_(BROWSE_FILTER_MACROS), NULL);
	if (browseFile == NULL)
	    goto theend;
	fname = browseFile;
	eap->forceit = TRUE;	
    }
#endif

#if defined(FEAT_SESSION) && defined(vim_mkdir)
    
    if (using_vdir && !mch_isdir(p_vdir))
	vim_mkdir_emsg(p_vdir, 0755);
#endif

    fd = open_exfile(fname, eap->forceit, WRITEBIN);
    if (fd != NULL)
    {
#ifdef FEAT_SESSION
	if (eap->cmdidx == CMD_mkview)
	    flagp = &vop_flags;
	else
	    flagp = &ssop_flags;
#endif

#ifdef MKSESSION_NL
	
	if (view_session && (*flagp & SSOP_UNIX))
	    mksession_nl = TRUE;
#endif

	
	if (eap->cmdidx == CMD_mkvimrc)
	    (void)put_line(fd, "version 6.0");

#ifdef FEAT_SESSION
	if (eap->cmdidx == CMD_mksession)
	{
	    if (put_line(fd, "let SessionLoad = 1") == FAIL)
		failed = TRUE;
	}

	if (eap->cmdidx != CMD_mkview)
#endif
	{
	    
	    
	    if (p_cp)
		(void)put_line(fd, "if !&cp | set cp | endif");
	    else
		(void)put_line(fd, "if &cp | set nocp | endif");
	}

#ifdef FEAT_SESSION
	if (!view_session
		|| (eap->cmdidx == CMD_mksession
		    && (*flagp & SSOP_OPTIONS)))
#endif
	{
	    int flags = OPT_GLOBAL;

#ifdef FEAT_SESSION
	    if (eap->cmdidx == CMD_mksession && (*flagp & SSOP_SKIP_RTP))
		flags |= OPT_SKIPRTP;
#endif
	    failed |= (makemap(fd, NULL) == FAIL
					 || makeset(fd, flags, FALSE) == FAIL);
	}

#ifdef FEAT_SESSION
	if (!failed && view_session)
	{
	    if (put_line(fd, "let s:so_save = &g:so | let s:siso_save = &g:siso | setg so=0 siso=0 | setl so=-1 siso=-1") == FAIL)
		failed = TRUE;
	    if (eap->cmdidx == CMD_mksession)
	    {
		char_u *dirnow;	 

		dirnow = alloc(MAXPATHL);
		if (dirnow == NULL)
		    failed = TRUE;
		else
		{
		    
		    if (mch_dirname(dirnow, MAXPATHL) == FAIL
					    || mch_chdir((char *)dirnow) != 0)
			*dirnow = NUL;
		    if (*dirnow != NUL && (ssop_flags & SSOP_SESDIR))
		    {
			if (vim_chdirfile(fname, NULL) == OK)
			    shorten_fnames(TRUE);
		    }
		    else if (*dirnow != NUL
			   && (ssop_flags & SSOP_CURDIR) && globaldir != NULL)
		    {
			if (mch_chdir((char *)globaldir) == 0)
			    shorten_fnames(TRUE);
		    }

		    failed |= (makeopens(fd, dirnow) == FAIL);

		    
		    if (*dirnow != NUL && ((ssop_flags & SSOP_SESDIR)
			|| ((ssop_flags & SSOP_CURDIR) && globaldir != NULL)))
		    {
			if (mch_chdir((char *)dirnow) != 0)
			    emsg(_(e_cannot_go_back_to_previous_directory));
			shorten_fnames(TRUE);
		    }
		    vim_free(dirnow);
		}
	    }
	    else
	    {
		failed |= (put_view(fd, curwin, !using_vdir, flagp, -1, NULL)
								      == FAIL);
	    }
	    if (put_line(fd, "let &g:so = s:so_save | let &g:siso = s:siso_save")
								      == FAIL)
		failed = TRUE;
#ifdef FEAT_SEARCH_EXTRA
	    if (no_hlsearch && put_line(fd, "nohlsearch") == FAIL)
		failed = TRUE;
#endif
	    if (put_line(fd, "doautoall SessionLoadPost") == FAIL)
		failed = TRUE;
	    if (eap->cmdidx == CMD_mksession)
	    {
		if (put_line(fd, "unlet SessionLoad") == FAIL)
		    failed = TRUE;
	    }
	}
#endif
	if (put_line(fd, "\" vim: set ft=vim :") == FAIL)
	    failed = TRUE;

	failed |= fclose(fd);

	if (failed)
	    emsg(_(e_error_while_writing));
#if defined(FEAT_SESSION)
	else if (eap->cmdidx == CMD_mksession)
	{
	    
	    char_u	*tbuf;

	    tbuf = alloc(MAXPATHL);
	    if (tbuf != NULL)
	    {
		if (vim_FullName(fname, tbuf, MAXPATHL, FALSE) == OK)
		    set_vim_var_string(VV_THIS_SESSION, tbuf, -1);
		vim_free(tbuf);
	    }
	}
#endif
#ifdef MKSESSION_NL
	mksession_nl = FALSE;
#endif
    }

#ifdef FEAT_BROWSE
theend:
    vim_free(browseFile);
#endif
#ifdef FEAT_SESSION
    vim_free(viewFile);
#endif

    apply_autocmds(EVENT_SESSIONWRITEPOST, NULL, NULL, FALSE, curbuf);
}

#if (defined(FEAT_VIMINFO) || defined(FEAT_SESSION)) || defined(PROTO)
    var_flavour_T
var_flavour(char_u *varname)
{
    char_u *p = varname;

    if (ASCII_ISUPPER(*p))
    {
	while (*(++p))
	    if (ASCII_ISLOWER(*p))
		return VAR_FLAVOUR_SESSION;
	return VAR_FLAVOUR_VIMINFO;
    }
    else
	return VAR_FLAVOUR_DEFAULT;
}
#endif


    int
put_eol(FILE *fd)
{
    if (
#ifdef USE_CRNL
	    (
# ifdef MKSESSION_NL
	     !mksession_nl &&
# endif
	     (putc('\r', fd) < 0)) ||
#endif
	    (putc('\n', fd) < 0))
	return FAIL;
    return OK;
}


    int
put_line(FILE *fd, char *s)
{
    if (fputs(s, fd) < 0 || put_eol(fd) == FAIL)
	return FAIL;
    return OK;
}
