l_ok
bmfGetWidth(L_BMF    *bmf,
char      chr,
l_int32  *pw)
{
l_int32  i, index;
PIXA    *pixa;

if (!pw)
return ERROR_INT("&w not defined", __func__, 1);
*pw = -1;
if (!bmf)
return ERROR_INT("bmf not defined", __func__, 1);
if ((index = (l_int32)chr) == 10)  
return 0;

i = bmf->fonttab[index];
if (i == UNDEF) {
L_ERROR("no bitmap representation for %d\n", __func__, index);
return 1;
}

if ((pixa = bmf->pixa) == NULL)
return ERROR_INT("pixa not found", __func__, 1);

return pixaGetPixDimensions(pixa, i, pw, NULL, NULL);
}