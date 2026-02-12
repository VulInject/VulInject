*       minupconf = 8.0, minratio = 2.5
*   fileout is the output file name, without the extension, which is
*   added here depending on the encoding chosen for the output pix.
*
*   Example on 1 bpp image:
*     textorient feyn.tif 0.0 0.0 feyn.oriented
*   which generates the file
*     feyn.oriented.tif
*
*/




LEPT_DLL extern const char *ImageFileFormatExtensions[];

int main(int    argc,
char **argv)
{
char         buf[BUF_SIZE];
const char  *filein, *fileout;
l_int32      pixformat;
l_float32    minupconf, minratio;
PIX         *pixs, *pixd;

if (argc != 5) {
return ERROR_INT(
"Syntax:  textorient filein minupconf minratio, fileout",
__func__, 1);
}
filein = argv[1];
minupconf = atof(argv[2]);
minratio = atof(argv[3]);
fileout = argv[4];
setLeptDebugOK(1);

pixs = pixRead(filein);
pixd = pixOrientCorrect(pixs, minupconf, minratio, NULL, NULL, NULL, 1);

pixformat = pixChooseOutputFormat(pixd);
snprintf(buf, BUF_SIZE, "%s.%s", fileout,
ImageFileFormatExtensions[pixformat]);
pixWrite(buf, pixd, pixformat);
pixDestroy(&pixs);
pixDestroy(&pixd);
return 0;
}