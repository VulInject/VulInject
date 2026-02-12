static int cygnus_pcm_prepare(struct snd_soc_component *component,
struct snd_pcm_substream *substream)
{
struct snd_soc_pcm_runtime *rtd = asoc_substream_to_rtd(substream);
struct snd_pcm_runtime *runtime = substream->runtime;
struct cygnus_aio_port *aio;
unsigned long bufsize, periodsize;
bool is_play;
u32 start;
struct ringbuf_regs *p_rbuf = NULL;

aio = cygnus_dai_get_dma_data(substream);
dev_dbg(asoc_rtd_to_cpu(rtd, 0)->dev, "%s port %d\n", __func__, aio->portnum);

bufsize = snd_pcm_lib_buffer_bytes(substream);
periodsize = snd_pcm_lib_period_bytes(substream);

dev_dbg(asoc_rtd_to_cpu(rtd, 0)->dev, "%s (buf_size %lu) (period_size %lu)\n",
__func__, bufsize, periodsize);

configure_ringbuf_regs(substream);

p_rbuf = get_ringbuf(substream);

start = runtime->dma_addr;

is_play = (substream->stream == SNDRV_PCM_STREAM_PLAYBACK) ? 1 : 0;

ringbuf_set_initial(aio->cygaud->audio, p_rbuf, is_play, start,
periodsize, bufsize);

return 0;
}