FUN1( VAR1 *VAR2, VAR1 *VAR3, const char *VAR4 )
{
int VAR5, VAR6;
VAR1 *VAR7;
double *VAR8;


if( VAR2->VAR9 != VAR3->VAR9 ) {
FUN2( "", "", 
FUN3( "" ) );
return( NULL );
}

VAR5 = VAR2->VAR9;
VAR6 = VAR2->VAR10 + VAR3->VAR10;


if( !(VAR7 = FUN4( VAR4, VAR5, VAR6 )) ) 
return( NULL );


memcpy( VAR7->VAR11, VAR2->VAR11, 
VAR2->VAR9 * VAR2->VAR10 * sizeof( double ) );
VAR8 = VAR7->VAR11 + VAR2->VAR9 * VAR2->VAR10;
memcpy( VAR8, VAR3->VAR11, 
VAR3->VAR9 * VAR3->VAR10 * sizeof( double ) );

return( VAR7 );
}