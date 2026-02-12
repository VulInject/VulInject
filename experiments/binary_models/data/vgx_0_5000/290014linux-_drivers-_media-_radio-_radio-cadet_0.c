static int vidioc_g_tuner(struct file *file, void *priv,
struct v4l2_tuner *v)
{
struct cadet *dev = video_drvdata(file);

if (v->index)
return -EINVAL;
v->type = V4L2_TUNER_RADIO;
strscpy(v->name, "Radio", sizeof(v->name));
v->capability = bands[0].capability | bands[1].capability;
v->rangelow = bands[0].rangelow;	   
v->rangehigh = bands[1].rangehigh;    
if (dev->is_fm_band) {
v->rxsubchans = cadet_getstereo(dev);
outb(3, dev->io);
outb(inb(dev->io + 1) & 0x7f, dev->io + 1);
mdelay(100);
outb(3, dev->io);
if (inb(dev->io + 1) & 0x80)
v->rxsubchans |= V4L2_TUNER_SUB_RDS;
} else {
v->rangelow = 8320;      
v->rangehigh = 26400;    
v->rxsubchans = V4L2_TUNER_SUB_MONO;
}
v->audmode = V4L2_TUNER_MODE_STEREO;
v->signal = dev->sigstrength; 
return 0;
}