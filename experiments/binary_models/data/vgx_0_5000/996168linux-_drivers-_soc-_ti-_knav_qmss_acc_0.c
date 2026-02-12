static int knav_acc_set_notify(struct knav_range_info *range,
struct knav_queue_inst *kq,
bool enabled)
{
struct knav_pdsp_info *pdsp = range->acc_info.pdsp;
struct knav_device *kdev = range->kdev;
u32 mask, offset;


if (!enabled || atomic_read(&kq->desc_count) <= 0)
return 0;

kq->notify_needed = 1;
atomic_inc(&kq->acc->retrigger_count);
mask = BIT(kq->acc->channel % 32);
offset = ACC_INTD_OFFSET_STATUS(kq->acc->channel);
dev_dbg(kdev->dev, "setup-notify: re-triggering irq for %s\n",
kq->acc->name);
writel_relaxed(mask, pdsp->intd + offset);
return 0;
}