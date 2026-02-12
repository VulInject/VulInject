static int wait_for_fpga_done(struct udevice *dev)
{
struct ihs_fpga_priv *priv = dev_get_priv(dev);
int ctr = 0;
int done_val;

while (1) {
done_val = dm_gpio_get_value(&priv->done_gpio);
if (done_val < 0) {
debug("%s: Error while reading done-GPIO (err = %d)\n",
dev->name, done_val);
return done_val;
}

if (done_val)
return 0;

mdelay(FPGA_DONE_WAIT_DELAY);
if (ctr++ > FPGA_DONE_WAIT_ROUND) {
debug("%s: FPGA init failed (done not detected)\n",
dev->name);
return -EIO;
}
}
}