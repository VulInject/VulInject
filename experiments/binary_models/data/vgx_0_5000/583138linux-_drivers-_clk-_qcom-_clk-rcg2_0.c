static int clk_rcg2_enable_dfs(const struct clk_rcg_dfs_data *data,
struct regmap *regmap)
{
struct clk_rcg2 *rcg = data->rcg;
struct clk_init_data *init = data->init;
u32 val;
int ret;

ret = regmap_read(regmap, rcg->cmd_rcgr + SE_CMD_DFSR_OFFSET, &val);
if (ret)
return -EINVAL;

if (!(val & SE_CMD_DFS_EN))
return 0;


init->flags |= CLK_GET_RATE_NOCACHE;
init->ops = &clk_rcg2_dfs_ops;

rcg->freq_tbl = NULL;

return 0;
}