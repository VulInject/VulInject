static int speedtch_heavy_init(struct usbatm_data *usbatm, struct usb_interface *intf)
{
const struct firmware *fw1, *fw2;
struct speedtch_instance_data *instance = usbatm->driver_data;
int ret;

if ((ret = speedtch_find_firmware(usbatm, intf, 1, &fw1)) < 0)
return ret;

if ((ret = speedtch_find_firmware(usbatm, intf, 2, &fw2)) < 0) {
release_firmware(fw1);
return ret;
}

if ((ret = speedtch_upload_firmware(instance, fw1, fw2)) < 0)
usb_err(usbatm, "%s: firmware upload failed (%d)!\n", __func__, ret);

release_firmware(fw2);
release_firmware(fw1);

return ret;
}