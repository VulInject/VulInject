static krb5_error_code
prepare_stmt(krb5_context context, sqlite3 *db,
sqlite3_stmt **stmt, const char *str)
{
int ret;

ret = sqlite3_prepare_v2(db, str, -1, stmt, NULL);
if (ret != SQLITE_OK) {
krb5_set_error_message(context, ENOENT,
N_("Failed to prepare stmt %s: %s", ""),
str, sqlite3_errmsg(db));
return ENOENT;
}
return 0;
}