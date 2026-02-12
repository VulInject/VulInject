int intel_uncore_setup_mmio(struct intel_uncore *uncore, phys_addr_t phys_addr)
{
struct drm_i915_private *i915 = uncore->i915;
int mmio_size;


if (IS_DGFX(i915) || GRAPHICS_VER_FULL(i915) >= IP_VER(12, 70))
mmio_size = 4 * 1024 * 1024;
else if (GRAPHICS_VER(i915) >= 5)
mmio_size = 2 * 1024 * 1024;
else
mmio_size = 512 * 1024;
uncore->regs = ioremap(phys_addr, mmio_size);
if (uncore->regs == NULL) {
drm_err(&i915->drm, "failed to map registers\n");
return -EIO;
}

return drmm_add_action_or_reset(&i915->drm, uncore_unmap_mmio, uncore->regs);
}