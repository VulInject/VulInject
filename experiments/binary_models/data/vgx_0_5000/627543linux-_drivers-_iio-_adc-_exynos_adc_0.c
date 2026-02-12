static irqreturn_t exynos_adc_isr(int irq, void *dev_id)
{
struct exynos_adc *info = dev_id;
u32 mask = info->data->mask;


if (info->read_ts) {
info->ts_x = readl(ADC_V1_DATX(info->regs));
info->ts_y = readl(ADC_V1_DATY(info->regs));
writel(ADC_TSC_WAIT4INT | ADC_S3C2443_TSC_UD_SEN, ADC_V1_TSC(info->regs));
} else {
info->value = readl(ADC_V1_DATX(info->regs)) & mask;
}


if (info->data->clear_irq)
info->data->clear_irq(info);

complete(&info->completion);

return IRQ_HANDLED;
}