int intel_crtc_verify_crc_source(struct drm_crtc *crtc, const char *source_name,
size_t *values_cnt)
{
struct drm_i915_private *dev_priv = to_i915(crtc->dev);
enum intel_pipe_crc_source source;

if (display_crc_ctl_parse_source(source_name, &source) < 0) {
drm_dbg(&dev_priv->drm, "unknown source %s\n", source_name);
return -EINVAL;
}

if (source == INTEL_PIPE_CRC_SOURCE_AUTO ||
intel_is_valid_crc_source(dev_priv, source) == 0) {
*values_cnt = 5;
return 0;
}

return -EINVAL;
}