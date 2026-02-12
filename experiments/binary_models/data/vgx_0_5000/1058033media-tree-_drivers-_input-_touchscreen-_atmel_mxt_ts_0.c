static int mxt_probe_bootloader(struct mxt_data *data, bool alt_address)
{
struct device *dev = &data->client->dev;
int error;
u8 val;
bool crc_failure;

error = mxt_lookup_bootloader_address(data, alt_address);
if (error)
return error;

error = mxt_bootloader_read(data, &val, 1);
if (error)
return error;


crc_failure = (val & ~MXT_BOOT_STATUS_MASK) == MXT_APP_CRC_FAIL;

dev_err(dev, "Detected bootloader, status:%02X%s\n",
val, crc_failure ? ", APP_CRC_FAIL" : "");

return 0;
}