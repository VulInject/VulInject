static int vpfe_s_std(struct file *file, void *priv, v4l2_std_id std_id)
{
struct vpfe_device *vpfe = video_drvdata(file);
struct vpfe_subdev_info *sdinfo;
int ret;

sdinfo = vpfe->current_subdev;
if (!(sdinfo->inputs[0].capabilities & V4L2_IN_CAP_STD))
return -ENODATA;


if (vpfe_standards[vpfe->std_index].std_id == std_id)
return 0;


if (vb2_is_busy(&vpfe->buffer_queue)) {
vpfe_err(vpfe, "%s device busy\n", __func__);
ret = -EBUSY;
return ret;
}

ret = v4l2_device_call_until_err(&vpfe->v4l2_dev, sdinfo->grp_id,
video, s_std, std_id);
if (ret < 0) {
vpfe_err(vpfe, "Failed to set standard\n");
return ret;
}
ret = vpfe_config_image_format(vpfe, std_id);

return ret;
}