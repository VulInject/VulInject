module_param(alt, int, 0644);
MODULE_PARM_DESC(alt, "alternate setting to use for video endpoint");

if (core_debug) \
printk(KERN_INFO "%s %s :"fmt, \
dev->name, __func__ , ##arg); } while (0)



LIST_HEAD(cx231xx_devlist);
static DEFINE_MUTEX(cx231xx_devlist_mutex);


void cx231xx_remove_from_devlist(struct cx231xx *dev)
{
if (dev == NULL)
return;
if (dev->udev == NULL)
return;

if (atomic_read(&dev->devlist_count) > 0) {
mutex_lock(&cx231xx_devlist_mutex);
list_del(&dev->devlist);
atomic_dec(&dev->devlist_count);
mutex_unlock(&cx231xx_devlist_mutex);
}
};