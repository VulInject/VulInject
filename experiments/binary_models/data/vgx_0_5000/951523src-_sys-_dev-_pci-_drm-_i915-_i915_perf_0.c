static u32 *save_restore_register(struct i915_perf_stream *stream, u32 *cs,
bool save, i915_reg_t reg, u32 offset,
u32 dword_count)
{
u32 cmd;
u32 d;

cmd = save ? MI_STORE_REGISTER_MEM : MI_LOAD_REGISTER_MEM;
cmd |= MI_SRM_LRM_GLOBAL_GTT;
if (GRAPHICS_VER(stream->perf->i915) >= 8)
cmd++;

for (d = 0; d < dword_count; d++) {
*cs++ = cmd;
*cs++ = i915_mmio_reg_offset(reg) + 4 * d;
*cs++ = intel_gt_scratch_offset(stream->engine->gt,
offset) + 4 * d;
*cs++ = 0;
}

return cs;
}