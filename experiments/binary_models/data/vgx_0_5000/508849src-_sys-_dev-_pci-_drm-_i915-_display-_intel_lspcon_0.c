void lspcon_write_infoframe(struct intel_encoder *encoder,
const struct intel_crtc_state *crtc_state,
unsigned int type,
const void *frame, ssize_t len)
{
bool ret = true;
struct intel_dp *intel_dp = enc_to_intel_dp(encoder);
struct drm_i915_private *i915 = dp_to_i915(intel_dp);
struct intel_lspcon *lspcon = enc_to_intel_lspcon(encoder);

switch (type) {
case HDMI_INFOFRAME_TYPE_AVI:
if (lspcon->vendor == LSPCON_VENDOR_MCA)
ret = _lspcon_write_avi_infoframe_mca(&intel_dp->aux,
frame, len);
else
ret = _lspcon_write_avi_infoframe_parade(&intel_dp->aux,
frame, len);
break;
case HDMI_PACKET_TYPE_GAMUT_METADATA:
drm_dbg_kms(&i915->drm, "Update HDR metadata for lspcon\n");

hsw_write_infoframe(encoder, crtc_state, type, frame, len);
break;
default:
return;
}

if (!ret) {
drm_err(&i915->drm, "Failed to write infoframes\n");
return;
}
}