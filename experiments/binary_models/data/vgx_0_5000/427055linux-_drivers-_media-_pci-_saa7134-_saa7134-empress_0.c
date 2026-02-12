static unsigned int empress_nr[] = {[0 ... (SAA7134_MAXBOARDS - 1)] = UNSET };

module_param_array(empress_nr, int, NULL, 0444);
MODULE_PARM_DESC(empress_nr,"ts device number");



static int start_streaming(struct vb2_queue *vq, unsigned int count)
{
struct saa7134_dmaqueue *dmaq = vq->drv_priv;
struct saa7134_dev *dev = dmaq->dev;
u32 leading_null_bytes = 0;
int err;

err = saa7134_ts_start_streaming(vq, count);
if (err)
return err;


switch (dev->board) {
case SAA7134_BOARD_BEHOLD_M6:
case SAA7134_BOARD_BEHOLD_M63:
case SAA7134_BOARD_BEHOLD_M6_EXTRA:
leading_null_bytes = 1;
break;
}
saa_call_all(dev, core, init, leading_null_bytes);

saa_writeb(SAA7134_AUDIO_MUTE_CTRL,
saa_readb(SAA7134_AUDIO_MUTE_CTRL) & ~(1 << 6));
dev->empress_started = 1;
return 0;
}