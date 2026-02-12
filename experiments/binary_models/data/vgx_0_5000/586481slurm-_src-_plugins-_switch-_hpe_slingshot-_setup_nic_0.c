static bool _write_bitstr_file(const char *fname, int fd, size_t oldsize,
bitstr_t *bitstr)
{
char *mask = NULL;
bool retval = false;

if (bit_ffs(bitstr) >= 0) {
size_t fsize;
ssize_t sret;
mask = bit_fmt_hexmask_trim(bitstr);
fsize = strlen(mask) + 1;	
xassert(fsize <= SLINGSHOT_VNI_PIDS_BUFSIZ);
if (fsize < oldsize) {
if (ftruncate(fd, 0) == -1) {
error("ftruncate(%s) failed: %m", fname);
goto out;
}
}
sret = pwrite(fd, mask, fsize, 0);
log_flag(SWITCH, "pwrite(%s, '%s', %zu)", fname, mask, fsize);
if (sret == -1) {
error("pwrite(%d, %zu) failed: %m", fd, fsize);
goto out;
} else if (sret != fsize) {
error("pwrite(%d, %zu) ret %zu: %m", fd, fsize, sret);
goto out;
}
} else {
log_flag(SWITCH, "unlink(%s)", fname);
if (unlink(fname) == -1) {
error("unlink(%s) failed: %m", fname);
goto out;
}
}
retval = true;
out:
xfree(mask);
return retval;
}