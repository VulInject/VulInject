static int hellcreek_port_enable(struct dsa_switch *ds, int port,
struct phy_device *phy)
{
struct hellcreek *hellcreek = ds->priv;
struct hellcreek_port *hellcreek_port;
u16 val;

hellcreek_port = &hellcreek->ports[port];

dev_dbg(hellcreek->dev, "Enable port %d\n", port);

mutex_lock(&hellcreek->reg_lock);

hellcreek_select_port(hellcreek, port);
val = hellcreek_port->ptcfg;
val |= HR_PTCFG_ADMIN_EN;
hellcreek_write(hellcreek, val, HR_PTCFG);
hellcreek_port->ptcfg = val;

mutex_unlock(&hellcreek->reg_lock);

return 0;
}