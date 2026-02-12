static int snd_pcsp_playback_prepare(struct snd_pcm_substream *substream)
{
struct snd_pcsp *chip = snd_pcm_substream_chip(substream);
pcsp_sync_stop(chip);
chip->playback_ptr = 0;
chip->period_ptr = 0;
chip->fmt_size =
snd_pcm_format_physical_width(substream->runtime->format) >> 3;
chip->is_signed = snd_pcm_format_signed(substream->runtime->format);
printk(KERN_INFO "PCSP: prepare called, "
"size=%zi psize=%zi f=%zi f1=%i fsize=%i\n",
snd_pcm_lib_buffer_bytes(substream),
snd_pcm_lib_period_bytes(substream),
snd_pcm_lib_buffer_bytes(substream) /
snd_pcm_lib_period_bytes(substream),
substream->runtime->periods,
chip->fmt_size);
return 0;
}