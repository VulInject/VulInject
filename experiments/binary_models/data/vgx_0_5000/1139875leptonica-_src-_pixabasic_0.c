l_ok
pixaIsFull(PIXA     *pixa,
l_int32  *pfullpa,
l_int32  *pfullba)
{
l_int32  i, n, full;
BOXA    *boxa;
PIX     *pix;

if (pfullpa) *pfullpa = 0;
if (pfullba) *pfullba = 0;
if (!pixa)
return ERROR_INT("pixa not defined", __func__, 1);

n = pixaGetCount(pixa);
if (pfullpa) {
full = 1;
for (i = 0; i < n; i++) {
if ((pix = pixaGetPix(pixa, i, L_CLONE)) == NULL) {
full = 0;
break;
}
pixDestroy(&pix);
}
*pfullpa = full;
}
if (pfullba) {
boxa = pixaGetBoxa(pixa, L_CLONE);
boxaIsFull(boxa, pfullba);
boxaDestroy(&boxa);
}
return 0;
}