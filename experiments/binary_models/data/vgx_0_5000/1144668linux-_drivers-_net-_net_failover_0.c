static int net_failover_vlan_rx_add_vid(struct net_device *dev, __be16 proto,
u16 vid)
{
struct net_failover_info *nfo_info = netdev_priv(dev);
struct net_device *primary_dev, *standby_dev;
int ret = 0;

primary_dev = rcu_dereference(nfo_info->primary_dev);
if (primary_dev) {
ret = vlan_vid_add(primary_dev, proto, vid);
if (ret)
return ret;
}

standby_dev = rcu_dereference(nfo_info->standby_dev);
if (standby_dev) {
ret = vlan_vid_add(standby_dev, proto, vid);
if (ret)
if (primary_dev)
vlan_vid_del(primary_dev, proto, vid);
}

return ret;
}