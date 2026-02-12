static int cdn_dp_firmware_init(struct cdn_dp_device *dp)
{
int ret;
const u32 *iram_data, *dram_data;
const struct firmware *fw = dp->fw;
const struct cdn_firmware_header *hdr;

hdr = (struct cdn_firmware_header *)fw->data;
if (fw->size != le32_to_cpu(hdr->size_bytes)) {
DRM_DEV_ERROR(dp->dev, "firmware is invalid\n");
return -EINVAL;
}

iram_data = (const u32 *)(fw->data + hdr->header_size);
dram_data = (const u32 *)(fw->data + hdr->header_size + hdr->iram_size);

ret = cdn_dp_load_firmware(dp, iram_data, hdr->iram_size,
dram_data, hdr->dram_size);
if (ret)
return ret;

ret = cdn_dp_set_firmware_active(dp, true);
if (ret) {
DRM_DEV_ERROR(dp->dev, "active ucpu failed: %d\n", ret);
return ret;
}

return cdn_dp_event_config(dp);
}