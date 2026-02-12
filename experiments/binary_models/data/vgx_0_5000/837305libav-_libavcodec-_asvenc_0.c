static av_cold int encode_init(AVCodecContext *avctx)
{
ASV1Context *const a = avctx->priv_data;
int i;
const int scale = avctx->codec_id == AV_CODEC_ID_ASV1 ? 1 : 2;

FF_DISABLE_DEPRECATION_WARNINGS
avctx->coded_frame->pict_type = AV_PICTURE_TYPE_I;
avctx->coded_frame->key_frame = 1;
FF_ENABLE_DEPRECATION_WARNINGS

ff_asv_common_init(avctx);
ff_fdctdsp_init(&a->fdsp, avctx);
ff_pixblockdsp_init(&a->pdsp, avctx);

if (avctx->global_quality == 0)
avctx->global_quality = 4 * FF_QUALITY_SCALE;

a->inv_qscale = (32 * scale * FF_QUALITY_SCALE +
avctx->global_quality / 2) / avctx->global_quality;

avctx->extradata                   = av_mallocz(8);
if (!avctx->extradata)
return AVERROR(ENOMEM);
avctx->extradata_size              = 8;
((uint32_t *) avctx->extradata)[0] = av_le2ne32(a->inv_qscale);
((uint32_t *) avctx->extradata)[1] = av_le2ne32(AV_RL32("ASUS"));

for (i = 0; i < 64; i++) {
int q = 32 * scale * ff_mpeg1_default_intra_matrix[i];
a->q_intra_matrix[i] = ((a->inv_qscale << 16) + q / 2) / q;
}

return 0;
}