VAR1 *
FUN1( void )
{
VAR1 *VAR2;

FUN2( "" );

VAR2 = FUN3(
FUN4( VAR3, NULL ) );

if( FUN5( FUN6( VAR2 ) ) ) {
FUN7( VAR2 );
return( NULL );
}

return( VAR2 ); 
}