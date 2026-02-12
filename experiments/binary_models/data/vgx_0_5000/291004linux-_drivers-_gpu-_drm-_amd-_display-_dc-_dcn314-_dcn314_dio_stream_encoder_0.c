static void enc314_stream_encoder_dvi_set_stream_attribute(
struct stream_encoder *enc,
struct dc_crtc_timing *crtc_timing,
bool is_dual_link)
{
struct dcn10_stream_encoder *enc1 = DCN10STRENC_FROM_STRENC(enc);

if (!enc->ctx->dc->debug.avoid_vbios_exec_table) {
struct bp_encoder_control cntl = {0};

cntl.action = ENCODER_CONTROL_SETUP;
cntl.engine_id = enc1->base.id;
cntl.signal = is_dual_link ?
SIGNAL_TYPE_DVI_DUAL_LINK : SIGNAL_TYPE_DVI_SINGLE_LINK;
cntl.enable_dp_audio = false;
cntl.pixel_clock = crtc_timing->pix_clk_100hz / 10;
cntl.lanes_number = (is_dual_link) ? LANE_COUNT_EIGHT : LANE_COUNT_FOUR;

if (enc1->base.bp->funcs->encoder_control(
enc1->base.bp, &cntl) != BP_RESULT_OK)
return;

} else {


REG_UPDATE(DIG_CLOCK_PATTERN, DIG_CLOCK_PATTERN, 0x1F);





enc314_enable_fifo(enc);
}

ASSERT(crtc_timing->pixel_encoding == PIXEL_ENCODING_RGB);
ASSERT(crtc_timing->display_color_depth == COLOR_DEPTH_888);
enc1_stream_encoder_set_stream_attribute_helper(enc1, crtc_timing);
}