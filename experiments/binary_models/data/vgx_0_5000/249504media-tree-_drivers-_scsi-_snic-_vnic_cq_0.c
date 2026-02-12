int svnic_cq_alloc(struct vnic_dev *vdev, struct vnic_cq *cq,
unsigned int index, unsigned int desc_count, unsigned int desc_size)
{
int err;

cq->index = index;
cq->vdev = vdev;

cq->ctrl = svnic_dev_get_res(vdev, RES_TYPE_CQ, index);
if (!cq->ctrl) {
pr_err("Failed to hook CQ[%d] resource\n", index);

return -EINVAL;
}

err = svnic_dev_alloc_desc_ring(vdev, &cq->ring, desc_count, desc_size);
if (err)
return err;

return 0;
}