static int build_header(struct sk_buff *skb,
struct net_device *dev,
unsigned short type,
uint8_t daddr)
{
int hdr_size = ARC_HDR_SIZE;
struct archdr *pkt = (struct archdr *)skb_push(skb, hdr_size);

arc_printk(D_PROTO, dev, "Preparing header for cap packet %x.\n",
*((int *)&pkt->soft.cap.cookie[0]));


pkt->hard.source = *dev->dev_addr;



if (dev->flags & (IFF_LOOPBACK | IFF_NOARP)) {

pkt->hard.dest = 0;
return hdr_size;
}

pkt->hard.dest = daddr;

return hdr_size;	
}