static void NS8390_trigger_send(struct net_device *dev, unsigned int length,
int start_page)
{
long e8390_base = dev->base_addr;
struct ei_device *ei_local __attribute((unused)) = netdev_priv(dev);

if (inb_p(e8390_base) & E8390_TRANS) 
{
netdev_warn(dev, "trigger_send() called with the transmitter busy\n");
return;
}
outb_p(length & 0xff, e8390_base + EN0_TCNTLO);
outb_p(length >> 8, e8390_base + EN0_TCNTHI);
outb_p(start_page, e8390_base + EN0_TPSR);
outb_p(E8390_NODMA+E8390_TRANS+E8390_START, e8390_base+E8390_CMD);
}