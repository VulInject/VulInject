static sf_count_t
host_read_d2i	(SF_PRIVATE *psf, int *ptr, sf_count_t len)
{	BUF_UNION	ubuf ;
void		(*convert) (const double *, int, int *, double) ;
int			bufferlen, readcount ;
sf_count_t	total = 0 ;
double		scale ;

convert = (psf->add_clipping) ? d2i_clip_array : d2i_array ;
bufferlen = ARRAY_LEN (ubuf.dbuf) ;
scale = (psf->float_int_mult == 0) ? 1.0 : 2147483648.0f / psf->float_max ;

while (len > 0)
{	if (len < bufferlen)
bufferlen = (int) len ;
readcount = (int) psf_fread (ubuf.dbuf, sizeof (double), bufferlen, psf) ;

if (psf->data_endswap == SF_TRUE)
endswap_double_array (ubuf.dbuf, bufferlen) ;

convert (ubuf.dbuf, readcount, ptr + total, scale) ;
total += readcount ;
len -= readcount ;
if (readcount < bufferlen)
break ;
} ;

return total ;
} 