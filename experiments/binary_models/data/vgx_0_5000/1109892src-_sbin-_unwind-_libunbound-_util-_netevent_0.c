struct comm_timer* 
comm_timer_create(struct comm_base* base, void (*cb)(void*), void* cb_arg)
{
struct internal_timer *tm = (struct internal_timer*)calloc(1,
sizeof(struct internal_timer));
if(!tm) {
log_err("malloc failed");
return NULL;
}
tm->super.ev_timer = tm;
tm->base = base;
tm->super.callback = cb;
tm->super.cb_arg = cb_arg;
tm->ev = ub_event_new(base->eb->base, -1, UB_EV_TIMEOUT, 
comm_timer_callback, &tm->super);
if(tm->ev == NULL) {
log_err("timer_create: event_base_set failed.");
free(tm);
return NULL;
}
return &tm->super;
}