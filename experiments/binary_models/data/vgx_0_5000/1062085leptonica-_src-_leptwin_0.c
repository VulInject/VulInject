static int
setColormap(LPBITMAPINFO  pbmi,
PIXCMAP      *cmap)
{
l_int32  i, nColors, rval, gval, bval;

nColors = pixcmapGetCount(cmap);
for (i = 0; i < nColors; i++) {
pixcmapGetColor(cmap, i, &rval, &gval, &bval);
pbmi->bmiColors[i].rgbRed = rval;
pbmi->bmiColors[i].rgbGreen = gval;
pbmi->bmiColors[i].rgbBlue = bval;
pbmi->bmiColors[i].rgbReserved = 0;
}
pbmi->bmiHeader.biClrUsed = nColors;
return nColors;
}