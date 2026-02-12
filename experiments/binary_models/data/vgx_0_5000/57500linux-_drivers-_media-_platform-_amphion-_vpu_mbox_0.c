static int vpu_mbox_request_channel(struct device *dev, struct vpu_mbox *mbox)
{
struct mbox_chan *ch;
struct mbox_client *cl;

if (!dev || !mbox)
return -EINVAL;
if (mbox->ch)
return 0;

cl = &mbox->cl;
cl->dev = dev;
if (mbox->block) {
cl->tx_block = true;
cl->tx_tout = 1000;
} else {
cl->tx_block = false;
}
cl->knows_txdone = false;
cl->rx_callback = vpu_mbox_rx_callback;

ch = mbox_request_channel_byname(cl, mbox->name);
if (IS_ERR(ch)) {
dev_err(dev, "Failed to request mbox chan %s, ret : %ld\n",
mbox->name, PTR_ERR(ch));
return PTR_ERR(ch);
}

mbox->ch = ch;
return 0;
}