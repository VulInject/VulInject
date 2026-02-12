static enum_func_status
MYSQLND_METHOD(mysqlnd_conn_data, set_charset)(MYSQLND_CONN_DATA * const conn, const char * const csname)
{
enum_func_status ret = FAIL;
const MYSQLND_CHARSET * const charset = mysqlnd_find_charset_name(csname);

DBG_ENTER("mysqlnd_conn_data::set_charset");
DBG_INF_FMT("conn=%" PRIu64 " cs=%s", conn->thread_id, csname);

if (!charset) {
SET_CLIENT_ERROR(conn->error_info, CR_CANT_FIND_CHARSET, UNKNOWN_SQLSTATE, "Invalid character set was provided");
DBG_RETURN(ret);
}

char * query;
size_t query_len = mnd_sprintf(&query, 0, "SET NAMES %s", csname);

if (FAIL == (ret = conn->m->query(conn, query, query_len)) || conn->error_info->error_no) {
ret = FAIL;
} else {
conn->charset = charset;
}
mnd_sprintf_free(query);

DBG_INF(ret == PASS? "PASS":"FAIL");
DBG_RETURN(ret);
}