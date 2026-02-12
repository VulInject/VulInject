static int pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
{
struct snd_bebob *bebob = substream->private_data;
int err = 0;

if (substream->runtime->state == SNDRV_PCM_STATE_OPEN) {
unsigned int rate = params_rate(hw_params);
unsigned int frames_per_period = params_period_size(hw_params);
unsigned int frames_per_buffer = params_buffer_size(hw_params);

mutex_lock(&bebob->mutex);
err = snd_bebob_stream_reserve_duplex(bebob, rate,
frames_per_period, frames_per_buffer);
if (err >= 0)
++bebob->substreams_counter;
mutex_unlock(&bebob->mutex);
}

return err;
}