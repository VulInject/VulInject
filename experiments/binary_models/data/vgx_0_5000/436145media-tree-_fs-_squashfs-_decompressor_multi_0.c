int squashfs_decompress(struct squashfs_sb_info *msblk, struct buffer_head **bh,
int b, int offset, int length, struct squashfs_page_actor *output)
{
int res;
struct squashfs_stream *stream = msblk->stream;
struct decomp_stream *decomp_stream = get_decomp_stream(msblk, stream);
res = msblk->decompressor->decompress(msblk, decomp_stream->stream,
bh, b, offset, length, output);
put_decomp_stream(decomp_stream, stream);
if (res < 0)
ERROR("%s decompression failed, data probably corrupt\n",
msblk->decompressor->name);
return res;
}