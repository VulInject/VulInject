dwvw_read_f (SF_PRIVATE *psf, float *ptr, sf_count_t len)
{	DWVW_PRIVATE *pdwvw ;
BUF_UNION	ubuf ;
int			*iptr ;
int			k, bufferlen, readcount = 0, count ;
sf_count_t	total = 0 ;
float	normfact ;

if (! psf->codec_data)
return 0 ;
pdwvw = (DWVW_PRIVATE*) psf->codec_data ;

normfact = (psf->norm_float == SF_TRUE) ? 1.0 / ((float) 0x80000000) : 1.0 ;

iptr = ubuf.ibuf ;
bufferlen = ARRAY_LEN (ubuf.ibuf) ;
while (len > 0)
{	readcount = (len >= bufferlen) ? bufferlen : (int) len ;
count = dwvw_decode_data (psf, pdwvw, iptr, readcount) ;
for (k = 0 ; k < readcount ; k++)
ptr [total + k] = normfact * (float) (iptr [k]) ;

total += count ;
len -= readcount ;
if (count != readcount)
break ;
} ;

return total ;
} 