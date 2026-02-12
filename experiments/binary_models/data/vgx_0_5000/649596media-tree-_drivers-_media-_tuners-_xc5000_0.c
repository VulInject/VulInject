static int xc_set_tv_standard(struct xc5000_priv *priv,
u16 video_mode, u16 audio_mode, u8 radio_mode)
{
int ret;
dprintk(1, "%s(0x%04x,0x%04x)\n", __func__, video_mode, audio_mode);
if (radio_mode) {
dprintk(1, "%s() Standard = %s\n",
__func__,
xc5000_standard[radio_mode].name);
} else {
dprintk(1, "%s() Standard = %s\n",
__func__,
xc5000_standard[priv->video_standard].name);
}

ret = xc_write_reg(priv, XREG_VIDEO_MODE, video_mode);
if (ret == 0)
ret = xc_write_reg(priv, XREG_AUDIO_MODE, audio_mode);

return ret;
}