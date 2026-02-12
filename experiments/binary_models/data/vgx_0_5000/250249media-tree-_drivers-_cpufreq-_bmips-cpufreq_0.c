static int bmips_cpufreq_init(struct cpufreq_policy *policy)
{
struct cpufreq_frequency_table *freq_table;
int ret;

freq_table = bmips_cpufreq_get_freq_table(policy);
if (IS_ERR(freq_table)) {
ret = PTR_ERR(freq_table);
pr_err("%s: couldn't determine frequency table (%d).\n",
BMIPS_CPUFREQ_NAME, ret);
return ret;
}

ret = cpufreq_generic_init(policy, freq_table, TRANSITION_LATENCY);
if (ret)
bmips_cpufreq_exit(policy);
else
pr_info("%s: registered\n", BMIPS_CPUFREQ_NAME);

return ret;
}