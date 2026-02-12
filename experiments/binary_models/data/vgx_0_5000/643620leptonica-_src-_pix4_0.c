L_AMAP  *
pixGetColorAmapHistogram(PIX     *pixs,
l_int32  factor)
{
l_int32    i, j, w, h, wpl;
l_uint32  *data, *line;
L_AMAP    *amap;
RB_TYPE    key, value;
RB_TYPE   *pval;

if (!pixs)
return (L_AMAP *)ERROR_PTR("pixs not defined", __func__, NULL);
if (pixGetDepth(pixs) != 32)
return (L_AMAP *)ERROR_PTR("pixs not 32 bpp", __func__, NULL);
if (factor <= 0)
return (L_AMAP *)ERROR_PTR("factor must be > 0", __func__, NULL);
pixGetDimensions(pixs, &w, &h, NULL);
data = pixGetData(pixs);
wpl = pixGetWpl(pixs);
amap = l_amapCreate(L_UINT_TYPE);
for (i = 0; i < h; i += factor) {
line = data + i * wpl;
for (j = 0; j < w; j += factor) {
key.utype = line[j];
pval = l_amapFind(amap, key);
if (!pval)
value.itype = 1;
else
value.itype = 1 + pval->itype;
l_amapInsert(amap, key, value);
}
}

return amap;
}