pcibus_t pci_bridge_get_limit(const PCIDevice *bridge, uint8_t type)
{
pcibus_t limit;
if (type & PCI_BASE_ADDRESS_SPACE_IO) {
limit = pci_config_get_io_base(bridge,
PCI_IO_LIMIT, PCI_IO_LIMIT_UPPER16);
limit |= 0xfff;         
} else {
if (type & PCI_BASE_ADDRESS_MEM_PREFETCH) {
limit = pci_config_get_pref_base(
bridge, PCI_PREF_MEMORY_LIMIT, PCI_PREF_LIMIT_UPPER32);
} else {
limit = pci_config_get_memory_base(bridge, PCI_MEMORY_LIMIT);
}
limit |= 0xfffff;       
}
return limit;
}