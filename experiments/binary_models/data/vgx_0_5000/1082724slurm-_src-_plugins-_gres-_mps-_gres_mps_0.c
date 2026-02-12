static void _set_env(common_gres_env_t *gres_env)
{
char perc_str[64];
uint64_t count_on_dev, percentage;

gres_env->global_id = -1;
gres_env->gres_conf_flags = GRES_CONF_ENV_NVML;
gres_env->gres_devices = gres_devices;
gres_env->prefix = "";

gres_common_gpu_set_env(gres_env);


if (gres_env->gres_cnt && shared_info) {
count_on_dev = _get_dev_count(gres_env->global_id);
if (count_on_dev > 0) {
percentage = (gres_env->gres_cnt * 100) / count_on_dev;
percentage = MAX(percentage, 1);
} else
percentage = 0;
snprintf(perc_str, sizeof(perc_str), "%"PRIu64, percentage);
env_array_overwrite(gres_env->env_ptr,
"CUDA_MPS_ACTIVE_THREAD_PERCENTAGE",
perc_str);
} else if (gres_env->gres_cnt) {
error("shared_info list is NULL");
snprintf(perc_str, sizeof(perc_str), "%"PRIu64,
gres_env->gres_cnt);
env_array_overwrite(gres_env->env_ptr,
"CUDA_MPS_ACTIVE_THREAD_PERCENTAGE",
perc_str);
} else {
unsetenvp(*gres_env->env_ptr,
"CUDA_MPS_ACTIVE_THREAD_PERCENTAGE");
}
}