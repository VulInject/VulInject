static void refill_rx(struct net_device *dev)
{
struct netdev_private *np = netdev_priv(dev);


for (; np->cur_rx - np->dirty_rx > 0; np->dirty_rx++) {
struct sk_buff *skb;
int entry = np->dirty_rx % RX_RING_SIZE;
if (np->rx_skbuff[entry] == NULL) {
unsigned int buflen = np->rx_buf_sz+NATSEMI_PADDING;
skb = netdev_alloc_skb(dev, buflen);
np->rx_skbuff[entry] = skb;
if (skb == NULL)
break; 
np->rx_dma[entry] = pci_map_single(np->pci_dev,
skb->data, buflen, PCI_DMA_FROMDEVICE);
if (pci_dma_mapping_error(np->pci_dev,
np->rx_dma[entry])) {
dev_kfree_skb_any(skb);
np->rx_skbuff[entry] = NULL;
break; 
}
np->rx_ring[entry].addr = cpu_to_le32(np->rx_dma[entry]);
}
np->rx_ring[entry].cmd_status = cpu_to_le32(np->rx_buf_sz);
}
if (np->cur_rx - np->dirty_rx == RX_RING_SIZE) {
if (netif_msg_rx_err(np))
printk(KERN_WARNING "%s: going OOM.\n", dev->name);
np->oom = 1;
}
}