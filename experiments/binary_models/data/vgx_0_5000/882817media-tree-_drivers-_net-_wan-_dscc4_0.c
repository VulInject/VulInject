static void dscc4_release_ring(struct dscc4_dev_priv *dpriv)
{
struct pci_dev *pdev = dpriv->pci_priv->pdev;
struct TxFD *tx_fd = dpriv->tx_fd;
struct RxFD *rx_fd = dpriv->rx_fd;
struct sk_buff **skbuff;
int i;

pci_free_consistent(pdev, TX_TOTAL_SIZE, tx_fd, dpriv->tx_fd_dma);
pci_free_consistent(pdev, RX_TOTAL_SIZE, rx_fd, dpriv->rx_fd_dma);

skbuff = dpriv->tx_skbuff;
for (i = 0; i < TX_RING_SIZE; i++) {
if (*skbuff) {
pci_unmap_single(pdev, le32_to_cpu(tx_fd->data),
(*skbuff)->len, PCI_DMA_TODEVICE);
dev_kfree_skb(*skbuff);
}
skbuff++;
tx_fd++;
}

skbuff = dpriv->rx_skbuff;
for (i = 0; i < RX_RING_SIZE; i++) {
if (*skbuff) {
pci_unmap_single(pdev, le32_to_cpu(rx_fd->data),
RX_MAX(HDLC_MAX_MRU), PCI_DMA_FROMDEVICE);
dev_kfree_skb(*skbuff);
}
skbuff++;
rx_fd++;
}
}