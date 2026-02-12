static irqreturn_t ethoc_interrupt(int irq, void *dev_id)
{
struct net_device *dev = dev_id;
struct ethoc *priv = netdev_priv(dev);
u32 pending;
u32 mask;


mask = ethoc_read(priv, INT_MASK);
pending = ethoc_read(priv, INT_SOURCE);
pending &= mask;

if (unlikely(pending == 0))
return IRQ_NONE;

ethoc_ack_irq(priv, pending);


if (pending & INT_MASK_BUSY) {
dev_dbg(&dev->dev, "packet dropped\n");
dev->stats.rx_dropped++;
}


if (pending & (INT_MASK_TX | INT_MASK_RX)) {
ethoc_disable_irq(priv, INT_MASK_TX | INT_MASK_RX);
napi_schedule(&priv->napi);
}

return IRQ_HANDLED;
}