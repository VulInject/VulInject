int hns_roce_uar_alloc(struct hns_roce_dev *hr_dev, struct hns_roce_uar *uar)
{
struct hns_roce_ida *uar_ida = &hr_dev->uar_ida;
int id;


id = ida_alloc_range(&uar_ida->ida, uar_ida->min, uar_ida->max,
GFP_KERNEL);
if (id < 0) {
ibdev_err(&hr_dev->ib_dev, "failed to alloc uar id(%d).\n", id);
return -ENOMEM;
}
uar->logic_idx = (unsigned long)id;

if (uar->logic_idx > 0 && hr_dev->caps.phy_num_uars > 1)
uar->index = (uar->logic_idx - 1) %
(hr_dev->caps.phy_num_uars - 1) + 1;
else
uar->index = 0;

uar->pfn = ((pci_resource_start(hr_dev->pci_dev, 2)) >> PAGE_SHIFT);
if (hr_dev->caps.flags & HNS_ROCE_CAP_FLAG_DIRECT_WQE)
hr_dev->dwqe_page = pci_resource_start(hr_dev->pci_dev, 4);

return 0;
}