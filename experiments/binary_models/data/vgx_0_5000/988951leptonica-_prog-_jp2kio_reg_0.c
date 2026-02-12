void DoJp2kTest3(L_REGPARAMS  *rp,
const char   *fname)
{
FILE  *fp;
PIX   *pix0, *pix1;


lept_mkdir("lept/jp2k");
pix0 = pixRead(fname);
if ((fp = fopenWriteStream("/tmp/lept/jp2k/wyom.j2k", "wb+")) != NULL) {
pixWriteStreamJp2k(fp, pix0, 34, 4, L_J2K_CODEC, 0, 0);
fclose(fp);
}
pix1 = pixRead("/tmp/lept/jp2k/wyom.j2k");
regTestCompareSimilarPix(rp, pix0, pix1, 20, 0.01, 0);  
pixDisplayWithTitle(pix1, 500, 500, NULL, rp->display);
pixDestroy(&pix0);
pixDestroy(&pix1);
}