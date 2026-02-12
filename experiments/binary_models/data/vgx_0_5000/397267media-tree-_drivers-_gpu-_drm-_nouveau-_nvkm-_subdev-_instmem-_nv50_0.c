static u32
nv50_instobj_rd32(struct nvkm_memory *memory, u64 offset)
{
struct nv50_instobj *iobj = nv50_instobj(memory);
struct nv50_instmem *imem = iobj->imem;
struct nvkm_device *device = imem->base.subdev.device;
u64 base = (iobj->mem->offset + offset) & 0xffffff00000ULL;
u64 addr = (iobj->mem->offset + offset) & 0x000000fffffULL;
u32 data;

if (unlikely(imem->addr != base)) {
nvkm_wr32(device, 0x001700, base >> 16);
imem->addr = base;
}
data = nvkm_rd32(device, 0x700000 + addr);
return data;
}