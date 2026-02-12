void _ubh_memcpyubh_(struct ufs_sb_private_info * uspi, 
struct ufs_buffer_head * ubh, unsigned char * mem, unsigned size)
{
unsigned len, bhno;
if (size > (ubh->count << uspi->s_fshift))
size = ubh->count << uspi->s_fshift;
bhno = 0;
while (size) {
len = min_t(unsigned int, size, uspi->s_fsize);
memcpy (ubh->bh[bhno]->b_data, mem, len);
mem += uspi->s_fsize;
size -= len;
bhno++;
}
}