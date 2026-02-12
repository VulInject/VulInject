static int snd_cs46xx_capture_open(struct snd_pcm_substream *substream)
{
struct snd_cs46xx *chip = snd_pcm_substream_chip(substream);

if (snd_dma_alloc_pages(SNDRV_DMA_TYPE_DEV, &chip->pci->dev,
PAGE_SIZE, &chip->capt.hw_buf) < 0)
return -ENOMEM;
chip->capt.substream = substream;
substream->runtime->hw = snd_cs46xx_capture;

if (chip->accept_valid)
substream->runtime->hw.info |= SNDRV_PCM_INFO_MMAP_VALID;

chip->active_ctrl(chip, 1);

snd_pcm_hw_constraint_list(substream->runtime, 0,
SNDRV_PCM_HW_PARAM_PERIOD_BYTES, 
&hw_constraints_period_sizes);
return 0;
}