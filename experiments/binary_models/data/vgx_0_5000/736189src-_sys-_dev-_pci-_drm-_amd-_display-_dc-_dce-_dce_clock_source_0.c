static bool dce112_program_pix_clk(
struct clock_source *clock_source,
struct pixel_clk_params *pix_clk_params,
enum dp_link_encoding encoding,
struct pll_settings *pll_settings)
{
struct dce110_clk_src *clk_src = TO_DCE110_CLK_SRC(clock_source);
struct bp_pixel_clock_parameters bp_pc_params = {0};

if (IS_FPGA_MAXIMUS_DC(clock_source->ctx->dce_environment)) {
unsigned int inst = pix_clk_params->controller_id - CONTROLLER_ID_D0;
unsigned dp_dto_ref_100hz = 7000000;
unsigned clock_100hz = pll_settings->actual_pix_clk_100hz;


REG_WRITE(PHASE[inst], clock_100hz);
REG_WRITE(MODULO[inst], dp_dto_ref_100hz);


REG_UPDATE(PIXEL_RATE_CNTL[inst], DP_DTO0_ENABLE, 1);
return true;
}

if (clock_source->id != CLOCK_SOURCE_ID_EXTERNAL &&
!dc_is_dp_signal(pix_clk_params->signal_type) &&
clock_source->ctx->dce_version <= DCE_VERSION_11_0)
disable_spread_spectrum(clk_src);


bp_pc_params.controller_id = pix_clk_params->controller_id;
bp_pc_params.pll_id = clock_source->id;
bp_pc_params.target_pixel_clock_100hz = pll_settings->actual_pix_clk_100hz;
bp_pc_params.encoder_object_id = pix_clk_params->encoder_object_id;
bp_pc_params.signal_type = pix_clk_params->signal_type;

if (clock_source->id != CLOCK_SOURCE_ID_DP_DTO) {
bp_pc_params.flags.SET_GENLOCK_REF_DIV_SRC =
pll_settings->use_external_clk;
bp_pc_params.flags.SET_XTALIN_REF_SRC =
!pll_settings->use_external_clk;
if (pix_clk_params->flags.SUPPORT_YCBCR420) {
bp_pc_params.flags.SUPPORT_YUV_420 = 1;
}
}
if (clk_src->bios->funcs->set_pixel_clock(
clk_src->bios, &bp_pc_params) != BP_RESULT_OK)
return false;

if (clock_source->id != CLOCK_SOURCE_ID_DP_DTO)
dce112_program_pixel_clk_resync(clk_src,
pix_clk_params->signal_type,
pix_clk_params->color_depth,
pix_clk_params->flags.SUPPORT_YCBCR420);

return true;
}