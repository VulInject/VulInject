static int xen_pvclock_gtod_notify(struct notifier_block *nb,
unsigned long was_set, void *priv)
{

static struct timespec64 next_sync;

struct xen_platform_op op;
struct timespec64 now, system_time;
struct timekeeper *tk = priv;

now.tv_sec = tk->xtime_sec;
now.tv_nsec = (long)(tk->tkr_mono.xtime_nsec >> tk->tkr_mono.shift);
system_time = timespec64_add(now, tk->wall_to_monotonic);


if (!was_set && timespec64_compare(&now, &next_sync) < 0)
return NOTIFY_OK;

op.cmd = XENPF_settime64;
op.u.settime64.mbz = 0;
op.u.settime64.secs = now.tv_sec;
op.u.settime64.nsecs = now.tv_nsec;
op.u.settime64.system_time = timespec64_to_ns(&system_time);
(void)HYPERVISOR_platform_op(&op);


next_sync = now;
next_sync.tv_sec += 11 * 60;

return NOTIFY_OK;
}