static uint64_t pci_msix_read(void *opaque, hwaddr addr,
unsigned size)
{
XenPCIPassthroughState *s = opaque;
XenPTMSIX *msix = s->msix;
int entry_nr, offset;

entry_nr = addr / PCI_MSIX_ENTRY_SIZE;
if (entry_nr < 0) {
XEN_PT_ERR(&s->dev, "asked MSI-X entry '%i' invalid!\n", entry_nr);
return 0;
}

offset = addr % PCI_MSIX_ENTRY_SIZE;

if (addr < msix->total_entries * PCI_MSIX_ENTRY_SIZE) {
return get_entry_value(&msix->msix_entry[entry_nr], offset);
} else {

return *(uint32_t *)(msix->phys_iomem_base + addr);
}
}