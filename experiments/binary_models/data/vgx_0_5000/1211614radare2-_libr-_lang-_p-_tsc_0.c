static bool lang_tsc_run(RLangSession *s, const char *code, int len) {
char *ts_ofile = r_str_newf (".tmp.ts");
bool rv = r_file_dump (ts_ofile, (const ut8 *)code, len, 0);
if (rv) {
rv = lang_tsc_file (s, ts_ofile);
}
free (ts_ofile);
return rv;
}

static RLangPlugin r_lang_plugin_tsc = {
.name = "tsc",
.ext = "ts",
.author = "pancake",
.license = "LGPL",
.desc = "Use #!tsc script.ts",
.run = lang_tsc_run,
.run_file = (void*)lang_tsc_file,
};