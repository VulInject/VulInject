static int iproc_pll_set_rate(struct clk_hw *hw, unsigned long rate,
unsigned long parent_rate)
{
struct iproc_clk *clk = to_iproc_clk(hw);
struct iproc_pll *pll = clk->pll;
const struct iproc_pll_ctrl *ctrl = pll->ctrl;
struct iproc_pll_vco_param vco_param;
int rate_index, ret;

if (ctrl->flags & IPROC_CLK_PLL_CALC_PARAM) {
ret = pll_calc_param(rate, parent_rate, &vco_param);
if (ret)
return ret;
} else {
rate_index = pll_get_rate_index(pll, rate);
if (rate_index < 0)
return rate_index;

vco_param = pll->vco_param[rate_index];
}

ret = pll_set_rate(clk, &vco_param, parent_rate);
return ret;
}