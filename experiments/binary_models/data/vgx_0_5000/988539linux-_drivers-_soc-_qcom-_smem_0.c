static int qcom_smem_resolve_mem(struct qcom_smem *smem, const char *name,
struct smem_region *region)
{
struct device *dev = smem->dev;
struct device_node *np;
struct resource r;
int ret;

np = of_parse_phandle(dev->of_node, name, 0);
if (!np) {
dev_err(dev, "No %s specified\n", name);
return -EINVAL;
}

ret = of_address_to_resource(np, 0, &r);
of_node_put(np);
if (ret)
return ret;

region->aux_base = r.start;
region->size = resource_size(&r);

return 0;
}