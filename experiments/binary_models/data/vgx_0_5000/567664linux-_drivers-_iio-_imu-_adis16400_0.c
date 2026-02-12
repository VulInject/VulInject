static ssize_t adis16400_show_serial_number(struct file *file,
char __user *userbuf, size_t count, loff_t *ppos)
{
struct adis16400_state *st = file->private_data;
u16 lot1, lot2, serial_number;
char buf[16];
size_t len;
int ret;

ret = adis_read_reg_16(&st->adis, ADIS16334_LOT_ID1, &lot1);
if (ret)
return ret;

ret = adis_read_reg_16(&st->adis, ADIS16334_LOT_ID2, &lot2);
if (ret)
return ret;

ret = adis_read_reg_16(&st->adis, ADIS16334_SERIAL_NUMBER,
&serial_number);
if (ret)
return ret;

len = snprintf(buf, sizeof(buf), "%.4x-%.4x-%.4x\n", lot1, lot2,
serial_number);

return simple_read_from_buffer(userbuf, count, ppos, buf, len);
}

static const struct file_operations adis16400_serial_number_fops = {
.open = simple_open,
.read = adis16400_show_serial_number,
.llseek = default_llseek,
.owner = THIS_MODULE,
};