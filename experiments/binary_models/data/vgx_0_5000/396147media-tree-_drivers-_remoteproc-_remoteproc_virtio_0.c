static void rproc_virtio_set(struct virtio_device *vdev, unsigned int offset,
const void *buf, unsigned int len)
{
struct rproc_vdev *rvdev = vdev_to_rvdev(vdev);
struct fw_rsc_vdev *rsc;
void *cfg;

rsc = (void *)rvdev->rproc->table_ptr + rvdev->rsc_offset;
cfg = &rsc->vring[rsc->num_of_vrings];

if (offset + len > rsc->config_len || offset + len < len) {
dev_err(&vdev->dev, "rproc_virtio_set: access out of bounds\n");
return;
}

memcpy(cfg + offset, buf, len);
}