static void snet_free_irqs(struct snet *snet)
{
struct psnet *psnet = snet->psnet;
struct pci_dev *pdev;
u32 i;


if (PSNET_FLAG_ON(psnet, SNET_CFG_FLAG_IRQ_PF))
pdev = snet->pdev->physfn;
else
pdev = snet->pdev;


if (snet->cfg_irq != -1) {
devm_free_irq(&pdev->dev, snet->cfg_irq, snet);
snet->cfg_irq = -1;
}

for (i = 0; i < snet->cfg->vq_num; i++) {
if (snet->vqs[i] && snet->vqs[i]->irq != -1) {
devm_free_irq(&pdev->dev, snet->vqs[i]->irq, snet->vqs[i]);
snet->vqs[i]->irq = -1;
}
}


}