R_API bool r_anal_global_add(RAnal *anal, ut64 addr, const char *type_name, const char *name) {
RFlag *flags = anal->flb.f;
char *fmtstr = r_type_format (anal->sdb_types, type_name);
if (!fmtstr) {
eprintf ("Unknown type\n");
return false;
}
int fmtsize = r_print_format_struct_size (anal->print, fmtstr, 0, 0);
if (fmtsize < 1) {
fmtsize = 4;
}

RFlagItem *fi = r_flag_set_inspace (flags, GLOBAL_FLAGSPACE, name, addr, 1);
if (fi) {
r_flag_item_set_type (fi, fmtstr);
}
r_meta_set (anal, R_META_TYPE_FORMAT, addr, fmtsize, fmtstr);

r_type_set_link (anal->sdb_types, fmtstr, addr);
return true;
}