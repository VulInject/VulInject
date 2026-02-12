static int op_main_limit(struct AliasMenuData *mdata, int op)
{
struct Menu *menu = mdata->menu;
int rc = mutt_pattern_alias_func(_("Limit to addresses matching: "), mdata, menu);
if (rc != 0)
return FR_NO_ACTION;

alias_array_sort(&mdata->ava, mdata->sub);
alias_set_title(mdata->sbar, mdata->title, mdata->limit);
menu_queue_redraw(menu, MENU_REDRAW_FULL);
window_redraw(NULL);

return FR_SUCCESS;
}