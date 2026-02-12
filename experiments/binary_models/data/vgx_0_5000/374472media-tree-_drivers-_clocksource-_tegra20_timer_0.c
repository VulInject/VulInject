}
CLOCKSOURCE_OF_DECLARE(tegra20_timer, "nvidia,tegra20-timer", tegra20_init_timer);

static int __init tegra20_init_rtc(struct device_node *np)
{
struct clk *clk;

rtc_base = of_iomap(np, 0);
if (!rtc_base) {
pr_err("Can't map RTC registers\n");
return -ENXIO;
}


clk = of_clk_get(np, 0);
if (IS_ERR(clk))
pr_warn("Unable to get rtc-tegra clock\n");
else
clk_prepare_enable(clk);

return register_persistent_clock(NULL, tegra_read_persistent_clock64);
}