static void __init its_fsl_mc_msi_init_one(struct fwnode_handle *handle,
const char *name)
{
struct irq_domain *parent;
struct irq_domain *mc_msi_domain;

parent = irq_find_matching_fwnode(handle, DOMAIN_BUS_NEXUS);
if (!parent || !msi_get_domain_info(parent)) {
pr_err("%s: unable to locate ITS domain\n", name);
return;
}

mc_msi_domain = fsl_mc_msi_create_irq_domain(handle,
&its_fsl_mc_msi_domain_info,
parent);
if (!mc_msi_domain) {
pr_err("%s: unable to create fsl-mc domain\n", name);
return;
}

pr_info("fsl-mc MSI: %s domain created\n", name);
}