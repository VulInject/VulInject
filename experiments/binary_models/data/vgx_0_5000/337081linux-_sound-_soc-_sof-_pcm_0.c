static int
sof_pcm_setup_connected_widgets(struct snd_sof_dev *sdev, struct snd_soc_pcm_runtime *rtd,
struct snd_sof_pcm *spcm, struct snd_pcm_hw_params *params,
struct snd_sof_platform_stream_params *platform_params, int dir)
{
struct snd_soc_dai *dai;
int ret, j;


for_each_rtd_cpu_dais(rtd, j, dai) {
struct snd_soc_dapm_widget_list *list;

ret = snd_soc_dapm_dai_get_connected_widgets(dai, dir, &list,
dpcm_end_walk_at_be);
if (ret < 0) {
dev_err(sdev->dev, "error: dai %s has no valid %s path\n", dai->name,
dir == SNDRV_PCM_STREAM_PLAYBACK ? "playback" : "capture");
return ret;
}

spcm->stream[dir].list = list;

ret = sof_widget_list_setup(sdev, spcm, params, platform_params, dir);
if (ret < 0) {
dev_err(sdev->dev, "error: failed widget list set up for pcm %d dir %d\n",
spcm->pcm.pcm_id, dir);
spcm->stream[dir].list = NULL;
snd_soc_dapm_dai_free_widgets(&list);
return ret;
}
}

return 0;
}