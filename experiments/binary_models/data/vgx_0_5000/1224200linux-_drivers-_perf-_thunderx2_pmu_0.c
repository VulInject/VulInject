static int __init tx2_uncore_driver_init(void)
{
int ret;

ret = cpuhp_setup_state_multi(CPUHP_AP_PERF_ARM_CAVIUM_TX2_UNCORE_ONLINE,
"perf/tx2/uncore:online",
tx2_uncore_pmu_online_cpu,
tx2_uncore_pmu_offline_cpu);
if (ret) {
pr_err("TX2 PMU: setup hotplug failed(%d)\n", ret);
return ret;
}
ret = platform_driver_register(&tx2_uncore_driver);
if (ret)
cpuhp_remove_multi_state(CPUHP_AP_PERF_ARM_CAVIUM_TX2_UNCORE_ONLINE);

return ret;
}