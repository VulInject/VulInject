static int snd_es1968_pcm_prepare(struct snd_pcm_substream *substream)
{
struct es1968 *chip = snd_pcm_substream_chip(substream);
struct snd_pcm_runtime *runtime = substream->runtime;
struct esschan *es = runtime->private_data;

es->dma_size = snd_pcm_lib_buffer_bytes(substream);
es->frag_size = snd_pcm_lib_period_bytes(substream);

es->wav_shift = 1; 
es->fmt = 0;
if (snd_pcm_format_width(runtime->format) == 16)
es->fmt |= ESS_FMT_16BIT;
if (runtime->channels > 1) {
es->fmt |= ESS_FMT_STEREO;
if (es->fmt & ESS_FMT_16BIT) 
es->wav_shift++;
}
es->bob_freq = snd_es1968_calc_bob_rate(chip, es, runtime);

switch (es->mode) {
case ESM_MODE_PLAY:
snd_es1968_playback_setup(chip, es, runtime);
break;
case ESM_MODE_CAPTURE:
snd_es1968_capture_setup(chip, es, runtime);
break;
}

return 0;
}