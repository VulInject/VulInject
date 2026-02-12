static irqreturn_t max8925_irq(int irq, void *data)
{
struct max8925_chip *chip = data;
struct max8925_irq_data *irq_data;
struct i2c_client *i2c;
int read_reg = -1, value = 0;
int i;

for (i = 0; i < ARRAY_SIZE(max8925_irqs); i++) {
irq_data = &max8925_irqs[i];

if (irq_data->tsc_irq)
continue;
if (irq_data->flags == FLAGS_RTC)
i2c = chip->rtc;
else if (irq_data->flags == FLAGS_ADC)
i2c = chip->adc;
else
i2c = chip->i2c;
if (read_reg != irq_data->reg) {
read_reg = irq_data->reg;
value = max8925_reg_read(i2c, irq_data->reg);
}
if (value & irq_data->enable)
handle_nested_irq(chip->irq_base + i);
}
return IRQ_HANDLED;
}