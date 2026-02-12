}
EXPORT_SYMBOL_GPL(snd_hdac_stream_stop);


void snd_hdac_stream_reset(struct hdac_stream *azx_dev)
{
unsigned char val;
int timeout;

snd_hdac_stream_clear(azx_dev);

snd_hdac_stream_updateb(azx_dev, SD_CTL, 0, SD_CTL_STREAM_RESET);
udelay(3);
timeout = 300;
do {
val = snd_hdac_stream_readb(azx_dev, SD_CTL) &
SD_CTL_STREAM_RESET;
if (val)
break;
} while (--timeout);
val &= ~SD_CTL_STREAM_RESET;
snd_hdac_stream_writeb(azx_dev, SD_CTL, val);
udelay(3);

timeout = 300;

do {
val = snd_hdac_stream_readb(azx_dev, SD_CTL) &
SD_CTL_STREAM_RESET;
if (!val)
break;
} while (--timeout);


if (azx_dev->posbuf)
*azx_dev->posbuf = 0;
}