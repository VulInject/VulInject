static int smc_pnet_add_by_ndev(struct net_device *ndev)
{
struct smc_pnetentry *pnetelem, *tmp_pe;
struct smc_pnettable *pnettable;
struct net *net = dev_net(ndev);
struct smc_net *sn;
int rc = -ENOENT;


sn = net_generic(net, smc_net_id);
pnettable = &sn->pnettable;

mutex_lock(&pnettable->lock);
list_for_each_entry_safe(pnetelem, tmp_pe, &pnettable->pnetlist, list) {
if (pnetelem->type == SMC_PNET_ETH && !pnetelem->ndev &&
!strncmp(pnetelem->eth_name, ndev->name, IFNAMSIZ)) {
netdev_hold(ndev, &pnetelem->dev_tracker, GFP_ATOMIC);
pnetelem->ndev = ndev;
rc = 0;
pr_warn_ratelimited("smc: adding net device %s with "
"user defined pnetid %.16s\n",
pnetelem->eth_name,
pnetelem->pnet_name);
break;
}
}
mutex_unlock(&pnettable->lock);
return rc;
}