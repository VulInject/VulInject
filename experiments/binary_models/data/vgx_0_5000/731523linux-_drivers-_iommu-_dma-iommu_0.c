static int cookie_init_hw_msi_region(struct iommu_dma_cookie *cookie,
phys_addr_t start, phys_addr_t end)
{
struct iova_domain *iovad = &cookie->iovad;
struct iommu_dma_msi_page *msi_page;
int i, num_pages;

start -= iova_offset(iovad, start);
num_pages = iova_align(iovad, end - start) >> iova_shift(iovad);

for (i = 0; i < num_pages; i++) {
msi_page = kmalloc(sizeof(*msi_page), GFP_KERNEL);
if (!msi_page)
return -ENOMEM;

msi_page->phys = start;
msi_page->iova = start;
INIT_LIST_HEAD(&msi_page->list);
list_add(&msi_page->list, &cookie->msi_page_list);
start += iovad->granule;
}

return 0;
}