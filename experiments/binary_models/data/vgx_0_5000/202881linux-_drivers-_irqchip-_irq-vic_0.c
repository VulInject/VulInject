static void suspend_one_vic(struct vic_device *vic)
{
void __iomem *base = vic->base;

printk(KERN_DEBUG "%s: suspending vic at %p\n", __func__, base);

vic->int_select = readl(base + VIC_INT_SELECT);
vic->int_enable = readl(base + VIC_INT_ENABLE);
vic->soft_int = readl(base + VIC_INT_SOFT);
vic->protect = readl(base + VIC_PROTECT);



writel(vic->resume_irqs, base + VIC_INT_ENABLE);
writel(~vic->resume_irqs, base + VIC_INT_ENABLE_CLEAR);
}