static int sd_init_controls(struct gspca_dev *gspca_dev)
{
struct v4l2_ctrl_handler *hdl = &gspca_dev->ctrl_handler;
struct sd *sd = (struct sd *) gspca_dev;

gspca_dev->vdev.ctrl_handler = hdl;
v4l2_ctrl_handler_init(hdl, 2);
sd->exposure = v4l2_ctrl_new_std(hdl, &sd_ctrl_ops,
V4L2_CID_EXPOSURE, 1, 0xfff, 1, 0x356);
sd->gain = v4l2_ctrl_new_std(hdl, &sd_ctrl_ops,
V4L2_CID_GAIN, 1, 255, 1, 0x8d);

if (hdl->error) {
pr_err("Could not initialize controls\n");
return hdl->error;
}
v4l2_ctrl_cluster(2, &sd->exposure);
return 0;
}