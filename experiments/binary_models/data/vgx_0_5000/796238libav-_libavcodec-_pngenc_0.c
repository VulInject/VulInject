static int png_write_row(PNGEncContext *s, const uint8_t *data, int size)
{
int ret;

s->zstream.avail_in = size;
s->zstream.next_in  = data;
while (s->zstream.avail_in > 0) {
ret = deflate(&s->zstream, Z_NO_FLUSH);
if (ret != Z_OK)
return -1;
if (s->zstream.avail_out == 0) {
if (s->bytestream_end - s->bytestream > IOBUF_SIZE + 100)
png_write_chunk(&s->bytestream,
MKTAG('I', 'D', 'A', 'T'), s->buf, IOBUF_SIZE);
s->zstream.avail_out = IOBUF_SIZE;
s->zstream.next_out  = s->buf;
}
}
return 0;
}