static void
mpc52xx_gpt_irq_setup(struct mpc52xx_gpt_priv *gpt, struct device_node *node)
{
int cascade_virq;
unsigned long flags;
u32 mode;

cascade_virq = irq_of_parse_and_map(node, 0);
if (!cascade_virq)
return;

gpt->irqhost = irq_domain_add_linear(node, 1, &mpc52xx_gpt_irq_ops, gpt);
if (!gpt->irqhost) {
dev_err(gpt->dev, "irq_domain_add_linear() failed\n");
return;
}

irq_set_handler_data(cascade_virq, gpt);
irq_set_chained_handler(cascade_virq, mpc52xx_gpt_irq_cascade);


raw_spin_lock_irqsave(&gpt->lock, flags);
mode = in_be32(&gpt->regs->mode);
if ((mode & MPC52xx_GPT_MODE_MS_MASK) == 0)
out_be32(&gpt->regs->mode, mode | MPC52xx_GPT_MODE_MS_IC);
raw_spin_unlock_irqrestore(&gpt->lock, flags);

dev_dbg(gpt->dev, "%s() complete. virq=%i\n", __func__, cascade_virq);
}