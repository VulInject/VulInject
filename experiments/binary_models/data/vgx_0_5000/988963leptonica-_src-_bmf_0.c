static PIXA *
pixaGenerateFontFromFile(const char  *dir,
l_int32      fontsize,
l_int32     *pbl0,
l_int32     *pbl1,
l_int32     *pbl2)
{
char    *pathname;
l_int32  fileno;
PIX     *pix;
PIXA    *pixa;

if (!pbl0 || !pbl1 || !pbl2)
return (PIXA *)ERROR_PTR("&bl not all defined", __func__, NULL);
*pbl0 = *pbl1 = *pbl2 = 0;
if (!dir)
return (PIXA *)ERROR_PTR("dir not defined", __func__, NULL);
fileno = (fontsize / 2) - 2;
if (fileno < 0 || fileno >= NUM_FONTS)
return (PIXA *)ERROR_PTR("font size invalid", __func__, NULL);

pathname = pathJoin(dir, inputfonts[fileno]);
pix = pixRead(pathname);
LEPT_FREE(pathname);
if (!pix) {
L_ERROR("pix not found for font size %d\n", __func__, fontsize);
return NULL;
}

pixa = pixaGenerateFont(pix, fontsize, pbl0, pbl1, pbl2);
pixDestroy(&pix);
return pixa;
}