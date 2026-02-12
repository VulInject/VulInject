static void tegra20_mc_stat_gather(struct tegra20_mc_stat *stat)
{
u32 clocks, count0, count1, control_0, control_1;
const struct tegra_mc *mc = stat->mc;

control_0 = tegra20_mc_stat_gather_control(&stat->gather0);
control_1 = tegra20_mc_stat_gather_control(&stat->gather1);


mc_writel(mc, 0x00000000, MC_STAT_CONTROL);
mc_writel(mc,  control_0, MC_STAT_EMC_CONTROL_0);
mc_writel(mc,  control_1, MC_STAT_EMC_CONTROL_1);
mc_writel(mc, 0xffffffff, MC_STAT_EMC_CLOCK_LIMIT);

mc_writel(mc, EMC_GATHER_ENABLE, MC_STAT_CONTROL);
fsleep(stat->sample_time_usec);
mc_writel(mc, EMC_GATHER_DISABLE, MC_STAT_CONTROL);

count0 = mc_readl(mc, MC_STAT_EMC_COUNT_0);
count1 = mc_readl(mc, MC_STAT_EMC_COUNT_1);
clocks = mc_readl(mc, MC_STAT_EMC_CLOCKS);
clocks = max(clocks / 100 / MC_FX_FRAC_SCALE, 1u);

stat->gather0.result = DIV_ROUND_UP(count0, clocks);
stat->gather1.result = DIV_ROUND_UP(count1, clocks);
}