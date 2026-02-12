PIXC *
pixcompCreateFromString(l_uint8  *data,
size_t    size,
l_int32   copyflag)
{
l_int32  format, w, h, d, bps, spp, iscmap;
PIXC    *pixc;

if (!data)
return (PIXC *)ERROR_PTR("data not defined", __func__, NULL);
if (copyflag != L_INSERT && copyflag != L_COPY)
return (PIXC *)ERROR_PTR("invalid copyflag", __func__, NULL);

if (pixReadHeaderMem(data, size, &format, &w, &h, &bps, &spp, &iscmap) == 1)
return (PIXC *)ERROR_PTR("header data not read", __func__, NULL);
pixc = (PIXC *)LEPT_CALLOC(1, sizeof(PIXC));
d = (spp == 3) ? 32 : bps * spp;
pixc->w = w;
pixc->h = h;
pixc->d = d;
pixc->comptype = format;
pixc->cmapflag = iscmap;
if (copyflag == L_INSERT)
pixc->data = data;
else
pixc->data = l_binaryCopy(data, size);
pixc->size = size;
return pixc;
}