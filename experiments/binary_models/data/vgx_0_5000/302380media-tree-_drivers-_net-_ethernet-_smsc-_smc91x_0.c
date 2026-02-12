static void smc_timeout(struct net_device *dev)
{
struct smc_local *lp = netdev_priv(dev);
void __iomem *ioaddr = lp->base;
int status, mask, eph_st, meminfo, fifo;

DBG(2, dev, "%s\n", __func__);

spin_lock_irq(&lp->lock);
status = SMC_GET_INT(lp);
mask = SMC_GET_INT_MASK(lp);
fifo = SMC_GET_FIFO(lp);
SMC_SELECT_BANK(lp, 0);
eph_st = SMC_GET_EPH_STATUS(lp);
meminfo = SMC_GET_MIR(lp);
SMC_SELECT_BANK(lp, 2);
spin_unlock_irq(&lp->lock);
PRINTK(dev, "TX timeout (INT 0x%02x INTMASK 0x%02x MEM 0x%04x FIFO 0x%04x EPH_ST 0x%04x)\n",
status, mask, meminfo, fifo, eph_st);

smc_reset(dev);
smc_enable(dev);


if (lp->phy_type != 0)
schedule_work(&lp->phy_configure);


netif_trans_update(dev); 
netif_wake_queue(dev);
}