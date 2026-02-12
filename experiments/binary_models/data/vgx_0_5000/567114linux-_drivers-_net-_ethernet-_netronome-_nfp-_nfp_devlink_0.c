static int
nfp_devlink_port_unsplit(struct devlink *devlink, struct devlink_port *port,
struct netlink_ext_ack *extack)
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

if (!eth_port.is_split)
return -EINVAL;


lanes = eth_port.port_lanes;
if (eth_port.port_lanes == 8)
lanes = 10;

return nfp_devlink_set_lanes(pf, eth_port.index, lanes);
}