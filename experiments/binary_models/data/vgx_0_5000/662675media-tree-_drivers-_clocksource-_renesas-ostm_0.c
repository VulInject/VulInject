static int __init ostm_init_clkevt(struct ostm_device *ostm, int irq,
unsigned long rate)
{
struct clock_event_device *ced = &ostm->ced;
int ret = -ENXIO;

ret = request_irq(irq, ostm_timer_interrupt,
IRQF_TIMER | IRQF_IRQPOLL,
"ostm", ostm);
if (ret) {
pr_err("ostm: failed to request irq\n");
return ret;
}

ced->name = "ostm";
ced->features = CLOCK_EVT_FEAT_ONESHOT | CLOCK_EVT_FEAT_PERIODIC;
ced->set_state_shutdown = ostm_shutdown;
ced->set_state_periodic = ostm_set_periodic;
ced->set_state_oneshot = ostm_set_oneshot;
ced->set_next_event = ostm_clock_event_next;
ced->shift = 32;
ced->rating = 300;
ced->cpumask = cpumask_of(0);
clockevents_config_and_register(ced, rate, 0xf, 0xffffffff);

return 0;
}