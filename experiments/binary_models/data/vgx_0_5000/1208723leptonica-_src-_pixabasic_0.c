l_ok
pixaaInitFull(PIXAA  *paa,
PIXA   *pixa)
{
l_int32  i, n;
PIXA    *pixat;

if (!paa)
return ERROR_INT("paa not defined", __func__, 1);
if (!pixa)
return ERROR_INT("pixa not defined", __func__, 1);

n = paa->nalloc;
paa->n = n;
for (i = 0; i < n; i++) {
pixat = pixaCopy(pixa, L_COPY);
pixaaReplacePixa(paa, i, pixat);
}

return 0;
}