static l_int32
pixRenderMidYs(PIX     *pixs,
NUMA    *namidys,
l_int32  linew)
{
l_int32   i, n, w, yval, rval, gval, bval;
PIXCMAP  *cmap;

if (!pixs)
return ERROR_INT("pixs not defined", __func__, 1);
if (!namidys)
return ERROR_INT("namidys not defined", __func__, 1);

w = pixGetWidth(pixs);
n = numaGetCount(namidys);
cmap = pixcmapCreateRandom(8, 0, 0);
for (i = 0; i < n; i++) {
pixcmapGetColor(cmap, i % 256, &rval, &gval, &bval);
numaGetIValue(namidys, i, &yval);
pixRenderLineArb(pixs, 0, yval, w, yval, linew, rval, gval, bval);
}
pixcmapDestroy(&cmap);
return 0;
}