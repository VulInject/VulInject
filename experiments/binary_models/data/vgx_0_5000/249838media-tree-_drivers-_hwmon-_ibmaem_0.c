static void aem_msg_handler(struct ipmi_recv_msg *msg, void *user_msg_data)
{
unsigned short rx_len;
struct aem_ipmi_data *data = user_msg_data;

if (msg->msgid != data->tx_msgid) {
dev_err(data->bmc_device,
"Mismatch between received msgid (%02x) and transmitted msgid (%02x)!\n",
(int)msg->msgid,
(int)data->tx_msgid);
ipmi_free_recv_msg(msg);
return;
}

data->rx_recv_type = msg->recv_type;
if (msg->msg.data_len > 0)
data->rx_result = msg->msg.data[0];
else
data->rx_result = IPMI_UNKNOWN_ERR_COMPLETION_CODE;

if (msg->msg.data_len > 1) {
rx_len = msg->msg.data_len - 1;
if (data->rx_msg_len < rx_len)
rx_len = data->rx_msg_len;
data->rx_msg_len = rx_len;
memcpy(data->rx_msg_data, msg->msg.data + 1, data->rx_msg_len);
} else
data->rx_msg_len = 0;

ipmi_free_recv_msg(msg);
complete(&data->read_complete);
}