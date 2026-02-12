void intel_dsi_vbt_gpio_cleanup(struct intel_dsi *intel_dsi)
{
STUB();
struct drm_device *dev = intel_dsi->base.base.dev;
struct drm_i915_private *dev_priv = to_i915(dev);
struct intel_connector *connector = intel_dsi->attached_connector;
struct mipi_config *mipi_config = connector->panel.vbt.dsi.config;

if (intel_dsi->gpio_panel) {
gpiod_put(intel_dsi->gpio_panel);
intel_dsi->gpio_panel = NULL;
}

if (intel_dsi->gpio_backlight) {
gpiod_put(intel_dsi->gpio_backlight);
intel_dsi->gpio_backlight = NULL;
}

if ((IS_VALLEYVIEW(dev_priv) || IS_CHERRYVIEW(dev_priv)) &&
mipi_config->pwm_blc == PPS_BLC_PMIC)
gpiod_remove_lookup_table(&pmic_panel_gpio_table);

if (IS_VALLEYVIEW(dev_priv) && mipi_config->pwm_blc == PPS_BLC_SOC) {
pinctrl_unregister_mappings(soc_pwm_pinctrl_map);
gpiod_remove_lookup_table(&soc_panel_gpio_table);
}
}