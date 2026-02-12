static int ingenic_ost_global_timer_set_rate(struct clk_hw *hw, unsigned long req_rate,
unsigned long parent_rate)
{
struct ingenic_ost_clk *ost_clk = to_ost_clk(hw);
const struct ingenic_ost_clk_info *info = ost_clk->info;
u8 prescale = ingenic_ost_get_prescale(parent_rate, req_rate);
int val;

val = readl(ost_clk->ost->base + info->ostccr_reg);
val &= ~OSTCCR_PRESCALE2_MASK;
val |= FIELD_PREP(OSTCCR_PRESCALE2_MASK, prescale);
writel(val, ost_clk->ost->base + info->ostccr_reg);

return 0;
}

static const struct clk_ops ingenic_ost_percpu_timer_ops = {
.recalc_rate	= ingenic_ost_percpu_timer_recalc_rate,
.round_rate		= ingenic_ost_round_rate,
.set_rate		= ingenic_ost_percpu_timer_set_rate,
};