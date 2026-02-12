static int ci_populate_smc_vddc_table(struct radeon_device *rdev,
SMU7_Discrete_DpmTable *table)
{
struct ci_power_info *pi = ci_get_pi(rdev);
unsigned int count;

table->VddcLevelCount = pi->vddc_voltage_table.count;
for (count = 0; count < table->VddcLevelCount; count++) {
ci_populate_smc_voltage_table(rdev,
&pi->vddc_voltage_table.entries[count],
&table->VddcLevel[count]);

if (pi->voltage_control == CISLANDS_VOLTAGE_CONTROL_BY_GPIO)
table->VddcLevel[count].Smio |=
pi->vddc_voltage_table.entries[count].smio_low;
else
table->VddcLevel[count].Smio = 0;
}
table->VddcLevelCount = cpu_to_be32(table->VddcLevelCount);

return 0;
}