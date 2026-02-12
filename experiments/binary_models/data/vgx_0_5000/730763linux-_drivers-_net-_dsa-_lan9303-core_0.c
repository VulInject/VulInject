static int lan9303_register_switch(struct lan9303 *chip)
{
int base;

chip->ds = devm_kzalloc(chip->dev, sizeof(*chip->ds), GFP_KERNEL);
if (!chip->ds)
return -ENOMEM;

chip->ds->dev = chip->dev;
chip->ds->num_ports = LAN9303_NUM_PORTS;
chip->ds->priv = chip;
chip->ds->ops = &lan9303_switch_ops;
base = chip->phy_addr_base;
chip->ds->phys_mii_mask = GENMASK(LAN9303_NUM_PORTS - 1 + base, base);

return dsa_register_switch(chip->ds);
}