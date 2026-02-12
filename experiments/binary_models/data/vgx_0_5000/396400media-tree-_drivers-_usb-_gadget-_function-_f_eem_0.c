static int eem_setup(struct usb_function *f, const struct usb_ctrlrequest *ctrl)
{
struct usb_composite_dev *cdev = f->config->cdev;
int			value = -EOPNOTSUPP;
u16			w_index = le16_to_cpu(ctrl->wIndex);
u16			w_value = le16_to_cpu(ctrl->wValue);
u16			w_length = le16_to_cpu(ctrl->wLength);

DBG(cdev, "invalid control req%02x.%02x v%04x i%04x l%d\n",
ctrl->bRequestType, ctrl->bRequest,
w_value, w_index, w_length);


return value;
}