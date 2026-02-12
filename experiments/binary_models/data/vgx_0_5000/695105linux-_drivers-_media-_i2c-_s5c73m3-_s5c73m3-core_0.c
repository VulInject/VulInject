static int s5c73m3_load_fw(struct v4l2_subdev *sd)
{
struct s5c73m3 *state = sensor_sd_to_s5c73m3(sd);
struct i2c_client *client = state->i2c_client;
const struct firmware *fw;
int ret;
char fw_name[20];

snprintf(fw_name, sizeof(fw_name), "SlimISP_%.2s.bin",
state->fw_file_version);
ret = request_firmware(&fw, fw_name, &client->dev);
if (ret < 0) {
v4l2_err(sd, "Firmware request failed (%s)\n", fw_name);
return -EINVAL;
}

v4l2_info(sd, "Loading firmware (%s, %zu B)\n", fw_name, fw->size);

ret = s5c73m3_spi_write(state, fw->data, fw->size, 64);

if (ret >= 0)
state->isp_ready = 1;
else
v4l2_err(sd, "SPI write failed\n");

release_firmware(fw);

return ret;
}