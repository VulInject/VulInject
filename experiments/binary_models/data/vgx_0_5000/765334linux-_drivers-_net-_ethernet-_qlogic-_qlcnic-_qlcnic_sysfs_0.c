static ssize_t qlcnic_sysfs_read_pm_config(struct file *filp,
struct kobject *kobj,
struct bin_attribute *attr,
char *buf, loff_t offset,
size_t size)
{
struct device *dev = kobj_to_dev(kobj);
struct qlcnic_adapter *adapter = dev_get_drvdata(dev);
struct qlcnic_pm_func_cfg *pm_cfg;
u8 pci_func;
u32 count;
int i;

memset(buf, 0, size);
pm_cfg = (struct qlcnic_pm_func_cfg *)buf;
count = size / sizeof(struct qlcnic_pm_func_cfg);
for (i = 0; i < adapter->ahw->total_nic_func; i++) {
pci_func = adapter->npars[i].pci_func;
if (pci_func >= count) {
dev_dbg(dev, "%s: Total nic functions[%d], App sent function count[%d]\n",
__func__, adapter->ahw->total_nic_func, count);
continue;
}
if (!adapter->npars[i].eswitch_status)
continue;

pm_cfg[pci_func].action = adapter->npars[i].enable_pm;
pm_cfg[pci_func].dest_npar = 0;
pm_cfg[pci_func].pci_func = i;
}
qlcnic_swap32_buffer((u32 *)buf, size / sizeof(u32));
return size;
}