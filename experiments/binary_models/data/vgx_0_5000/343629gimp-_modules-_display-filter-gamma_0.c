cdisplay_gamma_convert_buffer (GimpColorDisplay *display,
GeglBuffer       *buffer,
GeglRectangle    *area)
{
CdisplayGamma      *gamma = CDISPLAY_GAMMA (display);
GeglBufferIterator *iter;
gdouble             one_over_gamma;

one_over_gamma = 1.0 / gamma->gamma;

iter = gegl_buffer_iterator_new (buffer, area, 0,
babl_format ("R'G'B'A float"),
GEGL_ACCESS_READWRITE, GEGL_ABYSS_NONE, 1);

while (gegl_buffer_iterator_next (iter))
{
gfloat *data  = iter->items[0].data;
gint    count = iter->length;

while (count--)
{
*data = pow (*data, one_over_gamma); data++;
*data = pow (*data, one_over_gamma); data++;
*data = pow (*data, one_over_gamma); data++;

data++;
}
}
}