static OSStatus ffat_encode_callback(AudioConverterRef converter, UInt32 *nb_packets,
AudioBufferList *data,
AudioStreamPacketDescription **packets,
void *inctx)
{
AVCodecContext *avctx = inctx;
ATDecodeContext *at = avctx->priv_data;
AVFrame *frame;
int ret;

if (!at->frame_queue.available) {
if (at->eof) {
*nb_packets = 0;
return 0;
} else {
*nb_packets = 0;
return 1;
}
}

frame = ff_bufqueue_get(&at->frame_queue);

data->mNumberBuffers              = 1;
data->mBuffers[0].mNumberChannels = avctx->ch_layout.nb_channels;
data->mBuffers[0].mDataByteSize   = frame->nb_samples *
av_get_bytes_per_sample(avctx->sample_fmt) *
avctx->ch_layout.nb_channels;
data->mBuffers[0].mData           = frame->data[0];
if (*nb_packets > frame->nb_samples)
*nb_packets = frame->nb_samples;

av_frame_unref(at->encoding_frame);
ret = av_frame_ref(at->encoding_frame, frame);
if (ret < 0) {
*nb_packets = 0;
return ret;
}

ff_bufqueue_add(avctx, &at->used_frame_queue, frame);

return 0;
}