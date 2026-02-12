struct mii_dev *pfe_mdio_init(struct pfe_mdio_info *mdio_info)
{
struct mii_dev *bus;
int ret;
u32 mdio_speed;
u32 pclk = 250000000;

bus = mdio_alloc();
if (!bus) {
printf("mdio_alloc failed\n");
return NULL;
}
bus->read = pfe_phy_read;
bus->write = pfe_phy_write;


bus->priv = mdio_info->reg_base;
sprintf(bus->name, mdio_info->name);


mdio_speed = (DIV_ROUND_UP(pclk, 4000000) << EMAC_MII_SPEED_SHIFT);
mdio_speed |= EMAC_HOLDTIME(0x5);
writel(mdio_speed, mdio_info->reg_base + EMAC_MII_CTRL_REG);

ret = mdio_register(bus);
if (ret) {
printf("mdio_register failed\n");
free(bus);
return NULL;
}
return bus;
}