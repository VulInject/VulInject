static int red_offload(struct Qdisc *sch, bool enable)
{
struct red_sched_data *q = qdisc_priv(sch);
struct net_device *dev = qdisc_dev(sch);
struct tc_red_qopt_offload opt = {
.handle = sch->handle,
.parent = sch->parent,
};

if (!tc_can_offload(dev) || !dev->netdev_ops->ndo_setup_tc)
return -EOPNOTSUPP;

if (enable) {
opt.command = TC_RED_REPLACE;
opt.set.min = q->parms.qth_min >> q->parms.Wlog;
opt.set.max = q->parms.qth_max >> q->parms.Wlog;
opt.set.probability = q->parms.max_P;
opt.set.limit = q->limit;
opt.set.is_ecn = red_use_ecn(q);
opt.set.is_harddrop = red_use_harddrop(q);
opt.set.is_nodrop = red_use_nodrop(q);
opt.set.qstats = &sch->qstats;
} else {
opt.command = TC_RED_DESTROY;
}

return dev->netdev_ops->ndo_setup_tc(dev, TC_SETUP_QDISC_RED, &opt);
}