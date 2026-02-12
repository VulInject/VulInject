static int kvm_pmu_create_perf_event(struct kvm_pmc *pmc, struct perf_event_attr *attr,
unsigned long flags, unsigned long eidx, unsigned long evtdata)
{
struct perf_event *event;

kvm_pmu_release_perf_event(pmc);
attr->config = kvm_pmu_get_perf_event_config(eidx, evtdata);
if (flags & SBI_PMU_CFG_FLAG_CLEAR_VALUE) {

pmc->counter_val = 0;
}


attr->sample_period = kvm_pmu_get_sample_period(pmc);

event = perf_event_create_kernel_counter(attr, -1, current, NULL, pmc);
if (IS_ERR(event)) {
pr_err("kvm pmu event creation failed for eidx %lx: %ld\n", eidx, PTR_ERR(event));
return PTR_ERR(event);
}

pmc->perf_event = event;
if (flags & SBI_PMU_CFG_FLAG_AUTO_START)
perf_event_enable(pmc->perf_event);

return 0;
}