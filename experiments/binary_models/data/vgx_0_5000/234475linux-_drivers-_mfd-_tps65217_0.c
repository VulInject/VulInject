static irqreturn_t tps65217_irq_thread(int irq, void *data)
{
struct tps65217 *tps = data;
unsigned int status;
bool handled = false;
int i;
int ret;

ret = tps65217_reg_read(tps, TPS65217_REG_INT, &status);
if (ret < 0) {
dev_err(tps->dev, "Failed to read IRQ status: %d\n",
ret);
return IRQ_NONE;
}

for (i = 0; i < TPS65217_NUM_IRQ; i++) {
if (status & BIT(i)) {
handle_nested_irq(irq_find_mapping(tps->irq_domain, i));
handled = true;
}
}

if (handled)
return IRQ_HANDLED;

return IRQ_NONE;
}