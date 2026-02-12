dpcm_write_s2dsc (SF_PRIVATE *psf, const short *ptr, sf_count_t len)
{	BUF_UNION	ubuf ;
XI_PRIVATE	*pxi ;
int			bufferlen, writecount ;
sf_count_t	total = 0 ;

if ((pxi = psf->codec_data) == NULL)
return 0 ;

bufferlen = ARRAY_LEN (ubuf.ucbuf) ;

while (len > 0)
{	if (len < bufferlen)
bufferlen = (int) len ;
s2dsc_array (pxi, ptr + total, ubuf.scbuf, bufferlen) ;
writecount = (int) psf_fwrite (ubuf.scbuf, sizeof (signed char), bufferlen, psf) ;
total += writecount ;
if (writecount < bufferlen)
break ;
len -= writecount ;
} ;

return total ;
} 