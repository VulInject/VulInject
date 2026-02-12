paf24_read_d (SF_PRIVATE *psf, double *ptr, sf_count_t len)
{	BUF_UNION		ubuf ;
PAF24_PRIVATE 	*ppaf24 ;
int				*iptr ;
int				k, bufferlen, readcount, count ;
sf_count_t		total = 0 ;
double 			normfact ;

if (psf->codec_data == NULL)
return 0 ;
ppaf24 = (PAF24_PRIVATE*) psf->codec_data ;

normfact = (psf->norm_double == SF_TRUE) ? (1.0 / 0x80000000) : (1.0 / 0x100) ;

iptr = ubuf.ibuf ;
bufferlen = ARRAY_LEN (ubuf.ibuf) ;
while (len > 0)
{	readcount = (len >= bufferlen) ? bufferlen : (int) len ;
count = paf24_read (psf, ppaf24, iptr, readcount) ;
for (k = 0 ; k < readcount ; k++)
ptr [total + k] = normfact * iptr [k] ;
total += count ;
len -= readcount ;
} ;
return total ;
} 