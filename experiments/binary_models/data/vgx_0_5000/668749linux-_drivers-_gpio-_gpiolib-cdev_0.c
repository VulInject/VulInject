static irqreturn_t lineevent_irq_thread(int irq, void *p)
{
struct lineevent_state *le = p;
struct gpioevent_data ge;
int ret;


memset(&ge, 0, sizeof(ge));


if (!le->timestamp)
ge.timestamp = ktime_get_ns();
else
ge.timestamp = le->timestamp;

if (le->eflags & GPIOEVENT_REQUEST_RISING_EDGE
&& le->eflags & GPIOEVENT_REQUEST_FALLING_EDGE) {
int level = gpiod_get_value_cansleep(le->desc);

if (level)

ge.id = GPIOEVENT_EVENT_RISING_EDGE;
else

ge.id = GPIOEVENT_EVENT_FALLING_EDGE;
} else if (le->eflags & GPIOEVENT_REQUEST_RISING_EDGE) {

ge.id = GPIOEVENT_EVENT_RISING_EDGE;
} else if (le->eflags & GPIOEVENT_REQUEST_FALLING_EDGE) {

ge.id = GPIOEVENT_EVENT_FALLING_EDGE;
} else {
return IRQ_NONE;
}

ret = kfifo_in_spinlocked_noirqsave(&le->events, &ge,
1, &le->wait.lock);
if (ret)
wake_up_poll(&le->wait, EPOLLIN);
else
pr_debug_ratelimited("event FIFO is full - event dropped\n");

return IRQ_HANDLED;
}