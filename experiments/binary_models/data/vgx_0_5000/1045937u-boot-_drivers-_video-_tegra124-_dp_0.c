static int tegra_dc_dp_sink_out_of_sync(struct tegra_dp_priv *dp, u32 delay_ms)
{
u8 dpcd_data;
int out_of_sync;
int ret;

debug("%s: delay=%d\n", __func__, delay_ms);
mdelay(delay_ms);
ret = tegra_dc_dp_dpcd_read(dp, DP_SINK_STATUS, &dpcd_data);
if (ret)
return ret;

out_of_sync = !(dpcd_data & DP_SINK_STATUS_PORT0_IN_SYNC);
if (out_of_sync)
debug("SINK receive port 0 out of sync, data=%x\n", dpcd_data);
else
debug("SINK is in synchronization\n");

return out_of_sync;
}