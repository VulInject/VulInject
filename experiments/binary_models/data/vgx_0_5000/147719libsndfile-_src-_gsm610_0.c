static int
gsm610_read_block	(SF_PRIVATE *psf, GSM610_PRIVATE *pgsm610, short *ptr, int len)
{	int	count, total = 0, indx = 0 ;

while (indx < len)
{	if (pgsm610->blockcount >= pgsm610->blocks && pgsm610->samplecount >= pgsm610->samplesperblock)
{	memset (ptr + indx, 0, (len - indx) * sizeof (short)) ;
return total ;
} ;

if (pgsm610->samplecount >= pgsm610->samplesperblock)
pgsm610->decode_block (psf, pgsm610) ;

count = pgsm610->samplesperblock - pgsm610->samplecount ;
count = (len - indx > count) ? count : len - indx ;

memcpy (&(ptr [indx]), &(pgsm610->samples [pgsm610->samplecount]), count * sizeof (short)) ;
indx += count ;
pgsm610->samplecount += count ;
total = indx ;
} ;

return total ;
} 