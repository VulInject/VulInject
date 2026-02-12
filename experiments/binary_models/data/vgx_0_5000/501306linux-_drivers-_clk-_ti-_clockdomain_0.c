void omap2_clkops_disable_clkdm(struct clk_hw *hw)
{
struct clk_hw_omap *clk;

clk = to_clk_hw_omap(hw);

if (unlikely(!clk->clkdm)) {
pr_err("%s: %s: no clkdm set ?!\n", __func__,
clk_hw_get_name(hw));
return;
}

if (ti_clk_get_features()->flags & TI_CLK_DISABLE_CLKDM_CONTROL) {
pr_err("%s: %s: clkfw-based clockdomain control disabled ?!\n",
__func__, clk_hw_get_name(hw));
return;
}

ti_clk_ll_ops->clkdm_clk_disable(clk->clkdm, hw->clk);
}