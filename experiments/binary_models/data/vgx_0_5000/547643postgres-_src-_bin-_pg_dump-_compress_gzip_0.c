static void
DeflateCompressorGzip(ArchiveHandle *AH, CompressorState *cs, bool flush)
{
GzipCompressorState *gzipcs = (GzipCompressorState *) cs->private_data;
z_streamp	zp = gzipcs->zp;
void	   *out = gzipcs->outbuf;
int			res = Z_OK;

while (gzipcs->zp->avail_in != 0 || flush)
{
res = deflate(zp, flush ? Z_FINISH : Z_NO_FLUSH);
if (res == Z_STREAM_ERROR)
pg_fatal("could not compress data: %s", zp->msg);
if ((flush && (zp->avail_out < gzipcs->outsize))
|| (zp->avail_out == 0)
|| (zp->avail_in != 0)
)
{

if (zp->avail_out < gzipcs->outsize)
{

size_t		len = gzipcs->outsize - zp->avail_out;

cs->writeF(AH, (char *) out, len);
}
zp->next_out = out;
zp->avail_out = gzipcs->outsize;
}

if (res == Z_STREAM_END)
break;
}
}