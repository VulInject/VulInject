static unsigned long k210_pll_get_rate(struct clk_hw *hw,
unsigned long parent_rate)
{
struct k210_pll *pll = to_k210_pll(hw);
u32 reg = readl(pll->reg);
u32 r, f, od;

if (reg & K210_PLL_BYPASS)
return parent_rate;

if (!(reg & K210_PLL_PWRD))
return 0;

r = FIELD_GET(K210_PLL_CLKR, reg) + 1;
f = FIELD_GET(K210_PLL_CLKF, reg) + 1;
od = FIELD_GET(K210_PLL_CLKOD, reg) + 1;

return (u64)parent_rate * f / (r * od);
}

static const struct clk_ops k210_pll_ops = {
.enable		= k210_pll_enable,
.disable	= k210_pll_disable,
.is_enabled	= k210_pll_is_enabled,
.recalc_rate	= k210_pll_get_rate,
};