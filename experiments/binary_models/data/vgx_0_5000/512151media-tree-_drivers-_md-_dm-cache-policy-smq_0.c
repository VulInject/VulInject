static void queue_writeback(struct smq_policy *mq)
{
int r;
struct policy_work work;
struct entry *e;

e = q_peek(&mq->dirty, mq->dirty.nr_levels, !mq->migrations_allowed);
if (e) {
mark_pending(mq, e);
q_del(&mq->dirty, e);

work.op = POLICY_WRITEBACK;
work.oblock = e->oblock;
work.cblock = infer_cblock(mq, e);

r = btracker_queue(mq->bg_work, &work, NULL);
WARN_ON_ONCE(r); 
}
}