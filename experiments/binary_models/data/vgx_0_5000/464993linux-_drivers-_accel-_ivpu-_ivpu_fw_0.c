static int ivpu_fw_request(struct ivpu_device *vdev)
{
static const char * const fw_names[] = {
"mtl_vpu.bin",
"intel/vpu/mtl_vpu_v0.0.bin"
};
int ret = -ENOENT;
int i;

if (ivpu_firmware)
return request_firmware(&vdev->fw->file, ivpu_firmware, vdev->drm.dev);

for (i = 0; i < ARRAY_SIZE(fw_names); i++) {
ret = firmware_request_nowarn(&vdev->fw->file, fw_names[i], vdev->drm.dev);
if (!ret)
return 0;
}

ivpu_err(vdev, "Failed to request firmware: %d\n", ret);
return ret;
}