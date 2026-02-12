static int irq_sim_domain_map(struct irq_domain *domain,
unsigned int virq, irq_hw_number_t hw)
{
struct irq_sim_work_ctx *work_ctx = domain->host_data;
struct irq_sim_irq_ctx *irq_ctx;

irq_ctx = kzalloc(sizeof(*irq_ctx), GFP_KERNEL);
if (!irq_ctx)
return -ENOMEM;

irq_set_chip(virq, &irq_sim_irqchip);
irq_set_chip_data(virq, irq_ctx);
irq_set_handler(virq, handle_simple_irq);
irq_modify_status(virq, IRQ_NOREQUEST | IRQ_NOAUTOEN, IRQ_NOPROBE);
irq_ctx->work_ctx = work_ctx;

return 0;
}