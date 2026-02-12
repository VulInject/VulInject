static int snd_cobalt_pcm_playback_open(struct snd_pcm_substream *substream)
{
struct snd_cobalt_card *cobsc = snd_pcm_substream_chip(substream);
struct snd_pcm_runtime *runtime = substream->runtime;
struct cobalt_stream *s = cobsc->s;

runtime->hw = snd_cobalt_playback;
snd_pcm_hw_constraint_integer(runtime, SNDRV_PCM_HW_PARAM_PERIODS);
cobsc->playback_pcm_substream = substream;
runtime->private_data = s;
cobsc->alsa_playback_cnt++;
if (cobsc->alsa_playback_cnt == 1) {
int rc;

rc = vb2_thread_start(&s->q, alsa_pb_fnc, s, s->vdev.name);
if (rc) {
cobsc->alsa_playback_cnt--;
return rc;
}
}

return 0;
}