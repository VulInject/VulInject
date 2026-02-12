static int ccw_io_helper(struct virtio_ccw_device *vcdev,
struct ccw1 *ccw, __u32 intparm)
{
int ret;
unsigned long flags;
int flag = intparm & VIRTIO_CCW_INTPARM_MASK;

mutex_lock(&vcdev->io_lock);
do {
spin_lock_irqsave(get_ccwdev_lock(vcdev->cdev), flags);
ret = ccw_device_start(vcdev->cdev, ccw, intparm, 0, 0);
if (!ret) {
if (!vcdev->curr_io)
vcdev->err = 0;
vcdev->curr_io |= flag;
}
spin_unlock_irqrestore(get_ccwdev_lock(vcdev->cdev), flags);
cpu_relax();
} while (ret == -EBUSY);
wait_event(vcdev->wait_q, doing_io(vcdev, flag) == 0);
ret = ret ? ret : vcdev->err;
mutex_unlock(&vcdev->io_lock);
return ret;
}