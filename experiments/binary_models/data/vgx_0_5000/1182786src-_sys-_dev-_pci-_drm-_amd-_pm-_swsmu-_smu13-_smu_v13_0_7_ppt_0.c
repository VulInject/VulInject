static int smu_v13_0_7_setup_pptable(struct smu_context *smu)
{
struct smu_table_context *smu_table = &smu->smu_table;
struct amdgpu_device *adev = smu->adev;
int ret = 0;


ret = smu_v13_0_7_get_pptable_from_pmfw(smu,
&smu_table->power_play_table,
&smu_table->power_play_table_size);
if (ret)
return ret;

ret = smu_v13_0_7_store_powerplay_table(smu);
if (ret)
return ret;


if (!adev->scpm_enabled) {
ret = smu_v13_0_7_append_powerplay_table(smu);
if (ret)
return ret;
}

ret = smu_v13_0_7_check_powerplay_table(smu);
if (ret)
return ret;

return ret;
}