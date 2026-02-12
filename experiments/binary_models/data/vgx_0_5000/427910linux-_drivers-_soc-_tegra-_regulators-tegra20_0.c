static int tegra20_core_limit(struct tegra_regulator_coupler *tegra,
struct regulator_dev *core_rdev)
{
int core_min_uV = 0;
int core_max_uV;
int core_cur_uV;
int err;


if (tegra_pmc_core_domain_state_synced() && !tegra->sys_reboot_mode) {
pr_info_once("voltage state synced\n");
return 0;
}

if (tegra->core_min_uV > 0)
return tegra->core_min_uV;

core_cur_uV = regulator_get_voltage_rdev(core_rdev);
if (core_cur_uV < 0)
return core_cur_uV;

core_max_uV = max(core_cur_uV, 1200000);

err = regulator_check_voltage(core_rdev, &core_min_uV, &core_max_uV);
if (err)
return err;


tegra->core_min_uV = core_max_uV;

pr_info("core voltage initialized to %duV\n", tegra->core_min_uV);

return tegra->core_min_uV;
}