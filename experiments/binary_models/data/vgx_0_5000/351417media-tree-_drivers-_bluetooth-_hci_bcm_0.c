static int bcm_set_baudrate(struct hci_uart *hu, unsigned int speed)
{
struct hci_dev *hdev = hu->hdev;
struct sk_buff *skb;
struct bcm_update_uart_baud_rate param;

if (speed > 3000000) {
struct bcm_write_uart_clock_setting clock;

clock.type = BCM_UART_CLOCK_48MHZ;

bt_dev_dbg(hdev, "Set Controller clock (%d)", clock.type);


skb = __hci_cmd_sync(hdev, 0xfc45, 1, &clock, HCI_INIT_TIMEOUT);
if (IS_ERR(skb)) {
int err = PTR_ERR(skb);
bt_dev_err(hdev, "BCM: failed to write clock (%d)",
err);
return err;
}

kfree_skb(skb);
}

bt_dev_dbg(hdev, "Set Controller UART speed to %d bit/s", speed);

param.zero = cpu_to_le16(0);
param.baud_rate = cpu_to_le32(speed);


skb = __hci_cmd_sync(hdev, 0xfc18, sizeof(param), &param,
HCI_INIT_TIMEOUT);
if (IS_ERR(skb)) {
int err = PTR_ERR(skb);
bt_dev_err(hdev, "BCM: failed to write update baudrate (%d)",
err);
return err;
}

kfree_skb(skb);

return 0;
}