static zend_long odbc_handle_doer(pdo_dbh_t *dbh, const zend_string *sql)
{
pdo_odbc_db_handle *H = (pdo_odbc_db_handle *)dbh->driver_data;
RETCODE rc;
SQLLEN row_count = -1;
PDO_ODBC_HSTMT	stmt;

rc = SQLAllocHandle(SQL_HANDLE_STMT, H->dbc, &stmt);
if (rc != SQL_SUCCESS) {
pdo_odbc_drv_error("SQLAllocHandle: STMT");
return -1;
}

rc = SQLExecDirect(stmt, (SQLCHAR *) ZSTR_VAL(sql), ZSTR_LEN(sql));

if (rc == SQL_NO_DATA) {

row_count = 0;
goto out;
}

if (rc != SQL_SUCCESS && rc != SQL_SUCCESS_WITH_INFO) {
pdo_odbc_doer_error("SQLExecDirect");
goto out;
}

rc = SQLRowCount(stmt, &row_count);
if (rc != SQL_SUCCESS && rc != SQL_SUCCESS_WITH_INFO) {
pdo_odbc_doer_error("SQLRowCount");
goto out;
}
if (row_count == -1) {
row_count = 0;
}
out:
SQLFreeHandle(SQL_HANDLE_STMT, stmt);
return row_count;
}