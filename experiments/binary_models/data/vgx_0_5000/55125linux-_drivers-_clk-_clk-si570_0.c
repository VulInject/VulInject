static unsigned long si570_recalc_rate(struct clk_hw *hw,
unsigned long parent_rate)
{
int err;
u64 rfreq, rate;
unsigned int n1, hs_div;
struct clk_si570 *data = to_clk_si570(hw);

err = si570_get_divs(data, &rfreq, &n1, &hs_div);
if (err) {
dev_err(&data->i2c_client->dev, "unable to recalc rate\n");
return data->frequency;
}

rfreq = div_u64(rfreq, hs_div * n1);
rate = (data->fxtal * rfreq) >> 28;

return rate;
}