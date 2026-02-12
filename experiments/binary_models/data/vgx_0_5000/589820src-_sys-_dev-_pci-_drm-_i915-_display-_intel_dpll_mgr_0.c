static int bxt_ddi_pll_get_freq(struct drm_i915_private *i915,
const struct intel_shared_dpll *pll,
const struct intel_dpll_hw_state *pll_state)
{
struct dpll clock;

clock.m1 = 2;
clock.m2 = REG_FIELD_GET(PORT_PLL_M2_INT_MASK, pll_state->pll0) << 22;
if (pll_state->pll3 & PORT_PLL_M2_FRAC_ENABLE)
clock.m2 |= REG_FIELD_GET(PORT_PLL_M2_FRAC_MASK, pll_state->pll2);
clock.n = REG_FIELD_GET(PORT_PLL_N_MASK, pll_state->pll1);
clock.p1 = REG_FIELD_GET(PORT_PLL_P1_MASK, pll_state->ebb0);
clock.p2 = REG_FIELD_GET(PORT_PLL_P2_MASK, pll_state->ebb0);

return chv_calc_dpll_params(i915->display.dpll.ref_clks.nssc, &clock);
}