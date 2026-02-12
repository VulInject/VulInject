static void intel_dsm_init(struct intel_host *intel_host, struct device *dev,
struct mmc_host *mmc)
{
int err;
u32 val;

err = __intel_dsm(intel_host, dev, INTEL_DSM_FNS, &intel_host->dsm_fns);
if (err) {
pr_debug("%s: DSM not supported, error %d\n",
mmc_hostname(mmc), err);
return;
}

pr_debug("%s: DSM function mask %#x\n",
mmc_hostname(mmc), intel_host->dsm_fns);

err = intel_dsm(intel_host, dev, INTEL_DSM_DRV_STRENGTH, &val);
intel_host->drv_strength = err ? 0 : val;

err = intel_dsm(intel_host, dev, INTEL_DSM_D3_RETUNE, &val);
intel_host->d3_retune = err ? true : !!val;
}