static irqreturn_t imx7d_adc_isr(int irq, void *dev_id)
{
struct imx7d_adc *info = dev_id;
int status;

status = readl(info->regs + IMX7D_REG_ADC_INT_STATUS);
if (status & IMX7D_REG_ADC_INT_STATUS_CHANNEL_INT_STATUS) {
info->value = imx7d_adc_read_data(info);
complete(&info->completion);


status &= ~IMX7D_REG_ADC_INT_STATUS_CHANNEL_INT_STATUS;
writel(status, info->regs + IMX7D_REG_ADC_INT_STATUS);
}


if (status & IMX7D_REG_ADC_INT_STATUS_CHANNEL_CONV_TIME_OUT) {
dev_err(info->dev,
"ADC got conversion time out interrupt: 0x%08x\n",
status);
status &= ~IMX7D_REG_ADC_INT_STATUS_CHANNEL_CONV_TIME_OUT;
writel(status, info->regs + IMX7D_REG_ADC_INT_STATUS);
}

return IRQ_HANDLED;
}