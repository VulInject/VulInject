static int clk_regmap_div_determine_rate(struct clk_hw *hw,
struct clk_rate_request *req)
{
struct clk_regmap *clk = to_clk_regmap(hw);
struct clk_regmap_div_data *div = clk_get_regmap_div_data(clk);
unsigned int val;
int ret;


if (div->flags & CLK_DIVIDER_READ_ONLY) {
ret = regmap_read(clk->map, div->offset, &val);
if (ret)
return ret;

val >>= div->shift;
val &= clk_div_mask(div->width);

return divider_ro_determine_rate(hw, req, div->table,
div->width, div->flags, val);
}

return divider_determine_rate(hw, req, div->table, div->width,
div->flags);
}