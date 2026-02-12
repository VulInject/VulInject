static irqreturn_t rcar_pci_err_irq(int irq, void *pw)
{
struct rcar_pci_priv *priv = pw;
struct device *dev = priv->dev;
u32 status = ioread32(priv->reg + RCAR_PCI_INT_STATUS_REG);

if (status & RCAR_PCI_INT_ALLERRORS) {
dev_err(dev, "error irq: status %08x\n", status);


iowrite32(status & RCAR_PCI_INT_ALLERRORS,
priv->reg + RCAR_PCI_INT_STATUS_REG);
return IRQ_HANDLED;
}

return IRQ_NONE;
}