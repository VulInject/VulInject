static void tegra_hdmi_encoder_enable(struct drm_encoder *encoder)
{
struct drm_display_mode *mode = &encoder->crtc->state->adjusted_mode;
unsigned int h_sync_width, h_front_porch, h_back_porch, i, rekey;
struct tegra_output *output = encoder_to_output(encoder);
struct tegra_dc *dc = to_tegra_dc(encoder->crtc);
struct tegra_hdmi *hdmi = to_hdmi(output);
unsigned int pulse_start, div82;
int retries = 1000;
u32 value;
int err;

err = host1x_client_resume(&hdmi->client);
if (err < 0) {
dev_err(hdmi->dev, "failed to resume: %d\n", err);
return;
}

tegra_hdmi_audio_lock(hdmi);


tegra_hdmi_writel(hdmi, INT_CODEC_SCRATCH0, HDMI_NV_PDISP_INT_ENABLE);
tegra_hdmi_writel(hdmi, INT_CODEC_SCRATCH0, HDMI_NV_PDISP_INT_MASK);

hdmi->pixel_clock = mode->clock * 1000;
h_sync_width = mode->hsync_end - mode->hsync_start;
h_back_porch = mode->htotal - mode->hsync_end;
h_front_porch = mode->hsync_start - mode->hdisplay;

err = dev_pm_opp_set_rate(hdmi->dev, hdmi->pixel_clock);
if (err < 0) {
dev_err(hdmi->dev, "failed to set HDMI clock frequency: %d\n",
err);
}

DRM_DEBUG_KMS("HDMI clock rate: %lu Hz\n", clk_get_rate(hdmi->clk));


value = tegra_hdmi_readl(hdmi, HDMI_NV_PDISP_SOR_PLL0);
value &= ~SOR_PLL_PDBG;
tegra_hdmi_writel(hdmi, value, HDMI_NV_PDISP_SOR_PLL0);

usleep_range(10, 20);

value = tegra_hdmi_readl(hdmi, HDMI_NV_PDISP_SOR_PLL0);
value &= ~SOR_PLL_PWR;
tegra_hdmi_writel(hdmi, value, HDMI_NV_PDISP_SOR_PLL0);

tegra_dc_writel(dc, VSYNC_H_POSITION(1),
DC_DISP_DISP_TIMING_OPTIONS);
tegra_dc_writel(dc, DITHER_CONTROL_DISABLE | BASE_COLOR_SIZE_888,
DC_DISP_DISP_COLOR_CONTROL);


pulse_start = 1 + h_sync_width + h_back_porch - 10;

tegra_dc_writel(dc, H_PULSE2_ENABLE, DC_DISP_DISP_SIGNAL_OPTIONS0);

value = PULSE_MODE_NORMAL | PULSE_POLARITY_HIGH | PULSE_QUAL_VACTIVE |
PULSE_LAST_END_A;
tegra_dc_writel(dc, value, DC_DISP_H_PULSE2_CONTROL);

value = PULSE_START(pulse_start) | PULSE_END(pulse_start + 8);
tegra_dc_writel(dc, value, DC_DISP_H_PULSE2_POSITION_A);

value = VSYNC_WINDOW_END(0x210) | VSYNC_WINDOW_START(0x200) |
VSYNC_WINDOW_ENABLE;
tegra_hdmi_writel(hdmi, value, HDMI_NV_PDISP_HDMI_VSYNC_WINDOW);

if (dc->pipe)
value = HDMI_SRC_DISPLAYB;
else
value = HDMI_SRC_DISPLAYA;

if ((mode->hdisplay == 720) && ((mode->vdisplay == 480) ||
(mode->vdisplay == 576)))
tegra_hdmi_writel(hdmi,
value | ARM_VIDEO_RANGE_FULL,
HDMI_NV_PDISP_INPUT_CONTROL);
else
tegra_hdmi_writel(hdmi,
value | ARM_VIDEO_RANGE_LIMITED,
HDMI_NV_PDISP_INPUT_CONTROL);

div82 = clk_get_rate(hdmi->clk) / 1000000 * 4;
value = SOR_REFCLK_DIV_INT(div82 >> 2) | SOR_REFCLK_DIV_FRAC(div82);
tegra_hdmi_writel(hdmi, value, HDMI_NV_PDISP_SOR_REFCLK);

hdmi->dvi = !tegra_output_is_hdmi(output);
if (!hdmi->dvi) {

if (hdmi->format.sample_rate > 0) {
err = tegra_hdmi_setup_audio(hdmi);
if (err < 0)
hdmi->dvi = true;
}
}

if (hdmi->config->has_hda)
tegra_hdmi_write_eld(hdmi);

rekey = HDMI_REKEY_DEFAULT;
value = HDMI_CTRL_REKEY(rekey);
value |= HDMI_CTRL_MAX_AC_PACKET((h_sync_width + h_back_porch +
h_front_porch - rekey - 18) / 32);

if (!hdmi->dvi)
value |= HDMI_CTRL_ENABLE;

tegra_hdmi_writel(hdmi, value, HDMI_NV_PDISP_HDMI_CTRL);

if (!hdmi->dvi) {
tegra_hdmi_setup_avi_infoframe(hdmi, mode);
tegra_hdmi_setup_audio_infoframe(hdmi);

if (hdmi->stereo)
tegra_hdmi_setup_stereo_infoframe(hdmi);
}


for (i = 0; i < hdmi->config->num_tmds; i++) {
if (hdmi->pixel_clock <= hdmi->config->tmds[i].pclk) {
tegra_hdmi_setup_tmds(hdmi, &hdmi->config->tmds[i]);
break;
}
}

tegra_hdmi_writel(hdmi,
SOR_SEQ_PU_PC(0) |
SOR_SEQ_PU_PC_ALT(0) |
SOR_SEQ_PD_PC(8) |
SOR_SEQ_PD_PC_ALT(8),
HDMI_NV_PDISP_SOR_SEQ_CTL);

value = SOR_SEQ_INST_WAIT_TIME(1) |
SOR_SEQ_INST_WAIT_UNITS_VSYNC |
SOR_SEQ_INST_HALT |
SOR_SEQ_INST_PIN_A_LOW |
SOR_SEQ_INST_PIN_B_LOW |
SOR_SEQ_INST_DRIVE_PWM_OUT_LO;

tegra_hdmi_writel(hdmi, value, HDMI_NV_PDISP_SOR_SEQ_INST(0));
tegra_hdmi_writel(hdmi, value, HDMI_NV_PDISP_SOR_SEQ_INST(8));

value = tegra_hdmi_readl(hdmi, HDMI_NV_PDISP_SOR_CSTM);
value &= ~SOR_CSTM_ROTCLK(~0);
value |= SOR_CSTM_ROTCLK(2);
value |= SOR_CSTM_PLLDIV;
value &= ~SOR_CSTM_LVDS_ENABLE;
value &= ~SOR_CSTM_MODE_MASK;
value |= SOR_CSTM_MODE_TMDS;
tegra_hdmi_writel(hdmi, value, HDMI_NV_PDISP_SOR_CSTM);


tegra_hdmi_writel(hdmi,
SOR_PWR_NORMAL_STATE_PU |
SOR_PWR_NORMAL_START_NORMAL |
SOR_PWR_SAFE_STATE_PD |
SOR_PWR_SETTING_NEW_TRIGGER,
HDMI_NV_PDISP_SOR_PWR);
tegra_hdmi_writel(hdmi,
SOR_PWR_NORMAL_STATE_PU |
SOR_PWR_NORMAL_START_NORMAL |
SOR_PWR_SAFE_STATE_PD |
SOR_PWR_SETTING_NEW_DONE,
HDMI_NV_PDISP_SOR_PWR);

do {
BUG_ON(--retries < 0);
value = tegra_hdmi_readl(hdmi, HDMI_NV_PDISP_SOR_PWR);
} while (value & SOR_PWR_SETTING_NEW_PENDING);

value = SOR_STATE_ASY_CRCMODE_COMPLETE |
SOR_STATE_ASY_OWNER_HEAD0 |
SOR_STATE_ASY_SUBOWNER_BOTH |
SOR_STATE_ASY_PROTOCOL_SINGLE_TMDS_A |
SOR_STATE_ASY_DEPOL_POS;


if (mode->flags & DRM_MODE_FLAG_PHSYNC)
value |= SOR_STATE_ASY_HSYNCPOL_POS;

if (mode->flags & DRM_MODE_FLAG_NHSYNC)
value |= SOR_STATE_ASY_HSYNCPOL_NEG;

if (mode->flags & DRM_MODE_FLAG_PVSYNC)
value |= SOR_STATE_ASY_VSYNCPOL_POS;

if (mode->flags & DRM_MODE_FLAG_NVSYNC)
value |= SOR_STATE_ASY_VSYNCPOL_NEG;

tegra_hdmi_writel(hdmi, value, HDMI_NV_PDISP_SOR_STATE2);

value = SOR_STATE_ASY_HEAD_OPMODE_AWAKE | SOR_STATE_ASY_ORMODE_NORMAL;
tegra_hdmi_writel(hdmi, value, HDMI_NV_PDISP_SOR_STATE1);

tegra_hdmi_writel(hdmi, 0, HDMI_NV_PDISP_SOR_STATE0);
tegra_hdmi_writel(hdmi, SOR_STATE_UPDATE, HDMI_NV_PDISP_SOR_STATE0);
tegra_hdmi_writel(hdmi, value | SOR_STATE_ATTACHED,
HDMI_NV_PDISP_SOR_STATE1);
tegra_hdmi_writel(hdmi, 0, HDMI_NV_PDISP_SOR_STATE0);

value = tegra_dc_readl(dc, DC_DISP_DISP_WIN_OPTIONS);
value |= HDMI_ENABLE;
tegra_dc_writel(dc, value, DC_DISP_DISP_WIN_OPTIONS);

tegra_dc_commit(dc);

if (!hdmi->dvi) {
tegra_hdmi_enable_avi_infoframe(hdmi);
tegra_hdmi_enable_audio_infoframe(hdmi);
tegra_hdmi_enable_audio(hdmi);

if (hdmi->stereo)
tegra_hdmi_enable_stereo_infoframe(hdmi);
}



tegra_hdmi_audio_unlock(hdmi);
}