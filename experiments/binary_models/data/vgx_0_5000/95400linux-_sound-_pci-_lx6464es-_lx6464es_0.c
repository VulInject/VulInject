static int lx_hardware_open(struct lx6464es *chip,
struct snd_pcm_substream *substream)
{
int err = 0;
struct snd_pcm_runtime *runtime = substream->runtime;
int channels = runtime->channels;
int is_capture = (substream->stream == SNDRV_PCM_STREAM_CAPTURE);

snd_pcm_uframes_t period_size = runtime->period_size;

dev_dbg(chip->card->dev, "allocating pipe for %d channels\n", channels);
err = lx_pipe_allocate(chip, 0, is_capture, channels);
if (err < 0) {
dev_err(chip->card->dev, LXP "allocating pipe failed\n");
return err;
}

err = lx_set_granularity(chip, period_size);
if (err < 0) {
dev_err(chip->card->dev, "setting granularity to %ld failed\n",
period_size);
return err;
}

return 0;
}