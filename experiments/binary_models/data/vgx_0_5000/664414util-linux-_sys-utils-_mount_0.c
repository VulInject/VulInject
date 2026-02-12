static int mk_exit_code(struct libmnt_context *cxt, int rc)
{
const char *tgt;
char buf[BUFSIZ] = { 0 };

rc = mnt_context_get_excode(cxt, rc, buf, sizeof(buf));
tgt = mnt_context_get_target(cxt);

if (*buf) {
const char *spec = tgt;
if (!spec)
spec = mnt_context_get_source(cxt);
if (!spec)
spec = "???";
warnx("%s: %s.", spec, buf);

if (mnt_context_syscall_called(cxt) &&
mnt_context_get_syscall_errno(cxt) != 0)
fprintf(stderr, _("       dmesg(1) may have more information after failed mount system call.\n"));
}

if (rc == MNT_EX_SUCCESS && mnt_context_get_status(cxt) == 1) {
selinux_warning(cxt, tgt);
}

systemd_hint();

return rc;
}