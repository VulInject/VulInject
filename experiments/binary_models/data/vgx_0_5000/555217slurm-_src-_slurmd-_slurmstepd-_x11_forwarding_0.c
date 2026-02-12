static char *_get_home(uid_t uid)
{
struct passwd pwd, *pwd_ptr = NULL;
char pwd_buf[PW_BUF_SIZE];
int rc;

rc = slurm_getpwuid_r(uid, &pwd, pwd_buf, PW_BUF_SIZE, &pwd_ptr);
if (rc || !pwd_ptr) {
if (!pwd_ptr && !rc)
error("%s: getpwuid_r(%u): no record found",
__func__, uid);
else
error("%s: getpwuid_r(%u): %m", __func__, uid);
return NULL;
}

return xstrdup(pwd.pw_dir);
}