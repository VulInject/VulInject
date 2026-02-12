int dlg_bye(struct dlg_cell *dlg, str *hdrs, int side) {
str all_hdrs = {0, 0};
int ret;

if (side == DLG_CALLER_LEG) {
if (dlg->dflags & DLG_FLAG_CALLERBYE)
return -1;
dlg->dflags |= DLG_FLAG_CALLERBYE;
} else {
if (dlg->dflags & DLG_FLAG_CALLEEBYE)
return -1;
dlg->dflags |= DLG_FLAG_CALLEEBYE;
}
if ((build_extra_hdr(dlg, hdrs, &all_hdrs)) != 0) {
LM_ERR("failed to build dlg headers\n");
return -1;
}
ret = send_bye(dlg, side, &all_hdrs);
pkg_free(all_hdrs.s);
return ret;
}