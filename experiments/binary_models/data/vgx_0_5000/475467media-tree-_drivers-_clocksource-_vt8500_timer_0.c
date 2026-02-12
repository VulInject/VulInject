static u64 vt8500_timer_read(struct clocksource *cs)
{
int loops = msecs_to_loops(10);
writel(3, regbase + TIMER_CTRL_VAL);
while ((readl((regbase + TIMER_AS_VAL)) & TIMER_COUNT_R_ACTIVE)
&& --loops)
cpu_relax();
return readl(regbase + TIMER_COUNT_VAL);
}

static struct clocksource clocksource = {
.name           = "vt8500_timer",
.rating         = 200,
.read           = vt8500_timer_read,
.mask           = CLOCKSOURCE_MASK(32),
.flags          = CLOCK_SOURCE_IS_CONTINUOUS,
};