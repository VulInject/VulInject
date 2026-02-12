static irqreturn_t rhine_interrupt(int irq, void *dev_instance)
{
struct net_device *dev = dev_instance;
struct rhine_private *rp = netdev_priv(dev);
u32 status;
int handled = 0;

status = rhine_get_events(rp);

netif_dbg(rp, intr, dev, "Interrupt, status %08x\n", status);

if (status & RHINE_EVENT) {
handled = 1;

rhine_irq_disable(rp);
napi_schedule(&rp->napi);
}

if (status & ~(IntrLinkChange | IntrStatsMax | RHINE_EVENT_NAPI)) {
netif_err(rp, intr, dev, "Something Wicked happened! %08x\n",
status);
}

return IRQ_RETVAL(handled);
}