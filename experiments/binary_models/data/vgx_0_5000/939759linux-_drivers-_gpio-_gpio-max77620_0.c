static int max77620_gpio_get(struct gpio_chip *gc, unsigned int offset)
{
struct max77620_gpio *mgpio = gpiochip_get_data(gc);
unsigned int val;
int ret;

ret = regmap_read(mgpio->rmap, GPIO_REG_ADDR(offset), &val);
if (ret < 0) {
dev_err(mgpio->dev, "CNFG_GPIOx read failed: %d\n", ret);
return ret;
}

if  (val & MAX77620_CNFG_GPIO_DIR_MASK)
return !!(val & MAX77620_CNFG_GPIO_INPUT_VAL_MASK);
else
return !!(val & MAX77620_CNFG_GPIO_OUTPUT_VAL_MASK);
}