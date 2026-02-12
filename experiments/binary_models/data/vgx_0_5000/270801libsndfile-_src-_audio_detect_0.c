audio_detect (SF_PRIVATE * psf, AUDIO_DETECT *ad, const unsigned char * data, int datalen)
{	VOTE vote ;

if (psf == NULL)
return 0 ;

if (ad == NULL || datalen < 256)
return 0 ;

vote_for_format (&vote, data, datalen) ;

psf_log_printf (psf, "audio_detect :\n"
"    le_float     : %d\n"
"    be_float     : %d\n"
"    le_int_24_32 : %d\n"
"    be_int_24_32 : %d\n",
vote.le_float, vote.be_float, vote.le_int_24_32, vote.be_int_24_32) ;

if (0) puts (psf->parselog.buf) ;

if (ad->endianness == SF_ENDIAN_LITTLE && vote.le_float > (3 * datalen) / 4)
{	
return SF_FORMAT_FLOAT ;
} ;

if (ad->endianness == SF_ENDIAN_LITTLE && vote.le_int_24_32 > (3 * datalen) / 4)
{	
return SF_FORMAT_PCM_32 ;
} ;

return 0 ;
} 