L_DEWARP *
dewarpCreate(PIX     *pixs,
l_int32  pageno)
{
L_DEWARP  *dew;

if (!pixs)
return (L_DEWARP *)ERROR_PTR("pixs not defined", __func__, NULL);
if (pixGetDepth(pixs) != 1)
return (L_DEWARP *)ERROR_PTR("pixs not 1 bpp", __func__, NULL);

dew = (L_DEWARP *)LEPT_CALLOC(1, sizeof(L_DEWARP));
dew->pixs = pixClone(pixs);
dew->pageno = pageno;
dew->w = pixGetWidth(pixs);
dew->h = pixGetHeight(pixs);
return dew;
}