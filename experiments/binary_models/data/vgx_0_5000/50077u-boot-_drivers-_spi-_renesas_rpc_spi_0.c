static int rpc_spi_of_to_plat(struct udevice *bus)
{
struct rpc_spi_plat *plat = dev_get_plat(bus);

plat->regs = dev_read_addr_index(bus, 0);
plat->extr = dev_read_addr_index(bus, 1);

struct rpc_spi_priv *priv = dev_get_priv(bus);
int ret;

ret = clk_get_by_index(bus, 0, &priv->clk);
if (ret < 0) {
printf("%s: Could not get clock for %s: %d\n",
__func__, bus->name, ret);
return ret;
}

plat->freq = dev_read_u32_default(bus, "spi-max-freq", 50000000);

return 0;
}