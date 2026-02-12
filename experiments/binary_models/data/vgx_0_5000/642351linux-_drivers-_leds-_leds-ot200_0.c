static int ot200_led_probe(struct platform_device *pdev)
{
int i;
int ret;

for (i = 0; i < ARRAY_SIZE(leds); i++) {

leds[i].cdev.name = leds[i].name;
leds[i].cdev.brightness_set = ot200_led_brightness_set;

ret = devm_led_classdev_register(&pdev->dev, &leds[i].cdev);
if (ret < 0)
return ret;
}

leds_front = 0;		
leds_back = BIT(1);	
outb(leds_front, 0x49);
outb(leds_back, 0x5a);

return 0;
}

static struct platform_driver ot200_led_driver = {
.probe		= ot200_led_probe,
.driver		= {
.name	= "leds-ot200",
},
};