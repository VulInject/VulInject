int phm_get_sclk_for_voltage_evv(struct pp_hwmgr *hwmgr,
phm_ppt_v1_voltage_lookup_table *lookup_table,
uint16_t virtual_voltage_id, int32_t *sclk)
{
uint8_t entry_id;
uint8_t voltage_id;
struct phm_ppt_v1_information *table_info =
(struct phm_ppt_v1_information *)(hwmgr->pptable);

PP_ASSERT_WITH_CODE(lookup_table->count != 0, "Lookup table is empty", return -EINVAL);


for (entry_id = 0; entry_id < table_info->vdd_dep_on_sclk->count; entry_id++) {
voltage_id = table_info->vdd_dep_on_sclk->entries[entry_id].vddInd;
if (lookup_table->entries[voltage_id].us_vdd == virtual_voltage_id)
break;
}

if (entry_id >= table_info->vdd_dep_on_sclk->count) {
pr_debug("Can't find requested voltage id in vdd_dep_on_sclk table\n");
return -EINVAL;
}

*sclk = table_info->vdd_dep_on_sclk->entries[entry_id].clk;

return 0;
}