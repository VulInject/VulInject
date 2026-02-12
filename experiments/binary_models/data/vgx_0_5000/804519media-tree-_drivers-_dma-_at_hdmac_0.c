static struct at_desc *atc_alloc_descriptor(struct dma_chan *chan,
gfp_t gfp_flags)
{
struct at_desc	*desc = NULL;
struct at_dma	*atdma = to_at_dma(chan->device);
dma_addr_t phys;

desc = dma_pool_zalloc(atdma->dma_desc_pool, gfp_flags, &phys);
if (desc) {
INIT_LIST_HEAD(&desc->tx_list);
dma_async_tx_descriptor_init(&desc->txd, chan);

desc->txd.flags = DMA_CTRL_ACK;
desc->txd.tx_submit = atc_tx_submit;
desc->txd.phys = phys;
}

return desc;
}