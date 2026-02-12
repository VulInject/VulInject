static struct mii_timestamper *ines_ptp_probe_channel(struct device *device,
unsigned int index)
{
struct device_node *node = device->of_node;
struct ines_port *port;

if (index > INES_N_PORTS - 1) {
dev_err(device, "bad port index %u\n", index);
return ERR_PTR(-EINVAL);
}
port = ines_find_port(node, index);
if (!port) {
dev_err(device, "missing port index %u\n", index);
return ERR_PTR(-ENODEV);
}
port->mii_ts.rxtstamp = ines_rxtstamp;
port->mii_ts.txtstamp = ines_txtstamp;
port->mii_ts.hwtstamp = ines_hwtstamp;
port->mii_ts.link_state = ines_link_state;
port->mii_ts.ts_info = ines_ts_info;

return &port->mii_ts;
}