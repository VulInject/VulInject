void drm_helper_mode_fill_fb_struct(struct drm_device *dev,
struct drm_framebuffer *fb,
const struct drm_mode_fb_cmd2 *mode_cmd)
{
int i;

fb->dev = dev;
fb->format = drm_get_format_info(dev, mode_cmd);
fb->width = mode_cmd->width;
fb->height = mode_cmd->height;
for (i = 0; i < 4; i++) {
fb->pitches[i] = mode_cmd->pitches[i];
fb->offsets[i] = mode_cmd->offsets[i];
}
fb->modifier = mode_cmd->modifier[0];
fb->flags = mode_cmd->flags;
}