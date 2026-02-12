static int simple_panel_set_backlight(struct udevice *dev, int percent)
{
struct simple_panel_priv *priv = dev_get_priv(dev);
int ret;

debug("%s: start, backlight = '%s'\n", __func__, priv->backlight->name);
dm_gpio_set_value(&priv->enable, 1);
ret = backlight_set_brightness(priv->backlight, percent);
debug("%s: done, ret = %d\n", __func__, ret);
if (ret)
return ret;

return 0;
}