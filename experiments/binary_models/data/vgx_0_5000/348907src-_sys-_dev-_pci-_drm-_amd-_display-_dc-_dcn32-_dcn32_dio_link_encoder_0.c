static void dcn32_link_encoder_get_max_link_cap(struct link_encoder *enc,
struct dc_link_settings *link_settings)
{
struct dcn10_link_encoder *enc10 = TO_DCN10_LINK_ENC(enc);
uint32_t is_in_usb_c_dp4_mode = 0;

dcn10_link_encoder_get_max_link_cap(enc, link_settings);


if (enc->funcs->is_in_alt_mode && enc->funcs->is_in_alt_mode(enc)) {
REG_GET(RDPCSPIPE_PHY_CNTL6, RDPCS_PHY_DPALT_DP4, &is_in_usb_c_dp4_mode);
if (!is_in_usb_c_dp4_mode)
link_settings->lane_count = MIN(LANE_COUNT_TWO, link_settings->lane_count);
}

}