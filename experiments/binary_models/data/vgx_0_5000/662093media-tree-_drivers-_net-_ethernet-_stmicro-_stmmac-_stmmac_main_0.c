static void stmmac_display_rx_rings(struct stmmac_priv *priv)
{
u32 rx_cnt = priv->plat->rx_queues_to_use;
void *head_rx;
u32 queue;


for (queue = 0; queue < rx_cnt; queue++) {
struct stmmac_rx_queue *rx_q = &priv->rx_queue[queue];

pr_info("\tRX Queue %u rings\n", queue);

if (priv->extend_desc)
head_rx = (void *)rx_q->dma_erx;
else
head_rx = (void *)rx_q->dma_rx;


priv->hw->desc->display_ring(head_rx, DMA_RX_SIZE, true);
}
}