int mpic_set_affinity(struct irq_data *d, const struct cpumask *cpumask,
bool force)
{
struct mpic *mpic = mpic_from_irq_data(d);
unsigned int src = irqd_to_hwirq(d);

if (mpic->flags & MPIC_SINGLE_DEST_CPU) {
int cpuid = irq_choose_cpu(cpumask);

mpic_irq_write(src, MPIC_INFO(IRQ_DESTINATION), 1 << cpuid);
} else {
u32 mask = cpumask_bits(cpumask)[0];

mask &= cpumask_bits(cpu_online_mask)[0];

mpic_irq_write(src, MPIC_INFO(IRQ_DESTINATION),
mpic_physmask(mask));
}

return IRQ_SET_MASK_OK;
}