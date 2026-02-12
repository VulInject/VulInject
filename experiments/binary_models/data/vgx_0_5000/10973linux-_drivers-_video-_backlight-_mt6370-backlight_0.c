static int mt6370_bl_update_status(struct backlight_device *bl_dev)
{
struct mt6370_priv *priv = bl_get_data(bl_dev);
int brightness = backlight_get_brightness(bl_dev);
unsigned int enable_val;
u8 brightness_val[2];
int ret;

if (brightness) {
brightness_val[0] = (brightness - 1) & priv->dim2_mask;
brightness_val[1] = (brightness - 1) >> priv->dim2_shift;

ret = regmap_raw_write(priv->regmap, MT6370_REG_BL_DIM2,
brightness_val, sizeof(brightness_val));
if (ret)
return ret;
}

gpiod_set_value(priv->enable_gpio, !!brightness);

enable_val = brightness ? MT6370_BL_EN_MASK : 0;
return regmap_update_bits(priv->regmap, MT6370_REG_BL_EN,
MT6370_BL_EN_MASK, enable_val);
}