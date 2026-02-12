compress_buffer_output (closure, data, have, wrote)
void *closure;
const char *data;
int have;
int *wrote;
{
struct compress_buffer *cb = (struct compress_buffer *) closure;

cb->zstr.avail_in = have;
cb->zstr.next_in = (unsigned char *) data;

while (cb->zstr.avail_in > 0)
{
char buffer[BUFFER_DATA_SIZE];
int zstatus;

cb->zstr.avail_out = BUFFER_DATA_SIZE;
cb->zstr.next_out = (unsigned char *) buffer;

zstatus = deflate (&cb->zstr, Z_NO_FLUSH);
if (zstatus != Z_OK)
{
compress_error (0, zstatus, &cb->zstr, "deflate");
return EIO;
}

if (cb->zstr.avail_out != BUFFER_DATA_SIZE)
buf_output (cb->buf, buffer,
BUFFER_DATA_SIZE - cb->zstr.avail_out);
}

*wrote = have;


return buf_send_output (cb->buf);
}