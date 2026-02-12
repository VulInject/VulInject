static void at803x_link_change_notify(struct phy_device *phydev)
{
struct at803x_priv *priv = phydev->priv;


if (phydev->state == PHY_NOLINK) {
if (priv->gpiod_reset && !priv->phy_reset) {
struct at803x_context context;

at803x_context_save(phydev, &context);

gpiod_set_value(priv->gpiod_reset, 1);
msleep(1);
gpiod_set_value(priv->gpiod_reset, 0);
msleep(1);

at803x_context_restore(phydev, &context);

phydev_dbg(phydev, "%s(): phy was reset\n",
__func__);
priv->phy_reset = true;
}
} else {
priv->phy_reset = false;
}
}