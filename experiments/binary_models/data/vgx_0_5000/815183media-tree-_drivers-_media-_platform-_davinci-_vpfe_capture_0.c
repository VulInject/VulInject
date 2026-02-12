static irqreturn_t vdint1_isr(int irq, void *dev_id)
{
struct vpfe_device *vpfe_dev = dev_id;

v4l2_dbg(1, debug, &vpfe_dev->v4l2_dev, "\nInside vdint1_isr...\n");


if (!vpfe_dev->started) {
if (vpfe_dev->cfg->clr_intr)
vpfe_dev->cfg->clr_intr(irq);
return IRQ_HANDLED;
}

spin_lock(&vpfe_dev->dma_queue_lock);
if ((vpfe_dev->fmt.fmt.pix.field == V4L2_FIELD_NONE) &&
!list_empty(&vpfe_dev->dma_queue) &&
vpfe_dev->cur_frm == vpfe_dev->next_frm)
vpfe_schedule_next_buffer(vpfe_dev);
spin_unlock(&vpfe_dev->dma_queue_lock);

if (vpfe_dev->cfg->clr_intr)
vpfe_dev->cfg->clr_intr(irq);

return IRQ_HANDLED;
}