static int expand_rle_row8(SgiState *s, uint8_t *out_buf,
int len, int pixelstride)
{
unsigned char pixel, count;
unsigned char *orig = out_buf;
uint8_t *out_end = out_buf + len;

while (out_buf < out_end) {
if (bytestream2_get_bytes_left(&s->g) < 1)
return AVERROR_INVALIDDATA;
pixel = bytestream2_get_byteu(&s->g);
if (!(count = (pixel & 0x7f))) {
break;
}


if (pixelstride * (count - 1) >= len) {
av_log(s->avctx, AV_LOG_ERROR, "Invalid pixel count.\n");
return AVERROR_INVALIDDATA;
}

if (pixel & 0x80) {
while (count--) {
*out_buf = bytestream2_get_byte(&s->g);
out_buf += pixelstride;
}
} else {
pixel = bytestream2_get_byte(&s->g);

while (count--) {
*out_buf = pixel;
out_buf += pixelstride;
}
}
}
return (out_buf - orig) / pixelstride;
}