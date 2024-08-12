static int
FUN1( VAR1 *VAR2 )
{
int VAR3;
struct heif_error VAR4;


if( FUN2( VAR2->VAR5, VAR6 ) ) 
if( FUN3( VAR2->VAR5 ) )
return( -1 );

for( VAR3 = 0; VAR3 < FUN4( VAR7 ); VAR3++ )  
if( FUN2( VAR2->VAR5, 
VAR7[VAR3].VAR8 ) ) {
const void *VAR9;
size_t VAR10;

FUN5( "", 
VAR7[VAR3].VAR8 ); 

if( FUN6( VAR2->VAR5, 
VAR7[VAR3].VAR8, &VAR9, &VAR10 ) )
return( -1 );

VAR4 = VAR7[VAR3].FUN7( VAR2->VAR11, 
VAR2->VAR12, VAR9, VAR10 );
if( VAR4.VAR13 ) {
FUN8( &VAR4 );
return( -1 );
}
}

return( 0 );
}