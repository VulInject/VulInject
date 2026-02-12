static int create_signal_event(struct file *devkfd, struct kfd_process *p,
struct kfd_event *ev, const int *restore_id)
{
int ret;

if (p->signal_mapped_size &&
p->signal_event_count == p->signal_mapped_size / 8) {
if (!p->signal_event_limit_reached) {
pr_debug("Signal event wasn't created because limit was reached\n");
p->signal_event_limit_reached = true;
}
return -ENOSPC;
}

ret = allocate_event_notification_slot(p, ev, restore_id);
if (ret) {
pr_warn("Signal event wasn't created because out of kernel memory\n");
return ret;
}

p->signal_event_count++;

ev->user_signal_address = &p->signal_page->user_address[ev->event_id];
pr_debug("Signal event number %zu created with id %d, address %p\n",
p->signal_event_count, ev->event_id,
ev->user_signal_address);

return 0;
}