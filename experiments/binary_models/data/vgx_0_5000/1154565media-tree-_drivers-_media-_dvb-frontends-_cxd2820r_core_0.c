struct dvb_frontend *cxd2820r_attach(const struct cxd2820r_config *config,
struct i2c_adapter *adapter,
int *gpio_chip_base)
{
struct i2c_client *client;
struct i2c_board_info board_info;
struct cxd2820r_platform_data pdata;

pdata.ts_mode = config->ts_mode;
pdata.ts_clk_inv = config->ts_clock_inv;
pdata.if_agc_polarity = config->if_agc_polarity;
pdata.spec_inv = config->spec_inv;
pdata.gpio_chip_base = &gpio_chip_base;
pdata.attach_in_use = true;

memset(&board_info, 0, sizeof(board_info));
strlcpy(board_info.type, "cxd2820r", I2C_NAME_SIZE);
board_info.addr = config->i2c_address;
board_info.platform_data = &pdata;
client = i2c_new_device(adapter, &board_info);
if (!client || !client->dev.driver)
return NULL;

return pdata.get_dvb_frontend(client);
}