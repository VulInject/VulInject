static void virtio_ccw_reset(struct virtio_device *vdev)
{
struct virtio_ccw_device *vcdev = to_vc_device(vdev);
struct ccw1 *ccw;

ccw = kzalloc(sizeof(*ccw), GFP_DMA | GFP_KERNEL);
if (!ccw)
return;


*vcdev->status = 0;


ccw->cmd_code = CCW_CMD_VDEV_RESET;
ccw->flags = 0;
ccw->count = 0;
ccw->cda = 0;
ccw_io_helper(vcdev, ccw, VIRTIO_CCW_DOING_RESET);
kfree(ccw);
}