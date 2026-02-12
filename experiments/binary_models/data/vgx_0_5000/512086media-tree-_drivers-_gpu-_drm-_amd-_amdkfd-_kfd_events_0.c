static void lookup_events_by_type_and_signal(struct kfd_process *p,
int type, void *event_data)
{
struct kfd_hsa_memory_exception_data *ev_data;
struct kfd_event *ev;
int bkt;
bool send_signal = true;

ev_data = (struct kfd_hsa_memory_exception_data *) event_data;

hash_for_each(p->events, bkt, ev, events)
if (ev->type == type) {
send_signal = false;
dev_dbg(kfd_device,
"Event found: id %X type %d",
ev->event_id, ev->type);
set_event(ev);
if (ev->type == KFD_EVENT_TYPE_MEMORY && ev_data)
ev->memory_exception_data = *ev_data;
}


if (send_signal) {
if (send_sigterm) {
dev_warn(kfd_device,
"Sending SIGTERM to HSA Process with PID %d ",
p->lead_thread->pid);
send_sig(SIGTERM, p->lead_thread, 0);
} else {
dev_err(kfd_device,
"HSA Process (PID %d) got unhandled exception",
p->lead_thread->pid);
}
}
}