static void dsu_pmu_start(struct perf_event *event, int pmu_flags)
{
struct dsu_pmu *dsu_pmu = to_dsu_pmu(event->pmu);


if (pmu_flags & PERF_EF_RELOAD)
WARN_ON(!(event->hw.state & PERF_HES_UPTODATE));
dsu_pmu_set_event_period(event);
if (event->hw.idx != DSU_PMU_IDX_CYCLE_COUNTER)
dsu_pmu_set_event(dsu_pmu, event);
event->hw.state = 0;
dsu_pmu_enable_counter(dsu_pmu, event->hw.idx);
}