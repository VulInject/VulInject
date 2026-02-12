static int max2175_g_tuner(struct v4l2_subdev *sd, struct v4l2_tuner *vt)
{
struct max2175 *ctx = max2175_from_sd(sd);

if (vt->index > 0)
return -EINVAL;

strscpy(vt->name, "RF", sizeof(vt->name));
vt->type = V4L2_TUNER_RF;
vt->capability = V4L2_TUNER_CAP_1HZ | V4L2_TUNER_CAP_FREQ_BANDS;
vt->rangelow = ctx->bands_rf->rangelow;
vt->rangehigh = ctx->bands_rf->rangehigh;

return 0;
}