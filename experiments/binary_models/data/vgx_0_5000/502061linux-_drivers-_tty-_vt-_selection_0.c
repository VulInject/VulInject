static int vc_selection(struct vc_data *vc, struct tiocl_selection *v,
struct tty_struct *tty)
{
int ps, pe;

poke_blanked_console();

if (v->sel_mode == TIOCL_SELCLEAR) {

clear_selection();
return 0;
}

v->xs = min_t(u16, v->xs - 1, vc->vc_cols - 1);
v->ys = min_t(u16, v->ys - 1, vc->vc_rows - 1);
v->xe = min_t(u16, v->xe - 1, vc->vc_cols - 1);
v->ye = min_t(u16, v->ye - 1, vc->vc_rows - 1);

if (mouse_reporting() && (v->sel_mode & TIOCL_SELMOUSEREPORT)) {
mouse_report(tty, v->sel_mode & TIOCL_SELBUTTONMASK, v->xs,
v->ys);
return 0;
}

ps = v->ys * vc->vc_size_row + (v->xs << 1);
pe = v->ye * vc->vc_size_row + (v->xe << 1);
if (ps > pe)	
swap(ps, pe);

if (vc_sel.cons != vc) {
clear_selection();
vc_sel.cons = vc;
}

return vc_do_selection(vc, v->sel_mode, ps, pe);
}