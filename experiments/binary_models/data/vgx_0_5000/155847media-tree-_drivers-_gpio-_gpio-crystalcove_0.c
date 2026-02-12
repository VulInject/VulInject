static void crystalcove_gpio_dbg_show(struct seq_file *s,
struct gpio_chip *chip)
{
struct crystalcove_gpio *cg = gpiochip_get_data(chip);
int gpio, offset;
unsigned int ctlo, ctli, mirqs0, mirqsx, irq;

for (gpio = 0; gpio < CRYSTALCOVE_GPIO_NUM; gpio++) {
regmap_read(cg->regmap, to_reg(gpio, CTRL_OUT), &ctlo);
regmap_read(cg->regmap, to_reg(gpio, CTRL_IN), &ctli);
regmap_read(cg->regmap, gpio < 8 ? MGPIO0IRQS0 : MGPIO1IRQS0,
&mirqs0);
regmap_read(cg->regmap, gpio < 8 ? MGPIO0IRQSX : MGPIO1IRQSX,
&mirqsx);
regmap_read(cg->regmap, gpio < 8 ? GPIO0IRQ : GPIO1IRQ,
&irq);

offset = gpio % 8;
seq_printf(s, " gpio-%-2d %s %s %s %s ctlo=%2x,%s %s %s\n",
gpio, ctlo & CTLO_DIR_OUT ? "out" : "in ",
ctli & 0x1 ? "hi" : "lo",
ctli & CTLI_INTCNT_NE ? "fall" : "    ",
ctli & CTLI_INTCNT_PE ? "rise" : "    ",
ctlo,
mirqs0 & BIT(offset) ? "s0 mask  " : "s0 unmask",
mirqsx & BIT(offset) ? "sx mask  " : "sx unmask",
irq & BIT(offset) ? "pending" : "       ");
}
}