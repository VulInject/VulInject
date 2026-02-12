IRAM void mgos_hw_timers_isr(struct mgos_hw_timer_info *ti) {
timer_callback cb = ti->cb;
void *cb_arg = ti->cb_arg;
if (cb != NULL) {

if (!(ti->flags & MGOS_TIMER_REPEAT)) {
mgos_hw_timers_dev_clear(ti);
ti->cb_arg = NULL;
ti->cb = NULL;
}
cb(cb_arg);
} else {

}
mgos_hw_timers_dev_isr_bottom(ti);
}