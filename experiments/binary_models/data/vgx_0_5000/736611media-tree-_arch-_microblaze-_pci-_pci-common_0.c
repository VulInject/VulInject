static struct resource *__pci_mmap_make_offset(struct pci_dev *dev,
resource_size_t *offset,
enum pci_mmap_state mmap_state)
{
struct pci_controller *hose = pci_bus_to_host(dev->bus);
unsigned long io_offset = 0;
int i, res_bit;

if (!hose)
return NULL;		


if (mmap_state == pci_mmap_mem) {
*offset += hose->pci_mem_offset;
res_bit = IORESOURCE_MEM;
} else {
io_offset = (unsigned long)hose->io_base_virt - _IO_BASE;
*offset += io_offset;
res_bit = IORESOURCE_IO;
}


for (i = 0; i <= PCI_ROM_RESOURCE; i++) {
struct resource *rp = &dev->resource[i];
int flags = rp->flags;


if (i == PCI_ROM_RESOURCE)
flags |= IORESOURCE_MEM;


if ((flags & res_bit) == 0)
continue;


if (*offset < (rp->start & PAGE_MASK) || *offset > rp->end)
continue;


if (mmap_state == pci_mmap_io)
*offset += hose->io_base_phys - io_offset;
return rp;
}

return NULL;
}