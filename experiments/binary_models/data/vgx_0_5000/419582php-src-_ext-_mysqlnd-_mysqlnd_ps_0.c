static enum_func_status
MYSQLND_METHOD(mysqlnd_stmt, send_execute)(MYSQLND_STMT * const s, const enum_mysqlnd_send_execute_type type, zval * read_cb, zval * err_cb)
{
MYSQLND_STMT_DATA * stmt = s? s->data : NULL;
MYSQLND_CONN_DATA * conn = stmt? stmt->conn : NULL;
enum_func_status ret;
zend_uchar *request = NULL;
size_t		request_len;
bool	free_request;

DBG_ENTER("mysqlnd_stmt::send_execute");
if (!stmt || !conn) {
DBG_RETURN(FAIL);
}
DBG_INF_FMT("stmt=" ZEND_ULONG_FMT, stmt->stmt_id);

UPSERT_STATUS_SET_AFFECTED_ROWS_TO_ERROR(stmt->upsert_status);
UPSERT_STATUS_SET_AFFECTED_ROWS_TO_ERROR(conn->upsert_status);

if (stmt->result && stmt->state >= MYSQLND_STMT_PREPARED && stmt->field_count) {
s->m->flush(s);


stmt->result->m.free_result_buffers(stmt->result);

stmt->state = MYSQLND_STMT_PREPARED;
} else if (stmt->state < MYSQLND_STMT_PREPARED) {

SET_CLIENT_ERROR(stmt->error_info, CR_COMMANDS_OUT_OF_SYNC, UNKNOWN_SQLSTATE, mysqlnd_out_of_sync);
DBG_INF("FAIL");
DBG_RETURN(FAIL);
}

if (stmt->param_count) {
unsigned int i, not_bound = 0;
if (!stmt->param_bind) {
SET_CLIENT_ERROR(stmt->error_info, CR_PARAMS_NOT_BOUND, UNKNOWN_SQLSTATE, "No data supplied for parameters in prepared statement");
DBG_INF("FAIL");
DBG_RETURN(FAIL);
}
for (i = 0; i < stmt->param_count; i++) {
if (Z_ISUNDEF(stmt->param_bind[i].zv)) {
not_bound++;
}
}
if (not_bound) {
char * msg;
mnd_sprintf(&msg, 0, "No data supplied for %u parameter%s in prepared statement",
not_bound, not_bound>1 ?"s":"");
SET_CLIENT_ERROR(stmt->error_info, CR_PARAMS_NOT_BOUND, UNKNOWN_SQLSTATE, msg);
if (msg) {
mnd_sprintf_free(msg);
}
DBG_INF("FAIL");
DBG_RETURN(FAIL);
}
}
ret = s->m->generate_execute_request(s, &request, &request_len, &free_request);
if (ret == PASS) {
const MYSQLND_CSTRING payload = {(const char*) request, request_len};

ret = conn->command->stmt_execute(conn, payload);
} else {
SET_CLIENT_ERROR(stmt->error_info, CR_UNKNOWN_ERROR, UNKNOWN_SQLSTATE, "Couldn't generate the request. Possibly OOM.");
}

if (free_request) {
mnd_efree(request);
}

if (ret == FAIL) {
COPY_CLIENT_ERROR(stmt->error_info, *conn->error_info);
DBG_INF("FAIL");
DBG_RETURN(FAIL);
}
stmt->execute_count++;

DBG_RETURN(PASS);
}