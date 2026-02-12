static int kirkwood_dma_prepare(struct snd_pcm_substream *substream)
{
struct snd_pcm_runtime *runtime = substream->runtime;
struct kirkwood_dma_data *priv = kirkwood_priv(substream);
unsigned long size, count;


size = frames_to_bytes(runtime, runtime->buffer_size);
size = (size>>2)-1;
count = snd_pcm_lib_period_bytes(substream);

if (substream->stream == SNDRV_PCM_STREAM_PLAYBACK) {
writel(count, priv->io + KIRKWOOD_PLAY_BYTE_INT_COUNT);
writel(runtime->dma_addr, priv->io + KIRKWOOD_PLAY_BUF_ADDR);
writel(size, priv->io + KIRKWOOD_PLAY_BUF_SIZE);
} else {
writel(count, priv->io + KIRKWOOD_REC_BYTE_INT_COUNT);
writel(runtime->dma_addr, priv->io + KIRKWOOD_REC_BUF_ADDR);
writel(size, priv->io + KIRKWOOD_REC_BUF_SIZE);
}


return 0;
}