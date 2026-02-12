static int omap_pcm_preallocate_dma_buffer(struct snd_pcm *pcm,
int stream)
{
struct snd_pcm_substream *substream = pcm->streams[stream].substream;
struct snd_dma_buffer *buf = &substream->dma_buffer;
size_t size = omap_pcm_hardware.buffer_bytes_max;

buf->dev.type = SNDRV_DMA_TYPE_DEV;
buf->dev.dev = pcm->card->dev;
buf->private_data = NULL;
buf->area = dma_alloc_wc(pcm->card->dev, size, &buf->addr, GFP_KERNEL);
if (!buf->area)
return -ENOMEM;

buf->bytes = size;
return 0;
}