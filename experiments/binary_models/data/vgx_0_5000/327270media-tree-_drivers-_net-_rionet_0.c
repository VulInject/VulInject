static void rionet_remove_mport(struct device *dev,
struct class_interface *class_intf)
{
struct rio_mport *mport = to_rio_mport(dev);
struct net_device *ndev;
int id = mport->id;

pr_debug("%s %s\n", __func__, mport->name);

WARN(nets[id].nact, "%s called when connected to %d peers\n",
__func__, nets[id].nact);
WARN(!nets[id].ndev, "%s called for mport without NDEV\n",
__func__);

if (nets[id].ndev) {
ndev = nets[id].ndev;
netif_stop_queue(ndev);
unregister_netdev(ndev);

free_pages((unsigned long)nets[id].active,
get_order(sizeof(void *) *
RIO_MAX_ROUTE_ENTRIES(mport->sys_size)));
nets[id].active = NULL;
free_netdev(ndev);
nets[id].ndev = NULL;
}
}