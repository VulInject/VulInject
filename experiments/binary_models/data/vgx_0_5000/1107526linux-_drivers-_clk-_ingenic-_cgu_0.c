static u8 ingenic_clk_get_parent(struct clk_hw *hw)
{
struct ingenic_clk *ingenic_clk = to_ingenic_clk(hw);
const struct ingenic_cgu_clk_info *clk_info = to_clk_info(ingenic_clk);
struct ingenic_cgu *cgu = ingenic_clk->cgu;
u32 reg;
u8 i, hw_idx, idx = 0;

if (clk_info->type & CGU_CLK_MUX) {
reg = readl(cgu->base + clk_info->mux.reg);
hw_idx = (reg >> clk_info->mux.shift) &
GENMASK(clk_info->mux.bits - 1, 0);


for (i = 0; i < hw_idx; i++) {
if (clk_info->parents[i] != -1)
idx++;
}
}

return idx;
}