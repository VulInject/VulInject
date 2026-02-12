l_ok
convertTiffMultipageToPdf(const char  *filein,
const char  *fileout)
{
l_int32  istiff;
PIXA    *pixa;
FILE    *fp;

if ((fp = fopenReadStream(filein)) == NULL)
return ERROR_INT("file not found", __func__, 1);
istiff = fileFormatIsTiff(fp);
fclose(fp);
if (!istiff)
return ERROR_INT("file not tiff format", __func__, 1);

pixa = pixaReadMultipageTiff(filein);
pixaConvertToPdf(pixa, 0, 1.0, 0, 0, "weasel2", fileout);
pixaDestroy(&pixa);
return 0;
}