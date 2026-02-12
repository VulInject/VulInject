static int byt_cht_cx2072x_fixup(struct snd_soc_pcm_runtime *rtd,
struct snd_pcm_hw_params *params)
{
struct snd_interval *rate =
hw_param_interval(params, SNDRV_PCM_HW_PARAM_RATE);
struct snd_interval *channels =
hw_param_interval(params, SNDRV_PCM_HW_PARAM_CHANNELS);
int ret;


rate->min = rate->max = 48000;
channels->min = channels->max = 2;


params_set_format(params, SNDRV_PCM_FORMAT_S24_LE);


ret = snd_soc_dai_set_fmt(asoc_rtd_to_cpu(rtd, 0),
SND_SOC_DAIFMT_I2S     |
SND_SOC_DAIFMT_NB_NF   |
SND_SOC_DAIFMT_BP_FP);
if (ret < 0) {
dev_err(rtd->dev, "can't set format to I2S, err %d\n", ret);
return ret;
}

ret = snd_soc_dai_set_tdm_slot(asoc_rtd_to_cpu(rtd, 0), 0x3, 0x3, 2, 24);
if (ret < 0) {
dev_err(rtd->dev, "can't set I2S config, err %d\n", ret);
return ret;
}

return 0;
}