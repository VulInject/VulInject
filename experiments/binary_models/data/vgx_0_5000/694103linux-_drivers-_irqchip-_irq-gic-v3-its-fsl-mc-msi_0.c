static int its_fsl_mc_msi_prepare(struct irq_domain *msi_domain,
struct device *dev,
int nvec, msi_alloc_info_t *info)
{
struct fsl_mc_device *mc_bus_dev;
struct msi_domain_info *msi_info;

if (!dev_is_fsl_mc(dev))
return -EINVAL;

mc_bus_dev = to_fsl_mc_device(dev);
if (!(mc_bus_dev->flags & FSL_MC_IS_DPRC))
return -EINVAL;


info->scratchpad[0].ul = fsl_mc_msi_domain_get_msi_id(msi_domain,
mc_bus_dev);
msi_info = msi_get_domain_info(msi_domain->parent);


nvec = max_t(int, 32, roundup_pow_of_two(nvec));
return msi_info->ops->msi_prepare(msi_domain->parent, dev, nvec, info);
}

static struct msi_domain_ops its_fsl_mc_msi_ops __ro_after_init = {
.msi_prepare = its_fsl_mc_msi_prepare,
};