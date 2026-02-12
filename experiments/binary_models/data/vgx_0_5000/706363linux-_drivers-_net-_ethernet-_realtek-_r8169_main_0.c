static void rtl_tx(struct net_device *dev, struct rtl8169_private *tp,
int budget)
{
unsigned int dirty_tx, bytes_compl = 0, pkts_compl = 0;
struct sk_buff *skb;

dirty_tx = tp->dirty_tx;

while (READ_ONCE(tp->cur_tx) != dirty_tx) {
unsigned int entry = dirty_tx % NUM_TX_DESC;
u32 status;

status = le32_to_cpu(tp->TxDescArray[entry].opts1);
if (status & DescOwn)
break;

skb = tp->tx_skb[entry].skb;
rtl8169_unmap_tx_skb(tp, entry);

if (skb) {
pkts_compl++;
bytes_compl += skb->len;
napi_consume_skb(skb, budget);
}
dirty_tx++;
}

if (tp->dirty_tx != dirty_tx) {
netdev_completed_queue(dev, pkts_compl, bytes_compl);
dev_sw_netstats_tx_add(dev, pkts_compl, bytes_compl);


smp_store_mb(tp->dirty_tx, dirty_tx);
if (netif_queue_stopped(dev) && rtl_tx_slots_avail(tp))
netif_wake_queue(dev);

if (tp->cur_tx != dirty_tx && skb)
rtl8169_doorbell(tp);
}
}