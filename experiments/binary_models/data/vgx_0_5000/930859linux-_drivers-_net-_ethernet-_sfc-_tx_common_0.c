void efx_xmit_done(struct efx_tx_queue *tx_queue, unsigned int index)
{
unsigned int fill_level, pkts_compl = 0, bytes_compl = 0;
unsigned int efv_pkts_compl = 0;
struct efx_nic *efx = tx_queue->efx;

EFX_WARN_ON_ONCE_PARANOID(index > tx_queue->ptr_mask);

efx_dequeue_buffers(tx_queue, index, &pkts_compl, &bytes_compl,
&efv_pkts_compl);
tx_queue->pkts_compl += pkts_compl;
tx_queue->bytes_compl += bytes_compl;

if (pkts_compl + efv_pkts_compl > 1)
++tx_queue->merge_events;


smp_mb();
if (unlikely(netif_tx_queue_stopped(tx_queue->core_txq)) &&
likely(efx->port_enabled) &&
likely(netif_device_present(efx->net_dev))) {
fill_level = efx_channel_tx_fill_level(tx_queue->channel);
if (fill_level <= efx->txq_wake_thresh)
netif_tx_wake_queue(tx_queue->core_txq);
}

efx_xmit_done_check_empty(tx_queue);
}