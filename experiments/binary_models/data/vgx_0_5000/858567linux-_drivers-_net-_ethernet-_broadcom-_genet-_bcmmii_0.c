static struct device_node *bcmgenet_mii_of_find_mdio(struct bcmgenet_priv *priv)
{
struct device_node *dn = priv->pdev->dev.of_node;
struct device *kdev = &priv->pdev->dev;
char *compat;

compat = kasprintf(GFP_KERNEL, "brcm,genet-mdio-v%d", priv->version);
if (!compat)
return NULL;

priv->mdio_dn = of_get_compatible_child(dn, compat);
kfree(compat);
if (!priv->mdio_dn) {
dev_err(kdev, "unable to find MDIO bus node\n");
return NULL;
}

return priv->mdio_dn;
}