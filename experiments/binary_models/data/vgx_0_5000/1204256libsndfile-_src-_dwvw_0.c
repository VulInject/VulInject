static sf_count_t
dwvw_seek	(SF_PRIVATE *psf, int UNUSED (mode), sf_count_t offset)
{	DWVW_PRIVATE *pdwvw ;

if (! psf->codec_data)
{	psf->error = SFE_INTERNAL ;
return PSF_SEEK_ERROR ;
} ;

pdwvw = (DWVW_PRIVATE*) psf->codec_data ;

if (offset == 0)
{	psf_fseek (psf, psf->dataoffset, SEEK_SET) ;
dwvw_read_reset (pdwvw) ;
return 0 ;
} ;

psf->error = SFE_BAD_SEEK ;
return	PSF_SEEK_ERROR ;
} 