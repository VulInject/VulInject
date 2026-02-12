static void tlan_free_lists(struct net_device *dev)
{
struct tlan_priv *priv = netdev_priv(dev);
int		i;
struct tlan_list	*list;
struct sk_buff	*skb;

for (i = 0; i < TLAN_NUM_TX_LISTS; i++) {
list = priv->tx_list + i;
skb = tlan_get_skb(list);
if (skb) {
pci_unmap_single(
priv->pci_dev,
list->buffer[0].address,
max(skb->len,
(unsigned int)TLAN_MIN_FRAME_SIZE),
PCI_DMA_TODEVICE);
dev_kfree_skb_any(skb);
list->buffer[8].address = 0;
list->buffer[9].address = 0;
}
}

for (i = 0; i < TLAN_NUM_RX_LISTS; i++) {
list = priv->rx_list + i;
skb = tlan_get_skb(list);
if (skb) {
pci_unmap_single(priv->pci_dev,
list->buffer[0].address,
TLAN_MAX_FRAME_SIZE,
PCI_DMA_FROMDEVICE);
dev_kfree_skb_any(skb);
list->buffer[8].address = 0;
list->buffer[9].address = 0;
}
}
}