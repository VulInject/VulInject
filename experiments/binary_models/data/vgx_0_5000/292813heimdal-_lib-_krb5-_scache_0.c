static krb5_error_code
create_cache(krb5_context context, krb5_scache *s)
{
int ret;

sqlite3_bind_text(s->icache, 1, s->sub, -1, NULL);
do {
ret = sqlite3_step(s->icache);
} while (ret == SQLITE_ROW);
if (ret != SQLITE_DONE) {
krb5_set_error_message(context, KRB5_CC_IO,
N_("Failed to add scache: %d", ""), ret);
return KRB5_CC_IO;
}
sqlite3_reset(s->icache);

s->cid = sqlite3_last_insert_rowid(s->db);

return 0;
}