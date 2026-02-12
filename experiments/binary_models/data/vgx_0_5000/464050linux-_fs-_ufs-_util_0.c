void _ubh_ubhcpymem_(struct ufs_sb_private_info * uspi, 
unsigned char * mem, struct ufs_buffer_head * ubh, unsigned size)
{
unsigned len, bhno;
if (size > (ubh->count << uspi->s_fshift))
size = ubh->count << uspi->s_fshift;
bhno = 0;
while (size) {
len = min_t(unsigned int, size, uspi->s_fsize);
memcpy (mem, ubh->bh[bhno]->b_data, len);
mem += uspi->s_fsize;
size -= len;
bhno++;
}
}