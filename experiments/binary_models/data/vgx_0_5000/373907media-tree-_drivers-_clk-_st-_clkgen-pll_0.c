static int __clkgen_pll_enable(struct clk_hw *hw)
{
struct clkgen_pll *pll = to_clkgen_pll(hw);
void __iomem *base =  pll->regs_base;
struct clkgen_field *field = &pll->data->locked_status;
int ret = 0;
u32 reg;

if (clkgen_pll_is_enabled(hw))
return 0;

CLKGEN_WRITE(pll, pdn_ctrl, 0);

ret = readl_relaxed_poll_timeout(base + field->offset, reg,
!!((reg >> field->shift) & field->mask),  0, 10000);

if (!ret) {
if (pll->data->switch2pll_en)
CLKGEN_WRITE(pll, switch2pll, 0);

pr_debug("%s:%s enabled\n", __clk_get_name(hw->clk), __func__);
}

return ret;
}