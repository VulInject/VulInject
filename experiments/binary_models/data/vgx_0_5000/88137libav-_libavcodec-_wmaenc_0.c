static void encode_exp_vlc(WMACodecContext *s, int ch, const int *exp_param)
{
int last_exp;
const uint16_t *ptr;
float *q, *q_end;

ptr   = s->exponent_bands[s->frame_len_bits - s->block_len_bits];
q     = s->exponents[ch];
q_end = q + s->block_len;
if (s->version == 1) {
last_exp = *exp_param++;
assert(last_exp - 10 >= 0 && last_exp - 10 < 32);
put_bits(&s->pb, 5, last_exp - 10);
q += *ptr++;
} else
last_exp = 36;
while (q < q_end) {
int exp  = *exp_param++;
int code = exp - last_exp + 60;
assert(code >= 0 && code < 120);
put_bits(&s->pb, ff_aac_scalefactor_bits[code],
ff_aac_scalefactor_code[code]);

q       += *ptr++;
last_exp = exp;
}
}