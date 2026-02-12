static int hexium_init_done(struct saa7146_dev *dev)
{
struct hexium *hexium = (struct hexium *) dev->ext_priv;
union i2c_smbus_data data;
int i = 0;

DEB_D("hexium_init_done called\n");


for (i = 0; i < sizeof(hexium_saa7110); i++) {
data.byte = hexium_saa7110[i];
if (0 != i2c_smbus_xfer(&hexium->i2c_adapter, 0x4e, 0, I2C_SMBUS_WRITE, i, I2C_SMBUS_BYTE_DATA, &data)) {
pr_err("failed for address 0x%02x\n", i);
}
}

return 0;
}