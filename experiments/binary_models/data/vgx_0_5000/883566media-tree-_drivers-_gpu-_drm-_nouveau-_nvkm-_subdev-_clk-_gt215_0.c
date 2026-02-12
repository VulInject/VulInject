static int
calc_host(struct gt215_clk *clk, struct nvkm_cstate *cstate)
{
int ret = 0;
u32 kHz = cstate->domain[nv_clk_src_host];
struct gt215_clk_info *info = &clk->eng[nv_clk_src_host];

if (kHz == 277000) {
info->clk = 0;
info->host_out = NVA3_HOST_277;
return 0;
}

info->host_out = NVA3_HOST_CLK;

ret = gt215_clk_info(&clk->base, 0x1d, kHz, info);
if (ret >= 0)
return 0;

return ret;
}