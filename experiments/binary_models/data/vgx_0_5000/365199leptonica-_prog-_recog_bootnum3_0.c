l_int32 main(int    argc,
char **argv)
{
char        buf[64];
l_int32     i;
PIX        *pix1, *pix2;
PIXA       *pixa1, *pixa2;
L_STRCODE  *strc;

if (argc != 1) {
lept_stderr(" Syntax: recog_bootnum3\n");
return 1;
}

setLeptDebugOK(1);
lept_mkdir("lept/digit");


pixa1 = pixaCreate(10);
for (i = 0; i < 10; i++) {
snprintf(buf, sizeof(buf), "recog/digits/digit%d.comp.tif", i);
pix1 = pixRead(buf);
pixa2 = pixaMakeFromTiledPix(pix1, 20, 30, 0, 100, NULL);
pix2 = pixaDisplayOnLattice(pixa2, 20, 30, NULL, NULL);
pixaAddPix(pixa1, pix2, L_INSERT);
pixDestroy(&pix1);
pixaDestroy(&pixa2);
}

pixaWrite("/tmp/lept/digit/bootnum4.pa", pixa1);
pixaDestroy(&pixa1);


strc = strcodeCreate(212);   
strcodeGenerate(strc, "/tmp/lept/digit/bootnum4.pa", "PIXA");
strcodeFinalize(&strc, ".");
return 0;
}