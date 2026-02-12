static ssize_t mailstream_low_compress_write(mailstream_low * s, const void * buf, size_t count) {
int zr;

compress_data * data = s->data;
data->ms->timeout = s->timeout;
z_stream * strm = data->compress_stream;

strm->next_in = (Bytef *)buf;

int compress_len = MIN((int) count, CHUNK_SIZE);
strm->avail_in = compress_len;
strm->avail_out = CHUNK_SIZE;
strm->next_out = data->output_buf;

zr = deflate(strm, Z_PARTIAL_FLUSH);
if (zr < 0) {




return -1;
}

unsigned char * p = data->output_buf;
size_t remaining = CHUNK_SIZE - strm->avail_out;
while (remaining > 0) {
ssize_t wr = data->ms->driver->mailstream_write(data->ms, p, remaining);
if (wr < 0) {
return -1;
}

p += wr;
remaining -= wr;
}


return compress_len - strm->avail_in;
return -1;
}