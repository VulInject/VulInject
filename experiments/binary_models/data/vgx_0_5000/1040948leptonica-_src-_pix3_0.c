PIX *
pixSetUnderTransparency(PIX      *pixs,
l_uint32  val,
l_int32   debug)
{
PIX  *pixg, *pixm, *pixt, *pixd;

if (!pixs || pixGetDepth(pixs) != 32)
return (PIX *)ERROR_PTR("pixs not defined or not 32 bpp",
__func__, NULL);

if (pixGetSpp(pixs) != 4) {
L_WARNING("no alpha channel; returning a copy\n", __func__);
return pixCopy(NULL, pixs);
}


pixg = pixGetRGBComponent(pixs, L_ALPHA_CHANNEL);
pixm = pixThresholdToBinary(pixg, 1);

if (debug) {
pixt = pixDisplayLayersRGBA(pixs, 0xffffff00, 600);
pixDisplay(pixt, 0, 0);
pixDestroy(&pixt);
}

pixd = pixCopy(NULL, pixs);
pixSetMasked(pixd, pixm, (val & 0xffffff00));
pixDestroy(&pixg);
pixDestroy(&pixm);
return pixd;
}