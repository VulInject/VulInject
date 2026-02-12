static int mtk_pcm_btcvsd_hw_params(struct snd_soc_component *component,
struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
{
struct mtk_btcvsd_snd *bt = snd_soc_component_get_drvdata(component);

if (substream->stream == SNDRV_PCM_STREAM_PLAYBACK &&
params_buffer_bytes(hw_params) % bt->tx->packet_size != 0) {
dev_warn(bt->dev, "%s(), error, buffer size %d not valid\n",
__func__,
params_buffer_bytes(hw_params));
return -EINVAL;
}

substream->runtime->dma_bytes = params_buffer_bytes(hw_params);
return 0;
}