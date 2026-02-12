rdpShadowSurface* shadow_surface_new(rdpShadowServer* server, UINT16 x, UINT16 y, UINT32 width,
UINT32 height)
{
rdpShadowSurface* surface;
surface = (rdpShadowSurface*)calloc(1, sizeof(rdpShadowSurface));

if (!surface)
return NULL;

surface->server = server;
surface->x = x;
surface->y = y;
surface->width = width;
surface->height = height;
surface->scanline = ALIGN_SCREEN_SIZE(surface->width, 32) * 4;
surface->format = PIXEL_FORMAT_BGRX32;
surface->data = (BYTE*)calloc(ALIGN_SCREEN_SIZE(surface->height, 32), surface->scanline);

if (!surface->data)
{
free(surface);
return NULL;
}

if (!InitializeCriticalSectionAndSpinCount(&(surface->lock), 4000))
{
free(surface->data);
free(surface);
return NULL;
}

region16_init(&(surface->invalidRegion));
return surface;
}