static irqreturn_t iis_irq(int irqno, void *dev_id)
{
struct idma_ctrl *prtd = (struct idma_ctrl *)dev_id;
u32 iisahb, val, addr;

iisahb  = readl(idma.regs + I2SAHB);

val = (iisahb & AHB_LVL0INT) ? AHB_CLRLVL0INT : 0;

if (val) {
iisahb |= val;
writel(iisahb, idma.regs + I2SAHB);

addr = readl(idma.regs + I2SLVL0ADDR) - idma.lp_tx_addr;
addr += prtd->periodsz;
addr %= (u32)(prtd->end - prtd->start);
addr += idma.lp_tx_addr;

writel(addr, idma.regs + I2SLVL0ADDR);

if (prtd->cb)
prtd->cb(prtd->token, prtd->period);
}

return IRQ_HANDLED;
}