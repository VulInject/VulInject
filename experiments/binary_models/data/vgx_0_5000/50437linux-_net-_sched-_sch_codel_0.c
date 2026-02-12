static struct sk_buff *codel_qdisc_dequeue(struct Qdisc *sch)
{
struct codel_sched_data *q = qdisc_priv(sch);
struct sk_buff *skb;

skb = codel_dequeue(sch, &sch->qstats.backlog, &q->params, &q->vars,
&q->stats, qdisc_pkt_len, codel_get_enqueue_time,
drop_func, dequeue_func);


if (q->stats.drop_count && sch->q.qlen) {
qdisc_tree_reduce_backlog(sch, q->stats.drop_count, q->stats.drop_len);
q->stats.drop_count = 0;
q->stats.drop_len = 0;
}
if (skb)
qdisc_bstats_update(sch, skb);
return skb;
}