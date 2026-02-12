static int rpi_exp_gpio_get(struct gpio_chip *gc, unsigned int off)
{
struct rpi_exp_gpio *gpio;
struct gpio_get_set_state get;
int ret;

gpio = gpiochip_get_data(gc);

get.gpio = off + RPI_EXP_GPIO_BASE;	
get.state = 0;		

ret = rpi_firmware_property(gpio->fw, RPI_FIRMWARE_GET_GPIO_STATE,
&get, sizeof(get));
if (ret || get.gpio != 0) {
dev_err(gc->parent,
"Failed to get GPIO %u state (%d %x)\n", off, ret,
get.gpio);
return ret ? ret : -EIO;
}
return !!get.state;
}