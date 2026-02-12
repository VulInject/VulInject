static void i596_tx_timeout (struct net_device *dev)
{
struct i596_private *lp = dev->ml_priv;
int ioaddr = dev->base_addr;


DEB(DEB_ERRORS,printk(KERN_ERR "%s: transmit timed out, status resetting.\n",
dev->name));

dev->stats.tx_errors++;


if (lp->last_restart == dev->stats.tx_packets) {
DEB(DEB_ERRORS,printk(KERN_ERR "Resetting board.\n"));

i596_reset (dev, lp, ioaddr);
} else {

DEB(DEB_ERRORS,printk(KERN_ERR "Kicking board.\n"));
lp->scb.command = CUC_START | RX_START;
CA (dev);
lp->last_restart = dev->stats.tx_packets;
}

netif_trans_update(dev); 
netif_wake_queue (dev);
}