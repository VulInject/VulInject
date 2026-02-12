HGDI_BITMAP gdi_CreateBitmapEx(UINT32 nWidth, UINT32 nHeight, UINT32 format, UINT32 stride,
BYTE* data, void (*fkt_free)(void*))
{
HGDI_BITMAP hBitmap = (HGDI_BITMAP)calloc(1, sizeof(GDI_BITMAP));

if (!hBitmap)
return NULL;

hBitmap->objectType = GDIOBJECT_BITMAP;
hBitmap->format = format;

if (stride > 0)
hBitmap->scanline = stride;
else
hBitmap->scanline = nWidth * FreeRDPGetBytesPerPixel(hBitmap->format);

hBitmap->width = nWidth;
hBitmap->height = nHeight;
hBitmap->data = data;
hBitmap->free = fkt_free;
return hBitmap;
}