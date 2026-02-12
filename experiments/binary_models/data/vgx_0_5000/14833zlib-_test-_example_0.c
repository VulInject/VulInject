void test_large_inflate(compr, comprLen, uncompr, uncomprLen)
Byte *compr, *uncompr;
uLong comprLen, uncomprLen;
{
int err;
z_stream d_stream; 

strcpy((char*)uncompr, "garbage");

d_stream.zalloc = zalloc;
d_stream.zfree = zfree;
d_stream.opaque = (voidpf)0;

d_stream.next_in  = compr;
d_stream.avail_in = (uInt)comprLen;

err = inflateInit(&d_stream);
CHECK_ERR(err, "inflateInit");

for (;;) {
d_stream.next_out = uncompr;            
d_stream.avail_out = (uInt)uncomprLen;
err = inflate(&d_stream, Z_NO_FLUSH);
if (err == Z_STREAM_END) break;
CHECK_ERR(err, "large inflate");
}

err = inflateEnd(&d_stream);
CHECK_ERR(err, "inflateEnd");

if (d_stream.total_out != 2*uncomprLen + comprLen/2) {
fprintf(stderr, "bad large inflate: %ld\n", d_stream.total_out);
exit(1);
} else {
printf("large_inflate(): OK\n");
}
}