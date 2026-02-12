void dcn20_set_dmdata_attributes(struct pipe_ctx *pipe_ctx)
{
struct dc_dmdata_attributes attr = { 0 };
struct hubp *hubp = pipe_ctx->plane_res.hubp;

attr.dmdata_mode = DMDATA_HW_MODE;
attr.dmdata_size =
dc_is_hdmi_signal(pipe_ctx->stream->signal) ? 32 : 36;
attr.address.quad_part =
pipe_ctx->stream->dmdata_address.quad_part;
attr.dmdata_dl_delta = 0;
attr.dmdata_qos_mode = 0;
attr.dmdata_qos_level = 0;
attr.dmdata_repeat = 1; 
attr.dmdata_updated = 1;
attr.dmdata_sw_data = NULL;

hubp->funcs->dmdata_set_attributes(hubp, &attr);
}