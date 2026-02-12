static void
vips_exif_update( ExifData *ed, VipsImage *image )
{
VipsExifRemove ve;

VIPS_DEBUG_MSG( "vips_exif_update: \n" );


if( vips_image_get_typeof( image, VIPS_META_EXIF_NAME ) ) {
ve.image = image;
ve.ed = ed;
exif_data_foreach_content( ed, 
(ExifDataForeachContentFunc) vips_exif_exif_content, 
&ve );
}


vips_image_map( image, vips_exif_image_field, ed );
}