im_matcat( DOUBLEMASK *top, DOUBLEMASK *bottom, const char *filename )
{
int newxsize, newysize;
DOUBLEMASK *mat;
double *out;


if( top->xsize != bottom->xsize ) {
im_error( "im_matcat", "%s", 
_( "matrices must be same width" ) );
return( NULL );
}

newxsize = top->xsize;
newysize = top->ysize + bottom->ysize;


if( !(mat = im_create_dmask( filename, newxsize, newysize )) ) 
return( NULL );


memcpy( mat->coeff, top->coeff, 
top->xsize * top->ysize * sizeof( double ) );
out = mat->coeff + top->xsize * top->ysize;
memcpy( out, bottom->coeff, 
bottom->xsize * bottom->ysize * sizeof( double ) );

return( mat );
}