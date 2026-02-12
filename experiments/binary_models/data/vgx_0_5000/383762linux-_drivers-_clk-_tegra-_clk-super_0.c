struct clk *tegra_clk_register_super_mux(const char *name,
const char **parent_names, u8 num_parents,
unsigned long flags, void __iomem *reg, u8 clk_super_flags,
u8 width, u8 pllx_index, u8 div2_index, spinlock_t *lock)
{
struct tegra_clk_super_mux *super;
struct clk *clk;
struct clk_init_data init;

super = kzalloc(sizeof(*super), GFP_KERNEL);
if (!super)
return ERR_PTR(-ENOMEM);

init.name = name;
init.ops = &tegra_clk_super_mux_ops;
init.flags = flags;
init.parent_names = parent_names;
init.num_parents = num_parents;

super->reg = reg;
super->pllx_index = pllx_index;
super->div2_index = div2_index;
super->lock = lock;
super->width = width;
super->flags = clk_super_flags;


super->hw.init = &init;

clk = tegra_clk_dev_register(&super->hw);
if (IS_ERR(clk))
kfree(super);

return clk;
}