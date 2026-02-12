static void write_matrix_params(MLPEncodeContext *ctx, PutBitContext *pb)
{
DecodingParams *dp = ctx->cur_decoding_params;
MatrixParams *mp = &dp->matrix_params;

put_bits(pb, 4, mp->count);

for (unsigned int mat = 0; mat < mp->count; mat++) {
put_bits(pb, 4, mp->outch[mat]); 
put_bits(pb, 4, mp->fbits[mat]);
put_bits(pb, 1, 0             ); 

for (unsigned int channel = 0; channel < ctx->num_channels; channel++) {
int32_t coeff = mp->coeff[mat][channel];

if (coeff) {
put_bits(pb, 1, 1);

coeff >>= 14 - mp->fbits[mat];

put_sbits(pb, mp->fbits[mat] + 2, coeff);
} else {
put_bits(pb, 1, 0);
}
}
}
}