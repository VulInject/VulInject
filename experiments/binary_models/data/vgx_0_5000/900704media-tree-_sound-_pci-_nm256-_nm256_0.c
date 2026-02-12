static int snd_nm256_pcm_prepare(struct snd_pcm_substream *substream)
{
struct nm256 *chip = snd_pcm_substream_chip(substream);
struct snd_pcm_runtime *runtime = substream->runtime;
struct nm256_stream *s = runtime->private_data;

if (snd_BUG_ON(!s))
return -ENXIO;
s->dma_size = frames_to_bytes(runtime, substream->runtime->buffer_size);
s->period_size = frames_to_bytes(runtime, substream->runtime->period_size);
s->periods = substream->runtime->periods;
s->cur_period = 0;

spin_lock_irq(&chip->reg_lock);
s->running = 0;
snd_nm256_set_format(chip, s, substream);
spin_unlock_irq(&chip->reg_lock);

return 0;
}