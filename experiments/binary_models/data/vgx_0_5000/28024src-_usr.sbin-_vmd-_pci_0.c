void
pci_init(void)
{
uint8_t id;

memset(&pci, 0, sizeof(pci));
pci.pci_next_mmio_bar = VMM_PCI_MMIO_BAR_BASE;
pci.pci_next_io_bar = VM_PCI_IO_BAR_BASE;

if (pci_add_device(&id, PCI_VENDOR_OPENBSD, PCI_PRODUCT_OPENBSD_PCHB,
PCI_CLASS_BRIDGE, PCI_SUBCLASS_BRIDGE_HOST,
PCI_VENDOR_OPENBSD, 0, 0, NULL)) {
log_warnx("%s: can't add PCI host bridge", __progname);
return;
}
}