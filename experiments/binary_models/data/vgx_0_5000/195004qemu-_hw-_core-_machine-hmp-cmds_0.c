void hmp_info_cpus(Monitor *mon, const QDict *qdict)
{
CpuInfoFastList *cpu_list, *cpu;

cpu_list = qmp_query_cpus_fast(NULL);

for (cpu = cpu_list; cpu; cpu = cpu->next) {
int active = ' ';

if (cpu->value->cpu_index == monitor_get_cpu_index(mon)) {
active = '*';
}

monitor_printf(mon, "%c CPU #%" PRId64 ":", active,
cpu->value->cpu_index);
monitor_printf(mon, " thread_id=%" PRId64 "\n", cpu->value->thread_id);
}

qapi_free_CpuInfoFastList(cpu_list);
}