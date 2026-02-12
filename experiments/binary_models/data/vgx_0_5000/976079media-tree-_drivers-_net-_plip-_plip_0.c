static int
plip_error(struct net_device *dev, struct net_local *nl,
struct plip_local *snd, struct plip_local *rcv)
{
unsigned char status;

status = read_status(dev);
if ((status & 0xf8) == 0x80) {
if (net_debug > 2)
printk(KERN_DEBUG "%s: reset interface.\n", dev->name);
nl->connection = PLIP_CN_NONE;
nl->should_relinquish = 0;
netif_start_queue (dev);
enable_parport_interrupts (dev);
ENABLE(dev->irq);
netif_wake_queue (dev);
} else {
nl->is_deferred = 1;
schedule_delayed_work(&nl->deferred, 1);
}

return OK;
}