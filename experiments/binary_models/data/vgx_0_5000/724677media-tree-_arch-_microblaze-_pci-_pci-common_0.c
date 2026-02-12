static void pcibios_fixup_resources(struct pci_dev *dev)
{
struct pci_controller *hose = pci_bus_to_host(dev->bus);
int i;

if (!hose) {
pr_err("No host bridge for PCI dev %s !\n",
pci_name(dev));
return;
}
for (i = 0; i < DEVICE_COUNT_RESOURCE; i++) {
struct resource *res = dev->resource + i;
if (!res->flags)
continue;
if (res->start == 0) {
pr_debug("PCI:%s Resource %d %016llx-%016llx [%x]",
pci_name(dev), i,
(unsigned long long)res->start,
(unsigned long long)res->end,
(unsigned int)res->flags);
pr_debug("is unassigned\n");
res->end -= res->start;
res->start = 0;
res->flags |= IORESOURCE_UNSET;
continue;
}

pr_debug("PCI:%s Resource %d %016llx-%016llx [%x]\n",
pci_name(dev), i,
(unsigned long long)res->start,
(unsigned long long)res->end,
(unsigned int)res->flags);
}
}