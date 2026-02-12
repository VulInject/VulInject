static int hdmi_avi_infoframe_config(struct sti_hdmi *hdmi)
{
struct drm_display_mode *mode = &hdmi->mode;
struct hdmi_avi_infoframe infoframe;
u8 buffer[HDMI_INFOFRAME_SIZE(AVI)];
int ret;

DRM_DEBUG_DRIVER("\n");

ret = drm_hdmi_avi_infoframe_from_display_mode(&infoframe,
hdmi->drm_connector, mode);
if (ret < 0) {
DRM_ERROR("failed to setup AVI infoframe: %d\n", ret);
return ret;
}


infoframe.colorspace = hdmi->colorspace;
infoframe.quantization_range = HDMI_QUANTIZATION_RANGE_DEFAULT;
infoframe.colorimetry = HDMI_COLORIMETRY_NONE;

ret = hdmi_avi_infoframe_pack(&infoframe, buffer, sizeof(buffer));
if (ret < 0) {
DRM_ERROR("failed to pack AVI infoframe: %d\n", ret);
return ret;
}

hdmi_infoframe_write_infopack(hdmi, buffer, ret);

return 0;
}