static int rockchip_rk3036_pll_set_rate(struct clk_hw *hw, unsigned long drate,
unsigned long prate)
{
struct rockchip_clk_pll *pll = to_rockchip_clk_pll(hw);
const struct rockchip_pll_rate_table *rate;

pr_debug("%s: changing %s to %lu with a parent rate of %lu\n",
__func__, __clk_get_name(hw->clk), drate, prate);


rate = rockchip_get_pll_settings(pll, drate);
if (!rate) {
pr_err("%s: Invalid rate : %lu for pll clk %s\n", __func__,
drate, __clk_get_name(hw->clk));
return -EINVAL;
}

return rockchip_rk3036_pll_set_params(pll, rate);
}