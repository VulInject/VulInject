static int lp_gpio_request(struct gpio_chip *chip, unsigned offset)
{
struct lp_gpio *lg = gpiochip_get_data(chip);
unsigned long reg = lp_gpio_reg(chip, offset, LP_CONFIG1);
unsigned long conf2 = lp_gpio_reg(chip, offset, LP_CONFIG2);
unsigned long acpi_use = lp_gpio_reg(chip, offset, LP_ACPI_OWNED);

pm_runtime_get(&lg->pdev->dev); 


if (!(inl(acpi_use) & BIT(offset % 32))) {
dev_err(&lg->pdev->dev, "gpio %d reserved for ACPI\n", offset);
return -EBUSY;
}

if (!(inl(reg) & USE_SEL_BIT))
return -ENODEV;


outl(inl(conf2) & ~GPINDIS_BIT, conf2);


return 0;
}