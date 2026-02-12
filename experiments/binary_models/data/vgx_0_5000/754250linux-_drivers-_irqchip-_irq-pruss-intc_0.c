static int
pruss_intc_irq_domain_xlate(struct irq_domain *d, struct device_node *node,
const u32 *intspec, unsigned int intsize,
unsigned long *out_hwirq, unsigned int *out_type)
{
struct pruss_intc *intc = d->host_data;
struct device *dev = intc->dev;
int ret, sys_event, channel, host;

if (intsize < 3)
return -EINVAL;

sys_event = intspec[0];
if (sys_event < 0 || sys_event >= intc->soc_config->num_system_events) {
dev_err(dev, "%d is not valid event number\n", sys_event);
return -EINVAL;
}

channel = intspec[1];
if (channel < 0 || channel >= intc->soc_config->num_host_events) {
dev_err(dev, "%d is not valid channel number", channel);
return -EINVAL;
}

host = intspec[2];
if (host < 0 || host >= intc->soc_config->num_host_events) {
dev_err(dev, "%d is not valid host irq number\n", host);
return -EINVAL;
}


ret = pruss_intc_validate_mapping(intc, sys_event, channel, host);
if (ret)
return ret;

*out_hwirq = sys_event;
*out_type = IRQ_TYPE_LEVEL_HIGH;

return 0;
}