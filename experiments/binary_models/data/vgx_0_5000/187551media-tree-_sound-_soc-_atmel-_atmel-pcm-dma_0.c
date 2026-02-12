static void atmel_pcm_dma_irq(u32 ssc_sr,
struct snd_pcm_substream *substream)
{
struct snd_soc_pcm_runtime *rtd = substream->private_data;
struct atmel_pcm_dma_params *prtd;

prtd = snd_soc_dai_get_dma_data(rtd->cpu_dai, substream);

if (ssc_sr & prtd->mask->ssc_error) {
if (snd_pcm_running(substream))
pr_warn("atmel-pcm: buffer %s on %s (SSC_SR=%#x)\n",
substream->stream == SNDRV_PCM_STREAM_PLAYBACK
? "underrun" : "overrun", prtd->name,
ssc_sr);


ssc_writex(prtd->ssc->regs, SSC_CR, prtd->mask->ssc_disable);
snd_pcm_stop_xrun(substream);


ssc_readx(prtd->ssc->regs, SSC_RHR);
ssc_readx(prtd->ssc->regs, SSC_SR);
}
}