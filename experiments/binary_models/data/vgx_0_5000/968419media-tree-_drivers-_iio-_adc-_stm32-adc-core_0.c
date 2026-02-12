static int stm32_adc_irq_probe(struct platform_device *pdev,
struct stm32_adc_priv *priv)
{
struct device_node *np = pdev->dev.of_node;

priv->irq = platform_get_irq(pdev, 0);
if (priv->irq < 0) {
dev_err(&pdev->dev, "failed to get irq\n");
return priv->irq;
}

priv->domain = irq_domain_add_simple(np, STM32_ADC_MAX_ADCS, 0,
&stm32_adc_domain_ops,
priv);
if (!priv->domain) {
dev_err(&pdev->dev, "Failed to add irq domain\n");
return -ENOMEM;
}

irq_set_chained_handler(priv->irq, stm32_adc_irq_handler);
irq_set_handler_data(priv->irq, priv);

return 0;
}