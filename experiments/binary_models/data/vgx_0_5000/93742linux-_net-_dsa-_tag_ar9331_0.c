static struct sk_buff *ar9331_tag_rcv(struct sk_buff *skb,
struct net_device *ndev)
{
u8 ver, port;
u16 hdr;

if (unlikely(!pskb_may_pull(skb, AR9331_HDR_LEN)))
return NULL;

hdr = le16_to_cpu(*(__le16 *)skb_mac_header(skb));

ver = FIELD_GET(AR9331_HDR_VERSION_MASK, hdr);
if (unlikely(ver != AR9331_HDR_VERSION)) {
netdev_warn_once(ndev, "%s:%i wrong header version 0x%2x\n",
__func__, __LINE__, hdr);
return NULL;
}

if (unlikely(hdr & AR9331_HDR_FROM_CPU)) {
netdev_warn_once(ndev, "%s:%i packet should not be from cpu 0x%2x\n",
__func__, __LINE__, hdr);
return NULL;
}

skb_pull_rcsum(skb, AR9331_HDR_LEN);


port = FIELD_GET(AR9331_HDR_PORT_NUM_MASK, hdr);

skb->dev = dsa_master_find_slave(ndev, 0, port);
if (!skb->dev)
return NULL;

return skb;
}