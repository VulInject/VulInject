static int pxa_camera_init_videobuf2(struct pxa_camera_dev *pcdev)
{
int ret;
struct vb2_queue *vq = &pcdev->vb2_vq;

memset(vq, 0, sizeof(*vq));
vq->type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
vq->io_modes = VB2_MMAP | VB2_USERPTR | VB2_DMABUF;
vq->drv_priv = pcdev;
vq->timestamp_flags = V4L2_BUF_FLAG_TIMESTAMP_MONOTONIC;
vq->buf_struct_size = sizeof(struct pxa_buffer);
vq->dev = pcdev->v4l2_dev.dev;

vq->ops = &pxac_vb2_ops;
vq->mem_ops = &vb2_dma_sg_memops;
vq->lock = &pcdev->mlock;

ret = vb2_queue_init(vq);
dev_dbg(pcdev_to_dev(pcdev),
"vb2_queue_init(vq=%p): %d\n", vq, ret);

return ret;
}