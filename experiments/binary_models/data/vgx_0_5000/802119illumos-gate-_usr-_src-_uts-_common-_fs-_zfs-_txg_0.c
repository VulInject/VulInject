static boolean_t
txg_wait_synced_impl(dsl_pool_t *dp, uint64_t txg, boolean_t wait_sig)
{
tx_state_t *tx = &dp->dp_tx;

ASSERT(!dsl_pool_config_held(dp));

mutex_enter(&tx->tx_sync_lock);
ASSERT3U(tx->tx_threads, ==, 2);
if (txg == 0)
txg = tx->tx_open_txg + TXG_DEFER_SIZE;
if (tx->tx_sync_txg_waiting < txg)
tx->tx_sync_txg_waiting = txg;
dprintf("txg=%llu quiesce_txg=%llu sync_txg=%llu\n",
txg, tx->tx_quiesce_txg_waiting, tx->tx_sync_txg_waiting);
while (tx->tx_synced_txg < txg) {
dprintf("broadcasting sync more "
"tx_synced=%llu waiting=%llu dp=%p\n",
tx->tx_synced_txg, tx->tx_sync_txg_waiting, dp);
cv_broadcast(&tx->tx_sync_more_cv);
if (wait_sig) {

if (cv_wait_sig(&tx->tx_sync_done_cv,
&tx->tx_sync_lock) == 0) {
mutex_exit(&tx->tx_sync_lock);
return (B_TRUE);
}
} else {
cv_wait(&tx->tx_sync_done_cv, &tx->tx_sync_lock);
}
}
mutex_exit(&tx->tx_sync_lock);
return (B_FALSE);
}