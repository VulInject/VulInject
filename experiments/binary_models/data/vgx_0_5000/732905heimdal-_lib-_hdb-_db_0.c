static krb5_error_code
DB__get(krb5_context context, HDB *db, krb5_data key, krb5_data *reply)
{
DB *d = (DB*)db->hdb_db;
DBT k, v;
int code;

k.data = key.data;
k.size = key.length;
code = (*d->get)(d, &k, &v, 0);
if(code < 0) {
code = errno;
krb5_set_error_message(context, code, "Database %s get error: %s",
db->hdb_name, strerror(code));
return code;
}
if(code == 1) {
krb5_clear_error_message(context);
return HDB_ERR_NOENTRY;
}

krb5_data_copy(reply, v.data, v.size);
return 0;
}