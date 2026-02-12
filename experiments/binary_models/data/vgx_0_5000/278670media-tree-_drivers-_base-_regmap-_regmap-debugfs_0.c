static ssize_t regmap_name_read_file(struct file *file,
char __user *user_buf, size_t count,
loff_t *ppos)
{
struct regmap *map = file->private_data;
int ret;
char *buf;

buf = kmalloc(PAGE_SIZE, GFP_KERNEL);
if (!buf)
return -ENOMEM;

ret = snprintf(buf, PAGE_SIZE, "%s\n", map->dev->driver->name);
if (ret < 0) {
kfree(buf);
return ret;
}

ret = simple_read_from_buffer(user_buf, count, ppos, buf, ret);
kfree(buf);
return ret;
}