int snd_compr_malloc_pages(struct snd_compr_stream *stream, size_t size)
{
struct snd_dma_buffer *dmab;
int ret;

if (snd_BUG_ON(!(stream) || !(stream)->runtime))
return -EINVAL;
dmab = kzalloc(sizeof(*dmab), GFP_KERNEL);
if (!dmab)
return -ENOMEM;
dmab->dev = stream->dma_buffer.dev;
ret = snd_dma_alloc_pages(dmab->dev.type, dmab->dev.dev, size, dmab);
if (ret < 0) {
kfree(dmab);
return ret;
}

snd_compr_set_runtime_buffer(stream, dmab);
stream->runtime->dma_bytes = size;
return 1;
}