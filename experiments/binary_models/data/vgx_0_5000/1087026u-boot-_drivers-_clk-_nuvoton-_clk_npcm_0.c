static int npcm_clk_set_parent(struct clk *clk, struct clk *parent)
{
struct npcm_clk_priv *priv = dev_get_priv(clk->dev);
struct npcm_clk_select *selector;
int clksel;
u32 val;

debug("%s: id %lu, parent %lu\n", __func__, clk->id, parent->id);
selector = npcm_clk_selector_get(priv->clk_data, clk->id);
if (!selector)
return -EINVAL;

clksel = clkid_to_clksel(selector, parent->id);
if (clksel < 0)
return -EINVAL;

val = readl(priv->base + selector->reg);
val &= ~selector->mask;
val |= clksel << (ffs(selector->mask) - 1);
writel(val, priv->base + selector->reg);

return 0;
}