static M_sql_error_t sqlite_cb_connect_runonce(M_sql_conn_t *conn, M_sql_driver_connpool_t *dpool, M_bool is_first_in_pool, M_bool is_readonly, char *error, size_t error_size)
{
M_sql_error_t           err  = M_SQL_ERROR_SUCCESS;
sqlite_connpool_data_t *data = is_readonly?&dpool->readonly:&dpool->primary;

if (!is_first_in_pool)
return M_SQL_ERROR_SUCCESS;

if (data->integrity_check &&
!sqlite_verify_integrity(conn, error, error_size)) {
err = M_SQL_ERROR_CONN_FAILED;
goto fail;
}

if (data->analyze && !sqlite_analyze(conn, error, error_size)) {
err = M_SQL_ERROR_CONN_FAILED;
goto fail;
}

if (!sqlite_set_journal_mode(conn, data->journal_mode, error, error_size)) {
err = M_SQL_ERROR_CONN_FAILED;
goto fail;
}

fail:
return err;
}