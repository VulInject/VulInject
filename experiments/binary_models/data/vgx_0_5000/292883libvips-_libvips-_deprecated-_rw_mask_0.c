DOUBLEMASK *
im_create_dmask( const char *filename, int xsize, int ysize )
{	
DOUBLEMASK *out;
int size = xsize * ysize;


if( xsize <= 0 || ysize <= 0 || filename == NULL ) { 
im_error( "im_create_dmask", "%s", _( "bad arguments" ) ); 
return( NULL );
}


if( !(out = IM_NEW( NULL, DOUBLEMASK )) ) 
return( NULL );
out->coeff = NULL;
out->filename = NULL;
out->scale = 1.0;
out->offset = 0.0;
out->xsize = 0;
out->ysize = 0;

if( !(out->coeff = IM_ARRAY( NULL, size, double )) ) {
im_free_dmask( out );
return( NULL );
}
(void) memset( (char *) out->coeff, 0, size * sizeof( double ) );
if( !(out->filename = im_strdup( NULL, filename )) ) {
im_free_dmask( out );
return( NULL );
}
out->xsize = xsize; 
out->ysize = ysize;

return( out );
}