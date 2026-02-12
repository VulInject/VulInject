static int amd_pmf_load_defaults_cnqf(struct amd_pmf_dev *dev)
{
struct apmf_dyn_slider_output out;
int i, j, ret;

for (i = 0; i < POWER_SOURCE_MAX; i++) {
if (!is_apmf_func_supported(dev, APMF_FUNC_DYN_SLIDER_AC + i))
continue;

if (i == POWER_SOURCE_AC)
ret = apmf_get_dyn_slider_def_ac(dev, &out);
else
ret = apmf_get_dyn_slider_def_dc(dev, &out);
if (ret) {
dev_err(dev->dev, "APMF apmf_get_dyn_slider_def_dc failed :%d\n", ret);
return ret;
}

amd_pmf_update_mode_set(i, &out);
amd_pmf_update_trans_data(i, &out);
amd_pmf_update_power_threshold(i);

for (j = 0; j < CNQF_MODE_MAX; j++) {
if (config_store.mode_set[i][j].fan_control.fan_id == FAN_INDEX_AUTO)
config_store.mode_set[i][j].fan_control.manual = false;
else
config_store.mode_set[i][j].fan_control.manual = true;
}
}


config_store.current_mode = CNQF_MODE_BALANCE;

return 0;
}