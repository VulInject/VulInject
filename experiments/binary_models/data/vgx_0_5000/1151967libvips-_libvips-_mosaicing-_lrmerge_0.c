static int
find_first( VipsRegion *ir, int *pos, int x, int y, int w )
{
VipsPel *pr = VIPS_REGION_ADDR( ir, x, y );
VipsImage *im = ir->im;
int ne = w * im->Bands;
int i;


if( vips_band_format_iscomplex( im->BandFmt ) )
ne *= 2;


TYPE *p = (TYPE *) pr; \
\
for( i = 0; i < ne; i++ ) \
if( p[i] )\
break;\
}

switch( im->BandFmt ) {
case VIPS_FORMAT_UCHAR:		lsearch( unsigned char ); break; 
case VIPS_FORMAT_CHAR:		lsearch( signed char ); break; 
case VIPS_FORMAT_USHORT:	lsearch( unsigned short ); break; 
case VIPS_FORMAT_SHORT:		lsearch( signed short ); break; 
case VIPS_FORMAT_UINT:		lsearch( unsigned int ); break; 
case VIPS_FORMAT_INT:		lsearch( signed int );  break; 
case VIPS_FORMAT_FLOAT:		lsearch( float ); break; 
case VIPS_FORMAT_DOUBLE:	lsearch( double ); break; 
case VIPS_FORMAT_COMPLEX:	lsearch( float ); break; 
case VIPS_FORMAT_DPCOMPLEX:	lsearch( double ); break;

default:
g_assert_not_reached(); 
return( -1 );
}


*pos = x + i / im->Bands;

return( 0 );
}