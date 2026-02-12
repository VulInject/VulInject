static int sandbox_submit_bulk(struct udevice *bus, struct usb_device *udev,
unsigned long pipe, void *buffer, int length)
{
struct udevice *emul;
int ret;


debug("%s: bus=%s\n", __func__, bus->name);
ret = usb_emul_find(bus, pipe, udev->portnr, &emul);
usbmon_trace(bus, pipe, NULL, emul);
if (ret)
return ret;
ret = usb_emul_bulk(emul, udev, pipe, buffer, length);
if (ret < 0) {
debug("ret=%d\n", ret);
udev->status = ret;
udev->act_len = 0;
} else {
udev->status = 0;
udev->act_len = ret;
}

return ret;
}