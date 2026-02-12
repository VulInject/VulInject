static void pgsql_cb_prepare_destroy(M_sql_driver_stmt_t *stmt)
{
M_sql_conn_t          *conn  = stmt->conn;
M_sql_driver_conn_t   *dconn = M_sql_driver_conn_get_conn(conn);
if (M_sql_conn_get_state(conn) != M_SQL_CONN_STATE_FAILED) {
char                   query[256];
PGresult              *res;


M_snprintf(query, sizeof(query), "DEALLOCATE PREPARE ps%zu", stmt->id);

res = PQexec(dconn->conn, query);
if (res == NULL || PQresultStatus(res) != PGRES_COMMAND_OK) {
char msg[256];
M_snprintf(msg, sizeof(msg), "DEALLOCATE PREPARE ps%zu failed: %s", stmt->id, PQerrorMessage(dconn->conn));
M_sql_driver_trace_message(M_FALSE, NULL, conn, M_SQL_ERROR_QUERY_FAILURE, msg);
} else {
M_sql_driver_trace_message(M_TRUE, NULL, conn, M_SQL_ERROR_SUCCESS, query);
}
if (res != NULL)
PQclear(res);
}
pgsql_free_stmt(stmt);
}