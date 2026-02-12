static int ingenic_rng_probe(struct platform_device *pdev)
{
struct ingenic_rng *priv;
int ret;

priv = devm_kzalloc(&pdev->dev, sizeof(*priv), GFP_KERNEL);
if (!priv)
return -ENOMEM;

priv->base = devm_platform_ioremap_resource(pdev, 0);
if (IS_ERR(priv->base)) {
pr_err("%s: Failed to map RNG registers\n", __func__);
return PTR_ERR(priv->base);
}

priv->version = (enum ingenic_rng_version)of_device_get_match_data(&pdev->dev);

priv->rng.name = pdev->name;
priv->rng.init = ingenic_rng_init;
priv->rng.cleanup = ingenic_rng_cleanup;
priv->rng.read = ingenic_rng_read;

ret = hwrng_register(&priv->rng);
if (ret) {
dev_err(&pdev->dev, "Failed to register hwrng\n");
return ret;
}

platform_set_drvdata(pdev, priv);

dev_info(&pdev->dev, "Ingenic RNG driver registered\n");
return 0;
}