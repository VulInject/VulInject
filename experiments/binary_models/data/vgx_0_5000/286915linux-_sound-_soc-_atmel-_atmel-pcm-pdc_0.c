static int atmel_pcm_hw_params(struct snd_soc_component *component,
struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
{
struct snd_pcm_runtime *runtime = substream->runtime;
struct atmel_runtime_data *prtd = runtime->private_data;
struct snd_soc_pcm_runtime *rtd = asoc_substream_to_rtd(substream);



prtd->params = snd_soc_dai_get_dma_data(asoc_rtd_to_cpu(rtd, 0), substream);
prtd->params->dma_intr_handler = atmel_pcm_dma_irq;

prtd->dma_buffer = runtime->dma_addr;
prtd->dma_buffer_end = runtime->dma_addr + runtime->dma_bytes;
prtd->period_size = params_period_bytes(params);

pr_debug("atmel-pcm: "
"hw_params: DMA for %s initialized "
"(dma_bytes=%zu, period_size=%zu)\n",
prtd->params->name,
runtime->dma_bytes,
prtd->period_size);
return 0;
}