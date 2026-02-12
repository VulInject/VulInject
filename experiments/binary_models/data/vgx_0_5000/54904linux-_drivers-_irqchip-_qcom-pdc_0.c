static int qcom_pdc_init(struct device_node *node, struct device_node *parent)
{
struct irq_domain *parent_domain, *pdc_domain;
int ret;

pdc_base = of_iomap(node, 0);
if (!pdc_base) {
pr_err("%pOF: unable to map PDC registers\n", node);
return -ENXIO;
}

parent_domain = irq_find_host(parent);
if (!parent_domain) {
pr_err("%pOF: unable to find PDC's parent domain\n", node);
ret = -ENXIO;
goto fail;
}

ret = pdc_setup_pin_mapping(node);
if (ret) {
pr_err("%pOF: failed to init PDC pin-hwirq mapping\n", node);
goto fail;
}

pdc_domain = irq_domain_create_hierarchy(parent_domain,
IRQ_DOMAIN_FLAG_QCOM_PDC_WAKEUP,
PDC_MAX_GPIO_IRQS,
of_fwnode_handle(node),
&qcom_pdc_ops, NULL);
if (!pdc_domain) {
pr_err("%pOF: PDC domain add failed\n", node);
ret = -ENOMEM;
goto fail;
}

irq_domain_update_bus_token(pdc_domain, DOMAIN_BUS_WAKEUP);

return 0;

fail:
kfree(pdc_region);
iounmap(pdc_base);
return ret;
}