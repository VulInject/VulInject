static void
wd_block_input(struct net_device *dev, int count, struct sk_buff *skb, int ring_offset)
{
int wd_cmdreg = dev->base_addr - WD_NIC_OFFSET; 
unsigned long offset = ring_offset - (WD_START_PG<<8);
void __iomem *xfer_start = ei_status.mem + offset;

if (offset + count > ei_status.priv) {

int semi_count = ei_status.priv - offset;
memcpy_fromio(skb->data, xfer_start, semi_count);
count -= semi_count;
memcpy_fromio(skb->data + semi_count, ei_status.mem + TX_PAGES * 256, count);
} else {

memcpy_fromio(skb->data, xfer_start, count);
}


if (ei_status.word16)
outb(ei_status.reg5, wd_cmdreg+WD_CMDREG5);
}