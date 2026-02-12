static void rndis_msg_indicate(struct usbnet *dev, struct rndis_indicate *msg,
int buflen)
{
struct cdc_state *info = (void *)&dev->data;
struct device *udev = &info->control->dev;

if (dev->driver_info->indication) {
dev->driver_info->indication(dev, msg, buflen);
} else {
u32 status = le32_to_cpu(msg->status);

switch (status) {
case RNDIS_STATUS_MEDIA_CONNECT:
dev_info(udev, "rndis media connect\n");
break;
case RNDIS_STATUS_MEDIA_DISCONNECT:
dev_info(udev, "rndis media disconnect\n");
break;
default:
dev_info(udev, "rndis indication: 0x%08x\n", status);
}
}
}