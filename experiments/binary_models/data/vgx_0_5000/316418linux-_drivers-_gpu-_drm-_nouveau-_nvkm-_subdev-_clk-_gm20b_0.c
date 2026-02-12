static int
gm20b_clk_init_safe_fmax(struct gm20b_clk *clk)
{
struct nvkm_subdev *subdev = &clk->base.base.subdev;
struct nvkm_volt *volt = subdev->device->volt;
struct nvkm_pstate *pstates = clk->base.base.func->pstates;
int nr_pstates = clk->base.base.func->nr_pstates;
int vmin, id = 0;
u32 fmax = 0;
int i;


vmin = volt->vid[0].uv;
for (i = 1; i < volt->vid_nr; i++) {
if (volt->vid[i].uv <= vmin) {
vmin = volt->vid[i].uv;
id = volt->vid[i].vid;
}
}


for (i = 0; i < nr_pstates; i++)
if (pstates[i].base.voltage == id)
fmax = max(fmax,
pstates[i].base.domain[nv_clk_src_gpc]);

if (!fmax) {
nvkm_error(subdev, "failed to evaluate safe fmax\n");
return -EINVAL;
}


clk->safe_fmax_vmin = fmax * (100 - 10) / 100;
nvkm_debug(subdev, "safe fmax @ vmin = %u Khz\n", clk->safe_fmax_vmin);

return 0;
}