static u32 intel_vgpu_get_stride(struct intel_vgpu *vgpu, int pipe,
u32 tiled, int stride_mask, int bpp)
{
struct drm_i915_private *dev_priv = vgpu->gvt->gt->i915;

u32 stride_reg = vgpu_vreg_t(vgpu, DSPSTRIDE(pipe)) & stride_mask;
u32 stride = stride_reg;

if (GRAPHICS_VER(dev_priv) >= 9) {
switch (tiled) {
case PLANE_CTL_TILED_LINEAR:
stride = stride_reg * 64;
break;
case PLANE_CTL_TILED_X:
stride = stride_reg * 512;
break;
case PLANE_CTL_TILED_Y:
stride = stride_reg * 128;
break;
case PLANE_CTL_TILED_YF:
if (bpp == 8)
stride = stride_reg * 64;
else if (bpp == 16 || bpp == 32 || bpp == 64)
stride = stride_reg * 128;
else
gvt_dbg_core("skl: unsupported bpp:%d\n", bpp);
break;
default:
gvt_dbg_core("skl: unsupported tile format:%x\n",
tiled);
}
}

return stride;
}