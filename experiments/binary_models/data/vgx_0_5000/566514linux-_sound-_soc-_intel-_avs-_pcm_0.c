static int avs_dai_fe_startup(struct snd_pcm_substream *substream, struct snd_soc_dai *dai)
{
struct snd_pcm_runtime *runtime = substream->runtime;
struct avs_dma_data *data;
struct avs_dev *adev = to_avs_dev(dai->dev);
struct hdac_bus *bus = &adev->base.core;
struct hdac_ext_stream *host_stream;
int ret;

ret = avs_dai_startup(substream, dai, true, &avs_dai_fe_ops);
if (ret)
return ret;

data = snd_soc_dai_get_dma_data(dai, substream);

host_stream = snd_hdac_ext_stream_assign(bus, substream, HDAC_EXT_STREAM_TYPE_HOST);
if (!host_stream) {
kfree(data);
return -EBUSY;
}

data->host_stream = host_stream;
snd_pcm_hw_constraint_integer(runtime, SNDRV_PCM_HW_PARAM_PERIODS);

snd_pcm_hw_constraint_minmax(runtime, SNDRV_PCM_HW_PARAM_BUFFER_TIME, 20, 178000000);
snd_pcm_hw_constraint_list(runtime, 0, SNDRV_PCM_HW_PARAM_RATE, &hw_rates);
snd_pcm_set_sync(substream);

dev_dbg(dai->dev, "%s fe STARTUP tag %d str %p",
__func__, hdac_stream(host_stream)->stream_tag, substream);

return 0;
}