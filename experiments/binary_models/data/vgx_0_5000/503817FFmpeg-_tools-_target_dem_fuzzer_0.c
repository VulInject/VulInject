static int io_read(void *opaque, uint8_t *buf, int buf_size)
{
IOContext *c = opaque;
int size = FFMIN(buf_size, c->fuzz_size);

if (!c->fuzz_size) {
c->filesize = FFMIN(c->pos, c->filesize);
return AVERROR_EOF;
}
if (c->pos > INT64_MAX - size)
return AVERROR(EIO);

memcpy(buf, c->fuzz, size);
c->fuzz      += size;
c->fuzz_size -= size;
c->pos       += size;
c->filesize   = FFMAX(c->filesize, c->pos);

return size;
}