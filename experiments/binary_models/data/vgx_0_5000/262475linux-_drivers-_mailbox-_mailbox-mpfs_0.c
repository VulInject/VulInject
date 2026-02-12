static void mpfs_mbox_rx_data(struct mbox_chan *chan)
{
struct mpfs_mbox *mbox = (struct mpfs_mbox *)chan->con_priv;
struct mpfs_mss_response *response = mbox->response;
u16 num_words = ALIGN((response->resp_size), (4)) / 4U;
u32 i, status;

if (!response->resp_msg) {
dev_err(mbox->dev, "failed to assign memory for response %d\n", -ENOMEM);
return;
}


if (mpfs_mbox_busy(mbox)) {
dev_err(mbox->dev, "got an interrupt but system controller is busy\n");
response->resp_status = 0xDEAD;
return;
}

status = readl_relaxed(mbox->ctrl_base + SERVICES_SR_OFFSET);


response->resp_status = (status & SCB_STATUS_MASK) >> SCB_STATUS_POS;
if (response->resp_status)
return;

if (!mpfs_mbox_busy(mbox)) {
for (i = 0; i < num_words; i++) {
response->resp_msg[i] =
readl_relaxed(mbox->mbox_base
+ mbox->resp_offset + i * 0x4);
}
}

mbox_chan_received_data(chan, response);
}