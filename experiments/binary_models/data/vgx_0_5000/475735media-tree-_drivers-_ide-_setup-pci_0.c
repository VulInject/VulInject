static int do_ide_setup_pci_device(struct pci_dev *dev,
const struct ide_port_info *d,
u8 noisy)
{
int pciirq, ret;


pciirq = dev->irq;


ret = d->init_chipset ? d->init_chipset(dev) : 0;
if (ret < 0)
goto out;

if (ide_pci_is_in_compatibility_mode(dev)) {
if (noisy)
printk(KERN_INFO "%s %s: not 100%% native mode: will "
"probe irqs later\n", d->name, pci_name(dev));
pciirq = 0;
} else if (!pciirq && noisy) {
printk(KERN_WARNING "%s %s: bad irq (%d): will probe later\n",
d->name, pci_name(dev), pciirq);
} else if (noisy) {
printk(KERN_INFO "%s %s: 100%% native mode on irq %d\n",
d->name, pci_name(dev), pciirq);
}

ret = pciirq;
out:
return ret;
}