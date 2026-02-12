static irqreturn_t pxa_rtc_irq(int irq, void *dev_id)
{
struct pxa_rtc *pxa_rtc = dev_get_drvdata(dev_id);
u32 rtsr;
unsigned long events = 0;

spin_lock(&pxa_rtc->lock);


rtsr = rtc_readl(pxa_rtc, RTSR);
rtc_writel(pxa_rtc, RTSR, rtsr);


rtsr_clear_bits(pxa_rtc, RTSR_RDALE1 | RTSR_PIALE | RTSR_HZE);


if (rtsr & RTSR_RDAL1)
rtsr &= ~RTSR_RDALE1;


if (rtsr & RTSR_RDAL1)
events |= RTC_AF | RTC_IRQF;
if (rtsr & RTSR_HZ)
events |= RTC_UF | RTC_IRQF;
if (rtsr & RTSR_PIAL)
events |= RTC_PF | RTC_IRQF;

rtc_update_irq(pxa_rtc->rtc, 1, events);


rtc_writel(pxa_rtc, RTSR, rtsr & ~RTSR_TRIG_MASK);

spin_unlock(&pxa_rtc->lock);
return IRQ_HANDLED;
}