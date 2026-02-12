static ssize_t arvo_sysfs_show_mode_key(struct device *dev,
struct device_attribute *attr, char *buf)
{
struct arvo_device *arvo =
hid_get_drvdata(dev_get_drvdata(dev->parent->parent));
struct usb_device *usb_dev =
interface_to_usbdev(to_usb_interface(dev->parent->parent));
struct arvo_mode_key temp_buf;
int retval;

mutex_lock(&arvo->arvo_lock);
retval = roccat_common2_receive(usb_dev, ARVO_COMMAND_MODE_KEY,
&temp_buf, sizeof(struct arvo_mode_key));
mutex_unlock(&arvo->arvo_lock);
if (retval)
return retval;

return snprintf(buf, PAGE_SIZE, "%d\n", temp_buf.state);
}