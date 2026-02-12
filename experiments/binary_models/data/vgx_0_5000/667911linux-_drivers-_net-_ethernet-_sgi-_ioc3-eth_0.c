static inline void ioc3_tx(struct net_device *dev)
{
struct ioc3_private *ip = netdev_priv(dev);
struct ioc3_ethregs *regs = ip->regs;
unsigned long packets, bytes;
int tx_entry, o_entry;
struct sk_buff *skb;
u32 etcir;

spin_lock(&ip->ioc3_lock);
etcir = readl(&regs->etcir);

tx_entry = (etcir >> 7) & TX_RING_MASK;
o_entry = ip->tx_ci;
packets = 0;
bytes = 0;

while (o_entry != tx_entry) {
packets++;
skb = ip->tx_skbs[o_entry];
bytes += skb->len;
dev_consume_skb_irq(skb);
ip->tx_skbs[o_entry] = NULL;

o_entry = (o_entry + 1) & TX_RING_MASK;	

etcir = readl(&regs->etcir);		
tx_entry = (etcir >> 7) & TX_RING_MASK;
}

dev->stats.tx_packets += packets;
dev->stats.tx_bytes += bytes;
ip->txqlen -= packets;

if (netif_queue_stopped(dev) && ip->txqlen < TX_RING_ENTRIES)
netif_wake_queue(dev);

ip->tx_ci = o_entry;
spin_unlock(&ip->ioc3_lock);
}