static int si4713_s_modulator(struct v4l2_subdev *sd, const struct v4l2_modulator *);

static int si4713_setup(struct si4713_device *sdev)
{
struct v4l2_frequency f;
struct v4l2_modulator vm;
int rval;


f.tuner = 0;
f.frequency = sdev->frequency ? sdev->frequency : DEFAULT_FREQUENCY;
f.frequency = si4713_to_v4l2(f.frequency);
rval = si4713_s_frequency(&sdev->sd, &f);

vm.index = 0;
if (sdev->stereo)
vm.txsubchans = V4L2_TUNER_SUB_STEREO;
else
vm.txsubchans = V4L2_TUNER_SUB_MONO;
if (sdev->rds_enabled)
vm.txsubchans |= V4L2_TUNER_SUB_RDS;
si4713_s_modulator(&sdev->sd, &vm);

return rval;
}