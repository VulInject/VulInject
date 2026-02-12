static ssize_t eeprom_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
{
struct i2c_client *client = kobj_to_i2c_client(kobj);
size_t requested = count;
int ret = 0;


mutex_lock(&ee1004_bus_lock);

while (count) {
ret = ee1004_eeprom_read(client, buf, off, count);
if (ret < 0)
goto out;

buf += ret;
off += ret;
count -= ret;
}
out:
mutex_unlock(&ee1004_bus_lock);

return ret < 0 ? ret : requested;
}