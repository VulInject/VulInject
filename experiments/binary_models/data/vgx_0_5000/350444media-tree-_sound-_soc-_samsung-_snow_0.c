static int snow_late_probe(struct snd_soc_card *card)
{
struct snd_soc_pcm_runtime *rtd;
struct snd_soc_dai *codec_dai;
struct snd_soc_dai *cpu_dai;
int ret;

rtd = snd_soc_get_pcm_runtime(card, card->dai_link[0].name);
codec_dai = rtd->codec_dai;
cpu_dai = rtd->cpu_dai;


ret = snd_soc_dai_set_sysclk(codec_dai, 0,
FIN_PLL_RATE, SND_SOC_CLOCK_IN);
if (ret < 0)
return ret;


ret = snd_soc_dai_set_sysclk(cpu_dai, SAMSUNG_I2S_RCLKSRC_0,
0, SND_SOC_CLOCK_IN);
if (ret < 0)
return ret;

return 0;
}

static struct snd_soc_card snow_snd = {
.name = "Snow-I2S",
.owner = THIS_MODULE,
.dai_link = snow_dai,
.num_links = ARRAY_SIZE(snow_dai),

.late_probe = snow_late_probe,
};