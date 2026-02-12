int pvr2_encoder_adjust(struct pvr2_hdw *hdw)
{
int ret;
ret = cx2341x_update(hdw,pvr2_encoder_cmd,
(hdw->enc_cur_valid ? &hdw->enc_cur_state : NULL),
&hdw->enc_ctl_state);
if (ret) {
pvr2_trace(PVR2_TRACE_ERROR_LEGS,
"Error from cx2341x module code=%d",ret);
} else {
hdw->enc_cur_state = hdw->enc_ctl_state;
hdw->enc_cur_valid = !0;
}
return ret;
}