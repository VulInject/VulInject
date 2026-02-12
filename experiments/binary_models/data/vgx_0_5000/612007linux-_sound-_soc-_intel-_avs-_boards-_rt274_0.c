static int
avs_rt274_clock_control(struct snd_soc_dapm_widget *w, struct snd_kcontrol *control, int event)
{
struct snd_soc_dapm_context *dapm = w->dapm;
struct snd_soc_card *card = dapm->card;
struct snd_soc_dai *codec_dai;
int ret;

codec_dai = snd_soc_card_get_codec_dai(card, RT274_CODEC_DAI);
if (!codec_dai)
return -EINVAL;


ret = snd_soc_dai_set_sysclk(codec_dai, RT274_SCLK_S_PLL2, AVS_RT274_FREQ_OUT,
SND_SOC_CLOCK_IN);
if (ret < 0) {
dev_err(codec_dai->dev, "set codec sysclk failed: %d\n", ret);
return ret;
}

if (SND_SOC_DAPM_EVENT_ON(event)) {
int ratio = 100;

snd_soc_dai_set_bclk_ratio(codec_dai, ratio);

ret = snd_soc_dai_set_pll(codec_dai, 0, RT274_PLL2_S_BCLK,
AVS_RT274_BE_FIXUP_RATE * ratio, AVS_RT274_FREQ_OUT);
if (ret) {
dev_err(codec_dai->dev, "failed to enable PLL2: %d\n", ret);
return ret;
}
}

return 0;
}