static void readynas_mvphy_set_reg(bool restart)
{
int rc = 0, saved_page;
u16 data = 0;

if (restart)
data = MII_88E1318S_PHY_LED_POL_LED2;

saved_page = phy_select_page(phydev, MII_MARVELL_LED_PAGE);
if (saved_page < 0)
goto err;


__phy_modify(phydev, MII_PHY_LED_POL_CTRL,
MII_88E1318S_PHY_LED_POL_LED2, data);

if (!data) {

__phy_write(phydev, MII_MARVELL_PHY_PAGE, MII_MARVELL_WOL_PAGE);
__phy_set_bits(phydev, MII_88E1318S_PHY_WOL_CTRL,
MII_88E1318S_PHY_WOL_CTRL_CLEAR_WOL_STATUS);
}
err:
rc = phy_restore_page(phydev, saved_page, rc);
if (rc < 0)
dev_err(&phydev->mdio.dev, "Write register failed, %d\n", rc);
}

static const struct power_off_cfg linkstation_power_off_cfg = {
.mdio_node_name = "mdio",
.phy_set_reg = linkstation_mvphy_reg_intn,
};