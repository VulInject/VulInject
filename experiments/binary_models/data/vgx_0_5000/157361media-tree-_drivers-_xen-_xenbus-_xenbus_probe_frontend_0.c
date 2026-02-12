static int print_device_status(struct device *dev, void *data)
{
struct xenbus_device *xendev = to_xenbus_device(dev);
struct device_driver *drv = data;


if (drv && (dev->driver != drv))
return 0;

if (!dev->driver) {

pr_info("Device with no driver: %s\n", xendev->nodename);
} else if (xendev->state < XenbusStateConnected) {
enum xenbus_state rstate = XenbusStateUnknown;
if (xendev->otherend)
rstate = xenbus_read_driver_state(xendev->otherend);
pr_warn("Timeout connecting to device: %s (local state %d, remote state %d)\n",
xendev->nodename, xendev->state, rstate);
}

return 0;
}