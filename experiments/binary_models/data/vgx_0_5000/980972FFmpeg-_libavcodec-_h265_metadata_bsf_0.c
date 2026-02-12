static void h265_metadata_update_level(AVBSFContext *bsf,
uint8_t *level_idc)
{
H265MetadataContext *ctx = bsf->priv_data;

if (ctx->level != LEVEL_UNSET) {
if (ctx->level == LEVEL_AUTO) {
if (ctx->level_guess) {
*level_idc = ctx->level_guess;
} else {
if (!ctx->level_warned) {
av_log(bsf, AV_LOG_WARNING, "Unable to determine level "
"of stream: using level 8.5.\n");
ctx->level_warned = 1;
}
*level_idc = 255;
}
} else {
*level_idc = ctx->level;
}
}
}