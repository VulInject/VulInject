}
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_SERVERWORKS, 0x0240, fixup_k2_sata);


static void fixup_u4_pcie(struct pci_dev* dev)
{
struct pci_controller *host = pci_bus_to_host(dev->bus);
struct resource *region = NULL;
u32 reg;
int i;


if (!machine_is(powermac))
return;


for (i = 0; i < 3; i++) {
struct resource *r = &host->mem_resources[i];
if (!(r->flags & IORESOURCE_MEM))
continue;

if (r->start >= 0xf0000000 && r->start < 0xf3000000)
continue;
if (!region || resource_size(r) > resource_size(region))
region = r;
}

if (!region)
return;


printk(KERN_INFO "PCI: Fixup U4 PCIe bridge range: %pR\n", region);


reg = ((region->start >> 16) & 0xfff0) | (region->end & 0xfff00000);
pci_write_config_dword(dev, PCI_MEMORY_BASE, reg);
pci_write_config_dword(dev, PCI_PREF_BASE_UPPER32, 0);
pci_write_config_dword(dev, PCI_PREF_LIMIT_UPPER32, 0);
pci_write_config_dword(dev, PCI_PREF_MEMORY_BASE, 0);
}