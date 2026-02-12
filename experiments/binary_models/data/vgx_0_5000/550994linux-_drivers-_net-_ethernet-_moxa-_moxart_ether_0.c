static void moxart_tx_finished(struct net_device *ndev)
{
struct moxart_mac_priv_t *priv = netdev_priv(ndev);
unsigned int tx_head = priv->tx_head;
unsigned int tx_tail = priv->tx_tail;

while (tx_tail != tx_head) {
dma_unmap_single(&priv->pdev->dev, priv->tx_mapping[tx_tail],
priv->tx_len[tx_tail], DMA_TO_DEVICE);

ndev->stats.tx_packets++;
ndev->stats.tx_bytes += priv->tx_skb[tx_tail]->len;

dev_consume_skb_irq(priv->tx_skb[tx_tail]);
priv->tx_skb[tx_tail] = NULL;

tx_tail = TX_NEXT(tx_tail);
}
priv->tx_tail = tx_tail;
if (netif_queue_stopped(ndev) &&
moxart_tx_queue_space(ndev) >= TX_WAKE_THRESHOLD)
netif_wake_queue(ndev);
}