static enum drm_mode_status
sdi_bridge_mode_valid(struct drm_bridge *bridge,
const struct drm_display_info *info,
const struct drm_display_mode *mode)
{
struct sdi_device *sdi = drm_bridge_to_sdi(bridge);
unsigned long pixelclock = mode->clock * 1000;
struct dispc_clock_info dispc_cinfo;
unsigned long fck;
int ret;

if (pixelclock == 0)
return MODE_NOCLOCK;

ret = sdi_calc_clock_div(sdi, pixelclock, &fck, &dispc_cinfo);
if (ret < 0)
return MODE_CLOCK_RANGE;

return MODE_OK;
}