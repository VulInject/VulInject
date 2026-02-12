static ulong tegra186_clk_get_rate(struct clk *clk)
{
struct mrq_clk_request req;
struct mrq_clk_response resp;
int ret;

debug("%s(clk=%p) (dev=%p, id=%lu)\n", __func__, clk, clk->dev,
clk->id);

req.cmd_and_id = (CMD_CLK_GET_RATE << 24) | clk->id;

ret = misc_call(clk->dev->parent, MRQ_CLK, &req, sizeof(req), &resp,
sizeof(resp));
if (ret < 0)
return ret;

return resp.clk_get_rate.rate;
}