void
il4965_rx_queue_reset(struct il_priv *il, struct il_rx_queue *rxq)
{
unsigned long flags;
int i;
spin_lock_irqsave(&rxq->lock, flags);
INIT_LIST_HEAD(&rxq->rx_free);
INIT_LIST_HEAD(&rxq->rx_used);

for (i = 0; i < RX_FREE_BUFFERS + RX_QUEUE_SIZE; i++) {

if (rxq->pool[i].page != NULL) {
pci_unmap_page(il->pci_dev, rxq->pool[i].page_dma,
PAGE_SIZE << il->hw_params.rx_page_order,
PCI_DMA_FROMDEVICE);
__il_free_pages(il, rxq->pool[i].page);
rxq->pool[i].page = NULL;
}
list_add_tail(&rxq->pool[i].list, &rxq->rx_used);
}

for (i = 0; i < RX_QUEUE_SIZE; i++)
rxq->queue[i] = NULL;


rxq->read = rxq->write = 0;
rxq->write_actual = 0;
rxq->free_count = 0;
spin_unlock_irqrestore(&rxq->lock, flags);
}