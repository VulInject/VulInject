static int queue_setup(struct vb2_queue *vq,
unsigned int *nbuffers, unsigned int *nplanes,
unsigned int sizes[], struct device *alloc_devs[])
{
struct cx231xx *dev = vb2_get_drv_priv(vq);
unsigned int size = mpeglinesize * mpeglines;

dev->ts1.ts_packet_size  = mpeglinesize;
dev->ts1.ts_packet_count = mpeglines;

if (vq->num_buffers + *nbuffers < CX231XX_MIN_BUF)
*nbuffers = CX231XX_MIN_BUF - vq->num_buffers;

if (*nplanes)
return sizes[0] < size ? -EINVAL : 0;
*nplanes = 1;
sizes[0] = mpeglinesize * mpeglines;

return 0;
}