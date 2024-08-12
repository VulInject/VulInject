static int
FUN1( VAR1 *VAR2, VAR3 *VAR4 )
{
int VAR5;


if( !FUN2( VAR4, VAR6 ) ||
FUN3( VAR4, VAR6, &VAR5 ) ) 
VAR5 = 1;

FUN4( "", VAR5 );

FUN5( VAR2, 0, VAR7, 
VAR8, (void *) &VAR5 );

return( 0 );
}