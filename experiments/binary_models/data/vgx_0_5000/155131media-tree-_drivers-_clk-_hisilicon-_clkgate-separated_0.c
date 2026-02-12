struct clk *hisi_register_clkgate_sep(struct device *dev, const char *name,
const char *parent_name,
unsigned long flags,
void __iomem *reg, u8 bit_idx,
u8 clk_gate_flags, spinlock_t *lock)
{
struct clkgate_separated *sclk;
struct clk *clk;
struct clk_init_data init;

sclk = kzalloc(sizeof(*sclk), GFP_KERNEL);
if (!sclk) {
pr_err("%s: fail to allocate separated gated clk\n", __func__);
return ERR_PTR(-ENOMEM);
}

init.name = name;
init.ops = &clkgate_separated_ops;
init.flags = flags | CLK_IS_BASIC;
init.parent_names = (parent_name ? &parent_name : NULL);
init.num_parents = (parent_name ? 1 : 0);

sclk->enable = reg + CLKGATE_SEPERATED_ENABLE;
sclk->bit_idx = bit_idx;
sclk->flags = clk_gate_flags;
sclk->hw.init = &init;
sclk->lock = lock;

clk = clk_register(dev, &sclk->hw);
if (IS_ERR(clk))
kfree(sclk);
return clk;
}