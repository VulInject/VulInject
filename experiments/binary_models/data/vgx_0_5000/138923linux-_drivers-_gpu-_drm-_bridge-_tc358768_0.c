static void tc358768_bridge_pre_enable(struct drm_bridge *bridge)
{
struct tc358768_priv *priv = bridge_to_tc358768(bridge);
struct mipi_dsi_device *dsi_dev = priv->output.dev;
unsigned long mode_flags = dsi_dev->mode_flags;
u32 val, val2, lptxcnt, hact, data_type;
const struct drm_display_mode *mode;
u32 dsibclk_nsk, dsiclk_nsk, ui_nsk, phy_delay_nsk;
u32 dsiclk, dsibclk, video_start;
const u32 internal_delay = 40;
int ret, i;

if (mode_flags & MIPI_DSI_CLOCK_NON_CONTINUOUS) {
dev_warn_once(priv->dev, "Non-continuous mode unimplemented, falling back to continuous\n");
mode_flags &= ~MIPI_DSI_CLOCK_NON_CONTINUOUS;
}

tc358768_hw_enable(priv);

ret = tc358768_sw_reset(priv);
if (ret) {
dev_err(priv->dev, "Software reset failed: %d\n", ret);
tc358768_hw_disable(priv);
return;
}

mode = &bridge->encoder->crtc->state->adjusted_mode;
ret = tc358768_setup_pll(priv, mode);
if (ret) {
dev_err(priv->dev, "PLL setup failed: %d\n", ret);
tc358768_hw_disable(priv);
return;
}

dsiclk = priv->dsiclk;
dsibclk = dsiclk / 4;


val = BIT(2) | BIT(1) | BIT(0); 
switch (dsi_dev->format) {
case MIPI_DSI_FMT_RGB888:
val |= (0x3 << 4);
hact = mode->hdisplay * 3;
video_start = (mode->htotal - mode->hsync_start) * 3;
data_type = MIPI_DSI_PACKED_PIXEL_STREAM_24;
break;
case MIPI_DSI_FMT_RGB666:
val |= (0x4 << 4);
hact = mode->hdisplay * 3;
video_start = (mode->htotal - mode->hsync_start) * 3;
data_type = MIPI_DSI_PACKED_PIXEL_STREAM_18;
break;

case MIPI_DSI_FMT_RGB666_PACKED:
val |= (0x4 << 4) | BIT(3);
hact = mode->hdisplay * 18 / 8;
video_start = (mode->htotal - mode->hsync_start) * 18 / 8;
data_type = MIPI_DSI_PIXEL_STREAM_3BYTE_18;
break;

case MIPI_DSI_FMT_RGB565:
val |= (0x5 << 4);
hact = mode->hdisplay * 2;
video_start = (mode->htotal - mode->hsync_start) * 2;
data_type = MIPI_DSI_PACKED_PIXEL_STREAM_16;
break;
default:
dev_err(priv->dev, "Invalid data format (%u)\n",
dsi_dev->format);
tc358768_hw_disable(priv);
return;
}


video_start = max(video_start, internal_delay + 1) - internal_delay;
tc358768_write(priv, TC358768_VSDLY, video_start);

tc358768_write(priv, TC358768_DATAFMT, val);
tc358768_write(priv, TC358768_DSITX_DT, data_type);


tc358768_write(priv, TC358768_CLW_CNTRL, 0x0000);

for (i = 0; i < dsi_dev->lanes; i++)
tc358768_write(priv, TC358768_D0W_CNTRL + i * 4, 0x0000);


dsibclk_nsk = (u32)div_u64((u64)1000000000 * TC358768_PRECISION,
dsibclk);
dsiclk_nsk = (u32)div_u64((u64)1000000000 * TC358768_PRECISION, dsiclk);
ui_nsk = dsiclk_nsk / 2;
phy_delay_nsk = dsibclk_nsk + 2 * dsiclk_nsk;
dev_dbg(priv->dev, "dsiclk_nsk: %u\n", dsiclk_nsk);
dev_dbg(priv->dev, "ui_nsk: %u\n", ui_nsk);
dev_dbg(priv->dev, "dsibclk_nsk: %u\n", dsibclk_nsk);
dev_dbg(priv->dev, "phy_delay_nsk: %u\n", phy_delay_nsk);


val = tc358768_ns_to_cnt(100 * 1000, dsibclk_nsk) - 1;
dev_dbg(priv->dev, "LINEINITCNT: 0x%x\n", val);
tc358768_write(priv, TC358768_LINEINITCNT, val);


val = tc358768_ns_to_cnt(50, dsibclk_nsk) - 1;
lptxcnt = val;
dev_dbg(priv->dev, "LPTXTIMECNT: 0x%x\n", val);
tc358768_write(priv, TC358768_LPTXTIMECNT, val);


val = tc358768_ns_to_cnt(65, dsibclk_nsk) - 1;

val2 = tc358768_ns_to_cnt(300 + tc358768_to_ns(3 * ui_nsk),
dsibclk_nsk);
val |= (val2 - tc358768_to_ns(phy_delay_nsk - dsibclk_nsk)) << 8;
dev_dbg(priv->dev, "TCLK_HEADERCNT: 0x%x\n", val);
tc358768_write(priv, TC358768_TCLK_HEADERCNT, val);


val = 60 + tc358768_to_ns(3 * ui_nsk);
val = tc358768_ns_to_cnt(val, dsibclk_nsk) - 5;
dev_dbg(priv->dev, "TCLK_TRAILCNT: 0x%x\n", val);
tc358768_write(priv, TC358768_TCLK_TRAILCNT, val);


val = 50 + tc358768_to_ns(4 * ui_nsk);
val = tc358768_ns_to_cnt(val, dsibclk_nsk) - 1;

val2 = tc358768_ns_to_cnt(145 - tc358768_to_ns(ui_nsk), dsibclk_nsk);
val |= (val2 - tc358768_to_ns(phy_delay_nsk)) << 8;
dev_dbg(priv->dev, "THS_HEADERCNT: 0x%x\n", val);
tc358768_write(priv, TC358768_THS_HEADERCNT, val);


val = tc358768_ns_to_cnt(1020000, dsibclk_nsk);
val = val / (lptxcnt + 1) - 1;
dev_dbg(priv->dev, "TWAKEUP: 0x%x\n", val);
tc358768_write(priv, TC358768_TWAKEUP, val);


val = tc358768_ns_to_cnt(60 + tc358768_to_ns(52 * ui_nsk),
dsibclk_nsk) - 3;
dev_dbg(priv->dev, "TCLK_POSTCNT: 0x%x\n", val);
tc358768_write(priv, TC358768_TCLK_POSTCNT, val);


val = tc358768_ns_to_cnt(60 + tc358768_to_ns(15 * ui_nsk),
dsibclk_nsk) - 5;
dev_dbg(priv->dev, "THS_TRAILCNT: 0x%x\n", val);
tc358768_write(priv, TC358768_THS_TRAILCNT, val);

val = BIT(0);
for (i = 0; i < dsi_dev->lanes; i++)
val |= BIT(i + 1);
tc358768_write(priv, TC358768_HSTXVREGEN, val);

if (!(mode_flags & MIPI_DSI_CLOCK_NON_CONTINUOUS))
tc358768_write(priv, TC358768_TXOPTIONCNTRL, 0x1);


val = tc358768_to_ns((lptxcnt + 1) * dsibclk_nsk * 4);
val = tc358768_ns_to_cnt(val, dsibclk_nsk) - 1;
val2 = tc358768_ns_to_cnt(tc358768_to_ns((lptxcnt + 1) * dsibclk_nsk),
dsibclk_nsk) - 2;
val = val << 16 | val2;
dev_dbg(priv->dev, "BTACNTRL1: 0x%x\n", val);
tc358768_write(priv, TC358768_BTACNTRL1, val);


tc358768_write(priv, TC358768_STARTCNTRL, 1);

if (dsi_dev->mode_flags & MIPI_DSI_MODE_VIDEO_SYNC_PULSE) {

tc358768_write(priv, TC358768_DSI_EVENT, 0);


tc358768_write(priv, TC358768_DSI_VACT, mode->vdisplay);


tc358768_write(priv, TC358768_DSI_VSW,
mode->vsync_end - mode->vsync_start);

tc358768_write(priv, TC358768_DSI_VBPR,
mode->vtotal - mode->vsync_end);


val = (u32)div_u64((mode->hsync_end - mode->hsync_start) *
((u64)priv->dsiclk / 4) * priv->dsi_lanes,
mode->clock * 1000);
tc358768_write(priv, TC358768_DSI_HSW, val);


val = (u32)div_u64((mode->htotal - mode->hsync_end) *
((u64)priv->dsiclk / 4) * priv->dsi_lanes,
mode->clock * 1000);
tc358768_write(priv, TC358768_DSI_HBPR, val);
} else {

tc358768_write(priv, TC358768_DSI_EVENT, 1);


tc358768_write(priv, TC358768_DSI_VACT, mode->vdisplay);


tc358768_write(priv, TC358768_DSI_VSW,
mode->vtotal - mode->vsync_start);

tc358768_write(priv, TC358768_DSI_VBPR, 0);


val = (u32)div_u64((mode->htotal - mode->hsync_start) *
((u64)priv->dsiclk / 4) * priv->dsi_lanes,
mode->clock * 1000);
tc358768_write(priv, TC358768_DSI_HSW, val);


tc358768_write(priv, TC358768_DSI_HBPR, 0);
}


tc358768_write(priv, TC358768_DSI_HACT, hact);


if (!(mode->flags & DRM_MODE_FLAG_NVSYNC))
tc358768_update_bits(priv, TC358768_CONFCTL, BIT(5), BIT(5));

if (mode->flags & DRM_MODE_FLAG_PHSYNC)
tc358768_update_bits(priv, TC358768_PP_MISC, BIT(0), BIT(0));


tc358768_write(priv, TC358768_DSI_START, 0x1);


val = TC358768_DSI_CONFW_MODE_CLR | TC358768_DSI_CONFW_ADDR_DSI_CONTROL;
val |= TC358768_DSI_CONTROL_TXMD | TC358768_DSI_CONTROL_HSCKMD |
0x3 << 1 | TC358768_DSI_CONTROL_EOTDIS;
tc358768_write(priv, TC358768_DSI_CONFW, val);

val = TC358768_DSI_CONFW_MODE_SET | TC358768_DSI_CONFW_ADDR_DSI_CONTROL;
val |= (dsi_dev->lanes - 1) << 1;

if (!(dsi_dev->mode_flags & MIPI_DSI_MODE_LPM))
val |= TC358768_DSI_CONTROL_TXMD;

if (!(mode_flags & MIPI_DSI_CLOCK_NON_CONTINUOUS))
val |= TC358768_DSI_CONTROL_HSCKMD;

if (dsi_dev->mode_flags & MIPI_DSI_MODE_NO_EOT_PACKET)
val |= TC358768_DSI_CONTROL_EOTDIS;

tc358768_write(priv, TC358768_DSI_CONFW, val);

val = TC358768_DSI_CONFW_MODE_CLR | TC358768_DSI_CONFW_ADDR_DSI_CONTROL;
val |= TC358768_DSI_CONTROL_DIS_MODE; 
tc358768_write(priv, TC358768_DSI_CONFW, val);

ret = tc358768_clear_error(priv);
if (ret) {
dev_err(priv->dev, "Bridge pre_enable failed: %d\n", ret);
tc358768_bridge_disable(bridge);
tc358768_bridge_post_disable(bridge);
}
}