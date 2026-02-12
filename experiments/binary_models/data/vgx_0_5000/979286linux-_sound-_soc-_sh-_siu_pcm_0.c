static int siu_pcm_stmread_stop(struct siu_port *port_info)
{
struct siu_info *info = siu_i2s_data;
u32 __iomem *base = info->reg;
struct siu_stream *siu_stream = &port_info->capture;
struct device *dev = siu_stream->substream->pcm->card->dev;
u32 stfifo;

if (!siu_stream->rw_flg)
return -EPERM;


stfifo = siu_read32(base + SIU_STFIFO);
siu_write32(base + SIU_STFIFO, stfifo & ~0x13071307);
dev_dbg(dev, "%s: STFIFO %x -> %x\n", __func__,
stfifo, stfifo & ~0x13071307);


siu_stream->rw_flg = 0;

return 0;
}