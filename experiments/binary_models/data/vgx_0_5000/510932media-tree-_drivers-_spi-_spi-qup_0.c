static int spi_qup_prep_sg(struct spi_master *master, struct spi_transfer *xfer,
enum dma_transfer_direction dir,
dma_async_tx_callback callback)
{
struct spi_qup *qup = spi_master_get_devdata(master);
unsigned long flags = DMA_PREP_INTERRUPT | DMA_PREP_FENCE;
struct dma_async_tx_descriptor *desc;
struct scatterlist *sgl;
struct dma_chan *chan;
dma_cookie_t cookie;
unsigned int nents;

if (dir == DMA_MEM_TO_DEV) {
chan = master->dma_tx;
nents = xfer->tx_sg.nents;
sgl = xfer->tx_sg.sgl;
} else {
chan = master->dma_rx;
nents = xfer->rx_sg.nents;
sgl = xfer->rx_sg.sgl;
}

desc = dmaengine_prep_slave_sg(chan, sgl, nents, dir, flags);
if (!desc)
return -EINVAL;

desc->callback = callback;
desc->callback_param = qup;

cookie = dmaengine_submit(desc);

return dma_submit_error(cookie);
}