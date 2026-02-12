static void dra7xx_pcie_handle_msi_irq(struct dw_pcie_rp *pp)
{
struct dw_pcie *pci = to_dw_pcie_from_pp(pp);
int ret, i, count, num_ctrls;

num_ctrls = pp->num_vectors / MAX_MSI_IRQS_PER_CTRL;


count = 0;
do {
ret = 0;

for (i = 0; i < num_ctrls; i++)
ret |= dra7xx_pcie_handle_msi(pp, i);
count++;
} while (ret && count <= 1000);

if (count > 1000)
dev_warn_ratelimited(pci->dev,
"Too many MSI IRQs to handle\n");
}