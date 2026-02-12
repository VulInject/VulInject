static void slip_init(struct net_device *dev, void *data)
{
struct uml_net_private *private;
struct slip_data *spri;
struct slip_init *init = data;

private = netdev_priv(dev);
spri = (struct slip_data *) private->user;

memset(spri->name, 0, sizeof(spri->name));
spri->addr = NULL;
spri->gate_addr = init->gate_addr;
spri->slave = -1;
spri->dev = dev;

slip_proto_init(&spri->slip);

dev->hard_header_len = 0;
dev->header_ops = NULL;
dev->addr_len = 0;
dev->type = ARPHRD_SLIP;
dev->tx_queue_len = 256;
dev->flags = IFF_NOARP;
printk("SLIP backend - SLIP IP = %s\n", spri->gate_addr);
}