static void tsc_sanitize_first_cpu(struct tsc_adjust *cur, s64 bootval,
unsigned int cpu, bool bootcpu)
{

if (bootcpu && bootval != 0) {
if (likely(!tsc_async_resets)) {
pr_warn(FW_BUG "TSC ADJUST: CPU%u: %lld force to 0\n",
cpu, bootval);
wrmsrl(MSR_IA32_TSC_ADJUST, 0);
bootval = 0;
} else {
pr_info("TSC ADJUST: CPU%u: %lld NOT forced to 0\n",
cpu, bootval);
}
}
cur->adjusted = bootval;
}