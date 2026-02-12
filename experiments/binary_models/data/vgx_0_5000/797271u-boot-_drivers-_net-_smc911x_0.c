static int smc911x_of_to_plat(struct udevice *dev)
{
struct smc911x_priv *priv = dev_get_priv(dev);
struct eth_pdata *pdata = dev_get_plat(dev);
u32 io_width;
int ret;

pdata->iobase = dev_read_addr(dev);
priv->iobase = pdata->iobase;

ret = dev_read_u32(dev, "reg-io-width", &io_width);
if (!ret)
priv->use_32_bit_io = (io_width == 4);
else
priv->use_32_bit_io = CONFIG_IS_ENABLED(SMC911X_32_BIT);

return 0;
}

static const struct eth_ops smc911x_ops = {
.start	= smc911x_start,
.send	= smc911x_send,
.recv	= smc911x_recv,
.stop	= smc911x_stop,
.read_rom_hwaddr = smc911x_read_rom_hwaddr,
};