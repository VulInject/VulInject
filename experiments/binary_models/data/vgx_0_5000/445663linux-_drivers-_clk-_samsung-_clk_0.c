void __init samsung_clk_register_fixed_rate(struct samsung_clk_provider *ctx,
const struct samsung_fixed_rate_clock *list,
unsigned int nr_clk)
{
struct clk_hw *clk_hw;
unsigned int idx, ret;

for (idx = 0; idx < nr_clk; idx++, list++) {
clk_hw = clk_hw_register_fixed_rate(ctx->dev, list->name,
list->parent_name, list->flags, list->fixed_rate);
if (IS_ERR(clk_hw)) {
pr_err("%s: failed to register clock %s\n", __func__,
list->name);
continue;
}

samsung_clk_add_lookup(ctx, clk_hw, list->id);


ret = clk_hw_register_clkdev(clk_hw, list->name, NULL);
if (ret)
pr_err("%s: failed to register clock lookup for %s",
__func__, list->name);
}
}