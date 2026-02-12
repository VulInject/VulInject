static void s390_iommu_get_resv_regions(struct device *dev,
struct list_head *list)
{
struct zpci_dev *zdev = to_zpci_dev(dev);
struct iommu_resv_region *region;

if (zdev->start_dma) {
region = iommu_alloc_resv_region(0, zdev->start_dma, 0,
IOMMU_RESV_RESERVED, GFP_KERNEL);
if (!region)
return;
list_add_tail(&region->list, list);
}

if (zdev->end_dma < ZPCI_TABLE_SIZE_RT - 1) {
region = iommu_alloc_resv_region(zdev->end_dma + 1,
ZPCI_TABLE_SIZE_RT - zdev->end_dma - 1,
0, IOMMU_RESV_RESERVED, GFP_KERNEL);
if (!region)
return;
list_add_tail(&region->list, list);
}
}