static int capture_init_format(struct capture_priv *priv)
{
struct v4l2_subdev_format fmt_src = {
.pad = priv->src_sd_pad,
.which = V4L2_SUBDEV_FORMAT_ACTIVE,
};
struct imx_media_video_dev *vdev = &priv->vdev;
int ret;

if (priv->legacy_api) {
ret = v4l2_subdev_call(priv->src_sd, pad, get_fmt, NULL,
&fmt_src);
if (ret) {
dev_err(priv->dev, "failed to get source format\n");
return ret;
}
} else {
fmt_src.format.code = MEDIA_BUS_FMT_UYVY8_2X8;
fmt_src.format.width = IMX_MEDIA_DEF_PIX_WIDTH;
fmt_src.format.height = IMX_MEDIA_DEF_PIX_HEIGHT;
}

imx_media_mbus_fmt_to_pix_fmt(&vdev->fmt, &fmt_src.format, NULL);
vdev->compose.width = fmt_src.format.width;
vdev->compose.height = fmt_src.format.height;

vdev->cc = imx_media_find_pixel_format(vdev->fmt.pixelformat,
PIXFMT_SEL_ANY);

return 0;
}