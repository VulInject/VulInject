static void i9xx_set_backlight(const struct drm_connector_state *conn_state, u32 level)
{
struct intel_connector *connector = to_intel_connector(conn_state->connector);
struct drm_i915_private *dev_priv = to_i915(connector->base.dev);
struct intel_panel *panel = &connector->panel;
u32 tmp, mask;

drm_WARN_ON(&dev_priv->drm, panel->backlight.pwm_level_max == 0);

if (panel->backlight.combination_mode) {
u8 lbpc;

lbpc = level * 0xfe / panel->backlight.pwm_level_max + 1;
level /= lbpc;
pci_write_config_byte(dev_priv->drm.pdev, LBPC, lbpc);
}

if (DISPLAY_VER(dev_priv) == 4) {
mask = BACKLIGHT_DUTY_CYCLE_MASK;
} else {
level <<= 1;
mask = BACKLIGHT_DUTY_CYCLE_MASK_PNV;
}

tmp = intel_de_read(dev_priv, BLC_PWM_CTL) & ~mask;
intel_de_write(dev_priv, BLC_PWM_CTL, tmp | level);
}