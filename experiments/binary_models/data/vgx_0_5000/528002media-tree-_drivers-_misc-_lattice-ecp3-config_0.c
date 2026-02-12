static int lattice_ecp3_probe(struct spi_device *spi)
{
struct fpga_data *data;
int err;

data = devm_kzalloc(&spi->dev, sizeof(*data), GFP_KERNEL);
if (!data) {
dev_err(&spi->dev, "Memory allocation for fpga_data failed\n");
return -ENOMEM;
}
spi_set_drvdata(spi, data);

init_completion(&data->fw_loaded);
err = request_firmware_nowait(THIS_MODULE, FW_ACTION_HOTPLUG,
FIRMWARE_NAME, &spi->dev,
GFP_KERNEL, spi, firmware_load);
if (err) {
dev_err(&spi->dev, "Firmware loading failed with %d!\n", err);
return err;
}

dev_info(&spi->dev, "FPGA bitstream configuration driver registered\n");

return 0;
}