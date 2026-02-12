static int emu8k_pcm_open(struct snd_pcm_substream *subs)
{
struct snd_emu8000 *emu = snd_pcm_substream_chip(subs);
struct snd_emu8k_pcm *rec;
struct snd_pcm_runtime *runtime = subs->runtime;

rec = kzalloc(sizeof(*rec), GFP_KERNEL);
if (! rec)
return -ENOMEM;

rec->emu = emu;
rec->substream = subs;
runtime->private_data = rec;

spin_lock_init(&rec->timer_lock);
timer_setup(&rec->timer, emu8k_pcm_timer_func, 0);

runtime->hw = emu8k_pcm_hw;
runtime->hw.buffer_bytes_max = emu->mem_size - LOOP_BLANK_SIZE * 3;
runtime->hw.period_bytes_max = runtime->hw.buffer_bytes_max / 2;


snd_pcm_hw_constraint_minmax(runtime, SNDRV_PCM_HW_PARAM_PERIOD_TIME,
DIV_ROUND_UP(1000000, HZ), UINT_MAX);

return 0;
}