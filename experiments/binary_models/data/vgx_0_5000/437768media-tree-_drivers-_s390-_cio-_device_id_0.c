static void snsid_callback(struct ccw_device *cdev, void *data, int rc)
{
struct ccw_dev_id *id = &cdev->private->dev_id;
struct senseid *senseid = &cdev->private->senseid;
int vm = 0;

if (rc && MACHINE_IS_VM) {

snsid_init(cdev);
if (diag210_get_dev_info(cdev) == 0) {
rc = 0;
vm = 1;
}
}
CIO_MSG_EVENT(2, "snsid: device 0.%x.%04x: rc=%d %04x/%02x "
"%04x/%02x%s\n", id->ssid, id->devno, rc,
senseid->cu_type, senseid->cu_model, senseid->dev_type,
senseid->dev_model, vm ? " (diag210)" : "");
ccw_device_sense_id_done(cdev, rc);
}