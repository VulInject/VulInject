static av_cold int davs2_init(AVCodecContext *avctx)
{
DAVS2Context *cad = avctx->priv_data;
int cpu_flags = av_get_cpu_flags();


cad->param.threads      = avctx->thread_count;
cad->param.info_level   = 0;
cad->param.disable_avx  = !(cpu_flags & AV_CPU_FLAG_AVX &&
cpu_flags & AV_CPU_FLAG_AVX2);
cad->decoder            = davs2_decoder_open(&cad->param);

if (!cad->decoder) {
av_log(avctx, AV_LOG_ERROR, "decoder created error.");
return AVERROR_EXTERNAL;
}

av_log(avctx, AV_LOG_VERBOSE, "decoder created. %p\n", cad->decoder);
return 0;
}