static int s6e63m0_dsi_dcs_read(struct device *dev, void *trsp,
const u8 cmd, u8 *data)
{
struct mipi_dsi_device *dsi = to_mipi_dsi_device(dev);
int ret;

ret = mipi_dsi_dcs_read(dsi, cmd, data, 1);
if (ret < 0) {
dev_err(dev, "could not read DCS CMD %02x\n", cmd);
return ret;
}

dev_dbg(dev, "DSI read CMD %02x = %02x\n", cmd, *data);

return 0;
}