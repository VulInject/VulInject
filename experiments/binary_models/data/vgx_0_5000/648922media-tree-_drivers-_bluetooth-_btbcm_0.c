static struct sk_buff *btbcm_read_local_name(struct hci_dev *hdev)
{
struct sk_buff *skb;

skb = __hci_cmd_sync(hdev, HCI_OP_READ_LOCAL_NAME, 0, NULL,
HCI_INIT_TIMEOUT);
if (IS_ERR(skb)) {
BT_ERR("%s: BCM: Reading local name failed (%ld)",
hdev->name, PTR_ERR(skb));
return skb;
}

if (skb->len != sizeof(struct hci_rp_read_local_name)) {
BT_ERR("%s: BCM: Local name length mismatch", hdev->name);
kfree_skb(skb);
return ERR_PTR(-EIO);
}

return skb;
}