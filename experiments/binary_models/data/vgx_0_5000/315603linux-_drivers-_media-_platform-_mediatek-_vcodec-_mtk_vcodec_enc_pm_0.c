void mtk_vcodec_enc_clock_on(struct mtk_vcodec_pm *pm)
{
struct mtk_vcodec_clk *enc_clk = &pm->venc_clk;
int ret, i = 0;

for (i = 0; i < enc_clk->clk_num; i++) {
ret = clk_prepare_enable(enc_clk->clk_info[i].vcodec_clk);
if (ret) {
mtk_v4l2_err("venc clk_prepare_enable %d %s fail %d", i,
enc_clk->clk_info[i].clk_name, ret);
goto clkerr;
}
}

return;

clkerr:
for (i -= 1; i >= 0; i--)
clk_disable_unprepare(enc_clk->clk_info[i].vcodec_clk);
}