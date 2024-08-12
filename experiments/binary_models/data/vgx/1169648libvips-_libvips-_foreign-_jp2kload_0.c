int
FUN1( void *VAR1, size_t VAR2, VAR3 **VAR4, ... )
{
va_list VAR5;
VAR6 *VAR7;
int VAR8;


VAR7 = FUN2( NULL, VAR1, VAR2 );

FUN3( VAR5, VAR4 );
VAR8 = FUN4( "", VAR5, VAR7, VAR4 );
FUN5( VAR5 );

FUN6( FUN7( VAR7 ) );

return( VAR8 );
}