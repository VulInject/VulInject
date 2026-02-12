void isst_get_uncore_mem_freq(struct isst_id *id, int config_index,
struct isst_pkg_ctdp_level_info *ctdp_level)
{
unsigned int resp;
int ret;

ret = isst_send_mbox_command(id->cpu, CONFIG_TDP, CONFIG_TDP_GET_MEM_FREQ,
0, config_index, &resp);
if (ret) {
ctdp_level->mem_freq = 0;
return;
}

ctdp_level->mem_freq = resp & GENMASK(7, 0);
if (is_spr_platform()) {
ctdp_level->mem_freq *= 200;
} else if (is_icx_platform()) {
if (ctdp_level->mem_freq < 7) {
ctdp_level->mem_freq = (12 - ctdp_level->mem_freq) * 133.33 * 2 * 10;
ctdp_level->mem_freq /= 10;
if (ctdp_level->mem_freq % 10 > 5)
ctdp_level->mem_freq++;
} else {
ctdp_level->mem_freq = 0;
}
} else {
ctdp_level->mem_freq = 0;
}
debug_printf(
"cpu:%d ctdp:%d CONFIG_TDP_GET_MEM_FREQ resp:%x uncore mem_freq:%d\n",
id->cpu, config_index, resp, ctdp_level->mem_freq);
}