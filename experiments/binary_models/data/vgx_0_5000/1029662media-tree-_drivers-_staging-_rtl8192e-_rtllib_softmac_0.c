static inline struct sk_buff *
rtllib_disauth_skb(struct rtllib_network *beacon,
struct rtllib_device *ieee, u16 asRsn)
{
struct sk_buff *skb;
struct rtllib_disauth *disauth;
int len = sizeof(struct rtllib_disauth) + ieee->tx_headroom;

skb = dev_alloc_skb(len);
if (!skb)
return NULL;

skb_reserve(skb, ieee->tx_headroom);

disauth = (struct rtllib_disauth *) skb_put(skb,
sizeof(struct rtllib_disauth));
disauth->header.frame_ctl = cpu_to_le16(RTLLIB_STYPE_DEAUTH);
disauth->header.duration_id = 0;

ether_addr_copy(disauth->header.addr1, beacon->bssid);
ether_addr_copy(disauth->header.addr2, ieee->dev->dev_addr);
ether_addr_copy(disauth->header.addr3, beacon->bssid);

disauth->reason = cpu_to_le16(asRsn);
return skb;
}