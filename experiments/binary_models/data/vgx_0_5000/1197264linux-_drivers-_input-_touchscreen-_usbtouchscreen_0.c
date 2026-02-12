static int usbtouch_reset_resume(struct usb_interface *intf)
{
struct usbtouch_usb *usbtouch = usb_get_intfdata(intf);
int err = 0;


if (usbtouch->type->init) {
err = usbtouch->type->init(usbtouch);
if (err) {
dev_dbg(&intf->dev,
"%s - type->init() failed, err: %d\n",
__func__, err);
return err;
}
}


mutex_lock(&usbtouch->pm_mutex);
if (usbtouch->is_open)
err = usb_submit_urb(usbtouch->irq, GFP_NOIO);
mutex_unlock(&usbtouch->pm_mutex);

return err;
}