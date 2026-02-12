static unsigned long xgene_clk_pll_recalc_rate(struct clk_hw *hw,
unsigned long parent_rate)
{
struct xgene_clk_pll *pllclk = to_xgene_clk_pll(hw);
unsigned long fref;
unsigned long fvco;
u32 pll;
u32 nref;
u32 nout;
u32 nfb;

pll = xgene_clk_read(pllclk->reg + pllclk->pll_offset);

if (pllclk->version <= 1) {
if (pllclk->type == PLL_TYPE_PCP) {

nout = 2;
fvco = parent_rate * (N_DIV_RD(pll) + 4);
} else {

nref = CLKR_RD(pll) + 1;
nout = CLKOD_RD(pll) + 1;
nfb = CLKF_RD(pll);
fref = parent_rate / nref;
fvco = fref * nfb;
}
} else {

nout = SC_OUTDIV2(pll) ? 2 : 3;
fvco = parent_rate * SC_N_DIV_RD(pll);
}
pr_debug("%s pll recalc rate %ld parent %ld version %d\n",
clk_hw_get_name(hw), fvco / nout, parent_rate,
pllclk->version);

return fvco / nout;
}