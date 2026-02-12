static int smu10_get_clock_voltage_dependency_table(struct pp_hwmgr *hwmgr,
struct smu10_voltage_dependency_table **pptable,
uint32_t num_entry, const DpmClock_t *pclk_dependency_table)
{
uint32_t i;
struct smu10_voltage_dependency_table *ptable;

ptable = kzalloc(struct_size(ptable, entries, num_entry), GFP_KERNEL);
if (NULL == ptable)
return -ENOMEM;

ptable->count = num_entry;

for (i = 0; i < ptable->count; i++) {
ptable->entries[i].clk         = pclk_dependency_table->Freq * 100;
ptable->entries[i].vol         = pclk_dependency_table->Vol;
pclk_dependency_table++;
}

*pptable = ptable;

return 0;
}