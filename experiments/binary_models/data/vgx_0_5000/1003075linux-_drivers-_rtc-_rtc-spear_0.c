static irqreturn_t spear_rtc_irq(int irq, void *dev_id)
{
struct spear_rtc_config *config = dev_id;
unsigned long events = 0;
unsigned int irq_data;

spin_lock(&config->lock);
irq_data = readl(config->ioaddr + STATUS_REG);
spin_unlock(&config->lock);

if ((irq_data & RTC_INT_MASK)) {
spear_rtc_clear_interrupt(config);
events = RTC_IRQF | RTC_AF;
rtc_update_irq(config->rtc, 1, events);
return IRQ_HANDLED;
} else
return IRQ_NONE;

}