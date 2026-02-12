static void
log_internal(nvlist_t *nvl, const char *operation, spa_t *spa,
dmu_tx_t *tx, const char *fmt, va_list adx)
{
char *msg;


if (spa_is_initializing(spa) || !spa_writeable(spa)) {
fnvlist_free(nvl);
return;
}

msg = kmem_vasprintf(fmt, adx);
fnvlist_add_string(nvl, ZPOOL_HIST_INT_STR, msg);
strfree(msg);

fnvlist_add_string(nvl, ZPOOL_HIST_INT_NAME, operation);
fnvlist_add_uint64(nvl, ZPOOL_HIST_TXG, tx->tx_txg);

if (dmu_tx_is_syncing(tx)) {
spa_history_log_sync(nvl, tx);
} else {
dsl_sync_task_nowait(spa_get_dsl(spa),
spa_history_log_sync, nvl, 0, ZFS_SPACE_CHECK_NONE, tx);
}

}