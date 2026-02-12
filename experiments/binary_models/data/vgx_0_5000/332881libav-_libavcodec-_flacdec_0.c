static int decode_subframe_lpc(FLACContext *s, int32_t *decoded, int pred_order,
int bps)
{
int i, ret;
int coeff_prec, qlevel;
int coeffs[32];


for (i = 0; i < pred_order; i++) {
decoded[i] = bitstream_read_signed(&s->bc, bps);
}

coeff_prec = bitstream_read(&s->bc, 4) + 1;
if (coeff_prec == 16) {
av_log(s->avctx, AV_LOG_ERROR, "invalid coeff precision\n");
return AVERROR_INVALIDDATA;
}
qlevel = bitstream_read_signed(&s->bc, 5);
if (qlevel < 0) {
av_log(s->avctx, AV_LOG_ERROR, "qlevel %d not supported, maybe buggy stream\n",
qlevel);
return AVERROR_INVALIDDATA;
}

for (i = 0; i < pred_order; i++) {
coeffs[pred_order - i - 1] = bitstream_read_signed(&s->bc, coeff_prec);
}

if ((ret = decode_residuals(s, decoded, pred_order)) < 0)
return ret;

s->dsp.lpc(decoded, coeffs, pred_order, qlevel, s->blocksize);

return 0;
}