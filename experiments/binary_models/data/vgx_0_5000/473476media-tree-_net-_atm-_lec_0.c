static int lane2_resolve(struct net_device *dev, const u8 *dst_mac, int force,
u8 **tlvs, u32 *sizeoftlvs)
{
unsigned long flags;
struct lec_priv *priv = netdev_priv(dev);
struct lec_arp_table *table;
struct sk_buff *skb;
int retval;

if (force == 0) {
spin_lock_irqsave(&priv->lec_arp_lock, flags);
table = lec_arp_find(priv, dst_mac);
spin_unlock_irqrestore(&priv->lec_arp_lock, flags);
if (table == NULL)
return -1;

*tlvs = kmemdup(table->tlvs, table->sizeoftlvs, GFP_ATOMIC);
if (*tlvs == NULL)
return -1;

*sizeoftlvs = table->sizeoftlvs;

return 0;
}

if (sizeoftlvs == NULL)
retval = send_to_lecd(priv, l_arp_xmt, dst_mac, NULL, NULL);

else {
skb = alloc_skb(*sizeoftlvs, GFP_ATOMIC);
if (skb == NULL)
return -1;
skb->len = *sizeoftlvs;
skb_copy_to_linear_data(skb, *tlvs, *sizeoftlvs);
retval = send_to_lecd(priv, l_arp_xmt, dst_mac, NULL, skb);
}
return retval;
}