static int h2_h2_fixups(request_rec *r)
{
if (r->connection->master) {
h2_conn_ctx_t *ctx = h2_conn_ctx_get(r->connection);
unsigned int i;

for (i = 0; ctx && i < H2_ALEN(H2_VARS); ++i) {
h2_var_def *vdef = &H2_VARS[i];
if (vdef->subprocess) {
apr_table_setn(r->subprocess_env, vdef->name, 
vdef->lookup(r->pool, r->server, r->connection, 
r, ctx));
}
}
}
return DECLINED;
}