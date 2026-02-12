static int msg_level = -1;
module_param(msg_level, int, 0);
MODULE_PARM_DESC(msg_level, "Override default message level");

MODULE_DEVICE_TABLE(usb, pegasus_ids);
static const struct net_device_ops pegasus_netdev_ops;



static void async_ctrl_callback(struct urb *urb)
{
struct usb_ctrlrequest *req = (struct usb_ctrlrequest *)urb->context;
int status = urb->status;

if (status < 0)
dev_dbg(&urb->dev->dev, "%s failed with %d", __func__, status);
kfree(req);
usb_free_urb(urb);
}