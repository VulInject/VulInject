static void bcma_core_pci_fixup_pcibridge(struct pci_dev *dev)
{
if (dev->bus->ops->read != bcma_core_pci_hostmode_read_config) {

return;
}
if (PCI_SLOT(dev->devfn) != 0)
return;

pr_info("PCI: Fixing up bridge %s\n", pci_name(dev));


pci_set_master(dev);
if (pcibios_enable_device(dev, ~0) < 0) {
pr_err("PCI: BCMA bridge enable failed\n");
return;
}


pci_write_config_dword(dev, BCMA_PCI_BAR1_CONTROL, 3);
}