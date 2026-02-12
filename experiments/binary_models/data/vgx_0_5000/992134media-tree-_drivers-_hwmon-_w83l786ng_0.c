static int
w83l786ng_detect(struct i2c_client *client, struct i2c_board_info *info)
{
struct i2c_adapter *adapter = client->adapter;
u16 man_id;
u8 chip_id;

if (!i2c_check_functionality(adapter, I2C_FUNC_SMBUS_BYTE_DATA))
return -ENODEV;


if ((w83l786ng_read_value(client, W83L786NG_REG_CONFIG) & 0x80)) {
dev_dbg(&adapter->dev, "W83L786NG detection failed at 0x%02x\n",
client->addr);
return -ENODEV;
}


man_id = (w83l786ng_read_value(client, W83L786NG_REG_MAN_ID1) << 8) +
w83l786ng_read_value(client, W83L786NG_REG_MAN_ID2);
chip_id = w83l786ng_read_value(client, W83L786NG_REG_CHIP_ID);

if (man_id != 0x5CA3 ||		
chip_id != 0x80) {		
dev_dbg(&adapter->dev,
"Unsupported chip (man_id=0x%04X, chip_id=0x%02X)\n",
man_id, chip_id);
return -ENODEV;
}

strlcpy(info->type, "w83l786ng", I2C_NAME_SIZE);

return 0;
}