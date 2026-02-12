static int force_nonpriv_write(struct intel_vgpu *vgpu,
unsigned int offset, void *p_data, unsigned int bytes)
{
u32 reg_nonpriv = (*(u32 *)p_data) & REG_GENMASK(25, 2);
const struct intel_engine_cs *engine =
intel_gvt_render_mmio_to_engine(vgpu->gvt, offset);

if (bytes != 4 || !IS_ALIGNED(offset, bytes) || !engine) {
gvt_err("vgpu(%d) Invalid FORCE_NONPRIV offset %x(%dB)\n",
vgpu->id, offset, bytes);
return -EINVAL;
}

if (!in_whitelist(reg_nonpriv) &&
reg_nonpriv != i915_mmio_reg_offset(RING_NOPID(engine->mmio_base))) {
gvt_err("vgpu(%d) Invalid FORCE_NONPRIV write %x at offset %x\n",
vgpu->id, reg_nonpriv, offset);
} else
intel_vgpu_default_mmio_write(vgpu, offset, p_data, bytes);

return 0;
}