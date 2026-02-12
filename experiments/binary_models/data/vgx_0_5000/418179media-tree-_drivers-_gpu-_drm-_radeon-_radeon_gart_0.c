void radeon_gart_table_ram_free(struct radeon_device *rdev)
{
if (rdev->gart.ptr == NULL) {
return;
}
if (rdev->family == CHIP_RS400 || rdev->family == CHIP_RS480 ||
rdev->family == CHIP_RS690 || rdev->family == CHIP_RS740) {
set_memory_wb((unsigned long)rdev->gart.ptr,
rdev->gart.table_size >> PAGE_SHIFT);
}
pci_free_consistent(rdev->pdev, rdev->gart.table_size,
(void *)rdev->gart.ptr,
rdev->gart.table_addr);
rdev->gart.ptr = NULL;
rdev->gart.table_addr = 0;
}