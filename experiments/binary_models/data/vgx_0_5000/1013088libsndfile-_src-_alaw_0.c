static sf_count_t
alaw_write_d2alaw	(SF_PRIVATE *psf, const double *ptr, sf_count_t len)
{	BUF_UNION	ubuf ;
int			bufferlen, writecount ;
sf_count_t	total = 0 ;
double	normfact ;

normfact = (psf->norm_double) ? (1.0 * 0x7FFF) / 16.0 : 1.0 / 16.0 ;

bufferlen = ARRAY_LEN (ubuf.ucbuf) ;

while (len > 0)
{	if (len < bufferlen)
bufferlen = (int) len ;
d2alaw_array (ptr + total, bufferlen, ubuf.ucbuf, normfact) ;
writecount = (int) psf_fwrite (ubuf.ucbuf, 1, bufferlen, psf) ;
total += writecount ;
if (writecount < bufferlen)
break ;
len -= writecount ;
} ;

return total ;
} 