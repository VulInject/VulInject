static void setColorSpace(struct jpeg_compress_struct *cinfo, struct _GImage *base) {
int i;

cinfo->input_components = 3;		
cinfo->in_color_space = JCS_RGB; 	

if ( base->image_type==it_index ) {
if ( base->clut->clut_len!=256 )
return;
for ( i=0; i<256; ++i )
if ( base->clut->clut[i]!=COLOR_CREATE(i,i,i))
break;
if ( i==256 ) {
cinfo->input_components = 1;
cinfo->in_color_space = JCS_GRAYSCALE;
}
}
}