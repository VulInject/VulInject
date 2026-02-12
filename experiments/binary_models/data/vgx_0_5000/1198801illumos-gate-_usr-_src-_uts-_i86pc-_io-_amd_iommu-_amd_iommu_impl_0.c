static int
amd_iommu_setup_passthru(amd_iommu_t *iommu)
{
gfx_entry_t *gfxp;
dev_info_t *dip;


amd_iommu_set_passthru(iommu, NULL);

for (gfxp = gfx_devinfo_list; gfxp; gfxp = gfxp->g_next) {
gfxp->g_ref++;
dip = gfxp->g_dip;
if (dip) {
amd_iommu_set_passthru(iommu, dip);
}
gfxp->g_ref--;
}

return (DDI_SUCCESS);
}