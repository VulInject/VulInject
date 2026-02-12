static int btmrvl_set_bdaddr(struct hci_dev *hdev, const bdaddr_t *bdaddr)
{
struct sk_buff *skb;
long ret;
u8 buf[8];

buf[0] = MRVL_VENDOR_PKT;
buf[1] = sizeof(bdaddr_t);
memcpy(buf + 2, bdaddr, sizeof(bdaddr_t));

skb = __hci_cmd_sync(hdev, BT_CMD_SET_BDADDR, sizeof(buf), buf,
HCI_INIT_TIMEOUT);
if (IS_ERR(skb)) {
ret = PTR_ERR(skb);
BT_ERR("%s: changing btmrvl device address failed (%ld)",
hdev->name, ret);
return ret;
}
kfree_skb(skb);

return 0;
}