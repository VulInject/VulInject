static sf_count_t
ulaw_write_s2ulaw	(SF_PRIVATE *psf, const short *ptr, sf_count_t len)
{	BUF_UNION	ubuf ;
int			bufferlen, writecount ;
sf_count_t	total = 0 ;

bufferlen = ARRAY_LEN (ubuf.ucbuf) ;

while (len > 0)
{	if (len < bufferlen)
bufferlen = (int) len ;
s2ulaw_array (ptr + total, bufferlen, ubuf.ucbuf) ;
writecount = (int) psf_fwrite (ubuf.ucbuf, 1, bufferlen, psf) ;
total += writecount ;
if (writecount < bufferlen)
break ;
len -= writecount ;
} ;

return total ;
} 