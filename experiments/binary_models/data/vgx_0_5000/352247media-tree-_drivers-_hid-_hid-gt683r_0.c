static void gt683r_brightness_set(struct led_classdev *led_cdev,
enum led_brightness brightness)
{
int i;
struct device *dev = led_cdev->dev->parent;
struct hid_device *hdev = to_hid_device(dev);
struct gt683r_led *led = hid_get_drvdata(hdev);

for (i = 0; i < GT683R_LED_COUNT; i++) {
if (led_cdev == &led->led_devs[i])
break;
}

if (i < GT683R_LED_COUNT) {
led->brightnesses[i] = brightness;
schedule_work(&led->work);
}
}