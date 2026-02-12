void intel_wopcm_init_early(struct intel_wopcm *wopcm)
{
struct intel_gt *gt = wopcm_to_gt(wopcm);
struct drm_i915_private *i915 = gt->i915;

if (!HAS_GT_UC(i915))
return;

if (GRAPHICS_VER(i915) >= 11)
wopcm->size = GEN11_WOPCM_SIZE;
else
wopcm->size = GEN9_WOPCM_SIZE;

drm_dbg(&i915->drm, "WOPCM: %uK\n", wopcm->size / 1024);
}