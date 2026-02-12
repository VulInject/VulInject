WandExport MagickBooleanType MagickGetPage(const MagickWand *wand,
size_t *width,size_t *height,ssize_t *x,ssize_t *y)
{
RectangleInfo
geometry;

assert(wand != (const MagickWand *) NULL);
assert(wand->signature == WandSignature);
if (wand->debug != MagickFalse)
(void) LogMagickEvent(WandEvent,GetMagickModule(),"%s",wand->name);
(void) memset(&geometry,0,sizeof(geometry));
(void) ParseAbsoluteGeometry(wand->image_info->page,&geometry);
*width=geometry.width;
*height=geometry.height;
*x=geometry.x;
*y=geometry.y;
return(MagickTrue);
}