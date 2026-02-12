static void i596_tx_timeout (struct net_device *dev, unsigned int txqueue)
{
struct i596_private *lp = netdev_priv(dev);


DEB(DEB_ERRORS, printk(KERN_DEBUG
"%s: transmit timed out, status resetting.\n",
dev->name));

dev->stats.tx_errors++;


if (lp->last_restart == dev->stats.tx_packets) {
DEB(DEB_ERRORS, printk(KERN_DEBUG "Resetting board.\n"));

i596_reset (dev, lp);
} else {

DEB(DEB_ERRORS, printk(KERN_DEBUG "Kicking board.\n"));
lp->dma->scb.command = SWAP16(CUC_START | RX_START);
dma_sync_dev(dev, &(lp->dma->scb), sizeof(struct i596_scb));
ca (dev);
lp->last_restart = dev->stats.tx_packets;
}

netif_trans_update(dev); 
netif_wake_queue (dev);
}