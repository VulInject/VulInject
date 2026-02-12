int smu_v11_0_set_single_dpm_table(struct smu_context *smu,
enum smu_clk_type clk_type,
struct smu_11_0_dpm_table *single_dpm_table)
{
int ret = 0;
uint32_t clk;
int i;

ret = smu_v11_0_get_dpm_level_count(smu,
clk_type,
&single_dpm_table->count);
if (ret) {
dev_err(smu->adev->dev, "[%s] failed to get dpm levels!\n", __func__);
return ret;
}

for (i = 0; i < single_dpm_table->count; i++) {
ret = smu_v11_0_get_dpm_freq_by_index(smu,
clk_type,
i,
&clk);
if (ret) {
dev_err(smu->adev->dev, "[%s] failed to get dpm freq by index!\n", __func__);
return ret;
}

single_dpm_table->dpm_levels[i].value = clk;
single_dpm_table->dpm_levels[i].enabled = true;

if (i == 0)
single_dpm_table->min = clk;
else if (i == single_dpm_table->count - 1)
single_dpm_table->max = clk;
}

return 0;
}