int sti_uniperiph_dai_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
{
struct sti_uniperiph_data *priv = snd_soc_dai_get_drvdata(dai);
struct uniperif *uni = priv->dai_data.uni;
struct snd_dmaengine_dai_dma_data *dma_data;
int transfer_size;

if (uni->type == SND_ST_UNIPERIF_TYPE_TDM)

transfer_size = snd_soc_params_to_frame_size(params) / 32;
else
transfer_size = params_channels(params) * UNIPERIF_FIFO_FRAMES;

dma_data = snd_soc_dai_get_dma_data(dai, substream);
dma_data->maxburst = transfer_size;

return 0;
}