static int tsi148_irq_init(struct vme_bridge *tsi148_bridge)
{
int result;
unsigned int tmp;
struct pci_dev *pdev;
struct tsi148_driver *bridge;

pdev = to_pci_dev(tsi148_bridge->parent);

bridge = tsi148_bridge->driver_priv;

result = request_irq(pdev->irq,
tsi148_irqhandler,
IRQF_SHARED,
driver_name, tsi148_bridge);
if (result) {
dev_err(tsi148_bridge->parent, "Can't get assigned pci irq vector %02X\n",
pdev->irq);
return result;
}


tmp = TSI148_LCSR_INTEO_DMA1EO | TSI148_LCSR_INTEO_DMA0EO |
TSI148_LCSR_INTEO_MB3EO | TSI148_LCSR_INTEO_MB2EO |
TSI148_LCSR_INTEO_MB1EO | TSI148_LCSR_INTEO_MB0EO |
TSI148_LCSR_INTEO_PERREO | TSI148_LCSR_INTEO_VERREO |
TSI148_LCSR_INTEO_IACKEO;







iowrite32be(tmp, bridge->base + TSI148_LCSR_INTEO);
iowrite32be(tmp, bridge->base + TSI148_LCSR_INTEN);

return 0;
}