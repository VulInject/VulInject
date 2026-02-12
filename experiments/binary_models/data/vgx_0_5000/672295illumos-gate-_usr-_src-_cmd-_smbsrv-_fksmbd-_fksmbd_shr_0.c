static void
new_share(char *name, char *path, char *comment, int flags)
{
smb_share_t si;

bzero(&si, sizeof (si));
(void) strlcpy(si.shr_name, name, MAXNAMELEN);
(void) strlcpy(si.shr_path, path, MAXPATHLEN);
(void) strlcpy(si.shr_cmnt, comment, SMB_SHARE_CMNT_MAX);
si.shr_flags = flags;
if (smb_shr_add(&si) != 0) {
syslog(LOG_ERR, "failed to add test share: %s",
si.shr_name);
}
}