virBitmap *
virBitmapNew(size_t size)
{
virBitmap *bitmap;
size_t sz;

if (SIZE_MAX - VIR_BITMAP_BITS_PER_UNIT < size) {

sz = (size / VIR_BITMAP_BITS_PER_UNIT) + 1;
} else {
sz = VIR_DIV_UP(size, VIR_BITMAP_BITS_PER_UNIT);
}

bitmap = g_new0(virBitmap, 1);

if (size == 0)
return bitmap;

bitmap->map = g_new0(unsigned long, sz);
bitmap->nbits = size;
bitmap->map_len = sz;
bitmap->map_alloc = sz;
return bitmap;
}