static ssize_t picolcd_fb_update_rate_show(struct device *dev,
struct device_attribute *attr, char *buf)
{
struct picolcd_data *data = dev_get_drvdata(dev);
struct picolcd_fb_data *fbdata = data->fb_info->par;
unsigned i, fb_update_rate = fbdata->update_rate;
size_t ret = 0;

for (i = 1; i <= PICOLCDFB_UPDATE_RATE_LIMIT; i++)
if (ret >= PAGE_SIZE)
break;
else if (i == fb_update_rate)
ret += scnprintf(buf+ret, PAGE_SIZE-ret, "[%u] ", i);
else
ret += scnprintf(buf+ret, PAGE_SIZE-ret, "%u ", i);
if (ret > 0)
buf[min(ret, (size_t)PAGE_SIZE)-1] = '\n';
return ret;
}