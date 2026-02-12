void *pci_epf_alloc_space(struct pci_epf *epf, size_t size, enum pci_barno bar,
size_t align, enum pci_epc_interface_type type)
{
struct pci_epf_bar *epf_bar;
dma_addr_t phys_addr;
struct pci_epc *epc;
struct device *dev;
void *space;

if (size < 128)
size = 128;

if (align)
size = ALIGN(size, align);
else
size = roundup_pow_of_two(size);

if (type == PRIMARY_INTERFACE) {
epc = epf->epc;
epf_bar = epf->bar;
} else {
epc = epf->sec_epc;
epf_bar = epf->sec_epc_bar;
}

dev = epc->dev.parent;
space = dma_alloc_coherent(dev, size, &phys_addr, GFP_KERNEL);
if (!space) {
dev_err(dev, "failed to allocate mem space\n");
return NULL;
}

epf_bar[bar].phys_addr = phys_addr;
epf_bar[bar].addr = space;
epf_bar[bar].size = size;
epf_bar[bar].barno = bar;
epf_bar[bar].flags |= upper_32_bits(size) ?
PCI_BASE_ADDRESS_MEM_TYPE_64 :
PCI_BASE_ADDRESS_MEM_TYPE_32;

return space;
}