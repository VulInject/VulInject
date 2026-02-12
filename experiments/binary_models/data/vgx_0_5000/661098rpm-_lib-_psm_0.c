static rpmRC runTriggers(rpmpsm psm, rpmsenseFlags sense)
{
const rpmts ts = psm->ts;
int numPackage = -1;
const char * N = NULL;
int nerrors = 0;

if (psm->te) 	
N = rpmteN(psm->te);
if (N) 		
numPackage = rpmdbCountPackages(rpmtsGetRdb(ts), N)
+ psm->countCorrection;
if (numPackage < 0)
return RPMRC_NOTFOUND;

{	Header triggeredH;
Header h = rpmteHeader(psm->te);
rpmdbMatchIterator mi;

mi = rpmtsInitIterator(ts, RPMDBI_TRIGGERNAME, N, 0);
while ((triggeredH = rpmdbNextIterator(mi)) != NULL) {
nerrors += handleOneTrigger(ts, NULL, sense, h, triggeredH,
0, numPackage, NULL);
}
rpmdbFreeIterator(mi);
headerFree(h);
}

return (nerrors == 0) ? RPMRC_OK : RPMRC_FAIL;
}