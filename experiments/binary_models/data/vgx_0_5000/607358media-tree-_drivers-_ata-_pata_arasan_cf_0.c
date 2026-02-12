static void arasan_cf_set_piomode(struct ata_port *ap, struct ata_device *adev)
{
struct arasan_cf_dev *acdev = ap->host->private_data;
u8 pio = adev->pio_mode - XFER_PIO_0;
unsigned long flags;
u32 val;


if (pio > 6) {
dev_err(ap->dev, "Unknown PIO mode\n");
return;
}

spin_lock_irqsave(&acdev->host->lock, flags);
val = readl(acdev->vbase + OP_MODE) &
~(ULTRA_DMA_ENB | MULTI_WORD_DMA_ENB | DRQ_BLOCK_SIZE_MASK);
writel(val, acdev->vbase + OP_MODE);
val = readl(acdev->vbase + TM_CFG) & ~TRUEIDE_PIO_TIMING_MASK;
val |= pio << TRUEIDE_PIO_TIMING_SHIFT;
writel(val, acdev->vbase + TM_CFG);

cf_interrupt_enable(acdev, BUF_AVAIL_IRQ | XFER_DONE_IRQ, 0);
cf_interrupt_enable(acdev, PIO_XFER_ERR_IRQ, 1);
spin_unlock_irqrestore(&acdev->host->lock, flags);
}