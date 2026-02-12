static void intel_sdvo_get_avi_infoframe(struct intel_sdvo *intel_sdvo,
struct intel_crtc_state *crtc_state)
{
u8 sdvo_data[HDMI_INFOFRAME_SIZE(AVI)];
union hdmi_infoframe *frame = &crtc_state->infoframes.avi;
ssize_t len;
int ret;

if (!crtc_state->has_hdmi_sink)
return;

len = intel_sdvo_read_infoframe(intel_sdvo, SDVO_HBUF_INDEX_AVI_IF,
sdvo_data, sizeof(sdvo_data));
if (len < 0) {
DRM_DEBUG_KMS("failed to read AVI infoframe\n");
return;
} else if (len == 0) {
return;
}

crtc_state->infoframes.enable |=
intel_hdmi_infoframe_enable(HDMI_INFOFRAME_TYPE_AVI);

ret = hdmi_infoframe_unpack(frame, sdvo_data, len);
if (ret) {
DRM_DEBUG_KMS("Failed to unpack AVI infoframe\n");
return;
}

if (frame->any.type != HDMI_INFOFRAME_TYPE_AVI)
DRM_DEBUG_KMS("Found the wrong infoframe type 0x%x (expected 0x%02x)\n",
frame->any.type, HDMI_INFOFRAME_TYPE_AVI);
}