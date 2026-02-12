static int mt8173_max98090_init(struct snd_soc_pcm_runtime *runtime)
{
int ret;
struct snd_soc_card *card = runtime->card;
struct snd_soc_codec *codec = runtime->codec;


ret = snd_soc_card_jack_new(card, "Headphone", SND_JACK_HEADPHONE,
&mt8173_max98090_jack,
mt8173_max98090_jack_pins,
ARRAY_SIZE(mt8173_max98090_jack_pins));
if (ret) {
dev_err(card->dev, "Can't create a new Jack %d\n", ret);
return ret;
}

return max98090_mic_detect(codec, &mt8173_max98090_jack);
}