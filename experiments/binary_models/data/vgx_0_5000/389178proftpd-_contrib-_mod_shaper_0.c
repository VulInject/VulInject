static key_t shaper_get_key(const char *path) {
pr_fh_t *fh;
struct stat st;


fh = pr_fsio_open(path, O_WRONLY|O_CREAT);
if (fh == NULL) {
int xerrno = errno;

(void) pr_log_writefile(shaper_logfd, MOD_SHAPER_VERSION,
"error opening '%s': %s", path, strerror(xerrno));

errno = xerrno;
return -1;
}

if (pr_fsio_fstat(fh, &st) < 0) {
int xerrno = errno;

(void) pr_log_writefile(shaper_logfd, MOD_SHAPER_VERSION,
"error checking '%s': %s", path, strerror(xerrno));

pr_fsio_close(fh);
errno = xerrno;
return -1;
}

if (S_ISDIR(st.st_mode)) {
int xerrno = EISDIR;

(void) pr_log_writefile(shaper_logfd, MOD_SHAPER_VERSION,
"error using '%s': %s", path, strerror(xerrno));

pr_fsio_close(fh);
errno = xerrno;
return -1;
}

pr_fsio_close(fh);

return ftok(path, SHAPER_PROJ_ID);
}