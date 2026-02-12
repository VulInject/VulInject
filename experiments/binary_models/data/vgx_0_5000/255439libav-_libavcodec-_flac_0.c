void ff_flac_parse_streaminfo(AVCodecContext *avctx, struct FLACStreaminfo *s,
const uint8_t *buffer)
{
BitstreamContext bc;
bitstream_init8(&bc, buffer, FLAC_STREAMINFO_SIZE);

bitstream_skip(&bc, 16); 
s->max_blocksize = bitstream_read(&bc, 16);
if (s->max_blocksize < FLAC_MIN_BLOCKSIZE) {
av_log(avctx, AV_LOG_WARNING, "invalid max blocksize: %d\n",
s->max_blocksize);
s->max_blocksize = 16;
}

bitstream_skip(&bc, 24); 
s->max_framesize = bitstream_read(&bc, 24);
s->samplerate    = bitstream_read(&bc, 20);
s->channels      = bitstream_read(&bc, 3) + 1;
s->bps           = bitstream_read(&bc, 5) + 1;

avctx->channels = s->channels;
avctx->sample_rate = s->samplerate;
avctx->bits_per_raw_sample = s->bps;

if (!avctx->channel_layout ||
av_get_channel_layout_nb_channels(avctx->channel_layout) != avctx->channels)
ff_flac_set_channel_layout(avctx);

s->samples  = bitstream_read(&bc, 32) << 4;
s->samples |= bitstream_read(&bc, 4);

bitstream_skip(&bc, 64); 
bitstream_skip(&bc, 64); 
}