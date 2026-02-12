static int its_init_domain(struct fwnode_handle *handle, struct its_node *its)
{
struct irq_domain *inner_domain;
struct msi_domain_info *info;

info = kzalloc(sizeof(*info), GFP_KERNEL);
if (!info)
return -ENOMEM;

inner_domain = irq_domain_create_tree(handle, &its_domain_ops, its);
if (!inner_domain) {
kfree(info);
return -ENOMEM;
}

inner_domain->parent = its_parent;
inner_domain->bus_token = DOMAIN_BUS_NEXUS;
inner_domain->flags |= IRQ_DOMAIN_FLAG_MSI_REMAP;
info->ops = &its_msi_domain_ops;
info->data = its;
inner_domain->host_data = info;

return 0;
}