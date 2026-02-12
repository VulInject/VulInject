int register_sh_pmu(struct sh_pmu *_pmu)
{
if (sh_pmu)
return -EBUSY;
sh_pmu = _pmu;

pr_info("Performance Events: %s support registered\n", _pmu->name);


pmu.capabilities |= PERF_PMU_CAP_NO_INTERRUPT;

WARN_ON(_pmu->num_events > MAX_HWEVENTS);

perf_pmu_register(&pmu, "cpu", PERF_TYPE_RAW);
cpuhp_setup_state(CPUHP_PERF_SUPERH, "PERF_SUPERH", sh_pmu_prepare_cpu,
NULL);
return 0;
}