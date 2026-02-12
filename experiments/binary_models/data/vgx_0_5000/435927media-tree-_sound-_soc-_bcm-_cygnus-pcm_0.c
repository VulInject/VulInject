static void disable_intr(struct snd_pcm_substream *substream)
{
struct snd_soc_pcm_runtime *rtd = substream->private_data;
struct cygnus_aio_port *aio;
u32 set_mask;

aio = cygnus_dai_get_dma_data(substream);

dev_dbg(rtd->cpu_dai->dev, "%s on port %d\n", __func__, aio->portnum);


set_mask = BIT(aio->portnum);

if (substream->stream == SNDRV_PCM_STREAM_PLAYBACK) {

writel(set_mask, aio->cygaud->audio + ESR0_MASK_SET_OFFSET);
writel(set_mask, aio->cygaud->audio + ESR1_MASK_SET_OFFSET);
writel(set_mask, aio->cygaud->audio + ESR3_MASK_SET_OFFSET);
} else {
writel(set_mask, aio->cygaud->audio + ESR2_MASK_SET_OFFSET);
writel(set_mask, aio->cygaud->audio + ESR4_MASK_SET_OFFSET);
}

}