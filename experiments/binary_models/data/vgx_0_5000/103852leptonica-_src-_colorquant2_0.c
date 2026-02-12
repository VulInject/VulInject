static PIXCMAP *
pixcmapGenerateFromMedianCuts(L_HEAP   *lh,
l_int32  *histo,
l_int32   sigbits)
{
l_int32   index, rval, gval, bval;
L_BOX3D  *vbox;
PIXCMAP  *cmap;

if (!lh)
return (PIXCMAP *)ERROR_PTR("lh not defined", __func__, NULL);
if (!histo)
return (PIXCMAP *)ERROR_PTR("histo not defined", __func__, NULL);

rval = gval = bval = 0;  
cmap = pixcmapCreate(8);
index = 0;
while (lheapGetCount(lh) > 0) {
vbox = (L_BOX3D *)lheapRemove(lh);
vboxGetAverageColor(vbox, histo, sigbits, index, &rval, &gval, &bval);
pixcmapAddColor(cmap, rval, gval, bval);
LEPT_FREE(vbox);
index++;
}

return cmap;
}