static int img_i2s_in_dma_prepare_slave_config(struct snd_pcm_substream *st,
struct snd_pcm_hw_params *params, struct dma_slave_config *sc)
{
unsigned int i2s_channels = params_channels(params) / 2;
struct snd_soc_pcm_runtime *rtd = st->private_data;
struct snd_dmaengine_dai_dma_data *dma_data;
int ret;

dma_data = snd_soc_dai_get_dma_data(asoc_rtd_to_cpu(rtd, 0), st);

ret = snd_hwparams_to_dma_slave_config(st, params, sc);
if (ret)
return ret;

sc->src_addr = dma_data->addr;
sc->src_addr_width = dma_data->addr_width;
sc->src_maxburst = 4 * i2s_channels;

return 0;
}