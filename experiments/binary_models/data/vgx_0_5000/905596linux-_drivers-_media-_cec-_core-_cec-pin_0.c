static void cec_pin_update(struct cec_pin *pin, bool v, bool force)
{
if (!force && v == pin->adap->cec_pin_is_high)
return;

pin->adap->cec_pin_is_high = v;
if (atomic_read(&pin->work_pin_num_events) < CEC_NUM_PIN_EVENTS) {
u8 ev = v;

if (pin->work_pin_events_dropped) {
pin->work_pin_events_dropped = false;
ev |= CEC_PIN_EVENT_FL_DROPPED;
}
pin->work_pin_events[pin->work_pin_events_wr] = ev;
pin->work_pin_ts[pin->work_pin_events_wr] = ktime_get();
pin->work_pin_events_wr =
(pin->work_pin_events_wr + 1) % CEC_NUM_PIN_EVENTS;
atomic_inc(&pin->work_pin_num_events);
} else {
pin->work_pin_events_dropped = true;
pin->work_pin_events_dropped_cnt++;
}
wake_up_interruptible(&pin->kthread_waitq);
}