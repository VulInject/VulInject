static void vpu_wdt_reset_func(struct work_struct *ws)
{
struct vpu_wdt *wdt = container_of(ws, struct vpu_wdt, ws);
struct mtk_vpu *vpu = container_of(wdt, struct mtk_vpu, wdt);
struct vpu_wdt_handler *handler = wdt->handler;
int index, ret;

dev_info(vpu->dev, "vpu reset\n");
ret = vpu_clock_enable(vpu);
if (ret) {
dev_err(vpu->dev, "[VPU] wdt enables clock failed %d\n", ret);
return;
}
mutex_lock(&vpu->vpu_mutex);
vpu_cfg_writel(vpu, 0x0, VPU_RESET);
vpu->fw_loaded = false;
mutex_unlock(&vpu->vpu_mutex);
vpu_clock_disable(vpu);

for (index = 0; index < VPU_RST_MAX; index++) {
if (handler[index].reset_func) {
handler[index].reset_func(handler[index].priv);
dev_dbg(vpu->dev, "wdt handler func %d\n", index);
}
}
}