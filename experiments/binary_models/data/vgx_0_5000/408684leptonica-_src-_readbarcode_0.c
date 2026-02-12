static PIX *
pixGenerateBarcodeMask(PIX     *pixs,
l_int32  maxspace,
l_int32  nwidth,
l_int32  nheight)
{
PIX  *pixt1, *pixt2, *pixd;

if (!pixs || pixGetDepth(pixs) != 1)
return (PIX *)ERROR_PTR("pixs not defined", __func__, NULL);


pixt1 = pixCloseBrick(NULL, pixs, maxspace + 1, 1);
pixt2 = pixOpenBrick(NULL, pixs, maxspace + 1, 1);
pixXor(pixt2, pixt2, pixt1);
pixOpenBrick(pixt2, pixt2, nwidth, nheight);
pixDestroy(&pixt1);


pixt1 = pixCloseBrick(NULL, pixs, 1, maxspace + 1);
pixd = pixOpenBrick(NULL, pixs, 1, maxspace + 1);
pixXor(pixd, pixd, pixt1);
pixOpenBrick(pixd, pixd, nheight, nwidth);
pixDestroy(&pixt1);


pixOr(pixd, pixd, pixt2);
pixDestroy(&pixt2);

return pixd;
}