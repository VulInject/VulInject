int
nvkm_falcon_fw_ctor(const struct nvkm_falcon_fw_func *func, const char *name,
struct nvkm_device *device, bool dma, const void *src, u32 len,
struct nvkm_falcon *falcon, struct nvkm_falcon_fw *fw)
{
const struct nvkm_firmware_func *type = dma ? &nvkm_falcon_fw_dma : &nvkm_falcon_fw;
int ret;

fw->func = func;

ret = nvkm_firmware_ctor(type, name, device, src, len, &fw->fw);
if (ret)
return ret;

return falcon ? nvkm_falcon_fw_oneinit(fw, falcon, NULL, NULL) : 0;
}