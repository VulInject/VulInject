static int
gk104_ram_calc_data(struct gk104_ram *ram, u32 khz, struct nvkm_ram_data *data)
{
struct nvkm_subdev *subdev = &ram->base.fb->subdev;
struct nvkm_ram_data *cfg;
u32 mhz = khz / 1000;

list_for_each_entry(cfg, &ram->cfg, head) {
if (mhz >= cfg->bios.rammap_min &&
mhz <= cfg->bios.rammap_max) {
*data = *cfg;
data->freq = khz;
return 0;
}
}

nvkm_error(subdev, "ramcfg data for %dMHz not found\n", mhz);
return -EINVAL;
}