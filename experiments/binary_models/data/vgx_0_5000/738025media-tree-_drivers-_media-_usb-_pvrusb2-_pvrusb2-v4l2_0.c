static int pvr2_s_fmt_vid_cap(struct file *file, void *priv, struct v4l2_format *vf)
{
struct pvr2_v4l2_fh *fh = file->private_data;
struct pvr2_hdw *hdw = fh->channel.mc_head->hdw;
struct pvr2_ctrl *hcp, *vcp;
int ret = pvr2_try_fmt_vid_cap(file, fh, vf);

if (ret)
return ret;
hcp = pvr2_hdw_get_ctrl_by_id(hdw, PVR2_CID_HRES);
vcp = pvr2_hdw_get_ctrl_by_id(hdw, PVR2_CID_VRES);
pvr2_ctrl_set_value(hcp, vf->fmt.pix.width);
pvr2_ctrl_set_value(vcp, vf->fmt.pix.height);
return 0;
}