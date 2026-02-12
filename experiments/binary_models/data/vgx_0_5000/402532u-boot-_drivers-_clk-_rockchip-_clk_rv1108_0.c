static ulong rv1108_mmc_set_clk(struct rv1108_cru *cru, ulong rate)
{
int div;
u32 pll_rate;

div = DIV_ROUND_UP(rkclk_pll_get_rate(cru, CLK_GENERAL), rate);

if (div < 127) {
debug("%s source gpll\n", __func__);
rk_clrsetreg(&cru->clksel_con[25], EMMC_PLL_SEL_MASK,
(EMMC_PLL_SEL_GPLL << EMMC_PLL_SEL_SHIFT));
pll_rate = rkclk_pll_get_rate(cru, CLK_GENERAL);
} else {
debug("%s source 24m\n", __func__);
rk_clrsetreg(&cru->clksel_con[25], EMMC_PLL_SEL_MASK,
(EMMC_PLL_SEL_OSC << EMMC_PLL_SEL_SHIFT));
pll_rate = OSC_HZ;
}

div = DIV_ROUND_UP(pll_rate / 2, rate);
rk_clrsetreg(&cru->clksel_con[26], EMMC_CLK_DIV_MASK,
((div - 1) << EMMC_CLK_DIV_SHIFT));

debug("%s set_rate %ld div %d\n", __func__,  rate, div);

return DIV_TO_RATE(pll_rate, div);
}