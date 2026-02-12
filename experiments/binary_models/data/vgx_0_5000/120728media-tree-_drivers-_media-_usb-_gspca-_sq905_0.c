static int
sq905_read_data(struct gspca_dev *gspca_dev, u8 *data, int size, int need_lock)
{
int ret;
int act_len;

gspca_dev->usb_buf[0] = '\0';
if (need_lock)
mutex_lock(&gspca_dev->usb_lock);
ret = usb_control_msg(gspca_dev->dev,
usb_sndctrlpipe(gspca_dev->dev, 0),
USB_REQ_SYNCH_FRAME,                
USB_DIR_OUT | USB_TYPE_VENDOR | USB_RECIP_DEVICE,
SQ905_BULK_READ, size, gspca_dev->usb_buf,
1, SQ905_CMD_TIMEOUT);
if (need_lock)
mutex_unlock(&gspca_dev->usb_lock);
if (ret < 0) {
pr_err("%s: usb_control_msg failed (%d)\n", __func__, ret);
return ret;
}
ret = usb_bulk_msg(gspca_dev->dev,
usb_rcvbulkpipe(gspca_dev->dev, 0x81),
data, size, &act_len, SQ905_DATA_TIMEOUT);


if (ret < 0 || act_len != size) {
pr_err("bulk read fail (%d) len %d/%d\n", ret, act_len, size);
return -EIO;
}
return 0;
}