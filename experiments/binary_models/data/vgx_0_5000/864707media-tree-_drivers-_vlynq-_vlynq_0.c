static int vlynq_device_match(struct device *dev,
struct device_driver *drv)
{
struct vlynq_device *vdev = to_vlynq_device(dev);
struct vlynq_driver *vdrv = to_vlynq_driver(drv);
struct vlynq_device_id *ids = vdrv->id_table;

while (ids->id) {
if (ids->id == vdev->dev_id) {
vdev->divisor = ids->divisor;
vlynq_set_drvdata(vdev, ids);
printk(KERN_INFO "Driver found for VLYNQ "
"device: %08x\n", vdev->dev_id);
return 1;
}
printk(KERN_DEBUG "Not using the %08x VLYNQ device's driver"
" for VLYNQ device: %08x\n", ids->id, vdev->dev_id);
ids++;
}
return 0;
}