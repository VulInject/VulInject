static void dsi_host_regulator_disable(struct msm_dsi_host *msm_host)
{
struct regulator_bulk_data *s = msm_host->supplies;
const struct dsi_reg_entry *regs = msm_host->cfg_hnd->cfg->reg_cfg.regs;
int num = msm_host->cfg_hnd->cfg->reg_cfg.num;
int i;

DBG("");
for (i = num - 1; i >= 0; i--)
if (regs[i].disable_load >= 0)
regulator_set_load(s[i].consumer,
regs[i].disable_load);

regulator_bulk_disable(num, s);
}