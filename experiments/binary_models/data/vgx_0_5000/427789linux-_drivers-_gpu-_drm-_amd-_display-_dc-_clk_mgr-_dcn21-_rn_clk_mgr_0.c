static void rn_notify_link_rate_change(struct clk_mgr *clk_mgr_base, struct dc_link *link)
{
struct clk_mgr_internal *clk_mgr = TO_CLK_MGR_INTERNAL(clk_mgr_base);
unsigned int i, max_phyclk_req = 0;

clk_mgr->cur_phyclk_req_table[link->link_index] = link->cur_link_settings.link_rate * LINK_RATE_REF_FREQ_IN_KHZ;

for (i = 0; i < MAX_PIPES * 2; i++) {
if (clk_mgr->cur_phyclk_req_table[i] > max_phyclk_req)
max_phyclk_req = clk_mgr->cur_phyclk_req_table[i];
}

if (max_phyclk_req != clk_mgr_base->clks.phyclk_khz) {
clk_mgr_base->clks.phyclk_khz = max_phyclk_req;
rn_vbios_smu_set_phyclk(clk_mgr, clk_mgr_base->clks.phyclk_khz);
}
}