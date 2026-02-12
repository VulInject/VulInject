int uncore_freq_add_entry(struct uncore_data *data, int cpu)
{
int ret = 0;

mutex_lock(&uncore_lock);
if (data->valid) {

data->control_cpu = cpu;
goto uncore_unlock;
}

sprintf(data->name, "package_%02d_die_%02d", data->package_id, data->die_id);

uncore_read(data, &data->initial_min_freq_khz, &data->initial_max_freq_khz);

ret = create_attr_group(data, data->name);
if (!ret) {
data->control_cpu = cpu;
data->valid = true;
}

uncore_unlock:
mutex_unlock(&uncore_lock);

return ret;
}