void
nv04_devinit_preinit(struct nvkm_devinit *base)
{
struct nv04_devinit *init = nv04_devinit(base);
struct nvkm_subdev *subdev = &init->base.subdev;
struct nvkm_device *device = subdev->device;


nvkm_mask(device, 0x000200, 0x00000001, 0x00000001);


if (init->owner < 0)
init->owner = nvkm_rdvgaowner(device);
nvkm_wrvgaowner(device, 0);

if (!init->base.post) {
u32 htotal = nvkm_rdvgac(device, 0, 0x06);
htotal |= (nvkm_rdvgac(device, 0, 0x07) & 0x01) << 8;
htotal |= (nvkm_rdvgac(device, 0, 0x07) & 0x20) << 4;
htotal |= (nvkm_rdvgac(device, 0, 0x25) & 0x01) << 10;
htotal |= (nvkm_rdvgac(device, 0, 0x41) & 0x01) << 11;
if (!htotal) {
nvkm_debug(subdev, "adaptor not initialised\n");
init->base.post = true;
}
}
}