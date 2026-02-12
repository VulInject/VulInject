static irqreturn_t switchtec_event_isr(int irq, void *dev)
{
struct switchtec_dev *stdev = dev;
u32 reg;
irqreturn_t ret = IRQ_NONE;
int eid, event_count = 0;

reg = ioread32(&stdev->mmio_part_cfg->mrpc_comp_hdr);
if (reg & SWITCHTEC_EVENT_OCCURRED) {
dev_dbg(&stdev->dev, "%s: mrpc comp\n", __func__);
ret = IRQ_HANDLED;
schedule_work(&stdev->mrpc_work);
iowrite32(reg, &stdev->mmio_part_cfg->mrpc_comp_hdr);
}

for (eid = 0; eid < SWITCHTEC_IOCTL_MAX_EVENTS; eid++)
event_count += mask_all_events(stdev, eid);

if (event_count) {
atomic_inc(&stdev->event_cnt);
wake_up_interruptible(&stdev->event_wq);
dev_dbg(&stdev->dev, "%s: %d events\n", __func__,
event_count);
return IRQ_HANDLED;
}

return ret;
}