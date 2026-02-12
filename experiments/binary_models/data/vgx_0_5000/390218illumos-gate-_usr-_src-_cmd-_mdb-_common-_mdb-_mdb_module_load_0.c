static int
module_load(void *fp, const mdb_map_t *map, const char *fullname)
{
mdb_modload_data_t *mld = fp;
const char *name = strbasename(fullname);

if (mdb_module_load(name, mld->mld_mode) == 0 && mdb.m_term != NULL) {
if (mld->mld_first == TRUE) {
mdb_iob_puts(mdb.m_out, "Loading modules: [");
mld->mld_first = FALSE;
}
mdb_iob_printf(mdb.m_out, " %s", name);
mdb_iob_flush(mdb.m_out);
}

if (strstr(fullname, "/libc/") != NULL) {

return (module_load(fp, map, "libc.so.1"));
}

if (strstr(fullname, "ld.so") != NULL) {

(void) mdb_module_load("list", mld->mld_mode);
}

return (0);
}