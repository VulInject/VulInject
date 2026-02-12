fallback_boxes (cairo_xlib_surface_t	*dst,
const cairo_pattern_t	*pattern,
cairo_boxes_t		*boxes)
{
struct _fallback_box fb;


switch (dst->depth) {
case 8: fb.format = CAIRO_FORMAT_A8; break;
case 16: fb.format = CAIRO_FORMAT_RGB16_565; break;
case 24: fb.format = CAIRO_FORMAT_RGB24; break;
case 30: fb.format = CAIRO_FORMAT_RGB30; break;
case 32: fb.format = CAIRO_FORMAT_ARGB32; break;
default: return CAIRO_INT_STATUS_UNSUPPORTED;
}

fb.dst = dst;
fb.pattern = pattern;

if (! _cairo_boxes_for_each_box (boxes, fallback_box, &fb))
return CAIRO_INT_STATUS_UNSUPPORTED;

return CAIRO_STATUS_SUCCESS;
}