static void pcim_release(struct device *gendev, void *res)
{
struct pci_dev *dev = to_pci_dev(gendev);
struct pci_devres *this = res;
int i;

for (i = 0; i < DEVICE_COUNT_RESOURCE; i++)
if (this->region_mask & (1 << i))
pci_release_region(dev, i);

if (this->mwi)
pci_clear_mwi(dev);

if (this->restore_intx)
pci_intx(dev, this->orig_intx);

if (this->enabled && !this->pinned)
pci_disable_device(dev);
}