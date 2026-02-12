void PixAddEdgeData(PIXA    *pixa,
PIX     *pixs,
l_int32  side,
l_int32  minjump,
l_int32  minreversal)
{
l_float32  jpl, jspl, rpl;
PIX       *pixt1, *pixt2;

pixMeasureEdgeSmoothness(pixs, side, minjump, minreversal, &jpl,
&jspl, &rpl, "/tmp/junkedge.png");
lept_stderr("side = %d: jpl = %6.3f, jspl = %6.3f, rpl = %6.3f\n",
side, jpl, jspl, rpl);
pixt1 = pixRead("/tmp/junkedge.png");
pixt2 = pixAddBorder(pixt1, 10, 0);  
pixaAddPix(pixa, pixt2, L_INSERT);
pixDestroy(&pixt1);
return;
}