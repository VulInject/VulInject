static void ne_reset_8390(struct net_device *dev)
{
unsigned long reset_start_time = jiffies;
struct ei_device *ei_local = netdev_priv(dev);

netif_dbg(ei_local, hw, dev, "resetting the 8390 t=%ld...\n", jiffies);


outb(inb(NE_BASE + NE_RESET), NE_BASE + NE_RESET);

ei_status.txing = 0;
ei_status.dmaing = 0;


while ((inb_p(NE_BASE+EN0_ISR) & ENISR_RESET) == 0)
if (time_after(jiffies, reset_start_time + 2*HZ/100)) {
netdev_err(dev, "ne_reset_8390() did not complete.\n");
break;
}
outb_p(ENISR_RESET, NE_BASE + EN0_ISR);	
}