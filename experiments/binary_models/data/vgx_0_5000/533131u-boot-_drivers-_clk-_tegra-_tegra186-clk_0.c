static ulong tegra186_clk_set_rate(struct clk *clk, ulong rate)
{
struct mrq_clk_request req;
struct mrq_clk_response resp;
int ret;

debug("%s(clk=%p, rate=%lu) (dev=%p, id=%lu)\n", __func__, clk, rate,
clk->dev, clk->id);

req.cmd_and_id = (CMD_CLK_SET_RATE << 24) | clk->id;
req.clk_set_rate.rate = rate;

ret = misc_call(clk->dev->parent, MRQ_CLK, &req, sizeof(req), &resp,
sizeof(resp));
if (ret < 0)
return ret;

return resp.clk_set_rate.rate;
}