static int decode_tiledata(AVCodecContext *avctx)
{
SGAVideoContext *s = avctx->priv_data;
GetByteContext *gb = &s->gb;
GetBitContext tm;

bytestream2_seek(gb, s->tiledata_offset, SEEK_SET);
if (bytestream2_get_bytes_left(gb) < s->tiledata_size)
return AVERROR_INVALIDDATA;
init_get_bits8(&tm, gb->buffer, s->tiledata_size);

for (int n = 0; n < s->nb_tiles; n++) {
uint8_t *dst = s->tileindex_data + n * 64;

for (int yy = 0; yy < 8; yy++) {
for (int xx = 0; xx < 8; xx++)
dst[xx] = get_bits(&tm, 4);

dst += 8;
}
}

for (int i = 0; i < s->nb_tiles && s->swap; i++) {
uint8_t *dst = s->tileindex_data + i * 64;

for (int j = 8; j < 64; j += 16) {
for (int k = 0; k < 8; k += 2)
FFSWAP(uint8_t, dst[j + k], dst[j+k+1]);
}
}

return 0;
}