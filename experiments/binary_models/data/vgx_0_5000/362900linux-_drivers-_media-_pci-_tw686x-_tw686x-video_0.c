static int tw686x_queue_setup(struct vb2_queue *vq,
unsigned int *nbuffers, unsigned int *nplanes,
unsigned int sizes[], struct device *alloc_devs[])
{
struct tw686x_video_channel *vc = vb2_get_drv_priv(vq);
unsigned int szimage =
(vc->width * vc->height * vc->format->depth) >> 3;


if (vq->num_buffers + *nbuffers < 3)
*nbuffers = 3 - vq->num_buffers;

if (*nplanes) {
if (*nplanes != 1 || sizes[0] < szimage)
return -EINVAL;
return 0;
}

sizes[0] = szimage;
*nplanes = 1;
return 0;
}