static int
ctftest_check_symbol_cb(const char *obj, ctf_id_t type, ulong_t idx, void *arg)
{
ctftest_symbol_cb_t *cb = arg;
const check_symbol_t *tests = cb->csc_tests;
ctf_file_t *fp = cb->csc_fp;
uint_t i;

for (i = 0; tests[i].cs_symbol != NULL; i++) {
ctf_id_t id;

if (strcmp(obj, tests[i].cs_symbol) != 0)
continue;

id = ctftest_lookup_type(fp, tests[i].cs_type);
if (id == CTF_ERR) {
warnx("failed to lookup type %s for symbol %s",
tests[i].cs_type, tests[i].cs_symbol);
cb->csc_ret = B_FALSE;
return (0);
}

if (id != type) {
warnx("type mismatch for symbol %s, has type id %u, "
"but specified type %s has id %u",
tests[i].cs_symbol, type, tests[i].cs_type, id);
cb->csc_ret = B_FALSE;
return (0);
}
}

return (0);
}