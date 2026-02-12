static int brcmstb_reset_probe(struct platform_device *pdev)
{
struct device *kdev = &pdev->dev;
struct brcmstb_reset *priv;
struct resource *res;

priv = devm_kzalloc(kdev, sizeof(*priv), GFP_KERNEL);
if (!priv)
return -ENOMEM;

res = platform_get_resource(pdev, IORESOURCE_MEM, 0);
priv->base = devm_ioremap_resource(kdev, res);
if (IS_ERR(priv->base))
return PTR_ERR(priv->base);

dev_set_drvdata(kdev, priv);

priv->rcdev.owner = THIS_MODULE;
priv->rcdev.nr_resets = DIV_ROUND_DOWN_ULL(resource_size(res),
SW_INIT_BANK_SIZE) * 32;
priv->rcdev.ops = &brcmstb_reset_ops;
priv->rcdev.of_node = kdev->of_node;


return devm_reset_controller_register(kdev, &priv->rcdev);
}