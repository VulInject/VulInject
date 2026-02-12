static irqreturn_t grgpio_irq_handler(int irq, void *dev)
{
struct grgpio_priv *priv = dev;
int ngpio = priv->gc.ngpio;
unsigned long flags;
int i;
int match = 0;

raw_spin_lock_irqsave(&priv->gc.bgpio_lock, flags);


for (i = 0; i < ngpio; i++) {
struct grgpio_lirq *lirq = &priv->lirqs[i];

if (priv->imask & BIT(i) && lirq->index >= 0 &&
priv->uirqs[lirq->index].uirq == irq) {
generic_handle_irq(lirq->irq);
match = 1;
}
}

raw_spin_unlock_irqrestore(&priv->gc.bgpio_lock, flags);

if (!match)
dev_warn(priv->dev, "No gpio line matched irq %d\n", irq);

return IRQ_HANDLED;
}