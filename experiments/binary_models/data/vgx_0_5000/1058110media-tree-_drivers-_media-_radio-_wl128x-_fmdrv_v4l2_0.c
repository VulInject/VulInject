static int fm_v4l2_vidioc_g_freq(struct file *file, void *priv,
struct v4l2_frequency *freq)
{
struct fmdev *fmdev = video_drvdata(file);
int ret;

ret = fmc_get_freq(fmdev, &freq->frequency);
if (ret < 0) {
fmerr("Failed to get frequency\n");
return ret;
}


freq->frequency = (u32) freq->frequency * 16;

return 0;
}