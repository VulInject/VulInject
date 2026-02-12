MODULE_AUTHOR("Tilera Corporation");
MODULE_LICENSE("GPL");

static int srom_devs;			
static struct cdev srom_cdev;
static struct platform_device *srom_parent;
static struct class *srom_class;
static struct srom_dev *srom_devices;



static ssize_t _srom_read(int hv_devhdl, void *buf,
loff_t off, size_t count)
{
int retval, retries = SROM_MAX_WAIT_TRY_TIMES;
for (;;) {
retval = hv_dev_pread(hv_devhdl, 0, (HV_VirtAddr)buf,
count, off);
if (retval >= 0)
return retval;
if (retval == HV_EAGAIN)
continue;
if (retval == HV_EBUSY && --retries > 0) {
msleep(SROM_WAIT_TRY_INTERVAL);
continue;
}
pr_err("_srom_read: error %d\n", retval);
return -EIO;
}
}