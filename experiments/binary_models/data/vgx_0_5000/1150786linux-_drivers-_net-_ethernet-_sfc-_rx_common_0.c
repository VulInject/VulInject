void efx_fini_rx_queue(struct efx_rx_queue *rx_queue)
{
struct efx_rx_buffer *rx_buf;
int i;

netif_dbg(rx_queue->efx, drv, rx_queue->efx->net_dev,
"shutting down RX queue %d\n", efx_rx_queue_index(rx_queue));

del_timer_sync(&rx_queue->slow_fill);
if (rx_queue->grant_credits)
flush_work(&rx_queue->grant_work);


if (rx_queue->buffer) {
for (i = rx_queue->removed_count; i < rx_queue->added_count;
i++) {
unsigned int index = i & rx_queue->ptr_mask;

rx_buf = efx_rx_buffer(rx_queue, index);
efx_fini_rx_buffer(rx_queue, rx_buf);
}
}

efx_fini_rx_recycle_ring(rx_queue);

if (rx_queue->xdp_rxq_info_valid)
xdp_rxq_info_unreg(&rx_queue->xdp_rxq_info);

rx_queue->xdp_rxq_info_valid = false;
}