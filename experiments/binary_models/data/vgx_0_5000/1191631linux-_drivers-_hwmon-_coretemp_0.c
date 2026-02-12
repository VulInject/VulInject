static struct temp_data *init_temp_data(unsigned int cpu, int pkg_flag)
{
struct temp_data *tdata;

tdata = kzalloc(sizeof(struct temp_data), GFP_KERNEL);
if (!tdata)
return NULL;

tdata->status_reg = pkg_flag ? MSR_IA32_PACKAGE_THERM_STATUS :
MSR_IA32_THERM_STATUS;
tdata->is_pkg_data = pkg_flag;
tdata->cpu = cpu;
tdata->cpu_core_id = topology_core_id(cpu);
tdata->attr_size = MAX_CORE_ATTRS;
mutex_init(&tdata->update_lock);
return tdata;
}