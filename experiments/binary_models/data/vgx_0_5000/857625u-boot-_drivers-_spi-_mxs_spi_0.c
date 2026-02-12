static int mxs_of_to_plat(struct udevice *bus)
{
struct mxs_spi_plat *plat = dev_get_plat(bus);
u32 prop[2];
int ret;

plat->base = dev_read_addr(bus);
plat->frequency =
dev_read_u32_default(bus, "spi-max-frequency", 40000000);
plat->num_cs = dev_read_u32_default(bus, "num-cs", 2);

ret = dev_read_u32_array(bus, "dmas", prop, ARRAY_SIZE(prop));
if (ret) {
printf("%s: Reading 'dmas' property failed!\n", __func__);
return ret;
}
plat->dma_id = prop[1];

ret = dev_read_u32_array(bus, "clocks", prop, ARRAY_SIZE(prop));
if (ret) {
printf("%s: Reading 'clocks' property failed!\n", __func__);
return ret;
}
plat->clk_id = prop[1];

debug("%s: base=0x%x, max-frequency=%d num-cs=%d dma_id=%d clk_id=%d\n",
__func__, (uint)plat->base, plat->frequency, plat->num_cs,
plat->dma_id, plat->clk_id);

return 0;
}