int tegra_pcm_open(struct snd_soc_component *component,
struct snd_pcm_substream *substream)
{
struct snd_soc_pcm_runtime *rtd = substream->private_data;
struct snd_dmaengine_dai_dma_data *dmap;
struct dma_chan *chan;
struct snd_soc_dai *cpu_dai = asoc_rtd_to_cpu(rtd, 0);
int ret;

if (rtd->dai_link->no_pcm)
return 0;

dmap = snd_soc_dai_get_dma_data(cpu_dai, substream);


snd_soc_set_runtime_hwparams(substream, &tegra_pcm_hardware);


ret = snd_pcm_hw_constraint_step(substream->runtime, 0,
SNDRV_PCM_HW_PARAM_PERIOD_BYTES, 0x8);
if (ret) {
dev_err(rtd->dev, "failed to set constraint %d\n", ret);
return ret;
}

chan = dma_request_slave_channel(cpu_dai->dev, dmap->chan_name);
if (!chan) {
dev_err(cpu_dai->dev,
"dmaengine request slave channel failed! (%s)\n",
dmap->chan_name);
return -ENODEV;
}

ret = snd_dmaengine_pcm_open(substream, chan);
if (ret) {
dev_err(rtd->dev,
"dmaengine pcm open failed with err %d (%s)\n", ret,
dmap->chan_name);

dma_release_channel(chan);

return ret;
}

return 0;
}