static int thunder_pem_platform_init(struct pci_config_window *cfg)
{
struct device *dev = cfg->parent;
struct platform_device *pdev = to_platform_device(dev);
struct resource *res_pem;

if (!dev->of_node)
return -EINVAL;


res_pem = platform_get_resource(pdev, IORESOURCE_MEM, 1);
if (!res_pem) {
dev_err(dev, "missing \"reg[1]\"property\n");
return -EINVAL;
}

return thunder_pem_init(dev, cfg, res_pem);
}