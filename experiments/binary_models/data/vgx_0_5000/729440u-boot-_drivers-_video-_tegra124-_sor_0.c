int tegra_dc_sor_set_power_state(struct udevice *dev, int pu_pd)
{
struct tegra_dc_sor_data *sor = dev_get_priv(dev);
u32 reg_val;
u32 orig_val;

orig_val = tegra_sor_readl(sor, PWR);

reg_val = pu_pd ? PWR_NORMAL_STATE_PU :
PWR_NORMAL_STATE_PD; 

if (reg_val == orig_val)
return 0;	

reg_val |= PWR_SETTING_NEW_TRIGGER;
tegra_sor_writel(sor, PWR, reg_val);


if (tegra_dc_sor_poll_register(sor, PWR,
PWR_SETTING_NEW_DEFAULT_MASK,
PWR_SETTING_NEW_DONE,
100, TEGRA_SOR_TIMEOUT_MS)) {
debug("dc timeout waiting for SOR_PWR = NEW_DONE\n");
return -EFAULT;
}

return 0;
}