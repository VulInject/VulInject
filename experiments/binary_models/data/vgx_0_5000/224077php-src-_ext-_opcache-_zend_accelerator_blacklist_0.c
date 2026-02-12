void zend_accel_blacklist_load(zend_blacklist *blacklist, char *filename)
{
glob_t globbuf;
int    ret;
unsigned int i;

memset(&globbuf, 0, sizeof(glob_t));

ret = glob(filename, 0, NULL, &globbuf);
if (ret == GLOB_NOMATCH || !globbuf.gl_pathc) {
if (!globbuf.gl_pathc) {
zend_accel_error(ACCEL_LOG_WARNING, "No blacklist file found matching: %s\n", filename);
} else {
for(i=0 ; i<globbuf.gl_pathc; i++) {
zend_accel_blacklist_loadone(blacklist, globbuf.gl_pathv[i]);
}
globfree(&globbuf);
}
zend_accel_blacklist_loadone(blacklist, filename);
zend_accel_blacklist_update_regexp(blacklist);
}