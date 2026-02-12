static void gsta_irq_disable(struct irq_data *data)
{
struct irq_chip_generic *gc = irq_data_get_irq_chip_data(data);
struct gsta_gpio *chip = gc->private;
int nr = data->irq - chip->irq_base;
struct gsta_regs __iomem *regs = __regs(chip, nr);
u32 bit = __bit(nr);
u32 val;
unsigned long flags;

spin_lock_irqsave(&chip->lock, flags);
if (chip->irq_type[nr] & IRQ_TYPE_EDGE_RISING) {
val = readl(&regs->rimsc) & ~bit;
writel(val, &regs->rimsc);
}
if (chip->irq_type[nr] & IRQ_TYPE_EDGE_FALLING) {
val = readl(&regs->fimsc) & ~bit;
writel(val, &regs->fimsc);
}
spin_unlock_irqrestore(&chip->lock, flags);
return;
}