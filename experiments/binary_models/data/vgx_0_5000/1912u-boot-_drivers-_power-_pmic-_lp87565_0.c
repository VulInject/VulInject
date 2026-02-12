static int lp87565_bind(struct udevice *dev)
{
ofnode regulators_node;
int children;

regulators_node = dev_read_subnode(dev, "regulators");
if (!ofnode_valid(regulators_node)) {
debug("%s: %s regulators subnode not found!\n", __func__,
dev->name);
return -ENXIO;
}

debug("%s: '%s' - found regulators subnode\n", __func__, dev->name);

children = pmic_bind_children(dev, regulators_node, pmic_children_info);
if (!children)
printf("%s: %s - no child found\n", __func__, dev->name);


return 0;
}

static struct dm_pmic_ops lp87565_ops = {
.read = lp87565_read,
.write = lp87565_write,
};