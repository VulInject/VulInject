static netdev_tx_t ks8851_start_xmit_spi(struct sk_buff *skb,
struct net_device *dev)
{
unsigned int needed = calc_txlen(skb->len);
struct ks8851_net *ks = netdev_priv(dev);
netdev_tx_t ret = NETDEV_TX_OK;
struct ks8851_net_spi *kss;

kss = to_ks8851_spi(ks);

netif_dbg(ks, tx_queued, ks->netdev,
"%s: skb %p, %d@%p\n", __func__, skb, skb->len, skb->data);

spin_lock(&ks->statelock);

if (needed > ks->tx_space) {
netif_stop_queue(dev);
ret = NETDEV_TX_BUSY;
} else {
ks->tx_space -= needed;
skb_queue_tail(&ks->txq, skb);
}

spin_unlock(&ks->statelock);
schedule_work(&kss->tx_work);

return ret;
}