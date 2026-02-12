struct net_device *hdlcdrv_register(const struct hdlcdrv_ops *ops,
unsigned int privsize, const char *ifname,
unsigned int baseaddr, unsigned int irq, 
unsigned int dma) 
{
struct net_device *dev;
struct hdlcdrv_state *s;
int err;

BUG_ON(ops == NULL);

if (privsize < sizeof(struct hdlcdrv_state))
privsize = sizeof(struct hdlcdrv_state);

dev = alloc_netdev(privsize, ifname, NET_NAME_UNKNOWN, hdlcdrv_setup);
if (!dev)
return ERR_PTR(-ENOMEM);


s = netdev_priv(dev);
s->magic = HDLCDRV_MAGIC;
s->ops = ops;
dev->base_addr = baseaddr;
dev->irq = irq;
dev->dma = dma;

err = register_netdev(dev);
if (err < 0) {
printk(KERN_WARNING "hdlcdrv: cannot register net "
"device %s\n", dev->name);
free_netdev(dev);
dev = ERR_PTR(err);
}
return dev;
}