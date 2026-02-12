_cairo_dfb_surface_create_similar (void            *abstract_src,
cairo_content_t  content,
int              width,
int              height)
{
cairo_dfb_surface_t *other  = abstract_src;
DFBSurfacePixelFormat     format;
IDirectFBSurface      *buffer;
DFBSurfaceDescription  dsc;
cairo_surface_t *surface;

if (width <= 0 || height <= 0)
return _cairo_image_surface_create_with_content (content, width, height);

switch (content) {
default:
ASSERT_NOT_REACHED;
case CAIRO_CONTENT_COLOR_ALPHA:
format = DSPF_ARGB;
break;
case CAIRO_CONTENT_COLOR:
format = DSPF_RGB32;
break;
case CAIRO_CONTENT_ALPHA:
format = DSPF_A8;
break;
}

dsc.flags       = DSDESC_WIDTH | DSDESC_HEIGHT | DSDESC_PIXELFORMAT;
dsc.caps        = DSCAPS_PREMULTIPLIED;
dsc.width       = width;
dsc.height      = height;
dsc.pixelformat = format;

if (other->dfb->CreateSurface (other->dfb, &dsc, &buffer))
return _cairo_surface_create_in_error (_cairo_error (CAIRO_STATUS_DEVICE_ERROR));

surface = cairo_directfb_surface_create (other->dfb, buffer);
buffer->Release (buffer);

return surface;
}