}
EXPORT_SYMBOL(mpic_free_timer);


struct mpic_timer *mpic_request_timer(irq_handler_t fn, void *dev,
time64_t time)
{
struct mpic_timer *allocated_timer;
int ret;

if (list_empty(&timer_group_list))
return NULL;

if (time < 0)
return NULL;

allocated_timer = get_timer(time);
if (!allocated_timer)
return NULL;

ret = request_irq(allocated_timer->irq, fn,
IRQF_TRIGGER_LOW, "global-timer", dev);
if (ret) {
mpic_free_timer(allocated_timer);
return NULL;
}

allocated_timer->dev = dev;

return allocated_timer;
}