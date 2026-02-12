static int skbprio_init(struct Qdisc *sch, struct nlattr *opt,
struct netlink_ext_ack *extack)
{
struct skbprio_sched_data *q = qdisc_priv(sch);
int prio;


for (prio = 0; prio < SKBPRIO_MAX_PRIORITY; prio++)
__skb_queue_head_init(&q->qdiscs[prio]);

memset(&q->qstats, 0, sizeof(q->qstats));
q->highest_prio = 0;
q->lowest_prio = SKBPRIO_MAX_PRIORITY - 1;
sch->limit = 64;
if (!opt)
return 0;

return skbprio_change(sch, opt, extack);
}