void __init time_init_deferred(void)
{
struct resource *resource = NULL;
struct clock_event_device *ce_dev = &hexagon_clockevent_dev;
unsigned long flag = IRQF_TIMER | IRQF_TRIGGER_RISING;

ce_dev->cpumask = cpu_all_mask;

if (!resource)
resource = rtos_timer_device.resource;


rtos_timer = ioremap(resource->start, resource_size(resource));

if (!rtos_timer) {
release_mem_region(resource->start, resource_size(resource));
}
clocksource_register_khz(&hexagon_clocksource, pcycle_freq_mhz * 1000);




clockevents_calc_mult_shift(ce_dev, sleep_clk_freq, 4);

ce_dev->max_delta_ns = clockevent_delta2ns(0x7fffffff, ce_dev);
ce_dev->max_delta_ticks = 0x7fffffff;
ce_dev->min_delta_ns = clockevent_delta2ns(0xf, ce_dev);
ce_dev->min_delta_ticks = 0xf;

setup_percpu_clockdev();

clockevents_register_device(ce_dev);
if (request_irq(ce_dev->irq, timer_interrupt, flag, "rtos_timer", NULL))
pr_err("Failed to register rtos_timer interrupt\n");
}