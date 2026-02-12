int
crm_user_lookup(const char *name, uid_t * uid, gid_t * gid)
{
int rc = pcmk_ok;
char *buffer = NULL;
struct passwd pwd;
struct passwd *pwentry = NULL;

buffer = calloc(1, PCMK__PW_BUFFER_LEN);
if (buffer == NULL) {
return -ENOMEM;
}

rc = getpwnam_r(name, &pwd, buffer, PCMK__PW_BUFFER_LEN, &pwentry);
if (pwentry) {
if (uid) {
*uid = pwentry->pw_uid;
}
if (gid) {
*gid = pwentry->pw_gid;
}
crm_trace("User %s has uid=%d gid=%d", name, pwentry->pw_uid, pwentry->pw_gid);

} else {
rc = rc? -rc : -EINVAL;
crm_info("User %s lookup: %s", name, pcmk_strerror(rc));
}

free(buffer);
return rc;
}