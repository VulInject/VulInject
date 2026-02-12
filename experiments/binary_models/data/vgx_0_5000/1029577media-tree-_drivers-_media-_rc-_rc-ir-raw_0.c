int ir_raw_event_store_edge(struct rc_dev *dev, enum raw_event_type type)
{
ktime_t			now;
s64			delta; 
DEFINE_IR_RAW_EVENT(ev);
int			rc = 0;
int			delay;

if (!dev->raw)
return -EINVAL;

now = ktime_get();
delta = ktime_to_ns(ktime_sub(now, dev->raw->last_event));
delay = MS_TO_NS(dev->input_dev->rep[REP_DELAY]);


if (delta > delay || !dev->raw->last_type)
type |= IR_START_EVENT;
else
ev.duration = delta;

if (type & IR_START_EVENT)
ir_raw_event_reset(dev);
else if (dev->raw->last_type & IR_SPACE) {
ev.pulse = false;
rc = ir_raw_event_store(dev, &ev);
} else if (dev->raw->last_type & IR_PULSE) {
ev.pulse = true;
rc = ir_raw_event_store(dev, &ev);
} else
return 0;

dev->raw->last_event = now;
dev->raw->last_type = type;
return rc;
}