void __init tegra_add_of_provider(struct device_node *np)
{
int i;

for (i = 0; i < clk_num; i++) {
if (IS_ERR(clks[i])) {
pr_err
("Tegra clk %d: register failed with %ld\n",
i, PTR_ERR(clks[i]));
}
if (!clks[i])
clks[i] = ERR_PTR(-EINVAL);
}

clk_data.clks = clks;
clk_data.clk_num = clk_num;
of_clk_add_provider(np, of_clk_src_onecell_get, &clk_data);

rst_ctlr.of_node = np;
rst_ctlr.nr_resets = periph_banks * 32 + num_special_reset;
reset_controller_register(&rst_ctlr);
}