static int venus_shutdown_no_tz(struct venus_core *core)
{
const size_t mapped = core->fw.mapped_mem_size;
struct iommu_domain *iommu;
size_t unmapped;
u32 reg;
struct device *dev = core->fw.dev;
void __iomem *wrapper_base = core->wrapper_base;
void __iomem *wrapper_tz_base = core->wrapper_tz_base;

if (IS_V6(core)) {

reg = readl(wrapper_tz_base + WRAPPER_TZ_XTSS_SW_RESET);
reg |= WRAPPER_XTSS_SW_RESET_BIT;
writel(reg, wrapper_tz_base + WRAPPER_TZ_XTSS_SW_RESET);
} else {

reg = readl(wrapper_base + WRAPPER_A9SS_SW_RESET);
reg |= WRAPPER_A9SS_SW_RESET_BIT;
writel(reg, wrapper_base + WRAPPER_A9SS_SW_RESET);
}

iommu = core->fw.iommu_domain;

if (core->fw.mapped_mem_size && iommu) {
unmapped = iommu_unmap(iommu, VENUS_FW_START_ADDR, mapped);

if (unmapped != mapped)
dev_err(dev, "failed to unmap firmware\n");
else
core->fw.mapped_mem_size = 0;
}

return 0;
}