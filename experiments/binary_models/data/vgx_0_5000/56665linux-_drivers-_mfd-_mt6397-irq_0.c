static void mt6397_irq_handle_reg(struct mt6397_chip *mt6397, int reg,
int irqbase)
{
unsigned int status = 0;
int i, irq, ret;

ret = regmap_read(mt6397->regmap, reg, &status);
if (ret) {
dev_err(mt6397->dev, "Failed to read irq status: %d\n", ret);
return;
}

for (i = 0; i < 16; i++) {
if (status & BIT(i)) {
irq = irq_find_mapping(mt6397->irq_domain, irqbase + i);
if (irq)
handle_nested_irq(irq);
}
}

regmap_write(mt6397->regmap, reg, status);
}