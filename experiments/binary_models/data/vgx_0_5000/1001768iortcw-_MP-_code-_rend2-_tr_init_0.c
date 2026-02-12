qboolean R_GetModeInfo( int *width, int *height, float *windowAspect, int mode ) {
vidmode_t   *vm;
float			pixelAspect;

if ( mode < -1 ) {
return qfalse;
}
if ( mode >= s_numVidModes ) {
return qfalse;
}

if ( mode == -1 ) {
*width = r_customwidth->integer;
*height = r_customheight->integer;
pixelAspect = r_customPixelAspect->value;
} else {
vm = &r_vidModes[mode];

*width  = vm->width;
*height = vm->height;
pixelAspect = vm->pixelAspect;
}

*windowAspect = (float)*width / ( *height * pixelAspect );

return qtrue;
}