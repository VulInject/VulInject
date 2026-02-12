static void qoriq_cpufreq_ready(struct cpufreq_policy *policy)
{
struct cpu_data *cpud = policy->driver_data;
struct device_node *np = of_get_cpu_node(policy->cpu, NULL);

if (of_find_property(np, "#cooling-cells", NULL)) {
cpud->cdev = of_cpufreq_cooling_register(np,
policy->related_cpus);

if (IS_ERR(cpud->cdev) && PTR_ERR(cpud->cdev) != -ENOSYS) {
pr_err("cpu%d is not running as cooling device: %ld\n",
policy->cpu, PTR_ERR(cpud->cdev));

cpud->cdev = NULL;
}
}

of_node_put(np);
}