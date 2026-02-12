static __always_inline int do_coarse_timens(const struct vdso_data *vdns, clockid_t clk,
struct __kernel_timespec *ts)
{
const struct vdso_data *vd = __arch_get_timens_vdso_data(vdns);
const struct vdso_timestamp *vdso_ts = &vd->basetime[clk];
const struct timens_offset *offs = &vdns->offset[clk];
u64 nsec;
s64 sec;
s32 seq;

do {
seq = vdso_read_begin(vd);
sec = vdso_ts->sec;
nsec = vdso_ts->nsec;
} while (unlikely(vdso_read_retry(vd, seq)));


sec += offs->sec;
nsec += offs->nsec;


ts->tv_sec = sec + __iter_div_u64_rem(nsec, NSEC_PER_SEC, &nsec);
ts->tv_nsec = nsec;
return 0;
}