static void rewrite_credential_file(const char *fn, struct credential *c,
struct strbuf *extra)
{
int timeout_ms = 1000;

git_config_get_int("credentialstore.locktimeoutms", &timeout_ms);
if (hold_lock_file_for_update_timeout(&credential_lock, fn, 0, timeout_ms) < 0)
die_errno(_("unable to get credential storage lock in %d ms"), timeout_ms);
if (extra)
print_line(extra);
parse_credential_file(fn, c, NULL, print_line);
if (commit_lock_file(&credential_lock) < 0)
die_errno("unable to write credential store");
}