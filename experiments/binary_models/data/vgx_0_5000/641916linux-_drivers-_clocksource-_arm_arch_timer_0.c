void arch_timer_enable_workaround(const struct arch_timer_erratum_workaround *wa,
bool local)
{
int i;

if (local) {
__this_cpu_write(timer_unstable_counter_workaround, wa);
} else {
for_each_possible_cpu(i)
per_cpu(timer_unstable_counter_workaround, i) = wa;
}

if (wa->read_cntvct_el0 || wa->read_cntpct_el0)
atomic_set(&timer_unstable_counter_workaround_in_use, 1);


if (wa->read_cntvct_el0) {
clocksource_counter.vdso_clock_mode = VDSO_CLOCKMODE_NONE;
vdso_default = VDSO_CLOCKMODE_NONE;
} else if (wa->disable_compat_vdso && vdso_default != VDSO_CLOCKMODE_NONE) {
vdso_default = VDSO_CLOCKMODE_ARCHTIMER_NOCOMPAT;
clocksource_counter.vdso_clock_mode = vdso_default;
}
}