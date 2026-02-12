static int emc_icc_set(struct icc_node *src, struct icc_node *dst)
{
struct tegra_emc *emc = to_tegra_emc_provider(dst->provider);
unsigned long long peak_bw = icc_units_to_bps(dst->peak_bw);
unsigned long long avg_bw = icc_units_to_bps(dst->avg_bw);
unsigned long long rate = max(avg_bw, peak_bw);
const unsigned int dram_data_bus_width_bytes = 4;
const unsigned int ddr = 2;
int err;


do_div(rate, ddr * dram_data_bus_width_bytes);
rate = min_t(u64, rate, U32_MAX);

err = emc_set_min_rate(emc, rate, EMC_RATE_ICC);
if (err)
return err;

return 0;
}