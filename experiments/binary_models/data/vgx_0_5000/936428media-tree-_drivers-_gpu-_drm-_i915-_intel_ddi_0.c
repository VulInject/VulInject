static bool intel_ddi_compute_config(struct intel_encoder *encoder,
struct intel_crtc_state *pipe_config,
struct drm_connector_state *conn_state)
{
struct drm_i915_private *dev_priv = to_i915(encoder->base.dev);
int type = encoder->type;
int port = intel_ddi_get_encoder_port(encoder);
int ret;

WARN(type == INTEL_OUTPUT_UNKNOWN, "compute_config() on unknown output!\n");

if (port == PORT_A)
pipe_config->cpu_transcoder = TRANSCODER_EDP;

if (type == INTEL_OUTPUT_HDMI)
ret = intel_hdmi_compute_config(encoder, pipe_config, conn_state);
else
ret = intel_dp_compute_config(encoder, pipe_config, conn_state);

if (IS_GEN9_LP(dev_priv) && ret)
pipe_config->lane_lat_optim_mask =
bxt_ddi_phy_calc_lane_lat_optim_mask(encoder,
pipe_config->lane_count);

return ret;

}

static const struct drm_encoder_funcs intel_ddi_funcs = {
.reset = intel_dp_encoder_reset,
.destroy = intel_dp_encoder_destroy,
};