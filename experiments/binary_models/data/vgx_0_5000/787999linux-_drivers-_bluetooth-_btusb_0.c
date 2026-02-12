static struct urb *alloc_ctrl_urb(struct hci_dev *hdev, struct sk_buff *skb)
{
struct btusb_data *data = hci_get_drvdata(hdev);
struct usb_ctrlrequest *dr;
struct urb *urb;
unsigned int pipe;

urb = usb_alloc_urb(0, GFP_KERNEL);
if (!urb)
return ERR_PTR(-ENOMEM);

dr = kmalloc(sizeof(*dr), GFP_KERNEL);
if (!dr) {
usb_free_urb(urb);
return ERR_PTR(-ENOMEM);
}

dr->bRequestType = data->cmdreq_type;
dr->bRequest     = data->cmdreq;
dr->wIndex       = 0;
dr->wValue       = 0;
dr->wLength      = __cpu_to_le16(skb->len);

pipe = usb_sndctrlpipe(data->udev, 0x00);

usb_fill_control_urb(urb, data->udev, pipe, (void *)dr,
skb->data, skb->len, btusb_tx_complete, skb);

skb->dev = (void *)hdev;

return urb;
}