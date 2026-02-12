static void lochnagar_clk_unprepare(struct clk_hw *hw)
{
struct lochnagar_clk *lclk = lochnagar_hw_to_lclk(hw);
struct lochnagar_clk_priv *priv = lclk->priv;
struct regmap *regmap = priv->regmap;
int ret;

ret = regmap_update_bits(regmap, lclk->cfg_reg, lclk->ena_mask, 0);
if (ret < 0)
dev_dbg(priv->dev, "Failed to unprepare %s: %d\n",
lclk->name, ret);
}