int vnic_wq_alloc(struct vnic_dev *vdev, struct vnic_wq *wq, unsigned int index,
unsigned int desc_count, unsigned int desc_size)
{
int err;

wq->index = index;
wq->vdev = vdev;

wq->ctrl = vnic_dev_get_res(vdev, RES_TYPE_WQ, index);
if (!wq->ctrl) {
vdev_err(vdev, "Failed to hook WQ[%d] resource\n", index);
return -EINVAL;
}

vnic_wq_disable(wq);

err = vnic_dev_alloc_desc_ring(vdev, &wq->ring, desc_count, desc_size);
if (err)
return err;

err = vnic_wq_alloc_bufs(wq);
if (err) {
vnic_wq_free(wq);
return err;
}

return 0;
}