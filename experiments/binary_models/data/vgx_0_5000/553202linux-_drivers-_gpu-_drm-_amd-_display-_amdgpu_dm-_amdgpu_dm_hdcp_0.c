static ssize_t srm_data_read(struct file *filp, struct kobject *kobj, struct bin_attribute *bin_attr, char *buffer,
loff_t pos, size_t count)
{
struct hdcp_workqueue *work;
uint8_t *srm = NULL;
uint32_t srm_version;
uint32_t srm_size;
size_t ret = count;

work = container_of(bin_attr, struct hdcp_workqueue, attr);

link_lock(work, true);

srm = psp_get_srm(work->hdcp.config.psp.handle, &srm_version, &srm_size);

if (!srm) {
ret = -EINVAL;
goto ret;
}

if (pos >= srm_size)
ret = 0;

if (srm_size - pos < count) {
memcpy(buffer, srm + pos, srm_size - pos);
ret = srm_size - pos;
goto ret;
}

memcpy(buffer, srm + pos, count);

ret:
link_lock(work, false);
return ret;
}