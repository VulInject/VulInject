static int dpcm_prune_paths(struct snd_soc_pcm_runtime *fe, int stream,
struct snd_soc_dapm_widget_list **list_)
{
struct snd_soc_dpcm *dpcm;
struct snd_soc_dapm_widget_list *list = *list_;
struct snd_soc_dapm_widget *widget;
int prune = 0;


list_for_each_entry(dpcm, &fe->dpcm[stream].be_clients, list_be) {
unsigned int i;


widget = dai_get_widget(dpcm->be->cpu_dai, stream);


if (widget && widget_in_list(list, widget))
continue;


for (i = 0; i < dpcm->be->num_codecs; i++) {
struct snd_soc_dai *dai = dpcm->be->codec_dais[i];
widget = dai_get_widget(dai, stream);


if (widget && widget_in_list(list, widget))
continue;
}

dev_dbg(fe->dev, "ASoC: pruning %s BE %s for %s\n",
stream ? "capture" : "playback",
dpcm->be->dai_link->name, fe->dai_link->name);
dpcm->state = SND_SOC_DPCM_LINK_STATE_FREE;
dpcm->be->dpcm[stream].runtime_update = SND_SOC_DPCM_UPDATE_BE;
prune++;
}

dev_dbg(fe->dev, "ASoC: found %d old BE paths for pruning\n", prune);
return prune;
}