static void load_pkt(struct net_device *dev, struct arc_hardware *hard,
struct arc_rfc1201 *soft, int softlen, int bufnum)
{
struct arcnet_local *lp = netdev_priv(dev);
int ofs;



if (softlen > MinTU) {
hard->offset[0] = 0;
hard->offset[1] = ofs = 512 - softlen;
} else if (softlen > MTU) {	
struct arc_rfc1201 excsoft;

excsoft.proto = soft->proto;
excsoft.split_flag = 0xff;
excsoft.sequence = htons(0xffff);

hard->offset[0] = 0;
ofs = 512 - softlen;
hard->offset[1] = ofs - RFC1201_HDR_SIZE;
lp->hw.copy_to_card(dev, bufnum, ofs - RFC1201_HDR_SIZE,
&excsoft, RFC1201_HDR_SIZE);
} else {
hard->offset[0] = ofs = 256 - softlen;
}

lp->hw.copy_to_card(dev, bufnum, 0, hard, ARC_HDR_SIZE);
lp->hw.copy_to_card(dev, bufnum, ofs, soft, softlen);

lp->lastload_dest = hard->dest;
}