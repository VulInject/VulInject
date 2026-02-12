static void trinity_parse_pplib_non_clock_info(struct radeon_device *rdev,
struct radeon_ps *rps,
struct _ATOM_PPLIB_NONCLOCK_INFO *non_clock_info,
u8 table_rev)
{
struct trinity_ps *ps = trinity_get_ps(rps);

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
rdev->pm.dpm.boot_ps = rps;
trinity_patch_boot_state(rdev, ps);
}
if (rps->class & ATOM_PPLIB_CLASSIFICATION_UVDSTATE)
rdev->pm.dpm.uvd_ps = rps;
}