static int c4_probe(struct pci_dev *dev, const struct pci_device_id *ent)
{
int nr = ent->driver_data;
int retval = 0;
struct capicardparams param;

if (pci_enable_device(dev) < 0) {
printk(KERN_ERR "c4: failed to enable AVM-C%d\n", nr);
return -ENODEV;
}
pci_set_master(dev);

param.port = pci_resource_start(dev, 1);
param.irq = dev->irq;
param.membase = pci_resource_start(dev, 0);

printk(KERN_INFO "c4: PCI BIOS reports AVM-C%d at i/o %#x, irq %d, mem %#x\n",
nr, param.port, param.irq, param.membase);

retval = c4_add_card(&param, dev, nr);
if (retval != 0) {
printk(KERN_ERR "c4: no AVM-C%d at i/o %#x, irq %d detected, mem %#x\n",
nr, param.port, param.irq, param.membase);
pci_disable_device(dev);
return -ENODEV;
}
return 0;
}