



#include "vim.h"


typedef struct tag_pointers
{
    
    char_u	*tagname;	
    char_u	*tagname_end;	
    char_u	*fname;		
    char_u	*fname_end;	
    char_u	*command;	
    
    char_u	*command_end;	
    char_u	*tag_fname;	
				
#ifdef FEAT_EMACS_TAGS
    int		is_etag;	
#endif
    char_u	*tagkind;	
    char_u	*tagkind_end;	
    char_u	*user_data;	
    char_u	*user_data_end;	
    linenr_T	tagline;	
} tagptrs_T;


typedef enum
{
    TAGS_READ_SUCCESS = 1,
    TAGS_READ_EOF,
    TAGS_READ_IGNORE,
} tags_read_status_T;


typedef enum
{
    TS_START,		
    TS_LINEAR,		
    TS_BINARY,		
    TS_SKIP_BACK,	
    TS_STEP_FORWARD	
} tagsearch_state_T;	


typedef struct
{
    off_T	low_offset;	
				
    off_T	high_offset;	
				
    off_T	curr_offset;	
    off_T	curr_offset_used; 
    off_T	match_offset;	
    int	low_char;		
    int	high_char;		
} tagsearch_info_T;


typedef enum
{
    TAG_MATCH_SUCCESS = 1,
    TAG_MATCH_FAIL,
    TAG_MATCH_STOP,
    TAG_MATCH_NEXT
} tagmatch_status_T;


typedef struct
{
    int	matchoff;		
    int	match_re;		
    int	match_no_ic;		
    int	has_re;			
    int	sortic;			
    int	sort_error;		
} findtags_match_args_T;


#define MT_ST_CUR	0		
#define MT_GL_CUR	1		
#define MT_GL_OTH	2		
#define MT_ST_OTH	3		
#define MT_IC_OFF	4		
#define MT_RE_OFF	8		
#define MT_MASK		7		
#define MT_COUNT	16

static char	*mt_names[MT_COUNT/2] =
		{"FSC", "F C", "F  ", "FS ", " SC", "  C", "   ", " S "};

#define NOTAGFILE	99		
static char_u	*nofile_fname = NULL;	

static void taglen_advance(int l);

static int jumpto_tag(char_u *lbuf, int forceit, int keep_help);
#ifdef FEAT_EMACS_TAGS
static int parse_tag_line(char_u *lbuf, int is_etag, tagptrs_T *tagp);
#else
static int parse_tag_line(char_u *lbuf, tagptrs_T *tagp);
#endif
static int test_for_static(tagptrs_T *);
static int parse_match(char_u *lbuf, tagptrs_T *tagp);
static char_u *tag_full_fname(tagptrs_T *tagp);
static char_u *expand_tag_fname(char_u *fname, char_u *tag_fname, int expand);
#ifdef FEAT_EMACS_TAGS
static int test_for_current(int, char_u *, char_u *, char_u *, char_u *);
#else
static int test_for_current(char_u *, char_u *, char_u *, char_u *);
#endif
static int find_extra(char_u **pp);
static void print_tag_list(int new_tag, int use_tagstack, int num_matches, char_u **matches);
#if defined(FEAT_QUICKFIX) && defined(FEAT_EVAL)
static int add_llist_tags(char_u *tag, int num_matches, char_u **matches);
#endif

static char_u	*tagmatchname = NULL;	

#if defined(FEAT_QUICKFIX)

static taggy_T ptag_entry = {NULL, {{0, 0, 0}, 0}, 0, 0, NULL};
#endif

#ifdef FEAT_EVAL
static int  tfu_in_use = FALSE;	    
static callback_T tfu_cb;	    
#endif


#define TAG_SEP 0x02

#if defined(FEAT_EVAL) || defined(PROTO)

    char *
did_set_tagfunc(optset_T *args UNUSED)
{
#ifdef FEAT_EVAL
    free_callback(&tfu_cb);
    free_callback(&curbuf->b_tfu_cb);

    if (*curbuf->b_p_tfu == NUL)
	return NULL;

    if (option_set_callback_func(curbuf->b_p_tfu, &tfu_cb) == FAIL)
	return e_invalid_argument;

    copy_callback(&curbuf->b_tfu_cb, &tfu_cb);
#endif

    return NULL;
}
#endif

# if defined(EXITFREE) || defined(PROTO)
    void
free_tagfunc_option(void)
{
# ifdef FEAT_EVAL
    free_callback(&tfu_cb);
# endif
}
# endif

#if defined(FEAT_EVAL) || defined(PROTO)

    int
set_ref_in_tagfunc(int copyID UNUSED)
{
    int	abort = FALSE;

    abort = set_ref_in_callback(&tfu_cb, copyID);

    return abort;
}


    void
set_buflocal_tfu_callback(buf_T *buf UNUSED)
{
    free_callback(&buf->b_tfu_cb);
    if (tfu_cb.cb_name != NULL && *tfu_cb.cb_name != NUL)
	copy_callback(&buf->b_tfu_cb, &tfu_cb);
}
#endif


    int
do_tag(
    char_u	*tag,		
    int		type,
    int		count,
    int		forceit,	
    int		verbose)	
{
    taggy_T	*tagstack = curwin->w_tagstack;
    int		tagstackidx = curwin->w_tagstackidx;
    int		tagstacklen = curwin->w_tagstacklen;
    int		cur_match = 0;
    int		cur_fnum = curbuf->b_fnum;
    int		oldtagstackidx = tagstackidx;
    int		prevtagstackidx = tagstackidx;
    int		prev_num_matches;
    int		new_tag = FALSE;
    int		i;
    int		ic;
    int		no_regexp = FALSE;
    int		error_cur_match = 0;
    int		save_pos = FALSE;
    fmark_T	saved_fmark;
#ifdef FEAT_CSCOPE
    int		jumped_to_tag = FALSE;
#endif
    int		new_num_matches;
    char_u	**new_matches;
    int		use_tagstack;
    int		skip_msg = FALSE;
    char_u	*buf_ffname = curbuf->b_ffname;	    
						    
    int		use_tfu = 1;
    char_u	*tofree = NULL;

    
    static int		num_matches = 0;
    static int		max_num_matches = 0;  
    static char_u	**matches = NULL;
    static int		flags;

#ifdef EXITFREE
    if (type == DT_FREE)
    {
	
	FreeWild(num_matches, matches);
# ifdef FEAT_CSCOPE
	cs_free_tags();
# endif
	num_matches = 0;
	return FALSE;
    }
#endif

#ifdef FEAT_EVAL
    if (tfu_in_use)
    {
	emsg(_(e_cannot_modify_tag_stack_within_tagfunc));
	return FALSE;
    }
#endif

    if (postponed_split == 0 && !check_can_set_curbuf_forceit(forceit))
	return FALSE;

    if (type == DT_HELP)
    {
	type = DT_TAG;
	no_regexp = TRUE;
	use_tfu = 0;
    }

    prev_num_matches = num_matches;
    free_string_option(nofile_fname);
    nofile_fname = NULL;

    CLEAR_POS(&saved_fmark.mark);	
    saved_fmark.fnum = 0;

    
    if ((!p_tgst && *tag != NUL))
    {
	use_tagstack = FALSE;
	new_tag = TRUE;
#if defined(FEAT_QUICKFIX)
	if (g_do_tagpreview != 0)
	{
	    tagstack_clear_entry(&ptag_entry);
	    if ((ptag_entry.tagname = vim_strsave(tag)) == NULL)
		goto end_do_tag;
	}
#endif
    }
    else
    {
#if defined(FEAT_QUICKFIX)
	if (g_do_tagpreview != 0)
	    use_tagstack = FALSE;
	else
#endif
	    use_tagstack = TRUE;

	
	if (*tag != NUL
		&& (type == DT_TAG || type == DT_SELECT || type == DT_JUMP
#ifdef FEAT_QUICKFIX
		    || type == DT_LTAG
#endif
#ifdef FEAT_CSCOPE
		    || type == DT_CSCOPE
#endif
		    ))
	{
#if defined(FEAT_QUICKFIX)
	    if (g_do_tagpreview != 0)
	    {
		if (ptag_entry.tagname != NULL
			&& STRCMP(ptag_entry.tagname, tag) == 0)
		{
		    
		    
		    cur_match = ptag_entry.cur_match;
		    cur_fnum = ptag_entry.cur_fnum;
		}
		else
		{
		    tagstack_clear_entry(&ptag_entry);
		    if ((ptag_entry.tagname = vim_strsave(tag)) == NULL)
			goto end_do_tag;
		}
	    }
	    else
#endif
	    {
		
		while (tagstackidx < tagstacklen)
		    tagstack_clear_entry(&tagstack[--tagstacklen]);

		
		if (++tagstacklen > TAGSTACKSIZE)
		{
		    tagstacklen = TAGSTACKSIZE;
		    tagstack_clear_entry(&tagstack[0]);
		    for (i = 1; i < tagstacklen; ++i)
			tagstack[i - 1] = tagstack[i];
		    tagstack[--tagstackidx].user_data = NULL;
		}

		
		if ((tagstack[tagstackidx].tagname = vim_strsave(tag)) == NULL)
		{
		    curwin->w_tagstacklen = tagstacklen - 1;
		    goto end_do_tag;
		}
		curwin->w_tagstacklen = tagstacklen;

		save_pos = TRUE;	
	    }

	    new_tag = TRUE;
	}
	else
	{
	    if (
#if defined(FEAT_QUICKFIX)
		    g_do_tagpreview != 0 ? ptag_entry.tagname == NULL :
#endif
		    tagstacklen == 0)
	    {
		
		emsg(_(e_tag_stack_empty));
		goto end_do_tag;
	    }

	    if (type == DT_POP)		
	    {
#ifdef FEAT_FOLDING
		int	old_KeyTyped = KeyTyped;
#endif
		if ((tagstackidx -= count) < 0)
		{
		    emsg(_(e_at_bottom_of_tag_stack));
		    if (tagstackidx + count == 0)
		    {
			
			tagstackidx = 0;
			goto end_do_tag;
		    }
		    
		    
		    tagstackidx = 0;
		}
		else if (tagstackidx >= tagstacklen)    
		{
		    emsg(_(e_at_top_of_tag_stack));
		    goto end_do_tag;
		}

		
		
		saved_fmark = tagstack[tagstackidx].fmark;
		if (saved_fmark.fnum != curbuf->b_fnum)
		{
		    
		    if (buflist_getfile(saved_fmark.fnum, saved_fmark.mark.lnum,
					       GETF_SETMARK, forceit) == FAIL)
		    {
			tagstackidx = oldtagstackidx;  
			goto end_do_tag;
		    }
		    
		    
		    curwin->w_cursor.lnum = saved_fmark.mark.lnum;
		}
		else
		{
		    setpcmark();
		    curwin->w_cursor.lnum = saved_fmark.mark.lnum;
		}
		curwin->w_cursor.col = saved_fmark.mark.col;
		curwin->w_set_curswant = TRUE;
		check_cursor();
#ifdef FEAT_FOLDING
		if ((fdo_flags & FDO_TAG) && old_KeyTyped)
		    foldOpenCursor();
#endif

		
		FreeWild(num_matches, matches);
#ifdef FEAT_CSCOPE
		cs_free_tags();
#endif
		num_matches = 0;
		tag_freematch();
		goto end_do_tag;
	    }

	    if (type == DT_TAG
#if defined(FEAT_QUICKFIX)
		    || type == DT_LTAG
#endif
	       )
	    {
#if defined(FEAT_QUICKFIX)
		if (g_do_tagpreview != 0)
		{
		    cur_match = ptag_entry.cur_match;
		    cur_fnum = ptag_entry.cur_fnum;
		}
		else
#endif
		{
		    
		    save_pos = TRUE;	
		    if ((tagstackidx += count - 1) >= tagstacklen)
		    {
			
			tagstackidx = tagstacklen - 1;
			emsg(_(e_at_top_of_tag_stack));
			save_pos = FALSE;
		    }
		    else if (tagstackidx < 0)	
		    {
			emsg(_(e_at_bottom_of_tag_stack));
			tagstackidx = 0;
			goto end_do_tag;
		    }
		    cur_match = tagstack[tagstackidx].cur_match;
		    cur_fnum = tagstack[tagstackidx].cur_fnum;
		}
		new_tag = TRUE;
	    }
	    else				
	    {
		
		prevtagstackidx = tagstackidx;

#if defined(FEAT_QUICKFIX)
		if (g_do_tagpreview != 0)
		{
		    cur_match = ptag_entry.cur_match;
		    cur_fnum = ptag_entry.cur_fnum;
		}
		else
#endif
		{
		    if (--tagstackidx < 0)
			tagstackidx = 0;
		    cur_match = tagstack[tagstackidx].cur_match;
		    cur_fnum = tagstack[tagstackidx].cur_fnum;
		}
		switch (type)
		{
		    case DT_FIRST: cur_match = count - 1; break;
		    case DT_SELECT:
		    case DT_JUMP:
#ifdef FEAT_CSCOPE
		    case DT_CSCOPE:
#endif
		    case DT_LAST:  cur_match = MAXCOL - 1; break;
		    case DT_NEXT:  cur_match += count; break;
		    case DT_PREV:  cur_match -= count; break;
		}
		if (cur_match >= MAXCOL)
		    cur_match = MAXCOL - 1;
		else if (cur_match < 0)
		{
		    emsg(_(e_cannot_go_before_first_matching_tag));
		    skip_msg = TRUE;
		    cur_match = 0;
		    cur_fnum = curbuf->b_fnum;
		}
	    }
	}

#if defined(FEAT_QUICKFIX)
	if (g_do_tagpreview != 0)
	{
	    if (type != DT_SELECT && type != DT_JUMP)
	    {
		ptag_entry.cur_match = cur_match;
		ptag_entry.cur_fnum = cur_fnum;
	    }
	}
	else
#endif
	{
	    
	    saved_fmark = tagstack[tagstackidx].fmark;
	    if (save_pos)
	    {
		tagstack[tagstackidx].fmark.mark = curwin->w_cursor;
		tagstack[tagstackidx].fmark.fnum = curbuf->b_fnum;
	    }

	    
	    
	    
	    curwin->w_tagstackidx = tagstackidx;
	    if (type != DT_SELECT && type != DT_JUMP)
	    {
		curwin->w_tagstack[tagstackidx].cur_match = cur_match;
		curwin->w_tagstack[tagstackidx].cur_fnum = cur_fnum;
	    }
	}
    }

    
    
    
    if (cur_fnum != curbuf->b_fnum)
    {
	buf_T *buf = buflist_findnr(cur_fnum);

	if (buf != NULL)
	    buf_ffname = buf->b_ffname;
    }

    
    for (;;)
    {
	int	other_name;
	char_u	*name;

	
	if (use_tagstack)
	{
	    
	    name = vim_strsave(tagstack[tagstackidx].tagname);
	    vim_free(tofree);
	    tofree = name;
	}
#if defined(FEAT_QUICKFIX)
	else if (g_do_tagpreview != 0)
	    name = ptag_entry.tagname;
#endif
	else
	    name = tag;
	other_name = (tagmatchname == NULL || STRCMP(tagmatchname, name) != 0);
	if (new_tag
		|| (cur_match >= num_matches && max_num_matches != MAXCOL)
		|| other_name)
	{
	    if (other_name)
	    {
		vim_free(tagmatchname);
		tagmatchname = vim_strsave(name);
	    }

	    if (type == DT_SELECT || type == DT_JUMP
#if defined(FEAT_QUICKFIX)
		|| type == DT_LTAG
#endif
		)
		cur_match = MAXCOL - 1;
	    if (type == DT_TAG)
		max_num_matches = MAXCOL;
	    else
		max_num_matches = cur_match + 1;

	    
	    if (!no_regexp && *name == '/')
	    {
		flags = TAG_REGEXP;
		++name;
	    }
	    else
		flags = TAG_NOIC;

#ifdef FEAT_CSCOPE
	    if (type == DT_CSCOPE)
		flags = TAG_CSCOPE;
#endif
	    if (verbose)
		flags |= TAG_VERBOSE;

	    if (!use_tfu)
		flags |= TAG_NO_TAGFUNC;

	    if (find_tags(name, &new_num_matches, &new_matches, flags,
					    max_num_matches, buf_ffname) == OK
		    && new_num_matches < max_num_matches)
		max_num_matches = MAXCOL; 
					  

	    
	    
	    
	    if (tagstack != curwin->w_tagstack)
	    {
		emsg(_(e_window_unexpectedly_close_while_searching_for_tags));
		FreeWild(new_num_matches, new_matches);
		break;
	    }

	    
	    
	    
	    if (!new_tag && !other_name)
	    {
		int	    j, k;
		int	    idx = 0;
		tagptrs_T   tagp, tagp2;

		
		
		for (j = 0; j < num_matches; ++j)
		{
		    parse_match(matches[j], &tagp);
		    for (i = idx; i < new_num_matches; ++i)
		    {
			parse_match(new_matches[i], &tagp2);
			if (STRCMP(tagp.tagname, tagp2.tagname) == 0)
			{
			    char_u *p = new_matches[i];
			    for (k = i; k > idx; --k)
				new_matches[k] = new_matches[k - 1];
			    new_matches[idx++] = p;
			    break;
			}
		    }
		}
	    }
	    FreeWild(num_matches, matches);
	    num_matches = new_num_matches;
	    matches = new_matches;
	}

	if (num_matches <= 0)
	{
	    if (verbose)
		semsg(_(e_tag_not_found_str), name);
#if defined(FEAT_QUICKFIX)
	    g_do_tagpreview = 0;
#endif
	}
	else
	{
	    int ask_for_selection = FALSE;

#ifdef FEAT_CSCOPE
	    if (type == DT_CSCOPE && num_matches > 1)
	    {
		cs_print_tags();
		ask_for_selection = TRUE;
	    }
	    else
#endif
	    if (type == DT_TAG && *tag != NUL)
		
		
		cur_match = count > 0 ? count - 1 : 0;
	    else if (type == DT_SELECT || (type == DT_JUMP && num_matches > 1))
	    {
		print_tag_list(new_tag, use_tagstack, num_matches, matches);
		ask_for_selection = TRUE;
	    }
#if defined(FEAT_QUICKFIX) && defined(FEAT_EVAL)
	    else if (type == DT_LTAG)
	    {
		if (add_llist_tags(tag, num_matches, matches) == FAIL)
		    goto end_do_tag;
		cur_match = 0;		
	    }
#endif

	    if (ask_for_selection == TRUE)
	    {
		
		i = prompt_for_number(NULL);
		if (i <= 0 || i > num_matches || got_int)
		{
		    
		    if (use_tagstack)
		    {
			tagstack[tagstackidx].fmark = saved_fmark;
			tagstackidx = prevtagstackidx;
		    }
#ifdef FEAT_CSCOPE
		    cs_free_tags();
		    jumped_to_tag = TRUE;
#endif
		    break;
		}
		cur_match = i - 1;
	    }

	    if (cur_match >= num_matches)
	    {
		
		
		
		if ((type == DT_NEXT || type == DT_FIRST)
						      && nofile_fname == NULL)
		{
		    if (num_matches == 1)
			emsg(_(e_there_is_only_one_matching_tag));
		    else
			emsg(_(e_cannot_go_beyond_last_matching_tag));
		    skip_msg = TRUE;
		}
		cur_match = num_matches - 1;
	    }
	    if (use_tagstack)
	    {
		tagptrs_T   tagp;

		tagstack[tagstackidx].cur_match = cur_match;
		tagstack[tagstackidx].cur_fnum = cur_fnum;

		
		if (use_tfu && parse_match(matches[cur_match], &tagp) == OK
			&& tagp.user_data)
		{
		    VIM_CLEAR(tagstack[tagstackidx].user_data);
		    tagstack[tagstackidx].user_data = vim_strnsave(
			  tagp.user_data, tagp.user_data_end - tagp.user_data);
		}

		++tagstackidx;
	    }
#if defined(FEAT_QUICKFIX)
	    else if (g_do_tagpreview != 0)
	    {
		ptag_entry.cur_match = cur_match;
		ptag_entry.cur_fnum = cur_fnum;
	    }
#endif

	    
	    if (nofile_fname != NULL && error_cur_match != cur_match)
		smsg(_("File \"%s\" does not exist"), nofile_fname);


	    ic = (matches[cur_match][0] & MT_IC_OFF);
	    if (type != DT_TAG && type != DT_SELECT && type != DT_JUMP
#ifdef FEAT_CSCOPE
		&& type != DT_CSCOPE
#endif
		&& (num_matches > 1 || ic)
		&& !skip_msg)
	    {
		
		sprintf((char *)IObuff, _("tag %d of %d%s"),
				cur_match + 1,
				num_matches,
				max_num_matches != MAXCOL ? _(" or more") : "");
		if (ic)
		    STRCAT(IObuff, _("  Using tag with different case!"));
		if ((num_matches > prev_num_matches || new_tag)
							   && num_matches > 1)
		{
		    if (ic)
			msg_attr((char *)IObuff, HL_ATTR(HLF_W));
		    else
			msg((char *)IObuff);
		    msg_scroll = TRUE;	
		}
		else
		    give_warning(IObuff, ic);
		if (ic && !msg_scrolled && msg_silent == 0)
		{
		    out_flush();
		    ui_delay(1007L, TRUE);
		}
	    }

#if defined(FEAT_EVAL)
	    
	    vim_snprintf((char *)IObuff, IOSIZE, ":ta %s\r", name);
	    set_vim_var_string(VV_SWAPCOMMAND, IObuff, -1);
#endif

	    
	    i = jumpto_tag(matches[cur_match], forceit, type != DT_CSCOPE);

#if defined(FEAT_EVAL)
	    set_vim_var_string(VV_SWAPCOMMAND, NULL, -1);
#endif

	    if (i == NOTAGFILE)
	    {
		
		if ((type == DT_PREV && cur_match > 0)
			|| ((type == DT_TAG || type == DT_NEXT
							  || type == DT_FIRST)
			    && (max_num_matches != MAXCOL
					     || cur_match < num_matches - 1)))
		{
		    error_cur_match = cur_match;
		    if (use_tagstack)
			--tagstackidx;
		    if (type == DT_PREV)
			--cur_match;
		    else
		    {
			type = DT_NEXT;
			++cur_match;
		    }
		    continue;
		}
		semsg(_(e_file_str_does_not_exist), nofile_fname);
	    }
	    else
	    {
		
		
		if (use_tagstack && tagstackidx > curwin->w_tagstacklen)
		    tagstackidx = curwin->w_tagstackidx;
#ifdef FEAT_CSCOPE
		jumped_to_tag = TRUE;
#endif
	    }
	}
	break;
    }

end_do_tag:
    
    if (use_tagstack && tagstackidx <= curwin->w_tagstacklen)
	curwin->w_tagstackidx = tagstackidx;
    postponed_split = 0;	
# ifdef FEAT_QUICKFIX
    g_do_tagpreview = 0;	
# endif

    vim_free(tofree);
#ifdef FEAT_CSCOPE
    return jumped_to_tag;
#else
    return FALSE;
#endif
}


    static void
print_tag_list(
    int		new_tag,
    int		use_tagstack,
    int		num_matches,
    char_u	**matches)
{
    taggy_T	*tagstack = curwin->w_tagstack;
    int		tagstackidx = curwin->w_tagstackidx;
    int		i;
    char_u	*p;
    char_u	*command_end;
    tagptrs_T	tagp;
    int		taglen;
    int		attr;

    
    parse_match(matches[0], &tagp);
    taglen = (int)(tagp.tagname_end - tagp.tagname + 2);
    if (taglen < 18)
	taglen = 18;
    if (taglen > Columns - 25)
	taglen = MAXCOL;
    if (msg_col == 0)
	msg_didout = FALSE;	
    msg_start();
    msg_puts_attr(_("  # pri kind tag"), HL_ATTR(HLF_T));
    msg_clr_eos();
    taglen_advance(taglen);
    msg_puts_attr(_("file\n"), HL_ATTR(HLF_T));

    for (i = 0; i < num_matches && !got_int; ++i)
    {
	parse_match(matches[i], &tagp);
	if (!new_tag && (
#if defined(FEAT_QUICKFIX)
		    (g_do_tagpreview != 0
		     && i == ptag_entry.cur_match) ||
#endif
		    (use_tagstack
		     && i == tagstack[tagstackidx].cur_match)))
	    *IObuff = '>';
	else
	    *IObuff = ' ';
	vim_snprintf((char *)IObuff + 1, IOSIZE - 1,
		"%2d %s ", i + 1,
			       mt_names[matches[i][0] & MT_MASK]);
	msg_puts((char *)IObuff);
	if (tagp.tagkind != NULL)
	    msg_outtrans_len(tagp.tagkind,
			  (int)(tagp.tagkind_end - tagp.tagkind));
	msg_advance(13);
	msg_outtrans_len_attr(tagp.tagname,
			   (int)(tagp.tagname_end - tagp.tagname),
						  HL_ATTR(HLF_T));
	msg_putchar(' ');
	taglen_advance(taglen);

	
	
	p = tag_full_fname(&tagp);
	if (p != NULL)
	{
	    msg_outtrans_long_attr(p, HL_ATTR(HLF_D));
	    vim_free(p);
	}
	if (msg_col > 0)
	    msg_putchar('\n');
	if (got_int)
	    break;
	msg_advance(15);

	
	command_end = tagp.command_end;
	if (command_end != NULL)
	{
	    p = command_end + 3;
	    while (*p && *p != '\r' && *p != '\n')
	    {
		while (*p == TAB)
		    ++p;

		
		if (STRNCMP(p, "file:", 5) == 0
					     && vim_isspace(p[5]))
		{
		    p += 5;
		    continue;
		}
		
		if (p == tagp.tagkind
			|| (p + 5 == tagp.tagkind
				&& STRNCMP(p, "kind:", 5) == 0))
		{
		    p = tagp.tagkind_end;
		    continue;
		}
		
		attr = HL_ATTR(HLF_CM);
		while (*p && *p != '\r' && *p != '\n')
		{
		    if (msg_col + ptr2cells(p) >= Columns)
		    {
			msg_putchar('\n');
			if (got_int)
			    break;
			msg_advance(15);
		    }
		    p = msg_outtrans_one(p, attr);
		    if (*p == TAB)
		    {
			msg_puts_attr(" ", attr);
			break;
		    }
		    if (*p == ':')
			attr = 0;
		}
	    }
	    if (msg_col > 15)
	    {
		msg_putchar('\n');
		if (got_int)
		    break;
		msg_advance(15);
	    }
	}
	else
	{
	    for (p = tagp.command;
			      *p && *p != '\r' && *p != '\n'; ++p)
		;
	    command_end = p;
	}

	
	
	p = tagp.command;
	if (*p == '/' || *p == '?')
	{
	    ++p;
	    if (*p == '^')
		++p;
	}
	
	while (p != command_end && vim_isspace(*p))
	    ++p;

	while (p != command_end)
	{
	    if (msg_col + (*p == TAB ? 1 : ptr2cells(p)) > Columns)
		msg_putchar('\n');
	    if (got_int)
		break;
	    msg_advance(15);

	    
	    
	    if (*p == '\\' && (*(p + 1) == *tagp.command
			    || *(p + 1) == '\\'))
		++p;

	    if (*p == TAB)
	    {
		msg_putchar(' ');
		++p;
	    }
	    else
		p = msg_outtrans_one(p, 0);

	    
	    if (p == command_end - 2 && *p == '$'
				     && *(p + 1) == *tagp.command)
		break;
	    
	    if (p == command_end - 1 && *p == *tagp.command
				     && (*p == '/' || *p == '?'))
		break;
	}
	if (msg_col)
	    msg_putchar('\n');
	ui_breakcheck();
    }
    if (got_int)
	got_int = FALSE;	
}

#if defined(FEAT_QUICKFIX) && defined(FEAT_EVAL)

    static int
add_llist_tags(
    char_u	*tag,
    int		num_matches,
    char_u	**matches)
{
    list_T	*list;
    char_u	tag_name[128 + 1];
    char_u	*fname;
    char_u	*cmd;
    int		i;
    char_u	*p;
    tagptrs_T	tagp;

    fname = alloc(MAXPATHL + 1);
    cmd = alloc(CMDBUFFSIZE + 1);
    list = list_alloc();
    if (list == NULL || fname == NULL || cmd == NULL)
    {
	vim_free(cmd);
	vim_free(fname);
	if (list != NULL)
	    list_free(list);
	return FAIL;
    }

    for (i = 0; i < num_matches; ++i)
    {
	int	    len, cmd_len;
	int    lnum;
	dict_T  *dict;

	parse_match(matches[i], &tagp);

	
	len = (int)(tagp.tagname_end - tagp.tagname);
	if (len > 128)
	    len = 128;
	vim_strncpy(tag_name, tagp.tagname, len);
	tag_name[len] = NUL;

	
	p = tag_full_fname(&tagp);
	if (p == NULL)
	    continue;
	vim_strncpy(fname, p, MAXPATHL);
	vim_free(p);

	
	
	lnum = 0;
	if (SAFE_isdigit(*tagp.command))
	    
	    lnum = atol((char *)tagp.command);
	else
	{
	    char_u *cmd_start, *cmd_end;

	    

	    
	    cmd_start = tagp.command;
	    cmd_end = tagp.command_end;
	    if (cmd_end == NULL)
	    {
		for (p = tagp.command;
		     *p && *p != '\r' && *p != '\n'; ++p)
		    ;
		cmd_end = p;
	    }

	    
	    
	    
	    cmd_end--;

	    
	    
	    if (*cmd_start == '/' || *cmd_start == '?')
		cmd_start++;

	    if (*cmd_end == '/' || *cmd_end == '?')
		cmd_end--;

	    len = 0;
	    cmd[0] = NUL;

	    
	    
	    if (*cmd_start == '^')
	    {
		STRCPY(cmd, "^");
		cmd_start++;
		len++;
	    }

	    
	    
	    STRCAT(cmd, "\\V");
	    len += 2;

	    cmd_len = (int)(cmd_end - cmd_start + 1);
	    if (cmd_len > (CMDBUFFSIZE - 5))
		cmd_len = CMDBUFFSIZE - 5;
	    STRNCAT(cmd, cmd_start, cmd_len);
	    len += cmd_len;

	    if (cmd[len - 1] == '$')
	    {
		
		
		cmd[len - 1] = '\\';
		cmd[len] = '$';
		len++;
	    }

	    cmd[len] = NUL;
	}

	if ((dict = dict_alloc()) == NULL)
	    continue;
	if (list_append_dict(list, dict) == FAIL)
	{
	    vim_free(dict);
	    continue;
	}

	dict_add_string(dict, "text", tag_name);
	dict_add_string(dict, "filename", fname);
	dict_add_number(dict, "lnum", lnum);
	if (lnum == 0)
	    dict_add_string(dict, "pattern", cmd);
    }

    vim_snprintf((char *)IObuff, IOSIZE, "ltag %s", tag);
    set_errorlist(curwin, list, ' ', IObuff, NULL);

    list_free(list);
    vim_free(fname);
    vim_free(cmd);

    return OK;
}
#endif


    void
tag_freematch(void)
{
    VIM_CLEAR(tagmatchname);
}

    static void
taglen_advance(int l)
{
    if (l == MAXCOL)
    {
	msg_putchar('\n');
	msg_advance(24);
    }
    else
	msg_advance(13 + l);
}


    void
do_tags(exarg_T *eap UNUSED)
{
    int		i;
    char_u	*name;
    taggy_T	*tagstack = curwin->w_tagstack;
    int		tagstackidx = curwin->w_tagstackidx;
    int		tagstacklen = curwin->w_tagstacklen;

    
    msg_puts_title(_("\n  # TO tag         FROM line  in file/text"));
    for (i = 0; i < tagstacklen; ++i)
    {
	if (tagstack[i].tagname != NULL)
	{
	    name = fm_getname(&(tagstack[i].fmark), 30);
	    if (name == NULL)	    
		continue;

	    msg_putchar('\n');
	    vim_snprintf((char *)IObuff, IOSIZE, "%c%2d %2d %-15s %5ld  ",
		i == tagstackidx ? '>' : ' ',
		i + 1,
		tagstack[i].cur_match + 1,
		tagstack[i].tagname,
		tagstack[i].fmark.mark.lnum);
	    msg_outtrans(IObuff);
	    msg_outtrans_attr(name, tagstack[i].fmark.fnum == curbuf->b_fnum
							? HL_ATTR(HLF_D) : 0);
	    vim_free(name);
	}
	out_flush();		    
    }
    if (tagstackidx == tagstacklen)	
	msg_puts("\n>");
}


    static int
tag_strnicmp(char_u *s1, char_u *s2, size_t len)
{
    int		i;

    while (len > 0)
    {
	i = (int)TOUPPER_ASC(*s1) - (int)TOUPPER_ASC(*s2);
	if (i != 0)
	    return i;			
	if (*s1 == NUL)
	    break;			
	++s1;
	++s2;
	--len;
    }
    return 0;				
}


typedef struct
{
    char_u	*pat;		
    int		len;		
    char_u	*head;		
    int		headlen;	
    regmatch_T	regmatch;	
} pat_T;


    static void
prepare_pats(pat_T *pats, int has_re)
{
    pats->head = pats->pat;
    pats->headlen = pats->len;
    if (has_re)
    {
	
	
	if (pats->pat[0] == '^')
	    pats->head = pats->pat + 1;
	else if (pats->pat[0] == '\\' && pats->pat[1] == '<')
	    pats->head = pats->pat + 2;
	if (pats->head == pats->pat)
	    pats->headlen = 0;
	else
	    for (pats->headlen = 0; pats->head[pats->headlen] != NUL;
							      ++pats->headlen)
		if (vim_strchr((char_u *)(magic_isset() ? ".[~*\\$" : "\\$"),
					   pats->head[pats->headlen]) != NULL)
		    break;
	if (p_tl != 0 && pats->headlen > p_tl)	
	    pats->headlen = p_tl;
    }

    if (has_re)
	pats->regmatch.regprog = vim_regcomp(pats->pat,
						 magic_isset() ? RE_MAGIC : 0);
    else
	pats->regmatch.regprog = NULL;
}

#ifdef FEAT_EVAL

    static int
find_tagfunc_tags(
    char_u	*pat,		
    garray_T	*ga,		
    int		*match_count,	
    int		flags,		
    char_u	*buf_ffname)	
{
    pos_T       save_pos;
    list_T      *taglist;
    listitem_T  *item;
    int		ntags = 0;
    int		result = FAIL;
    typval_T	args[4];
    typval_T	rettv;
    char_u      flagString[4];
    dict_T	*d;
    taggy_T	*tag = &curwin->w_tagstack[curwin->w_tagstackidx];

    if (*curbuf->b_p_tfu == NUL || curbuf->b_tfu_cb.cb_name == NULL
					   || *curbuf->b_tfu_cb.cb_name == NUL)
	return FAIL;

    args[0].v_type = VAR_STRING;
    args[0].vval.v_string = pat;
    args[1].v_type = VAR_STRING;
    args[1].vval.v_string = flagString;

    
    if ((d = dict_alloc_lock(VAR_FIXED)) == NULL)
	return FAIL;
    if (tag->user_data != NULL)
	dict_add_string(d, "user_data", tag->user_data);
    if (buf_ffname != NULL)
	dict_add_string(d, "buf_ffname", buf_ffname);

    ++d->dv_refcount;
    args[2].v_type = VAR_DICT;
    args[2].vval.v_dict = d;

    args[3].v_type = VAR_UNKNOWN;

    vim_snprintf((char *)flagString, sizeof(flagString),
		 "%s%s%s",
		 g_tag_at_cursor      ? "c": "",
		 flags & TAG_INS_COMP ? "i": "",
		 flags & TAG_REGEXP   ? "r": "");

    save_pos = curwin->w_cursor;
    result = call_callback(&curbuf->b_tfu_cb, 0, &rettv, 3, args);
    curwin->w_cursor = save_pos;	
    --d->dv_refcount;

    if (result == FAIL)
	return FAIL;
    if (rettv.v_type == VAR_SPECIAL && rettv.vval.v_number == VVAL_NULL)
    {
	clear_tv(&rettv);
	return NOTDONE;
    }
    if (rettv.v_type != VAR_LIST || !rettv.vval.v_list)
    {
	clear_tv(&rettv);
	emsg(_(e_invalid_return_value_from_tagfunc));
	return FAIL;
    }
    taglist = rettv.vval.v_list;

    FOR_ALL_LIST_ITEMS(taglist, item)
    {
	char_u		*mfp;
	char_u		*res_name, *res_fname, *res_cmd, *res_kind;
	int		len;
	dict_iterator_T	iter;
	char_u		*dict_key;
	typval_T	*tv;
	int		has_extra = 0;
	int		name_only = flags & TAG_NAMES;

	if (item->li_tv.v_type != VAR_DICT)
	{
	    emsg(_(e_invalid_return_value_from_tagfunc));
	    break;
	}

#ifdef FEAT_EMACS_TAGS
	len = 3;
#else
	len = 2;
#endif
	res_name = NULL;
	res_fname = NULL;
	res_cmd = NULL;
	res_kind = NULL;

	dict_iterate_start(&item->li_tv, &iter);
	while (NULL != (dict_key = dict_iterate_next(&iter, &tv)))
	{
	    if (tv->v_type != VAR_STRING || tv->vval.v_string == NULL)
		continue;

	    len += (int)STRLEN(tv->vval.v_string) + 1;   
	    if (!STRCMP(dict_key, "name"))
	    {
		res_name = tv->vval.v_string;
		continue;
	    }
	    if (!STRCMP(dict_key, "filename"))
	    {
		res_fname = tv->vval.v_string;
		continue;
	    }
	    if (!STRCMP(dict_key, "cmd"))
	    {
		res_cmd = tv->vval.v_string;
		continue;
	    }
	    has_extra = 1;
	    if (!STRCMP(dict_key, "kind"))
	    {
		res_kind = tv->vval.v_string;
		continue;
	    }
	    
	    
	    len += (int)STRLEN(dict_key) + 1;
	}

	if (has_extra)
	    len += 2;	

	if (!res_name || !res_fname || !res_cmd)
	{
	    emsg(_(e_invalid_return_value_from_tagfunc));
	    break;
	}

	if (name_only)
	    mfp = vim_strsave(res_name);
	else
	    mfp = alloc(sizeof(char_u) + len + 1);

	if (mfp == NULL)
	    continue;

	if (!name_only)
	{
	    char_u *p = mfp;

	    *p++ = MT_GL_OTH + 1;   
	    *p++ = TAG_SEP;	    
#ifdef FEAT_EMACS_TAGS
	    *p++ = TAG_SEP;
#endif

	    STRCPY(p, res_name);
	    p += STRLEN(p);

	    *p++ = TAB;
	    STRCPY(p, res_fname);
	    p += STRLEN(p);

	    *p++ = TAB;
	    STRCPY(p, res_cmd);
	    p += STRLEN(p);

	    if (has_extra)
	    {
		STRCPY(p, ";\"");
		p += STRLEN(p);

		if (res_kind)
		{
		    *p++ = TAB;
		    STRCPY(p, res_kind);
		    p += STRLEN(p);
		}

		dict_iterate_start(&item->li_tv, &iter);
		while (NULL != (dict_key = dict_iterate_next(&iter, &tv)))
		{
		    if (tv->v_type != VAR_STRING || tv->vval.v_string == NULL)
			continue;

		    if (!STRCMP(dict_key, "name"))
			continue;
		    if (!STRCMP(dict_key, "filename"))
			continue;
		    if (!STRCMP(dict_key, "cmd"))
			continue;
		    if (!STRCMP(dict_key, "kind"))
			continue;

		    *p++ = TAB;
		    STRCPY(p, dict_key);
		    p += STRLEN(p);
		    STRCPY(p, ":");
		    p += STRLEN(p);
		    STRCPY(p, tv->vval.v_string);
		    p += STRLEN(p);
		}
	    }
	}

	
	if (ga_grow(ga, 1) == OK)
	{
	    ((char_u **)(ga->ga_data))[ga->ga_len++] = mfp;
	    ++ntags;
	    result = OK;
	}
	else
	{
	    vim_free(mfp);
	    break;
	}
    }

    clear_tv(&rettv);

    *match_count = ntags;
    return result;
}
#endif


typedef struct
{
    tagsearch_state_T	state;		
    int		stop_searching;		
    pat_T	*orgpat;		
    char_u     *lbuf;			
    int		lbuf_size;		
    char_u	*tag_fname;		
    FILE	*fp;			
    int		flags;			
    int		tag_file_sorted;	
    int		get_searchpat;		
    int		help_only;		
    int		did_open;		
    int		mincount;		
					
    int		linear;			
    vimconv_T	vimconv;
#ifdef FEAT_EMACS_TAGS
    int		is_etag;		
    char_u	*ebuf;			
#endif
#ifdef FEAT_MULTI_LANG
    char_u	help_lang[3];		
    int		help_pri;		
    char_u	*help_lang_find;	
    int		is_txt;			
#endif
    int		match_count;		
    garray_T	ga_match[MT_COUNT];	
    hashtab_T	ht_match[MT_COUNT];	
} findtags_state_T;


    static int
findtags_state_init(
    findtags_state_T	*st,
    char_u		*pat,
    int			flags,
    int			mincount)
{
    int		mtt;

    st->tag_fname = alloc(MAXPATHL + 1);
    st->fp = NULL;
    st->orgpat = ALLOC_ONE(pat_T);
    st->orgpat->pat = pat;
    st->orgpat->len = (int)STRLEN(pat);
    st->orgpat->regmatch.regprog = NULL;
    st->flags = flags;
    st->tag_file_sorted = NUL;
    st->help_only = (flags & TAG_HELP);
    st->get_searchpat = FALSE;
#ifdef FEAT_MULTI_LANG
    st->help_lang[0] = NUL;
    st->help_pri = 0;
    st->help_lang_find = NULL;
    st->is_txt = FALSE;
#endif
    st->did_open = FALSE;
    st->mincount = mincount;
    st->lbuf_size = LSIZE;
    st->lbuf = alloc(st->lbuf_size);
#ifdef FEAT_EMACS_TAGS
    st->ebuf = alloc(LSIZE);
#endif
    st->match_count = 0;
    st->stop_searching = FALSE;

    for (mtt = 0; mtt < MT_COUNT; ++mtt)
    {
	ga_init2(&st->ga_match[mtt], sizeof(char_u *), 100);
	hash_init(&st->ht_match[mtt]);
    }

    
    if (st->tag_fname == NULL
	    || st->lbuf == NULL
#ifdef FEAT_EMACS_TAGS
	    || st->ebuf == NULL
#endif
       )
	return FAIL;

    return OK;
}


    static void
findtags_state_free(findtags_state_T *st)
{
    vim_free(st->tag_fname);
    vim_free(st->lbuf);
    vim_regfree(st->orgpat->regmatch.regprog);
    vim_free(st->orgpat);
#ifdef FEAT_EMACS_TAGS
    vim_free(st->ebuf);
#endif
}

#ifdef FEAT_MULTI_LANG

    static int
findtags_in_help_init(findtags_state_T *st)
{
    int		i;
    char_u	*s;

    
    if (st->is_txt)
	STRCPY(st->help_lang, "en");
    else
    {
	
	
	i = (int)STRLEN(st->tag_fname);
	if (i > 3 && st->tag_fname[i - 3] == '-')
	    vim_strncpy(st->help_lang, st->tag_fname + i - 2, 2);
	else
	    STRCPY(st->help_lang, "en");
    }
    
    
    if (st->help_lang_find != NULL
	    && STRICMP(st->help_lang, st->help_lang_find) != 0)
	return FALSE;

    
    if ((st->flags & TAG_KEEP_LANG)
	    && st->help_lang_find == NULL
	    && curbuf->b_fname != NULL
	    && (i = (int)STRLEN(curbuf->b_fname)) > 4
	    && curbuf->b_fname[i - 1] == 'x'
	    && curbuf->b_fname[i - 4] == '.'
	    && STRNICMP(curbuf->b_fname + i - 3, st->help_lang, 2) == 0)
	st->help_pri = 0;
    else
    {
	
	st->help_pri = 1;
	for (s = p_hlg; *s != NUL; ++s)
	{
	    if (STRNICMP(s, st->help_lang, 2) == 0)
		break;
	    ++st->help_pri;
	    if ((s = vim_strchr(s, ',')) == NULL)
		break;
	}
	if (s == NULL || *s == NUL)
	{
	    
	    
	    ++st->help_pri;
	    if (STRICMP(st->help_lang, "en") != 0)
		++st->help_pri;
	}
    }

    return TRUE;
}
#endif

#ifdef FEAT_EVAL

    static int
findtags_apply_tfu(findtags_state_T *st, char_u *pat, char_u *buf_ffname)
{
    int		use_tfu = ((st->flags & TAG_NO_TAGFUNC) == 0);
    int		retval;

    if (!use_tfu || tfu_in_use || *curbuf->b_p_tfu == NUL)
	return NOTDONE;

    tfu_in_use = TRUE;
    retval = find_tagfunc_tags(pat, st->ga_match, &st->match_count,
						st->flags, buf_ffname);
    tfu_in_use = FALSE;

    return retval;
}
#endif

#ifdef FEAT_EMACS_TAGS

# define INCSTACK_SIZE 42
static struct
{
    FILE	*fp;
    char_u	*etag_fname;
} incstack[INCSTACK_SIZE];
static int incstack_idx = 0;	


    static void
emacs_tags_incstack_free(void)
{
    while (incstack_idx)
    {
	--incstack_idx;
	fclose(incstack[incstack_idx].fp);
	incstack[incstack_idx].fp = NULL;
	VIM_CLEAR(incstack[incstack_idx].etag_fname);
    }
}


    static void
emacs_tags_new_filename(findtags_state_T *st)
{
    char_u	*p;
    char_u	*fullpath_ebuf;

    if (vim_fgets(st->ebuf, LSIZE, st->fp))
	return;

    for (p = st->ebuf; *p && *p != ','; p++)
	;
    *p = NUL;

    
    
    
    
    if (STRNCMP(p + 1, "include", 7) != 0 || incstack_idx >= INCSTACK_SIZE)
	return;

    
    incstack[incstack_idx].etag_fname = vim_strsave(st->tag_fname);
    if (incstack[incstack_idx].etag_fname == NULL)
	return;

    incstack[incstack_idx].fp = st->fp;
    st->fp = NULL;

    
    
    fullpath_ebuf = expand_tag_fname(st->ebuf, st->tag_fname, FALSE);
    if (fullpath_ebuf != NULL)
    {
	st->fp = mch_fopen((char *)fullpath_ebuf, "r");
	if (st->fp != NULL)
	{
	    if (STRLEN(fullpath_ebuf) > LSIZE)
		semsg(_(e_tag_file_path_truncated_for_str), st->ebuf);
	    vim_strncpy(st->tag_fname, fullpath_ebuf, MAXPATHL);
	    ++incstack_idx;
	    st->is_etag = FALSE; 
	}
	vim_free(fullpath_ebuf);
    }
    if (st->fp == NULL)
    {
	
	
	st->fp = incstack[incstack_idx].fp;
	vim_free(incstack[incstack_idx].etag_fname);
    }
}


    static int
emacs_tags_file_eof(findtags_state_T *st)
{
    if (!incstack_idx)	
	return FALSE;

    
    --incstack_idx;
    fclose(st->fp);	
    st->fp = incstack[incstack_idx].fp;
    STRCPY(st->tag_fname, incstack[incstack_idx].etag_fname);
    vim_free(incstack[incstack_idx].etag_fname);
    st->is_etag = TRUE;	

    return TRUE;
}


    static int
emacs_tags_parse_line(char_u *lbuf, tagptrs_T *tagp)
{
    char_u	*p_7f;
    char_u	*p;

    
    
    
    p_7f = vim_strchr(lbuf, 0x7f);
    if (p_7f == NULL)
    {
etag_fail:
	if (vim_strchr(lbuf, '\n') != NULL)
	    return FAIL;

	
	if (p_verbose >= 5)
	{
	    verbose_enter();
	    msg(_("Ignoring int line in tags file"));
	    verbose_leave();
	}
	tagp->command = lbuf;
	tagp->tagname = lbuf;
	tagp->tagname_end = lbuf;
	return OK;
    }

    
    p = vim_strchr(p_7f, Ctrl_A);
    if (p == NULL)
	p = p_7f + 1;
    else
	++p;

    if (!VIM_ISDIGIT(*p))	    
	goto etag_fail;
    tagp->command = p;

    if (p[-1] == Ctrl_A)	    
    {
	tagp->tagname = p_7f + 1;
	tagp->tagname_end = p - 1;
    }
    else			    
    {
	
	for (p = p_7f - 1; !vim_iswordc(*p); --p)
	    if (p == lbuf)
		goto etag_fail;
	tagp->tagname_end = p + 1;
	while (p >= lbuf && vim_iswordc(*p))
	    --p;
	tagp->tagname = p + 1;
    }

    return OK;
}
#endif


    static tags_read_status_T
findtags_get_next_line(findtags_state_T *st, tagsearch_info_T *sinfo_p)
{
    int		eof;
    off_T	offset;

    
    if (st->state == TS_BINARY)
    {
	offset = sinfo_p->low_offset + ((sinfo_p->high_offset
						- sinfo_p->low_offset) / 2);
	if (offset == sinfo_p->curr_offset)
	    return TAGS_READ_EOF; 
	else
	    sinfo_p->curr_offset = offset;
    }

    
    else if (st->state == TS_SKIP_BACK)
    {
	sinfo_p->curr_offset -= st->lbuf_size * 2;
	if (sinfo_p->curr_offset < 0)
	{
	    sinfo_p->curr_offset = 0;
	    rewind(st->fp);
	    st->state = TS_STEP_FORWARD;
	}
    }

    
    
    if (st->state == TS_BINARY || st->state == TS_SKIP_BACK)
    {
	
	sinfo_p->curr_offset_used = sinfo_p->curr_offset;
	vim_ignored = vim_fseek(st->fp, sinfo_p->curr_offset, SEEK_SET);
	eof = vim_fgets(st->lbuf, st->lbuf_size, st->fp);
	if (!eof && sinfo_p->curr_offset != 0)
	{
	    sinfo_p->curr_offset = vim_ftell(st->fp);
	    if (sinfo_p->curr_offset == sinfo_p->high_offset)
	    {
		
		vim_ignored = vim_fseek(st->fp, sinfo_p->low_offset, SEEK_SET);
		sinfo_p->curr_offset = sinfo_p->low_offset;
	    }
	    eof = vim_fgets(st->lbuf, st->lbuf_size, st->fp);
	}
	
	while (!eof && vim_isblankline(st->lbuf))
	{
	    sinfo_p->curr_offset = vim_ftell(st->fp);
	    eof = vim_fgets(st->lbuf, st->lbuf_size, st->fp);
	}
	if (eof)
	{
	    
	    st->state = TS_SKIP_BACK;
	    sinfo_p->match_offset = vim_ftell(st->fp);
	    sinfo_p->curr_offset = sinfo_p->curr_offset_used;
	    return TAGS_READ_IGNORE;
	}
    }
    
    else
    {
	
	do
	{
#ifdef FEAT_CSCOPE
	    if (st->flags & TAG_CSCOPE)
		eof = cs_fgets(st->lbuf, st->lbuf_size);
	    else
#endif
		eof = vim_fgets(st->lbuf, st->lbuf_size, st->fp);
	} while (!eof && vim_isblankline(st->lbuf));

	if (eof)
	{
#ifdef FEAT_EMACS_TAGS
	    if (emacs_tags_file_eof(st) == TRUE)
		
		
		return TAGS_READ_IGNORE;
#endif
	    return TAGS_READ_EOF;
	}
    }

    return TAGS_READ_SUCCESS;
}


    static int
findtags_hdr_parse(findtags_state_T *st)
{
    char_u	*p;

    
    if (STRNCMP(st->lbuf, "!_TAG_", 6) != 0)
	
	return TRUE;

    
    if (STRNCMP(st->lbuf, "!_TAG_FILE_SORTED\t", 18) == 0)
	st->tag_file_sorted = st->lbuf[18];
    if (STRNCMP(st->lbuf, "!_TAG_FILE_ENCODING\t", 20) == 0)
    {
	
	
	for (p = st->lbuf + 20; *p > ' ' && *p < 127; ++p)
	    ;
	*p = NUL;
	convert_setup(&st->vimconv, st->lbuf + 20, p_enc);
    }

    
    return FALSE;
}


    static int
findtags_start_state_handler(
    findtags_state_T	*st,
    int			*sortic,
    tagsearch_info_T	*sinfo_p)
{
#ifdef FEAT_CSCOPE
    int		use_cscope = (st->flags & TAG_CSCOPE);
#endif
    int		noic = (st->flags & TAG_NOIC);
    off_T	filesize;

    
    
    if (STRNCMP(st->lbuf, "!_TAG_", 6) <= 0
	    || (st->lbuf[0] == '!' && ASCII_ISLOWER(st->lbuf[1])))
	return findtags_hdr_parse(st);

    

    
    
    
    
    
    
    
# ifdef FEAT_CSCOPE
    if (st->linear || use_cscope)
# else
    if (st->linear)
# endif
	st->state = TS_LINEAR;
    else if (st->tag_file_sorted == NUL)
	st->state = TS_BINARY;
    else if (st->tag_file_sorted == '1')
	st->state = TS_BINARY;
    else if (st->tag_file_sorted == '2')
    {
	st->state = TS_BINARY;
	*sortic = TRUE;
	st->orgpat->regmatch.rm_ic = (p_ic || !noic);
    }
    else
	st->state = TS_LINEAR;

    if (st->state == TS_BINARY && st->orgpat->regmatch.rm_ic && !*sortic)
    {
	
	
	st->linear = TRUE;
	st->state = TS_LINEAR;
    }

    
    
    if (st->state == TS_BINARY)
    {
	if (vim_fseek(st->fp, 0L, SEEK_END) != 0)
	    
	    st->state = TS_LINEAR;
	else
	{
	    
	    
	    
	    filesize = vim_ftell(st->fp);
	    vim_ignored = vim_fseek(st->fp, 0L, SEEK_SET);

	    
	    
	    sinfo_p->low_offset = 0;
	    sinfo_p->low_char = 0;
	    sinfo_p->high_offset = filesize;
	    sinfo_p->curr_offset = 0;
	    sinfo_p->high_char = 0xff;
	}
	return FALSE;
    }

    return TRUE;
}


    static tagmatch_status_T
findtags_parse_line(
    findtags_state_T		*st,
    tagptrs_T			*tagpp,
    findtags_match_args_T	*margs,
    tagsearch_info_T		*sinfo_p)
{
    int		status;
    int		i;
    int		cmplen;
    int		tagcmp;

    
    
    
    if (st->orgpat->headlen
#ifdef FEAT_EMACS_TAGS
	    && !st->is_etag
#endif
       )
    {
	CLEAR_FIELD(*tagpp);
	tagpp->tagname = st->lbuf;
	tagpp->tagname_end = vim_strchr(st->lbuf, TAB);
	if (tagpp->tagname_end == NULL)
	    
	    return TAG_MATCH_FAIL;

	
	
	cmplen = (int)(tagpp->tagname_end - tagpp->tagname);
	if (p_tl != 0 && cmplen > p_tl)	    
	    cmplen = p_tl;
	if ((st->flags & TAG_REGEXP) && st->orgpat->headlen < cmplen)
	    cmplen = st->orgpat->headlen;
	else if (st->state == TS_LINEAR && st->orgpat->headlen != cmplen)
	    return TAG_MATCH_NEXT;

	if (st->state == TS_BINARY)
	{
	    
	    i = (int)tagpp->tagname[0];
	    if (margs->sortic)
		i = (int)TOUPPER_ASC(tagpp->tagname[0]);
	    if (i < sinfo_p->low_char || i > sinfo_p->high_char)
		margs->sort_error = TRUE;

	    
	    if (margs->sortic)
		tagcmp = tag_strnicmp(tagpp->tagname, st->orgpat->head,
							(size_t)cmplen);
	    else
		tagcmp = STRNCMP(tagpp->tagname, st->orgpat->head, cmplen);

	    
	    
	    if (tagcmp == 0)
	    {
		if (cmplen < st->orgpat->headlen)
		    tagcmp = -1;
		else if (cmplen > st->orgpat->headlen)
		    tagcmp = 1;
	    }

	    if (tagcmp == 0)
	    {
		
		
		st->state = TS_SKIP_BACK;
		sinfo_p->match_offset = sinfo_p->curr_offset;
		return TAG_MATCH_NEXT;
	    }
	    if (tagcmp < 0)
	    {
		sinfo_p->curr_offset = vim_ftell(st->fp);
		if (sinfo_p->curr_offset < sinfo_p->high_offset)
		{
		    sinfo_p->low_offset = sinfo_p->curr_offset;
		    if (margs->sortic)
			sinfo_p->low_char = TOUPPER_ASC(tagpp->tagname[0]);
		    else
			sinfo_p->low_char = tagpp->tagname[0];
		    return TAG_MATCH_NEXT;
		}
	    }
	    if (tagcmp > 0 && sinfo_p->curr_offset != sinfo_p->high_offset)
	    {
		sinfo_p->high_offset = sinfo_p->curr_offset;
		if (margs->sortic)
		    sinfo_p->high_char = TOUPPER_ASC(tagpp->tagname[0]);
		else
		    sinfo_p->high_char = tagpp->tagname[0];
		return TAG_MATCH_NEXT;
	    }

	    
	    return TAG_MATCH_STOP;
	}
	else if (st->state == TS_SKIP_BACK)
	{
	    if (MB_STRNICMP(tagpp->tagname, st->orgpat->head, cmplen) != 0)
		st->state = TS_STEP_FORWARD;
	    else
		
		
		sinfo_p->curr_offset = sinfo_p->curr_offset_used;
	    return TAG_MATCH_NEXT;
	}
	else if (st->state == TS_STEP_FORWARD)
	{
	    if (MB_STRNICMP(tagpp->tagname, st->orgpat->head, cmplen) != 0)
	    {
		if ((off_T)vim_ftell(st->fp) > sinfo_p->match_offset)
		    return TAG_MATCH_STOP;	
		else
		    return TAG_MATCH_NEXT;	
	    }
	}
	else
	    
	    if (MB_STRNICMP(tagpp->tagname, st->orgpat->head, cmplen) != 0)
		return TAG_MATCH_NEXT;

	
	tagpp->fname = tagpp->tagname_end + 1;
	tagpp->fname_end = vim_strchr(tagpp->fname, TAB);
	if (tagpp->fname_end == NULL)
	    status = FAIL;
	else
	{
	    tagpp->command = tagpp->fname_end + 1;
	    status = OK;
	}
    }
    else
	status = parse_tag_line(st->lbuf,
#ifdef FEAT_EMACS_TAGS
		st->is_etag,
#endif
		tagpp);

    if (status == FAIL)
	return TAG_MATCH_FAIL;

#ifdef FEAT_EMACS_TAGS
    if (st->is_etag)
	tagpp->fname = st->ebuf;
#endif

    return TAG_MATCH_SUCCESS;
}


    static void
findtags_matchargs_init(findtags_match_args_T *margs, int flags)
{
    margs->matchoff = 0;			
    margs->match_re = FALSE;			
    margs->match_no_ic = FALSE;			
    margs->has_re = (flags & TAG_REGEXP);	
    margs->sortic = FALSE;			
    margs->sort_error = FALSE;			
}


    static int
findtags_match_tag(
    findtags_state_T	*st,
    tagptrs_T		*tagpp,
    findtags_match_args_T *margs)
{
    int		match = FALSE;
    int		cmplen;

    
    
    cmplen = (int)(tagpp->tagname_end - tagpp->tagname);
    if (p_tl != 0 && cmplen > p_tl)	    
	cmplen = p_tl;
    
    if (st->orgpat->len != cmplen)
	match = FALSE;
    else
    {
	if (st->orgpat->regmatch.rm_ic)
	{
	    match =
		(MB_STRNICMP(tagpp->tagname, st->orgpat->pat, cmplen) == 0);
	    if (match)
		margs->match_no_ic =
		    (STRNCMP(tagpp->tagname, st->orgpat->pat, cmplen) == 0);
	}
	else
	    match = (STRNCMP(tagpp->tagname, st->orgpat->pat, cmplen) == 0);
    }

    
    margs->match_re = FALSE;
    if (!match && st->orgpat->regmatch.regprog != NULL)
    {
	int	cc;

	cc = *tagpp->tagname_end;
	*tagpp->tagname_end = NUL;
	match = vim_regexec(&st->orgpat->regmatch, tagpp->tagname, (colnr_T)0);
	if (match)
	{
	    margs->matchoff = (int)(st->orgpat->regmatch.startp[0] -
							tagpp->tagname);
	    if (st->orgpat->regmatch.rm_ic)
	    {
		st->orgpat->regmatch.rm_ic = FALSE;
		margs->match_no_ic = vim_regexec(&st->orgpat->regmatch,
			tagpp->tagname, (colnr_T)0);
		st->orgpat->regmatch.rm_ic = TRUE;
	    }
	}
	*tagpp->tagname_end = cc;
	margs->match_re = TRUE;
    }

    return match;
}


    static void
findtags_string_convert(findtags_state_T *st)
{
    char_u	*conv_line;
    int		len;

    conv_line = string_convert(&st->vimconv, st->lbuf, NULL);
    if (conv_line == NULL)
	return;

    
    len = (int)STRLEN(conv_line) + 1;
    if (len > st->lbuf_size)
    {
	vim_free(st->lbuf);
	st->lbuf = conv_line;
	st->lbuf_size = len;
    }
    else
    {
	STRCPY(st->lbuf, conv_line);
	vim_free(conv_line);
    }
}


    static int
findtags_add_match(
    findtags_state_T	*st,
    tagptrs_T		*tagpp,
    findtags_match_args_T   *margs,
    char_u		*buf_ffname,
    hash_T		*hash)
{
#ifdef FEAT_CSCOPE
    int		use_cscope = (st->flags & TAG_CSCOPE);
#endif
    int		name_only = (st->flags & TAG_NAMES);
    int		mtt;
    int		len = 0;
    int		is_current;		
    int		is_static;		
    char_u	*mfp;
    char_u	*p;
    char_u	*s;

#ifdef FEAT_CSCOPE
    if (use_cscope)
    {
	
	mtt = MT_GL_OTH;
    }
    else
#endif
    {
	
	is_current = test_for_current(
#ifdef FEAT_EMACS_TAGS
		st->is_etag,
#endif
		tagpp->fname, tagpp->fname_end, st->tag_fname, buf_ffname);
#ifdef FEAT_EMACS_TAGS
	is_static = FALSE;
	if (!st->is_etag)	
#endif
	    is_static = test_for_static(tagpp);

	
	
	if (is_static)
	{
	    if (is_current)
		mtt = MT_ST_CUR;
	    else
		mtt = MT_ST_OTH;
	}
	else
	{
	    if (is_current)
		mtt = MT_GL_CUR;
	    else
		mtt = MT_GL_OTH;
	}
	if (st->orgpat->regmatch.rm_ic && !margs->match_no_ic)
	    mtt += MT_IC_OFF;
	if (margs->match_re)
	    mtt += MT_RE_OFF;
    }

    
    
    
    if (st->help_only)
    {
#ifdef FEAT_MULTI_LANG
# define ML_EXTRA 3
#else
# define ML_EXTRA 0
#endif
	
	
	
	
	*tagpp->tagname_end = NUL;
	len = (int)(tagpp->tagname_end - tagpp->tagname);
	mfp = alloc(sizeof(char_u) + len + 10 + ML_EXTRA + 1);
	if (mfp != NULL)
	{
	    int heuristic;

	    p = mfp;
	    STRCPY(p, tagpp->tagname);
#ifdef FEAT_MULTI_LANG
	    p[len] = '@';
	    STRCPY(p + len + 1, st->help_lang);
#endif

	    heuristic = help_heuristic(tagpp->tagname,
				margs->match_re ? margs->matchoff : 0,
				!margs->match_no_ic);
#ifdef FEAT_MULTI_LANG
	    heuristic += st->help_pri;
#endif
	    sprintf((char *)p + len + 1 + ML_EXTRA, "%06d",
		    heuristic);
	}
	*tagpp->tagname_end = TAB;
    }
    else if (name_only)
    {
	if (st->get_searchpat)
	{
	    char_u *temp_end = tagpp->command;

	    if (*temp_end == '/')
		while (*temp_end && *temp_end != '\r'
			&& *temp_end != '\n'
			&& *temp_end != '$')
		    temp_end++;

	    if (tagpp->command + 2 < temp_end)
	    {
		len = (int)(temp_end - tagpp->command - 2);
		mfp = alloc(len + 2);
		if (mfp != NULL)
		    vim_strncpy(mfp, tagpp->command + 2, len);
	    }
	    else
		mfp = NULL;
	    st->get_searchpat = FALSE;
	}
	else
	{
	    len = (int)(tagpp->tagname_end - tagpp->tagname);
	    mfp = alloc(sizeof(char_u) + len + 1);
	    if (mfp != NULL)
		vim_strncpy(mfp, tagpp->tagname, len);

	    
	    if (State & MODE_INSERT)
		st->get_searchpat = p_sft;
	}
    }
    else
    {
	size_t tag_fname_len = STRLEN(st->tag_fname);
#ifdef FEAT_EMACS_TAGS
	size_t ebuf_len = 0;
#endif

	
	
	
	
	
	
	
	
	len = (int)tag_fname_len + (int)STRLEN(st->lbuf) + 3;
#ifdef FEAT_EMACS_TAGS
	if (st->is_etag)
	{
	    ebuf_len = STRLEN(st->ebuf);
	    len += (int)ebuf_len + 1;
	}
	else
	    ++len;
#endif
	mfp = alloc(sizeof(char_u) + len + 1);
	if (mfp != NULL)
	{
	    p = mfp;
	    p[0] = mtt + 1;
	    STRCPY(p + 1, st->tag_fname);
#ifdef BACKSLASH_IN_FILENAME
	    
	    
	    slash_adjust(p + 1);
#endif
	    p[tag_fname_len + 1] = TAG_SEP;
	    s = p + 1 + tag_fname_len + 1;
#ifdef FEAT_EMACS_TAGS
	    if (st->is_etag)
	    {
		STRCPY(s, st->ebuf);
		s[ebuf_len] = TAG_SEP;
		s += ebuf_len + 1;
	    }
	    else
		*s++ = TAG_SEP;
#endif
	    STRCPY(s, st->lbuf);
	}
    }

    if (mfp != NULL)
    {
	hashitem_T	*hi;

	
	
	
	
	
	
#ifdef FEAT_CSCOPE
	if (use_cscope)
	    ++*hash;
	else
#endif
	    *hash = hash_hash(mfp);
	hi = hash_lookup(&st->ht_match[mtt], mfp, *hash);
	if (HASHITEM_EMPTY(hi))
	{
	    if (hash_add_item(&st->ht_match[mtt], hi, mfp, *hash) == FAIL
		    || ga_grow(&st->ga_match[mtt], 1) == FAIL)
	    {
		
		st->stop_searching = TRUE;
		return FAIL;
	    }

	    ((char_u **)(st->ga_match[mtt].ga_data))
		[st->ga_match[mtt].ga_len++] = mfp;
	    st->match_count++;
	}
	else
	    
	    vim_free(mfp);
    }

    return OK;
}


    static void
findtags_get_all_tags(
    findtags_state_T		*st,
    findtags_match_args_T	*margs,
    char_u			*buf_ffname)
{
    tagptrs_T		tagp;
    tagsearch_info_T	search_info;
    int			retval;
#ifdef FEAT_CSCOPE
    int			use_cscope = (st->flags & TAG_CSCOPE);
#endif
    hash_T		hash = 0;

    
    
    CLEAR_FIELD(search_info);

    
    for (;;)
    {
	
	if (st->state == TS_BINARY || st->state == TS_SKIP_BACK)
	    line_breakcheck();
	else
	    fast_breakcheck();
	if ((st->flags & TAG_INS_COMP))	
	    ins_compl_check_keys(30, FALSE);
	if (got_int || ins_compl_interrupted())
	{
	    st->stop_searching = TRUE;
	    break;
	}
	
	
	if (st->mincount == TAG_MANY && st->match_count >= TAG_MANY)
	{
	    st->stop_searching = TRUE;
	    break;
	}
	if (st->get_searchpat)
	    goto line_read_in;

	retval = findtags_get_next_line(st, &search_info);
	if (retval == TAGS_READ_IGNORE)
	    continue;
	if (retval == TAGS_READ_EOF)
	    break;

line_read_in:

	if (st->vimconv.vc_type != CONV_NONE)
	    findtags_string_convert(st);

#ifdef FEAT_EMACS_TAGS
	
	
	
	if (*st->lbuf == Ctrl_L
# ifdef FEAT_CSCOPE
		&& !use_cscope
# endif
	   )
	{
	    st->is_etag = TRUE;		
	    st->state = TS_LINEAR;
	    emacs_tags_new_filename(st);
	    continue;
	}
#endif

	
	
	if (st->state == TS_START)
	{
	    if (findtags_start_state_handler(st, &margs->sortic, &search_info) == FALSE)
		continue;
	}

	
	
	
	
	if (st->lbuf[st->lbuf_size - 2] != NUL
#ifdef FEAT_CSCOPE
		&& !use_cscope
#endif
	   )
	{
	    st->lbuf_size *= 2;
	    vim_free(st->lbuf);
	    st->lbuf = alloc(st->lbuf_size);
	    if (st->lbuf == NULL)
	    {
		if (st->fp != NULL)
		    fclose(st->fp);
		st->fp = NULL;
		st->stop_searching = TRUE;
		return;
	    }

	    if (st->state == TS_STEP_FORWARD || st->state == TS_LINEAR)
		
		vim_ignored = vim_fseek(st->fp, search_info.curr_offset,
								     SEEK_SET);
	    
	    
	    search_info.curr_offset = 0;
	    continue;
	}

	retval = findtags_parse_line(st, &tagp, margs, &search_info);
	if (retval == TAG_MATCH_NEXT)
	    continue;
	if (retval == TAG_MATCH_STOP)
	    break;
	if (retval == TAG_MATCH_FAIL)
	{
	    semsg(_(e_format_error_in_tags_file_str), st->tag_fname);
#ifdef FEAT_CSCOPE
	    if (!use_cscope)
#endif
		semsg(_("Before byte %ld"), (int)vim_ftell(st->fp));
	    st->stop_searching = TRUE;
	    return;
	}

	
	if (findtags_match_tag(st, &tagp, margs))
	{
	    if (findtags_add_match(st, &tagp, margs, buf_ffname, &hash)
								== FAIL)
		break;
	}
    } 
}


    static void
findtags_in_file(findtags_state_T *st, char_u *buf_ffname)
{
    findtags_match_args_T margs;
#ifdef FEAT_CSCOPE
    int		use_cscope = (st->flags & TAG_CSCOPE);
#endif

    st->vimconv.vc_type = CONV_NONE;
    st->tag_file_sorted = NUL;
    st->fp = NULL;
    findtags_matchargs_init(&margs, st->flags);

    
    
#ifdef FEAT_CSCOPE
    if (use_cscope)
	st->fp = NULL;	    
    else
#endif
    {
#ifdef FEAT_MULTI_LANG
	if (curbuf->b_help)
	{
	    if (!findtags_in_help_init(st))
		return;
	}
#endif

	st->fp = mch_fopen((char *)st->tag_fname, "r");
	if (st->fp == NULL)
	    return;

	if (p_verbose >= 5)
	{
	    verbose_enter();
	    smsg(_("Searching tags file %s"), st->tag_fname);
	    verbose_leave();
	}
    }
    st->did_open = TRUE;	

    st->state = TS_START;	
#ifdef FEAT_EMACS_TAGS
    st->is_etag = FALSE;	
#endif

    
    findtags_get_all_tags(st, &margs, buf_ffname);

    if (st->fp != NULL)
    {
	fclose(st->fp);
	st->fp = NULL;
    }
#ifdef FEAT_EMACS_TAGS
    emacs_tags_incstack_free();
#endif
    if (st->vimconv.vc_type != CONV_NONE)
	convert_setup(&st->vimconv, NULL, NULL);

    if (margs.sort_error)
	semsg(_(e_tags_file_not_sorted_str), st->tag_fname);

    
    if (st->match_count >= st->mincount)
	st->stop_searching = TRUE;
}


    static int
findtags_copy_matches(findtags_state_T *st, char_u ***matchesp)
{
    int		name_only = (st->flags & TAG_NAMES);
    char_u	**matches;
    int		mtt;
    int		i;
    char_u	*mfp;
    char_u	*p;

    if (st->match_count > 0)
	matches = ALLOC_MULT(char_u *, st->match_count);
    else
	matches = NULL;
    st->match_count = 0;
    for (mtt = 0; mtt < MT_COUNT; ++mtt)
    {
	for (i = 0; i < st->ga_match[mtt].ga_len; ++i)
	{
	    mfp = ((char_u **)(st->ga_match[mtt].ga_data))[i];
	    if (matches == NULL)
		vim_free(mfp);
	    else
	    {
		if (!name_only)
		{
		    
		    *mfp = *mfp - 1;

		    
		    for (p = mfp + 1; *p != NUL; ++p)
			if (*p == TAG_SEP)
			    *p = NUL;
		}
		matches[st->match_count++] = mfp;
	    }
	}

	ga_clear(&st->ga_match[mtt]);
	hash_clear(&st->ht_match[mtt]);
    }

    *matchesp = matches;
    return st->match_count;
}


    int
find_tags(
    char_u	*pat,			
    int		*num_matches,		
    char_u	***matchesp,		
    int		flags,
    int		mincount,		
					
    char_u	*buf_ffname)		
{
    findtags_state_T	st;
    tagname_T	tn;			
    int		first_file;		
    int		retval = FAIL;		
    int		round;

    int		save_emsg_off;

    int		help_save;
#ifdef FEAT_MULTI_LANG
    int		i;
    char_u	*saved_pat = NULL;		
#endif

    int		findall = (mincount == MAXCOL || mincount == TAG_MANY);
						
    int		has_re = (flags & TAG_REGEXP);	
    int		noic = (flags & TAG_NOIC);
#ifdef FEAT_CSCOPE
    int		use_cscope = (flags & TAG_CSCOPE);
#endif
    int		verbose = (flags & TAG_VERBOSE);
    int		save_p_ic = p_ic;

    
    switch (curbuf->b_tc_flags ? curbuf->b_tc_flags : tc_flags)
    {
	case TC_FOLLOWIC:		 break;
	case TC_IGNORE:    p_ic = TRUE;  break;
	case TC_MATCH:     p_ic = FALSE; break;
	case TC_FOLLOWSCS: p_ic = ignorecase(pat); break;
	case TC_SMART:     p_ic = ignorecase_opt(pat, TRUE, TRUE); break;
    }

    help_save = curbuf->b_help;

    if (findtags_state_init(&st, pat, flags, mincount) == FAIL)
	goto findtag_end;

#ifdef FEAT_CSCOPE
    STRCPY(st.tag_fname, "from cscope");	
#endif

    
    if (st.help_only)				
	curbuf->b_help = TRUE;			
#ifdef FEAT_CSCOPE
    else if (use_cscope)
    {
	
	st.help_only = FALSE;
	curbuf->b_help = FALSE;
    }
#endif

#ifdef FEAT_MULTI_LANG
    if (curbuf->b_help)
    {
	
	
	if (st.orgpat->len > 3 && pat[st.orgpat->len - 3] == '@'
				&& ASCII_ISALPHA(pat[st.orgpat->len - 2])
				&& ASCII_ISALPHA(pat[st.orgpat->len - 1]))
	{
	    saved_pat = vim_strnsave(pat, st.orgpat->len - 3);
	    if (saved_pat != NULL)
	    {
		st.help_lang_find = &pat[st.orgpat->len - 2];
		st.orgpat->pat = saved_pat;
		st.orgpat->len -= 3;
	    }
	}
    }
#endif
    if (p_tl != 0 && st.orgpat->len > p_tl)	
	st.orgpat->len = p_tl;

    save_emsg_off = emsg_off;
    emsg_off = TRUE;  
    prepare_pats(st.orgpat, has_re);
    emsg_off = save_emsg_off;
    if (has_re && st.orgpat->regmatch.regprog == NULL)
	goto findtag_end;

#ifdef FEAT_EVAL
    retval = findtags_apply_tfu(&st, pat, buf_ffname);
    if (retval != NOTDONE)
	goto findtag_end;

    
    retval = FAIL;
#endif

#ifdef FEAT_MULTI_LANG
    
    if ((flags & TAG_KEEP_LANG)
	    && st.help_lang_find == NULL
	    && curbuf->b_fname != NULL
	    && (i = (int)STRLEN(curbuf->b_fname)) > 4
	    && STRICMP(curbuf->b_fname + i - 4, ".txt") == 0)
	st.is_txt = TRUE;
#endif

    
    st.orgpat->regmatch.rm_ic = ((p_ic || !noic)
			&& (findall || st.orgpat->headlen == 0 || !p_tbs));
    for (round = 1; round <= 2; ++round)
    {
	st.linear = (st.orgpat->headlen == 0 || !p_tbs || round == 2);

      
      for (first_file = TRUE;
#ifdef FEAT_CSCOPE
	    use_cscope ||
#endif
		get_tagfname(&tn, first_file, st.tag_fname) == OK;
							   first_file = FALSE)
      {
	  findtags_in_file(&st, buf_ffname);
	  if (st.stop_searching
#ifdef FEAT_CSCOPE
		  || use_cscope
#endif
	     )
	  {
	      retval = OK;
	      break;
	  }
      } 

#ifdef FEAT_CSCOPE
	if (!use_cscope)
#endif
	    tagname_free(&tn);

	
	
	if (st.stop_searching || st.linear || (!p_ic && noic) ||
						st.orgpat->regmatch.rm_ic)
	    break;
# ifdef FEAT_CSCOPE
	if (use_cscope)
	    break;
# endif

	
	st.orgpat->regmatch.rm_ic = TRUE;
    }

    if (!st.stop_searching)
    {
	if (!st.did_open && verbose)	
	    emsg(_(e_no_tags_file));
	retval = OK;		
    }

findtag_end:
    findtags_state_free(&st);

    
    if (retval == FAIL)
	st.match_count = 0;

    *num_matches = findtags_copy_matches(&st, matchesp);

    curbuf->b_help = help_save;
#ifdef FEAT_MULTI_LANG
    vim_free(saved_pat);
#endif

    p_ic = save_p_ic;

    return retval;
}

static garray_T tag_fnames = GA_EMPTY;


    static void
found_tagfile_cb(char_u *fname, void *cookie UNUSED)
{
    if (ga_grow(&tag_fnames, 1) == FAIL)
	return;

    char_u	*tag_fname = vim_strsave(fname);

#ifdef BACKSLASH_IN_FILENAME
    slash_adjust(tag_fname);
#endif
    simplify_filename(tag_fname);
    ((char_u **)(tag_fnames.ga_data))[tag_fnames.ga_len++] = tag_fname;
}

#if defined(EXITFREE) || defined(PROTO)
    void
free_tag_stuff(void)
{
    ga_clear_strings(&tag_fnames);
    if (curwin != NULL)
	do_tag(NULL, DT_FREE, 0, 0, 0);
    tag_freematch();

# if defined(FEAT_QUICKFIX)
    tagstack_clear_entry(&ptag_entry);
# endif
}
#endif


    int
get_tagfname(
    tagname_T	*tnp,	
    int		first,	
    char_u	*buf)	
{
    char_u		*fname = NULL;
    char_u		*r_ptr;
    int			i;

    if (first)
	CLEAR_POINTER(tnp);

    if (curbuf->b_help)
    {
	
	if (first)
	{
	    ga_clear_strings(&tag_fnames);
	    ga_init2(&tag_fnames, sizeof(char_u *), 10);
	    do_in_runtimepath((char_u *)
#ifdef FEAT_MULTI_LANG
# ifdef VMS
		    
		    
		    
		    
		    "doc/tags doc/tags-*"
# else
		    "doc/tags doc/tags-??"
# endif
#else
		    "doc/tags"
#endif
					   , DIP_ALL, found_tagfile_cb, NULL);
	}

	if (tnp->tn_hf_idx >= tag_fnames.ga_len)
	{
	    
	    
	    if (tnp->tn_hf_idx > tag_fnames.ga_len || *p_hf == NUL)
		return FAIL;
	    ++tnp->tn_hf_idx;
	    STRCPY(buf, p_hf);
	    STRCPY(gettail(buf), "tags");
#ifdef BACKSLASH_IN_FILENAME
	    slash_adjust(buf);
#endif
	    simplify_filename(buf);

	    for (i = 0; i < tag_fnames.ga_len; ++i)
		if (STRCMP(buf, ((char_u **)(tag_fnames.ga_data))[i]) == 0)
		    return FAIL; 
	}
	else
	    vim_strncpy(buf, ((char_u **)(tag_fnames.ga_data))[
					     tnp->tn_hf_idx++], MAXPATHL - 1);
	return OK;
    }

    if (first)
    {
	
	
	tnp->tn_tags = vim_strsave((*curbuf->b_p_tags != NUL)
						 ? curbuf->b_p_tags : p_tags);
	if (tnp->tn_tags == NULL)
	    return FAIL;
	tnp->tn_np = tnp->tn_tags;
    }

    
    for (;;)
    {
	if (tnp->tn_did_filefind_init)
	{
	    fname = vim_findfile(tnp->tn_search_ctx);
	    if (fname != NULL)
		break;

	    tnp->tn_did_filefind_init = FALSE;
	}
	else
	{
	    char_u  *filename = NULL;

	    
	    if (*tnp->tn_np == NUL)
	    {
		vim_findfile_cleanup(tnp->tn_search_ctx);
		tnp->tn_search_ctx = NULL;
		return FAIL;
	    }

	    
	    buf[0] = NUL;
	    (void)copy_option_part(&tnp->tn_np, buf, MAXPATHL - 1, " ,");

	    r_ptr = vim_findfile_stopdir(buf);
	    
	    
	    filename = gettail(buf);
	    if (r_ptr != NULL)
	    {
		STRMOVE(r_ptr + 1, r_ptr);
		++r_ptr;
	    }
	    STRMOVE(filename + 1, filename);
	    *filename++ = NUL;

	    tnp->tn_search_ctx = vim_findfile_init(buf, filename,
		    r_ptr, 100,
		    FALSE,	   
		    FINDFILE_FILE, 
		    tnp->tn_search_ctx, TRUE, curbuf->b_ffname);
	    if (tnp->tn_search_ctx != NULL)
		tnp->tn_did_filefind_init = TRUE;
	}
    }

    STRCPY(buf, fname);
    vim_free(fname);
    return OK;
}


    void
tagname_free(tagname_T *tnp)
{
    vim_free(tnp->tn_tags);
    vim_findfile_cleanup(tnp->tn_search_ctx);
    tnp->tn_search_ctx = NULL;
    ga_clear_strings(&tag_fnames);
}


    static int
parse_tag_line(
    char_u	*lbuf,		
#ifdef FEAT_EMACS_TAGS
    int		is_etag,
#endif
    tagptrs_T	*tagp)
{
    char_u	*p;

#ifdef FEAT_EMACS_TAGS
    if (is_etag)
	
	return emacs_tags_parse_line(lbuf, tagp);
#endif

    
    tagp->tagname = lbuf;
    p = vim_strchr(lbuf, TAB);
    if (p == NULL)
	return FAIL;
    tagp->tagname_end = p;

    
    if (*p != NUL)
	++p;
    tagp->fname = p;
    p = vim_strchr(p, TAB);
    if (p == NULL)
	return FAIL;
    tagp->fname_end = p;

    
    if (*p != NUL)
	++p;
    if (*p == NUL)
	return FAIL;
    tagp->command = p;

    return OK;
}


    static int
test_for_static(tagptrs_T *tagp)
{
    char_u	*p;

    
    p = tagp->command;
    while ((p = vim_strchr(p, '\t')) != NULL)
    {
	++p;
	if (STRNCMP(p, "file:", 5) == 0)
	    return TRUE;
    }

    return FALSE;
}


    static size_t
matching_line_len(char_u *lbuf)
{
    char_u	*p = lbuf + 1;

    
    p += STRLEN(p) + 1;
#ifdef FEAT_EMACS_TAGS
    p += STRLEN(p) + 1;
#endif
    return (p - lbuf) + STRLEN(p);
}


    static int
parse_match(
    char_u	*lbuf,	    
    tagptrs_T	*tagp)	    
{
    int		retval;
    char_u	*p;
    char_u	*pc, *pt;

    tagp->tag_fname = lbuf + 1;
    lbuf += STRLEN(tagp->tag_fname) + 2;
#ifdef FEAT_EMACS_TAGS
    if (*lbuf)
    {
	tagp->is_etag = TRUE;
	tagp->fname = lbuf;
	lbuf += STRLEN(lbuf);
	tagp->fname_end = lbuf++;
    }
    else
    {
	tagp->is_etag = FALSE;
	++lbuf;
    }
#endif

    
    retval = parse_tag_line(lbuf,
#ifdef FEAT_EMACS_TAGS
			tagp->is_etag,
#endif
			tagp);

    tagp->tagkind = NULL;
    tagp->user_data = NULL;
    tagp->tagline = 0;
    tagp->command_end = NULL;

    if (retval != OK)
	return retval;

    
    p = tagp->command;
    if (find_extra(&p) == OK)
    {
	if (p > tagp->command && p[-1] == '|')
	    tagp->command_end = p - 1;  
	else
	    tagp->command_end = p;
	p += 2;	
	if (*p++ == TAB)
	    
	    
	    while (ASCII_ISALPHA(*p) || mb_ptr2len(p) > 1)
	    {
		if (STRNCMP(p, "kind:", 5) == 0)
		    tagp->tagkind = p + 5;
		else if (STRNCMP(p, "user_data:", 10) == 0)
		    tagp->user_data = p + 10;
		else if (STRNCMP(p, "line:", 5) == 0)
		    tagp->tagline = atoi((char *)p + 5);
		if (tagp->tagkind != NULL && tagp->user_data != NULL)
		    break;
		pc = vim_strchr(p, ':');
		pt = vim_strchr(p, '\t');
		if (pc == NULL || (pt != NULL && pc > pt))
		    tagp->tagkind = p;
		if (pt == NULL)
		    break;
		p = pt;
		MB_PTR_ADV(p);
	    }
    }
    if (tagp->tagkind != NULL)
    {
	for (p = tagp->tagkind;
		*p && *p != '\t' && *p != '\r' && *p != '\n'; MB_PTR_ADV(p))
	    ;
	tagp->tagkind_end = p;
    }
    if (tagp->user_data != NULL)
    {
	for (p = tagp->user_data;
		*p && *p != '\t' && *p != '\r' && *p != '\n'; MB_PTR_ADV(p))
	    ;
	tagp->user_data_end = p;
    }
    return retval;
}


    static char_u *
tag_full_fname(tagptrs_T *tagp)
{
    char_u	*fullname;
    int		c;

#ifdef FEAT_EMACS_TAGS
    if (tagp->is_etag)
	c = 0;	    
    else
#endif
    {
	c = *tagp->fname_end;
	*tagp->fname_end = NUL;
    }
    fullname = expand_tag_fname(tagp->fname, tagp->tag_fname, FALSE);

#ifdef FEAT_EMACS_TAGS
    if (!tagp->is_etag)
#endif
	*tagp->fname_end = c;

    return fullname;
}


    static int
jumpto_tag(
    char_u	*lbuf_arg,	
    int		forceit,	
    int		keep_help)	
{
    optmagic_T	save_magic_overruled;
    int		save_p_ws, save_p_scs, save_p_ic;
    linenr_T	save_lnum;
    char_u	*str;
    char_u	*pbuf;			
    char_u	*pbuf_end;
    char_u	*tofree_fname = NULL;
    char_u	*fname;
    tagptrs_T	tagp;
    int		retval = FAIL;
    int		getfile_result = GETFILE_UNUSED;
    int		search_options;
#ifdef FEAT_SEARCH_EXTRA
    int		save_no_hlsearch;
#endif
#if defined(FEAT_QUICKFIX)
    win_T	*curwin_save = NULL;
#endif
    char_u	*full_fname = NULL;
#ifdef FEAT_FOLDING
    int		old_KeyTyped = KeyTyped;    
#endif
    size_t	len;
    char_u	*lbuf;

    if (postponed_split == 0 && !check_can_set_curbuf_forceit(forceit))
	return FAIL;

    
    
    len = matching_line_len(lbuf_arg) + 1;
    lbuf = alloc(len);
    if (lbuf != NULL)
	mch_memmove(lbuf, lbuf_arg, len);

    pbuf = alloc(LSIZE);

    
    if (pbuf == NULL || lbuf == NULL || parse_match(lbuf, &tagp) == FAIL)
    {
	tagp.fname_end = NULL;
	goto erret;
    }

    
    *tagp.fname_end = NUL;
    fname = tagp.fname;

    
    str = tagp.command;
    for (pbuf_end = pbuf; *str && *str != '\n' && *str != '\r'; )
    {
#ifdef FEAT_EMACS_TAGS
	if (tagp.is_etag && *str == ',')
	    break;
#endif
	*pbuf_end++ = *str++;
	if (pbuf_end - pbuf + 1 >= LSIZE)
	    break;
    }
    *pbuf_end = NUL;

#ifdef FEAT_EMACS_TAGS
    if (!tagp.is_etag)
#endif
    {
	
	str = pbuf;
	if (find_extra(&str) == OK)
	{
	    pbuf_end = str;
	    *pbuf_end = NUL;
	}
    }

    
    fname = expand_tag_fname(fname, tagp.tag_fname, TRUE);
    if (fname == NULL)
	goto erret;
    tofree_fname = fname;	

    
    if (mch_getperm(fname) < 0 && !has_autocmd(EVENT_BUFREADCMD, fname, NULL))
    {
	retval = NOTAGFILE;
	vim_free(nofile_fname);
	nofile_fname = vim_strsave(fname);
	if (nofile_fname == NULL)
	    nofile_fname = empty_option;
	goto erret;
    }

    ++RedrawingDisabled;

#ifdef FEAT_GUI
    need_mouse_correct = TRUE;
#endif

#if defined(FEAT_QUICKFIX)
    if (g_do_tagpreview != 0)
    {
	postponed_split = 0;	
	curwin_save = curwin;	

	
	if (!curwin->w_p_pvw)
	{
	    full_fname = FullName_save(fname, FALSE);
	    fname = full_fname;

	    
	    prepare_tagpreview(TRUE, TRUE, FALSE);
	}
    }

    
    
    if (postponed_split && (swb_flags & (SWB_USEOPEN | SWB_USETAB)))
    {
	buf_T *existing_buf = buflist_findname_exp(fname);

	if (existing_buf != NULL)
	{
	    
	    if (swbuf_goto_win_with_buf(existing_buf) != NULL)
		
		
		getfile_result = GETFILE_SAME_FILE;
	}
    }
    if (getfile_result == GETFILE_UNUSED
				  && (postponed_split || cmdmod.cmod_tab != 0))
    {
	if (win_split(postponed_split > 0 ? postponed_split : 0,
						postponed_split_flags) == FAIL)
	{
	    if (RedrawingDisabled > 0)
		--RedrawingDisabled;
	    goto erret;
	}
	RESET_BINDING(curwin);
    }
#endif

    if (keep_help)
    {
	
	
#if defined(FEAT_QUICKFIX)
	if (g_do_tagpreview != 0)
	    keep_help_flag = bt_help(curwin_save->w_buffer);
	else
#endif
	    keep_help_flag = curbuf->b_help;
    }

    if (getfile_result == GETFILE_UNUSED)
	
	
	getfile_result = getfile(0, fname, NULL, TRUE, (linenr_T)0, forceit);
    keep_help_flag = FALSE;

    if (GETFILE_SUCCESS(getfile_result))	
    {
	curwin->w_set_curswant = TRUE;
	postponed_split = 0;

	save_magic_overruled = magic_overruled;
	magic_overruled = OPTION_MAGIC_OFF;	
#ifdef FEAT_SEARCH_EXTRA
	
	save_no_hlsearch = no_hlsearch;
#endif
#if defined(FEAT_PROP_POPUP) && defined(FEAT_QUICKFIX)
	
	if (g_do_tagpreview != 0 && *p_pvp != NUL)
	    parse_previewpopup(curwin);
#endif

	
	if (vim_strchr(p_cpo, CPO_TAGPAT) != NULL)
	    search_options = 0;
	else
	    search_options = SEARCH_KEEP;

	
	str = pbuf;
	if (pbuf[0] == '/' || pbuf[0] == '?')
	    str = skip_regexp(pbuf + 1, pbuf[0], FALSE) + 1;
	if (str > pbuf_end - 1)	
	{
	    size_t pbuflen = pbuf_end - pbuf;

	    save_p_ws = p_ws;
	    save_p_ic = p_ic;
	    save_p_scs = p_scs;
	    p_ws = TRUE;	
	    p_ic = FALSE;	
	    p_scs = FALSE;
	    save_lnum = curwin->w_cursor.lnum;
	    if (tagp.tagline > 0)
		
		curwin->w_cursor.lnum = tagp.tagline - 1;
	    else
		
		curwin->w_cursor.lnum = 0;
	    if (do_search(NULL, pbuf[0], pbuf[0], pbuf + 1, pbuflen - 1, (int)1,
							 search_options, NULL))
		retval = OK;
	    else
	    {
		int	found = 1;
		int	cc;

		
		p_ic = TRUE;
		if (!do_search(NULL, pbuf[0], pbuf[0], pbuf + 1, pbuflen - 1, (int)1,
							 search_options, NULL))
		{
		    
		    found = 2;
		    (void)test_for_static(&tagp);
		    cc = *tagp.tagname_end;
		    *tagp.tagname_end = NUL;
		    pbuflen = vim_snprintf((char *)pbuf, LSIZE, "^%s\\s\\*(", tagp.tagname);
		    if (!do_search(NULL, '/', '/', pbuf, pbuflen, (int)1,
							 search_options, NULL))
		    {
			
			pbuflen = vim_snprintf((char *)pbuf, LSIZE, "^\\[#a-zA-Z_]\\.\\*\\<%s\\s\\*(",
								tagp.tagname);
			if (!do_search(NULL, '/', '/', pbuf, pbuflen, (int)1,
							 search_options, NULL))
			    found = 0;
		    }
		    *tagp.tagname_end = cc;
		}
		if (found == 0)
		{
		    emsg(_(e_cannot_find_tag_pattern));
		    curwin->w_cursor.lnum = save_lnum;
		}
		else
		{
		    
		    if (found == 2 || !save_p_ic)
		    {
			msg(_(e_couldnt_find_tag_just_guessing));
			if (!msg_scrolled && msg_silent == 0)
			{
			    out_flush();
			    ui_delay(1010L, TRUE);
			}
		    }
		    retval = OK;
		}
	    }
	    p_ws = save_p_ws;
	    p_ic = save_p_ic;
	    p_scs = save_p_scs;

	    
	    
	    check_cursor();
	}
	else
	{
	    int		save_secure = secure;

	    
	    secure = 1;
#ifdef HAVE_SANDBOX
	    ++sandbox;
#endif
	    curwin->w_cursor.lnum = 1;		
	    do_cmdline_cmd(pbuf);
	    retval = OK;

	    
	    
	    if (secure == 2)
		wait_return(TRUE);
	    secure = save_secure;
#ifdef HAVE_SANDBOX
	    --sandbox;
#endif
	}

	magic_overruled = save_magic_overruled;
#ifdef FEAT_SEARCH_EXTRA
	
	if (search_options)
	    set_no_hlsearch(save_no_hlsearch);
#endif

	
	if (getfile_result == GETFILE_OPEN_OTHER)
	    retval = OK;

	if (retval == OK)
	{
	    
	    if (curbuf->b_help)
		set_topline(curwin, curwin->w_cursor.lnum);
#ifdef FEAT_FOLDING
	    if ((fdo_flags & FDO_TAG) && old_KeyTyped)
		foldOpenCursor();
#endif
	}

#if defined(FEAT_QUICKFIX)
	if (g_do_tagpreview != 0
			   && curwin != curwin_save && win_valid(curwin_save))
	{
	    
	    validate_cursor();
	    redraw_later(UPD_VALID);
	    win_enter(curwin_save, TRUE);
	}
#endif

	if (RedrawingDisabled > 0)
	    --RedrawingDisabled;
    }
    else
    {
	if (RedrawingDisabled > 0)
	    --RedrawingDisabled;
	got_int = FALSE;  

	if (postponed_split)		
	{
	    win_close(curwin, FALSE);
	    postponed_split = 0;
	}
#if defined(FEAT_QUICKFIX) && defined(FEAT_PROP_POPUP)
	else if (WIN_IS_POPUP(curwin))
	{
	    win_T   *wp = curwin;

	    if (win_valid(curwin_save))
		win_enter(curwin_save, TRUE);
	    popup_close(wp->w_id, FALSE);
	}
#endif
    }
#if defined(FEAT_QUICKFIX) && defined(FEAT_PROP_POPUP)
    if (WIN_IS_POPUP(curwin))
	
	win_enter(firstwin, TRUE);
#endif

erret:
#if defined(FEAT_QUICKFIX)
    g_do_tagpreview = 0; 
#endif
    vim_free(lbuf);
    vim_free(pbuf);
    vim_free(tofree_fname);
    vim_free(full_fname);

    return retval;
}


    static char_u *
expand_tag_fname(char_u *fname, char_u *tag_fname, int expand)
{
    char_u	*p;
    char_u	*retval;
    char_u	*expanded_fname = NULL;
    expand_T	xpc;

    
    if (expand && mch_has_wildcard(fname))
    {
	ExpandInit(&xpc);
	xpc.xp_context = EXPAND_FILES;
	expanded_fname = ExpandOne(&xpc, fname, NULL,
			    WILD_LIST_NOTFOUND|WILD_SILENT, WILD_EXPAND_FREE);
	if (expanded_fname != NULL)
	    fname = expanded_fname;
    }

    if ((p_tr || curbuf->b_help)
	    && !vim_isAbsName(fname)
	    && (p = gettail(tag_fname)) != tag_fname)
    {
	retval = alloc(MAXPATHL);
	if (retval != NULL)
	{
	    STRCPY(retval, tag_fname);
	    vim_strncpy(retval + (p - tag_fname), fname,
					      MAXPATHL - (p - tag_fname) - 1);
	    
	    simplify_filename(retval);
	}
    }
    else
	retval = vim_strsave(fname);

    vim_free(expanded_fname);

    return retval;
}


    static int
test_for_current(
#ifdef FEAT_EMACS_TAGS
    int	    is_etag,
#endif
    char_u  *fname,
    char_u  *fname_end,
    char_u  *tag_fname,
    char_u  *buf_ffname)
{
    int	    c;
    int	    retval = FALSE;
    char_u  *fullname;

    if (buf_ffname != NULL)	
    {
#ifdef FEAT_EMACS_TAGS
	if (is_etag)
	    c = 0;	    
	else
#endif
	{
	    c = *fname_end;
	    *fname_end = NUL;
	}
	fullname = expand_tag_fname(fname, tag_fname, TRUE);
	if (fullname != NULL)
	{
	    retval = (fullpathcmp(fullname, buf_ffname, TRUE, TRUE) & FPC_SAME);
	    vim_free(fullname);
	}
#ifdef FEAT_EMACS_TAGS
	if (!is_etag)
#endif
	    *fname_end = c;
    }

    return retval;
}


    static int
find_extra(char_u **pp)
{
    char_u	*str = *pp;
    char_u	first_char = **pp;

    
    for (;;)
    {
	if (VIM_ISDIGIT(*str))
	    str = skipdigits(str + 1);
	else if (*str == '/' || *str == '?')
	{
	    str = skip_regexp(str + 1, *str, FALSE);
	    if (*str != first_char)
		str = NULL;
	    else
		++str;
	}
	else
	{
	    
	    str = (char_u *)strstr((char *)str, "|;\"");
	    if (str != NULL)
	    {
		++str;
		break;
	    }

	}
	if (str == NULL || *str != ';'
		  || !(VIM_ISDIGIT(str[1]) || str[1] == '/' || str[1] == '?'))
	    break;
	++str;	
	first_char = *str;
    }

    if (str != NULL && STRNCMP(str, ";\"", 2) == 0)
    {
	*pp = str;
	return OK;
    }
    return FAIL;
}


    void
tagstack_clear_entry(taggy_T *item)
{
    VIM_CLEAR(item->tagname);
    VIM_CLEAR(item->user_data);
}

    int
expand_tags(
    int		tagnames,	
    char_u	*pat,
    int		*num_file,
    char_u	***file)
{
    int		i;
    int		extra_flag;
    char_u	*name_buf;
    size_t	name_buf_size = 100;
    tagptrs_T	t_p;
    int		ret;

    name_buf = alloc(name_buf_size);
    if (name_buf == NULL)
	return FAIL;

    if (tagnames)
	extra_flag = TAG_NAMES;
    else
	extra_flag = 0;
    if (pat[0] == '/')
	ret = find_tags(pat + 1, num_file, file,
		TAG_REGEXP | extra_flag | TAG_VERBOSE | TAG_NO_TAGFUNC,
		TAG_MANY, curbuf->b_ffname);
    else
	ret = find_tags(pat, num_file, file,
	      TAG_REGEXP | extra_flag | TAG_VERBOSE | TAG_NO_TAGFUNC | TAG_NOIC,
		TAG_MANY, curbuf->b_ffname);
    if (ret == OK && !tagnames)
    {
	 
	 
	 for (i = 0; i < *num_file; i++)
	 {
	     size_t	len;

	     parse_match((*file)[i], &t_p);
	     len = t_p.tagname_end - t_p.tagname;
	     if (len > name_buf_size - 3)
	     {
		 char_u *buf;

		 name_buf_size = len + 3;
		 buf = vim_realloc(name_buf, name_buf_size);
		 if (buf == NULL)
		 {
		     vim_free(name_buf);
		     return FAIL;
		 }
		 name_buf = buf;
	     }

	     mch_memmove(name_buf, t_p.tagname, len);
	     name_buf[len++] = 0;
	     name_buf[len++] = (t_p.tagkind != NULL && *t_p.tagkind)
							  ? *t_p.tagkind : 'f';
	     name_buf[len++] = 0;
	     mch_memmove((*file)[i] + len, t_p.fname,
						    t_p.fname_end - t_p.fname);
	     (*file)[i][len + (t_p.fname_end - t_p.fname)] = 0;
	     mch_memmove((*file)[i], name_buf, len);
	}
    }

    vim_free(name_buf);
    return ret;
}

#if defined(FEAT_EVAL) || defined(PROTO)

    static int
add_tag_field(
    dict_T  *dict,
    char    *field_name,
    char_u  *start,		
    char_u  *end)		
{
    char_u	*buf;
    int		len = 0;
    int		retval;

    
    if (dict_has_key(dict, field_name))
    {
	if (p_verbose > 0)
	{
	    verbose_enter();
	    smsg(_("Duplicate field name: %s"), field_name);
	    verbose_leave();
	}
	return FAIL;
    }
    buf = alloc(MAXPATHL);
    if (buf == NULL)
	return FAIL;
    if (start != NULL)
    {
	if (end == NULL)
	{
	    end = start + STRLEN(start);
	    while (end > start && (end[-1] == '\r' || end[-1] == '\n'))
		--end;
	}
	len = (int)(end - start);
	if (len > MAXPATHL - 1)
	    len = MAXPATHL - 1;
	vim_strncpy(buf, start, len);
    }
    buf[len] = NUL;
    retval = dict_add_string(dict, field_name, buf);
    vim_free(buf);
    return retval;
}


    int
get_tags(list_T *list, char_u *pat, char_u *buf_fname)
{
    int		num_matches, i, ret;
    char_u	**matches, *p;
    char_u	*full_fname;
    dict_T	*dict;
    tagptrs_T	tp;
    int	is_static;

    ret = find_tags(pat, &num_matches, &matches,
				TAG_REGEXP | TAG_NOIC, (int)MAXCOL, buf_fname);
    if (ret != OK || num_matches <= 0)
	return ret;

    for (i = 0; i < num_matches; ++i)
    {
	if (parse_match(matches[i], &tp) == FAIL)
	{
	    vim_free(matches[i]);
	    continue;
	}

	is_static = test_for_static(&tp);

	
	if (STRNCMP(tp.tagname, "!_TAG_", 6) == 0)
	{
	    vim_free(matches[i]);
	    continue;
	}

	if ((dict = dict_alloc()) == NULL)
	{
	    ret = FAIL;
	    vim_free(matches[i]);
	    break;
	}
	if (list_append_dict(list, dict) == FAIL)
	    ret = FAIL;

	full_fname = tag_full_fname(&tp);
	if (add_tag_field(dict, "name", tp.tagname, tp.tagname_end) == FAIL
		|| add_tag_field(dict, "filename", full_fname,
		    NULL) == FAIL
		|| add_tag_field(dict, "cmd", tp.command,
		    tp.command_end) == FAIL
		|| add_tag_field(dict, "kind", tp.tagkind,
		    tp.tagkind_end) == FAIL
		|| dict_add_number(dict, "static", is_static) == FAIL)
	    ret = FAIL;

	vim_free(full_fname);

	if (tp.command_end != NULL)
	{
	    for (p = tp.command_end + 3;
		    *p != NUL && *p != '\n' && *p != '\r'; MB_PTR_ADV(p))
	    {
		if (p == tp.tagkind || (p + 5 == tp.tagkind
			    && STRNCMP(p, "kind:", 5) == 0))
		    
		    p = tp.tagkind_end - 1;
		else if (STRNCMP(p, "file:", 5) == 0)
		    
		    p += 4;
		else if (!VIM_ISWHITE(*p))
		{
		    char_u	*s, *n;
		    int	len;

		    
		    
		    n = p;
		    while (*p != NUL && *p >= ' ' && *p < 127 && *p != ':')
			++p;
		    len = (int)(p - n);
		    if (*p == ':' && len > 0)
		    {
			s = ++p;
			while (*p != NUL && *p >= ' ')
			    ++p;
			n[len] = NUL;
			if (add_tag_field(dict, (char *)n, s, p) == FAIL)
			    ret = FAIL;
			n[len] = ':';
		    }
		    else
			
			while (*p != NUL && *p >= ' ')
			    ++p;
		    if (*p == NUL)
			break;
		}
	    }
	}

	vim_free(matches[i]);
    }
    vim_free(matches);
    return ret;
}


    static void
get_tag_details(taggy_T *tag, dict_T *retdict)
{
    list_T	*pos;
    fmark_T	*fmark;

    dict_add_string(retdict, "tagname", tag->tagname);
    dict_add_number(retdict, "matchnr", tag->cur_match + 1);
    dict_add_number(retdict, "bufnr", tag->cur_fnum);
    if (tag->user_data)
	dict_add_string(retdict, "user_data", tag->user_data);

    if ((pos = list_alloc_id(aid_tagstack_from)) == NULL)
	return;
    dict_add_list(retdict, "from", pos);

    fmark = &tag->fmark;
    list_append_number(pos,
			(varnumber_T)(fmark->fnum != -1 ? fmark->fnum : 0));
    list_append_number(pos, (varnumber_T)fmark->mark.lnum);
    list_append_number(pos, (varnumber_T)(fmark->mark.col == MAXCOL ?
					MAXCOL : fmark->mark.col + 1));
    list_append_number(pos, (varnumber_T)fmark->mark.coladd);
}


    void
get_tagstack(win_T *wp, dict_T *retdict)
{
    list_T	*l;
    int		i;
    dict_T	*d;

    dict_add_number(retdict, "length", wp->w_tagstacklen);
    dict_add_number(retdict, "curidx", wp->w_tagstackidx + 1);
    l = list_alloc_id(aid_tagstack_items);
    if (l == NULL)
	return;
    dict_add_list(retdict, "items", l);

    for (i = 0; i < wp->w_tagstacklen; i++)
    {
	if ((d = dict_alloc_id(aid_tagstack_details)) == NULL)
	    return;
	list_append_dict(l, d);

	get_tag_details(&wp->w_tagstack[i], d);
    }
}


    static void
tagstack_clear(win_T *wp)
{
    int i;

    
    for (i = 0; i < wp->w_tagstacklen; ++i)
	tagstack_clear_entry(&wp->w_tagstack[i]);
    wp->w_tagstacklen = 0;
    wp->w_tagstackidx = 0;
}


    static void
tagstack_shift(win_T *wp)
{
    taggy_T	*tagstack = wp->w_tagstack;
    int		i;

    tagstack_clear_entry(&tagstack[0]);
    for (i = 1; i < wp->w_tagstacklen; ++i)
	tagstack[i - 1] = tagstack[i];
    wp->w_tagstacklen--;
}


    static void
tagstack_push_item(
	win_T	*wp,
	char_u	*tagname,
	int	cur_fnum,
	int	cur_match,
	pos_T	mark,
	int	fnum,
	char_u  *user_data)
{
    taggy_T	*tagstack = wp->w_tagstack;
    int		idx = wp->w_tagstacklen;	

    
    if (idx >= TAGSTACKSIZE)
    {
	tagstack_shift(wp);
	idx = TAGSTACKSIZE - 1;
    }

    wp->w_tagstacklen++;
    tagstack[idx].tagname = tagname;
    tagstack[idx].cur_fnum = cur_fnum;
    tagstack[idx].cur_match = cur_match;
    if (tagstack[idx].cur_match < 0)
	tagstack[idx].cur_match = 0;
    tagstack[idx].fmark.mark = mark;
    tagstack[idx].fmark.fnum = fnum;
    tagstack[idx].user_data = user_data;
}


    static void
tagstack_push_items(win_T *wp, list_T *l)
{
    listitem_T	*li;
    dictitem_T	*di;
    dict_T	*itemdict;
    char_u	*tagname;
    pos_T	mark;
    int		fnum;

    
    FOR_ALL_LIST_ITEMS(l, li)
    {
	if (li->li_tv.v_type != VAR_DICT || li->li_tv.vval.v_dict == NULL)
	    continue;				
	itemdict = li->li_tv.vval.v_dict;

	
	if ((di = dict_find(itemdict, (char_u *)"from", -1)) == NULL)
	    continue;
	if (list2fpos(&di->di_tv, &mark, &fnum, NULL, FALSE) != OK)
	    continue;
	if ((tagname = dict_get_string(itemdict, "tagname", TRUE)) == NULL)
	    continue;

	if (mark.col > 0)
	    mark.col--;
	tagstack_push_item(wp, tagname,
		(int)dict_get_number(itemdict, "bufnr"),
		(int)dict_get_number(itemdict, "matchnr") - 1,
		mark, fnum,
		dict_get_string(itemdict, "user_data", TRUE));
    }
}


    static void
tagstack_set_curidx(win_T *wp, int curidx)
{
    wp->w_tagstackidx = curidx;
    if (wp->w_tagstackidx < 0)			
	wp->w_tagstackidx = 0;
    if (wp->w_tagstackidx > wp->w_tagstacklen)
	wp->w_tagstackidx = wp->w_tagstacklen;
}


    int
set_tagstack(win_T *wp, dict_T *d, int action)
{
    dictitem_T	*di;
    list_T	*l = NULL;

#ifdef FEAT_EVAL
    
    if (tfu_in_use)
    {
	emsg(_(e_cannot_modify_tag_stack_within_tagfunc));
	return FAIL;
    }
#endif

    if ((di = dict_find(d, (char_u *)"items", -1)) != NULL)
    {
	if (di->di_tv.v_type != VAR_LIST)
	{
	    emsg(_(e_list_required));
	    return FAIL;
	}
	l = di->di_tv.vval.v_list;
    }

    if ((di = dict_find(d, (char_u *)"curidx", -1)) != NULL)
	tagstack_set_curidx(wp, (int)tv_get_number(&di->di_tv) - 1);

    if (action == 't')		    
    {
	taggy_T	*tagstack = wp->w_tagstack;
	int	tagstackidx = wp->w_tagstackidx;
	int	tagstacklen = wp->w_tagstacklen;

	
	while (tagstackidx < tagstacklen)
	    tagstack_clear_entry(&tagstack[--tagstacklen]);
	wp->w_tagstacklen = tagstacklen;
    }

    if (l != NULL)
    {
	if (action == 'r')		
	    tagstack_clear(wp);

	tagstack_push_items(wp, l);
	
	wp->w_tagstackidx = wp->w_tagstacklen;
    }

    return OK;
}
#endif
