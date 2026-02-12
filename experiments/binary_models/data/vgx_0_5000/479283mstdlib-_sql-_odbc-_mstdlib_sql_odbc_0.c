static M_bool odbc_cb_init(char *error, size_t error_size)
{
SQLRETURN rc;

rc = SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &odbc_env_handle);
if (rc != SQL_SUCCESS && rc != SQL_SUCCESS_WITH_INFO) {
odbc_format_error("SQLAllocHandle(SQL_HANDLE_ENV) failed", NULL, NULL, rc, error, error_size);
return M_FALSE;
}


rc = SQLSetEnvAttr(odbc_env_handle, SQL_ATTR_ODBC_VERSION, (void*)SQL_OV_ODBC3, 0);
if (rc != SQL_SUCCESS && rc != SQL_SUCCESS_WITH_INFO) {
odbc_format_error("SQLSetEnvAttr(SQL_ATTR_ODBC_VERSION) failed", NULL, NULL, rc, error, error_size);
odbc_cb_destroy();
return M_FALSE;
}


return M_TRUE;
}