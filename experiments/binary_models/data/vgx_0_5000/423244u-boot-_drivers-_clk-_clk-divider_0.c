static struct clk *_register_divider(struct device *dev, const char *name,
const char *parent_name, unsigned long flags,
void __iomem *reg, u8 shift, u8 width,
u8 clk_divider_flags, const struct clk_div_table *table)
{
struct clk_divider *div;
struct clk *clk;
int ret;

if (clk_divider_flags & CLK_DIVIDER_HIWORD_MASK) {
if (width + shift > 16) {
dev_warn(dev, "divider value exceeds LOWORD field\n");
return ERR_PTR(-EINVAL);
}
}


div = kzalloc(sizeof(*div), GFP_KERNEL);
if (!div)
return ERR_PTR(-ENOMEM);


div->reg = reg;
div->shift = shift;
div->width = width;
div->flags = clk_divider_flags;
div->table = table;
div->io_divider_val = *(u32 *)reg;


clk = &div->clk;
clk->flags = flags;

ret = clk_register(clk, UBOOT_DM_CLK_CCF_DIVIDER, name, parent_name);
if (ret) {
kfree(div);
return ERR_PTR(ret);
}

return clk;
}