void
conn_task_cleanup(struct connection *c, struct task *t)
{
pdu_free_queue(&t->sendq);
pdu_free_queue(&t->recvq);

if (c) {
TAILQ_REMOVE(&c->tasks, t, entry);
if (!TAILQ_EMPTY(&c->tasks))
conn_task_schedule(c);
else
session_schedule(c->session);
}
}

do {								\
if (!strcmp((p)->key, #v)) {				\
(x)->his.v = text_to_num((p)->value, (min), (max), &err); \
if (err) {					\
log_warnx("bad param %s=%s: %s",	\
(p)->key, (p)->value, err);		\
errors++;				\
}						\
log_debug("SET_NUM: %s = %llu", #v, (u_int64_t)(x)->his.v);	\
}							\
} while (0)