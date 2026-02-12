static int cz_da7219_cap_startup(struct snd_pcm_substream *substream)
{
struct snd_pcm_runtime *runtime = substream->runtime;
struct snd_soc_pcm_runtime *rtd = asoc_substream_to_rtd(substream);
struct snd_soc_card *card = rtd->card;
struct acp_platform_info *machine = snd_soc_card_get_drvdata(card);



runtime->hw.channels_max = DUAL_CHANNEL;
snd_pcm_hw_constraint_list(runtime, 0, SNDRV_PCM_HW_PARAM_CHANNELS,
&constraints_channels);
snd_pcm_hw_constraint_list(runtime, 0, SNDRV_PCM_HW_PARAM_RATE,
&constraints_rates);

machine->cap_i2s_instance = I2S_SP_INSTANCE;
machine->capture_channel = CAP_CHANNEL1;
return da7219_clk_enable(substream);
}