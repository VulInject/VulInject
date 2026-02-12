struct clk *clk_register_gpt(const char *name, const char *parent_name, unsigned
long flags, void __iomem *reg, struct gpt_rate_tbl *rtbl, u8
rtbl_cnt, spinlock_t *lock)
{
struct clk_init_data init;
struct clk_gpt *gpt;
struct clk *clk;

if (!name || !parent_name || !reg || !rtbl || !rtbl_cnt) {
pr_err("Invalid arguments passed");
return ERR_PTR(-EINVAL);
}

gpt = kzalloc(sizeof(*gpt), GFP_KERNEL);
if (!gpt) {
pr_err("could not allocate gpt clk\n");
return ERR_PTR(-ENOMEM);
}


gpt->reg = reg;
gpt->rtbl = rtbl;
gpt->rtbl_cnt = rtbl_cnt;
gpt->lock = lock;
gpt->hw.init = &init;

init.name = name;
init.ops = &clk_gpt_ops;
init.flags = flags;
init.parent_names = &parent_name;
init.num_parents = 1;

clk = clk_register(NULL, &gpt->hw);
if (!IS_ERR_OR_NULL(clk))
return clk;

pr_err("clk register failed\n");
kfree(gpt);

return NULL;
}