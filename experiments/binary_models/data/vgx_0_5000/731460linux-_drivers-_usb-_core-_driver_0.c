static int usb_suspend_device(struct usb_device *udev, pm_message_t msg)
{
struct usb_device_driver	*udriver;
int				status = 0;

if (udev->state == USB_STATE_NOTATTACHED ||
udev->state == USB_STATE_SUSPENDED)
goto done;


if (udev->dev.driver)
udriver = to_usb_device_driver(udev->dev.driver);
else {
udev->do_remote_wakeup = 0;
udriver = &usb_generic_driver;
}
if (udriver->suspend)
status = udriver->suspend(udev, msg);
if (status == 0 && udriver->generic_subclass)
status = usb_generic_driver_suspend(udev, msg);

done:
dev_vdbg(&udev->dev, "%s: status %d\n", __func__, status);
return status;
}