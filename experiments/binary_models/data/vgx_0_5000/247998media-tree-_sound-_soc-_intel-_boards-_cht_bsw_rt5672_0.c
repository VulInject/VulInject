static int cht_codec_init(struct snd_soc_pcm_runtime *runtime)
{
int ret;
struct snd_soc_dai *codec_dai = runtime->codec_dai;
struct snd_soc_codec *codec = codec_dai->codec;


ret = snd_soc_dai_set_tdm_slot(codec_dai, 0xF, 0xF, 4, 24);
if (ret < 0) {
dev_err(runtime->dev, "can't set codec TDM slot %d\n", ret);
return ret;
}


rt5670_sel_asrc_clk_src(codec,
RT5670_DA_STEREO_FILTER
| RT5670_DA_MONO_L_FILTER
| RT5670_DA_MONO_R_FILTER
| RT5670_AD_STEREO_FILTER
| RT5670_AD_MONO_L_FILTER
| RT5670_AD_MONO_R_FILTER,
RT5670_CLK_SEL_I2S1_ASRC);

ret = snd_soc_card_jack_new(runtime->card, "Headset",
SND_JACK_HEADSET | SND_JACK_BTN_0 |
SND_JACK_BTN_1 | SND_JACK_BTN_2, &cht_bsw_headset,
cht_bsw_headset_pins, ARRAY_SIZE(cht_bsw_headset_pins));
if (ret)
return ret;

rt5670_set_jack_detect(codec, &cht_bsw_headset);
return 0;
}