void TmqhOutputFlowHash(ThreadVars *tv, Packet *p)
{
uint32_t qid;
TmqhFlowCtx *ctx = (TmqhFlowCtx *)tv->outctx;

if (p->flags & PKT_WANTS_FLOW) {
uint32_t hash = p->flow_hash;
qid = hash % ctx->size;
} else {
qid = ctx->last++;

if (ctx->last == ctx->size)
ctx->last = 0;
}

PacketQueue *q = ctx->queues[qid].q;
SCMutexLock(&q->mutex_q);
PacketEnqueue(q, p);
SCCondSignal(&q->cond_q);
SCMutexUnlock(&q->mutex_q);

return;
}