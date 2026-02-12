int
pcibios_enable_resources(struct pci_dev *dev, int mask)
{
u16 cmd, old_cmd;
int idx;
struct resource *r;

pci_read_config_word(dev, PCI_COMMAND, &cmd);
old_cmd = cmd;
for(idx=0; idx<6; idx++) {
r = &dev->resource[idx];
if (!r->start && r->end) {
printk (KERN_ERR "PCI: Device %s not available because "
"of resource collisions\n", pci_name(dev));
return -EINVAL;
}
if (r->flags & IORESOURCE_IO)
cmd |= PCI_COMMAND_IO;
if (r->flags & IORESOURCE_MEM)
cmd |= PCI_COMMAND_MEMORY;
}
if (dev->resource[PCI_ROM_RESOURCE].start)
cmd |= PCI_COMMAND_MEMORY;
if (cmd != old_cmd) {
printk("PCI: Enabling device %s (%04x -> %04x)\n",
pci_name(dev), old_cmd, cmd);
pci_write_config_word(dev, PCI_COMMAND, cmd);
}
return 0;
}