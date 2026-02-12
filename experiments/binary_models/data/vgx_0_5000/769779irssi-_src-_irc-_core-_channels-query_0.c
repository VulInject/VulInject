



static void sig_connected(IRC_SERVER_REC *server)
{
SERVER_QUERY_REC *rec;

g_return_if_fail(server != NULL);
if (!IS_IRC_SERVER(server))
return;

rec = g_new0(SERVER_QUERY_REC, 1);
rec->accountqueries = g_hash_table_new_full(
(GHashFunc) i_istr_hash, (GCompareFunc) i_istr_equal, (GDestroyNotify) g_free, NULL);
server->chanqueries = rec;
}