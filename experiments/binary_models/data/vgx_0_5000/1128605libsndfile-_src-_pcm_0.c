static sf_count_t
pcm_write_s2sc	(SF_PRIVATE *psf, const short *ptr, sf_count_t len)
{	BUF_UNION	ubuf ;
int			bufferlen, writecount ;
sf_count_t	total = 0 ;

bufferlen = ARRAY_LEN (ubuf.scbuf) ;

while (len > 0)
{	if (len < bufferlen)
bufferlen = (int) len ;
s2sc_array (ptr + total, ubuf.scbuf, bufferlen) ;
writecount = (int) psf_fwrite (ubuf.scbuf, sizeof (signed char), bufferlen, psf) ;
total += writecount ;
if (writecount < bufferlen)
break ;
len -= writecount ;
} ;

return total ;
} 