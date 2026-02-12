size_t
befs_read_lsymlink(struct super_block *sb, const befs_data_stream *ds,
void *buff, befs_off_t len)
{
befs_off_t bytes_read = 0;	
u16 plen;
struct buffer_head *bh;

befs_debug(sb, "---> %s length: %llu", __func__, len);

while (bytes_read < len) {
bh = befs_read_datastream(sb, ds, bytes_read, NULL);
if (!bh) {
befs_error(sb, "BeFS: Error reading datastream block "
"starting from %llu", bytes_read);
befs_debug(sb, "<--- %s ERROR", __func__);
return bytes_read;

}
plen = ((bytes_read + BEFS_SB(sb)->block_size) < len) ?
BEFS_SB(sb)->block_size : len - bytes_read;
memcpy(buff + bytes_read, bh->b_data, plen);
brelse(bh);
bytes_read += plen;
}

befs_debug(sb, "<--- %s read %u bytes", __func__, (unsigned int)
bytes_read);
return bytes_read;
}