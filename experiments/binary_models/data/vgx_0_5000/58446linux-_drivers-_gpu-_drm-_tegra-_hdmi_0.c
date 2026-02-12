static int tegra_hdmi_show_regs(struct seq_file *s, void *data)
{
struct drm_info_node *node = s->private;
struct tegra_hdmi *hdmi = node->info_ent->data;
struct drm_crtc *crtc = hdmi->output.encoder.crtc;
struct drm_device *drm = node->minor->dev;
unsigned int i;
int err = 0;

drm_modeset_lock_all(drm);

if (!crtc || !crtc->state->active) {
err = -EBUSY;
goto unlock;
}

for (i = 0; i < ARRAY_SIZE(tegra_hdmi_regs); i++) {
unsigned int offset = tegra_hdmi_regs[i].offset;

seq_printf(s, "%-56s %#05x %08x\n", tegra_hdmi_regs[i].name,
offset, tegra_hdmi_readl(hdmi, offset));
}

unlock:
drm_modeset_unlock_all(drm);
return err;
}