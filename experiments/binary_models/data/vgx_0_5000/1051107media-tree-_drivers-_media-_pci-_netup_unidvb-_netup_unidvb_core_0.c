static int netup_unidvb_queue_init(struct netup_dma *dma,
struct vb2_queue *vb_queue)
{
int res;


vb_queue->type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
vb_queue->io_modes = VB2_MMAP | VB2_USERPTR | VB2_READ;
vb_queue->drv_priv = dma;
vb_queue->buf_struct_size = sizeof(struct netup_unidvb_buffer);
vb_queue->ops = &dvb_qops;
vb_queue->mem_ops = &vb2_vmalloc_memops;
vb_queue->timestamp_flags = V4L2_BUF_FLAG_TIMESTAMP_MONOTONIC;
res = vb2_queue_init(vb_queue);
if (res != 0) {
dev_err(&dma->ndev->pci_dev->dev,
"%s(): vb2_queue_init failed (%d)\n", __func__, res);
}
return res;
}