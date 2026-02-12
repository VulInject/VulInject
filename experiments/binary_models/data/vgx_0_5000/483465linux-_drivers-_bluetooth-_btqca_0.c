int qca_set_bdaddr_rome(struct hci_dev *hdev, const bdaddr_t *bdaddr)
{
struct sk_buff *skb;
u8 cmd[9];
int err;

cmd[0] = EDL_NVM_ACCESS_SET_REQ_CMD;
cmd[1] = 0x02; 			
cmd[2] = sizeof(bdaddr_t);	
memcpy(cmd + 3, bdaddr, sizeof(bdaddr_t));
skb = __hci_cmd_sync_ev(hdev, EDL_NVM_ACCESS_OPCODE, sizeof(cmd), cmd,
HCI_EV_VENDOR, HCI_INIT_TIMEOUT);
if (IS_ERR(skb)) {
err = PTR_ERR(skb);
bt_dev_err(hdev, "QCA Change address command failed (%d)", err);
return err;
}

kfree_skb(skb);

return 0;
}