typedef FILE *(*orig_fopen64_t)(const char *pathname, const char *mode);
static orig_fopen64_t orig_fopen64 = NULL;
FILE *fopen64(const char *pathname, const char *mode) {
printf("%s %s\n", __FUNCTION__, pathname);
if (!orig_fopen64)
orig_fopen64 = (orig_fopen_t)dlsym(RTLD_NEXT, "fopen64");
if (!blacklist_loaded)
load_blacklist();

if (storage_find(pathname))
sendlog(name(), __FUNCTION__, pathname);
FILE *rv = orig_fopen64(pathname, mode);
return rv;
}