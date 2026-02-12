static void
etherh_reset(struct net_device *dev)
{
struct ei_device *ei_local = netdev_priv(dev);
void __iomem *addr = (void __iomem *)dev->base_addr;

writeb(E8390_NODMA+E8390_PAGE0+E8390_STOP, addr);


if (dev->flags & IFF_AUTOMEDIA && ei_local->interface_num) {
ei_local->interface_num = 0;

if (dev->if_port == IF_PORT_10BASET)
dev->if_port = IF_PORT_10BASE2;
else
dev->if_port = IF_PORT_10BASET;

etherh_setif(dev);
}
}