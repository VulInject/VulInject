



#include "vim.h"

#if defined(FEAT_SIGNS) || defined(PROTO)


typedef struct sign sign_T;

struct sign
{
    sign_T	*sn_next;	
    int		sn_typenr;	
    char_u	*sn_name;	
    char_u	*sn_icon;	
# ifdef FEAT_SIGN_ICONS
    void	*sn_image;	
# endif
    char_u	*sn_text;	
    int		sn_line_hl;	
    int		sn_text_hl;	
    int		sn_cul_hl;	
    int		sn_num_hl;	
    int		sn_priority;	
};

static sign_T	*first_sign = NULL;
static int	next_sign_typenr = 1;

static void sign_list_defined(sign_T *sp);
static void sign_undefine(sign_T *sp, sign_T *sp_prev);

static char *cmds[] = {
			"define",
# define SIGNCMD_DEFINE	0
			"undefine",
# define SIGNCMD_UNDEFINE 1
			"list",
# define SIGNCMD_LIST	2
			"place",
# define SIGNCMD_PLACE	3
			"unplace",
# define SIGNCMD_UNPLACE 4
			"jump",
# define SIGNCMD_JUMP	5
			NULL
# define SIGNCMD_LAST	6
};

#define FOR_ALL_SIGNS(sp)	\
    for ((sp) = first_sign; (sp) != NULL; (sp) = (sp)->sn_next)

static hashtab_T	sg_table;	
static int		next_sign_id = 1; 


    void
init_signs(void)
{
    hash_init(&sg_table);		
}


    static signgroup_T *
sign_group_ref(char_u *groupname)
{
    hash_T		hash;
    hashitem_T		*hi;
    signgroup_T		*group;

    hash = hash_hash(groupname);
    hi = hash_lookup(&sg_table, groupname, hash);
    if (HASHITEM_EMPTY(hi))
    {
	
	group = alloc(offsetof(signgroup_T, sg_name) + STRLEN(groupname) + 1);
	if (group == NULL)
	    return NULL;
	STRCPY(group->sg_name, groupname);
	group->sg_refcount = 1;
	group->sg_next_sign_id = 1;
	hash_add_item(&sg_table, hi, group->sg_name, hash);
    }
    else
    {
	
	group = HI2SG(hi);
	group->sg_refcount++;
    }

    return group;
}


    static void
sign_group_unref(char_u *groupname)
{
    hashitem_T		*hi;
    signgroup_T		*group;

    hi = hash_find(&sg_table, groupname);
    if (HASHITEM_EMPTY(hi))
	return;

    group = HI2SG(hi);
    group->sg_refcount--;
    if (group->sg_refcount == 0)
    {
	
	hash_remove(&sg_table, hi, "sign remove");
	vim_free(group);
    }
}


    static int
sign_in_group(sign_entry_T *sign, char_u *group)
{
    return ((group != NULL && STRCMP(group, "*") == 0)
	    || (group == NULL && sign->se_group == NULL)
	    || (group != NULL && sign->se_group != NULL
			      && STRCMP(group, sign->se_group->sg_name) == 0));
}


    static int
sign_group_for_window(sign_entry_T *sign, win_T *wp)
{
    int for_popup = sign->se_group != NULL
			&& STRNCMP("PopUp", sign->se_group->sg_name, 5) == 0;

    return WIN_IS_POPUP(wp) ? for_popup : !for_popup;
}


    static int
sign_group_get_next_signid(buf_T *buf, char_u *groupname)
{
    int			id = 1;
    signgroup_T		*group = NULL;
    sign_entry_T	*sign;
    hashitem_T		*hi;
    int			found = FALSE;

    if (groupname != NULL)
    {
	hi = hash_find(&sg_table, groupname);
	if (HASHITEM_EMPTY(hi))
	    return id;
	group = HI2SG(hi);
    }

    
    while (!found)
    {
	if (group == NULL)
	    id = next_sign_id++;		
	else
	    id = group->sg_next_sign_id++;

	
	found = TRUE;
	FOR_ALL_SIGNS_IN_BUF(buf, sign)
	{
	    if (id == sign->se_id && sign_in_group(sign, groupname))
	    {
		found = FALSE;		
		break;
	    }
	}
    }

    return id;
}


    static void
insert_sign(
    buf_T	*buf,		
    sign_entry_T *prev,		
    sign_entry_T *next,		
    int		id,		
    char_u	*group,		
    int		prio,		
    linenr_T	lnum,		
    int		typenr)		
{
    sign_entry_T *newsign;

    newsign = lalloc_id(sizeof(sign_entry_T), FALSE, aid_insert_sign);
    if (newsign == NULL)
	return;

    newsign->se_id = id;
    newsign->se_lnum = lnum;
    newsign->se_typenr = typenr;
    if (group != NULL)
    {
	newsign->se_group = sign_group_ref(group);
	if (newsign->se_group == NULL)
	{
	    vim_free(newsign);
	    return;
	}
    }
    else
	newsign->se_group = NULL;
    newsign->se_priority = prio;
    newsign->se_next = next;
    newsign->se_prev = prev;
    if (next != NULL)
	next->se_prev = newsign;

    if (prev == NULL)
    {
	
	
	if (buf->b_signlist == NULL)
	{
	    redraw_buf_later(buf, UPD_NOT_VALID);
	    changed_line_abv_curs();
	}

	
	buf->b_signlist = newsign;
#ifdef FEAT_NETBEANS_INTG
	if (netbeans_active())
	    buf->b_has_sign_column = TRUE;
#endif
    }
    else
	prev->se_next = newsign;
}


    static void
insert_sign_by_lnum_prio(
    buf_T	*buf,		
    sign_entry_T *prev,		
    int		id,		
    char_u	*group,		
    int		prio,		
    linenr_T	lnum,		
    int		typenr)		
{
    sign_entry_T	*sign;

    
    
    while (prev != NULL && prev->se_lnum == lnum && prev->se_priority <= prio)
	prev = prev->se_prev;
    if (prev == NULL)
	sign = buf->b_signlist;
    else
	sign = prev->se_next;

    insert_sign(buf, prev, sign, id, group, prio, lnum, typenr);
}


    static sign_T *
find_sign_by_typenr(int typenr)
{
    sign_T	*sp;

    FOR_ALL_SIGNS(sp)
	if (sp->sn_typenr == typenr)
	    return sp;
    return NULL;
}


    static char_u *
sign_typenr2name(int typenr)
{
    sign_T	*sp;

    FOR_ALL_SIGNS(sp)
	if (sp->sn_typenr == typenr)
	    return sp->sn_name;
    return (char_u *)_("[Deleted]");
}


    static dict_T *
sign_get_info(sign_entry_T *sign)
{
    dict_T	*d;

    if ((d = dict_alloc_id(aid_sign_getinfo)) == NULL)
	return NULL;
    dict_add_number(d, "id", sign->se_id);
    dict_add_string(d, "group", (sign->se_group == NULL) ?
				       (char_u *)"" : sign->se_group->sg_name);
    dict_add_number(d, "lnum", sign->se_lnum);
    dict_add_string(d, "name", sign_typenr2name(sign->se_typenr));
    dict_add_number(d, "priority", sign->se_priority);

    return d;
}


    static void
sign_sort_by_prio_on_line(buf_T *buf, sign_entry_T *sign)
{
    sign_entry_T *p = NULL;

    
    
    if ((sign->se_prev == NULL
		|| sign->se_prev->se_lnum != sign->se_lnum
		|| sign->se_prev->se_priority > sign->se_priority)
	    && (sign->se_next == NULL
		|| sign->se_next->se_lnum != sign->se_lnum
		|| sign->se_next->se_priority < sign->se_priority))
	return;

    
    

    
    p = sign;
    while (p->se_prev != NULL && p->se_prev->se_lnum == sign->se_lnum
			       && p->se_prev->se_priority <= sign->se_priority)
	p = p->se_prev;

    if (p == sign)
    {
	
	
	p = sign->se_next;
	while (p->se_next != NULL && p->se_next->se_lnum == sign->se_lnum
				&& p->se_next->se_priority > sign->se_priority)
	    p = p->se_next;
    }

    
    if (buf->b_signlist == sign)
	buf->b_signlist = sign->se_next;
    if (sign->se_prev != NULL)
	sign->se_prev->se_next = sign->se_next;
    if (sign->se_next != NULL)
	sign->se_next->se_prev = sign->se_prev;
    sign->se_prev = NULL;
    sign->se_next = NULL;

    
    if (p->se_priority <= sign->se_priority)
    {
	
	sign->se_prev = p->se_prev;
	sign->se_next = p;
	p->se_prev = sign;
	if (sign->se_prev != NULL)
	    sign->se_prev->se_next = sign;
	if (buf->b_signlist == p)
	    buf->b_signlist = sign;
    }
    else
    {
	
	sign->se_prev = p;
	sign->se_next = p->se_next;
	p->se_next = sign;
	if (sign->se_next != NULL)
	    sign->se_next->se_prev = sign;
    }
}


    static void
buf_addsign(
    buf_T	*buf,		
    int		id,		
    char_u	*groupname,	
    int		prio,		
    linenr_T	lnum,		
    int		typenr)		
{
    sign_entry_T	*sign;		
    sign_entry_T	*prev;		

    prev = NULL;
    FOR_ALL_SIGNS_IN_BUF(buf, sign)
    {
	if (lnum == sign->se_lnum && id == sign->se_id
		&& sign_in_group(sign, groupname))
	{
	    
	    sign->se_typenr = typenr;
	    sign->se_priority = prio;
	    sign_sort_by_prio_on_line(buf, sign);
	    return;
	}
	else if (lnum < sign->se_lnum)
	{
	    insert_sign_by_lnum_prio(buf, prev, id, groupname, prio,
								lnum, typenr);
	    return;
	}
	prev = sign;
    }

    insert_sign_by_lnum_prio(buf, prev, id, groupname, prio, lnum, typenr);
    return;
}


    static linenr_T
buf_change_sign_type(
    buf_T	*buf,		
    int		markId,		
    char_u	*group,		
    int		typenr,		
    int		prio)		
{
    sign_entry_T	*sign;		

    FOR_ALL_SIGNS_IN_BUF(buf, sign)
    {
	if (sign->se_id == markId && sign_in_group(sign, group))
	{
	    sign->se_typenr = typenr;
	    sign->se_priority = prio;
	    sign_sort_by_prio_on_line(buf, sign);
	    return sign->se_lnum;
	}
    }

    return (linenr_T)0;
}


    int
buf_get_signattrs(win_T *wp, linenr_T lnum, sign_attrs_T *sattr)
{
    sign_entry_T	*sign;
    sign_T		*sp;
    buf_T		*buf = wp->w_buffer;

    CLEAR_POINTER(sattr);

    FOR_ALL_SIGNS_IN_BUF(buf, sign)
    {
	if (sign->se_lnum > lnum)
	    
	    
	    break;

	if (sign->se_lnum == lnum
# ifdef FEAT_PROP_POPUP
		&& sign_group_for_window(sign, wp)
# endif
		)
	{
	    sattr->sat_typenr = sign->se_typenr;
	    sp = find_sign_by_typenr(sign->se_typenr);
	    if (sp == NULL)
		return FALSE;

# ifdef FEAT_SIGN_ICONS
	    sattr->sat_icon = sp->sn_image;
# endif
	    sattr->sat_text = sp->sn_text;
	    if (sattr->sat_text != NULL && sp->sn_text_hl > 0)
		sattr->sat_texthl = syn_id2attr(sp->sn_text_hl);
	    if (sp->sn_line_hl > 0)
		sattr->sat_linehl = syn_id2attr(sp->sn_line_hl);
	    if (sp->sn_cul_hl > 0)
		sattr->sat_culhl = syn_id2attr(sp->sn_cul_hl);
	    if (sp->sn_num_hl > 0)
		sattr->sat_numhl = syn_id2attr(sp->sn_num_hl);
	    sattr->sat_priority = sign->se_priority;

	    
	    
	    if (sign->se_next != NULL
		    && sign->se_next->se_priority == sign->se_priority
		    && sign->se_next->se_lnum == sign->se_lnum)
	    {
		sign_T	*next_sp = find_sign_by_typenr(sign->se_next->se_typenr);

		if (next_sp != NULL)
		{
		    if (sattr->sat_icon == NULL && sattr->sat_text == NULL)
		    {
# ifdef FEAT_SIGN_ICONS
			sattr->sat_icon = next_sp->sn_image;
# endif
			sattr->sat_text = next_sp->sn_text;
		    }
		    if (sp->sn_text_hl <= 0 && next_sp->sn_text_hl > 0)
			sattr->sat_texthl = syn_id2attr(next_sp->sn_text_hl);
		    if (sp->sn_line_hl <= 0 && next_sp->sn_line_hl > 0)
			sattr->sat_linehl = syn_id2attr(next_sp->sn_line_hl);
		    if (sp->sn_cul_hl <= 0 && next_sp->sn_cul_hl > 0)
			sattr->sat_culhl = syn_id2attr(next_sp->sn_cul_hl);
		    if (sp->sn_num_hl <= 0 && next_sp->sn_num_hl > 0)
			sattr->sat_numhl = syn_id2attr(next_sp->sn_num_hl);
		}
	    }
	    return TRUE;
	}
    }
    return FALSE;
}


    linenr_T
buf_delsign(
    buf_T	*buf,		
    linenr_T	atlnum,		
    int		id,		
    char_u	*group)		
{
    sign_entry_T	**lastp;	
    sign_entry_T	*sign;		
    sign_entry_T	*next;		
    linenr_T		lnum;		

    lastp = &buf->b_signlist;
    lnum = 0;
    for (sign = buf->b_signlist; sign != NULL; sign = next)
    {
	next = sign->se_next;
	if ((id == 0 || sign->se_id == id)
		&& (atlnum == 0 || sign->se_lnum == atlnum)
		&& sign_in_group(sign, group))

	{
	    *lastp = next;
	    if (next != NULL)
		next->se_prev = sign->se_prev;
	    lnum = sign->se_lnum;
	    if (sign->se_group != NULL)
		sign_group_unref(sign->se_group->sg_name);
	    vim_free(sign);
	    redraw_buf_line_later(buf, lnum);

	    
	    
	    
	    
	    if (group == NULL
		    || (*group != '*' && id != 0)
		    || (*group == '*' && atlnum != 0))
		break;
	}
	else
	    lastp = &sign->se_next;
    }

    
    
    if (buf->b_signlist == NULL)
    {
	redraw_buf_later(buf, UPD_NOT_VALID);
	changed_line_abv_curs();
    }

    return lnum;
}



    int
buf_findsign(
    buf_T	*buf,		
    int		id,		
    char_u	*group)		
{
    sign_entry_T	*sign;		

    FOR_ALL_SIGNS_IN_BUF(buf, sign)
	if (sign->se_id == id && sign_in_group(sign, group))
	    return sign->se_lnum;

    return 0;
}


    static sign_entry_T *
buf_getsign_at_line(
    buf_T	*buf,		
    linenr_T	lnum,		
    char_u	*groupname)	
{
    sign_entry_T	*sign;		

    FOR_ALL_SIGNS_IN_BUF(buf, sign)
    {
	if (sign->se_lnum > lnum)
	    
	    
	    break;

	if (sign->se_lnum == lnum && sign_in_group(sign, groupname))
	    return sign;
    }

    return NULL;
}


    int
buf_findsign_id(
    buf_T	*buf,		
    linenr_T	lnum,		
    char_u	*groupname)	
{
    sign_entry_T	*sign;		

    sign = buf_getsign_at_line(buf, lnum, groupname);
    if (sign != NULL)
	return sign->se_id;

    return 0;
}

# if defined(FEAT_NETBEANS_INTG) || defined(PROTO)

    int
buf_findsigntype_id(
    buf_T	*buf,		
    linenr_T	lnum,		
    int		typenr)		
{
    sign_entry_T	*sign;		

    FOR_ALL_SIGNS_IN_BUF(buf, sign)
    {
	if (sign->se_lnum > lnum)
	    
	    
	    break;

	if (sign->se_lnum == lnum && sign->se_typenr == typenr)
	    return sign->se_id;
    }

    return 0;
}


#  if defined(FEAT_SIGN_ICONS) || defined(PROTO)

    int
buf_signcount(buf_T *buf, linenr_T lnum)
{
    sign_entry_T	*sign;		
    int			count = 0;

    FOR_ALL_SIGNS_IN_BUF(buf, sign)
    {
	if (sign->se_lnum > lnum)
	    
	    
	    break;

	if (sign->se_lnum == lnum)
	    if (sign_get_image(sign->se_typenr) != NULL)
		count++;
    }

    return count;
}
#  endif 
# endif 


    void
buf_delete_signs(buf_T *buf, char_u *group)
{
    sign_entry_T	*sign;
    sign_entry_T	**lastp;	
    sign_entry_T	*next;

    
    
    if (buf->b_signlist != NULL && curwin != NULL)
    {
	redraw_buf_later(buf, UPD_NOT_VALID);
	changed_line_abv_curs();
    }

    lastp = &buf->b_signlist;
    for (sign = buf->b_signlist; sign != NULL; sign = next)
    {
	next = sign->se_next;
	if (sign_in_group(sign, group))
	{
	    *lastp = next;
	    if (next != NULL)
		next->se_prev = sign->se_prev;
	    if (sign->se_group != NULL)
		sign_group_unref(sign->se_group->sg_name);
	    vim_free(sign);
	}
	else
	    lastp = &sign->se_next;
    }
}


    static void
sign_list_placed(buf_T *rbuf, char_u *sign_group)
{
    buf_T		*buf;
    sign_entry_T	*sign;
    char		lbuf[MSG_BUF_LEN];
    char		group[MSG_BUF_LEN];

    msg_puts_title(_("\n--- Signs ---"));
    msg_putchar('\n');
    if (rbuf == NULL)
	buf = firstbuf;
    else
	buf = rbuf;
    while (buf != NULL && !got_int)
    {
	if (buf->b_signlist != NULL)
	{
	    vim_snprintf(lbuf, MSG_BUF_LEN, _("Signs for %s:"), buf->b_fname);
	    msg_puts_attr(lbuf, HL_ATTR(HLF_D));
	    msg_putchar('\n');
	}
	FOR_ALL_SIGNS_IN_BUF(buf, sign)
	{
	    if (got_int)
		break;
	    if (!sign_in_group(sign, sign_group))
		continue;
	    if (sign->se_group != NULL)
		vim_snprintf(group, MSG_BUF_LEN, _("  group=%s"),
						      sign->se_group->sg_name);
	    else
		group[0] = '\0';
	    vim_snprintf(lbuf, MSG_BUF_LEN,
			   _("    line=%ld  id=%d%s  name=%s  priority=%d"),
			   (int)sign->se_lnum, sign->se_id, group,
			 sign_typenr2name(sign->se_typenr), sign->se_priority);
	    msg_puts(lbuf);
	    msg_putchar('\n');
	}
	if (rbuf != NULL)
	    break;
	buf = buf->b_next;
    }
}


    void
sign_mark_adjust(
    linenr_T	line1,
    linenr_T	line2,
    int	amount,
    int	amount_after)
{
    sign_entry_T	*sign;		
    linenr_T		new_lnum;

    FOR_ALL_SIGNS_IN_BUF(curbuf, sign)
    {
	
	if (sign->se_lnum < line1)
	    continue;
	new_lnum = sign->se_lnum;
	if (sign->se_lnum <= line2)
	{
	    if (amount != MAXLNUM)
		new_lnum += amount;
	}
	else if (sign->se_lnum > line2)
	    
	    new_lnum += amount_after;

	
	
	
	if (new_lnum <= curbuf->b_ml.ml_line_count)
	    sign->se_lnum = new_lnum;
    }
}


    static int
sign_cmd_idx(
    char_u	*begin_cmd,	
    char_u	*end_cmd)	
{
    int		idx;
    char	save = *end_cmd;

    *end_cmd = NUL;
    for (idx = 0; ; ++idx)
	if (cmds[idx] == NULL || STRCMP(begin_cmd, cmds[idx]) == 0)
	    break;
    *end_cmd = save;
    return idx;
}


    static sign_T *
sign_find(char_u *name, sign_T **sp_prev)
{
    sign_T *sp;

    if (sp_prev != NULL)
	*sp_prev = NULL;
    FOR_ALL_SIGNS(sp)
    {
	if (STRCMP(sp->sn_name, name) == 0)
	    break;
	if (sp_prev != NULL)
	    *sp_prev = sp;
    }

    return sp;
}


    static sign_T *
alloc_new_sign(char_u *name)
{
    sign_T	*sp;
    sign_T	*lp;
    int	start = next_sign_typenr;

    
    sp = alloc_clear_id(sizeof(sign_T), aid_sign_define_by_name);
    if (sp == NULL)
	return NULL;

    
    
    
    for (lp = first_sign; lp != NULL; )
    {
	if (lp->sn_typenr == next_sign_typenr)
	{
	    ++next_sign_typenr;
	    if (next_sign_typenr == MAX_TYPENR)
		next_sign_typenr = 1;
	    if (next_sign_typenr == start)
	    {
		vim_free(sp);
		emsg(_(e_too_many_signs_defined));
		return NULL;
	    }
	    lp = first_sign;  
	    continue;
	}
	lp = lp->sn_next;
    }

    sp->sn_typenr = next_sign_typenr;
    if (++next_sign_typenr == MAX_TYPENR)
	next_sign_typenr = 1; 

    sp->sn_name = vim_strsave(name);
    if (sp->sn_name == NULL)  
    {
	vim_free(sp);
	return NULL;
    }

    return sp;
}


    static void
sign_define_init_icon(sign_T *sp, char_u *icon)
{
    vim_free(sp->sn_icon);
    sp->sn_icon = vim_strsave(icon);
    backslash_halve(sp->sn_icon);
# ifdef FEAT_SIGN_ICONS
    if (gui.in_use)
    {
	out_flush();
	if (sp->sn_image != NULL)
	    gui_mch_destroy_sign(sp->sn_image);
	sp->sn_image = gui_mch_register_sign(sp->sn_icon);
    }
# endif
}


    static int
sign_define_init_text(sign_T *sp, char_u *text)
{
    char_u	*s;
    char_u	*endp;
    int		cells;
    int		len;

    endp = text + (int)STRLEN(text);

    
    for (s = text; s + 1 < endp; ++s)
	if (*s == '\\')
	{
	    STRMOVE(s, s + 1);
	    --endp;
	}

    
    if (has_mbyte)
    {
	cells = 0;
	for (s = text; s < endp; s += (*mb_ptr2len)(s))
	{
	    if (!vim_isprintc((*mb_ptr2char)(s)))
		break;
	    cells += (*mb_ptr2cells)(s);
	}
    }
    else
    {
	for (s = text; s < endp; ++s)
	    if (!vim_isprintc(*s))
		break;
	cells = (int)(s - text);
    }

    
    if (s != endp || cells < 1 || cells > 2)
    {
	semsg(_(e_invalid_sign_text_str), text);
	return FAIL;
    }

    vim_free(sp->sn_text);
    
    
    len = (int)(endp - text + ((cells == 1) ? 1 : 0));
    sp->sn_text = vim_strnsave(text, len);

    
    if (sp->sn_text != NULL && cells == 1)
	STRCPY(sp->sn_text + len - 1, " ");

    return OK;
}


    int
sign_define_by_name(
	char_u	*name,
	char_u	*icon,
	char_u	*linehl,
	char_u	*text,
	char_u	*texthl,
	char_u	*culhl,
	char_u	*numhl,
	int	prio)
{
    sign_T	*sp_prev;
    sign_T	*sp;

    sp = sign_find(name, &sp_prev);
    if (sp == NULL)
    {
	sp = alloc_new_sign(name);
	if (sp == NULL)
	    return FAIL;

	
	if (sp_prev == NULL)
	    first_sign = sp;
	else
	    sp_prev->sn_next = sp;
    }
    else
    {
	win_T *wp;

	
	
	FOR_ALL_WINDOWS(wp)
	    if (wp->w_buffer->b_signlist != NULL)
		redraw_buf_later(wp->w_buffer, UPD_NOT_VALID);
    }

    
    if (icon != NULL)
	sign_define_init_icon(sp, icon);

    if (text != NULL && (sign_define_init_text(sp, text) == FAIL))
	return FAIL;

    sp->sn_priority = prio;

    if (linehl != NULL)
    {
	if (*linehl == NUL)
	    sp->sn_line_hl = 0;
	else
	    sp->sn_line_hl = syn_check_group(linehl, (int)STRLEN(linehl));
    }

    if (texthl != NULL)
    {
	if (*texthl == NUL)
	    sp->sn_text_hl = 0;
	else
	    sp->sn_text_hl = syn_check_group(texthl, (int)STRLEN(texthl));
    }

    if (culhl != NULL)
    {
	if (*culhl == NUL)
	    sp->sn_cul_hl = 0;
	else
	    sp->sn_cul_hl = syn_check_group(culhl, (int)STRLEN(culhl));
    }

    if (numhl != NULL)
    {
	if (*numhl == NUL)
	    sp->sn_num_hl = 0;
	else
	    sp->sn_num_hl = syn_check_group(numhl, (int)STRLEN(numhl));
    }

    return OK;
}


    int
sign_exists_by_name(char_u *name)
{
    return sign_find(name, NULL) != NULL;
}


    int
sign_undefine_by_name(char_u *name, int give_error)
{
    sign_T	*sp_prev;
    sign_T	*sp;

    sp = sign_find(name, &sp_prev);
    if (sp == NULL)
    {
	if (give_error)
	    semsg(_(e_unknown_sign_str), name);
	return FAIL;
    }
    sign_undefine(sp, sp_prev);

    return OK;
}


    static void
sign_list_by_name(char_u *name)
{
    sign_T	*sp;

    sp = sign_find(name, NULL);
    if (sp != NULL)
	sign_list_defined(sp);
    else
	semsg(_(e_unknown_sign_str), name);
}

    static void
may_force_numberwidth_recompute(buf_T *buf, int unplace)
{
    tabpage_T	*tp;
    win_T		*wp;

    FOR_ALL_TAB_WINDOWS(tp, wp)
	if (wp->w_buffer == buf
		&& (wp->w_p_nu || wp->w_p_rnu)
		&& (unplace || wp->w_nrwidth_width < 2)
		&& (*wp->w_p_scl == 'n' && *(wp->w_p_scl + 1) == 'u'))
	    wp->w_nrwidth_line_count = 0;
}


    int
sign_place(
	int		*sign_id,
	char_u		*sign_group,
	char_u		*sign_name,
	buf_T		*buf,
	linenr_T	lnum,
	int		prio)
{
    sign_T	*sp;

    
    if (sign_group != NULL && (*sign_group == '*' || *sign_group == '\0'))
	return FAIL;

    FOR_ALL_SIGNS(sp)
	if (STRCMP(sp->sn_name, sign_name) == 0)
	    break;
    if (sp == NULL)
    {
	semsg(_(e_unknown_sign_str), sign_name);
	return FAIL;
    }
    if (*sign_id == 0)
	*sign_id = sign_group_get_next_signid(buf, sign_group);

    
    if (prio == -1)
	prio = (sp->sn_priority != -1) ? sp->sn_priority : SIGN_DEF_PRIO;

    if (lnum > 0)
	
	
	buf_addsign(buf, *sign_id, sign_group, prio, lnum, sp->sn_typenr);
    else
	
	lnum = buf_change_sign_type(buf, *sign_id, sign_group, sp->sn_typenr,
								prio);
    if (lnum > 0)
    {
	redraw_buf_line_later(buf, lnum);

	
	
	may_force_numberwidth_recompute(buf, FALSE);
    }
    else
    {
	semsg(_(e_not_possible_to_change_sign_str), sign_name);
	return FAIL;
    }

    return OK;
}


    static int
sign_unplace(int sign_id, char_u *sign_group, buf_T *buf, linenr_T atlnum)
{
    if (buf->b_signlist == NULL)	
	return OK;

    if (sign_id == 0)
    {
	
	redraw_buf_later(buf, UPD_NOT_VALID);
	buf_delete_signs(buf, sign_group);
    }
    else
    {
	linenr_T	lnum;

	
	lnum = buf_delsign(buf, atlnum, sign_id, sign_group);
	if (lnum == 0)
	    return FAIL;
    }

    
    
    
    if (buf->b_signlist == NULL)
	may_force_numberwidth_recompute(buf, TRUE);

    return OK;
}


    static void
sign_unplace_at_cursor(char_u *groupname)
{
    int		id = -1;

    id = buf_findsign_id(curwin->w_buffer, curwin->w_cursor.lnum, groupname);
    if (id > 0)
	sign_unplace(id, groupname, curwin->w_buffer, curwin->w_cursor.lnum);
    else
	emsg(_(e_missing_sign_number));
}


    static linenr_T
sign_jump(int sign_id, char_u *sign_group, buf_T *buf)
{
    linenr_T	lnum;

    if ((lnum = buf_findsign(buf, sign_id, sign_group)) <= 0)
    {
	semsg(_(e_invalid_sign_id_nr), sign_id);
	return -1;
    }

    
    if (buf_jump_open_win(buf) != NULL)
    {			
	curwin->w_cursor.lnum = lnum;
	check_cursor_lnum();
	beginline(BL_WHITE);
    }
    else
    {			
	char_u	*cmd;

	if (buf->b_fname == NULL)
	{
	    emsg(_(e_cannot_jump_to_buffer_that_does_not_have_name));
	    return -1;
	}
	cmd = alloc(STRLEN(buf->b_fname) + 25);
	if (cmd == NULL)
	    return -1;
	sprintf((char *)cmd, "e +%ld %s", (int)lnum, buf->b_fname);
	do_cmdline_cmd(cmd);
	vim_free(cmd);
    }
# ifdef FEAT_FOLDING
    foldOpenCursor();
# endif

    return lnum;
}


    static void
sign_define_cmd(char_u *sign_name, char_u *cmdline)
{
    char_u	*arg;
    char_u	*p = cmdline;
    char_u	*icon = NULL;
    char_u	*text = NULL;
    char_u	*linehl = NULL;
    char_u	*texthl = NULL;
    char_u	*culhl = NULL;
    char_u	*numhl = NULL;
    int		prio = -1;
    int		failed = FALSE;

    
    for (;;)
    {
	arg = skipwhite(p);
	if (*arg == NUL)
	    break;
	p = skiptowhite_esc(arg);
	if (STRNCMP(arg, "icon=", 5) == 0)
	{
	    arg += 5;
	    icon = vim_strnsave(arg, p - arg);
	}
	else if (STRNCMP(arg, "text=", 5) == 0)
	{
	    arg += 5;
	    text = vim_strnsave(arg, p - arg);
	}
	else if (STRNCMP(arg, "linehl=", 7) == 0)
	{
	    arg += 7;
	    linehl = vim_strnsave(arg, p - arg);
	}
	else if (STRNCMP(arg, "texthl=", 7) == 0)
	{
	    arg += 7;
	    texthl = vim_strnsave(arg, p - arg);
	}
	else if (STRNCMP(arg, "culhl=", 6) == 0)
	{
	    arg += 6;
	    culhl = vim_strnsave(arg, p - arg);
	}
	else if (STRNCMP(arg, "numhl=", 6) == 0)
	{
	    arg += 6;
	    numhl = vim_strnsave(arg, p - arg);
	}
	else if (STRNCMP(arg, "priority=", 9) == 0)
	{
	    arg += 9;
	    prio = atoi((char *)arg);
	}
	else
	{
	    semsg(_(e_invalid_argument_str), arg);
	    failed = TRUE;
	    break;
	}
    }

    if (!failed)
	sign_define_by_name(sign_name, icon, linehl, text, texthl, culhl, numhl, prio);

    vim_free(icon);
    vim_free(text);
    vim_free(linehl);
    vim_free(texthl);
    vim_free(culhl);
    vim_free(numhl);
}


    static void
sign_place_cmd(
	buf_T		*buf,
	linenr_T	lnum,
	char_u		*sign_name,
	int		id,
	char_u		*group,
	int		prio)
{
    if (id <= 0)
    {
	
	
	
	
	
	
	
	
	
	
	if (lnum >= 0 || sign_name != NULL
		|| (group != NULL && *group == '\0'))
	    emsg(_(e_invalid_argument));
	else
	    sign_list_placed(buf, group);
    }
    else
    {
	
	if (sign_name == NULL || buf == NULL
		|| (group != NULL && *group == '\0'))
	{
	    emsg(_(e_invalid_argument));
	    return;
	}

	sign_place(&id, group, sign_name, buf, lnum, prio);
    }
}


    static void
sign_unplace_cmd(
	buf_T		*buf,
	linenr_T	lnum,
	char_u		*sign_name,
	int		id,
	char_u		*group)
{
    if (lnum >= 0 || sign_name != NULL || (group != NULL && *group == '\0'))
    {
	emsg(_(e_invalid_argument));
	return;
    }

    if (id == -2)
    {
	if (buf != NULL)
	    
	    
	    
	    
	    
	    
	    sign_unplace(0, group, buf, 0);
	else
	    
	    
	    
	    FOR_ALL_BUFFERS(buf)
		if (buf->b_signlist != NULL)
		    buf_delete_signs(buf, group);
    }
    else
    {
	if (buf != NULL)
	    
	    
	    
	    
	    
	    
	    sign_unplace(id, group, buf, 0);
	else
	{
	    if (id == -1)
	    {
		
		
		sign_unplace_at_cursor(group);
	    }
	    else
	    {
		
		
		
		FOR_ALL_BUFFERS(buf)
		    sign_unplace(id, group, buf, 0);
	    }
	}
    }
}


    static void
sign_jump_cmd(
	buf_T		*buf,
	linenr_T	lnum,
	char_u		*sign_name,
	int		id,
	char_u		*group)
{
    if (sign_name == NULL && group == NULL && id == -1)
    {
	emsg(_(e_argument_required));
	return;
    }

    if (buf == NULL || (group != NULL && *group == '\0')
					     || lnum >= 0 || sign_name != NULL)
    {
	
	
	emsg(_(e_invalid_argument));
	return;
    }
    (void)sign_jump(id, group, buf);
}


    static int
parse_sign_cmd_args(
	int	    cmd,
	char_u	    *arg,
	char_u	    **sign_name,
	int	    *signid,
	char_u	    **group,
	int	    *prio,
	buf_T	    **buf,
	linenr_T    *lnum)
{
    char_u	*arg1;
    char_u	*name;
    char_u	*filename = NULL;
    int		lnum_arg = FALSE;

    
    arg1 = arg;
    if (VIM_ISDIGIT(*arg))
    {
	*signid = getdigits(&arg);
	if (!VIM_ISWHITE(*arg) && *arg != NUL)
	{
	    *signid = -1;
	    arg = arg1;
	}
	else
	    arg = skipwhite(arg);
    }

    while (*arg != NUL)
    {
	if (STRNCMP(arg, "line=", 5) == 0)
	{
	    arg += 5;
	    *lnum = atoi((char *)arg);
	    arg = skiptowhite(arg);
	    lnum_arg = TRUE;
	}
	else if (STRNCMP(arg, "*", 1) == 0 && cmd == SIGNCMD_UNPLACE)
	{
	    if (*signid != -1)
	    {
		emsg(_(e_invalid_argument));
		return FAIL;
	    }
	    *signid = -2;
	    arg = skiptowhite(arg + 1);
	}
	else if (STRNCMP(arg, "name=", 5) == 0)
	{
	    arg += 5;
	    name = arg;
	    arg = skiptowhite(arg);
	    if (*arg != NUL)
		*arg++ = NUL;
	    while (name[0] == '0' && name[1] != NUL)
		++name;
	    *sign_name = name;
	}
	else if (STRNCMP(arg, "group=", 6) == 0)
	{
	    arg += 6;
	    *group = arg;
	    arg = skiptowhite(arg);
	    if (*arg != NUL)
		*arg++ = NUL;
	}
	else if (STRNCMP(arg, "priority=", 9) == 0)
	{
	    arg += 9;
	    *prio = atoi((char *)arg);
	    arg = skiptowhite(arg);
	}
	else if (STRNCMP(arg, "file=", 5) == 0)
	{
	    arg += 5;
	    filename = arg;
	    *buf = buflist_findname_exp(arg);
	    break;
	}
	else if (STRNCMP(arg, "buffer=", 7) == 0)
	{
	    arg += 7;
	    filename = arg;
	    *buf = buflist_findnr((int)getdigits(&arg));
	    if (*skipwhite(arg) != NUL)
		semsg(_(e_trailing_characters_str), arg);
	    break;
	}
	else
	{
	    emsg(_(e_invalid_argument));
	    return FAIL;
	}
	arg = skipwhite(arg);
    }

    if (filename != NULL && *buf == NULL)
    {
	semsg(_(e_invalid_buffer_name_str), filename);
	return FAIL;
    }

    
    
    if (filename == NULL && ((cmd == SIGNCMD_PLACE && lnum_arg)
						       || cmd == SIGNCMD_JUMP))
	*buf = curwin->w_buffer;

    return OK;
}


    void
ex_sign(exarg_T *eap)
{
    char_u	*arg = eap->arg;
    char_u	*p;
    int		idx;
    sign_T	*sp;
    buf_T	*buf = NULL;

    
    p = skiptowhite(arg);
    idx = sign_cmd_idx(arg, p);
    if (idx == SIGNCMD_LAST)
    {
	semsg(_(e_unknown_sign_command_str), arg);
	return;
    }
    arg = skipwhite(p);

    if (idx <= SIGNCMD_LIST)
    {
	
	if (idx == SIGNCMD_LIST && *arg == NUL)
	{
	    
	    for (sp = first_sign; sp != NULL && !got_int; sp = sp->sn_next)
		sign_list_defined(sp);
	}
	else if (*arg == NUL)
	    emsg(_(e_missing_sign_name));
	else
	{
	    char_u	*name;

	    
	    
	    p = skiptowhite(arg);
	    if (*p != NUL)
		*p++ = NUL;
	    while (arg[0] == '0' && arg[1] != NUL)
		++arg;
	    name = vim_strsave(arg);

	    if (idx == SIGNCMD_DEFINE)
		sign_define_cmd(name, p);
	    else if (idx == SIGNCMD_LIST)
		
		sign_list_by_name(name);
	    else
		
		sign_undefine_by_name(name, TRUE);

	    vim_free(name);
	    return;
	}
    }
    else
    {
	int		id = -1;
	linenr_T	lnum = -1;
	char_u		*sign_name = NULL;
	char_u		*group = NULL;
	int		prio = -1;

	
	if (parse_sign_cmd_args(idx, arg, &sign_name, &id, &group, &prio,
							  &buf, &lnum) == FAIL)
	    return;

	if (idx == SIGNCMD_PLACE)
	    sign_place_cmd(buf, lnum, sign_name, id, group, prio);
	else if (idx == SIGNCMD_UNPLACE)
	    sign_unplace_cmd(buf, lnum, sign_name, id, group);
	else if (idx == SIGNCMD_JUMP)
	    sign_jump_cmd(buf, lnum, sign_name, id, group);
    }
}


    static void
sign_getinfo(sign_T *sp, dict_T *retdict)
{
    char_u	*p;

    dict_add_string(retdict, "name", sp->sn_name);
    if (sp->sn_icon != NULL)
	dict_add_string(retdict, "icon", sp->sn_icon);
    if (sp->sn_text != NULL)
	dict_add_string(retdict, "text", sp->sn_text);
    if (sp->sn_priority > 0)
	dict_add_number(retdict, "priority", sp->sn_priority);
    if (sp->sn_line_hl > 0)
    {
	p = get_highlight_name_ext(NULL, sp->sn_line_hl - 1, FALSE);
	if (p == NULL)
	    p = (char_u *)"NONE";
	dict_add_string(retdict, "linehl", p);
    }
    if (sp->sn_text_hl > 0)
    {
	p = get_highlight_name_ext(NULL, sp->sn_text_hl - 1, FALSE);
	if (p == NULL)
	    p = (char_u *)"NONE";
	dict_add_string(retdict, "texthl", p);
    }
    if (sp->sn_cul_hl > 0)
    {
	p = get_highlight_name_ext(NULL, sp->sn_cul_hl - 1, FALSE);
	if (p == NULL)
	    p = (char_u *)"NONE";
	dict_add_string(retdict, "culhl", p);
    }
    if (sp->sn_num_hl > 0)
    {
	p = get_highlight_name_ext(NULL, sp->sn_num_hl - 1, FALSE);
	if (p == NULL)
	    p = (char_u *)"NONE";
	dict_add_string(retdict, "numhl", p);
    }
}


    static void
sign_getlist(char_u *name, list_T *retlist)
{
    sign_T	*sp = first_sign;
    dict_T	*dict;

    if (name != NULL)
    {
	sp = sign_find(name, NULL);
	if (sp == NULL)
	    return;
    }

    for (; sp != NULL && !got_int; sp = sp->sn_next)
    {
	if ((dict = dict_alloc_id(aid_sign_getlist)) == NULL)
	    return;
	if (list_append_dict(retlist, dict) == FAIL)
	    return;
	sign_getinfo(sp, dict);

	if (name != NULL)	    
	    break;
    }
}


    void
get_buffer_signs(buf_T *buf, list_T *l)
{
    sign_entry_T	*sign;
    dict_T		*d;

    FOR_ALL_SIGNS_IN_BUF(buf, sign)
    {
	if ((d = sign_get_info(sign)) != NULL)
	    list_append_dict(l, d);
    }
}


    static void
sign_get_placed_in_buf(
	buf_T		*buf,
	linenr_T	lnum,
	int		sign_id,
	char_u		*sign_group,
	list_T		*retlist)
{
    dict_T		*d;
    list_T		*l;
    sign_entry_T	*sign;
    dict_T		*sdict;

    if ((d = dict_alloc_id(aid_sign_getplaced_dict)) == NULL)
	return;
    list_append_dict(retlist, d);

    dict_add_number(d, "bufnr", (int)buf->b_fnum);

    if ((l = list_alloc_id(aid_sign_getplaced_list)) == NULL)
	return;
    dict_add_list(d, "signs", l);

    FOR_ALL_SIGNS_IN_BUF(buf, sign)
    {
	if (!sign_in_group(sign, sign_group))
	    continue;
	if ((lnum == 0 && sign_id == 0)
		|| (sign_id == 0 && lnum == sign->se_lnum)
		|| (lnum == 0 && sign_id == sign->se_id)
		|| (lnum == sign->se_lnum && sign_id == sign->se_id))
	{
	    if ((sdict = sign_get_info(sign)) != NULL)
		list_append_dict(l, sdict);
	}
    }
}


    static void
sign_get_placed(
	buf_T		*buf,
	linenr_T	lnum,
	int		sign_id,
	char_u		*sign_group,
	list_T		*retlist)
{
    if (buf != NULL)
	sign_get_placed_in_buf(buf, lnum, sign_id, sign_group, retlist);
    else
    {
	FOR_ALL_BUFFERS(buf)
	    if (buf->b_signlist != NULL)
		sign_get_placed_in_buf(buf, 0, sign_id, sign_group, retlist);
    }
}

# if defined(FEAT_SIGN_ICONS) || defined(PROTO)

    void
sign_gui_started(void)
{
    sign_T	*sp;

    FOR_ALL_SIGNS(sp)
	if (sp->sn_icon != NULL)
	    sp->sn_image = gui_mch_register_sign(sp->sn_icon);
}
# endif


    static void
sign_list_defined(sign_T *sp)
{
    char_u	*p;
    char	lbuf[MSG_BUF_LEN];

    smsg("sign %s", sp->sn_name);
    if (sp->sn_icon != NULL)
    {
	msg_puts(" icon=");
	msg_outtrans(sp->sn_icon);
# ifdef FEAT_SIGN_ICONS
	if (sp->sn_image == NULL)
	    msg_puts(_(" (NOT FOUND)"));
# else
	msg_puts(_(" (not supported)"));
# endif
    }
    if (sp->sn_text != NULL)
    {
	msg_puts(" text=");
	msg_outtrans(sp->sn_text);
    }
    if (sp->sn_priority > 0)
    {
	vim_snprintf(lbuf, MSG_BUF_LEN, " priority=%d", sp->sn_priority);
	msg_puts(lbuf);
    }
    if (sp->sn_line_hl > 0)
    {
	msg_puts(" linehl=");
	p = get_highlight_name_ext(NULL, sp->sn_line_hl - 1, FALSE);
	if (p == NULL)
	    msg_puts("NONE");
	else
	    msg_puts((char *)p);
    }
    if (sp->sn_text_hl > 0)
    {
	msg_puts(" texthl=");
	p = get_highlight_name_ext(NULL, sp->sn_text_hl - 1, FALSE);
	if (p == NULL)
	    msg_puts("NONE");
	else
	    msg_puts((char *)p);
    }
    if (sp->sn_cul_hl > 0)
    {
	msg_puts(" culhl=");
	p = get_highlight_name_ext(NULL, sp->sn_cul_hl - 1, FALSE);
	if (p == NULL)
	    msg_puts("NONE");
	else
	    msg_puts((char *)p);
    }
    if (sp->sn_num_hl > 0)
    {
	msg_puts(" numhl=");
	p = get_highlight_name_ext(NULL, sp->sn_num_hl - 1, FALSE);
	if (p == NULL)
	    msg_puts("NONE");
	else
	    msg_puts((char *)p);
    }
}


    static void
sign_undefine(sign_T *sp, sign_T *sp_prev)
{
    vim_free(sp->sn_name);
    vim_free(sp->sn_icon);
# ifdef FEAT_SIGN_ICONS
    if (sp->sn_image != NULL)
    {
	out_flush();
	gui_mch_destroy_sign(sp->sn_image);
    }
# endif
    vim_free(sp->sn_text);
    if (sp_prev == NULL)
	first_sign = sp->sn_next;
    else
	sp_prev->sn_next = sp->sn_next;
    vim_free(sp);
}

# if defined(FEAT_SIGN_ICONS) || defined(PROTO)
    void *
sign_get_image(
    int		typenr)		
{
    sign_T	*sp;

    FOR_ALL_SIGNS(sp)
	if (sp->sn_typenr == typenr)
	    return sp->sn_image;
    return NULL;
}
# endif


    void
free_signs(void)
{
    while (first_sign != NULL)
	sign_undefine(first_sign, NULL);
}

static enum
{
    EXP_SUBCMD,		
    EXP_DEFINE,		
    EXP_PLACE,		
    EXP_LIST,		
    EXP_UNPLACE,	
    EXP_SIGN_NAMES,	
    EXP_SIGN_GROUPS	
} expand_what;


    static char_u *
get_nth_sign_name(int idx)
{
    int		current_idx;
    sign_T	*sp;

    
    current_idx = 0;
    FOR_ALL_SIGNS(sp)
	if (current_idx++ == idx)
	    return sp->sn_name;
    return NULL;
}


    static char_u *
get_nth_sign_group_name(int idx)
{
    int		current_idx;
    int		todo;
    hashitem_T	*hi;
    signgroup_T	*group;

    
    current_idx = 0;
    todo = (int)sg_table.ht_used;
    FOR_ALL_HASHTAB_ITEMS(&sg_table, hi, todo)
    {
	if (!HASHITEM_EMPTY(hi))
	{
	    --todo;
	    if (current_idx++ == idx)
	    {
		group = HI2SG(hi);
		return group->sg_name;
	    }
	}
    }
    return NULL;
}


    char_u *
get_sign_name(expand_T *xp UNUSED, int idx)
{
    switch (expand_what)
    {
    case EXP_SUBCMD:
	return (char_u *)cmds[idx];
    case EXP_DEFINE:
	{
	    char *define_arg[] =
	    {
		"culhl=", "icon=", "linehl=", "numhl=", "text=", "texthl=", "priority=",
		NULL
	    };
	    return (char_u *)define_arg[idx];
	}
    case EXP_PLACE:
	{
	    char *place_arg[] =
	    {
		"line=", "name=", "group=", "priority=", "file=",
		"buffer=", NULL
	    };
	    return (char_u *)place_arg[idx];
	}
    case EXP_LIST:
	{
	    char *list_arg[] =
	    {
		"group=", "file=", "buffer=", NULL
	    };
	    return (char_u *)list_arg[idx];
	}
    case EXP_UNPLACE:
	{
	    char *unplace_arg[] = { "group=", "file=", "buffer=", NULL };
	    return (char_u *)unplace_arg[idx];
	}
    case EXP_SIGN_NAMES:
	return get_nth_sign_name(idx);
    case EXP_SIGN_GROUPS:
	return get_nth_sign_group_name(idx);
    default:
	return NULL;
    }
}


    void
set_context_in_sign_cmd(expand_T *xp, char_u *arg)
{
    char_u	*p;
    char_u	*end_subcmd;
    char_u	*last;
    int		cmd_idx;
    char_u	*begin_subcmd_args;

    
    xp->xp_context = EXPAND_SIGN;
    expand_what = EXP_SUBCMD;
    xp->xp_pattern = arg;

    end_subcmd = skiptowhite(arg);
    if (*end_subcmd == NUL)
	
	
	return;

    cmd_idx = sign_cmd_idx(arg, end_subcmd);

    
    
    
    begin_subcmd_args = skipwhite(end_subcmd);

    

    
    
    

    
    p = begin_subcmd_args;
    do
    {
	p = skipwhite(p);
	last = p;
	p = skiptowhite(p);
    } while (*p != NUL);

    p = vim_strchr(last, '=');

    
    
    
    if (p == NULL)
    {
	
	xp->xp_pattern = last;
	switch (cmd_idx)
	{
	    case SIGNCMD_DEFINE:
		expand_what = EXP_DEFINE;
		break;
	    case SIGNCMD_PLACE:
		
		if (VIM_ISDIGIT(*begin_subcmd_args))
		    
		    expand_what = EXP_PLACE;
		else
		    
		    expand_what = EXP_LIST;
		break;
	    case SIGNCMD_LIST:
	    case SIGNCMD_UNDEFINE:
		
		
		expand_what = EXP_SIGN_NAMES;
		break;
	    case SIGNCMD_JUMP:
	    case SIGNCMD_UNPLACE:
		expand_what = EXP_UNPLACE;
		break;
	    default:
		xp->xp_context = EXPAND_NOTHING;
	}
    }
    else
    {
	
	xp->xp_pattern = p + 1;
	switch (cmd_idx)
	{
	    case SIGNCMD_DEFINE:
		if (STRNCMP(last, "texthl", 6) == 0
			|| STRNCMP(last, "linehl", 6) == 0
			|| STRNCMP(last, "culhl", 5) == 0
			|| STRNCMP(last, "numhl", 5) == 0)
		    xp->xp_context = EXPAND_HIGHLIGHT;
		else if (STRNCMP(last, "icon", 4) == 0)
		    xp->xp_context = EXPAND_FILES;
		else
		    xp->xp_context = EXPAND_NOTHING;
		break;
	    case SIGNCMD_PLACE:
		if (STRNCMP(last, "name", 4) == 0)
		    expand_what = EXP_SIGN_NAMES;
		else if (STRNCMP(last, "group", 5) == 0)
		    expand_what = EXP_SIGN_GROUPS;
		else if (STRNCMP(last, "file", 4) == 0)
		    xp->xp_context = EXPAND_BUFFERS;
		else
		    xp->xp_context = EXPAND_NOTHING;
		break;
	    case SIGNCMD_UNPLACE:
	    case SIGNCMD_JUMP:
		if (STRNCMP(last, "group", 5) == 0)
		    expand_what = EXP_SIGN_GROUPS;
		else if (STRNCMP(last, "file", 4) == 0)
		    xp->xp_context = EXPAND_BUFFERS;
		else
		    xp->xp_context = EXPAND_NOTHING;
		break;
	    default:
		xp->xp_context = EXPAND_NOTHING;
	}
    }
}


    static int
sign_define_from_dict(char_u *name_arg, dict_T *dict)
{
    char_u	*name = NULL;
    char_u	*icon = NULL;
    char_u	*linehl = NULL;
    char_u	*text = NULL;
    char_u	*texthl = NULL;
    char_u	*culhl = NULL;
    char_u	*numhl = NULL;
    int		prio = -1;
    int		retval = -1;

    if (name_arg == NULL)
    {
	if (dict == NULL)
	    return -1;
	name = dict_get_string(dict, "name", TRUE);
    }
    else
	name = vim_strsave(name_arg);
    if (name == NULL || name[0] == NUL)
	goto cleanup;
    if (dict != NULL)
    {
	icon = dict_get_string(dict, "icon", TRUE);
	linehl = dict_get_string(dict, "linehl", TRUE);
	text = dict_get_string(dict, "text", TRUE);
	texthl = dict_get_string(dict, "texthl", TRUE);
	culhl = dict_get_string(dict, "culhl", TRUE);
	numhl = dict_get_string(dict, "numhl", TRUE);
	prio = dict_get_number_def(dict, "priority", -1);
    }

    if (sign_define_by_name(name, icon, linehl, text, texthl, culhl, numhl, prio) == OK)
	retval = 0;

cleanup:
    vim_free(name);
    vim_free(icon);
    vim_free(linehl);
    vim_free(text);
    vim_free(texthl);
    vim_free(culhl);
    vim_free(numhl);

    return retval;
}


    static void
sign_define_multiple(list_T *l, list_T *retlist)
{
    listitem_T	*li;
    int		retval;

    FOR_ALL_LIST_ITEMS(l, li)
    {
	retval = -1;
	if (li->li_tv.v_type == VAR_DICT)
	    retval = sign_define_from_dict(NULL, li->li_tv.vval.v_dict);
	else
	    emsg(_(e_dictionary_required));
	list_append_number(retlist, retval);
    }
}


    void
f_sign_define(typval_T *argvars, typval_T *rettv)
{
    char_u	*name;

    if (in_vim9script()
	    && (check_for_string_or_list_arg(argvars, 0) == FAIL
		|| check_for_opt_dict_arg(argvars, 1) == FAIL))
	return;

    if (argvars[0].v_type == VAR_LIST && argvars[1].v_type == VAR_UNKNOWN)
    {
	
	if (rettv_list_alloc(rettv) == FAIL)
	    return;

	sign_define_multiple(argvars[0].vval.v_list, rettv->vval.v_list);
	return;
    }

    
    rettv->vval.v_number = -1;

    name = tv_get_string_chk(&argvars[0]);
    if (name == NULL)
	return;

    if (check_for_opt_dict_arg(argvars, 1) == FAIL)
	return;

    rettv->vval.v_number = sign_define_from_dict(name,
	    argvars[1].v_type == VAR_DICT ? argvars[1].vval.v_dict : NULL);
}


    void
f_sign_getdefined(typval_T *argvars, typval_T *rettv)
{
    char_u	*name = NULL;

    if (rettv_list_alloc_id(rettv, aid_sign_getdefined) == FAIL)
	return;

    if (in_vim9script() && check_for_opt_string_arg(argvars, 0) == FAIL)
	return;

    if (argvars[0].v_type != VAR_UNKNOWN)
	name = tv_get_string(&argvars[0]);

    sign_getlist(name, rettv->vval.v_list);
}


    void
f_sign_getplaced(typval_T *argvars, typval_T *rettv)
{
    buf_T	*buf = NULL;
    dict_T	*dict;
    dictitem_T	*di;
    linenr_T	lnum = 0;
    int		sign_id = 0;
    char_u	*group = NULL;
    int		notanum = FALSE;

    if (rettv_list_alloc_id(rettv, aid_sign_getplaced) == FAIL)
	return;

    if (in_vim9script()
	    && (check_for_opt_buffer_arg(argvars, 0) == FAIL
		|| (argvars[0].v_type != VAR_UNKNOWN
		    && check_for_opt_dict_arg(argvars, 1) == FAIL)))
	return;

    if (argvars[0].v_type != VAR_UNKNOWN)
    {
	
	buf = get_buf_arg(&argvars[0]);
	if (buf == NULL)
	    return;

	if (argvars[1].v_type != VAR_UNKNOWN)
	{
	    if (check_for_nonnull_dict_arg(argvars, 1) == FAIL)
		return;
	    dict = argvars[1].vval.v_dict;
	    if ((di = dict_find(dict, (char_u *)"lnum", -1)) != NULL)
	    {
		
		(void)tv_get_number_chk(&di->di_tv, &notanum);
		if (notanum)
		    return;
		lnum = tv_get_lnum(&di->di_tv);
	    }
	    if ((di = dict_find(dict, (char_u *)"id", -1)) != NULL)
	    {
		
		sign_id = (int)tv_get_number_chk(&di->di_tv, &notanum);
		if (notanum)
		    return;
	    }
	    if ((di = dict_find(dict, (char_u *)"group", -1)) != NULL)
	    {
		group = tv_get_string_chk(&di->di_tv);
		if (group == NULL)
		    return;
		if (*group == '\0')	
		    group = NULL;
	    }
	}
    }

    sign_get_placed(buf, lnum, sign_id, group, rettv->vval.v_list);
}


    void
f_sign_jump(typval_T *argvars, typval_T *rettv)
{
    int		sign_id;
    char_u	*sign_group = NULL;
    buf_T	*buf;
    int		notanum = FALSE;

    rettv->vval.v_number = -1;

    if (in_vim9script()
	    && (check_for_number_arg(argvars, 0) == FAIL
		|| check_for_string_arg(argvars, 1) == FAIL
		|| check_for_buffer_arg(argvars, 2) == FAIL))
	return;

    
    sign_id = (int)tv_get_number_chk(&argvars[0], &notanum);
    if (notanum)
	return;
    if (sign_id <= 0)
    {
	emsg(_(e_invalid_argument));
	return;
    }

    
    sign_group = tv_get_string_chk(&argvars[1]);
    if (sign_group == NULL)
	return;
    if (sign_group[0] == '\0')
	sign_group = NULL;			
    else
    {
	sign_group = vim_strsave(sign_group);
	if (sign_group == NULL)
	    return;
    }

    
    buf = get_buf_arg(&argvars[2]);
    if (buf == NULL)
	goto cleanup;

    rettv->vval.v_number = sign_jump(sign_id, sign_group, buf);

cleanup:
    vim_free(sign_group);
}


    static int
sign_place_from_dict(
	typval_T	*id_tv,
	typval_T	*group_tv,
	typval_T	*name_tv,
	typval_T	*buf_tv,
	dict_T		*dict)
{
    int		sign_id = 0;
    char_u	*group = NULL;
    char_u	*sign_name = NULL;
    buf_T	*buf = NULL;
    dictitem_T	*di;
    linenr_T	lnum = 0;
    int		prio = -1;
    int		notanum = FALSE;
    int		ret_sign_id = -1;

    
    if (id_tv == NULL)
    {
	di = dict_find(dict, (char_u *)"id", -1);
	if (di != NULL)
	    id_tv = &di->di_tv;
    }
    if (id_tv == NULL)
	sign_id = 0;
    else
    {
	sign_id = tv_get_number_chk(id_tv, &notanum);
	if (notanum)
	    return -1;
	if (sign_id < 0)
	{
	    emsg(_(e_invalid_argument));
	    return -1;
	}
    }

    
    if (group_tv == NULL)
    {
	di = dict_find(dict, (char_u *)"group", -1);
	if (di != NULL)
	    group_tv = &di->di_tv;
    }
    if (group_tv == NULL)
	group = NULL;				
    else
    {
	group = tv_get_string_chk(group_tv);
	if (group == NULL)
	    goto cleanup;
	if (group[0] == '\0')			
	    group = NULL;
	else
	{
	    group = vim_strsave(group);
	    if (group == NULL)
		return -1;
	}
    }

    
    if (name_tv == NULL)
    {
	di = dict_find(dict, (char_u *)"name", -1);
	if (di != NULL)
	    name_tv = &di->di_tv;
    }
    if (name_tv == NULL)
	goto cleanup;
    sign_name = tv_get_string_chk(name_tv);
    if (sign_name == NULL)
	goto cleanup;

    
    if (buf_tv == NULL)
    {
	di = dict_find(dict, (char_u *)"buffer", -1);
	if (di != NULL)
	    buf_tv = &di->di_tv;
    }
    if (buf_tv == NULL)
	goto cleanup;
    buf = get_buf_arg(buf_tv);
    if (buf == NULL)
	goto cleanup;

    
    di = dict_find(dict, (char_u *)"lnum", -1);
    if (di != NULL)
    {
	lnum = tv_get_lnum(&di->di_tv);
	if (lnum <= 0)
	{
	    emsg(_(e_invalid_argument));
	    goto cleanup;
	}
    }

    
    di = dict_find(dict, (char_u *)"priority", -1);
    if (di != NULL)
    {
	prio = (int)tv_get_number_chk(&di->di_tv, &notanum);
	if (notanum)
	    goto cleanup;
    }

    if (sign_place(&sign_id, group, sign_name, buf, lnum, prio) == OK)
	ret_sign_id = sign_id;

cleanup:
    vim_free(group);

    return ret_sign_id;
}


    void
f_sign_place(typval_T *argvars, typval_T *rettv)
{
    dict_T	*dict = NULL;

    rettv->vval.v_number = -1;

    if (in_vim9script()
	    && (check_for_number_arg(argvars, 0) == FAIL
		|| check_for_string_arg(argvars, 1) == FAIL
		|| check_for_string_arg(argvars, 2) == FAIL
		|| check_for_buffer_arg(argvars, 3) == FAIL
		|| check_for_opt_dict_arg(argvars, 4) == FAIL))
	return;

    if (argvars[4].v_type != VAR_UNKNOWN)
    {
	if (check_for_nonnull_dict_arg(argvars, 4) == FAIL)
	    return;
	dict = argvars[4].vval.v_dict;
    }

    rettv->vval.v_number = sign_place_from_dict(&argvars[0], &argvars[1],
					&argvars[2], &argvars[3], dict);
}


    void
f_sign_placelist(typval_T *argvars, typval_T *rettv)
{
    listitem_T	*li;
    int		sign_id;

    if (rettv_list_alloc(rettv) == FAIL)
	return;

    if (in_vim9script() && check_for_list_arg(argvars, 0) == FAIL)
	return;

    if (check_for_list_arg(argvars, 0) == FAIL)
	return;

    
    FOR_ALL_LIST_ITEMS(argvars[0].vval.v_list, li)
    {
	sign_id = -1;
	if (li->li_tv.v_type == VAR_DICT)
	    sign_id = sign_place_from_dict(NULL, NULL, NULL, NULL,
						li->li_tv.vval.v_dict);
	else
	    emsg(_(e_dictionary_required));
	list_append_number(rettv->vval.v_list, sign_id);
    }
}


    static void
sign_undefine_multiple(list_T *l, list_T *retlist)
{
    char_u	*name;
    listitem_T	*li;
    int		retval;

    FOR_ALL_LIST_ITEMS(l, li)
    {
	retval = -1;
	name = tv_get_string_chk(&li->li_tv);
	if (name != NULL && (sign_undefine_by_name(name, TRUE) == OK))
	    retval = 0;
	list_append_number(retlist, retval);
    }
}


    void
f_sign_undefine(typval_T *argvars, typval_T *rettv)
{
    char_u *name;

    if (in_vim9script()
	    && check_for_opt_string_or_list_arg(argvars, 0) == FAIL)
	return;

    if (argvars[0].v_type == VAR_LIST && argvars[1].v_type == VAR_UNKNOWN)
    {
	
	if (rettv_list_alloc(rettv) == FAIL)
	    return;

	sign_undefine_multiple(argvars[0].vval.v_list, rettv->vval.v_list);
	return;
    }

    rettv->vval.v_number = -1;

    if (argvars[0].v_type == VAR_UNKNOWN)
    {
	
	free_signs();
	rettv->vval.v_number = 0;
    }
    else
    {
	
	name = tv_get_string_chk(&argvars[0]);
	if (name == NULL)
	    return;

	if (sign_undefine_by_name(name, TRUE) == OK)
	    rettv->vval.v_number = 0;
    }
}


    static int
sign_unplace_from_dict(typval_T *group_tv, dict_T *dict)
{
    dictitem_T	*di;
    int		sign_id = 0;
    buf_T	*buf = NULL;
    char_u	*group = NULL;
    int		retval = -1;

    
    if (group_tv != NULL)
	group = tv_get_string(group_tv);
    else
	group = dict_get_string(dict, "group", FALSE);
    if (group != NULL)
    {
	if (group[0] == '\0')			
	    group = NULL;
	else
	{
	    group = vim_strsave(group);
	    if (group == NULL)
		return -1;
	}
    }

    if (dict != NULL)
    {
	if ((di = dict_find(dict, (char_u *)"buffer", -1)) != NULL)
	{
	    buf = get_buf_arg(&di->di_tv);
	    if (buf == NULL)
		goto cleanup;
	}
	if (dict_has_key(dict, "id"))
	{
	    sign_id = dict_get_number(dict, "id");
	    if (sign_id <= 0)
	    {
		emsg(_(e_invalid_argument));
		goto cleanup;
	    }
	}
    }

    if (buf == NULL)
    {
	
	retval = 0;
	FOR_ALL_BUFFERS(buf)
	    if (sign_unplace(sign_id, group, buf, 0) != OK)
		retval = -1;
    }
    else if (sign_unplace(sign_id, group, buf, 0) == OK)
	retval = 0;

cleanup:
    vim_free(group);

    return retval;
}

    sign_entry_T *
get_first_valid_sign(win_T *wp)
{
    sign_entry_T *sign = wp->w_buffer->b_signlist;

# ifdef FEAT_PROP_POPUP
    while (sign != NULL && !sign_group_for_window(sign, wp))
	sign = sign->se_next;
# endif
    return sign;
}


     int
signcolumn_on(win_T *wp)
{
    
    
    
    if (*wp->w_p_scl == 'n' && *(wp->w_p_scl + 1) == 'u')
	return get_first_valid_sign(wp) != NULL && !wp->w_p_nu && !wp->w_p_rnu;

    if (*wp->w_p_scl == 'n')
	return FALSE;
    if (*wp->w_p_scl == 'y')
	return TRUE;
    return (get_first_valid_sign(wp) != NULL
# ifdef FEAT_NETBEANS_INTG
			|| wp->w_buffer->b_has_sign_column
# endif
		    );
}


    void
f_sign_unplace(typval_T *argvars, typval_T *rettv)
{
    dict_T	*dict = NULL;

    rettv->vval.v_number = -1;

    if ((check_for_string_arg(argvars, 0) == FAIL
		|| check_for_opt_dict_arg(argvars, 1) == FAIL))
	return;

    if (argvars[1].v_type != VAR_UNKNOWN)
	dict = argvars[1].vval.v_dict;

    rettv->vval.v_number = sign_unplace_from_dict(&argvars[0], dict);
}


    void
f_sign_unplacelist(typval_T *argvars, typval_T *rettv)
{
    listitem_T	*li;
    int		retval;

    if (rettv_list_alloc(rettv) == FAIL)
	return;

    if (in_vim9script() && check_for_list_arg(argvars, 0) == FAIL)
	return;

    if (check_for_list_arg(argvars, 0) == FAIL)
	return;

    FOR_ALL_LIST_ITEMS(argvars[0].vval.v_list, li)
    {
	retval = -1;
	if (li->li_tv.v_type == VAR_DICT)
	    retval = sign_unplace_from_dict(NULL, li->li_tv.vval.v_dict);
	else
	    emsg(_(e_dictionary_required));
	list_append_number(rettv->vval.v_list, retval);
    }
}

#endif 
