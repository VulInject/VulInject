static int h265_metadata_update_vps(AVBSFContext *bsf,
H265RawVPS *vps)
{
H265MetadataContext *ctx = bsf->priv_data;

if (ctx->tick_rate.num && ctx->tick_rate.den) {
int num, den;

av_reduce(&num, &den, ctx->tick_rate.num, ctx->tick_rate.den,
UINT32_MAX > INT_MAX ? UINT32_MAX : INT_MAX);

vps->vps_time_scale        = num;
vps->vps_num_units_in_tick = den;

vps->vps_timing_info_present_flag = 1;

if (ctx->num_ticks_poc_diff_one > 0) {
vps->vps_num_ticks_poc_diff_one_minus1 =
ctx->num_ticks_poc_diff_one - 1;
vps->vps_poc_proportional_to_timing_flag = 1;
} else if (ctx->num_ticks_poc_diff_one == 0) {
vps->vps_poc_proportional_to_timing_flag = 0;
}
}

return 0;
}