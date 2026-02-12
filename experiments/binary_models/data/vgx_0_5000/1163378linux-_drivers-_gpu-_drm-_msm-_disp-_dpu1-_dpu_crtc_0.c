static int dpu_crtc_get_crc(struct drm_crtc *crtc)
{
struct dpu_crtc_state *crtc_state = to_dpu_crtc_state(crtc->state);


if (crtc_state->crc_frame_skip_count < 2) {
crtc_state->crc_frame_skip_count++;
return 0;
}

if (crtc_state->crc_source == DPU_CRTC_CRC_SOURCE_LAYER_MIXER)
return dpu_crtc_get_lm_crc(crtc, crtc_state);
else if (crtc_state->crc_source == DPU_CRTC_CRC_SOURCE_ENCODER)
return dpu_crtc_get_encoder_crc(crtc);

return -EINVAL;
}