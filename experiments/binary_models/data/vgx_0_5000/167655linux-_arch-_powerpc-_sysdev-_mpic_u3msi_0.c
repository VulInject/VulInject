int __init mpic_u3msi_init(struct mpic *mpic)
{
int rc;
struct pci_controller *phb;

rc = mpic_msi_init_allocator(mpic);
if (rc) {
pr_debug("u3msi: Error allocating bitmap!\n");
return rc;
}

pr_debug("u3msi: Registering MPIC U3 MSI callbacks.\n");

BUG_ON(msi_mpic);
msi_mpic = mpic;

list_for_each_entry(phb, &hose_list, list_node) {
WARN_ON(phb->controller_ops.setup_msi_irqs);
phb->controller_ops.setup_msi_irqs = u3msi_setup_msi_irqs;
phb->controller_ops.teardown_msi_irqs = u3msi_teardown_msi_irqs;
}

return 0;
}