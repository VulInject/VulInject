static M_bool M_sql_connpool_add_subpool(M_sql_connpool_t *pool, M_bool is_readonly, const char *conn_str, size_t max_conns, char *error, size_t error_size)
{
M_sql_connpool_data_t *data = is_readonly?&pool->pool_readonly:&pool->pool_primary;
M_bool                 rv;
M_hash_dict_t         *conndict;

if (data->conns != NULL) {
M_snprintf(error, error_size, "Pool has already been configured");
return M_FALSE;
}

conndict = M_hash_dict_deserialize(conn_str, M_str_len(conn_str), ';', '=', '\'', '\'', M_HASH_DICT_CASECMP);
if (conndict == NULL) {
M_snprintf(error, error_size, "Failed to parse connection string");
return M_FALSE;
}

rv                   = pool->driver->cb_createpool(&pool->dpool, pool, is_readonly, conndict, &data->num_hosts, error, error_size);
M_hash_dict_destroy(conndict);
if (!rv) {
return M_FALSE;
}

data->cond           = M_thread_cond_create(M_THREAD_CONDATTR_NONE);
data->conns          = M_llist_create(NULL, M_LLIST_NONE);
data->used_conns     = M_queue_create(NULL, NULL);
data->info           = M_malloc_zero(sizeof(*data->info) * max_conns);
data->max_conns      = max_conns;
data->host_offline_t = M_malloc_zero(sizeof(*data->host_offline_t) * data->num_hosts);
return M_TRUE;
}