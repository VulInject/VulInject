static void
vips_draw_image_mode_add( VipsDrawImage *draw_image, VipsImage *im, 
VipsPel *q, VipsPel *p, int n )
{

const int sz = n * im->Bands * 
(vips_band_format_iscomplex( im->BandFmt ) ?  2 : 1);

int x;

switch( im->BandFmt ) {
case VIPS_FORMAT_UCHAR: 	
LOOP( unsigned char, int, 0, UCHAR_MAX ); break; 
case VIPS_FORMAT_CHAR: 	
LOOP( signed char, int, SCHAR_MIN, SCHAR_MAX ); break; 
case VIPS_FORMAT_USHORT: 
LOOP( unsigned short, int, 0, USHRT_MAX ); break; 
case VIPS_FORMAT_SHORT: 	
LOOP( signed short, int, SCHAR_MIN, SCHAR_MAX ); break; 
case VIPS_FORMAT_UINT: 	
LOOP( unsigned int, gint64, 0, UINT_MAX ); break; 
case VIPS_FORMAT_INT: 	
LOOP( signed int, gint64, INT_MIN, INT_MAX ); break; 

case VIPS_FORMAT_FLOAT: 		
case VIPS_FORMAT_COMPLEX: 
LOOPF( float ); break; 

case VIPS_FORMAT_DOUBLE:	
case VIPS_FORMAT_DPCOMPLEX: 
LOOPF( double ); break;

default:
g_assert_not_reached();
}
}