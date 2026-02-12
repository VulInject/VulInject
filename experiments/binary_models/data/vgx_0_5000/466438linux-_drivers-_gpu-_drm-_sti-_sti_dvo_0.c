static int dvo_awg_generate_code(struct sti_dvo *dvo, u8 *ram_size, u32 *ram_code)
{
struct drm_display_mode *mode = &dvo->mode;
struct dvo_config *config = dvo->config;
struct awg_code_generation_params fw_gen_params;
struct awg_timing timing;

fw_gen_params.ram_code = ram_code;
fw_gen_params.instruction_offset = 0;

timing.total_lines = mode->vtotal;
timing.active_lines = mode->vdisplay;
timing.blanking_lines = mode->vsync_start - mode->vdisplay;
timing.trailing_lines = mode->vtotal - mode->vsync_start;
timing.total_pixels = mode->htotal;
timing.active_pixels = mode->hdisplay;
timing.blanking_pixels = mode->hsync_start - mode->hdisplay;
timing.trailing_pixels = mode->htotal - mode->hsync_start;
timing.blanking_level = BLANKING_LEVEL;

if (config->awg_fwgen_fct(&fw_gen_params, &timing)) {
DRM_ERROR("AWG firmware not properly generated\n");
return -EINVAL;
}

*ram_size = fw_gen_params.instruction_offset;

return 0;
}