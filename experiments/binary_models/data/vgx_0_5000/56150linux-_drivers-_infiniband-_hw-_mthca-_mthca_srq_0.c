void mthca_srq_event(struct mthca_dev *dev, u32 srqn,
enum ib_event_type event_type)
{
struct mthca_srq *srq;
struct ib_event event;

spin_lock(&dev->srq_table.lock);
srq = mthca_array_get(&dev->srq_table.srq, srqn & (dev->limits.num_srqs - 1));
if (srq)
++srq->refcount;
spin_unlock(&dev->srq_table.lock);

if (!srq) {
mthca_warn(dev, "Async event for bogus SRQ %08x\n", srqn);
return;
}

if (!srq->ibsrq.event_handler)
goto out;

event.device      = &dev->ib_dev;
event.event       = event_type;
event.element.srq = &srq->ibsrq;
srq->ibsrq.event_handler(&event, srq->ibsrq.srq_context);

out:
spin_lock(&dev->srq_table.lock);
if (!--srq->refcount)
wake_up(&srq->wait);
spin_unlock(&dev->srq_table.lock);
}