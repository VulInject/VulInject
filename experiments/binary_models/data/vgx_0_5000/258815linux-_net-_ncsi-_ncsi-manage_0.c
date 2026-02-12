int ncsi_vlan_rx_kill_vid(struct net_device *dev, __be16 proto, u16 vid)
{
struct vlan_vid *vlan, *tmp;
struct ncsi_dev_priv *ndp;
struct ncsi_dev *nd;
bool found = false;

if (vid == 0)
return 0;

nd = ncsi_find_dev(dev);
if (!nd) {
netdev_warn(dev, "NCSI: no net_device?\n");
return 0;
}

ndp = TO_NCSI_DEV_PRIV(nd);


list_for_each_entry_safe(vlan, tmp, &ndp->vlan_vids, list)
if (vlan->vid == vid) {
netdev_dbg(dev, "NCSI: vid %u found, removing\n", vid);
list_del_rcu(&vlan->list);
found = true;
kfree(vlan);
}

if (!found) {
netdev_err(dev, "NCSI: vid %u wasn't registered!\n", vid);
return -EINVAL;
}

found = ncsi_kick_channels(ndp) != 0;

return found ? ncsi_process_next_channel(ndp) : 0;
}