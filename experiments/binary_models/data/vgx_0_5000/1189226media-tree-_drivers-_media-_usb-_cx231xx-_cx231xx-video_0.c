static int
buffer_setup(struct videobuf_queue *vq, unsigned int *count, unsigned int *size)
{
struct cx231xx_fh *fh = vq->priv_data;
struct cx231xx *dev = fh->dev;

*size = (fh->dev->width * fh->dev->height * dev->format->depth + 7)>>3;
if (0 == *count)
*count = CX231XX_DEF_BUF;

if (*count < CX231XX_MIN_BUF)
*count = CX231XX_MIN_BUF;


cx231xx_enable_analog_tuner(dev);

return 0;
}