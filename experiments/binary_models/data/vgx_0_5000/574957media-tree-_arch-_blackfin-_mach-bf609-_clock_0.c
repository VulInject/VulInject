int sys_clk_set_rate(struct clk *clk, unsigned long rate)
{
u32 div = bfin_read32(CGU0_DIV);
div = (div & clk->mask) >> clk->shift;

rate = clk_round_rate(clk, rate);

if (!rate)
return -EINVAL;

div = (clk_get_rate(clk) * div) / rate;

if (wait_for_pll_align())
return -EBUSY;
clk_reg_write_mask(CGU0_DIV, div << clk->shift,
clk->mask);
clk->rate = rate;
return 0;
}