static uint32_t FlowManagerHashRowCleanup(Flow *f, FlowQueuePrivate *recycle_q, const int mode)
{
uint32_t cnt = 0;

do {
FLOWLOCK_WRLOCK(f);

Flow *next_flow = f->next;


if (mode == 0) {
RemoveFromHash(f, NULL);
} else {
FlowBucket *fb = f->fb;
fb->evicted = f->next;
f->next = NULL;
f->fb = NULL;
}
f->flow_end_flags |= FLOW_END_FLAG_SHUTDOWN;


FLOWLOCK_UNLOCK(f);
FlowQueuePrivateAppendFlow(recycle_q, f);

cnt++;

f = next_flow;
} while (f != NULL);

return cnt;
}