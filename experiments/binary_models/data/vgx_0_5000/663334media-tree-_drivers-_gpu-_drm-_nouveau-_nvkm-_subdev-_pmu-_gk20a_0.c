static int
gk20a_pmu_init(struct nvkm_pmu *pmu)
{
struct gk20a_pmu *gpmu = gk20a_pmu(pmu);
struct nvkm_subdev *subdev = &pmu->subdev;
struct nvkm_device *device = pmu->subdev.device;
struct nvkm_falcon *falcon = pmu->falcon;
int ret;

ret = nvkm_falcon_get(falcon, subdev);
if (ret) {
nvkm_error(subdev, "cannot acquire %s falcon!\n", falcon->name);
return ret;
}


nvkm_falcon_wr32(falcon, 0x504 + (BUSY_SLOT * 0x10), 0x00200001);
nvkm_falcon_wr32(falcon, 0x50c + (BUSY_SLOT * 0x10), 0x00000002);
nvkm_falcon_wr32(falcon, 0x50c + (CLK_SLOT * 0x10), 0x00000003);

nvkm_timer_alarm(device->timer, 2000000000, &gpmu->alarm);
return 0;
}