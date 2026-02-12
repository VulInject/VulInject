int genwqe_device_remove(struct genwqe_dev *cd)
{
int rc;
struct pci_dev *pci_dev = cd->pci_dev;

if (!genwqe_device_initialized(cd))
return 1;

genwqe_inform_and_stop_processes(cd);


rc = kref_read(&cd->cdev_genwqe.kobj.kref);
if (rc != 1) {
dev_err(&pci_dev->dev,
"[%s] err: cdev_genwqe...refcount=%d\n", __func__, rc);
panic("Fatal err: cannot free resources with pending references!");
}

genqwe_exit_debugfs(cd);
device_destroy(cd->class_genwqe, cd->devnum_genwqe);
cdev_del(&cd->cdev_genwqe);
unregister_chrdev_region(cd->devnum_genwqe, GENWQE_MAX_MINOR);
cd->dev = NULL;

return 0;
}