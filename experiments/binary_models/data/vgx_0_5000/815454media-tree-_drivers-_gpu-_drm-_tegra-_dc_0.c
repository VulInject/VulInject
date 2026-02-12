static void tegra_dc_commit_state(struct tegra_dc *dc,
struct tegra_dc_state *state)
{
u32 value;
int err;

err = clk_set_parent(dc->clk, state->clk);
if (err < 0)
dev_err(dc->dev, "failed to set parent clock: %d\n", err);


if (state->pclk > 0) {
err = clk_set_rate(state->clk, state->pclk);
if (err < 0)
dev_err(dc->dev,
"failed to set clock rate to %lu Hz\n",
state->pclk);
}

DRM_DEBUG_KMS("rate: %lu, div: %u\n", clk_get_rate(dc->clk),
state->div);
DRM_DEBUG_KMS("pclk: %lu\n", state->pclk);

value = SHIFT_CLK_DIVIDER(state->div) | PIXEL_CLK_DIVIDER_PCD1;
tegra_dc_writel(dc, value, DC_DISP_DISP_CLOCK_CONTROL);
}