static int msi001_g_tuner(struct v4l2_subdev *sd, struct v4l2_tuner *v)
{
struct msi001_dev *dev = sd_to_msi001_dev(sd);
struct spi_device *spi = dev->spi;

dev_dbg(&spi->dev, "index=%d\n", v->index);

strlcpy(v->name, "Mirics MSi001", sizeof(v->name));
v->type = V4L2_TUNER_RF;
v->capability = V4L2_TUNER_CAP_1HZ | V4L2_TUNER_CAP_FREQ_BANDS;
v->rangelow =    49000000;
v->rangehigh =  960000000;

return 0;
}