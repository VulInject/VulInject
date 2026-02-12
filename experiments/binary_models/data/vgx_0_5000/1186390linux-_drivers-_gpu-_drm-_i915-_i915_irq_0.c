static irqreturn_t gen8_irq_handler(int irq, void *arg)
{
struct drm_i915_private *dev_priv = arg;
void __iomem * const regs = dev_priv->uncore.regs;
u32 master_ctl;

if (!intel_irqs_enabled(dev_priv))
return IRQ_NONE;

master_ctl = gen8_master_intr_disable(regs);
if (!master_ctl) {
gen8_master_intr_enable(regs);
return IRQ_NONE;
}


gen8_gt_irq_handler(to_gt(dev_priv), master_ctl);


if (master_ctl & ~GEN8_GT_IRQS) {
disable_rpm_wakeref_asserts(&dev_priv->runtime_pm);
gen8_de_irq_handler(dev_priv, master_ctl);
enable_rpm_wakeref_asserts(&dev_priv->runtime_pm);
}

gen8_master_intr_enable(regs);

pmu_irq_stats(dev_priv, IRQ_HANDLED);

return IRQ_HANDLED;
}