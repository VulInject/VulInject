ssl_asn1_t *ssl_asn1_table_get(apr_hash_t *table,
const char *key)
{
return (ssl_asn1_t *)apr_hash_get(table, key, APR_HASH_KEY_STRING);
}




(_WIN32 || __BEOS__ || AP_OPENSSL_USE_ERRNO_THREADID)


static apr_thread_mutex_t **lock_cs;
static int                  lock_num_locks;

static void ssl_util_thr_lock(int mode, int type,
const char *file, int line)
{
if (type < lock_num_locks) {
if (mode & CRYPTO_LOCK) {
apr_thread_mutex_lock(lock_cs[type]);
}
else {
apr_thread_mutex_unlock(lock_cs[type]);
}
}
}