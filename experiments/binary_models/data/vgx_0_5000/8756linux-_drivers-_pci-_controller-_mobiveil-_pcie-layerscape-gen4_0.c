static int ls_g4_pcie_interrupt_init(struct mobiveil_pcie *mv_pci)
{
struct ls_g4_pcie *pcie = to_ls_g4_pcie(mv_pci);
struct platform_device *pdev = mv_pci->pdev;
struct device *dev = &pdev->dev;
int ret;

pcie->irq = platform_get_irq_byname(pdev, "intr");
if (pcie->irq < 0)
return pcie->irq;

ret = devm_request_irq(dev, pcie->irq, ls_g4_pcie_isr,
IRQF_SHARED, pdev->name, pcie);
if (ret) {
dev_err(dev, "Can't register PCIe IRQ, errno = %d\n", ret);
return  ret;
}

return 0;
}