static int ktd253_backlight_update_status(struct backlight_device *bl)
{
struct ktd253_backlight *ktd253 = bl_get_data(bl);
int brightness = backlight_get_brightness(bl);
u16 target_ratio;
u16 current_ratio = ktd253->ratio;
int ret;

dev_dbg(ktd253->dev, "new brightness/ratio: %d/32\n", brightness);

target_ratio = brightness;

if (target_ratio == current_ratio)

return 0;

if (target_ratio == 0) {
gpiod_set_value_cansleep(ktd253->gpiod, 0);

msleep(KTD253_T_OFF_MS);
ktd253->ratio = 0;
return 0;
}

if (current_ratio == 0) {
ktd253_backlight_set_max_ratio(ktd253);
current_ratio = KTD253_MAX_RATIO;
}

while (current_ratio != target_ratio) {

ret = ktd253_backlight_stepdown(ktd253);
if (ret == -EAGAIN) {

gpiod_set_value_cansleep(ktd253->gpiod, 0);
msleep(KTD253_T_OFF_MS);
ktd253_backlight_set_max_ratio(ktd253);
current_ratio = KTD253_MAX_RATIO;
} else if (current_ratio == KTD253_MIN_RATIO) {

current_ratio = KTD253_MAX_RATIO;
} else {
current_ratio--;
}
}
ktd253->ratio = current_ratio;

dev_dbg(ktd253->dev, "new ratio set to %d/32\n", target_ratio);

return 0;
}