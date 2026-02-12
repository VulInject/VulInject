static int init_resampler(AVCodecContext *input_codec_context,
AVCodecContext *output_codec_context,
SwrContext **resample_context)
{
int error;


error = swr_alloc_set_opts2(resample_context,
&output_codec_context->ch_layout,
output_codec_context->sample_fmt,
output_codec_context->sample_rate,
&input_codec_context->ch_layout,
input_codec_context->sample_fmt,
input_codec_context->sample_rate,
0, NULL);
if (error < 0) {
fprintf(stderr, "Could not allocate resample context\n");
return error;
}

av_assert0(output_codec_context->sample_rate == input_codec_context->sample_rate);


if ((error = swr_init(*resample_context)) < 0) {
fprintf(stderr, "Could not open resample context\n");
swr_free(resample_context);
return error;
}
return 0;
}