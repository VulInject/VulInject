static int h4_recv(struct hci_uart *hu, const void *data, int count)
{
struct h4_struct *h4 = hu->priv;

if (!test_bit(HCI_UART_REGISTERED, &hu->flags))
return -EUNATCH;

h4->rx_skb = h4_recv_buf(hu->hdev, h4->rx_skb, data, count,
h4_recv_pkts, ARRAY_SIZE(h4_recv_pkts));
if (IS_ERR(h4->rx_skb)) {
int err = PTR_ERR(h4->rx_skb);
BT_ERR("%s: Frame reassembly failed (%d)", hu->hdev->name, err);
h4->rx_skb = NULL;
return err;
}

return count;
}