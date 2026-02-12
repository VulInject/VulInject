static irqreturn_t max14577_muic_irq_handler(int irq, void *data)
{
struct max14577_muic_info *info = data;
int i, irq_type = -1;
bool irq_parsed;


for (i = 0; i < info->muic_irqs_num; i++)
if (irq == info->muic_irqs[i].virq)
irq_type = info->muic_irqs[i].irq;

switch (info->max14577->dev_type) {
case MAXIM_DEVICE_TYPE_MAX77836:
irq_parsed = max77836_parse_irq(info, irq_type);
break;
case MAXIM_DEVICE_TYPE_MAX14577:
default:
irq_parsed = max14577_parse_irq(info, irq_type);
break;
}

if (!irq_parsed) {
dev_err(info->dev, "muic interrupt: irq %d occurred, skipped\n",
irq_type);
return IRQ_HANDLED;
}
schedule_work(&info->irq_work);

return IRQ_HANDLED;
}