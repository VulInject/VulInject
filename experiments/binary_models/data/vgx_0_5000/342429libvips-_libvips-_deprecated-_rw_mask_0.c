INTMASK *
im_scale_dmask( DOUBLEMASK *in, const char *filename )
{
const int size = in->xsize * in->ysize;

INTMASK *out;
double maxval, dsum; 
int i;
int isum;

if( im_check_dmask( "im_scale_dmask", in ) ||
!(out = im_create_imask( filename, in->xsize, in->ysize )) )
return( NULL );


maxval = in->coeff[0];
for( i = 0; i < size; i++ ) 
if( in->coeff[i] > maxval )
maxval = in->coeff[i];


for( i = 0; i < size; i++ ) 
out->coeff[i] = IM_RINT( in->coeff[i] * 20.0 / maxval );
out->offset = in->offset;


isum = 0;
dsum = 0.0;
for( i = 0; i < size; i++ ) { 
isum += out->coeff[i]; 
dsum += in->coeff[i];
}

if( dsum == in->scale )
out->scale = isum;
else if( dsum == 0.0 )
out->scale = 1.0;
else
out->scale = IM_RINT( in->scale * isum / dsum );

return( out );	
}