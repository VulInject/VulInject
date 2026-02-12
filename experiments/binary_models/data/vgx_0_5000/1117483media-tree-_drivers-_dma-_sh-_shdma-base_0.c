void shdma_chan_probe(struct shdma_dev *sdev,
struct shdma_chan *schan, int id)
{
schan->pm_state = SHDMA_PM_ESTABLISHED;


schan->dma_chan.device = &sdev->dma_dev;
dma_cookie_init(&schan->dma_chan);

schan->dev = sdev->dma_dev.dev;
schan->id = id;

if (!schan->max_xfer_len)
schan->max_xfer_len = PAGE_SIZE;

spin_lock_init(&schan->chan_lock);


INIT_LIST_HEAD(&schan->ld_queue);
INIT_LIST_HEAD(&schan->ld_free);


list_add_tail(&schan->dma_chan.device_node,
&sdev->dma_dev.channels);
sdev->schan[id] = schan;
}