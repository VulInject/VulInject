static int acp_pdm_resume(struct device *dev)
{
struct pdm_dev_data *adata;
struct snd_pcm_runtime *runtime;
struct pdm_stream_instance *rtd;
u32 period_bytes, buffer_len;

adata = dev_get_drvdata(dev);
if (adata->capture_stream && adata->capture_stream->runtime) {
runtime = adata->capture_stream->runtime;
rtd = runtime->private_data;
period_bytes = frames_to_bytes(runtime, runtime->period_size);
buffer_len = frames_to_bytes(runtime, runtime->buffer_size);
config_acp_dma(rtd, SNDRV_PCM_STREAM_CAPTURE);
init_pdm_ring_buffer(MEM_WINDOW_START, buffer_len, period_bytes,
adata->acp_base);
}
enable_pdm_interrupts(adata->acp_base);
return 0;
}