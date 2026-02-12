static int
ga100_engn_cxid(struct nvkm_engn *engn, bool *cgid)
{
struct nvkm_runl *runl = engn->runl;
struct nvkm_device *device = runl->fifo->engine.subdev.device;
u32 stat = nvkm_rd32(device, runl->addr + 0x200 + engn->id * 0x40);

ENGN_DEBUG(engn, "status %08x", stat);
*cgid = true;

switch ((stat & 0x0000e000) >> 13) {
case 0 : return -ENODEV;
case 1 :
case 5 : return (stat & 0x00000fff);
case 6 : return (stat & 0x0fff0000) >> 16;
case 7 :
if (nvkm_engine_chsw_load(engn->engine))
return (stat & 0x0fff0000) >> 16;
return (stat & 0x00000fff);
default:
WARN_ON(1);
break;
}

return -ENODEV;
}