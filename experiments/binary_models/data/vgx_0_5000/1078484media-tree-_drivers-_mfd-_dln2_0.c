static int dln2_start_rx_urbs(struct dln2_dev *dln2, gfp_t gfp)
{
struct device *dev = &dln2->interface->dev;
int ret;
int i;

for (i = 0; i < DLN2_MAX_URBS; i++) {
ret = usb_submit_urb(dln2->rx_urb[i], gfp);
if (ret < 0) {
dev_err(dev, "failed to submit RX URB: %d\n", ret);
return ret;
}
}

return 0;
}