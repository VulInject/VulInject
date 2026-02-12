static int serverworks_fixup_osb4(struct pci_dev *pdev)
{
u32 reg;
struct pci_dev *isa_dev = pci_get_device(PCI_VENDOR_ID_SERVERWORKS,
PCI_DEVICE_ID_SERVERWORKS_OSB4, NULL);
if (isa_dev) {
pci_read_config_dword(isa_dev, 0x64, &reg);
reg &= ~0x00002000; 
if (!(reg & 0x00004000))
printk(KERN_DEBUG DRV_NAME ": UDMA not BIOS enabled.\n");
reg |=  0x00004000; 
pci_write_config_dword(isa_dev, 0x64, reg);
pci_dev_put(isa_dev);
return 0;
}
printk(KERN_WARNING DRV_NAME ": Unable to find bridge.\n");
return -ENODEV;
}