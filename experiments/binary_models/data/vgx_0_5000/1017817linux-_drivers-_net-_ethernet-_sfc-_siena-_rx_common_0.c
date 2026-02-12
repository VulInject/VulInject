static void efx_fini_rx_buffer(struct efx_rx_queue *rx_queue,
struct efx_rx_buffer *rx_buf)
{

if (rx_buf->page)
put_page(rx_buf->page);


if (rx_buf->flags & EFX_RX_BUF_LAST_IN_PAGE) {
efx_unmap_rx_buffer(rx_queue->efx, rx_buf);
efx_siena_free_rx_buffers(rx_queue, rx_buf, 1);
}
rx_buf->page = NULL;
}