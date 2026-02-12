static irqreturn_t hisi_dma_irq(int irq, void *data)
{
struct hisi_dma_chan *chan = data;
struct hisi_dma_dev *hdma_dev = chan->hdma_dev;
struct hisi_dma_desc *desc;
struct hisi_dma_cqe *cqe;
void __iomem *q_base;

spin_lock(&chan->vc.lock);

desc = chan->desc;
cqe = chan->cq + chan->cq_head;
q_base = hdma_dev->queue_base;
if (desc) {
chan->cq_head = (chan->cq_head + 1) % hdma_dev->chan_depth;
hisi_dma_chan_write(q_base, HISI_DMA_Q_CQ_HEAD_PTR,
chan->qp_num, chan->cq_head);
if (FIELD_GET(STATUS_MASK, cqe->w0) == STATUS_SUCC) {
vchan_cookie_complete(&desc->vd);
hisi_dma_start_transfer(chan);
} else {
dev_err(&hdma_dev->pdev->dev, "task error!\n");
}
}

spin_unlock(&chan->vc.lock);

return IRQ_HANDLED;
}