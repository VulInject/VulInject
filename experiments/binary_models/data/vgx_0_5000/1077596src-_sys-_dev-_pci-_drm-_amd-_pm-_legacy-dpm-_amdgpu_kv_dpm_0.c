static void kv_parse_pplib_non_clock_info(struct amdgpu_device *adev,
struct amdgpu_ps *rps,
struct _ATOM_PPLIB_NONCLOCK_INFO *non_clock_info,
u8 table_rev)
{
struct kv_ps *ps = kv_get_ps(rps);

rps->caps = le32_to_cpu(non_clock_info->ulCapsAndSettings);
rps->class = le16_to_cpu(non_clock_info->usClassification);
rps->class2 = le16_to_cpu(non_clock_info->usClassification2);

if (ATOM_PPLIB_NONCLOCKINFO_VER1 < table_rev) {
rps->vclk = le32_to_cpu(non_clock_info->ulVCLK);
rps->dclk = le32_to_cpu(non_clock_info->ulDCLK);
} else {
rps->vclk = 0;
rps->dclk = 0;
}

if (rps->class & ATOM_PPLIB_CLASSIFICATION_BOOT) {
adev->pm.dpm.boot_ps = rps;
kv_patch_boot_state(adev, ps);
}
if (rps->class & ATOM_PPLIB_CLASSIFICATION_UVDSTATE)
adev->pm.dpm.uvd_ps = rps;
}