static int adis16480_config_irq_pin(struct adis16480 *st)
{
struct device *dev = &st->adis.spi->dev;
struct fwnode_handle *fwnode = dev_fwnode(dev);
struct irq_data *desc;
enum adis16480_int_pin pin;
unsigned int irq_type;
uint16_t val;
int i, irq = 0;

desc = irq_get_irq_data(st->adis.spi->irq);
if (!desc) {
dev_err(dev, "Could not find IRQ %d\n", irq);
return -EINVAL;
}


val = ADIS16480_DRDY_EN(0);


pin = ADIS16480_PIN_DIO1;
for (i = 0; i < ARRAY_SIZE(adis16480_int_pin_names); i++) {
irq = fwnode_irq_get_byname(fwnode, adis16480_int_pin_names[i]);
if (irq > 0) {
pin = i;
break;
}
}

val |= ADIS16480_DRDY_SEL(pin);


irq_type = irqd_get_trigger_type(desc);
if (irq_type == IRQ_TYPE_EDGE_RISING) { 
val |= ADIS16480_DRDY_POL(1);
} else if (irq_type == IRQ_TYPE_EDGE_FALLING) {
val |= ADIS16480_DRDY_POL(0);
} else {
dev_err(dev, "Invalid interrupt type 0x%x specified\n", irq_type);
return -EINVAL;
}

return adis_write_reg_16(&st->adis, ADIS16480_REG_FNCTIO_CTRL, val);
}