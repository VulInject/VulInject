static int __init ingenic_ost_register_clock(struct ingenic_ost *ost,
unsigned int idx, const struct ingenic_ost_clk_info *info,
struct clk_hw_onecell_data *clocks)
{
struct ingenic_ost_clk *ost_clk;
int val, err;

ost_clk = kzalloc(sizeof(*ost_clk), GFP_KERNEL);
if (!ost_clk)
return -ENOMEM;

ost_clk->hw.init = &info->init_data;
ost_clk->idx = idx;
ost_clk->info = info;
ost_clk->ost = ost;


val = readl(ost->base + info->ostccr_reg);
val &= ~(OSTCCR_PRESCALE1_MASK | OSTCCR_PRESCALE2_MASK);
writel(val, ost->base + info->ostccr_reg);

err = clk_hw_register(NULL, &ost_clk->hw);
if (err) {
kfree(ost_clk);
return err;
}

clocks->hws[idx] = &ost_clk->hw;

return 0;
}