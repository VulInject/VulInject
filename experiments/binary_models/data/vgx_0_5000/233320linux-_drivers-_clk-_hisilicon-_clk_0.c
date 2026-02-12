}
EXPORT_SYMBOL_GPL(hisi_clk_init);

int hisi_clk_register_fixed_rate(const struct hisi_fixed_rate_clock *clks,
int nums, struct hisi_clock_data *data)
{
struct clk *clk;
int i;

for (i = 0; i < nums; i++) {
clk = clk_register_fixed_rate(NULL, clks[i].name,
clks[i].parent_name,
clks[i].flags,
clks[i].fixed_rate);
if (IS_ERR(clk)) {
pr_err("%s: failed to register clock %s\n",
__func__, clks[i].name);
goto err;
}
data->clk_data.clks[clks[i].id] = clk;
}

return 0;

err:
while (i--)
clk_unregister_fixed_rate(data->clk_data.clks[clks[i].id]);

return PTR_ERR(clk);
}