l_ok
fpixaGetPixel(FPIXA      *fpixa,
l_int32     index,
l_int32     x,
l_int32     y,
l_float32  *pval)
{
l_int32  n, ret;
FPIX    *fpix;

if (!pval)
return ERROR_INT("pval not defined", __func__, 1);
*pval = 0.0;
if (!fpixa)
return ERROR_INT("fpixa not defined", __func__, 1);
n = fpixaGetCount(fpixa);
if (index < 0 || index >= n)
return ERROR_INT("invalid index into fpixa", __func__, 1);

fpix = fpixaGetFPix(fpixa, index, L_CLONE);
ret = fpixGetPixel(fpix, x, y, pval);
fpixDestroy(&fpix);
return ret;
}