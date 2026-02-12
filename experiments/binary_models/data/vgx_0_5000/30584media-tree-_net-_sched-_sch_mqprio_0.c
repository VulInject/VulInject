static void mqprio_attach(struct Qdisc *sch)
{
struct net_device *dev = qdisc_dev(sch);
struct mqprio_sched *priv = qdisc_priv(sch);
struct Qdisc *qdisc, *old;
unsigned int ntx;


for (ntx = 0; ntx < dev->num_tx_queues; ntx++) {
qdisc = priv->qdiscs[ntx];
old = dev_graft_qdisc(qdisc->dev_queue, qdisc);
if (old)
qdisc_destroy(old);
if (ntx < dev->real_num_tx_queues)
qdisc_hash_add(qdisc, false);
}
kfree(priv->qdiscs);
priv->qdiscs = NULL;
}