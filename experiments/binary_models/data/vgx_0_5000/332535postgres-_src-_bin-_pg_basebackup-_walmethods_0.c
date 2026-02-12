static bool
tar_write_compressed_data(TarMethodData *tar_data, void *buf, size_t count,
bool flush)
{
tar_data->zp->next_in = buf;
tar_data->zp->avail_in = count;

while (tar_data->zp->avail_in || flush)
{
int			r;

r = deflate(tar_data->zp, flush ? Z_FINISH : Z_NO_FLUSH);
if (r == Z_STREAM_ERROR)
{
tar_data->base.lasterrstring = "could not compress data";
return false;
}

if (tar_data->zp->avail_out < ZLIB_OUT_SIZE)
{
size_t		len = ZLIB_OUT_SIZE - tar_data->zp->avail_out;

errno = 0;
if (write(tar_data->fd, tar_data->zlibOut, len) != len)
{

tar_data->base.lasterrno = errno ? errno : ENOSPC;
return false;
}

tar_data->zp->next_out = tar_data->zlibOut;
tar_data->zp->avail_out = ZLIB_OUT_SIZE;
}

if (r == Z_STREAM_END)
break;
}

if (flush)
{

if (deflateReset(tar_data->zp) != Z_OK)
{
tar_data->base.lasterrstring = "could not reset compression stream";
return false;
}
}

return true;
}