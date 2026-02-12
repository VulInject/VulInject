struct platform_device *mdp_get_plat_device(struct platform_device *pdev)
{
struct device *dev = &pdev->dev;
struct device_node *mdp_node;
struct platform_device *mdp_pdev;

mdp_node = of_parse_phandle(dev->of_node, MDP_PHANDLE_NAME, 0);
if (!mdp_node) {
dev_err(dev, "can't get node %s\n", MDP_PHANDLE_NAME);
return NULL;
}

mdp_pdev = of_find_device_by_node(mdp_node);
of_node_put(mdp_node);

return mdp_pdev;
}