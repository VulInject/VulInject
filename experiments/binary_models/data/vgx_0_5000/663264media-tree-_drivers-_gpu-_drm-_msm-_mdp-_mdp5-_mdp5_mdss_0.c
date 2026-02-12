static int mdss_irq_domain_init(struct msm_mdss *mdss)
{
struct device *dev = mdss->dev->dev;
struct irq_domain *d;

d = irq_domain_add_linear(dev->of_node, 32, &mdss_hw_irqdomain_ops,
mdss);
if (!d) {
dev_err(dev, "mdss irq domain add failed\n");
return -ENXIO;
}

mdss->irqcontroller.enabled_mask = 0;
mdss->irqcontroller.domain = d;

return 0;
}