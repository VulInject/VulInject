bool btmrvl_check_evtpkt(struct btmrvl_private *priv, struct sk_buff *skb)
{
struct hci_event_hdr *hdr = (void *) skb->data;

if (hdr->evt == HCI_EV_CMD_COMPLETE) {
struct hci_ev_cmd_complete *ec;
u16 opcode;

ec = (void *) (skb->data + HCI_EVENT_HDR_SIZE);
opcode = __le16_to_cpu(ec->opcode);

if (priv->btmrvl_dev.sendcmdflag) {
priv->btmrvl_dev.sendcmdflag = false;
priv->adapter->cmd_complete = true;
wake_up_interruptible(&priv->adapter->cmd_wait_q);

if (hci_opcode_ogf(opcode) == 0x3F) {
BT_DBG("vendor event skipped: opcode=%#4.4x",
opcode);
kfree_skb(skb);
return false;
}
}
}

return true;
}