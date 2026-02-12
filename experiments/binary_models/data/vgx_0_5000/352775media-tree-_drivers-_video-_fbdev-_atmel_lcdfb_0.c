static void init_backlight(struct atmel_lcdfb_info *sinfo)
{
struct backlight_properties props;
struct backlight_device	*bl;

sinfo->bl_power = FB_BLANK_UNBLANK;

if (sinfo->backlight)
return;

memset(&props, 0, sizeof(struct backlight_properties));
props.type = BACKLIGHT_RAW;
props.max_brightness = 0xff;
bl = backlight_device_register("backlight", &sinfo->pdev->dev, sinfo,
&atmel_lcdc_bl_ops, &props);
if (IS_ERR(bl)) {
dev_err(&sinfo->pdev->dev, "error %ld on backlight register\n",
PTR_ERR(bl));
return;
}
sinfo->backlight = bl;

bl->props.power = FB_BLANK_UNBLANK;
bl->props.fb_blank = FB_BLANK_UNBLANK;
bl->props.brightness = atmel_bl_get_brightness(bl);
}