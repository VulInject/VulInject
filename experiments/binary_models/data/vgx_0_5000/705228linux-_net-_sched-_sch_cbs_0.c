static int cbs_enable_offload(struct net_device *dev, struct cbs_sched_data *q,
const struct tc_cbs_qopt *opt,
struct netlink_ext_ack *extack)
{
const struct net_device_ops *ops = dev->netdev_ops;
struct tc_cbs_qopt_offload cbs = { };
int err;

if (!ops->ndo_setup_tc) {
NL_SET_ERR_MSG(extack, "Specified device does not support cbs offload");
return -EOPNOTSUPP;
}

cbs.queue = q->queue;

cbs.enable = 1;
cbs.hicredit = opt->hicredit;
cbs.locredit = opt->locredit;
cbs.idleslope = opt->idleslope;
cbs.sendslope = opt->sendslope;

err = ops->ndo_setup_tc(dev, TC_SETUP_QDISC_CBS, &cbs);
if (err < 0) {
NL_SET_ERR_MSG(extack, "Specified device failed to setup cbs hardware offload");
return err;
}

q->enqueue = cbs_enqueue_offload;
q->dequeue = cbs_dequeue_offload;

return 0;
}