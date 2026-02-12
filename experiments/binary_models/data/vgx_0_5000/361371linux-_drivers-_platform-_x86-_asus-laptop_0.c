static int asus_backlight_init(struct asus_laptop *asus)
{
struct backlight_device *bd;
struct backlight_properties props;

if (acpi_check_handle(asus->handle, METHOD_BRIGHTNESS_GET, NULL) ||
acpi_check_handle(asus->handle, METHOD_BRIGHTNESS_SET, NULL))
return 0;

memset(&props, 0, sizeof(struct backlight_properties));
props.max_brightness = 15;
props.type = BACKLIGHT_PLATFORM;

bd = backlight_device_register(ASUS_LAPTOP_FILE,
&asus->platform_device->dev, asus,
&asusbl_ops, &props);
if (IS_ERR(bd)) {
pr_err("Could not register asus backlight device\n");
asus->backlight_device = NULL;
return PTR_ERR(bd);
}

asus->backlight_device = bd;
bd->props.brightness = asus_read_brightness(bd);
bd->props.power = FB_BLANK_UNBLANK;
backlight_update_status(bd);
return 0;
}