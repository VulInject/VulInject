static struct dma_async_tx_descriptor *
ldma_chan_desc_cfg(struct dma_chan *chan, dma_addr_t desc_base, int desc_num)
{
struct ldma_chan *c = to_ldma_chan(chan);
struct ldma_dev *d = to_ldma_dev(c->vchan.chan.device);
struct dma_async_tx_descriptor *tx;
struct dw2_desc_sw *ds;

if (!desc_num) {
dev_err(d->dev, "Channel %d must allocate descriptor first\n",
c->nr);
return NULL;
}

if (desc_num > DMA_MAX_DESC_NUM) {
dev_err(d->dev, "Channel %d descriptor number out of range %d\n",
c->nr, desc_num);
return NULL;
}

ldma_chan_desc_hw_cfg(c, desc_base, desc_num);

c->flags |= DMA_HW_DESC;
c->desc_cnt = desc_num;
c->desc_phys = desc_base;

ds = kzalloc(sizeof(*ds), GFP_NOWAIT);
if (!ds)
return NULL;

tx = &ds->vdesc.tx;
dma_async_tx_descriptor_init(tx, chan);

return tx;
}