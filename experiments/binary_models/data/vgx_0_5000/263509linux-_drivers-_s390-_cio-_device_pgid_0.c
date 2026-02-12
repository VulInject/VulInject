static void disband_callback(struct ccw_device *cdev, void *data, int rc)
{
struct subchannel *sch = to_subchannel(cdev->dev.parent);
struct ccw_dev_id *id = &cdev->private->dev_id;

if (rc)
goto out;

cdev->private->flags.mpath = 0;
if (sch->config.mp) {
sch->config.mp = 0;
rc = cio_commit_config(sch);
}
out:
CIO_MSG_EVENT(0, "disb: device 0.%x.%04x: rc=%d\n", id->ssid, id->devno,
rc);
ccw_device_disband_done(cdev, rc);
}