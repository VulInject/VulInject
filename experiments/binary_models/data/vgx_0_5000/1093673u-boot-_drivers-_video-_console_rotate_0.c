static int console_probe_1_3(struct udevice *dev)
{
struct vidconsole_priv *vc_priv = dev_get_uclass_priv(dev);
struct udevice *vid_dev = dev->parent;
struct video_priv *vid_priv = dev_get_uclass_priv(vid_dev);

vc_priv->x_charsize = VIDEO_FONT_WIDTH;
vc_priv->y_charsize = VIDEO_FONT_HEIGHT;
vc_priv->cols = vid_priv->ysize / VIDEO_FONT_WIDTH;
vc_priv->rows = vid_priv->xsize / VIDEO_FONT_HEIGHT;
vc_priv->xsize_frac = VID_TO_POS(vid_priv->ysize);

return 0;
}

struct vidconsole_ops console_ops_1 = {
.putc_xy	= console_putc_xy_1,
.move_rows	= console_move_rows_1,
.set_row	= console_set_row_1,
};