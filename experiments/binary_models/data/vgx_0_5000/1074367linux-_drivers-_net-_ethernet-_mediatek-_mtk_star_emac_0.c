static int mt8516_set_interface_mode(struct net_device *ndev)
{
struct mtk_star_priv *priv = netdev_priv(ndev);
struct device *dev = mtk_star_get_dev(priv);
unsigned int intf_val, ret, rmii_rxc;

switch (priv->phy_intf) {
case PHY_INTERFACE_MODE_MII:
intf_val = MTK_PERICFG_BIT_NIC_CFG_CON_MII;
rmii_rxc = 0;
break;
case PHY_INTERFACE_MODE_RMII:
intf_val = MTK_PERICFG_BIT_NIC_CFG_CON_RMII;
rmii_rxc = priv->rmii_rxc ? 0 : MTK_PERICFG_BIT_NIC_CFG_CON_CLK;
break;
default:
dev_err(dev, "This interface not supported\n");
return -EINVAL;
}

ret = regmap_update_bits(priv->pericfg,
MTK_PERICFG_REG_NIC_CFG1_CON,
MTK_PERICFG_BIT_NIC_CFG_CON_CLK,
rmii_rxc);
if (ret)
return ret;

return regmap_update_bits(priv->pericfg,
MTK_PERICFG_REG_NIC_CFG0_CON,
MTK_PERICFG_REG_NIC_CFG_CON_CFG_INTF,
intf_val);
}