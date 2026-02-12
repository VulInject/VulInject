int _pdo_pgsql_error(pdo_dbh_t *dbh, pdo_stmt_t *stmt, int errcode, const char *sqlstate, const char *msg, const char *file, int line) 
{
pdo_pgsql_db_handle *H = (pdo_pgsql_db_handle *)dbh->driver_data;
pdo_error_type *pdo_err = stmt ? &stmt->error_code : &dbh->error_code;
pdo_pgsql_error_info *einfo = &H->einfo;
char *errmsg = PQerrorMessage(H->server);

einfo->errcode = errcode;
einfo->file = file;
einfo->line = line;

if (einfo->errmsg) {
pefree(einfo->errmsg, dbh->is_persistent);
einfo->errmsg = NULL;
}

if (sqlstate == NULL || strlen(sqlstate) >= sizeof(pdo_error_type)) {
strcpy(*pdo_err, "HY000");
}
else {
strcpy(*pdo_err, sqlstate);
}

if (msg) {
einfo->errmsg = pestrdup(msg, dbh->is_persistent);
}
else if (errmsg) {
einfo->errmsg = _pdo_pgsql_trim_message(errmsg, dbh->is_persistent);
}

if (!dbh->methods) {
pdo_throw_exception(einfo->errcode, einfo->errmsg, pdo_err);
}

return errcode;
}