static void intel_pstate_set_itmt_prio(int cpu)
{
struct cppc_perf_caps cppc_perf;
static u32 max_highest_perf = 0, min_highest_perf = U32_MAX;
int ret;

ret = cppc_get_perf_caps(cpu, &cppc_perf);
if (ret)
return;


sched_set_itmt_core_prio(cppc_perf.highest_perf, cpu);

if (max_highest_perf <= min_highest_perf) {
if (cppc_perf.highest_perf > max_highest_perf)
max_highest_perf = cppc_perf.highest_perf;

if (cppc_perf.highest_perf < min_highest_perf)
min_highest_perf = cppc_perf.highest_perf;

if (max_highest_perf > min_highest_perf) {

schedule_work(&sched_itmt_work);
}
}
}