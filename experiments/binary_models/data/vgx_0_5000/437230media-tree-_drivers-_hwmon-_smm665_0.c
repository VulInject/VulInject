static int smm665_read_adc(struct smm665_data *data, int adc)
{
struct i2c_client *client = data->cmdreg;
int rv;
int radc;


rv = i2c_smbus_read_byte_data(client, adc << 3);
if (rv != -ENXIO) {

dev_dbg(&client->dev,
"Unexpected return code %d when setting ADC index", rv);
return (rv < 0) ? rv : -EIO;
}

udelay(data->conversion_time);


rv = i2c_smbus_read_word_swapped(client, 0);
if (rv < 0) {
dev_dbg(&client->dev, "Failed to read ADC value: error %d", rv);
return rv;
}

radc = (rv >> 11) & 0x0f;
if (radc != adc) {
dev_dbg(&client->dev, "Unexpected RADC: Expected %d got %d",
adc, radc);
return -EIO;
}

return rv & SMM665_ADC_MASK;
}