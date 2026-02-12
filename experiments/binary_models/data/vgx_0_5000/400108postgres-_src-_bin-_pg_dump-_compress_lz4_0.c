static void
ReadDataFromArchiveLZ4(ArchiveHandle *AH, CompressorState *cs)
{
LZ4_streamDecode_t lz4StreamDecode;
char	   *buf;
char	   *decbuf;
size_t		buflen;
size_t		cnt;

buflen = LZ4_IN_SIZE;
buf = pg_malloc(buflen);
decbuf = pg_malloc(buflen);

LZ4_setStreamDecode(&lz4StreamDecode, NULL, 0);

while ((cnt = cs->readF(AH, &buf, &buflen)))
{
int			decBytes = LZ4_decompress_safe_continue(&lz4StreamDecode,
buf, decbuf,
cnt, buflen);

ahwrite(decbuf, 1, decBytes, AH);
}

pg_free(buf);
pg_free(decbuf);
}