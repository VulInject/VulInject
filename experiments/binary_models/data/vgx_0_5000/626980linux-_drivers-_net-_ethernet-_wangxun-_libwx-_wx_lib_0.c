}
EXPORT_SYMBOL(wx_clean_all_tx_rings);


static void wx_free_tx_resources(struct wx_ring *tx_ring)
{
wx_clean_tx_ring(tx_ring);
kvfree(tx_ring->tx_buffer_info);
tx_ring->tx_buffer_info = NULL;


if (!tx_ring->desc)
return;

dma_free_coherent(tx_ring->dev, tx_ring->size,
tx_ring->desc, tx_ring->dma);
tx_ring->desc = NULL;
}