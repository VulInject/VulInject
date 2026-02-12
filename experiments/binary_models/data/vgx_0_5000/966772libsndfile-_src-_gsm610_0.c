static int
gsm610_decode_block	(SF_PRIVATE *psf, GSM610_PRIVATE *pgsm610)
{	int	k ;

pgsm610->blockcount ++ ;
pgsm610->samplecount = 0 ;

if (pgsm610->blockcount > pgsm610->blocks)
{	memset (pgsm610->samples, 0, sizeof (pgsm610->samples)) ;
return 1 ;
} ;

if ((k = (int) psf_fread (pgsm610->block, 1, GSM610_BLOCKSIZE, psf)) != GSM610_BLOCKSIZE)
psf_log_printf (psf, "*** Warning : short read (%d != %d).\n", k, GSM610_BLOCKSIZE) ;

if (gsm_decode (pgsm610->gsm_data, pgsm610->block, pgsm610->samples) < 0)
{	psf_log_printf (psf, "Error from standard gsm_decode() on frame : %d\n", pgsm610->blockcount) ;
return 0 ;
} ;

return 1 ;
} 