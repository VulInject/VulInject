static void reuse_write_wait_clear(struct reuse_tcp* reuse)
{
struct waiting_tcp* w = reuse->write_wait_first, *n = NULL;
if(!w) return;
unit_assert(reuse->write_wait_first);
unit_assert(reuse->write_wait_last);
while(w) {
n = w->write_wait_next;
w->write_wait_queued = 0;
w->write_wait_next = (struct waiting_tcp*)1;  
w->write_wait_prev = (struct waiting_tcp*)1;  
w = n;
}
reuse->write_wait_first = NULL;
reuse->write_wait_last = NULL;
}