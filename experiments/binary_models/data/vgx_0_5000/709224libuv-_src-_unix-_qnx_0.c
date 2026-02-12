int uv_cpu_info(uv_cpu_info_t** cpu_infos, int* count) {
struct cpuinfo_entry* cpuinfo =
(struct cpuinfo_entry*)_SYSPAGE_ENTRY(_syspage_ptr, new_cpuinfo);
size_t cpuinfo_size = _SYSPAGE_ELEMENT_SIZE(_syspage_ptr, cpuinfo);
struct strings_entry* strings = _SYSPAGE_ENTRY(_syspage_ptr, strings);
int num_cpus = _syspage_ptr->num_cpu;
int i;

*count = num_cpus;
*cpu_infos = uv__malloc(num_cpus * sizeof(**cpu_infos));
if (*cpu_infos == NULL)
return UV_ENOMEM;

for (i = 0; i < num_cpus; i++) {
(*cpu_infos)[i].model = strdup(&strings->data[cpuinfo->name]);
(*cpu_infos)[i].speed = cpuinfo->speed;
SYSPAGE_ARRAY_ADJ_OFFSET(cpuinfo, cpuinfo, cpuinfo_size);
}

return 0;
}