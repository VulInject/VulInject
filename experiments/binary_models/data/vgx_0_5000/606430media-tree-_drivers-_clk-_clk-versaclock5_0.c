static int vc5_mux_set_parent(struct clk_hw *hw, u8 index)
{
struct vc5_driver_data *vc5 =
container_of(hw, struct vc5_driver_data, clk_mux);
const u8 mask = VC5_PRIM_SRC_SHDN_EN_XTAL | VC5_PRIM_SRC_SHDN_EN_CLKIN;
u8 src;

if ((index > 1) || !vc5->clk_mux_ins)
return -EINVAL;

if (vc5->clk_mux_ins == (VC5_MUX_IN_CLKIN | VC5_MUX_IN_XIN)) {
if (index == 0)
src = VC5_PRIM_SRC_SHDN_EN_XTAL;
if (index == 1)
src = VC5_PRIM_SRC_SHDN_EN_CLKIN;
} else {
if (index != 0)
return -EINVAL;

if (vc5->clk_mux_ins == VC5_MUX_IN_XIN)
src = VC5_PRIM_SRC_SHDN_EN_XTAL;
if (vc5->clk_mux_ins == VC5_MUX_IN_CLKIN)
src = VC5_PRIM_SRC_SHDN_EN_CLKIN;
}

return regmap_update_bits(vc5->regmap, VC5_PRIM_SRC_SHDN, mask, src);
}