ogg_stream_next_page (SF_PRIVATE *psf, OGG_PRIVATE *odata)
{	int nn ;

if (odata->eos)
return 0 ;

for ( ; ; )
{	nn = ogg_sync_next_page (psf, &odata->opage, -1, NULL) ;
if (nn == 0)
{	psf_log_printf (psf, "Ogg : File ended unexpectedly without an End-Of-Stream flag set.\n") ;
odata->eos = 1 ;
}
if (nn <= 0)
return nn ;

if (ogg_page_serialno (&odata->opage) == odata->ostream.serialno)
break ;
} ;

if (ogg_page_eos (&odata->opage))
odata->eos = 1 ;

if (ogg_stream_pagein (&odata->ostream, &odata->opage) < 0)
{	psf->error = SFE_INTERNAL ;
return -1 ;
}

return 1 ;
} 