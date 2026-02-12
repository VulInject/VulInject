static int uvc_v4l2_get_streamparm(struct uvc_streaming *stream,
struct v4l2_streamparm *parm)
{
uint32_t numerator, denominator;

if (parm->type != stream->type)
return -EINVAL;

mutex_lock(&stream->mutex);
numerator = stream->ctrl.dwFrameInterval;
mutex_unlock(&stream->mutex);

denominator = 10000000;
uvc_simplify_fraction(&numerator, &denominator, 8, 333);

memset(parm, 0, sizeof *parm);
parm->type = stream->type;

if (stream->type == V4L2_BUF_TYPE_VIDEO_CAPTURE) {
parm->parm.capture.capability = V4L2_CAP_TIMEPERFRAME;
parm->parm.capture.capturemode = 0;
parm->parm.capture.timeperframe.numerator = numerator;
parm->parm.capture.timeperframe.denominator = denominator;
parm->parm.capture.extendedmode = 0;
parm->parm.capture.readbuffers = 0;
} else {
parm->parm.output.capability = V4L2_CAP_TIMEPERFRAME;
parm->parm.output.outputmode = 0;
parm->parm.output.timeperframe.numerator = numerator;
parm->parm.output.timeperframe.denominator = denominator;
}

return 0;
}