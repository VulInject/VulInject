static ssize_t mailstream_low_compress_read(mailstream_low * s, void * buf, size_t count)
{
compress_data * data = s->data;
data->ms->timeout = s->timeout;
z_stream * strm = data->decompress_stream;

int zr;

do {

if (strm->avail_in == 0) {
int read = (int) data->ms->driver->mailstream_read(data->ms, data->input_buf, CHUNK_SIZE);
if (read <= 0) {
return read;
}
strm->avail_in = read;
strm->next_in = data->input_buf;
}


strm->next_out = buf;
strm->avail_out = (int) count;


zr = inflate(strm, Z_NO_FLUSH);
}

while (zr == Z_OK && strm->avail_in == 0 && strm->avail_out == count);


if (zr < 0) {
return -1;
}


return count - strm->avail_out;
return -1;
}