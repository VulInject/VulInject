void dc_link_blank_dp_stream(struct dc_link *link, bool hw_init)
{
unsigned int j;
struct dc  *dc = link->ctx->dc;
enum amd_signal_type signal = link->connector_signal;

if ((signal == SIGNAL_TYPE_EDP) ||
(signal == SIGNAL_TYPE_DISPLAY_PORT)) {
if (link->ep_type == DISPLAY_ENDPOINT_PHY &&
link->link_enc->funcs->get_dig_frontend &&
link->link_enc->funcs->is_dig_enabled(link->link_enc)) {
unsigned int fe = link->link_enc->funcs->get_dig_frontend(link->link_enc);

if (fe != ENGINE_ID_UNKNOWN)
for (j = 0; j < dc->res_pool->stream_enc_count; j++) {
if (fe == dc->res_pool->stream_enc[j]->id) {
dc->res_pool->stream_enc[j]->funcs->dp_blank(link,
dc->res_pool->stream_enc[j]);
break;
}
}
}

if ((!link->wa_flags.dp_keep_receiver_powered) || hw_init)
dp_receiver_power_ctrl(link, false);
}
}