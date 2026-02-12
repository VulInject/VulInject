static int __intel_uc_reset_hw(struct intel_uc *uc)
{
struct intel_gt *gt = uc_to_gt(uc);
int ret;
u32 guc_status;

ret = i915_inject_probe_error(gt->i915, -ENXIO);
if (ret)
return ret;

ret = intel_reset_guc(gt);
if (ret) {
gt_err(gt, "Failed to reset GuC, ret = %d\n", ret);
return ret;
}

guc_status = intel_uncore_read(gt->uncore, GUC_STATUS);
gt_WARN(gt, !(guc_status & GS_MIA_IN_RESET),
"GuC status: 0x%x, MIA core expected to be in reset\n",
guc_status);

return ret;
}