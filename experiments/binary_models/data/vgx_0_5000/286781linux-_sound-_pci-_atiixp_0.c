static snd_pcm_uframes_t snd_atiixp_pcm_pointer(struct snd_pcm_substream *substream)
{
struct atiixp *chip = snd_pcm_substream_chip(substream);
struct snd_pcm_runtime *runtime = substream->runtime;
struct atiixp_dma *dma = runtime->private_data;
unsigned int curptr;
int timeout = 1000;

while (timeout--) {
curptr = readl(chip->remap_addr + dma->ops->dt_cur);
if (curptr < dma->buf_addr)
continue;
curptr -= dma->buf_addr;
if (curptr >= dma->buf_bytes)
continue;
return bytes_to_frames(runtime, curptr);
}
dev_dbg(chip->card->dev, "invalid DMA pointer read 0x%x (buf=%x)\n",
readl(chip->remap_addr + dma->ops->dt_cur), dma->buf_addr);
return 0;
}