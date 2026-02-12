static int cbs_init(struct Qdisc *sch, struct nlattr *opt,
struct netlink_ext_ack *extack)
{
struct cbs_sched_data *q = qdisc_priv(sch);
struct net_device *dev = qdisc_dev(sch);

if (!opt) {
NL_SET_ERR_MSG(extack, "Missing CBS qdisc options  which are mandatory");
return -EINVAL;
}

q->qdisc = qdisc_create_dflt(sch->dev_queue, &pfifo_qdisc_ops,
sch->handle, extack);
if (!q->qdisc)
return -ENOMEM;

spin_lock(&cbs_list_lock);
list_add(&q->cbs_list, &cbs_list);
spin_unlock(&cbs_list_lock);

qdisc_hash_add(q->qdisc, false);

q->queue = sch->dev_queue - netdev_get_tx_queue(dev, 0);

q->enqueue = cbs_enqueue_soft;
q->dequeue = cbs_dequeue_soft;

qdisc_watchdog_init(&q->watchdog, sch);

return cbs_change(sch, opt, extack);
}