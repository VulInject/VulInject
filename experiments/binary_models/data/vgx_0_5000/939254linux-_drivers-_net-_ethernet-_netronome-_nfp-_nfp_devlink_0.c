static int
nfp_devlink_port_split(struct devlink *devlink, struct devlink_port *port,
unsigned int count, struct netlink_ext_ack *extack)
{
struct nfp_pf *pf = devlink_priv(devlink);
struct nfp_eth_table_port eth_port;
unsigned int lanes;
int ret;

rtnl_lock();
ret = nfp_devlink_fill_eth_port_from_id(pf, port, &eth_port);
rtnl_unlock();
if (ret)
return ret;

if (eth_port.port_lanes % count)
return -EINVAL;


lanes = eth_port.port_lanes / count;
if (eth_port.lanes == 10 && count == 2)
lanes = 8 / count;

return nfp_devlink_set_lanes(pf, eth_port.index, lanes);
}