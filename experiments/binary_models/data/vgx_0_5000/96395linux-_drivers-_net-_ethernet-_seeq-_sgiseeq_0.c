static irqreturn_t sgiseeq_interrupt(int irq, void *dev_id)
{
struct net_device *dev = (struct net_device *) dev_id;
struct sgiseeq_private *sp = netdev_priv(dev);
struct hpc3_ethregs *hregs = sp->hregs;
struct sgiseeq_regs *sregs = sp->sregs;

spin_lock(&sp->tx_lock);


hregs->reset = HPC3_ERST_CLRIRQ;


sgiseeq_rx(dev, sp, hregs, sregs);


if (sp->tx_old != sp->tx_new)
sgiseeq_tx(dev, sp, hregs, sregs);

if ((TX_BUFFS_AVAIL(sp) > 0) && netif_queue_stopped(dev)) {
netif_wake_queue(dev);
}
spin_unlock(&sp->tx_lock);

return IRQ_HANDLED;
}