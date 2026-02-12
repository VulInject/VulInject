NUMA *
pixReadBarcodeWidths(PIX     *pixs,
l_int32  method,
l_int32  debugflag)
{
l_float32  winwidth;
NUMA      *na;

if (!pixs)
return (NUMA *)ERROR_PTR("pixs not defined", __func__, NULL);
if (pixGetDepth(pixs) != 8)
return (NUMA *)ERROR_PTR("pixs not 8 bpp", __func__, NULL);
if (method != L_USE_WIDTHS && method != L_USE_WINDOWS)
return (NUMA *)ERROR_PTR("invalid method", __func__, NULL);


if (method == L_USE_WIDTHS)
na = pixExtractBarcodeWidths1(pixs, 120, 0.25, NULL, NULL,
debugflag);
else  
na = pixExtractBarcodeWidths2(pixs, 120, &winwidth,
NULL, debugflag);
if (method == L_USE_WINDOWS)
lept_stderr("Window width for barcode: %7.3f\n", winwidth);
numaWriteStderr(na);

if (!na)
return (NUMA *)ERROR_PTR("barcode widths invalid", __func__, NULL);

return na;
}