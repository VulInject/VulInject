static void a10_pit_timer_cb(void *opaque)
{
AwA10TimerContext *tc = opaque;
AwA10PITState *s = tc->container;
uint8_t i = tc->index;

if (s->control[i] & AW_A10_PIT_TIMER_EN) {
s->irq_status |= 1 << i;
if (s->control[i] & AW_A10_PIT_TIMER_MODE) {
ptimer_stop(s->timer[i]);
s->control[i] &= ~AW_A10_PIT_TIMER_EN;
}
a10_pit_update_irq(s);
}
}