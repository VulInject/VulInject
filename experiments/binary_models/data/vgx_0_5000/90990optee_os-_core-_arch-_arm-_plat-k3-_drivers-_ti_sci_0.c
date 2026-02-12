static inline int ti_sci_get_response(struct ti_sci_xfer *xfer)
{
struct k3_sec_proxy_msg *msg = &xfer->rx_message;
struct ti_sci_msg_hdr *hdr = NULL;
unsigned int retry = 5;
int ret = 0;

for (; retry > 0; retry--) {

ret = k3_sec_proxy_recv(msg);
if (ret) {
EMSG("Message receive failed (%d)", ret);
return ret;
}


hdr = (struct ti_sci_msg_hdr *)msg->buf;


if (hdr->seq == message_sequence)
break;

IMSG("Message with sequence ID %u is not expected", hdr->seq);
}
if (!retry) {
EMSG("Timed out waiting for message");
return TEE_ERROR_BUSY;
}

if (!(hdr->flags & TI_SCI_FLAG_RESP_GENERIC_ACK)) {
DMSG("Message not acknowledged");
return TEE_ERROR_ACCESS_DENIED;
}

return 0;
}