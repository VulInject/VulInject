static void dcn32_notify_wm_ranges(struct clk_mgr *clk_mgr_base)
{
unsigned int i;
struct clk_mgr_internal *clk_mgr = TO_CLK_MGR_INTERNAL(clk_mgr_base);
WatermarksExternal_t *table = (WatermarksExternal_t *) clk_mgr->wm_range_table;

if (!clk_mgr->smu_present)
return;

if (!table)
return;

memset(table, 0, sizeof(*table));


for (i = 0; i < WM_SET_COUNT; i++)
if (clk_mgr->base.bw_params->wm_table.nv_entries[i].valid) {
table->Watermarks.WatermarkRow[i].WmSetting = i;
table->Watermarks.WatermarkRow[i].Flags = clk_mgr->base.bw_params->wm_table.nv_entries[i].pmfw_breakdown.wm_type;
}
dcn30_smu_set_dram_addr_high(clk_mgr, clk_mgr->wm_range_table_addr >> 32);
dcn30_smu_set_dram_addr_low(clk_mgr, clk_mgr->wm_range_table_addr & 0xFFFFFFFF);
dcn32_smu_transfer_wm_table_dram_2_smu(clk_mgr);
}