static ssize_t eeprom_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
{
struct i2c_client *client = kobj_to_i2c_client(kobj);
struct eeprom_data *data = i2c_get_clientdata(client);
u8 slice;


for (slice = off >> 5; slice <= (off + count - 1) >> 5; slice++)
eeprom_update_client(client, slice);


if (data->nature == VAIO && !capable(CAP_SYS_ADMIN)) {
int i;

for (i = 0; i < count; i++) {
if ((off + i <= 0x1f) ||
(off + i >= 0xc0 && off + i <= 0xdf))
buf[i] = 0;
else
buf[i] = data->data[off + i];
}
} else {
memcpy(buf, &data->data[off], count);
}

return count;
}

static const struct bin_attribute eeprom_attr = {
.attr = {
.name = "eeprom",
.mode = S_IRUGO,
},
.size = EEPROM_SIZE,
.read = eeprom_read,
};