static void zynq_gpio_set_value(struct gpio_chip *chip, unsigned int pin,
int state)
{
unsigned int reg_offset, bank_num, bank_pin_num;
struct zynq_gpio *gpio = gpiochip_get_data(chip);

zynq_gpio_get_bank_pin(pin, &bank_num, &bank_pin_num, gpio);

if (bank_pin_num >= ZYNQ_GPIO_MID_PIN_NUM) {

bank_pin_num -= ZYNQ_GPIO_MID_PIN_NUM;
reg_offset = ZYNQ_GPIO_DATA_MSW_OFFSET(bank_num);
} else {
reg_offset = ZYNQ_GPIO_DATA_LSW_OFFSET(bank_num);
}


state = !!state;
state = ~(1 << (bank_pin_num + ZYNQ_GPIO_MID_PIN_NUM)) &
((state << bank_pin_num) | ZYNQ_GPIO_UPPER_MASK);

writel_relaxed(state, gpio->base_addr + reg_offset);
}