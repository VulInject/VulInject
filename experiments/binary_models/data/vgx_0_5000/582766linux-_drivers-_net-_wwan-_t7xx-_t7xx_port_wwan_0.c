static void t7xx_port_wwan_md_state_notify(struct t7xx_port *port, unsigned int state)
{
const struct t7xx_port_conf *port_conf = port->port_conf;

if (state != MD_STATE_READY)
return;

if (!port->wwan.wwan_port) {
port->wwan.wwan_port = wwan_create_port(port->dev, port_conf->port_type,
&wwan_ops, port);
if (IS_ERR(port->wwan.wwan_port))
dev_err(port->dev, "Unable to create WWWAN port %s", port_conf->name);
}
}