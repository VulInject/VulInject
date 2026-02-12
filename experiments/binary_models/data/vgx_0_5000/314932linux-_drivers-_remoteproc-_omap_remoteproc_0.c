static irqreturn_t omap_rproc_watchdog_isr(int irq, void *data)
{
struct rproc *rproc = data;
struct omap_rproc *oproc = rproc->priv;
struct device *dev = rproc->dev.parent;
struct omap_rproc_timer *timers = oproc->timers;
struct omap_rproc_timer *wd_timer = NULL;
int num_timers = oproc->num_timers + oproc->num_wd_timers;
int i;

for (i = oproc->num_timers; i < num_timers; i++) {
if (timers[i].irq > 0 && irq == timers[i].irq) {
wd_timer = &timers[i];
break;
}
}

if (!wd_timer) {
dev_err(dev, "invalid timer\n");
return IRQ_NONE;
}

omap_rproc_ack_timer_irq(wd_timer);

rproc_report_crash(rproc, RPROC_WATCHDOG);

return IRQ_HANDLED;
}