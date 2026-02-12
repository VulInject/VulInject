void wilc_frmw_to_linux(struct wilc *wilc, u8 *buff, u32 size, u32 pkt_offset)
{
unsigned int frame_len = 0;
int stats;
unsigned char *buff_to_send = NULL;
struct sk_buff *skb;
struct net_device *wilc_netdev;
struct wilc_vif *vif;

if (!wilc)
return;

wilc_netdev = get_if_handler(wilc, buff);
if (!wilc_netdev)
return;

buff += pkt_offset;
vif = netdev_priv(wilc_netdev);

if (size > 0) {
frame_len = size;
buff_to_send = buff;

skb = dev_alloc_skb(frame_len);
if (!skb)
return;

skb->dev = wilc_netdev;

memcpy(skb_put(skb, frame_len), buff_to_send, frame_len);

skb->protocol = eth_type_trans(skb, wilc_netdev);
vif->netstats.rx_packets++;
vif->netstats.rx_bytes += frame_len;
skb->ip_summed = CHECKSUM_UNNECESSARY;
stats = netif_rx(skb);
netdev_dbg(wilc_netdev, "netif_rx ret value is: %d\n", stats);
}
}