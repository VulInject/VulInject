static int armada_37xx_edge_both_irq_swap_pol(struct armada_37xx_pinctrl *info,
u32 pin_idx)
{
u32 reg_idx = pin_idx / GPIO_PER_REG;
u32 bit_num = pin_idx % GPIO_PER_REG;
u32 p, l, ret;
unsigned long flags;

regmap_read(info->regmap, INPUT_VAL + 4*reg_idx, &l);

raw_spin_lock_irqsave(&info->irq_lock, flags);
p = readl(info->base + IRQ_POL + 4 * reg_idx);
if ((p ^ l) & (1 << bit_num)) {

p ^= 1 << bit_num;
writel(p, info->base + IRQ_POL + 4 * reg_idx);
ret = 0;
} else {

ret = -1;
}

raw_spin_unlock_irqrestore(&info->irq_lock, flags);
return ret;
}