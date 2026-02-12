static int brcm_allocate_domains(struct brcm_msi *msi)
{
struct fwnode_handle *fwnode = of_node_to_fwnode(msi->np);
struct device *dev = msi->dev;

msi->inner_domain = irq_domain_add_linear(NULL, msi->nr, &msi_domain_ops, msi);
if (!msi->inner_domain) {
dev_err(dev, "failed to create IRQ domain\n");
return -ENOMEM;
}

msi->msi_domain = pci_msi_create_irq_domain(fwnode,
&brcm_msi_domain_info,
msi->inner_domain);
if (!msi->msi_domain) {
dev_err(dev, "failed to create MSI domain\n");
irq_domain_remove(msi->inner_domain);
return -ENOMEM;
}

return 0;
}