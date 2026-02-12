static int dove_set_clock(struct clk_hw *hw, unsigned long rate,
unsigned long parent_rate)
{
struct dove_clk *dc = to_dove_clk(hw);
u32 mask, load, div;
int divider;

divider = dove_calc_divider(dc, rate, parent_rate, true);
if (divider < 0)
return divider;

pr_debug("%s(): %s divider=%u parent=%lu rate=%lu\n",
__func__, dc->name, divider, parent_rate, rate);

div = (u32)divider << dc->div_bit_start;
mask = ~(~0 << dc->div_bit_size) << dc->div_bit_start;
load = BIT(dc->div_bit_load);

spin_lock(dc->lock);
dove_load_divider(dc->base, div, mask, load);
spin_unlock(dc->lock);

return 0;
}

static const struct clk_ops dove_divider_ops = {
.set_rate	= dove_set_clock,
.round_rate	= dove_round_rate,
.recalc_rate	= dove_recalc_rate,
};