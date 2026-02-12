int hda_dsp_trace_init(struct snd_sof_dev *sdev, struct snd_dma_buffer *dmab,
struct sof_ipc_dma_trace_params_ext *dtrace_params)
{
struct sof_intel_hda_dev *hda = sdev->pdata->hw_pdata;
int ret;

hda->dtrace_stream = hda_dsp_stream_get(sdev, SNDRV_PCM_STREAM_CAPTURE,
SOF_HDA_STREAM_DMI_L1_COMPATIBLE);

if (!hda->dtrace_stream) {
dev_err(sdev->dev,
"error: no available capture stream for DMA trace\n");
return -ENODEV;
}

dtrace_params->stream_tag = hda->dtrace_stream->hstream.stream_tag;


ret = hda_dsp_trace_prepare(sdev, dmab);
if (ret < 0) {
dev_err(sdev->dev, "error: hdac trace init failed: %d\n", ret);
hda_dsp_stream_put(sdev, SNDRV_PCM_STREAM_CAPTURE,
dtrace_params->stream_tag);
hda->dtrace_stream = NULL;
dtrace_params->stream_tag = 0;
}

return ret;
}