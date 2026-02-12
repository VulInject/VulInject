static int pcxhr_close(struct snd_pcm_substream *subs)
{
struct snd_pcxhr *chip = snd_pcm_substream_chip(subs);
struct pcxhr_mgr *mgr = chip->mgr;
struct pcxhr_stream *stream = subs->runtime->private_data;

mutex_lock(&mgr->setup_mutex);

dev_dbg(chip->card->dev, "pcxhr_close chip%d subs%d\n",
chip->chip_idx, subs->number);


if (--mgr->ref_count_rate == 0) {
mgr->sample_rate = 0;	
pcxhr_hardware_timer(mgr, 0);	
}

stream->status    = PCXHR_STREAM_STATUS_FREE;
stream->substream = NULL;

mutex_unlock(&mgr->setup_mutex);

return 0;
}