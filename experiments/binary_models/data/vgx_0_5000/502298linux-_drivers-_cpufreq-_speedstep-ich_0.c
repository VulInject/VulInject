static int speedstep_cpu_init(struct cpufreq_policy *policy)
{
unsigned int policy_cpu;
struct get_freqs gf;


cpumask_copy(policy->cpus, topology_sibling_cpumask(policy->cpu));
policy_cpu = cpumask_any_and(policy->cpus, cpu_online_mask);


gf.policy = policy;
smp_call_function_single(policy_cpu, get_freqs_on_cpu, &gf, 1);
if (gf.ret)
return gf.ret;

policy->freq_table = speedstep_freqs;

return 0;
}