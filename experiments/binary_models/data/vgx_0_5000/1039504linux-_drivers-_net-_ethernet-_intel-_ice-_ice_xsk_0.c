static int ice_xmit_xdp_tx_zc(struct xdp_buff *xdp,
struct ice_tx_ring *xdp_ring)
{
u32 size = xdp->data_end - xdp->data;
u32 ntu = xdp_ring->next_to_use;
struct ice_tx_desc *tx_desc;
struct ice_tx_buf *tx_buf;
dma_addr_t dma;

if (ICE_DESC_UNUSED(xdp_ring) < ICE_RING_QUARTER(xdp_ring)) {
ice_clean_xdp_irq_zc(xdp_ring);
if (!ICE_DESC_UNUSED(xdp_ring)) {
xdp_ring->ring_stats->tx_stats.tx_busy++;
return ICE_XDP_CONSUMED;
}
}

dma = xsk_buff_xdp_get_dma(xdp);
xsk_buff_raw_dma_sync_for_device(xdp_ring->xsk_pool, dma, size);

tx_buf = &xdp_ring->tx_buf[ntu];
tx_buf->xdp = xdp;
tx_buf->type = ICE_TX_BUF_XSK_TX;
tx_desc = ICE_TX_DESC(xdp_ring, ntu);
tx_desc->buf_addr = cpu_to_le64(dma);
tx_desc->cmd_type_offset_bsz = ice_build_ctob(ICE_TX_DESC_CMD_EOP,
0, size, 0);
xdp_ring->xdp_tx_active++;

if (++ntu == xdp_ring->count)
ntu = 0;
xdp_ring->next_to_use = ntu;

return ICE_XDP_TX;
}