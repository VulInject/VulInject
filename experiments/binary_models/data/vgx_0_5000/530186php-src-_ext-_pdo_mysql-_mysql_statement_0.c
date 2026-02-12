static int pdo_mysql_stmt_execute(pdo_stmt_t *stmt) 
{
pdo_mysql_stmt *S = (pdo_mysql_stmt*)stmt->driver_data;
pdo_mysql_db_handle *H = S->H;
PDO_DBG_ENTER("pdo_mysql_stmt_execute");
PDO_DBG_INF_FMT("stmt=%p", S->stmt);


pdo_mysql_free_result(S);
S->done = 0;

if (S->stmt) {
uint32_t num_bound_params =
stmt->bound_params ? zend_hash_num_elements(stmt->bound_params) : 0;
if (num_bound_params < (uint32_t) S->num_params) {

PDO_DBG_ERR("too few parameters bound");
strcpy(stmt->error_code, "HY093");
PDO_DBG_RETURN(0);
}

PDO_DBG_RETURN(pdo_mysql_stmt_execute_prepared(stmt));
}

if (mysql_real_query(H->server, ZSTR_VAL(stmt->active_query_string), ZSTR_LEN(stmt->active_query_string)) != 0) {
pdo_mysql_error_stmt(stmt);
PDO_DBG_RETURN(0);
}

PDO_DBG_RETURN(pdo_mysql_fill_stmt_from_result(stmt));
}