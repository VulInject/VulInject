void mthca_cq_event(struct mthca_dev *dev, u32 cqn,
enum ib_event_type event_type)
{
struct mthca_cq *cq;
struct ib_event event;

spin_lock(&dev->cq_table.lock);

cq = mthca_array_get(&dev->cq_table.cq, cqn & (dev->limits.num_cqs - 1));
if (cq)
++cq->refcount;

spin_unlock(&dev->cq_table.lock);

if (!cq) {
mthca_warn(dev, "Async event for bogus CQ %08x\n", cqn);
return;
}

event.device      = &dev->ib_dev;
event.event       = event_type;
event.element.cq  = &cq->ibcq;
if (cq->ibcq.event_handler)
cq->ibcq.event_handler(&event, cq->ibcq.cq_context);

spin_lock(&dev->cq_table.lock);
if (!--cq->refcount)
wake_up(&cq->wait);
spin_unlock(&dev->cq_table.lock);
}