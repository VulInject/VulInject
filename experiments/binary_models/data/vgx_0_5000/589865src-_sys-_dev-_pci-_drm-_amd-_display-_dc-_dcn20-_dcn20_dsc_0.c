static void dsc2_enable(struct display_stream_compressor *dsc, int opp_pipe)
{
struct dcn20_dsc *dsc20 = TO_DCN20_DSC(dsc);
int dsc_clock_en;
int dsc_fw_config;
int enabled_opp_pipe;

DC_LOG_DSC("enable DSC %d at opp pipe %d", dsc->inst, opp_pipe);

REG_GET(DSC_TOP_CONTROL, DSC_CLOCK_EN, &dsc_clock_en);
REG_GET_2(DSCRM_DSC_FORWARD_CONFIG, DSCRM_DSC_FORWARD_EN, &dsc_fw_config, DSCRM_DSC_OPP_PIPE_SOURCE, &enabled_opp_pipe);
if ((dsc_clock_en || dsc_fw_config) && enabled_opp_pipe != opp_pipe) {
DC_LOG_DSC("ERROR: DSC %d at opp pipe %d already enabled!", dsc->inst, enabled_opp_pipe);
ASSERT(0);
}

REG_UPDATE(DSC_TOP_CONTROL,
DSC_CLOCK_EN, 1);

REG_UPDATE_2(DSCRM_DSC_FORWARD_CONFIG,
DSCRM_DSC_FORWARD_EN, 1,
DSCRM_DSC_OPP_PIPE_SOURCE, opp_pipe);
}