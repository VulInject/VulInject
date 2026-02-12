static int usb_target_bind(struct usb_composite_dev *cdev)
{
int ret;

ret = usb_string_ids_tab(cdev, usbg_us_strings);
if (ret)
return ret;

usbg_device_desc.iManufacturer =
usbg_us_strings[USB_GADGET_MANUFACTURER_IDX].id;
usbg_device_desc.iProduct = usbg_us_strings[USB_GADGET_PRODUCT_IDX].id;
usbg_device_desc.iSerialNumber =
usbg_us_strings[USB_GADGET_SERIAL_IDX].id;
usbg_config_driver.iConfiguration =
usbg_us_strings[USB_G_STR_CONFIG].id;

ret = usb_add_config(cdev, &usbg_config_driver, tcm_do_config);
if (ret)
return ret;
usb_composite_overwrite_options(cdev, &coverwrite);
return 0;
}