static int hci_transceive(struct nfc_dev *nfc_dev, struct nfc_target *target,
struct sk_buff *skb, data_exchange_cb_t cb,
void *cb_context)
{
struct nfc_hci_dev *hdev = nfc_get_drvdata(nfc_dev);
int r;

pr_debug("target_idx=%d\n", target->idx);

switch (target->hci_reader_gate) {
case NFC_HCI_RF_READER_A_GATE:
case NFC_HCI_RF_READER_B_GATE:
if (hdev->ops->im_transceive) {
r = hdev->ops->im_transceive(hdev, target, skb, cb,
cb_context);
if (r <= 0)	
break;
}

*skb_push(skb, 1) = 0;	

hdev->async_cb_type = HCI_CB_TYPE_TRANSCEIVE;
hdev->async_cb = cb;
hdev->async_cb_context = cb_context;

r = nfc_hci_send_cmd_async(hdev, target->hci_reader_gate,
NFC_HCI_WR_XCHG_DATA, skb->data,
skb->len, hci_transceive_cb, hdev);
break;
default:
if (hdev->ops->im_transceive) {
r = hdev->ops->im_transceive(hdev, target, skb, cb,
cb_context);
if (r == 1)
r = -ENOTSUPP;
} else {
r = -ENOTSUPP;
}
break;
}

kfree_skb(skb);

return r;
}