}
EXPORT_SYMBOL_GPL(mt76_get_antenna);

struct mt76_queue *
mt76_init_queue(struct mt76_dev *dev, int qid, int idx, int n_desc,
int ring_base, u32 flags)
{
struct mt76_queue *hwq;
int err;

hwq = devm_kzalloc(dev->dev, sizeof(*hwq), GFP_KERNEL);
if (!hwq)
return ERR_PTR(-ENOMEM);

hwq->flags = flags;

err = dev->queue_ops->alloc(dev, hwq, idx, n_desc, 0, ring_base);
if (err < 0)
return ERR_PTR(err);

return hwq;
}