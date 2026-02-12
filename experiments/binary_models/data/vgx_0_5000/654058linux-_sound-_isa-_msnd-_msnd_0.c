static int snd_msnd_capture_open(struct snd_pcm_substream *substream)
{
struct snd_pcm_runtime *runtime = substream->runtime;
struct snd_msnd *chip = snd_pcm_substream_chip(substream);

set_bit(F_AUDIO_READ_INUSE, &chip->flags);
snd_msnd_enable_irq(chip);
runtime->dma_area = (__force void *)chip->mappedbase + 0x3000;
runtime->dma_addr = chip->base + 0x3000;
runtime->dma_bytes = 0x3000;
memset(runtime->dma_area, 0, runtime->dma_bytes);
chip->capture_substream = substream;
runtime->hw = snd_msnd_capture;
return 0;
}