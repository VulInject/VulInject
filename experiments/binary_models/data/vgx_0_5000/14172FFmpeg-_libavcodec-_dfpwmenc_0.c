static int dfpwm_enc_frame(struct AVCodecContext *ctx, struct AVPacket *packet,
const struct AVFrame *frame, int *got_packet)
{
DFPWMState *state = ctx->priv_data;
int size = frame->nb_samples * frame->ch_layout.nb_channels / 8 + (frame->nb_samples % 8 > 0 ? 1 : 0);
int ret = ff_get_encode_buffer(ctx, packet, size, 0);

if (ret) {
*got_packet = 0;
return ret;
}

au_compress(state, size, packet->data, frame->data[0]);

*got_packet = 1;
return 0;
}